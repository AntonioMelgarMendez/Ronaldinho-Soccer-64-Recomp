#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004DCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DCB0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004DCB4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8004DCB8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8004DCBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004DCC0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8004DCC4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8004DCC8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8004DCCC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004DCD0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8004DCD4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8004DCD8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x8004DCDC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004DCE0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004DCE4: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8004DCE8: addu        $t0, $a2, $t7
    ctx->r8 = ADD32(ctx->r6, ctx->r15);
    // 0x8004DCEC: lbu         $v1, 0x308($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X308);
    // 0x8004DCF0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004DCF4: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x8004DCF8: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DCFC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DD00: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DD04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DD08: addu        $v0, $a2, $t1
    ctx->r2 = ADD32(ctx->r6, ctx->r9);
    // 0x8004DD0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004DD10: jr          $ra
    // 0x8004DD14: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    return;
    // 0x8004DD14: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
;}
RECOMP_FUNC void func_8004DD18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DD18: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004DD1C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004DD20: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8004DD24: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004DD28: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004DD2C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8004DD30: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8004DD34: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DD38: lbu         $v1, -0x3292($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3292);
    // 0x8004DD3C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DD40: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DD44: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004DD48: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x8004DD4C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DD50: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DD54: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DD58: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DD5C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DD60: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DD64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DD68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DD6C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8004DD70: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004DD74: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x8004DD78: addiu       $t3, $t2, 0x28
    ctx->r11 = ADD32(ctx->r10, 0X28);
    // 0x8004DD7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004DD80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004DD84: jr          $ra
    // 0x8004DD88: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    return;
    // 0x8004DD88: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
;}
RECOMP_FUNC void func_8004DDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DDD0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004DDD4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004DDD8: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8004DDDC: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004DDE0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004DDE4: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8004DDE8: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8004DDEC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DDF0: lbu         $v1, -0x3292($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3292);
    // 0x8004DDF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DDF8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DDFC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004DE00: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x8004DE04: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DE08: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DE0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DE10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DE14: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004DE18: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004DE1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004DE20: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004DE24: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8004DE28: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8004DE2C: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x8004DE30: addiu       $t3, $t2, 0x28
    ctx->r11 = ADD32(ctx->r10, 0X28);
    // 0x8004DE34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004DE38: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004DE3C: jr          $ra
    // 0x8004DE40: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    return;
    // 0x8004DE40: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
;}
RECOMP_FUNC void func_8004DE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DE44: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8004DE48: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004DE4C: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x8004DE50: slti        $at, $t6, 0x13
    ctx->r1 = SIGNED(ctx->r14) < 0X13 ? 1 : 0;
    // 0x8004DE54: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8004DE58: bne         $at, $zero, L_8004DE6C
    if (ctx->r1 != 0) {
        // 0x8004DE5C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_8004DE6C;
    }
    // 0x8004DE5C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8004DE60: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8004DE64: bne         $t6, $at, L_8004DE7C
    if (ctx->r14 != ctx->r1) {
        // 0x8004DE68: addiu       $t9, $v0, -0x13
        ctx->r25 = ADD32(ctx->r2, -0X13);
            goto L_8004DE7C;
    }
    // 0x8004DE68: addiu       $t9, $v0, -0x13
    ctx->r25 = ADD32(ctx->r2, -0X13);
L_8004DE6C:
    // 0x8004DE6C: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x8004DE70: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8004DE74: b           L_8004DF64
    // 0x8004DE78: sb          $t8, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r24;
        goto L_8004DF64;
    // 0x8004DE78: sb          $t8, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r24;
L_8004DE7C:
    // 0x8004DE7C: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x8004DE80: beq         $at, $zero, L_8004DF64
    if (ctx->r1 == 0) {
        // 0x8004DE84: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8004DF64;
    }
    // 0x8004DE84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004DE88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DE8C: addu        $at, $at, $t9
    gpr jr_addend_8004DE98 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8004DE90: lw          $t9, 0x7D14($at)
    ctx->r25 = ADD32(ctx->r1, 0X7D14);
    // 0x8004DE94: nop

    // 0x8004DE98: jr          $t9
    // 0x8004DE9C: nop

    switch (jr_addend_8004DE98 >> 2) {
        case 0: goto L_8004DEA0; break;
        case 1: goto L_8004DEB4; break;
        case 2: goto L_8004DF64; break;
        case 3: goto L_8004DEC8; break;
        case 4: goto L_8004DEDC; break;
        case 5: goto L_8004DEF0; break;
        case 6: goto L_8004DF04; break;
        case 7: goto L_8004DF2C; break;
        case 8: goto L_8004DF18; break;
        case 9: goto L_8004DF40; break;
        case 10: goto L_8004DF54; break;
        default: switch_error(__func__, 0x8004DE98, 0x800D7D14);
    }
    // 0x8004DE9C: nop

L_8004DEA0:
    // 0x8004DEA0: lbu         $t0, 0x13($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X13);
    // 0x8004DEA4: nop

    // 0x8004DEA8: andi        $t1, $t0, 0x3F
    ctx->r9 = ctx->r8 & 0X3F;
    // 0x8004DEAC: b           L_8004DF64
    // 0x8004DEB0: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
        goto L_8004DF64;
    // 0x8004DEB0: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
L_8004DEB4:
    // 0x8004DEB4: lbu         $t2, 0x13($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X13);
    // 0x8004DEB8: nop

    // 0x8004DEBC: sra         $t3, $t2, 6
    ctx->r11 = S32(SIGNED(ctx->r10) >> 6);
    // 0x8004DEC0: b           L_8004DF64
    // 0x8004DEC4: sb          $t3, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r11;
        goto L_8004DF64;
    // 0x8004DEC4: sb          $t3, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r11;
L_8004DEC8:
    // 0x8004DEC8: lbu         $t4, 0x15($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X15);
    // 0x8004DECC: nop

    // 0x8004DED0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x8004DED4: b           L_8004DF64
    // 0x8004DED8: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
        goto L_8004DF64;
    // 0x8004DED8: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_8004DEDC:
    // 0x8004DEDC: lbu         $t6, 0x15($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X15);
    // 0x8004DEE0: nop

    // 0x8004DEE4: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8004DEE8: b           L_8004DF64
    // 0x8004DEEC: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
        goto L_8004DF64;
    // 0x8004DEEC: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
L_8004DEF0:
    // 0x8004DEF0: lbu         $t8, 0x16($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X16);
    // 0x8004DEF4: nop

    // 0x8004DEF8: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x8004DEFC: b           L_8004DF64
    // 0x8004DF00: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
        goto L_8004DF64;
    // 0x8004DF00: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
L_8004DF04:
    // 0x8004DF04: lbu         $t0, 0x16($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X16);
    // 0x8004DF08: nop

    // 0x8004DF0C: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x8004DF10: b           L_8004DF64
    // 0x8004DF14: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
        goto L_8004DF64;
    // 0x8004DF14: sb          $t1, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r9;
L_8004DF18:
    // 0x8004DF18: lbu         $t2, 0x17($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X17);
    // 0x8004DF1C: nop

    // 0x8004DF20: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x8004DF24: b           L_8004DF64
    // 0x8004DF28: sb          $t3, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r11;
        goto L_8004DF64;
    // 0x8004DF28: sb          $t3, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r11;
L_8004DF2C:
    // 0x8004DF2C: lbu         $t4, 0x17($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X17);
    // 0x8004DF30: nop

    // 0x8004DF34: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x8004DF38: b           L_8004DF64
    // 0x8004DF3C: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
        goto L_8004DF64;
    // 0x8004DF3C: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
L_8004DF40:
    // 0x8004DF40: lbu         $t6, 0x18($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X18);
    // 0x8004DF44: nop

    // 0x8004DF48: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8004DF4C: b           L_8004DF64
    // 0x8004DF50: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
        goto L_8004DF64;
    // 0x8004DF50: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
L_8004DF54:
    // 0x8004DF54: lbu         $t8, 0x18($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X18);
    // 0x8004DF58: nop

    // 0x8004DF5C: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8004DF60: sb          $t9, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r25;
L_8004DF64:
    // 0x8004DF64: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x8004DF68: jr          $ra
    // 0x8004DF6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8004DF6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8004DF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DF70: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004DF74: lbu         $t6, -0x3088($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3088);
    // 0x8004DF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004DF7C: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8004DF80: beq         $at, $zero, L_8004DFB8
    if (ctx->r1 == 0) {
        // 0x8004DF84: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8004DFB8;
    }
    // 0x8004DF84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004DF88: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DF8C: addu        $at, $at, $t6
    gpr jr_addend_8004DF98 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004DF90: lw          $t6, 0x7D40($at)
    ctx->r14 = ADD32(ctx->r1, 0X7D40);
    // 0x8004DF94: nop

    // 0x8004DF98: jr          $t6
    // 0x8004DF9C: nop

    switch (jr_addend_8004DF98 >> 2) {
        case 0: goto L_8004DFA0; break;
        case 1: goto L_8004DFA0; break;
        case 2: goto L_8004DFA0; break;
        case 3: goto L_8004DFA0; break;
        case 4: goto L_8004DFA8; break;
        case 5: goto L_8004DFA8; break;
        case 6: goto L_8004DFA8; break;
        case 7: goto L_8004DFA8; break;
        case 8: goto L_8004DFB0; break;
        default: switch_error(__func__, 0x8004DF98, 0x800D7D40);
    }
    // 0x8004DF9C: nop

L_8004DFA0:
    // 0x8004DFA0: jr          $ra
    // 0x8004DFA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004DFA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004DFA8:
    // 0x8004DFA8: jr          $ra
    // 0x8004DFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004DFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004DFB0:
    // 0x8004DFB0: jr          $ra
    // 0x8004DFB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8004DFB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8004DFB8:
    // 0x8004DFB8: jr          $ra
    // 0x8004DFBC: nop

    return;
    // 0x8004DFBC: nop

;}
RECOMP_FUNC void func_8004DFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004DFC0: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8004DFC4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8004DFC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004DFCC: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004DFD0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8004DFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004DFD8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8004DFDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8004DFE0:
    // 0x8004DFE0: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DFE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004DFE8: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8004DFEC: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8004DFF0: mflo        $t6
    ctx->r14 = lo;
    // 0x8004DFF4: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8004DFF8: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x8004DFFC: lhu         $t9, 0x9A8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X9A8);
    // 0x8004E000: nop

    // 0x8004E004: bne         $a0, $t9, L_8004E01C
    if (ctx->r4 != ctx->r25) {
        // 0x8004E008: nop
    
            goto L_8004E01C;
    }
    // 0x8004E008: nop

    // 0x8004E00C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004E010: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x8004E014: b           L_8004E024
    // 0x8004E018: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_8004E024;
    // 0x8004E018: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_8004E01C:
    // 0x8004E01C: jr          $ra
    // 0x8004E020: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004E020: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8004E024:
    // 0x8004E024: bne         $at, $zero, L_8004DFE0
    if (ctx->r1 != 0) {
        // 0x8004E028: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_8004DFE0;
    }
    // 0x8004E028: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8004E02C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8004E030: jr          $ra
    // 0x8004E034: nop

    return;
    // 0x8004E034: nop

;}
RECOMP_FUNC void func_8004E168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E168: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004E16C: jr          $ra
    // 0x8004E170: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8004E170: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004E174: nop

    // 0x8004E178: nop

    // 0x8004E17C: nop

;}
RECOMP_FUNC void func_8004E180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E180: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8004E184: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004E188: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x8004E18C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8004E190: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004E194: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8004E198: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8004E19C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8004E1A0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8004E1A4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8004E1A8: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8004E1AC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8004E1B0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8004E1B4: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8004E1B8: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x8004E1BC: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8004E1C0: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x8004E1C4: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004E1C8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8004E1CC: beq         $t6, $at, L_8004E4A4
    if (ctx->r14 == ctx->r1) {
        // 0x8004E1D0: addiu       $s0, $s0, -0x548C
        ctx->r16 = ADD32(ctx->r16, -0X548C);
            goto L_8004E4A4;
    }
    // 0x8004E1D0: addiu       $s0, $s0, -0x548C
    ctx->r16 = ADD32(ctx->r16, -0X548C);
    // 0x8004E1D4: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x8004E1D8: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x8004E1DC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8004E1E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004E1E4: lhu         $v0, 0xBE($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0XBE);
    // 0x8004E1E8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004E1EC: beq         $v0, $at, L_8004E1FC
    if (ctx->r2 == ctx->r1) {
        // 0x8004E1F0: addiu       $s6, $zero, 0x5
        ctx->r22 = ADD32(0, 0X5);
            goto L_8004E1FC;
    }
    // 0x8004E1F0: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8004E1F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004E1F8: bne         $v0, $at, L_8004E4A4
    if (ctx->r2 != ctx->r1) {
        // 0x8004E1FC: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_8004E4A4;
    }
L_8004E1FC:
    // 0x8004E1FC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8004E200: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8004E204: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E208: lwc1        $f23, -0x6F80($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X6F80);
    // 0x8004E20C: lwc1        $f22, -0x6F7C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6F7C);
    // 0x8004E210: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E214: lwc1        $f21, -0x6F78($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6F78);
    // 0x8004E218: lwc1        $f20, -0x6F74($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6F74);
    // 0x8004E21C: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
    // 0x8004E220: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x8004E224: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
L_8004E228:
    // 0x8004E228: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004E22C: nop

    // 0x8004E230: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004E234: nop

    // 0x8004E238: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x8004E23C: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8004E240: nop

    // 0x8004E244: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x8004E248: lwc1        $f8, 0x4C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004E24C: nop

    // 0x8004E250: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x8004E254: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E258: nop

    // 0x8004E25C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x8004E260: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004E264: nop

    // 0x8004E268: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x8004E26C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004E270: nop

    // 0x8004E274: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x8004E278: lh          $t1, 0x6($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X6);
    // 0x8004E27C: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x8004E280: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8004E284: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8004E288: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004E28C: lh          $t9, 0x2($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2);
    // 0x8004E290: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8004E294: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004E298: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8004E29C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8004E2A0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8004E2A4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8004E2A8: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x8004E2AC: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8004E2B0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8004E2B4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8004E2B8: jal         0x802758B4
    // 0x8004E2BC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(0x802758B4)(rdram, ctx);
        goto after_0;
    // 0x8004E2BC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x8004E2C0: beq         $v0, $zero, L_8004E498
    if (ctx->r2 == 0) {
        // 0x8004E2C4: nop
    
            goto L_8004E498;
    }
    // 0x8004E2C4: nop

    // 0x8004E2C8: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8004E2CC: nop

    // 0x8004E2D0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x8004E2D4: nop

    // 0x8004E2D8: bc1t        L_8004E498
    if (c1cs) {
        // 0x8004E2DC: nop
    
            goto L_8004E498;
    }
    // 0x8004E2DC: nop

    // 0x8004E2E0: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8004E2E4: c.lt.d      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.d < ctx->f20.d;
    // 0x8004E2E8: nop

    // 0x8004E2EC: bc1t        L_8004E498
    if (c1cs) {
        // 0x8004E2F0: nop
    
            goto L_8004E498;
    }
    // 0x8004E2F0: nop

    // 0x8004E2F4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8004E2F8: nop

    // 0x8004E2FC: bne         $v0, $zero, L_8004E354
    if (ctx->r2 != 0) {
        // 0x8004E300: nop
    
            goto L_8004E354;
    }
    // 0x8004E300: nop

    // 0x8004E304: lh          $t2, 0x8($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X8);
    // 0x8004E308: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8004E30C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8004E310: nop

    // 0x8004E314: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004E318: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8004E31C: nop

    // 0x8004E320: bc1t        L_8004E498
    if (c1cs) {
        // 0x8004E324: nop
    
            goto L_8004E498;
    }
    // 0x8004E324: nop

    // 0x8004E328: lh          $t3, 0xA($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XA);
    // 0x8004E32C: nop

    // 0x8004E330: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8004E334: nop

    // 0x8004E338: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004E33C: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x8004E340: nop

    // 0x8004E344: bc1f        L_8004E39C
    if (!c1cs) {
        // 0x8004E348: nop
    
            goto L_8004E39C;
    }
    // 0x8004E348: nop

    // 0x8004E34C: b           L_8004E49C
    // 0x8004E350: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004E49C;
    // 0x8004E350: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004E354:
    // 0x8004E354: lh          $t4, 0x8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8);
    // 0x8004E358: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004E35C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8004E360: nop

    // 0x8004E364: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004E368: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x8004E36C: nop

    // 0x8004E370: bc1t        L_8004E498
    if (c1cs) {
        // 0x8004E374: nop
    
            goto L_8004E498;
    }
    // 0x8004E374: nop

    // 0x8004E378: lh          $t5, 0xA($s0)
    ctx->r13 = MEM_H(ctx->r16, 0XA);
    // 0x8004E37C: nop

    // 0x8004E380: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8004E384: nop

    // 0x8004E388: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004E38C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8004E390: nop

    // 0x8004E394: bc1t        L_8004E498
    if (c1cs) {
        // 0x8004E398: nop
    
            goto L_8004E498;
    }
    // 0x8004E398: nop

L_8004E39C:
    // 0x8004E39C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8004E3A0: nop

    // 0x8004E3A4: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8004E3A8: nop

    // 0x8004E3AC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8004E3B0: c.le.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d <= ctx->f4.d;
    // 0x8004E3B4: nop

    // 0x8004E3B8: bc1f        L_8004E498
    if (!c1cs) {
        // 0x8004E3BC: nop
    
            goto L_8004E498;
    }
    // 0x8004E3BC: nop

    // 0x8004E3C0: bne         $v0, $zero, L_8004E408
    if (ctx->r2 != 0) {
        // 0x8004E3C4: nop
    
            goto L_8004E408;
    }
    // 0x8004E3C4: nop

    // 0x8004E3C8: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004E3CC: lwc1        $f14, 0x80($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004E3D0: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x8004E3D4: jal         0x802780E0
    // 0x8004E3D8: nop

    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_1;
    // 0x8004E3D8: nop

    after_1:
    // 0x8004E3DC: beq         $v0, $zero, L_8004E498
    if (ctx->r2 == 0) {
        // 0x8004E3E0: nop
    
            goto L_8004E498;
    }
    // 0x8004E3E0: nop

    // 0x8004E3E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004E3E8: nop

    // 0x8004E3EC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E3F0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004E3F4: jal         0x8001C5D0
    // 0x8004E3F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x8004E3F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x8004E3FC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8004E400: b           L_8004E448
    // 0x8004E404: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
        goto L_8004E448;
    // 0x8004E404: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
L_8004E408:
    // 0x8004E408: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8004E40C: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004E410: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x8004E414: jal         0x802780E0
    // 0x8004E418: nop

    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_3;
    // 0x8004E418: nop

    after_3:
    // 0x8004E41C: beq         $v0, $zero, L_8004E498
    if (ctx->r2 == 0) {
        // 0x8004E420: nop
    
            goto L_8004E498;
    }
    // 0x8004E420: nop

    // 0x8004E424: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004E428: nop

    // 0x8004E42C: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004E430: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E434: jal         0x8001C5D0
    // 0x8004E438: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_8001C5D0(rdram, ctx);
        goto after_4;
    // 0x8004E438: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x8004E43C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8004E440: nop

    // 0x8004E444: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
L_8004E448:
    // 0x8004E448: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004E44C: nop

    // 0x8004E450: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004E454: nop

    // 0x8004E458: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8004E45C: mul.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x8004E460: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8004E464: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x8004E468: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8004E46C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004E470: nop

    // 0x8004E474: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x8004E478: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8004E47C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8004E480: nop

    // 0x8004E484: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x8004E488: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8004E48C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8004E490: nop

    // 0x8004E494: swc1        $f6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f6.u32l;
L_8004E498:
    // 0x8004E498: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004E49C:
    // 0x8004E49C: bne         $s2, $s6, L_8004E228
    if (ctx->r18 != ctx->r22) {
        // 0x8004E4A0: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004E228;
    }
    // 0x8004E4A0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_8004E4A4:
    // 0x8004E4A4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8004E4A8: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8004E4AC: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004E4B0: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8004E4B4: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004E4B8: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8004E4BC: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004E4C0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8004E4C4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8004E4C8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8004E4CC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8004E4D0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8004E4D4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8004E4D8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8004E4DC: jr          $ra
    // 0x8004E4E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8004E4E0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8004E4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E4E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004E4E8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004E4EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E4F0: lh          $v1, 0xD4($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XD4);
    // 0x8004E4F4: nop

    // 0x8004E4F8: bne         $v1, $zero, L_8004E5A8
    if (ctx->r3 != 0) {
        // 0x8004E4FC: nop
    
            goto L_8004E5A8;
    }
    // 0x8004E4FC: nop

    // 0x8004E500: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8004E504: lwc1        $f4, -0x6F70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6F70);
    // 0x8004E508: ori         $t6, $v1, 0x2
    ctx->r14 = ctx->r3 | 0X2;
    // 0x8004E50C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8004E510: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E514: bc1f        L_8004E528
    if (!c1cs) {
        // 0x8004E518: nop
    
            goto L_8004E528;
    }
    // 0x8004E518: nop

    // 0x8004E51C: sh          $t6, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r14;
    // 0x8004E520: jr          $ra
    // 0x8004E524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004E524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E528:
    // 0x8004E528: lwc1        $f6, -0x6F6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F6C);
    // 0x8004E52C: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x8004E530: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8004E534: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E538: bc1f        L_8004E54C
    if (!c1cs) {
        // 0x8004E53C: nop
    
            goto L_8004E54C;
    }
    // 0x8004E53C: nop

    // 0x8004E540: sh          $t7, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r15;
    // 0x8004E544: jr          $ra
    // 0x8004E548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004E548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E54C:
    // 0x8004E54C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004E550: lwc1        $f8, -0x6F68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6F68);
    // 0x8004E554: ori         $t8, $v1, 0x4
    ctx->r24 = ctx->r3 | 0X4;
    // 0x8004E558: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8004E55C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E560: bc1f        L_8004E574
    if (!c1cs) {
        // 0x8004E564: nop
    
            goto L_8004E574;
    }
    // 0x8004E564: nop

    // 0x8004E568: sh          $t8, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r24;
    // 0x8004E56C: jr          $ra
    // 0x8004E570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004E570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E574:
    // 0x8004E574: lwc1        $f10, -0x6F64($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6F64);
    // 0x8004E578: ori         $t9, $v1, 0x8
    ctx->r25 = ctx->r3 | 0X8;
    // 0x8004E57C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8004E580: nop

    // 0x8004E584: bc1f        L_8004E598
    if (!c1cs) {
        // 0x8004E588: nop
    
            goto L_8004E598;
    }
    // 0x8004E588: nop

    // 0x8004E58C: sh          $t9, 0xD4($v0)
    MEM_H(0XD4, ctx->r2) = ctx->r25;
    // 0x8004E590: jr          $ra
    // 0x8004E594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004E594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E598:
    // 0x8004E598: jr          $ra
    // 0x8004E59C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004E59C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004E5A0: jr          $ra
    // 0x8004E5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004E5A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004E5A8:
    // 0x8004E5A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004E5AC: jr          $ra
    // 0x8004E5B0: nop

    return;
    // 0x8004E5B0: nop

;}
RECOMP_FUNC void func_8004E5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E5B4: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x8004E5B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004E5BC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8004E5C0: addiu       $s2, $s2, 0x3B20
    ctx->r18 = ADD32(ctx->r18, 0X3B20);
    // 0x8004E5C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8004E5C8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004E5CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004E5D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004E5D4: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x8004E5D8: addiu       $s5, $sp, 0x3C
    ctx->r21 = ADD32(ctx->r29, 0X3C);
    // 0x8004E5DC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8004E5E0: addiu       $s3, $s3, 0x3670
    ctx->r19 = ADD32(ctx->r19, 0X3670);
    // 0x8004E5E4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004E5E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8004E5EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004E5F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004E5F4: addiu       $s0, $s0, 0x680
    ctx->r16 = ADD32(ctx->r16, 0X680);
    // 0x8004E5F8: or          $t0, $s5, $zero
    ctx->r8 = ctx->r21 | 0;
    // 0x8004E5FC: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x8004E600: addiu       $t8, $v0, 0xE4
    ctx->r24 = ADD32(ctx->r2, 0XE4);
L_8004E604:
    // 0x8004E604: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8004E608: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8004E60C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8004E610: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8004E614: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8004E618: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x8004E61C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8004E620: bne         $t9, $t8, L_8004E604
    if (ctx->r25 != ctx->r24) {
        // 0x8004E624: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_8004E604;
    }
    // 0x8004E624: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x8004E628: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8004E62C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004E630: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x8004E634: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x8004E638: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x8004E63C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8004E640: sh          $zero, 0xD6($v0)
    MEM_H(0XD6, ctx->r2) = 0;
    // 0x8004E644: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x8004E648: addiu       $s6, $s6, -0x54D8
    ctx->r22 = ADD32(ctx->r22, -0X54D8);
    // 0x8004E64C: sh          $zero, 0xD4($t1)
    MEM_H(0XD4, ctx->r9) = 0;
    // 0x8004E650: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x8004E654: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
    // 0x8004E658: lw          $t3, 0x84($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X84);
    // 0x8004E65C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004E660: beq         $t3, $zero, L_8004E6F8
    if (ctx->r11 == 0) {
        // 0x8004E664: addiu       $s4, $zero, 0x3C
        ctx->r20 = ADD32(0, 0X3C);
            goto L_8004E6F8;
    }
    // 0x8004E664: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
    // 0x8004E668: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004E66C: addiu       $s4, $zero, 0x3C
    ctx->r20 = ADD32(0, 0X3C);
L_8004E670:
    // 0x8004E670: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004E674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004E678: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8004E67C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004E680: nop

    // 0x8004E684: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8004E688: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004E68C: nop

    // 0x8004E690: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x8004E694: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8004E698: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004E69C: lw          $t4, 0x84($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X84);
    // 0x8004E6A0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004E6A4: lwc1        $f18, 0x70($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X70);
    // 0x8004E6A8: nop

    // 0x8004E6AC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8004E6B0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8004E6B4: lw          $t5, 0x84($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X84);
    // 0x8004E6B8: nop

    // 0x8004E6BC: lwc1        $f8, 0x78($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X78);
    // 0x8004E6C0: nop

    // 0x8004E6C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004E6C8: jal         0x8004E4E4
    // 0x8004E6CC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    func_8004E4E4(rdram, ctx);
        goto after_0;
    // 0x8004E6CC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8004E6D0: beq         $v0, $zero, L_8004E6E4
    if (ctx->r2 == 0) {
        // 0x8004E6D4: nop
    
            goto L_8004E6E4;
    }
    // 0x8004E6D4: nop

    // 0x8004E6D8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8004E6DC: addiu       $t7, $s1, -0x1
    ctx->r15 = ADD32(ctx->r17, -0X1);
    // 0x8004E6E0: sh          $t7, 0xD6($t6)
    MEM_H(0XD6, ctx->r14) = ctx->r15;
L_8004E6E4:
    // 0x8004E6E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004E6E8: bne         $s1, $s4, L_8004E670
    if (ctx->r17 != ctx->r20) {
        // 0x8004E6EC: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004E670;
    }
    // 0x8004E6EC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004E6F0: b           L_8004E78C
    // 0x8004E6F4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
        goto L_8004E78C;
    // 0x8004E6F4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8004E6F8:
    // 0x8004E6F8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004E6FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8004E700: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x8004E704: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004E708: nop

    // 0x8004E70C: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x8004E710: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004E714: nop

    // 0x8004E718: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8004E71C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x8004E720: nop

    // 0x8004E724: lhu         $t9, 0xBE($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XBE);
    // 0x8004E728: nop

    // 0x8004E72C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8004E730: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x8004E734: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x8004E738: nop

    // 0x8004E73C: jalr        $t9
    // 0x8004E740: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8004E740: nop

    after_1:
    // 0x8004E744: jal         0x8004E4E4
    // 0x8004E748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004E4E4(rdram, ctx);
        goto after_2;
    // 0x8004E748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8004E74C: beq         $v0, $zero, L_8004E760
    if (ctx->r2 == 0) {
        // 0x8004E750: nop
    
            goto L_8004E760;
    }
    // 0x8004E750: nop

    // 0x8004E754: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8004E758: addiu       $t2, $s1, -0x1
    ctx->r10 = ADD32(ctx->r17, -0X1);
    // 0x8004E75C: sh          $t2, 0xD6($t3)
    MEM_H(0XD6, ctx->r11) = ctx->r10;
L_8004E760:
    // 0x8004E760: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004E764: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8004E768: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004E76C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8004E770: nop

    // 0x8004E774: bc1f        L_8004E780
    if (!c1cs) {
        // 0x8004E778: nop
    
            goto L_8004E780;
    }
    // 0x8004E778: nop

    // 0x8004E77C: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
L_8004E780:
    // 0x8004E780: bne         $s1, $s4, L_8004E6F8
    if (ctx->r17 != ctx->r20) {
        // 0x8004E784: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_8004E6F8;
    }
    // 0x8004E784: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8004E788: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
L_8004E78C:
    // 0x8004E78C: nop

    // 0x8004E790: lh          $t4, 0xD6($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XD6);
    // 0x8004E794: nop

    // 0x8004E798: bgez        $t4, L_8004E7A8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8004E79C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8004E7A8;
    }
    // 0x8004E79C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004E7A0: sh          $zero, 0xD6($v0)
    MEM_H(0XD6, ctx->r2) = 0;
    // 0x8004E7A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8004E7A8:
    // 0x8004E7A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004E7AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004E7B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004E7B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004E7B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004E7BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8004E7C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004E7C4: jr          $ra
    // 0x8004E7C8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    // 0x8004E7C8: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_8004E7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E7CC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004E7D0: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8004E7D4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8004E7D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E7DC: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004E7E0: lwc1        $f1, -0x6F60($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6F60);
    // 0x8004E7E4: lwc1        $f0, -0x6F5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6F5C);
    // 0x8004E7E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8004E7EC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8004E7F0: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004E7F4: lh          $t2, 0xE2($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XE2);
    // 0x8004E7F8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8004E7FC: nop

    // 0x8004E800: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8004E804: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004E808: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004E80C: nop

    // 0x8004E810: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8004E814: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8004E818: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8004E81C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8004E820: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8004E824: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8004E828: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8004E82C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8004E830: nop

    // 0x8004E834: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8004E838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8004E83C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004E840: nop

    // 0x8004E844: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8004E848: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x8004E84C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8004E850: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8004E854: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004E858: bne         $v0, $t2, L_8004E870
    if (ctx->r2 != ctx->r10) {
        // 0x8004E85C: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_8004E870;
    }
    // 0x8004E85C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8004E860: lh          $t3, 0xE4($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XE4);
    // 0x8004E864: nop

    // 0x8004E868: beq         $t1, $t3, L_8004E878
    if (ctx->r9 == ctx->r11) {
        // 0x8004E86C: nop
    
            goto L_8004E878;
    }
    // 0x8004E86C: nop

L_8004E870:
    // 0x8004E870: b           L_8004E888
    // 0x8004E874: sh          $zero, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = 0;
        goto L_8004E888;
    // 0x8004E874: sh          $zero, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = 0;
L_8004E878:
    // 0x8004E878: lhu         $t4, 0xE6($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XE6);
    // 0x8004E87C: nop

    // 0x8004E880: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8004E884: sh          $t5, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = ctx->r13;
L_8004E888:
    // 0x8004E888: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8004E88C: nop

    // 0x8004E890: sh          $v0, 0xE2($t6)
    MEM_H(0XE2, ctx->r14) = ctx->r2;
    // 0x8004E894: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8004E898: jr          $ra
    // 0x8004E89C: sh          $a0, 0xE4($t7)
    MEM_H(0XE4, ctx->r15) = ctx->r4;
    return;
    // 0x8004E89C: sh          $a0, 0xE4($t7)
    MEM_H(0XE4, ctx->r15) = ctx->r4;
;}
RECOMP_FUNC void func_8004E8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E8A0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8004E8A4: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8004E8A8: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x8004E8AC: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004E8B0: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004E8B4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004E8B8: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004E8BC: swc1        $f12, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f12.u32l;
    // 0x8004E8C0: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x8004E8C4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004E8C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004E8CC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004E8D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004E8D4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x8004E8D8: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x8004E8DC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x8004E8E0: jal         0x8001C5D0
    // 0x8004E8E4: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8004E8E4: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    after_0:
    // 0x8004E8E8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004E8EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8004E8F0: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8004E8F4: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x8004E8F8: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004E8FC: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004E900: bc1f        L_8004E910
    if (!c1cs) {
        // 0x8004E904: swc1        $f0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
            goto L_8004E910;
    }
    // 0x8004E904: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x8004E908: b           L_8004E914
    // 0x8004E90C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_8004E914;
    // 0x8004E90C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
L_8004E910:
    // 0x8004E910: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8004E914:
    // 0x8004E914: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004E918: lwc1        $f3, -0x6F58($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6F58);
    // 0x8004E91C: lwc1        $f2, -0x6F54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6F54);
    // 0x8004E920: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8004E924: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x8004E928: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004E92C: bc1f        L_8004EBAC
    if (!c1cs) {
        // 0x8004E930: nop
    
            goto L_8004EBAC;
    }
    // 0x8004E930: nop

    // 0x8004E934: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004E938: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004E93C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004E940: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004E944: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004E948: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004E94C: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004E950: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004E954: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004E958: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004E95C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004E960: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8004E964: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8004E968: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004E96C: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004E970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004E974: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8004E978: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8004E97C: add.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004E980: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004E984: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004E988: mul.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8004E98C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8004E990: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x8004E994: swc1        $f14, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f14.u32l;
    // 0x8004E998: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8004E99C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x8004E9A0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004E9A4: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x8004E9A8: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8004E9AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004E9B0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004E9B4: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8004E9B8: nop

    // 0x8004E9BC: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8004E9C0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8004E9C4: sub.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8004E9C8: bc1f        L_8004E9D8
    if (!c1cs) {
        // 0x8004E9CC: swc1        $f8, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
            goto L_8004E9D8;
    }
    // 0x8004E9CC: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x8004E9D0: b           L_8004EE08
    // 0x8004E9D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004EE08;
    // 0x8004E9D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004E9D8:
    // 0x8004E9D8: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004E9DC: jal         0x8007FA40
    // 0x8004E9E0: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8004E9E0: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_1:
    // 0x8004E9E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8004E9E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004E9EC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8004E9F0: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8004E9F4: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8004E9F8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8004E9FC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004EA00: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8004EA04: add.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8004EA08: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004EA0C: div.s       $f14, $f10, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8004EA10: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004EA14: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8004EA18: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004EA1C: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004EA20: nop

    // 0x8004EA24: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004EA28: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8004EA2C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x8004EA30: div.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8004EA34: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8004EA38: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004EA3C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004EA40: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8004EA44: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8004EA48: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x8004EA4C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8004EA50: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8004EA54: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8004EA58: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8004EA5C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004EA60: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004EA64: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x8004EA68: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004EA6C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x8004EA70: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8004EA74: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004EA78: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8004EA7C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8004EA80: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004EA84: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8004EA88: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8004EA8C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004EA90: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8004EA94: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8004EA98: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8004EA9C: mul.s       $f6, $f8, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8004EAA0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8004EAA4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004EAA8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004EAAC: nop

    // 0x8004EAB0: mul.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8004EAB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004EAB8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004EABC: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8004EAC0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004EAC4: nop

    // 0x8004EAC8: mul.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8004EACC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004EAD0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8004EAD4: nop

    // 0x8004EAD8: bc1f        L_8004EAE4
    if (!c1cs) {
        // 0x8004EADC: nop
    
            goto L_8004EAE4;
    }
    // 0x8004EADC: nop

    // 0x8004EAE0: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
L_8004EAE4:
    // 0x8004EAE4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8004EAE8: nop

    // 0x8004EAEC: swc1        $f12, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f12.u32l;
    // 0x8004EAF0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004EAF4: nop

    // 0x8004EAF8: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8004EAFC: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8004EB00: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EB04: jal         0x802780E0
    // 0x8004EB08: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_2;
    // 0x8004EB08: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_2:
    // 0x8004EB0C: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004EB10: beq         $v0, $zero, L_8004EB1C
    if (ctx->r2 == 0) {
        // 0x8004EB14: nop
    
            goto L_8004EB1C;
    }
    // 0x8004EB14: nop

    // 0x8004EB18: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004EB1C:
    // 0x8004EB1C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8004EB20: lwc1        $f14, 0x88($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EB24: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8004EB28: jal         0x802780E0
    // 0x8004EB2C: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_3;
    // 0x8004EB2C: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_3:
    // 0x8004EB30: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004EB34: beq         $v0, $zero, L_8004EB5C
    if (ctx->r2 == 0) {
        // 0x8004EB38: nop
    
            goto L_8004EB5C;
    }
    // 0x8004EB38: nop

    // 0x8004EB3C: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x8004EB40: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8004EB44: beq         $t7, $zero, L_8004EB5C
    if (ctx->r15 == 0) {
        // 0x8004EB48: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8004EB5C;
    }
    // 0x8004EB48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004EB4C: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8004EB50: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004EB54: nop

    // 0x8004EB58: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_8004EB5C:
    // 0x8004EB5C: bne         $v1, $zero, L_8004EBA4
    if (ctx->r3 != 0) {
        // 0x8004EB60: nop
    
            goto L_8004EBA4;
    }
    // 0x8004EB60: nop

    // 0x8004EB64: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EB68: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8004EB6C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8004EB70: jal         0x802780E0
    // 0x8004EB74: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_4;
    // 0x8004EB74: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_4:
    // 0x8004EB78: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004EB7C: beq         $v0, $zero, L_8004EBA4
    if (ctx->r2 == 0) {
        // 0x8004EB80: nop
    
            goto L_8004EBA4;
    }
    // 0x8004EB80: nop

    // 0x8004EB84: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x8004EB88: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8004EB8C: beq         $t8, $zero, L_8004EBA4
    if (ctx->r24 == 0) {
        // 0x8004EB90: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8004EBA4;
    }
    // 0x8004EB90: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004EB94: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8004EB98: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004EB9C: nop

    // 0x8004EBA0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_8004EBA4:
    // 0x8004EBA4: b           L_8004EE08
    // 0x8004EBA8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
        goto L_8004EE08;
    // 0x8004EBA8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_8004EBAC:
    // 0x8004EBAC: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8004EBB0: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EBB4: bc1f        L_8004EBC4
    if (!c1cs) {
        // 0x8004EBB8: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8004EBC4;
    }
    // 0x8004EBB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8004EBBC: b           L_8004EBC8
    // 0x8004EBC0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8004EBC8;
    // 0x8004EBC0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8004EBC4:
    // 0x8004EBC4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8004EBC8:
    // 0x8004EBC8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8004EBCC: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x8004EBD0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004EBD4: bc1f        L_8004ED68
    if (!c1cs) {
        // 0x8004EBD8: nop
    
            goto L_8004ED68;
    }
    // 0x8004EBD8: nop

    // 0x8004EBDC: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004EBE0: lwc1        $f16, 0x88($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EBE4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8004EBE8: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x8004EBEC: sub.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x8004EBF0: bc1f        L_8004EBFC
    if (!c1cs) {
        // 0x8004EBF4: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_8004EBFC;
    }
    // 0x8004EBF4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8004EBF8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8004EBFC:
    // 0x8004EBFC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004EC00: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8004EC04: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8004EC08: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8004EC0C: bc1f        L_8004EC1C
    if (!c1cs) {
        // 0x8004EC10: nop
    
            goto L_8004EC1C;
    }
    // 0x8004EC10: nop

    // 0x8004EC14: b           L_8004EE08
    // 0x8004EC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004EE08;
    // 0x8004EC18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004EC1C:
    // 0x8004EC1C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004EC20: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8004EC24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004EC28: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    // 0x8004EC2C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8004EC30: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x8004EC34: jal         0x8007FA40
    // 0x8004EC38: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x8004EC38: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x8004EC3C: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004EC40: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8004EC44: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004EC48: add.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8004EC4C: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004EC50: sub.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8004EC54: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8004EC58: sub.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8004EC5C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x8004EC60: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004EC64: sub.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8004EC68: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    // 0x8004EC6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004EC70: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8004EC74: sub.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x8004EC78: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004EC7C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8004EC80: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8004EC84: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004EC88: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8004EC8C: nop

    // 0x8004EC90: bc1f        L_8004EC9C
    if (!c1cs) {
        // 0x8004EC94: nop
    
            goto L_8004EC9C;
    }
    // 0x8004EC94: nop

    // 0x8004EC98: sh          $t9, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r25;
L_8004EC9C:
    // 0x8004EC9C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004ECA0: nop

    // 0x8004ECA4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8004ECA8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004ECAC: nop

    // 0x8004ECB0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8004ECB4: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8004ECB8: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004ECBC: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004ECC0: jal         0x802780E0
    // 0x8004ECC4: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_6;
    // 0x8004ECC4: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_6:
    // 0x8004ECC8: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004ECCC: beq         $v0, $zero, L_8004ECD8
    if (ctx->r2 == 0) {
        // 0x8004ECD0: nop
    
            goto L_8004ECD8;
    }
    // 0x8004ECD0: nop

    // 0x8004ECD4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004ECD8:
    // 0x8004ECD8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004ECDC: lwc1        $f14, 0x8C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004ECE0: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x8004ECE4: jal         0x802780E0
    // 0x8004ECE8: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_7;
    // 0x8004ECE8: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_7:
    // 0x8004ECEC: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004ECF0: beq         $v0, $zero, L_8004ED18
    if (ctx->r2 == 0) {
        // 0x8004ECF4: nop
    
            goto L_8004ED18;
    }
    // 0x8004ECF4: nop

    // 0x8004ECF8: lh          $t0, 0x3A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3A);
    // 0x8004ECFC: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004ED00: beq         $t0, $zero, L_8004ED18
    if (ctx->r8 == 0) {
        // 0x8004ED04: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8004ED18;
    }
    // 0x8004ED04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004ED08: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8004ED0C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004ED10: nop

    // 0x8004ED14: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_8004ED18:
    // 0x8004ED18: bne         $v1, $zero, L_8004ED60
    if (ctx->r3 != 0) {
        // 0x8004ED1C: nop
    
            goto L_8004ED60;
    }
    // 0x8004ED1C: nop

    // 0x8004ED20: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004ED24: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8004ED28: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8004ED2C: jal         0x802780E0
    // 0x8004ED30: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802780E0)(rdram, ctx);
        goto after_8;
    // 0x8004ED30: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    after_8:
    // 0x8004ED34: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x8004ED38: beq         $v0, $zero, L_8004ED60
    if (ctx->r2 == 0) {
        // 0x8004ED3C: nop
    
            goto L_8004ED60;
    }
    // 0x8004ED3C: nop

    // 0x8004ED40: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x8004ED44: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8004ED48: beq         $t1, $zero, L_8004ED60
    if (ctx->r9 == 0) {
        // 0x8004ED4C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8004ED60;
    }
    // 0x8004ED4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004ED50: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8004ED54: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8004ED58: nop

    // 0x8004ED5C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_8004ED60:
    // 0x8004ED60: b           L_8004EE08
    // 0x8004ED64: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
        goto L_8004EE08;
    // 0x8004ED64: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
L_8004ED68:
    // 0x8004ED68: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8004ED6C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8004ED70: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004ED74: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004ED78: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8004ED7C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8004ED80: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004ED84: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8004ED88: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004ED8C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004ED90: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8004ED94: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x8004ED98: nop

    // 0x8004ED9C: bc1f        L_8004EDAC
    if (!c1cs) {
        // 0x8004EDA0: nop
    
            goto L_8004EDAC;
    }
    // 0x8004EDA0: nop

    // 0x8004EDA4: b           L_8004EE08
    // 0x8004EDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004EE08;
    // 0x8004EDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004EDAC:
    // 0x8004EDAC: jal         0x8001C5D0
    // 0x8004EDB0: nop

    func_8001C5D0(rdram, ctx);
        goto after_9;
    // 0x8004EDB0: nop

    after_9:
    // 0x8004EDB4: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8004EDB8: jal         0x80081040
    // 0x8004EDBC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_10;
    // 0x8004EDBC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_10:
    // 0x8004EDC0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8004EDC4: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8004EDC8: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x8004EDCC: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8004EDD0: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8004EDD4: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x8004EDD8: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x8004EDDC: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8004EDE0: jal         0x80080E80
    // 0x8004EDE4: nop

    func_80080E80(rdram, ctx);
        goto after_11;
    // 0x8004EDE4: nop

    after_11:
    // 0x8004EDE8: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8004EDEC: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8004EDF0: add.d       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f2.d + ctx->f2.d;
    // 0x8004EDF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004EDF8: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x8004EDFC: add.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d + ctx->f8.d;
    // 0x8004EE00: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x8004EE04: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_8004EE08:
    // 0x8004EE08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EE0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004EE10: jr          $ra
    // 0x8004EE14: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8004EE14: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8004EE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004EE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004EE1C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x8004EE20: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x8004EE24: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004EE28: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004EE2C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004EE30: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8004EE34: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004EE38: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8004EE3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004EE40: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004EE44: jal         0x8001C5D0
    // 0x8004EE48: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x8004EE48: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8004EE4C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8004EE50: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x8004EE54: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8004EE58: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8004EE5C: bc1f        L_8004EE6C
    if (!c1cs) {
        // 0x8004EE60: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_8004EE6C;
    }
    // 0x8004EE60: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x8004EE64: b           L_8004EE70
    // 0x8004EE68: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
        goto L_8004EE70;
    // 0x8004EE68: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_8004EE6C:
    // 0x8004EE6C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_8004EE70:
    // 0x8004EE70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004EE74: lwc1        $f15, -0x6F50($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X6F50);
    // 0x8004EE78: lwc1        $f14, -0x6F4C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6F4C);
    // 0x8004EE7C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8004EE80: c.le.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d <= ctx->f18.d;
    // 0x8004EE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004EE88: bc1f        L_8004EED8
    if (!c1cs) {
        // 0x8004EE8C: nop
    
            goto L_8004EED8;
    }
    // 0x8004EE8C: nop

    // 0x8004EE90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004EE94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004EE98: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8004EE9C: nop

    // 0x8004EEA0: bc1f        L_8004EEC4
    if (!c1cs) {
        // 0x8004EEA4: nop
    
            goto L_8004EEC4;
    }
    // 0x8004EEA4: nop

    // 0x8004EEA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004EEAC: lwc1        $f7, -0x6F48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6F48);
    // 0x8004EEB0: lwc1        $f6, -0x6F44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F44);
    // 0x8004EEB4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8004EEB8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8004EEBC: b           L_8004EED8
    // 0x8004EEC0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
        goto L_8004EED8;
    // 0x8004EEC0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
L_8004EEC4:
    // 0x8004EEC4: lwc1        $f5, -0x6F40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6F40);
    // 0x8004EEC8: lwc1        $f4, -0x6F3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6F3C);
    // 0x8004EECC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x8004EED0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8004EED4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_8004EED8:
    // 0x8004EED8: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x8004EEDC: add.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = ctx->f8.d + ctx->f14.d;
    // 0x8004EEE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004EEE4: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x8004EEE8: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x8004EEEC: jr          $ra
    // 0x8004EEF0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8004EEF0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void func_8004EEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004EEF4: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8004EEF8: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8004EEFC: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8004EF00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004EF04: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8004EF08: c.eq.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d == ctx->f8.d;
    // 0x8004EF0C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004EF10: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8004EF14: bc1f        L_8004EF24
    if (!c1cs) {
        // 0x8004EF18: sub.s       $f0, $f12, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
            goto L_8004EF24;
    }
    // 0x8004EF18: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8004EF1C: jr          $ra
    // 0x8004EF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004EF20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004EF24:
    // 0x8004EF24: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8004EF28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004EF2C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8004EF30: lwc1        $f12, 0x14($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004EF34: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8004EF38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004EF3C: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x8004EF40: nop

    // 0x8004EF44: bc1f        L_8004EF90
    if (!c1cs) {
        // 0x8004EF48: nop
    
            goto L_8004EF90;
    }
    // 0x8004EF48: nop

    // 0x8004EF4C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8004EF50: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EF54: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8004EF58: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8004EF5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004EF60: div.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8004EF64: add.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x8004EF68: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8004EF6C: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8004EF70: nop

    // 0x8004EF74: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x8004EF78: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004EF7C: nop

    // 0x8004EF80: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8004EF84: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x8004EF88: jr          $ra
    // 0x8004EF8C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    return;
    // 0x8004EF8C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
L_8004EF90:
    // 0x8004EF90: jr          $ra
    // 0x8004EF94: nop

    return;
    // 0x8004EF94: nop

;}
RECOMP_FUNC void func_8004EF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004EF98: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004EF9C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004EFA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004EFA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004EFA8: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004EFAC: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x8004EFB0: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8004EFB4: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004EFB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8004EFBC: lwc1        $f6, 0x44($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004EFC0: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x8004EFC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8004EFC8: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8004EFCC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004EFD0: jal         0x8004EEF4
    // 0x8004EFD4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8004EEF4(rdram, ctx);
        goto after_0;
    // 0x8004EFD4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8004EFD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004EFDC: beq         $v0, $zero, L_8004F038
    if (ctx->r2 == 0) {
        // 0x8004EFE0: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8004F038;
    }
    // 0x8004EFE0: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004EFE4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004EFE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004EFEC: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8004EFF0: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8004EFF4: nop

    // 0x8004EFF8: bc1f        L_8004F03C
    if (!c1cs) {
        // 0x8004EFFC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F03C;
    }
    // 0x8004EFFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F000: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004F004: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004F008: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x8004F00C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F010: bc1f        L_8004F03C
    if (!c1cs) {
        // 0x8004F014: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F03C;
    }
    // 0x8004F014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F018: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004F01C: nop

    // 0x8004F020: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8004F024: nop

    // 0x8004F028: bc1f        L_8004F03C
    if (!c1cs) {
        // 0x8004F02C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F03C;
    }
    // 0x8004F02C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F030: b           L_8004F03C
    // 0x8004F034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F03C;
    // 0x8004F034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F038:
    // 0x8004F038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F03C:
    // 0x8004F03C: jr          $ra
    // 0x8004F040: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004F040: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004F044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F044: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004F048: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004F04C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F050: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004F054: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004F058: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x8004F05C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8004F060: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F064: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8004F068: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004F06C: nop

    // 0x8004F070: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8004F074: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8004F078: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004F07C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004F080: jal         0x8004EEF4
    // 0x8004F084: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8004EEF4(rdram, ctx);
        goto after_0;
    // 0x8004F084: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8004F088: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8004F08C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004F090: beq         $v0, $zero, L_8004F1BC
    if (ctx->r2 == 0) {
        // 0x8004F094: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_8004F1BC;
    }
    // 0x8004F094: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004F098: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8004F09C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F0A0: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8004F0A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F0A8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8004F0AC: nop

    // 0x8004F0B0: bc1f        L_8004F134
    if (!c1cs) {
        // 0x8004F0B4: nop
    
            goto L_8004F134;
    }
    // 0x8004F0B4: nop

    // 0x8004F0B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F0BC: lwc1        $f18, -0x6F38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6F38);
    // 0x8004F0C0: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004F0C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F0C8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8004F0CC: nop

    // 0x8004F0D0: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F0D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F0D8: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004F0DC: lwc1        $f5, -0x6F30($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6F30);
    // 0x8004F0E0: lwc1        $f4, -0x6F2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6F2C);
    // 0x8004F0E4: lui         $at, 0x400A
    ctx->r1 = S32(0X400A << 16);
    // 0x8004F0E8: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8004F0EC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004F0F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F0F4: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8004F0F8: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F0FC: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8004F100: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8004F104: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x8004F108: nop

    // 0x8004F10C: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F110: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F114: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F118: nop

    // 0x8004F11C: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x8004F120: nop

    // 0x8004F124: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F128: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F128: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F12C: b           L_8004F1C0
    // 0x8004F130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1C0;
    // 0x8004F130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F134:
    // 0x8004F134: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8004F138: lwc1        $f6, -0x6F28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F28);
    // 0x8004F13C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F140: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8004F144: nop

    // 0x8004F148: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F14C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F14C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F150: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8004F154: lwc1        $f17, -0x6F20($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6F20);
    // 0x8004F158: lwc1        $f16, -0x6F1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6F1C);
    // 0x8004F15C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F160: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8004F164: lwc1        $f5, -0x6F18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6F18);
    // 0x8004F168: lwc1        $f4, -0x6F14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6F14);
    // 0x8004F16C: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8004F170: lui         $at, 0x400A
    ctx->r1 = S32(0X400A << 16);
    // 0x8004F174: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004F178: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F17C: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x8004F180: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F184: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x8004F188: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8004F18C: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x8004F190: nop

    // 0x8004F194: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F198: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F198: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F19C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004F1A0: nop

    // 0x8004F1A4: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x8004F1A8: nop

    // 0x8004F1AC: bc1f        L_8004F1C0
    if (!c1cs) {
        // 0x8004F1B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F1C0;
    }
    // 0x8004F1B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F1B4: b           L_8004F1C0
    // 0x8004F1B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1C0;
    // 0x8004F1B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F1BC:
    // 0x8004F1BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F1C0:
    // 0x8004F1C0: jr          $ra
    // 0x8004F1C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004F1C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F1C8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8004F1CC: lhu         $t6, 0x361E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X361E);
    // 0x8004F1D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004F1D4: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8004F1D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004F1DC: beq         $t7, $zero, L_8004F240
    if (ctx->r15 == 0) {
        // 0x8004F1E0: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_8004F240;
    }
    // 0x8004F1E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8004F1E4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8004F1E8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8004F1EC: nop

    // 0x8004F1F0: lwc1        $f12, 0x8($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8004F1F4: jal         0x80272AEC
    // 0x8004F1F8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x8004F1F8: nop

    after_0:
    // 0x8004F1FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F200: lwc1        $f4, -0x6F10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6F10);
    // 0x8004F204: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F208: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8004F20C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8004F210: bc1f        L_8004F240
    if (!c1cs) {
        // 0x8004F214: nop
    
            goto L_8004F240;
    }
    // 0x8004F214: nop

    // 0x8004F218: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8004F21C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F220: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8004F224: nop

    // 0x8004F228: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8004F22C: nop

    // 0x8004F230: bc1f        L_8004F240
    if (!c1cs) {
        // 0x8004F234: nop
    
            goto L_8004F240;
    }
    // 0x8004F234: nop

    // 0x8004F238: b           L_8004F314
    // 0x8004F23C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F314;
    // 0x8004F23C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F240:
    // 0x8004F240: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004F244: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004F248: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F24C: lwc1        $f10, 0x48($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8004F250: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F254: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8004F258: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8004F25C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8004F260: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004F264: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004F268: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8004F26C: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004F270: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8004F274: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8004F278: jal         0x8004EEF4
    // 0x8004F27C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_8004EEF4(rdram, ctx);
        goto after_1;
    // 0x8004F27C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8004F280: beq         $v0, $zero, L_8004F314
    if (ctx->r2 == 0) {
        // 0x8004F284: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F314;
    }
    // 0x8004F284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F288: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8004F28C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004F290: lh          $t2, 0xE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE);
    // 0x8004F294: nop

    // 0x8004F298: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8004F29C: nop

    // 0x8004F2A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004F2A4: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8004F2A8: nop

    // 0x8004F2AC: bc1f        L_8004F314
    if (!c1cs) {
        // 0x8004F2B0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F314;
    }
    // 0x8004F2B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F2B4: lh          $t3, 0x10($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X10);
    // 0x8004F2B8: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004F2BC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8004F2C0: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004F2C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004F2C8: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x8004F2CC: nop

    // 0x8004F2D0: bc1f        L_8004F314
    if (!c1cs) {
        // 0x8004F2D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F314;
    }
    // 0x8004F2D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F2D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004F2DC: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8004F2E0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8004F2E4: nop

    // 0x8004F2E8: bc1f        L_8004F314
    if (!c1cs) {
        // 0x8004F2EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F314;
    }
    // 0x8004F2EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F2F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F2F4: nop

    // 0x8004F2F8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8004F2FC: nop

    // 0x8004F300: bc1f        L_8004F314
    if (!c1cs) {
        // 0x8004F304: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F314;
    }
    // 0x8004F304: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F308: b           L_8004F314
    // 0x8004F30C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F314;
    // 0x8004F30C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004F310: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F314:
    // 0x8004F314: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004F318: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8004F31C: jr          $ra
    // 0x8004F320: nop

    return;
    // 0x8004F320: nop

;}
RECOMP_FUNC void func_8004F324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F324: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004F328: lhu         $v1, 0x361E($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X361E);
    // 0x8004F32C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004F330: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x8004F334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004F338: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004F33C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8004F340: beq         $t6, $zero, L_8004F364
    if (ctx->r14 == 0) {
        // 0x8004F344: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8004F364;
    }
    // 0x8004F344: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8004F348: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004F34C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004F350: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004F354: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x8004F358: nop

    // 0x8004F35C: beq         $t7, $zero, L_8004F36C
    if (ctx->r15 == 0) {
        // 0x8004F360: nop
    
            goto L_8004F36C;
    }
    // 0x8004F360: nop

L_8004F364:
    // 0x8004F364: b           L_8004F56C
    // 0x8004F368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004F56C;
    // 0x8004F368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F36C:
    // 0x8004F36C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F370: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8004F374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F378: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8004F37C: beq         $v1, $zero, L_8004F39C
    if (ctx->r3 == 0) {
        // 0x8004F380: swc1        $f6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
            goto L_8004F39C;
    }
    // 0x8004F380: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8004F384: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x8004F388: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004F38C: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x8004F390: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004F394: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8004F398: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8004F39C:
    // 0x8004F39C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F3A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004F3A4: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004F3A8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8004F3AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F3B0: bc1f        L_8004F3C0
    if (!c1cs) {
        // 0x8004F3B4: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_8004F3C0;
    }
    // 0x8004F3B4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x8004F3B8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x8004F3BC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_8004F3C0:
    // 0x8004F3C0: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F3C4: lwc1        $f6, 0x48($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X48);
    // 0x8004F3C8: sub.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8004F3CC: lwc1        $f7, -0x6F08($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6F08);
    // 0x8004F3D0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8004F3D4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004F3D8: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x8004F3DC: lwc1        $f6, -0x6F04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6F04);
    // 0x8004F3E0: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x8004F3E4: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x8004F3E8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8004F3EC: bc1f        L_8004F454
    if (!c1cs) {
        // 0x8004F3F0: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8004F454;
    }
    // 0x8004F3F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F3F4: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8004F3F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F3FC: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8004F400: lwc1        $f7, -0x6F00($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6F00);
    // 0x8004F404: lwc1        $f6, -0x6EFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6EFC);
    // 0x8004F408: lui         $at, 0x400A
    ctx->r1 = S32(0X400A << 16);
    // 0x8004F40C: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x8004F410: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8004F414: sub.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8004F418: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8004F41C: sub.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d - ctx->f8.d;
    // 0x8004F420: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004F424: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004F428: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8004F42C: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x8004F430: nop

    // 0x8004F434: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8004F438: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x8004F43C: mul.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x8004F440: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x8004F444: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8004F448: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8004F44C: b           L_8004F484
    // 0x8004F450: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
        goto L_8004F484;
    // 0x8004F450: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_8004F454:
    // 0x8004F454: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x8004F458: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8004F45C: lwc1        $f9, -0x6EF8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6EF8);
    // 0x8004F460: lwc1        $f8, -0x6EF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6EF4);
    // 0x8004F464: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x8004F468: lui         $at, 0x400A
    ctx->r1 = S32(0X400A << 16);
    // 0x8004F46C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004F470: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F474: sub.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f8.d - ctx->f6.d;
    // 0x8004F478: nop

    // 0x8004F47C: div.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x8004F480: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
L_8004F484:
    // 0x8004F484: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8004F488: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8004F48C: nop

    // 0x8004F490: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x8004F494: nop

    // 0x8004F498: bc1f        L_8004F568
    if (!c1cs) {
        // 0x8004F49C: nop
    
            goto L_8004F568;
    }
    // 0x8004F49C: nop

    // 0x8004F4A0: sub.s       $f2, $f20, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f20.fl - ctx->f12.fl;
    // 0x8004F4A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F4A8: sub.s       $f8, $f20, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f14.fl;
    // 0x8004F4AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8004F4B0: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8004F4B4: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x8004F4B8: nop

    // 0x8004F4BC: bc1f        L_8004F568
    if (!c1cs) {
        // 0x8004F4C0: nop
    
            goto L_8004F568;
    }
    // 0x8004F4C0: nop

    // 0x8004F4C4: lwc1        $f5, -0x6EF0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6EF0);
    // 0x8004F4C8: lwc1        $f4, -0x6EEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6EEC);
    // 0x8004F4CC: nop

    // 0x8004F4D0: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x8004F4D4: nop

    // 0x8004F4D8: bc1f        L_8004F504
    if (!c1cs) {
        // 0x8004F4DC: nop
    
            goto L_8004F504;
    }
    // 0x8004F4DC: nop

    // 0x8004F4E0: lwc1        $f0, 0x44($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004F4E4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F4E8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8004F4EC: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8004F4F0: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8004F4F4: nop

    // 0x8004F4F8: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8004F4FC: b           L_8004F50C
    // 0x8004F500: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
        goto L_8004F50C;
    // 0x8004F500: add.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f8.fl;
L_8004F504:
    // 0x8004F504: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F508: nop

L_8004F50C:
    // 0x8004F50C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8004F510: jal         0x80272AEC
    // 0x8004F514: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x8004F514: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8004F518: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8004F51C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8004F520: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8004F524: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8004F528: bc1f        L_8004F568
    if (!c1cs) {
        // 0x8004F52C: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_8004F568;
    }
    // 0x8004F52C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8004F530: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8004F534: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004F538: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8004F53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004F540: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8004F544: nop

    // 0x8004F548: bc1f        L_8004F554
    if (!c1cs) {
        // 0x8004F54C: nop
    
            goto L_8004F554;
    }
    // 0x8004F54C: nop

    // 0x8004F550: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
L_8004F554:
    // 0x8004F554: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x8004F558: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8004F55C: swc1        $f20, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f20.u32l;
    // 0x8004F560: b           L_8004F56C
    // 0x8004F564: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
        goto L_8004F56C;
    // 0x8004F564: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_8004F568:
    // 0x8004F568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F56C:
    // 0x8004F56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F570: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8004F574: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8004F578: jr          $ra
    // 0x8004F57C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8004F57C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8004F580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F580: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004F584: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004F588: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8004F58C: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8004F590: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8004F594: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004F598: lw          $a0, 0x84($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X84);
    // 0x8004F59C: nop

    // 0x8004F5A0: beq         $a0, $zero, L_8004F620
    if (ctx->r4 == 0) {
        // 0x8004F5A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8004F620;
    }
    // 0x8004F5A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004F5A8: jal         0x8024BC08
    // 0x8004F5AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_0;
    // 0x8004F5AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8004F5B0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8004F5B4: nop

    // 0x8004F5B8: lw          $a0, 0x84($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X84);
    // 0x8004F5BC: jal         0x80053CA0
    // 0x8004F5C0: nop

    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x8004F5C0: nop

    after_1:
    // 0x8004F5C4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004F5C8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8004F5CC: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
    // 0x8004F5D0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8004F5D4: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x8004F5D8: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    // 0x8004F5DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004F5E0: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x8004F5E4: lwc1        $f12, 0x4C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8004F5E8: lwc1        $f14, 0x44($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X44);
    // 0x8004F5EC: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8004F5F0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8004F5F4: jal         0x80272B1C
    // 0x8004F5F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_2;
    // 0x8004F5F8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_2:
    // 0x8004F5FC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8004F600: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8004F604: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8004F608: swc1        $f4, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f4.u32l;
    // 0x8004F60C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8004F610: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F614: nop

    // 0x8004F618: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x8004F61C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8004F620:
    // 0x8004F620: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004F624: jr          $ra
    // 0x8004F628: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004F628: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004F62C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F62C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004F630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004F634: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004F638: jal         0x8004F580
    // 0x8004F63C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8004F580(rdram, ctx);
        goto after_0;
    // 0x8004F63C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004F640: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8004F644: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8004F648: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8004F64C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8004F650: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004F654: nop

    // 0x8004F658: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8004F65C: lhu         $t6, 0xC0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004F660: nop

    // 0x8004F664: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8004F668: beq         $t7, $zero, L_8004F680
    if (ctx->r15 == 0) {
        // 0x8004F66C: nop
    
            goto L_8004F680;
    }
    // 0x8004F66C: nop

    // 0x8004F670: jal         0x80059208
    // 0x8004F674: nop

    func_80059208(rdram, ctx);
        goto after_1;
    // 0x8004F674: nop

    after_1:
    // 0x8004F678: b           L_8004F714
    // 0x8004F67C: nop

        goto L_8004F714;
    // 0x8004F67C: nop

L_8004F680:
    // 0x8004F680: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8004F684: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F688: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x8004F68C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8004F690: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8004F694: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x8004F698: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x8004F69C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8004F6A0: nop

    // 0x8004F6A4: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F6A8: nop

    // 0x8004F6AC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8004F6B0: nop

    // 0x8004F6B4: bc1f        L_8004F6CC
    if (!c1cs) {
        // 0x8004F6B8: nop
    
            goto L_8004F6CC;
    }
    // 0x8004F6B8: nop

    // 0x8004F6BC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8004F6C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004F6C4: b           L_8004F6D8
    // 0x8004F6C8: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
        goto L_8004F6D8;
    // 0x8004F6C8: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8004F6CC:
    // 0x8004F6CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F6D0: nop

    // 0x8004F6D4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8004F6D8:
    // 0x8004F6D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8004F6DC: nop

    // 0x8004F6E0: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004F6E4: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8004F6E8: jal         0x8001C5D0
    // 0x8004F6EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x8004F6EC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_2:
    // 0x8004F6F0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8004F6F4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8004F6F8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8004F6FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8004F700: swc1        $f0, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f0.u32l;
    // 0x8004F704: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8004F708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F70C: nop

    // 0x8004F710: swc1        $f6, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f6.u32l;
L_8004F714:
    // 0x8004F714: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8004F718: addiu       $a0, $a0, 0x361E
    ctx->r4 = ADD32(ctx->r4, 0X361E);
    // 0x8004F71C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8004F720: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8004F724: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8004F728: and         $t1, $v0, $v1
    ctx->r9 = ctx->r2 & ctx->r3;
    // 0x8004F72C: bne         $t1, $zero, L_8004F768
    if (ctx->r9 != 0) {
        // 0x8004F730: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004F768;
    }
    // 0x8004F730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004F734: lhu         $t2, 0x3630($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3630);
    // 0x8004F738: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004F73C: slti        $at, $t2, 0x1E
    ctx->r1 = SIGNED(ctx->r10) < 0X1E ? 1 : 0;
    // 0x8004F740: beq         $at, $zero, L_8004F768
    if (ctx->r1 == 0) {
        // 0x8004F744: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004F768;
    }
    // 0x8004F744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004F748: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x8004F74C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8004F750: bne         $t3, $at, L_8004F764
    if (ctx->r11 != ctx->r1) {
        // 0x8004F754: or          $t4, $v0, $v1
        ctx->r12 = ctx->r2 | ctx->r3;
            goto L_8004F764;
    }
    // 0x8004F754: or          $t4, $v0, $v1
    ctx->r12 = ctx->r2 | ctx->r3;
    // 0x8004F758: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004F75C: jal         0x8004F774
    // 0x8004F760: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    func_8004F774(rdram, ctx);
        goto after_3;
    // 0x8004F760: sh          $t4, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r12;
    after_3:
L_8004F764:
    // 0x8004F764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F768:
    // 0x8004F768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004F76C: jr          $ra
    // 0x8004F770: nop

    return;
    // 0x8004F770: nop

;}
RECOMP_FUNC void func_8004F774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F774: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x8004F778: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8004F77C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004F780: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x8004F784: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8004F788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F78C: bc1f        L_8004F7A4
    if (!c1cs) {
        // 0x8004F790: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8004F7A4;
    }
    // 0x8004F790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004F794: jal         0x80271980
    // 0x8004F798: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_0;
    // 0x8004F798: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x8004F79C: b           L_8004F7B0
    // 0x8004F7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004F7B0;
    // 0x8004F7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F7A4:
    // 0x8004F7A4: jal         0x80271980
    // 0x8004F7A8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_1;
    // 0x8004F7A8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_1:
    // 0x8004F7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004F7B0:
    // 0x8004F7B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004F7B4: jr          $ra
    // 0x8004F7B8: nop

    return;
    // 0x8004F7B8: nop

;}
RECOMP_FUNC void func_8004F7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F7BC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8004F7C0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8004F7C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004F7CC: lw          $t7, 0x84($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X84);
    // 0x8004F7D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004F7D4: beq         $t7, $zero, L_8004F7E4
    if (ctx->r15 == 0) {
        // 0x8004F7D8: nop
    
            goto L_8004F7E4;
    }
    // 0x8004F7D8: nop

    // 0x8004F7DC: b           L_8004F814
    // 0x8004F7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8004F814;
    // 0x8004F7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F7E4:
    // 0x8004F7E4: lhu         $a0, 0xA10($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA10);
    // 0x8004F7E8: jal         0x8006445C
    // 0x8004F7EC: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x8004F7EC: nop

    after_0:
    // 0x8004F7F0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004F7F4: sltiu       $at, $v0, 0x5B
    ctx->r1 = ctx->r2 < 0X5B ? 1 : 0;
    // 0x8004F7F8: bne         $at, $zero, L_8004F810
    if (ctx->r1 != 0) {
        // 0x8004F7FC: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_8004F810;
    }
    // 0x8004F7FC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x8004F800: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x8004F804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004F808: b           L_8004F814
    // 0x8004F80C: sh          $t8, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r24;
        goto L_8004F814;
    // 0x8004F80C: sh          $t8, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r24;
L_8004F810:
    // 0x8004F810: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F814:
    // 0x8004F814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004F818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004F81C: jr          $ra
    // 0x8004F820: nop

    return;
    // 0x8004F820: nop

;}
RECOMP_FUNC void func_8004F824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F824: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004F828: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8004F82C: nop

    // 0x8004F830: lbu         $t6, 0xBD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBD);
    // 0x8004F834: nop

    // 0x8004F838: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8004F83C: beq         $t7, $zero, L_8004F8B0
    if (ctx->r15 == 0) {
        // 0x8004F840: nop
    
            goto L_8004F8B0;
    }
    // 0x8004F840: nop

    // 0x8004F844: lw          $t8, 0x8C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8C);
    // 0x8004F848: nop

    // 0x8004F84C: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x8004F850: nop

    // 0x8004F854: lhu         $t0, 0x8($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X8);
    // 0x8004F858: nop

    // 0x8004F85C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8004F860: beq         $t1, $zero, L_8004F88C
    if (ctx->r9 == 0) {
        // 0x8004F864: nop
    
            goto L_8004F88C;
    }
    // 0x8004F864: nop

    // 0x8004F868: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F86C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004F870: nop

    // 0x8004F874: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8004F878: nop

    // 0x8004F87C: bc1f        L_8004F8B4
    if (!c1cs) {
        // 0x8004F880: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F8B4;
    }
    // 0x8004F880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F884: jr          $ra
    // 0x8004F888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004F888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F88C:
    // 0x8004F88C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004F890: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F894: nop

    // 0x8004F898: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8004F89C: nop

    // 0x8004F8A0: bc1f        L_8004F8B4
    if (!c1cs) {
        // 0x8004F8A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004F8B4;
    }
    // 0x8004F8A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004F8A8: jr          $ra
    // 0x8004F8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004F8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F8B0:
    // 0x8004F8B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004F8B4:
    // 0x8004F8B4: jr          $ra
    // 0x8004F8B8: nop

    return;
    // 0x8004F8B8: nop

;}
RECOMP_FUNC void func_8004F8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F8BC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8004F8C0: lbu         $t6, 0x3610($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3610);
    // 0x8004F8C4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8004F8C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004F8CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004F8D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004F8D4: beq         $t6, $at, L_800501EC
    if (ctx->r14 == ctx->r1) {
        // 0x8004F8D8: sw          $zero, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = 0;
            goto L_800501EC;
    }
    // 0x8004F8D8: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x8004F8DC: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8004F8E0: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8004F8E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004F8E8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8004F8EC: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x8004F8F0: addiu       $a0, $a0, 0x361C
    ctx->r4 = ADD32(ctx->r4, 0X361C);
    // 0x8004F8F4: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x8004F8F8: bne         $t8, $zero, L_800501F0
    if (ctx->r24 != 0) {
        // 0x8004F8FC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x8004F8FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004F900: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8004F904: nop

    // 0x8004F908: beq         $v1, $zero, L_8004F918
    if (ctx->r3 == 0) {
        // 0x8004F90C: addiu       $t9, $v1, -0x1
        ctx->r25 = ADD32(ctx->r3, -0X1);
            goto L_8004F918;
    }
    // 0x8004F90C: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x8004F910: b           L_800501EC
    // 0x8004F914: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
        goto L_800501EC;
    // 0x8004F914: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
L_8004F918:
    // 0x8004F918: lui         $at, 0x43FC
    ctx->r1 = S32(0X43FC << 16);
    // 0x8004F91C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F920: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F924: nop

    // 0x8004F928: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x8004F92C: nop

    // 0x8004F930: bc1f        L_8004F944
    if (!c1cs) {
        // 0x8004F934: lui         $t0, 0x800B
        ctx->r8 = S32(0X800B << 16);
            goto L_8004F944;
    }
    // 0x8004F934: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8004F938: addiu       $t0, $t0, -0x5500
    ctx->r8 = ADD32(ctx->r8, -0X5500);
    // 0x8004F93C: b           L_8004F964
    // 0x8004F940: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
        goto L_8004F964;
    // 0x8004F940: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_8004F944:
    // 0x8004F944: lui         $at, 0xC3FC
    ctx->r1 = S32(0XC3FC << 16);
    // 0x8004F948: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F94C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8004F950: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8004F954: addiu       $t1, $t1, -0x54EC
    ctx->r9 = ADD32(ctx->r9, -0X54EC);
    // 0x8004F958: bc1f        L_8004F968
    if (!c1cs) {
        // 0x8004F95C: lw          $t2, 0x6C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X6C);
            goto L_8004F968;
    }
    // 0x8004F95C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8004F960: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
L_8004F964:
    // 0x8004F964: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
L_8004F968:
    // 0x8004F968: nop

    // 0x8004F96C: beq         $t2, $zero, L_800501F0
    if (ctx->r10 == 0) {
        // 0x8004F970: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x8004F970: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004F974: lhu         $v1, 0xC0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004F978: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004F97C: andi        $t3, $v1, 0x40
    ctx->r11 = ctx->r3 & 0X40;
    // 0x8004F980: beq         $t3, $zero, L_8004F990
    if (ctx->r11 == 0) {
        // 0x8004F984: andi        $t4, $v1, 0xFFBF
        ctx->r12 = ctx->r3 & 0XFFBF;
            goto L_8004F990;
    }
    // 0x8004F984: andi        $t4, $v1, 0xFFBF
    ctx->r12 = ctx->r3 & 0XFFBF;
    // 0x8004F988: b           L_8004FB90
    // 0x8004F98C: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
        goto L_8004FB90;
    // 0x8004F98C: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
L_8004F990:
    // 0x8004F990: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F994: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004F998: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8004F99C: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8004F9A0: nop

    // 0x8004F9A4: bc1f        L_8004FB90
    if (!c1cs) {
        // 0x8004F9A8: nop
    
            goto L_8004FB90;
    }
    // 0x8004F9A8: nop

    // 0x8004F9AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004F9B0: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8004F9B4: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8004F9B8: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x8004F9BC: bc1f        L_8004FB90
    if (!c1cs) {
        // 0x8004F9C0: nop
    
            goto L_8004FB90;
    }
    // 0x8004F9C0: nop

    // 0x8004F9C4: lh          $t6, 0x8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8);
    // 0x8004F9C8: lh          $t7, 0xA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA);
    // 0x8004F9CC: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8004F9D0: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8004F9D4: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004F9D8: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x8004F9DC: lw          $a3, 0x48($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X48);
    // 0x8004F9E0: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004F9E4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x8004F9E8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F9EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004F9F0: jal         0x8004E8A0
    // 0x8004F9F4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8004E8A0(rdram, ctx);
        goto after_0;
    // 0x8004F9F4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8004F9F8: beq         $v0, $zero, L_8004FB90
    if (ctx->r2 == 0) {
        // 0x8004F9FC: nop
    
            goto L_8004FB90;
    }
    // 0x8004F9FC: nop

    // 0x8004FA00: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004FA04: nop

    // 0x8004FA08: lhu         $t0, 0xC0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XC0);
    // 0x8004FA0C: nop

    // 0x8004FA10: andi        $t1, $t0, 0x70
    ctx->r9 = ctx->r8 & 0X70;
    // 0x8004FA14: bne         $t1, $zero, L_8004FA34
    if (ctx->r9 != 0) {
        // 0x8004FA18: nop
    
            goto L_8004FA34;
    }
    // 0x8004FA18: nop

    // 0x8004FA1C: jal         0x8004F7BC
    // 0x8004FA20: nop

    func_8004F7BC(rdram, ctx);
        goto after_1;
    // 0x8004FA20: nop

    after_1:
    // 0x8004FA24: beq         $v0, $zero, L_8004FA34
    if (ctx->r2 == 0) {
        // 0x8004FA28: nop
    
            goto L_8004FA34;
    }
    // 0x8004FA28: nop

    // 0x8004FA2C: jal         0x80078108
    // 0x8004FA30: nop

    func_80078108(rdram, ctx);
        goto after_2;
    // 0x8004FA30: nop

    after_2:
L_8004FA34:
    // 0x8004FA34: jal         0x8004F580
    // 0x8004FA38: nop

    func_8004F580(rdram, ctx);
        goto after_3;
    // 0x8004FA38: nop

    after_3:
    // 0x8004FA3C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FA40: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x8004FA44: lhu         $t2, 0xC0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FA48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004FA4C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x8004FA50: sh          $t3, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r11;
    // 0x8004FA54: lbu         $t4, 0x3611($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3611);
    // 0x8004FA58: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004FA5C: ori         $t6, $t4, 0x4
    ctx->r14 = ctx->r12 | 0X4;
    // 0x8004FA60: sb          $t6, 0x3611($at)
    MEM_B(0X3611, ctx->r1) = ctx->r14;
    // 0x8004FA64: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x8004FA68: nop

    // 0x8004FA6C: swc1        $f6, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f6.u32l;
    // 0x8004FA70: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8004FA74: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8004FA78: nop

    // 0x8004FA7C: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x8004FA80: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FA84: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004FA88: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x8004FA8C: lh          $t0, 0xA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA);
    // 0x8004FA90: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8004FA94: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8004FA98: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8004FA9C: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8004FAA0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8004FAA4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004FAA8: jal         0x8004EE18
    // 0x8004FAAC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    func_8004EE18(rdram, ctx);
        goto after_4;
    // 0x8004FAAC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_4:
    // 0x8004FAB0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FAB4: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8004FAB8: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8004FABC: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8004FAC0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004FAC4: nop

    // 0x8004FAC8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8004FACC: jal         0x8007FA40
    // 0x8004FAD0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x8004FAD0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x8004FAD4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8004FAD8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8004FADC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004FAE0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8004FAE4: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8004FAE8: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8004FAEC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8004FAF0: jal         0x80081040
    // 0x8004FAF4: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    func_80081040(rdram, ctx);
        goto after_6;
    // 0x8004FAF4: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x8004FAF8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8004FAFC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB00: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8004FB04: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x8004FB08: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8004FB0C: jal         0x80080E80
    // 0x8004FB10: nop

    func_80080E80(rdram, ctx);
        goto after_7;
    // 0x8004FB10: nop

    after_7:
    // 0x8004FB14: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8004FB18: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB1C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8004FB20: swc1        $f10, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f10.u32l;
    // 0x8004FB24: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB28: nop

    // 0x8004FB2C: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004FB30: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8004FB34: jal         0x8001C5D0
    // 0x8004FB38: nop

    func_8001C5D0(rdram, ctx);
        goto after_8;
    // 0x8004FB38: nop

    after_8:
    // 0x8004FB3C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB40: nop

    // 0x8004FB44: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x8004FB48: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB4C: nop

    // 0x8004FB50: lwc1        $f2, 0x1C($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8004FB54: nop

    // 0x8004FB58: mul.s       $f14, $f2, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8004FB5C: jal         0x8007FA40
    // 0x8004FB60: add.s       $f12, $f14, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f14.fl;
    func_8007FA40(rdram, ctx);
        goto after_9;
    // 0x8004FB60: add.s       $f12, $f14, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f14.fl;
    after_9:
    // 0x8004FB64: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB68: jal         0x800540CC
    // 0x8004FB6C: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    func_800540CC(rdram, ctx);
        goto after_10;
    // 0x8004FB6C: swc1        $f0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f0.u32l;
    after_10:
    // 0x8004FB70: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8004FB74: lhu         $t5, 0x3630($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X3630);
    // 0x8004FB78: nop

    // 0x8004FB7C: slti        $at, $t5, 0x1E
    ctx->r1 = SIGNED(ctx->r13) < 0X1E ? 1 : 0;
    // 0x8004FB80: beq         $at, $zero, L_8004FB90
    if (ctx->r1 == 0) {
        // 0x8004FB84: nop
    
            goto L_8004FB90;
    }
    // 0x8004FB84: nop

    // 0x8004FB88: jal         0x802719DC
    // 0x8004FB8C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_11;
    // 0x8004FB8C: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_11:
L_8004FB90:
    // 0x8004FB90: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FB94: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8004FB98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8004FB9C: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004FBA0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8004FBA4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8004FBA8: nop

    // 0x8004FBAC: bc1f        L_8004FEC8
    if (!c1cs) {
        // 0x8004FBB0: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_8004FEC8;
    }
    // 0x8004FBB0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FBB4: lbu         $t7, 0x3610($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3610);
    // 0x8004FBB8: nop

    // 0x8004FBBC: bne         $t7, $zero, L_8004FEC8
    if (ctx->r15 != 0) {
        // 0x8004FBC0: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_8004FEC8;
    }
    // 0x8004FBC0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FBC4: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FBC8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FBCC: andi        $t8, $t9, 0x10
    ctx->r24 = ctx->r25 & 0X10;
    // 0x8004FBD0: bne         $t8, $zero, L_8004FD40
    if (ctx->r24 != 0) {
        // 0x8004FBD4: addiu       $t3, $sp, 0x60
        ctx->r11 = ADD32(ctx->r29, 0X60);
            goto L_8004FD40;
    }
    // 0x8004FBD4: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x8004FBD8: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8004FBDC: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x8004FBE0: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x8004FBE4: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8004FBE8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004FBEC: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004FBF0: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x8004FBF4: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x8004FBF8: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004FBFC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8004FC00: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FC04: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004FC08: jal         0x8004E8A0
    // 0x8004FC0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8004E8A0(rdram, ctx);
        goto after_12;
    // 0x8004FC0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x8004FC10: beq         $v0, $zero, L_8004FD40
    if (ctx->r2 == 0) {
        // 0x8004FC14: nop
    
            goto L_8004FD40;
    }
    // 0x8004FC14: nop

    // 0x8004FC18: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8004FC1C: nop

    // 0x8004FC20: lhu         $t6, 0xC0($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0XC0);
    // 0x8004FC24: nop

    // 0x8004FC28: andi        $t5, $t6, 0x70
    ctx->r13 = ctx->r14 & 0X70;
    // 0x8004FC2C: bne         $t5, $zero, L_8004FC4C
    if (ctx->r13 != 0) {
        // 0x8004FC30: nop
    
            goto L_8004FC4C;
    }
    // 0x8004FC30: nop

    // 0x8004FC34: jal         0x8004F7BC
    // 0x8004FC38: nop

    func_8004F7BC(rdram, ctx);
        goto after_13;
    // 0x8004FC38: nop

    after_13:
    // 0x8004FC3C: beq         $v0, $zero, L_8004FC4C
    if (ctx->r2 == 0) {
        // 0x8004FC40: nop
    
            goto L_8004FC4C;
    }
    // 0x8004FC40: nop

    // 0x8004FC44: jal         0x8007817C
    // 0x8004FC48: nop

    func_8007817C(rdram, ctx);
        goto after_14;
    // 0x8004FC48: nop

    after_14:
L_8004FC4C:
    // 0x8004FC4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FC50: nop

    // 0x8004FC54: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x8004FC58: nop

    // 0x8004FC5C: bne         $t7, $zero, L_8004FC68
    if (ctx->r15 != 0) {
        // 0x8004FC60: nop
    
            goto L_8004FC68;
    }
    // 0x8004FC60: nop

    // 0x8004FC64: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
L_8004FC68:
    // 0x8004FC68: jal         0x8004F580
    // 0x8004FC6C: nop

    func_8004F580(rdram, ctx);
        goto after_15;
    // 0x8004FC6C: nop

    after_15:
    // 0x8004FC70: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FC74: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FC78: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FC7C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004FC80: ori         $t8, $t9, 0x10
    ctx->r24 = ctx->r25 | 0X10;
    // 0x8004FC84: addiu       $v1, $v1, 0x3611
    ctx->r3 = ADD32(ctx->r3, 0X3611);
    // 0x8004FC88: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
    // 0x8004FC8C: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x8004FC90: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004FC94: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8004FC98: ori         $t0, $t1, 0x1
    ctx->r8 = ctx->r9 | 0X1;
    // 0x8004FC9C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x8004FCA0: swc1        $f16, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f16.u32l;
    // 0x8004FCA4: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8004FCA8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8004FCAC: nop

    // 0x8004FCB0: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
    // 0x8004FCB4: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8004FCB8: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x8004FCBC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004FCC0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8004FCC4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8004FCC8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8004FCCC: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8004FCD0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8004FCD4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8004FCD8: jal         0x8004EE18
    // 0x8004FCDC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8004EE18(rdram, ctx);
        goto after_16;
    // 0x8004FCDC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_16:
    // 0x8004FCE0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x8004FCE4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8004FCE8: swc1        $f0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f0.u32l;
    // 0x8004FCEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FCF0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8004FCF4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004FCF8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8004FCFC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8004FD00: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8004FD04: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8004FD08: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x8004FD0C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8004FD10: jal         0x80052F98
    // 0x8004FD14: nop

    func_80052F98(rdram, ctx);
        goto after_17;
    // 0x8004FD14: nop

    after_17:
    // 0x8004FD18: jal         0x800540CC
    // 0x8004FD1C: nop

    func_800540CC(rdram, ctx);
        goto after_18;
    // 0x8004FD1C: nop

    after_18:
    // 0x8004FD20: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8004FD24: lhu         $t7, 0x3630($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3630);
    // 0x8004FD28: nop

    // 0x8004FD2C: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x8004FD30: beq         $at, $zero, L_8004FD40
    if (ctx->r1 == 0) {
        // 0x8004FD34: nop
    
            goto L_8004FD40;
    }
    // 0x8004FD34: nop

    // 0x8004FD38: jal         0x80271980
    // 0x8004FD3C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_19;
    // 0x8004FD3C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_19:
L_8004FD40:
    // 0x8004FD40: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FD44: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FD48: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FD4C: addiu       $t3, $sp, 0x60
    ctx->r11 = ADD32(ctx->r29, 0X60);
    // 0x8004FD50: andi        $t8, $t9, 0x20
    ctx->r24 = ctx->r25 & 0X20;
    // 0x8004FD54: bne         $t8, $zero, L_8004FEC8
    if (ctx->r24 != 0) {
        // 0x8004FD58: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_8004FEC8;
    }
    // 0x8004FD58: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FD5C: lh          $t0, 0x4($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X4);
    // 0x8004FD60: lh          $t2, 0x6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X6);
    // 0x8004FD64: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8004FD68: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8004FD6C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004FD70: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8004FD74: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x8004FD78: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x8004FD7C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004FD80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8004FD84: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FD88: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8004FD8C: jal         0x8004E8A0
    // 0x8004FD90: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8004E8A0(rdram, ctx);
        goto after_20;
    // 0x8004FD90: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x8004FD94: beq         $v0, $zero, L_8004FEC8
    if (ctx->r2 == 0) {
        // 0x8004FD98: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_8004FEC8;
    }
    // 0x8004FD98: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FD9C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8004FDA0: nop

    // 0x8004FDA4: lhu         $t6, 0xC0($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0XC0);
    // 0x8004FDA8: nop

    // 0x8004FDAC: andi        $t5, $t6, 0x70
    ctx->r13 = ctx->r14 & 0X70;
    // 0x8004FDB0: bne         $t5, $zero, L_8004FDD0
    if (ctx->r13 != 0) {
        // 0x8004FDB4: nop
    
            goto L_8004FDD0;
    }
    // 0x8004FDB4: nop

    // 0x8004FDB8: jal         0x8004F7BC
    // 0x8004FDBC: nop

    func_8004F7BC(rdram, ctx);
        goto after_21;
    // 0x8004FDBC: nop

    after_21:
    // 0x8004FDC0: beq         $v0, $zero, L_8004FDD0
    if (ctx->r2 == 0) {
        // 0x8004FDC4: nop
    
            goto L_8004FDD0;
    }
    // 0x8004FDC4: nop

    // 0x8004FDC8: jal         0x8007817C
    // 0x8004FDCC: nop

    func_8007817C(rdram, ctx);
        goto after_22;
    // 0x8004FDCC: nop

    after_22:
L_8004FDD0:
    // 0x8004FDD0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FDD4: nop

    // 0x8004FDD8: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x8004FDDC: nop

    // 0x8004FDE0: bne         $t7, $zero, L_8004FDEC
    if (ctx->r15 != 0) {
        // 0x8004FDE4: nop
    
            goto L_8004FDEC;
    }
    // 0x8004FDE4: nop

    // 0x8004FDE8: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
L_8004FDEC:
    // 0x8004FDEC: jal         0x8004F580
    // 0x8004FDF0: nop

    func_8004F580(rdram, ctx);
        goto after_23;
    // 0x8004FDF0: nop

    after_23:
    // 0x8004FDF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FDF8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004FDFC: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FE00: addiu       $v1, $v1, 0x3611
    ctx->r3 = ADD32(ctx->r3, 0X3611);
    // 0x8004FE04: ori         $t8, $t9, 0x20
    ctx->r24 = ctx->r25 | 0X20;
    // 0x8004FE08: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
    // 0x8004FE0C: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8004FE10: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8004FE14: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8004FE18: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8004FE1C: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x8004FE20: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x8004FE24: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8004FE28: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8004FE2C: nop

    // 0x8004FE30: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x8004FE34: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FE38: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004FE3C: lh          $t6, 0x4($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X4);
    // 0x8004FE40: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x8004FE44: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8004FE48: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8004FE4C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8004FE50: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8004FE54: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8004FE58: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004FE5C: jal         0x8004EE18
    // 0x8004FE60: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    func_8004EE18(rdram, ctx);
        goto after_24;
    // 0x8004FE60: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_24:
    // 0x8004FE64: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8004FE68: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8004FE6C: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x8004FE70: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FE74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8004FE78: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004FE7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004FE80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8004FE84: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8004FE88: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8004FE8C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8004FE90: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8004FE94: jal         0x80052F98
    // 0x8004FE98: nop

    func_80052F98(rdram, ctx);
        goto after_25;
    // 0x8004FE98: nop

    after_25:
    // 0x8004FE9C: jal         0x800540CC
    // 0x8004FEA0: nop

    func_800540CC(rdram, ctx);
        goto after_26;
    // 0x8004FEA0: nop

    after_26:
    // 0x8004FEA4: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8004FEA8: lhu         $t9, 0x3630($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3630);
    // 0x8004FEAC: nop

    // 0x8004FEB0: slti        $at, $t9, 0x1E
    ctx->r1 = SIGNED(ctx->r25) < 0X1E ? 1 : 0;
    // 0x8004FEB4: beq         $at, $zero, L_8004FEC8
    if (ctx->r1 == 0) {
        // 0x8004FEB8: lw          $t8, 0x6C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X6C);
            goto L_8004FEC8;
    }
    // 0x8004FEB8: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FEBC: jal         0x80271980
    // 0x8004FEC0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_27;
    // 0x8004FEC0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_27:
    // 0x8004FEC4: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
L_8004FEC8:
    // 0x8004FEC8: nop

    // 0x8004FECC: lh          $t0, 0xC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC);
    // 0x8004FED0: nop

    // 0x8004FED4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8004FED8: jal         0x8004EF98
    // 0x8004FEDC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8004EF98(rdram, ctx);
        goto after_28;
    // 0x8004FEDC: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_28:
    // 0x8004FEE0: beq         $v0, $zero, L_8004FF80
    if (ctx->r2 == 0) {
        // 0x8004FEE4: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_8004FF80;
    }
    // 0x8004FEE4: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8004FEE8: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x8004FEEC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004FEF0: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x8004FEF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004FEF8: ori         $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 | 0X1000;
    // 0x8004FEFC: bne         $t3, $zero, L_8004FF80
    if (ctx->r11 != 0) {
        // 0x8004FF00: sh          $t2, 0x361E($at)
        MEM_H(0X361E, ctx->r1) = ctx->r10;
            goto L_8004FF80;
    }
    // 0x8004FF00: sh          $t2, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r10;
    // 0x8004FF04: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004FF08: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x8004FF0C: nop

    // 0x8004FF10: andi        $t4, $t6, 0x600
    ctx->r12 = ctx->r14 & 0X600;
    // 0x8004FF14: bne         $t4, $zero, L_8004FF84
    if (ctx->r12 != 0) {
        // 0x8004FF18: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8004FF84;
    }
    // 0x8004FF18: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004FF1C: jal         0x8004F824
    // 0x8004FF20: nop

    func_8004F824(rdram, ctx);
        goto after_29;
    // 0x8004FF20: nop

    after_29:
    // 0x8004FF24: bne         $v0, $zero, L_8004FF84
    if (ctx->r2 != 0) {
        // 0x8004FF28: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8004FF84;
    }
    // 0x8004FF28: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004FF2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004FF30: nop

    // 0x8004FF34: lbu         $t5, 0xBD($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBD);
    // 0x8004FF38: nop

    // 0x8004FF3C: andi        $t7, $t5, 0x10
    ctx->r15 = ctx->r13 & 0X10;
    // 0x8004FF40: bne         $t7, $zero, L_8004FF84
    if (ctx->r15 != 0) {
        // 0x8004FF44: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8004FF84;
    }
    // 0x8004FF44: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004FF48: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x8004FF4C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004FF50: ori         $t8, $t9, 0x8
    ctx->r24 = ctx->r25 | 0X8;
    // 0x8004FF54: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
    // 0x8004FF58: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x8004FF5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8004FF60: beq         $t0, $at, L_8004FF80
    if (ctx->r8 == ctx->r1) {
        // 0x8004FF64: lui         $t1, 0x8010
        ctx->r9 = S32(0X8010 << 16);
            goto L_8004FF80;
    }
    // 0x8004FF64: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8004FF68: lbu         $t1, 0x522C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X522C);
    // 0x8004FF6C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8004FF70: beq         $t1, $at, L_8004FF84
    if (ctx->r9 == ctx->r1) {
        // 0x8004FF74: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8004FF84;
    }
    // 0x8004FF74: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8004FF78: jal         0x802719DC
    // 0x8004FF7C: addiu       $a0, $zero, 0x3C1
    ctx->r4 = ADD32(0, 0X3C1);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_30;
    // 0x8004FF7C: addiu       $a0, $zero, 0x3C1
    ctx->r4 = ADD32(0, 0X3C1);
    after_30:
L_8004FF80:
    // 0x8004FF80: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
L_8004FF84:
    // 0x8004FF84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004FF88: jal         0x8004F044
    // 0x8004FF8C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8004F044(rdram, ctx);
        goto after_31;
    // 0x8004FF8C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_31:
    // 0x8004FF90: beq         $v0, $zero, L_8004FFAC
    if (ctx->r2 == 0) {
        // 0x8004FF94: lui         $at, 0x4218
        ctx->r1 = S32(0X4218 << 16);
            goto L_8004FFAC;
    }
    // 0x8004FF94: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x8004FF98: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8004FF9C: jal         0x8004F62C
    // 0x8004FFA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8004F62C(rdram, ctx);
        goto after_32;
    // 0x8004FFA0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_32:
    // 0x8004FFA4: b           L_800501F0
    // 0x8004FFA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800501F0;
    // 0x8004FFA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8004FFAC:
    // 0x8004FFAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8004FFB0: jal         0x8004F044
    // 0x8004FFB4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8004F044(rdram, ctx);
        goto after_33;
    // 0x8004FFB4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_33:
    // 0x8004FFB8: beq         $v0, $zero, L_8004FFD0
    if (ctx->r2 == 0) {
        // 0x8004FFBC: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_8004FFD0;
    }
    // 0x8004FFBC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8004FFC0: jal         0x8004F62C
    // 0x8004FFC4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8004F62C(rdram, ctx);
        goto after_34;
    // 0x8004FFC4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_34:
    // 0x8004FFC8: b           L_800501F0
    // 0x8004FFCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800501F0;
    // 0x8004FFCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8004FFD0:
    // 0x8004FFD0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8004FFD4: jal         0x8004F1C8
    // 0x8004FFD8: nop

    func_8004F1C8(rdram, ctx);
        goto after_35;
    // 0x8004FFD8: nop

    after_35:
    // 0x8004FFDC: beq         $v0, $zero, L_80050140
    if (ctx->r2 == 0) {
        // 0x8004FFE0: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80050140;
    }
    // 0x8004FFE0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8004FFE4: addiu       $a0, $a0, 0x361E
    ctx->r4 = ADD32(ctx->r4, 0X361E);
    // 0x8004FFE8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8004FFEC: nop

    // 0x8004FFF0: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x8004FFF4: bne         $t2, $zero, L_800501F0
    if (ctx->r10 != 0) {
        // 0x8004FFF8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x8004FFF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004FFFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80050000: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80050004: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80050008: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8005000C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80050010: nop

    // 0x80050014: bc1t        L_80050038
    if (c1cs) {
        // 0x80050018: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_80050038;
    }
    // 0x80050018: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8005001C: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x80050020: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80050024: beq         $t3, $at, L_80050034
    if (ctx->r11 == ctx->r1) {
        // 0x80050028: andi        $t6, $v1, 0x1000
        ctx->r14 = ctx->r3 & 0X1000;
            goto L_80050034;
    }
    // 0x80050028: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x8005002C: beq         $t6, $zero, L_800500B8
    if (ctx->r14 == 0) {
        // 0x80050030: ori         $t1, $v1, 0x10
        ctx->r9 = ctx->r3 | 0X10;
            goto L_800500B8;
    }
    // 0x80050030: ori         $t1, $v1, 0x10
    ctx->r9 = ctx->r3 | 0X10;
L_80050034:
    // 0x80050034: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
L_80050038:
    // 0x80050038: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8005003C: nop

    // 0x80050040: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x80050044: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80050048: nop

    // 0x8005004C: swc1        $f0, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f0.u32l;
    // 0x80050050: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80050054: nop

    // 0x80050058: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x8005005C: jal         0x80059208
    // 0x80050060: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_80059208(rdram, ctx);
        goto after_36;
    // 0x80050060: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_36:
    // 0x80050064: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80050068: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x8005006C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80050070: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80050074: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80050078: bne         $t7, $zero, L_800501F0
    if (ctx->r15 != 0) {
        // 0x8005007C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x8005007C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80050080: lhu         $t9, 0x3630($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3630);
    // 0x80050084: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80050088: slti        $at, $t9, 0x1E
    ctx->r1 = SIGNED(ctx->r25) < 0X1E ? 1 : 0;
    // 0x8005008C: beq         $at, $zero, L_800501F0
    if (ctx->r1 == 0) {
        // 0x80050090: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x80050090: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80050094: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80050098: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8005009C: bne         $t8, $at, L_800501EC
    if (ctx->r24 != ctx->r1) {
        // 0x800500A0: ori         $t0, $v1, 0x80
        ctx->r8 = ctx->r3 | 0X80;
            goto L_800501EC;
    }
    // 0x800500A0: ori         $t0, $v1, 0x80
    ctx->r8 = ctx->r3 | 0X80;
    // 0x800500A4: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800500A8: jal         0x8004F774
    // 0x800500AC: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    func_8004F774(rdram, ctx);
        goto after_37;
    // 0x800500AC: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    after_37:
    // 0x800500B0: b           L_800501F0
    // 0x800500B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800501F0;
    // 0x800500B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800500B8:
    // 0x800500B8: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x800500BC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800500C0: sh          $t2, 0xBE($v0)
    MEM_H(0XBE, ctx->r2) = ctx->r10;
    // 0x800500C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800500C8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800500CC: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x800500D0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800500D4: andi        $t6, $t3, 0xFFFE
    ctx->r14 = ctx->r11 & 0XFFFE;
    // 0x800500D8: sh          $t6, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r14;
    // 0x800500DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800500E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800500E4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800500E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800500EC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800500F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800500F4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800500F8: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x800500FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80050100: lwc1        $f10, -0x6EE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6EE4);
    // 0x80050104: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80050108: lwc1        $f11, -0x6EE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6EE8);
    // 0x8005010C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80050110: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80050114: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80050118: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
    // 0x8005011C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80050120: nop

    // 0x80050124: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80050128: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8005012C: lw          $a2, 0x20($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X20);
    // 0x80050130: jal         0x80052FF0
    // 0x80050134: nop

    func_80052FF0(rdram, ctx);
        goto after_38;
    // 0x80050134: nop

    after_38:
    // 0x80050138: b           L_800501F0
    // 0x8005013C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_800501F0;
    // 0x8005013C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80050140:
    // 0x80050140: jal         0x8004F324
    // 0x80050144: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_8004F324(rdram, ctx);
        goto after_39;
    // 0x80050144: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_39:
    // 0x80050148: beq         $v0, $zero, L_800501EC
    if (ctx->r2 == 0) {
        // 0x8005014C: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_800501EC;
    }
    // 0x8005014C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80050150: addiu       $v0, $v0, 0x3689
    ctx->r2 = ADD32(ctx->r2, 0X3689);
    // 0x80050154: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x80050158: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8005015C: bne         $t4, $zero, L_800501B4
    if (ctx->r12 != 0) {
        // 0x80050160: nop
    
            goto L_800501B4;
    }
    // 0x80050160: nop

    // 0x80050164: jal         0x80059208
    // 0x80050168: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    func_80059208(rdram, ctx);
        goto after_40;
    // 0x80050168: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    after_40:
    // 0x8005016C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80050170: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80050174: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80050178: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005017C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80050180: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80050184: nop

    // 0x80050188: bc1f        L_800501B4
    if (!c1cs) {
        // 0x8005018C: nop
    
            goto L_800501B4;
    }
    // 0x8005018C: nop

    // 0x80050190: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80050194: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80050198: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8005019C: nop

    // 0x800501A0: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800501A4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800501A8: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800501AC: nop

    // 0x800501B0: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
L_800501B4:
    // 0x800501B4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800501B8: lhu         $v1, 0x361E($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X361E);
    // 0x800501BC: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800501C0: andi        $t8, $v1, 0x100
    ctx->r24 = ctx->r3 & 0X100;
    // 0x800501C4: bne         $t8, $zero, L_800501F0
    if (ctx->r24 != 0) {
        // 0x800501C8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800501F0;
    }
    // 0x800501C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800501CC: lhu         $t0, 0x3630($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3630);
    // 0x800501D0: ori         $t1, $v1, 0x100
    ctx->r9 = ctx->r3 | 0X100;
    // 0x800501D4: slti        $at, $t0, 0x1E
    ctx->r1 = SIGNED(ctx->r8) < 0X1E ? 1 : 0;
    // 0x800501D8: beq         $at, $zero, L_800501EC
    if (ctx->r1 == 0) {
        // 0x800501DC: addiu       $a0, $zero, 0x16
        ctx->r4 = ADD32(0, 0X16);
            goto L_800501EC;
    }
    // 0x800501DC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x800501E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800501E4: jal         0x80271980
    // 0x800501E8: sh          $t1, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r9;
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_41;
    // 0x800501E8: sh          $t1, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r9;
    after_41:
L_800501EC:
    // 0x800501EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800501F0:
    // 0x800501F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800501F4: jr          $ra
    // 0x800501F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800501F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800501FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800501FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050200: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80050204: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80050208: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8005020C: bne         $t6, $at, L_80050290
    if (ctx->r14 != ctx->r1) {
        // 0x80050210: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80050290;
    }
    // 0x80050210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80050214: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80050218: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x8005021C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80050220: nop

    // 0x80050224: lwc1        $f12, 0x8($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80050228: jal         0x80272AEC
    // 0x8005022C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x8005022C: nop

    after_0:
    // 0x80050230: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050234: lwc1        $f4, -0x6EE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6EE0);
    // 0x80050238: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005023C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80050240: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x80050244: bc1f        L_80050290
    if (!c1cs) {
        // 0x80050248: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_80050290;
    }
    // 0x80050248: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8005024C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050250: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80050254: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80050258: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x8005025C: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x80050260: nop

    // 0x80050264: bc1f        L_80050290
    if (!c1cs) {
        // 0x80050268: nop
    
            goto L_80050290;
    }
    // 0x80050268: nop

    // 0x8005026C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80050270: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80050274: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80050278: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x8005027C: nop

    // 0x80050280: swc1        $f0, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f0.u32l;
    // 0x80050284: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80050288: nop

    // 0x8005028C: swc1        $f12, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f12.u32l;
L_80050290:
    // 0x80050290: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80050294: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x80050298: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8005029C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800502A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800502A4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800502A8: beq         $v1, $zero, L_80050654
    if (ctx->r3 == 0) {
        // 0x800502AC: addiu       $a0, $a0, 0x3B20
        ctx->r4 = ADD32(ctx->r4, 0X3B20);
            goto L_80050654;
    }
    // 0x800502AC: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x800502B0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800502B4: addiu       $a1, $a1, 0x3611
    ctx->r5 = ADD32(ctx->r5, 0X3611);
    // 0x800502B8: lbu         $t0, 0x0($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X0);
    // 0x800502BC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800502C0: beq         $t0, $zero, L_80050658
    if (ctx->r8 == 0) {
        // 0x800502C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80050658;
    }
    // 0x800502C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800502C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800502CC: nop

    // 0x800502D0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800502D4: nop

    // 0x800502D8: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x800502DC: nop

    // 0x800502E0: bc1f        L_80050318
    if (!c1cs) {
        // 0x800502E4: nop
    
            goto L_80050318;
    }
    // 0x800502E4: nop

    // 0x800502E8: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x800502EC: nop

    // 0x800502F0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800502F4: nop

    // 0x800502F8: bc1f        L_80050344
    if (!c1cs) {
        // 0x800502FC: nop
    
            goto L_80050344;
    }
    // 0x800502FC: nop

    // 0x80050300: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x80050304: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x80050308: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005030C: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x80050310: b           L_80050344
    // 0x80050314: nop

        goto L_80050344;
    // 0x80050314: nop

L_80050318:
    // 0x80050318: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8005031C: nop

    // 0x80050320: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80050324: nop

    // 0x80050328: bc1f        L_80050344
    if (!c1cs) {
        // 0x8005032C: nop
    
            goto L_80050344;
    }
    // 0x8005032C: nop

    // 0x80050330: neg.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = -ctx->f2.fl;
    // 0x80050334: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x80050338: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005033C: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x80050340: nop

L_80050344:
    // 0x80050344: bne         $v1, $at, L_800504A8
    if (ctx->r3 != ctx->r1) {
        // 0x80050348: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800504A8;
    }
    // 0x80050348: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8005034C: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80050350: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050354: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80050358: beq         $t2, $zero, L_800503BC
    if (ctx->r10 == 0) {
        // 0x8005035C: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_800503BC;
    }
    // 0x8005035C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80050360: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80050364: nop

    // 0x80050368: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8005036C: nop

    // 0x80050370: bc1f        L_80050388
    if (!c1cs) {
        // 0x80050374: nop
    
            goto L_80050388;
    }
    // 0x80050374: nop

    // 0x80050378: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x8005037C: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80050380: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050384: nop

L_80050388:
    // 0x80050388: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8005038C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050390: nop

    // 0x80050394: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80050398: nop

    // 0x8005039C: bc1f        L_800503BC
    if (!c1cs) {
        // 0x800503A0: nop
    
            goto L_800503BC;
    }
    // 0x800503A0: nop

    // 0x800503A4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800503A8: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800503AC: nop

    // 0x800503B0: swc1        $f0, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f0.u32l;
    // 0x800503B4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800503B8: nop

L_800503BC:
    // 0x800503BC: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x800503C0: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x800503C4: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x800503C8: beq         $t5, $zero, L_8005042C
    if (ctx->r13 == 0) {
        // 0x800503CC: nop
    
            goto L_8005042C;
    }
    // 0x800503CC: nop

    // 0x800503D0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800503D4: nop

    // 0x800503D8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800503DC: nop

    // 0x800503E0: bc1f        L_800503F8
    if (!c1cs) {
        // 0x800503E4: nop
    
            goto L_800503F8;
    }
    // 0x800503E4: nop

    // 0x800503E8: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x800503EC: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x800503F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800503F4: nop

L_800503F8:
    // 0x800503F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800503FC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050400: nop

    // 0x80050404: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80050408: nop

    // 0x8005040C: bc1f        L_8005042C
    if (!c1cs) {
        // 0x80050410: nop
    
            goto L_8005042C;
    }
    // 0x80050410: nop

    // 0x80050414: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80050418: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8005041C: nop

    // 0x80050420: swc1        $f0, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f0.u32l;
    // 0x80050424: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050428: nop

L_8005042C:
    // 0x8005042C: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80050430: nop

    // 0x80050434: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80050438: beq         $t8, $zero, L_80050498
    if (ctx->r24 == 0) {
        // 0x8005043C: nop
    
            goto L_80050498;
    }
    // 0x8005043C: nop

    // 0x80050440: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80050444: nop

    // 0x80050448: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8005044C: nop

    // 0x80050450: bc1f        L_80050468
    if (!c1cs) {
        // 0x80050454: nop
    
            goto L_80050468;
    }
    // 0x80050454: nop

    // 0x80050458: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x8005045C: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x80050460: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050464: nop

L_80050468:
    // 0x80050468: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005046C: nop

    // 0x80050470: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80050474: nop

    // 0x80050478: bc1f        L_80050498
    if (!c1cs) {
        // 0x8005047C: nop
    
            goto L_80050498;
    }
    // 0x8005047C: nop

    // 0x80050480: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x80050484: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80050488: nop

    // 0x8005048C: swc1        $f14, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f14.u32l;
    // 0x80050490: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050494: nop

L_80050498:
    // 0x80050498: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8005049C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800504A0: b           L_80050618
    // 0x800504A4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
        goto L_80050618;
    // 0x800504A4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_800504A8:
    // 0x800504A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800504AC: beq         $v0, $at, L_800504BC
    if (ctx->r2 == ctx->r1) {
        // 0x800504B0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_800504BC;
    }
    // 0x800504B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800504B4: bne         $v0, $at, L_80050658
    if (ctx->r2 != ctx->r1) {
        // 0x800504B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80050658;
    }
    // 0x800504B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800504BC:
    // 0x800504BC: lbu         $t0, 0x0($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X0);
    // 0x800504C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800504C4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800504C8: beq         $t1, $zero, L_8005052C
    if (ctx->r9 == 0) {
        // 0x800504CC: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_8005052C;
    }
    // 0x800504CC: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x800504D0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800504D4: nop

    // 0x800504D8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800504DC: nop

    // 0x800504E0: bc1f        L_800504F8
    if (!c1cs) {
        // 0x800504E4: nop
    
            goto L_800504F8;
    }
    // 0x800504E4: nop

    // 0x800504E8: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x800504EC: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x800504F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800504F4: nop

L_800504F8:
    // 0x800504F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800504FC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050500: nop

    // 0x80050504: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80050508: nop

    // 0x8005050C: bc1f        L_8005052C
    if (!c1cs) {
        // 0x80050510: nop
    
            goto L_8005052C;
    }
    // 0x80050510: nop

    // 0x80050514: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80050518: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x8005051C: nop

    // 0x80050520: swc1        $f0, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f0.u32l;
    // 0x80050524: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050528: nop

L_8005052C:
    // 0x8005052C: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    // 0x80050530: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80050534: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80050538: beq         $t4, $zero, L_8005059C
    if (ctx->r12 == 0) {
        // 0x8005053C: nop
    
            goto L_8005059C;
    }
    // 0x8005053C: nop

    // 0x80050540: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80050544: nop

    // 0x80050548: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8005054C: nop

    // 0x80050550: bc1f        L_80050568
    if (!c1cs) {
        // 0x80050554: nop
    
            goto L_80050568;
    }
    // 0x80050554: nop

    // 0x80050558: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x8005055C: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80050560: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050564: nop

L_80050568:
    // 0x80050568: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8005056C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050570: nop

    // 0x80050574: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80050578: nop

    // 0x8005057C: bc1f        L_8005059C
    if (!c1cs) {
        // 0x80050580: nop
    
            goto L_8005059C;
    }
    // 0x80050580: nop

    // 0x80050584: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80050588: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8005058C: nop

    // 0x80050590: swc1        $f0, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f0.u32l;
    // 0x80050594: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050598: nop

L_8005059C:
    // 0x8005059C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x800505A0: nop

    // 0x800505A4: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x800505A8: beq         $t7, $zero, L_80050608
    if (ctx->r15 == 0) {
        // 0x800505AC: nop
    
            goto L_80050608;
    }
    // 0x800505AC: nop

    // 0x800505B0: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800505B4: nop

    // 0x800505B8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800505BC: nop

    // 0x800505C0: bc1f        L_800505D8
    if (!c1cs) {
        // 0x800505C4: nop
    
            goto L_800505D8;
    }
    // 0x800505C4: nop

    // 0x800505C8: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x800505CC: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x800505D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800505D4: nop

L_800505D8:
    // 0x800505D8: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800505DC: nop

    // 0x800505E0: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x800505E4: nop

    // 0x800505E8: bc1f        L_80050608
    if (!c1cs) {
        // 0x800505EC: nop
    
            goto L_80050608;
    }
    // 0x800505EC: nop

    // 0x800505F0: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x800505F4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x800505F8: nop

    // 0x800505FC: swc1        $f14, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f14.u32l;
    // 0x80050600: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80050604: nop

L_80050608:
    // 0x80050608: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8005060C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80050610: nop

    // 0x80050614: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
L_80050618:
    // 0x80050618: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8005061C: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x80050620: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80050624: jal         0x80272B1C
    // 0x80050628: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x80050628: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x8005062C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80050630: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x80050634: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80050638: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8005063C: nop

    // 0x80050640: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x80050644: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80050648: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005064C: nop

    // 0x80050650: swc1        $f4, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f4.u32l;
L_80050654:
    // 0x80050654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80050658:
    // 0x80050658: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8005065C: jr          $ra
    // 0x80050660: nop

    return;
    // 0x80050660: nop

;}
RECOMP_FUNC void func_80050664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050664: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050668: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005066C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050670: lwc1        $f4, -0x6EDC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6EDC);
    // 0x80050674: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80050678: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005067C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80050680: nop

    // 0x80050684: bc1t        L_800506D8
    if (c1cs) {
        // 0x80050688: nop
    
            goto L_800506D8;
    }
    // 0x80050688: nop

    // 0x8005068C: lwc1        $f6, -0x6ED8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6ED8);
    // 0x80050690: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050694: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80050698: nop

    // 0x8005069C: bc1t        L_800506D8
    if (c1cs) {
        // 0x800506A0: nop
    
            goto L_800506D8;
    }
    // 0x800506A0: nop

    // 0x800506A4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800506A8: lwc1        $f8, -0x6ED4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6ED4);
    // 0x800506AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800506B0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800506B4: nop

    // 0x800506B8: bc1t        L_800506D8
    if (c1cs) {
        // 0x800506BC: nop
    
            goto L_800506D8;
    }
    // 0x800506BC: nop

    // 0x800506C0: lwc1        $f10, -0x6ED0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6ED0);
    // 0x800506C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800506C8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x800506CC: nop

    // 0x800506D0: bc1f        L_800506E0
    if (!c1cs) {
        // 0x800506D4: nop
    
            goto L_800506E0;
    }
    // 0x800506D4: nop

L_800506D8:
    // 0x800506D8: jr          $ra
    // 0x800506DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800506DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800506E0:
    // 0x800506E0: jr          $ra
    // 0x800506E4: nop

    return;
    // 0x800506E4: nop

;}
RECOMP_FUNC void func_800506E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800506E8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800506EC: lhu         $v1, 0x361C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X361C);
    // 0x800506F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800506F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800506F8: beq         $v1, $zero, L_80050708
    if (ctx->r3 == 0) {
        // 0x800506FC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80050708;
    }
    // 0x800506FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80050700: b           L_80050E58
    // 0x80050704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80050E58;
    // 0x80050704: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80050708:
    // 0x80050708: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8005070C: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80050710: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050714: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050718: lhu         $t6, 0xDC($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XDC);
    // 0x8005071C: nop

    // 0x80050720: beq         $t6, $zero, L_80050800
    if (ctx->r14 == 0) {
        // 0x80050724: nop
    
            goto L_80050800;
    }
    // 0x80050724: nop

    // 0x80050728: lh          $v1, 0xD8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XD8);
    // 0x8005072C: addiu       $t7, $zero, -0x1FD
    ctx->r15 = ADD32(0, -0X1FD);
    // 0x80050730: slti        $at, $v1, -0x1FD
    ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
    // 0x80050734: beq         $at, $zero, L_80050754
    if (ctx->r1 == 0) {
        // 0x80050738: addiu       $t8, $zero, 0x1FD
        ctx->r24 = ADD32(0, 0X1FD);
            goto L_80050754;
    }
    // 0x80050738: addiu       $t8, $zero, 0x1FD
    ctx->r24 = ADD32(0, 0X1FD);
    // 0x8005073C: sh          $t7, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r15;
    // 0x80050740: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050744: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050748: nop

    // 0x8005074C: lh          $v1, 0xD8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XD8);
    // 0x80050750: nop

L_80050754:
    // 0x80050754: slti        $at, $v1, 0x1FE
    ctx->r1 = SIGNED(ctx->r3) < 0X1FE ? 1 : 0;
    // 0x80050758: bne         $at, $zero, L_80050770
    if (ctx->r1 != 0) {
        // 0x8005075C: addiu       $t9, $zero, -0x15F
        ctx->r25 = ADD32(0, -0X15F);
            goto L_80050770;
    }
    // 0x8005075C: addiu       $t9, $zero, -0x15F
    ctx->r25 = ADD32(0, -0X15F);
    // 0x80050760: sh          $t8, 0xD8($v0)
    MEM_H(0XD8, ctx->r2) = ctx->r24;
    // 0x80050764: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050768: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005076C: nop

L_80050770:
    // 0x80050770: lh          $v1, 0xDA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XDA);
    // 0x80050774: addiu       $t1, $zero, 0x15F
    ctx->r9 = ADD32(0, 0X15F);
    // 0x80050778: slti        $at, $v1, -0x15F
    ctx->r1 = SIGNED(ctx->r3) < -0X15F ? 1 : 0;
    // 0x8005077C: beq         $at, $zero, L_8005079C
    if (ctx->r1 == 0) {
        // 0x80050780: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8005079C;
    }
    // 0x80050780: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80050784: sh          $t9, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r25;
    // 0x80050788: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005078C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050790: nop

    // 0x80050794: lh          $v1, 0xDA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XDA);
    // 0x80050798: nop

L_8005079C:
    // 0x8005079C: slti        $at, $v1, 0x160
    ctx->r1 = SIGNED(ctx->r3) < 0X160 ? 1 : 0;
    // 0x800507A0: bne         $at, $zero, L_800507C0
    if (ctx->r1 != 0) {
        // 0x800507A4: nop
    
            goto L_800507C0;
    }
    // 0x800507A4: nop

    // 0x800507A8: sh          $t1, 0xDA($v0)
    MEM_H(0XDA, ctx->r2) = ctx->r9;
    // 0x800507AC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800507B0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800507B4: nop

    // 0x800507B8: lh          $v1, 0xDA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XDA);
    // 0x800507BC: nop

L_800507C0:
    // 0x800507C0: lh          $t2, 0xD8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XD8);
    // 0x800507C4: nop

    // 0x800507C8: bltz        $t2, L_800507D8
    if (SIGNED(ctx->r10) < 0) {
        // 0x800507CC: nop
    
            goto L_800507D8;
    }
    // 0x800507CC: nop

    // 0x800507D0: b           L_800507D8
    // 0x800507D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800507D8;
    // 0x800507D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800507D8:
    // 0x800507D8: bltz        $v1, L_800507E8
    if (SIGNED(ctx->r3) < 0) {
        // 0x800507DC: andi        $a1, $a0, 0xFFFF
        ctx->r5 = ctx->r4 & 0XFFFF;
            goto L_800507E8;
    }
    // 0x800507DC: andi        $a1, $a0, 0xFFFF
    ctx->r5 = ctx->r4 & 0XFFFF;
    // 0x800507E0: b           L_800507EC
    // 0x800507E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
        goto L_800507EC;
    // 0x800507E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_800507E8:
    // 0x800507E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_800507EC:
    // 0x800507EC: or          $t3, $a1, $a0
    ctx->r11 = ctx->r5 | ctx->r4;
    // 0x800507F0: ori         $v0, $t3, 0x10
    ctx->r2 = ctx->r11 | 0X10;
    // 0x800507F4: andi        $t4, $v0, 0xFFFF
    ctx->r12 = ctx->r2 & 0XFFFF;
    // 0x800507F8: b           L_80050E58
    // 0x800507FC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_80050E58;
    // 0x800507FC: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80050800:
    // 0x80050800: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80050804: lwc1        $f4, -0x6ECC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6ECC);
    // 0x80050808: addiu       $t0, $zero, -0x1FD
    ctx->r8 = ADD32(0, -0X1FD);
    // 0x8005080C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80050810: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050814: bc1f        L_80050824
    if (!c1cs) {
        // 0x80050818: nop
    
            goto L_80050824;
    }
    // 0x80050818: nop

    // 0x8005081C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80050820: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_80050824:
    // 0x80050824: lwc1        $f6, -0x6EC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6EC8);
    // 0x80050828: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8005082C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80050830: ori         $t5, $a1, 0x1
    ctx->r13 = ctx->r5 | 0X1;
    // 0x80050834: bc1f        L_80050844
    if (!c1cs) {
        // 0x80050838: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80050844;
    }
    // 0x80050838: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005083C: andi        $a1, $t5, 0xFFFF
    ctx->r5 = ctx->r13 & 0XFFFF;
    // 0x80050840: addiu       $t0, $zero, 0x1FD
    ctx->r8 = ADD32(0, 0X1FD);
L_80050844:
    // 0x80050844: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050848: lwc1        $f8, -0x6EC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6EC4);
    // 0x8005084C: ori         $t7, $a1, 0x4
    ctx->r15 = ctx->r5 | 0X4;
    // 0x80050850: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80050854: addiu       $t9, $zero, -0x15F
    ctx->r25 = ADD32(0, -0X15F);
    // 0x80050858: bc1f        L_80050868
    if (!c1cs) {
        // 0x8005085C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80050868;
    }
    // 0x8005085C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050860: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x80050864: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80050868:
    // 0x80050868: lwc1        $f10, -0x6EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6EC0);
    // 0x8005086C: ori         $t1, $a1, 0x8
    ctx->r9 = ctx->r5 | 0X8;
    // 0x80050870: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80050874: addiu       $t3, $zero, 0x15F
    ctx->r11 = ADD32(0, 0X15F);
    // 0x80050878: bc1f        L_8005088C
    if (!c1cs) {
        // 0x8005087C: andi        $t4, $a1, 0x3
        ctx->r12 = ctx->r5 & 0X3;
            goto L_8005088C;
    }
    // 0x8005087C: andi        $t4, $a1, 0x3
    ctx->r12 = ctx->r5 & 0X3;
    // 0x80050880: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x80050884: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80050888: andi        $t4, $a1, 0x3
    ctx->r12 = ctx->r5 & 0X3;
L_8005088C:
    // 0x8005088C: bne         $t4, $zero, L_800508D4
    if (ctx->r12 != 0) {
        // 0x80050890: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_800508D4;
    }
    // 0x80050890: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80050894: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    // 0x80050898: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8005089C: jal         0x80272AEC
    // 0x800508A0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x800508A0: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_0:
    // 0x800508A4: lui         $at, 0x43FE
    ctx->r1 = S32(0X43FE << 16);
    // 0x800508A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800508AC: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x800508B0: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800508B4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800508B8: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x800508BC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800508C0: bc1f        L_80050A00
    if (!c1cs) {
        // 0x800508C4: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80050A00;
    }
    // 0x800508C4: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x800508C8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800508CC: lhu         $v1, 0x361C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X361C);
    // 0x800508D0: nop

L_800508D4:
    // 0x800508D4: bne         $v1, $zero, L_80050A00
    if (ctx->r3 != 0) {
        // 0x800508D8: lui         $a0, 0x801B
        ctx->r4 = S32(0X801B << 16);
            goto L_80050A00;
    }
    // 0x800508D8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800508DC: addiu       $a0, $a0, 0x3610
    ctx->r4 = ADD32(ctx->r4, 0X3610);
    // 0x800508E0: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x800508E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800508E8: beq         $t5, $at, L_80050A00
    if (ctx->r13 == ctx->r1) {
        // 0x800508EC: nop
    
            goto L_80050A00;
    }
    // 0x800508EC: nop

    // 0x800508F0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800508F4: nop

    // 0x800508F8: lbu         $t6, 0xBD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBD);
    // 0x800508FC: nop

    // 0x80050900: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x80050904: bne         $t7, $zero, L_80050A00
    if (ctx->r15 != 0) {
        // 0x80050908: nop
    
            goto L_80050A00;
    }
    // 0x80050908: nop

    // 0x8005090C: lw          $t8, 0x84($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X84);
    // 0x80050910: nop

    // 0x80050914: bne         $t8, $zero, L_80050940
    if (ctx->r24 != 0) {
        // 0x80050918: nop
    
            goto L_80050940;
    }
    // 0x80050918: nop

    // 0x8005091C: lw          $t9, 0xB0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB0);
    // 0x80050920: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80050924: bne         $t9, $zero, L_80050940
    if (ctx->r25 != 0) {
        // 0x80050928: nop
    
            goto L_80050940;
    }
    // 0x80050928: nop

    // 0x8005092C: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x80050930: nop

    // 0x80050934: andi        $t2, $t1, 0x2200
    ctx->r10 = ctx->r9 & 0X2200;
    // 0x80050938: beq         $t2, $zero, L_80050A00
    if (ctx->r10 == 0) {
        // 0x8005093C: nop
    
            goto L_80050A00;
    }
    // 0x8005093C: nop

L_80050940:
    // 0x80050940: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050944: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80050948: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8005094C: jal         0x80272AEC
    // 0x80050950: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80050950: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    after_1:
    // 0x80050954: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80050958: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005095C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050960: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80050964: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x80050968: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8005096C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80050970: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80050974: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80050978: bc1f        L_80050A00
    if (!c1cs) {
        // 0x8005097C: addiu       $v1, $v1, 0x361E
        ctx->r3 = ADD32(ctx->r3, 0X361E);
            goto L_80050A00;
    }
    // 0x8005097C: addiu       $v1, $v1, 0x361E
    ctx->r3 = ADD32(ctx->r3, 0X361E);
    // 0x80050980: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050984: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80050988: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8005098C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80050990: nop

    // 0x80050994: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x80050998: nop

    // 0x8005099C: bc1f        L_80050A00
    if (!c1cs) {
        // 0x800509A0: nop
    
            goto L_80050A00;
    }
    // 0x800509A0: nop

    // 0x800509A4: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x800509A8: nop

    // 0x800509AC: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x800509B0: nop

    // 0x800509B4: bc1f        L_80050A00
    if (!c1cs) {
        // 0x800509B8: nop
    
            goto L_80050A00;
    }
    // 0x800509B8: nop

    // 0x800509BC: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x800509C0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800509C4: ori         $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 | 0X1000;
    // 0x800509C8: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    // 0x800509CC: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x800509D0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800509D4: bne         $t5, $zero, L_80050A00
    if (ctx->r13 != 0) {
        // 0x800509D8: nop
    
            goto L_80050A00;
    }
    // 0x800509D8: nop

    // 0x800509DC: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x800509E0: nop

    // 0x800509E4: andi        $t7, $t6, 0x600
    ctx->r15 = ctx->r14 & 0X600;
    // 0x800509E8: bne         $t7, $zero, L_80050A00
    if (ctx->r15 != 0) {
        // 0x800509EC: nop
    
            goto L_80050A00;
    }
    // 0x800509EC: nop

    // 0x800509F0: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x800509F4: nop

    // 0x800509F8: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x800509FC: sh          $t9, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r25;
L_80050A00:
    // 0x80050A00: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050A04: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80050A08: lhu         $v1, 0xC0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XC0);
    // 0x80050A0C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80050A10: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050A14: andi        $t1, $v1, 0x8
    ctx->r9 = ctx->r3 & 0X8;
    // 0x80050A18: beq         $t1, $zero, L_80050A30
    if (ctx->r9 == 0) {
        // 0x80050A1C: addiu       $a0, $a0, 0x3610
        ctx->r4 = ADD32(ctx->r4, 0X3610);
            goto L_80050A30;
    }
    // 0x80050A1C: addiu       $a0, $a0, 0x3610
    ctx->r4 = ADD32(ctx->r4, 0X3610);
    // 0x80050A20: ori         $a1, $a2, 0x20
    ctx->r5 = ctx->r6 | 0X20;
    // 0x80050A24: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x80050A28: b           L_80050AF0
    // 0x80050A2C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
        goto L_80050AF0;
    // 0x80050A2C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_80050A30:
    // 0x80050A30: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x80050A34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80050A38: bne         $t3, $at, L_80050AF0
    if (ctx->r11 != ctx->r1) {
        // 0x80050A3C: nop
    
            goto L_80050AF0;
    }
    // 0x80050A3C: nop

    // 0x80050A40: beq         $a1, $zero, L_80050AF0
    if (ctx->r5 == 0) {
        // 0x80050A44: ori         $t4, $v1, 0x8
        ctx->r12 = ctx->r3 | 0X8;
            goto L_80050AF0;
    }
    // 0x80050A44: ori         $t4, $v1, 0x8
    ctx->r12 = ctx->r3 | 0X8;
    // 0x80050A48: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x80050A4C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050A50: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80050A54: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80050A58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80050A5C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050A60: ori         $a1, $a2, 0x20
    ctx->r5 = ctx->r6 | 0X20;
    // 0x80050A64: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80050A68: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x80050A6C: bc1f        L_80050A94
    if (!c1cs) {
        // 0x80050A70: or          $a1, $t5, $zero
        ctx->r5 = ctx->r13 | 0;
            goto L_80050A94;
    }
    // 0x80050A70: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80050A74: lui         $at, 0xC214
    ctx->r1 = S32(0XC214 << 16);
    // 0x80050A78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80050A7C: nop

    // 0x80050A80: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x80050A84: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050A88: nop

    // 0x80050A8C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050A90: nop

L_80050A94:
    // 0x80050A94: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80050A98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80050A9C: lui         $at, 0x4214
    ctx->r1 = S32(0X4214 << 16);
    // 0x80050AA0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80050AA4: nop

    // 0x80050AA8: bc1f        L_80050AC4
    if (!c1cs) {
        // 0x80050AAC: nop
    
            goto L_80050AC4;
    }
    // 0x80050AAC: nop

    // 0x80050AB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80050AB4: nop

    // 0x80050AB8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80050ABC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050AC0: nop

L_80050AC4:
    // 0x80050AC4: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80050AC8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80050ACC: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80050AD0: nop

    // 0x80050AD4: bc1f        L_80050AF0
    if (!c1cs) {
        // 0x80050AD8: nop
    
            goto L_80050AF0;
    }
    // 0x80050AD8: nop

    // 0x80050ADC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80050AE0: nop

    // 0x80050AE4: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80050AE8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050AEC: nop

L_80050AF0:
    // 0x80050AF0: lhu         $t6, 0xC2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC2);
    // 0x80050AF4: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80050AF8: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x80050AFC: beq         $t7, $zero, L_80050B24
    if (ctx->r15 == 0) {
        // 0x80050B00: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80050B24;
    }
    // 0x80050B00: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80050B04: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x80050B08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80050B0C: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x80050B10: sh          $t9, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r25;
    // 0x80050B14: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x80050B18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80050B1C: andi        $t2, $t1, 0xEFFF
    ctx->r10 = ctx->r9 & 0XEFFF;
    // 0x80050B20: sh          $t2, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r10;
L_80050B24:
    // 0x80050B24: andi        $t3, $a1, 0x20
    ctx->r11 = ctx->r5 & 0X20;
    // 0x80050B28: beq         $t3, $zero, L_80050B74
    if (ctx->r11 == 0) {
        // 0x80050B2C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_80050B74;
    }
    // 0x80050B2C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80050B30: lbu         $t4, -0x32A4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X32A4);
    // 0x80050B34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80050B38: beq         $t4, $at, L_80050B74
    if (ctx->r12 == ctx->r1) {
        // 0x80050B3C: lui         $t5, 0x8010
        ctx->r13 = S32(0X8010 << 16);
            goto L_80050B74;
    }
    // 0x80050B3C: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80050B40: lbu         $t5, 0x522C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X522C);
    // 0x80050B44: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80050B48: beq         $t5, $at, L_80050B74
    if (ctx->r13 == ctx->r1) {
        // 0x80050B4C: addiu       $a0, $zero, 0x3C1
        ctx->r4 = ADD32(0, 0X3C1);
            goto L_80050B74;
    }
    // 0x80050B4C: addiu       $a0, $zero, 0x3C1
    ctx->r4 = ADD32(0, 0X3C1);
    // 0x80050B50: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    // 0x80050B54: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80050B58: jal         0x802719DC
    // 0x80050B5C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_2;
    // 0x80050B5C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_2:
    // 0x80050B60: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80050B64: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x80050B68: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80050B6C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80050B70: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
L_80050B74:
    // 0x80050B74: beq         $a1, $zero, L_80050E58
    if (ctx->r5 == 0) {
        // 0x80050B78: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80050E58;
    }
    // 0x80050B78: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80050B7C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050B80: nop

    // 0x80050B84: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80050B88: lwc1        $f4, 0x4C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80050B8C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050B90: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80050B94: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80050B98: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80050B9C: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80050BA0: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80050BA4: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80050BA8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80050BAC: jal         0x80272AEC
    // 0x80050BB0: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x80050BB0: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    after_3:
    // 0x80050BB4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050BB8: lwc1        $f3, -0x6EB8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6EB8);
    // 0x80050BBC: lwc1        $f2, -0x6EB4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6EB4);
    // 0x80050BC0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80050BC4: c.lt.d      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.d < ctx->f10.d;
    // 0x80050BC8: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x80050BCC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80050BD0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80050BD4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80050BD8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80050BDC: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80050BE0: bc1f        L_80050D6C
    if (!c1cs) {
        // 0x80050BE4: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80050D6C;
    }
    // 0x80050BE4: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80050BE8: nop

    // 0x80050BEC: div.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80050BF0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80050BF4: andi        $t6, $a2, 0x2
    ctx->r14 = ctx->r6 & 0X2;
    // 0x80050BF8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80050BFC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050C00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050C04: andi        $t9, $a2, 0x1
    ctx->r25 = ctx->r6 & 0X1;
    // 0x80050C08: andi        $t3, $a2, 0x4
    ctx->r11 = ctx->r6 & 0X4;
    // 0x80050C0C: andi        $t5, $a2, 0x8
    ctx->r13 = ctx->r6 & 0X8;
    // 0x80050C10: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80050C14: beq         $t6, $zero, L_80050C58
    if (ctx->r14 == 0) {
        // 0x80050C18: sub.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
            goto L_80050C58;
    }
    // 0x80050C18: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80050C1C: lwc1        $f6, -0x6EB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6EB0);
    // 0x80050C20: nop

    // 0x80050C24: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80050C28: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80050C2C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80050C30: nop

    // 0x80050C34: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80050C38: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050C3C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050C40: nop

    // 0x80050C44: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80050C48: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80050C4C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80050C50: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80050C54: nop

L_80050C58:
    // 0x80050C58: beq         $t9, $zero, L_80050C9C
    if (ctx->r25 == 0) {
        // 0x80050C5C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80050C9C;
    }
    // 0x80050C5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050C60: lwc1        $f4, -0x6EAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6EAC);
    // 0x80050C64: nop

    // 0x80050C68: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80050C6C: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80050C70: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80050C74: nop

    // 0x80050C78: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80050C7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050C80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050C84: nop

    // 0x80050C88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80050C8C: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80050C90: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80050C94: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80050C98: nop

L_80050C9C:
    // 0x80050C9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80050CA0: nop

    // 0x80050CA4: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80050CA8: nop

    // 0x80050CAC: bc1t        L_80050D40
    if (c1cs) {
        // 0x80050CB0: nop
    
            goto L_80050D40;
    }
    // 0x80050CB0: nop

    // 0x80050CB4: beq         $t3, $zero, L_80050CF8
    if (ctx->r11 == 0) {
        // 0x80050CB8: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80050CF8;
    }
    // 0x80050CB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050CBC: lwc1        $f4, -0x6EA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6EA8);
    // 0x80050CC0: nop

    // 0x80050CC4: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80050CC8: nop

    // 0x80050CCC: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80050CD0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80050CD4: nop

    // 0x80050CD8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80050CDC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050CE0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050CE4: nop

    // 0x80050CE8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80050CEC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80050CF0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80050CF4: nop

L_80050CF8:
    // 0x80050CF8: beq         $t5, $zero, L_80050E00
    if (ctx->r13 == 0) {
        // 0x80050CFC: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80050E00;
    }
    // 0x80050CFC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050D00: lwc1        $f18, -0x6EA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6EA4);
    // 0x80050D04: nop

    // 0x80050D08: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80050D0C: nop

    // 0x80050D10: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80050D14: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80050D18: nop

    // 0x80050D1C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80050D20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050D24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050D28: nop

    // 0x80050D2C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80050D30: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x80050D34: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80050D38: b           L_80050E04
    // 0x80050D3C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
        goto L_80050E04;
    // 0x80050D3C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
L_80050D40:
    // 0x80050D40: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80050D44: nop

    // 0x80050D48: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80050D4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050D50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050D54: nop

    // 0x80050D58: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80050D5C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80050D60: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80050D64: b           L_80050E04
    // 0x80050D68: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
        goto L_80050E04;
    // 0x80050D68: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
L_80050D6C:
    // 0x80050D6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80050D70: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80050D74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80050D78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050D7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050D80: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80050D84: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80050D88: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80050D8C: sh          $a1, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r5;
    // 0x80050D90: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80050D94: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80050D98: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80050D9C: jal         0x80272AEC
    // 0x80050DA0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x80050DA0: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_4:
    // 0x80050DA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050DA8: lwc1        $f3, -0x6EA0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6EA0);
    // 0x80050DAC: lwc1        $f2, -0x6E9C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6E9C);
    // 0x80050DB0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80050DB4: c.lt.d      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.d < ctx->f2.d;
    // 0x80050DB8: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x80050DBC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80050DC0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80050DC4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80050DC8: bc1f        L_80050E00
    if (!c1cs) {
        // 0x80050DCC: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80050E00;
    }
    // 0x80050DCC: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80050DD0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80050DD4: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80050DD8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80050DDC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80050DE0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80050DE4: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80050DE8: nop

    // 0x80050DEC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80050DF0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80050DF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80050DF8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80050DFC: nop

L_80050E00:
    // 0x80050E00: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
L_80050E04:
    // 0x80050E04: andi        $t7, $a2, 0xC
    ctx->r15 = ctx->r6 & 0XC;
    // 0x80050E08: sh          $t0, 0xD8($t4)
    MEM_H(0XD8, ctx->r12) = ctx->r8;
    // 0x80050E0C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80050E10: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80050E14: beq         $t7, $zero, L_80050E54
    if (ctx->r15 == 0) {
        // 0x80050E18: sh          $t5, 0xDA($t6)
        MEM_H(0XDA, ctx->r14) = ctx->r13;
            goto L_80050E54;
    }
    // 0x80050E18: sh          $t5, 0xDA($t6)
    MEM_H(0XDA, ctx->r14) = ctx->r13;
    // 0x80050E1C: andi        $t8, $a2, 0x3
    ctx->r24 = ctx->r6 & 0X3;
    // 0x80050E20: beq         $t8, $zero, L_80050E54
    if (ctx->r24 == 0) {
        // 0x80050E24: slti        $at, $t0, -0x1FC
        ctx->r1 = SIGNED(ctx->r8) < -0X1FC ? 1 : 0;
            goto L_80050E54;
    }
    // 0x80050E24: slti        $at, $t0, -0x1FC
    ctx->r1 = SIGNED(ctx->r8) < -0X1FC ? 1 : 0;
    // 0x80050E28: bne         $at, $zero, L_80050E4C
    if (ctx->r1 != 0) {
        // 0x80050E2C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80050E4C;
    }
    // 0x80050E2C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80050E30: slti        $at, $t0, 0x1FD
    ctx->r1 = SIGNED(ctx->r8) < 0X1FD ? 1 : 0;
    // 0x80050E34: beq         $at, $zero, L_80050E50
    if (ctx->r1 == 0) {
        // 0x80050E38: andi        $t1, $a1, 0xFFFC
        ctx->r9 = ctx->r5 & 0XFFFC;
            goto L_80050E50;
    }
    // 0x80050E38: andi        $t1, $a1, 0xFFFC
    ctx->r9 = ctx->r5 & 0XFFFC;
    // 0x80050E3C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80050E40: andi        $t9, $a1, 0xFFF3
    ctx->r25 = ctx->r5 & 0XFFF3;
    // 0x80050E44: b           L_80050E54
    // 0x80050E48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_80050E54;
    // 0x80050E48: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80050E4C:
    // 0x80050E4C: andi        $t1, $a1, 0xFFFC
    ctx->r9 = ctx->r5 & 0XFFFC;
L_80050E50:
    // 0x80050E50: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
L_80050E54:
    // 0x80050E54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80050E58:
    // 0x80050E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050E5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80050E60: jr          $ra
    // 0x80050E64: nop

    return;
    // 0x80050E64: nop

;}
RECOMP_FUNC void func_80050E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050E68: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050E6C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050E70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80050E78: lh          $v1, 0xE8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE8);
    // 0x80050E7C: addiu       $t6, $zero, 0x1FC
    ctx->r14 = ADD32(0, 0X1FC);
    // 0x80050E80: slti        $at, $v1, 0x1FE
    ctx->r1 = SIGNED(ctx->r3) < 0X1FE ? 1 : 0;
    // 0x80050E84: bne         $at, $zero, L_80050EA4
    if (ctx->r1 != 0) {
        // 0x80050E88: addiu       $t7, $zero, -0x1FC
        ctx->r15 = ADD32(0, -0X1FC);
            goto L_80050EA4;
    }
    // 0x80050E88: addiu       $t7, $zero, -0x1FC
    ctx->r15 = ADD32(0, -0X1FC);
    // 0x80050E8C: sh          $t6, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r14;
    // 0x80050E90: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050E94: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050E98: nop

    // 0x80050E9C: lh          $v1, 0xE8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XE8);
    // 0x80050EA0: nop

L_80050EA4:
    // 0x80050EA4: slti        $at, $v1, -0x1FD
    ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
    // 0x80050EA8: beq         $at, $zero, L_80050EC0
    if (ctx->r1 == 0) {
        // 0x80050EAC: addiu       $t8, $zero, 0x15E
        ctx->r24 = ADD32(0, 0X15E);
            goto L_80050EC0;
    }
    // 0x80050EAC: addiu       $t8, $zero, 0x15E
    ctx->r24 = ADD32(0, 0X15E);
    // 0x80050EB0: sh          $t7, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r15;
    // 0x80050EB4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050EB8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050EBC: nop

L_80050EC0:
    // 0x80050EC0: lh          $v1, 0xEA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XEA);
    // 0x80050EC4: addiu       $t9, $zero, -0x15E
    ctx->r25 = ADD32(0, -0X15E);
    // 0x80050EC8: slti        $at, $v1, 0x160
    ctx->r1 = SIGNED(ctx->r3) < 0X160 ? 1 : 0;
    // 0x80050ECC: bne         $at, $zero, L_80050EF0
    if (ctx->r1 != 0) {
        // 0x80050ED0: slti        $at, $v1, -0x15F
        ctx->r1 = SIGNED(ctx->r3) < -0X15F ? 1 : 0;
            goto L_80050EF0;
    }
    // 0x80050ED0: slti        $at, $v1, -0x15F
    ctx->r1 = SIGNED(ctx->r3) < -0X15F ? 1 : 0;
    // 0x80050ED4: sh          $t8, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r24;
    // 0x80050ED8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050EDC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050EE0: nop

    // 0x80050EE4: lh          $v1, 0xEA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XEA);
    // 0x80050EE8: nop

    // 0x80050EEC: slti        $at, $v1, -0x15F
    ctx->r1 = SIGNED(ctx->r3) < -0X15F ? 1 : 0;
L_80050EF0:
    // 0x80050EF0: beq         $at, $zero, L_80050F08
    if (ctx->r1 == 0) {
        // 0x80050EF4: nop
    
            goto L_80050F08;
    }
    // 0x80050EF4: nop

    // 0x80050EF8: sh          $t9, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r25;
    // 0x80050EFC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050F00: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050F04: nop

L_80050F08:
    // 0x80050F08: lh          $a0, 0xE8($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XE8);
    // 0x80050F0C: jal         0x80272AD4
    // 0x80050F10: nop

    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_0;
    // 0x80050F10: nop

    after_0:
    // 0x80050F14: sltiu       $at, $v0, 0x1C2
    ctx->r1 = ctx->r2 < 0X1C2 ? 1 : 0;
    // 0x80050F18: bne         $at, $zero, L_80050F64
    if (ctx->r1 != 0) {
        // 0x80050F1C: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80050F64;
    }
    // 0x80050F1C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80050F20: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80050F24: nop

    // 0x80050F28: lh          $a0, 0xEA($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XEA);
    // 0x80050F2C: jal         0x80272AD4
    // 0x80050F30: nop

    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_1;
    // 0x80050F30: nop

    after_1:
    // 0x80050F34: sltiu       $at, $v0, 0x5C
    ctx->r1 = ctx->r2 < 0X5C ? 1 : 0;
    // 0x80050F38: beq         $at, $zero, L_80050F64
    if (ctx->r1 == 0) {
        // 0x80050F3C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80050F64;
    }
    // 0x80050F3C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80050F40: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80050F44: addiu       $t3, $zero, -0x1C1
    ctx->r11 = ADD32(0, -0X1C1);
    // 0x80050F48: lh          $t1, 0xE8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE8);
    // 0x80050F4C: addiu       $t2, $zero, 0x1C1
    ctx->r10 = ADD32(0, 0X1C1);
    // 0x80050F50: blez        $t1, L_80050F60
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80050F54: nop
    
            goto L_80050F60;
    }
    // 0x80050F54: nop

    // 0x80050F58: b           L_80050F64
    // 0x80050F5C: sh          $t2, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r10;
        goto L_80050F64;
    // 0x80050F5C: sh          $t2, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r10;
L_80050F60:
    // 0x80050F60: sh          $t3, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r11;
L_80050F64:
    // 0x80050F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80050F6C: jr          $ra
    // 0x80050F70: nop

    return;
    // 0x80050F70: nop

;}
RECOMP_FUNC void func_80050F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050F74: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80050F78: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80050F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050F80: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x80050F84: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x80050F88: beq         $at, $zero, L_800511B8
    if (ctx->r1 == 0) {
        // 0x80050F8C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800511B8;
    }
    // 0x80050F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80050F90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80050F94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80050F98: addu        $at, $at, $t7
    gpr jr_addend_80050FA4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80050F9C: lw          $t7, -0x6E98($at)
    ctx->r15 = ADD32(ctx->r1, -0X6E98);
    // 0x80050FA0: nop

    // 0x80050FA4: jr          $t7
    // 0x80050FA8: nop

    switch (jr_addend_80050FA4 >> 2) {
        case 0: goto L_80050FAC; break;
        case 1: goto L_80051048; break;
        case 2: goto L_80050FF0; break;
        case 3: goto L_800510F4; break;
        case 4: goto L_800510A0; break;
        case 5: goto L_80051180; break;
        case 6: goto L_80051148; break;
        default: switch_error(__func__, 0x80050FA4, 0x800D9168);
    }
    // 0x80050FA8: nop

L_80050FAC:
    // 0x80050FAC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80050FB0: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80050FB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80050FB8: addiu       $t1, $zero, -0x15F
    ctx->r9 = ADD32(0, -0X15F);
    // 0x80050FBC: lh          $t8, 0xD8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XD8);
    // 0x80050FC0: addiu       $t0, $zero, 0x15F
    ctx->r8 = ADD32(0, 0X15F);
    // 0x80050FC4: sh          $t8, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r24;
    // 0x80050FC8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80050FCC: nop

    // 0x80050FD0: lh          $t9, 0xDA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XDA);
    // 0x80050FD4: nop

    // 0x80050FD8: blez        $t9, L_80050FE8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80050FDC: nop
    
            goto L_80050FE8;
    }
    // 0x80050FDC: nop

    // 0x80050FE0: b           L_800511E8
    // 0x80050FE4: sh          $t0, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r8;
        goto L_800511E8;
    // 0x80050FE4: sh          $t0, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r8;
L_80050FE8:
    // 0x80050FE8: b           L_800511E8
    // 0x80050FEC: sh          $t1, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r9;
        goto L_800511E8;
    // 0x80050FEC: sh          $t1, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r9;
L_80050FF0:
    // 0x80050FF0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80050FF4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80050FF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80050FFC: addiu       $t5, $zero, -0x1F3
    ctx->r13 = ADD32(0, -0X1F3);
    // 0x80051000: lhu         $t2, 0xD0($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XD0);
    // 0x80051004: addiu       $t4, $zero, 0x1F3
    ctx->r12 = ADD32(0, 0X1F3);
    // 0x80051008: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8005100C: beq         $t3, $zero, L_8005101C
    if (ctx->r11 == 0) {
        // 0x80051010: addiu       $t8, $zero, -0x155
        ctx->r24 = ADD32(0, -0X155);
            goto L_8005101C;
    }
    // 0x80051010: addiu       $t8, $zero, -0x155
    ctx->r24 = ADD32(0, -0X155);
    // 0x80051014: b           L_80051020
    // 0x80051018: sh          $t4, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r12;
        goto L_80051020;
    // 0x80051018: sh          $t4, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r12;
L_8005101C:
    // 0x8005101C: sh          $t5, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r13;
L_80051020:
    // 0x80051020: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80051024: addiu       $t7, $zero, 0x155
    ctx->r15 = ADD32(0, 0X155);
    // 0x80051028: lh          $t6, 0xDA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDA);
    // 0x8005102C: nop

    // 0x80051030: blez        $t6, L_80051040
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80051034: nop
    
            goto L_80051040;
    }
    // 0x80051034: nop

    // 0x80051038: b           L_800511E8
    // 0x8005103C: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
        goto L_800511E8;
    // 0x8005103C: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
L_80051040:
    // 0x80051040: b           L_800511E8
    // 0x80051044: sh          $t8, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r24;
        goto L_800511E8;
    // 0x80051044: sh          $t8, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r24;
L_80051048:
    // 0x80051048: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005104C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80051050: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80051054: addiu       $t2, $zero, -0x1C1
    ctx->r10 = ADD32(0, -0X1C1);
    // 0x80051058: lhu         $t9, 0xD0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XD0);
    // 0x8005105C: addiu       $t1, $zero, 0x1C1
    ctx->r9 = ADD32(0, 0X1C1);
    // 0x80051060: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80051064: beq         $t0, $zero, L_80051074
    if (ctx->r8 == 0) {
        // 0x80051068: addiu       $t5, $zero, -0x50
        ctx->r13 = ADD32(0, -0X50);
            goto L_80051074;
    }
    // 0x80051068: addiu       $t5, $zero, -0x50
    ctx->r13 = ADD32(0, -0X50);
    // 0x8005106C: b           L_80051078
    // 0x80051070: sh          $t1, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r9;
        goto L_80051078;
    // 0x80051070: sh          $t1, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r9;
L_80051074:
    // 0x80051074: sh          $t2, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r10;
L_80051078:
    // 0x80051078: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005107C: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80051080: lh          $t3, 0xDA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XDA);
    // 0x80051084: nop

    // 0x80051088: blez        $t3, L_80051098
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8005108C: nop
    
            goto L_80051098;
    }
    // 0x8005108C: nop

    // 0x80051090: b           L_800511E8
    // 0x80051094: sh          $t4, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r12;
        goto L_800511E8;
    // 0x80051094: sh          $t4, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r12;
L_80051098:
    // 0x80051098: b           L_800511E8
    // 0x8005109C: sh          $t5, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r13;
        goto L_800511E8;
    // 0x8005109C: sh          $t5, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r13;
L_800510A0:
    // 0x800510A0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800510A4: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800510A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800510AC: nop

    // 0x800510B0: lh          $t6, 0xD8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XD8);
    // 0x800510B4: nop

    // 0x800510B8: sh          $t6, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r14;
    // 0x800510BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800510C0: nop

    // 0x800510C4: lh          $t7, 0xDA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XDA);
    // 0x800510C8: jal         0x80050E68
    // 0x800510CC: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
    func_80050E68(rdram, ctx);
        goto after_0;
    // 0x800510CC: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
    after_0:
    // 0x800510D0: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x800510D4: lbu         $t8, 0x5232($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5232);
    // 0x800510D8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800510DC: bne         $t8, $at, L_800511EC
    if (ctx->r24 != ctx->r1) {
        // 0x800510E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800511EC;
    }
    // 0x800510E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800510E4: jal         0x802912A8
    // 0x800510E8: nop

    LOOKUP_FUNC(0x802912A8)(rdram, ctx);
        goto after_1;
    // 0x800510E8: nop

    after_1:
    // 0x800510EC: b           L_800511EC
    // 0x800510F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800511EC;
    // 0x800510F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800510F4:
    // 0x800510F4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800510F8: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800510FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80051100: nop

    // 0x80051104: lh          $t9, 0xD8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XD8);
    // 0x80051108: nop

    // 0x8005110C: sh          $t9, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r25;
    // 0x80051110: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80051114: nop

    // 0x80051118: lh          $t0, 0xDA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XDA);
    // 0x8005111C: jal         0x80050E68
    // 0x80051120: sh          $t0, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r8;
    func_80050E68(rdram, ctx);
        goto after_2;
    // 0x80051120: sh          $t0, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r8;
    after_2:
    // 0x80051124: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80051128: lbu         $t1, 0x5232($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5232);
    // 0x8005112C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80051130: bne         $t1, $at, L_800511EC
    if (ctx->r9 != ctx->r1) {
        // 0x80051134: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800511EC;
    }
    // 0x80051134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051138: jal         0x80290F98
    // 0x8005113C: nop

    LOOKUP_FUNC(0x80290F98)(rdram, ctx);
        goto after_3;
    // 0x8005113C: nop

    after_3:
    // 0x80051140: b           L_800511EC
    // 0x80051144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800511EC;
    // 0x80051144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80051148:
    // 0x80051148: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005114C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80051150: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80051154: addiu       $t4, $zero, -0x18F
    ctx->r12 = ADD32(0, -0X18F);
    // 0x80051158: lh          $t2, 0xD8($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XD8);
    // 0x8005115C: addiu       $t3, $zero, 0x18F
    ctx->r11 = ADD32(0, 0X18F);
    // 0x80051160: blez        $t2, L_80051170
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80051164: nop
    
            goto L_80051170;
    }
    // 0x80051164: nop

    // 0x80051168: b           L_80051174
    // 0x8005116C: sh          $t3, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r11;
        goto L_80051174;
    // 0x8005116C: sh          $t3, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r11;
L_80051170:
    // 0x80051170: sh          $t4, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r12;
L_80051174:
    // 0x80051174: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80051178: b           L_800511E8
    // 0x8005117C: sh          $zero, 0xEA($t5)
    MEM_H(0XEA, ctx->r13) = 0;
        goto L_800511E8;
    // 0x8005117C: sh          $zero, 0xEA($t5)
    MEM_H(0XEA, ctx->r13) = 0;
L_80051180:
    // 0x80051180: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80051184: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80051188: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005118C: nop

    // 0x80051190: lh          $t6, 0xD8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XD8);
    // 0x80051194: nop

    // 0x80051198: sh          $t6, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r14;
    // 0x8005119C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800511A0: nop

    // 0x800511A4: lh          $t7, 0xDA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XDA);
    // 0x800511A8: jal         0x80050E68
    // 0x800511AC: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
    func_80050E68(rdram, ctx);
        goto after_4;
    // 0x800511AC: sh          $t7, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r15;
    after_4:
    // 0x800511B0: b           L_800511EC
    // 0x800511B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800511EC;
    // 0x800511B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800511B8:
    // 0x800511B8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800511BC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800511C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800511C4: nop

    // 0x800511C8: lh          $t8, 0xD8($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XD8);
    // 0x800511CC: nop

    // 0x800511D0: sh          $t8, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r24;
    // 0x800511D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800511D8: nop

    // 0x800511DC: lh          $t9, 0xDA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0XDA);
    // 0x800511E0: nop

    // 0x800511E4: sh          $t9, 0xEA($v0)
    MEM_H(0XEA, ctx->r2) = ctx->r25;
L_800511E8:
    // 0x800511E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800511EC:
    // 0x800511EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800511F0: jr          $ra
    // 0x800511F4: nop

    return;
    // 0x800511F4: nop

;}
RECOMP_FUNC void func_800511F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800511F8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800511FC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80051200: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80051204: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80051208: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005120C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80051210: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80051214: bc1f        L_80051240
    if (!c1cs) {
        // 0x80051218: nop
    
            goto L_80051240;
    }
    // 0x80051218: nop

    // 0x8005121C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80051220: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80051224: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x80051228: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005122C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80051230: beq         $t8, $zero, L_8005125C
    if (ctx->r24 == 0) {
        // 0x80051234: nop
    
            goto L_8005125C;
    }
    // 0x80051234: nop

    // 0x80051238: jr          $ra
    // 0x8005123C: addiu       $v0, $v0, -0x225C
    ctx->r2 = ADD32(ctx->r2, -0X225C);
    return;
    // 0x8005123C: addiu       $v0, $v0, -0x225C
    ctx->r2 = ADD32(ctx->r2, -0X225C);
L_80051240:
    // 0x80051240: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x80051244: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80051248: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8005124C: bne         $t0, $zero, L_8005125C
    if (ctx->r8 != 0) {
        // 0x80051250: nop
    
            goto L_8005125C;
    }
    // 0x80051250: nop

    // 0x80051254: jr          $ra
    // 0x80051258: addiu       $v0, $v0, -0x225C
    ctx->r2 = ADD32(ctx->r2, -0X225C);
    return;
    // 0x80051258: addiu       $v0, $v0, -0x225C
    ctx->r2 = ADD32(ctx->r2, -0X225C);
L_8005125C:
    // 0x8005125C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80051260: jr          $ra
    // 0x80051264: nop

    return;
    // 0x80051264: nop

;}
RECOMP_FUNC void func_80051268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051268: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8005126C: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x80051270: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80051274: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80051278: andi        $t7, $t6, 0xFFFC
    ctx->r15 = ctx->r14 & 0XFFFC;
    // 0x8005127C: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80051280: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051284: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x80051288: sw          $zero, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = 0;
    // 0x8005128C: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80051290: lhu         $t8, 0x522A($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X522A);
    // 0x80051294: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80051298: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x8005129C: sh          $t8, 0x6C($t9)
    MEM_H(0X6C, ctx->r25) = ctx->r24;
    // 0x800512A0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800512A4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800512A8: sh          $t0, 0xCC($t1)
    MEM_H(0XCC, ctx->r9) = ctx->r8;
    // 0x800512AC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x800512B0: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x800512B4: sw          $zero, 0xB0($t2)
    MEM_W(0XB0, ctx->r10) = 0;
    // 0x800512B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800512BC: nop

    // 0x800512C0: lhu         $t3, 0xDC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XDC);
    // 0x800512C4: nop

    // 0x800512C8: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x800512CC: sh          $t4, 0xDC($v0)
    MEM_H(0XDC, ctx->r2) = ctx->r12;
    // 0x800512D0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800512D4: nop

    // 0x800512D8: lhu         $t5, 0xC0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XC0);
    // 0x800512DC: nop

    // 0x800512E0: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x800512E4: sh          $t6, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r14;
    // 0x800512E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800512EC: nop

    // 0x800512F0: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x800512F4: nop

    // 0x800512F8: andi        $t8, $t7, 0xF7C7
    ctx->r24 = ctx->r15 & 0XF7C7;
    // 0x800512FC: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80051300: lhu         $t9, 0x10($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X10);
    // 0x80051304: lhu         $t1, 0xAA4($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0XAA4);
    // 0x80051308: ori         $t3, $t9, 0x4
    ctx->r11 = ctx->r25 | 0X4;
    // 0x8005130C: ori         $t5, $t1, 0x4
    ctx->r13 = ctx->r9 | 0X4;
    // 0x80051310: sh          $t3, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r11;
    // 0x80051314: sh          $t5, 0xAA4($a1)
    MEM_H(0XAA4, ctx->r5) = ctx->r13;
    // 0x80051318: andi        $t4, $t3, 0xFFEF
    ctx->r12 = ctx->r11 & 0XFFEF;
    // 0x8005131C: andi        $t6, $t5, 0xFFEF
    ctx->r14 = ctx->r13 & 0XFFEF;
    // 0x80051320: sh          $t4, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r12;
    // 0x80051324: sh          $t6, 0xAA4($a1)
    MEM_H(0XAA4, ctx->r5) = ctx->r14;
    // 0x80051328: sw          $zero, 0x918($a1)
    MEM_W(0X918, ctx->r5) = 0;
    // 0x8005132C: sw          $zero, 0x13AC($a1)
    MEM_W(0X13AC, ctx->r5) = 0;
    // 0x80051330: sw          $zero, 0x914($a1)
    MEM_W(0X914, ctx->r5) = 0;
    // 0x80051334: jr          $ra
    // 0x80051338: sw          $zero, 0x13A8($a1)
    MEM_W(0X13A8, ctx->r5) = 0;
    return;
    // 0x80051338: sw          $zero, 0x13A8($a1)
    MEM_W(0X13A8, ctx->r5) = 0;
;}
RECOMP_FUNC void func_8005133C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005133C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80051340: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80051344: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80051348: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8005134C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051350: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80051354: lh          $t7, 0xEA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XEA);
    // 0x80051358: lh          $t6, 0xE8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE8);
    // 0x8005135C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80051360: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80051364: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80051368: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x8005136C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80051370: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80051374: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80051378: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005137C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80051380: jal         0x80272B1C
    // 0x80051384: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x80051384: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x80051388: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8005138C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80051390: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80051394: nop

    // 0x80051398: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8005139C: nop

    // 0x800513A0: bc1t        L_80051440
    if (c1cs) {
        // 0x800513A4: nop
    
            goto L_80051440;
    }
    // 0x800513A4: nop

    // 0x800513A8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800513AC: nop

    // 0x800513B0: lwc1        $f12, 0x8($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800513B4: jal         0x80272AEC
    // 0x800513B8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x800513B8: nop

    after_1:
    // 0x800513BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800513C0: lwc1        $f16, -0x6E7C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6E7C);
    // 0x800513C4: nop

    // 0x800513C8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800513CC: nop

    // 0x800513D0: bc1t        L_80051440
    if (c1cs) {
        // 0x800513D4: nop
    
            goto L_80051440;
    }
    // 0x800513D4: nop

    // 0x800513D8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800513DC: nop

    // 0x800513E0: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800513E4: jal         0x80272AEC
    // 0x800513E8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x800513E8: nop

    after_2:
    // 0x800513EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800513F0: lwc1        $f18, -0x6E78($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E78);
    // 0x800513F4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800513F8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800513FC: nop

    // 0x80051400: bc1t        L_80051440
    if (c1cs) {
        // 0x80051404: nop
    
            goto L_80051440;
    }
    // 0x80051404: nop

    // 0x80051408: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005140C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80051410: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80051414: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80051418: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8005141C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80051420: nop

    // 0x80051424: bc1t        L_80051440
    if (c1cs) {
        // 0x80051428: nop
    
            goto L_80051440;
    }
    // 0x80051428: nop

    // 0x8005142C: lhu         $t1, 0xC2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC2);
    // 0x80051430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80051434: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x80051438: beq         $t2, $zero, L_8005147C
    if (ctx->r10 == 0) {
        // 0x8005143C: nop
    
            goto L_8005147C;
    }
    // 0x8005143C: nop

L_80051440:
    // 0x80051440: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051444: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80051448: lhu         $t3, 0xDC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XDC);
    // 0x8005144C: nop

    // 0x80051450: ori         $t4, $t3, 0x10
    ctx->r12 = ctx->r11 | 0X10;
    // 0x80051454: sh          $t4, 0xDC($v0)
    MEM_H(0XDC, ctx->r2) = ctx->r12;
    // 0x80051458: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005145C: nop

    // 0x80051460: lhu         $t5, 0xCC($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XCC);
    // 0x80051464: nop

    // 0x80051468: bne         $t5, $zero, L_80051474
    if (ctx->r13 != 0) {
        // 0x8005146C: nop
    
            goto L_80051474;
    }
    // 0x8005146C: nop

    // 0x80051470: sh          $t6, 0xCC($v0)
    MEM_H(0XCC, ctx->r2) = ctx->r14;
L_80051474:
    // 0x80051474: b           L_8005147C
    // 0x80051478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8005147C;
    // 0x80051478: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005147C:
    // 0x8005147C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80051480: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80051484: jr          $ra
    // 0x80051488: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80051488: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005148C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005148C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051490: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051494: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051498: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005149C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800514A0: lhu         $t6, 0x6A($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6A);
    // 0x800514A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800514A8: bne         $t6, $zero, L_800514BC
    if (ctx->r14 != 0) {
        // 0x800514AC: addiu       $t9, $zero, 0x80
        ctx->r25 = ADD32(0, 0X80);
            goto L_800514BC;
    }
    // 0x800514AC: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x800514B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800514B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800514B8: swc1        $f4, 0xB58($at)
    MEM_W(0XB58, ctx->r1) = ctx->f4.u32l;
L_800514BC:
    // 0x800514BC: lhu         $t7, 0x956($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X956);
    // 0x800514C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800514C4: andi        $t8, $t7, 0xFFFB
    ctx->r24 = ctx->r15 & 0XFFFB;
    // 0x800514C8: sh          $t8, 0x956($at)
    MEM_H(0X956, ctx->r1) = ctx->r24;
    // 0x800514CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800514D0: sb          $t9, 0x36C0($at)
    MEM_B(0X36C0, ctx->r1) = ctx->r25;
    // 0x800514D4: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x800514D8: nop

    // 0x800514DC: beq         $a0, $zero, L_8005159C
    if (ctx->r4 == 0) {
        // 0x800514E0: nop
    
            goto L_8005159C;
    }
    // 0x800514E0: nop

    // 0x800514E4: lhu         $t2, 0xC2($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XC2);
    // 0x800514E8: nop

    // 0x800514EC: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x800514F0: bne         $t3, $zero, L_8005159C
    if (ctx->r11 != 0) {
        // 0x800514F4: nop
    
            goto L_8005159C;
    }
    // 0x800514F4: nop

    // 0x800514F8: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x800514FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80051500: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x80051504: nop

    // 0x80051508: beq         $t5, $zero, L_80051524
    if (ctx->r13 == 0) {
        // 0x8005150C: nop
    
            goto L_80051524;
    }
    // 0x8005150C: nop

    // 0x80051510: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x80051514: nop

    // 0x80051518: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x8005151C: bne         $t7, $zero, L_8005159C
    if (ctx->r15 != 0) {
        // 0x80051520: nop
    
            goto L_8005159C;
    }
    // 0x80051520: nop

L_80051524:
    // 0x80051524: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x80051528: nop

    // 0x8005152C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80051530: bne         $t9, $zero, L_80051550
    if (ctx->r25 != 0) {
        // 0x80051534: nop
    
            goto L_80051550;
    }
    // 0x80051534: nop

    // 0x80051538: jal         0x8024BC08
    // 0x8005153C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_0;
    // 0x8005153C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80051540: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051544: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051548: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8005154C: nop

L_80051550:
    // 0x80051550: lw          $t2, 0x84($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X84);
    // 0x80051554: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80051558: beq         $t2, $zero, L_80051598
    if (ctx->r10 == 0) {
        // 0x8005155C: nop
    
            goto L_80051598;
    }
    // 0x8005155C: nop

    // 0x80051560: lhu         $t3, 0x361E($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X361E);
    // 0x80051564: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x80051568: sh          $t3, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r11;
    // 0x8005156C: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80051570: nop

    // 0x80051574: lw          $a1, 0x8C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8C);
    // 0x80051578: jal         0x80057F00
    // 0x8005157C: nop

    func_80057F00(rdram, ctx);
        goto after_1;
    // 0x8005157C: nop

    after_1:
    // 0x80051580: lhu         $t4, 0x3E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X3E);
    // 0x80051584: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051588: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005158C: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051590: b           L_8005159C
    // 0x80051594: sh          $t4, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r12;
        goto L_8005159C;
    // 0x80051594: sh          $t4, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r12;
L_80051598:
    // 0x80051598: sw          $zero, 0x88($v1)
    MEM_W(0X88, ctx->r3) = 0;
L_8005159C:
    // 0x8005159C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800515A0: lhu         $t5, 0xB7E($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB7E);
    // 0x800515A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800515A8: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x800515AC: beq         $t6, $zero, L_800515C0
    if (ctx->r14 == 0) {
        // 0x800515B0: nop
    
            goto L_800515C0;
    }
    // 0x800515B0: nop

    // 0x800515B4: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x800515B8: addiu       $t7, $t7, -0xA38
    ctx->r15 = ADD32(ctx->r15, -0XA38);
    // 0x800515BC: sw          $t7, 0x8C($t8)
    MEM_W(0X8C, ctx->r24) = ctx->r15;
L_800515C0:
    // 0x800515C0: jal         0x80051268
    // 0x800515C4: nop

    func_80051268(rdram, ctx);
        goto after_2;
    // 0x800515C4: nop

    after_2:
    // 0x800515C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800515CC: lhu         $t9, 0xB7E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB7E);
    // 0x800515D0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800515D4: andi        $t2, $t9, 0x400
    ctx->r10 = ctx->r25 & 0X400;
    // 0x800515D8: beq         $t2, $zero, L_80051618
    if (ctx->r10 == 0) {
        // 0x800515DC: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_80051618;
    }
    // 0x800515DC: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x800515E0: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x800515E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800515E8: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x800515EC: addiu       $v0, $v0, 0xB78
    ctx->r2 = ADD32(ctx->r2, 0XB78);
    // 0x800515F0: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x800515F4: sh          $t3, 0xCC($t4)
    MEM_H(0XCC, ctx->r12) = ctx->r11;
    // 0x800515F8: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x800515FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051600: jal         0x80050F74
    // 0x80051604: sh          $t6, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r14;
    func_80050F74(rdram, ctx);
        goto after_3;
    // 0x80051604: sh          $t6, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r14;
    after_3:
    // 0x80051608: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005160C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80051610: b           L_80051F48
    // 0x80051614: sb          $t7, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r15;
        goto L_80051F48;
    // 0x80051614: sb          $t7, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r15;
L_80051618:
    // 0x80051618: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8005161C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051620: lhu         $v0, 0xD0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XD0);
    // 0x80051624: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80051628: andi        $t8, $v0, 0x20
    ctx->r24 = ctx->r2 & 0X20;
    // 0x8005162C: beq         $t8, $zero, L_80051A3C
    if (ctx->r24 == 0) {
        // 0x80051630: andi        $t5, $v0, 0x10
        ctx->r13 = ctx->r2 & 0X10;
            goto L_80051A3C;
    }
    // 0x80051630: andi        $t5, $v0, 0x10
    ctx->r13 = ctx->r2 & 0X10;
    // 0x80051634: sb          $zero, 0xB65($at)
    MEM_B(0XB65, ctx->r1) = 0;
    // 0x80051638: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8005163C: jal         0x800511F8
    // 0x80051640: sh          $t9, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r25;
    func_800511F8(rdram, ctx);
        goto after_4;
    // 0x80051640: sh          $t9, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r25;
    after_4:
    // 0x80051644: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051648: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x8005164C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x80051650: nop

    // 0x80051654: sw          $v0, 0xB8($t2)
    MEM_W(0XB8, ctx->r10) = ctx->r2;
    // 0x80051658: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x8005165C: nop

    // 0x80051660: lw          $a0, 0xB8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XB8);
    // 0x80051664: nop

    // 0x80051668: lhu         $t4, 0x8($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X8);
    // 0x8005166C: nop

    // 0x80051670: xori        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 ^ 0X8000;
    // 0x80051674: sh          $t5, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r13;
    // 0x80051678: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x8005167C: nop

    // 0x80051680: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    // 0x80051684: nop

    // 0x80051688: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x8005168C: nop

    // 0x80051690: lhu         $a2, 0xA($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0XA);
    // 0x80051694: nop

    // 0x80051698: slti        $at, $a2, 0x63
    ctx->r1 = SIGNED(ctx->r6) < 0X63 ? 1 : 0;
    // 0x8005169C: beq         $at, $zero, L_800516B8
    if (ctx->r1 == 0) {
        // 0x800516A0: addiu       $t6, $a2, 0x1
        ctx->r14 = ADD32(ctx->r6, 0X1);
            goto L_800516B8;
    }
    // 0x800516A0: addiu       $t6, $a2, 0x1
    ctx->r14 = ADD32(ctx->r6, 0X1);
    // 0x800516A4: sh          $t6, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r14;
    // 0x800516A8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x800516AC: nop

    // 0x800516B0: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    // 0x800516B4: nop

L_800516B8:
    // 0x800516B8: sw          $a0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r4;
    // 0x800516BC: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x800516C0: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x800516C4: lw          $a0, 0xB8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XB8);
    // 0x800516C8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x800516CC: lhu         $t8, 0x8($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X8);
    // 0x800516D0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800516D4: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x800516D8: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x800516DC: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x800516E0: nop

    // 0x800516E4: lw          $t3, 0xB8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XB8);
    // 0x800516E8: nop

    // 0x800516EC: lw          $a1, 0x24($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X24);
    // 0x800516F0: nop

    // 0x800516F4: lhu         $t4, 0x8($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X8);
    // 0x800516F8: nop

    // 0x800516FC: andi        $t5, $t4, 0xFFFD
    ctx->r13 = ctx->r12 & 0XFFFD;
    // 0x80051700: sh          $t5, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r13;
    // 0x80051704: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80051708: nop

    // 0x8005170C: sh          $t6, 0xCC($t7)
    MEM_H(0XCC, ctx->r15) = ctx->r14;
    // 0x80051710: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051714: lhu         $a3, 0x361E($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X361E);
    // 0x80051718: lw          $v0, 0x8C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8C);
    // 0x8005171C: lbu         $a2, 0xBC($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0XBC);
    // 0x80051720: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80051724: beq         $a2, $at, L_80051730
    if (ctx->r6 == ctx->r1) {
        // 0x80051728: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80051730;
    }
    // 0x80051728: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8005172C: bne         $a2, $at, L_80051784
    if (ctx->r6 != ctx->r1) {
        // 0x80051730: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_80051784;
    }
L_80051730:
    // 0x80051730: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80051734: lw          $t8, 0x367C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X367C);
    // 0x80051738: nop

    // 0x8005173C: beq         $t1, $t8, L_80051784
    if (ctx->r9 == ctx->r24) {
        // 0x80051740: nop
    
            goto L_80051784;
    }
    // 0x80051740: nop

    // 0x80051744: lw          $t9, 0xB8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB8);
    // 0x80051748: lw          $t2, 0xC8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC8);
    // 0x8005174C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051750: bne         $t9, $t2, L_80051784
    if (ctx->r25 != ctx->r10) {
        // 0x80051754: nop
    
            goto L_80051784;
    }
    // 0x80051754: nop

    // 0x80051758: lwc1        $f6, 0x3654($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3654);
    // 0x8005175C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051760: swc1        $f6, 0x364C($at)
    MEM_W(0X364C, ctx->r1) = ctx->f6.u32l;
    // 0x80051764: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051768: lwc1        $f8, 0x3658($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3658);
    // 0x8005176C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80051770: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80051774: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051778: lw          $t1, 0x970($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X970);
    // 0x8005177C: lhu         $a3, 0x365C($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X365C);
    // 0x80051780: swc1        $f8, 0x3650($at)
    MEM_W(0X3650, ctx->r1) = ctx->f8.u32l;
L_80051784:
    // 0x80051784: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051788: sw          $t1, 0xB24($at)
    MEM_W(0XB24, ctx->r1) = ctx->r9;
    // 0x8005178C: lw          $t3, 0xC8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0XC8);
    // 0x80051790: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    // 0x80051794: andi        $t5, $a3, 0x800
    ctx->r13 = ctx->r7 & 0X800;
    // 0x80051798: bne         $a0, $t3, L_800517B4
    if (ctx->r4 != ctx->r11) {
        // 0x8005179C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_800517B4;
    }
    // 0x8005179C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800517A0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800517A4: sb          $t4, 0xB65($at)
    MEM_B(0XB65, ctx->r1) = ctx->r12;
    // 0x800517A8: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    // 0x800517AC: b           L_800517F0
    // 0x800517B0: nop

        goto L_800517F0;
    // 0x800517B0: nop

L_800517B4:
    // 0x800517B4: bne         $t5, $zero, L_800517F0
    if (ctx->r13 != 0) {
        // 0x800517B8: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_800517F0;
    }
    // 0x800517B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800517BC: lw          $t6, 0xB24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB24);
    // 0x800517C0: nop

    // 0x800517C4: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x800517C8: nop

    // 0x800517CC: lbu         $a0, 0x7($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X7);
    // 0x800517D0: jal         0x80250B20
    // 0x800517D4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(0x80250B20)(rdram, ctx);
        goto after_5;
    // 0x800517D4: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_5:
    // 0x800517D8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800517DC: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x800517E0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x800517E4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800517E8: lw          $a0, 0xB8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XB8);
    // 0x800517EC: nop

L_800517F0:
    // 0x800517F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800517F4: lwc1        $f14, 0x3650($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X3650);
    // 0x800517F8: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x800517FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80051800: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80051804: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x80051808: nop

    // 0x8005180C: bc1f        L_80051864
    if (!c1cs) {
        // 0x80051810: nop
    
            goto L_80051864;
    }
    // 0x80051810: nop

    // 0x80051814: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80051818: nop

    // 0x8005181C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80051820: nop

    // 0x80051824: bc1f        L_80051864
    if (!c1cs) {
        // 0x80051828: nop
    
            goto L_80051864;
    }
    // 0x80051828: nop

    // 0x8005182C: lh          $t9, 0x8B8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8B8);
    // 0x80051830: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051834: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80051838: lwc1        $f18, 0x364C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x8005183C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80051840: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x80051844: jal         0x80272AEC
    // 0x80051848: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_6;
    // 0x80051848: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    after_6:
    // 0x8005184C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051850: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80051854: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051858: swc1        $f0, 0xB58($at)
    MEM_W(0XB58, ctx->r1) = ctx->f0.u32l;
    // 0x8005185C: b           L_800518CC
    // 0x80051860: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
        goto L_800518CC;
    // 0x80051860: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
L_80051864:
    // 0x80051864: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80051868: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005186C: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x80051870: addiu       $v0, $zero, -0x26
    ctx->r2 = ADD32(0, -0X26);
    // 0x80051874: bc1f        L_80051884
    if (!c1cs) {
        // 0x80051878: nop
    
            goto L_80051884;
    }
    // 0x80051878: nop

    // 0x8005187C: b           L_80051884
    // 0x80051880: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
        goto L_80051884;
    // 0x80051880: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
L_80051884:
    // 0x80051884: lh          $t2, 0x8B8($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X8B8);
    // 0x80051888: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8005188C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80051890: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80051894: lwc1        $f12, 0x364C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x80051898: addiu       $t3, $sp, 0x48
    ctx->r11 = ADD32(ctx->r29, 0X48);
    // 0x8005189C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800518A0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800518A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800518A8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800518AC: jal         0x80272B1C
    // 0x800518B0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_7;
    // 0x800518B0: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_7:
    // 0x800518B4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800518B8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800518BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800518C0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800518C4: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x800518C8: swc1        $f4, 0xB58($at)
    MEM_W(0XB58, ctx->r1) = ctx->f4.u32l;
L_800518CC:
    // 0x800518CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800518D0: lwc1        $f0, 0x364C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x800518D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800518D8: lwc1        $f18, -0x6E74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E74);
    // 0x800518DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800518E0: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800518E4: nop

    // 0x800518E8: bc1t        L_80051904
    if (c1cs) {
        // 0x800518EC: nop
    
            goto L_80051904;
    }
    // 0x800518EC: nop

    // 0x800518F0: lwc1        $f6, -0x6E70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6E70);
    // 0x800518F4: nop

    // 0x800518F8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800518FC: nop

    // 0x80051900: bc1f        L_8005194C
    if (!c1cs) {
        // 0x80051904: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_8005194C;
    }
L_80051904:
    // 0x80051904: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80051908: lwc1        $f14, 0x3650($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X3650);
    // 0x8005190C: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80051910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80051914: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80051918: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8005191C: nop

    // 0x80051920: bc1f        L_8005194C
    if (!c1cs) {
        // 0x80051924: nop
    
            goto L_8005194C;
    }
    // 0x80051924: nop

    // 0x80051928: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005192C: nop

    // 0x80051930: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x80051934: nop

    // 0x80051938: bc1f        L_8005194C
    if (!c1cs) {
        // 0x8005193C: nop
    
            goto L_8005194C;
    }
    // 0x8005193C: nop

    // 0x80051940: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80051944: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051948: swc1        $f16, 0xB58($at)
    MEM_W(0XB58, ctx->r1) = ctx->f16.u32l;
L_8005194C:
    // 0x8005194C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80051950: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80051954: lw          $t5, 0xB8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB8);
    // 0x80051958: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x8005195C: lh          $t6, 0x8B8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B8);
    // 0x80051960: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x80051964: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80051968: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8005196C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80051970: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x80051974: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80051978: jal         0x80272B98
    // 0x8005197C: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_8;
    // 0x8005197C: nop

    after_8:
    // 0x80051980: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80051984: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80051988: jal         0x80272AEC
    // 0x8005198C: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x8005198C: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    after_9:
    // 0x80051990: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80051994: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80051998: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8005199C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800519A0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800519A4: bc1f        L_800519B0
    if (!c1cs) {
        // 0x800519A8: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800519B0;
    }
    // 0x800519A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800519AC: swc1        $f10, 0xB58($at)
    MEM_W(0XB58, ctx->r1) = ctx->f10.u32l;
L_800519B0:
    // 0x800519B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800519B4: sw          $zero, 0xB34($at)
    MEM_W(0XB34, ctx->r1) = 0;
    // 0x800519B8: jal         0x80078F60
    // 0x800519BC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    func_80078F60(rdram, ctx);
        goto after_10;
    // 0x800519BC: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    after_10:
    // 0x800519C0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800519C4: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x800519C8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800519CC: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x800519D0: lw          $v1, 0xC8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC8);
    // 0x800519D4: lw          $t8, 0xB8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XB8);
    // 0x800519D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800519DC: bne         $t8, $v1, L_800519EC
    if (ctx->r24 != ctx->r3) {
        // 0x800519E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800519EC;
    }
    // 0x800519E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800519E4: b           L_800519EC
    // 0x800519E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800519EC;
    // 0x800519E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800519EC:
    // 0x800519EC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800519F0: lwc1        $f16, 0xB58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x800519F4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800519F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800519FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80051A00: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x80051A04: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80051A08: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80051A0C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80051A10: lb          $a0, 0x7($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X7);
    // 0x80051A14: lb          $a1, 0x1B($t1)
    ctx->r5 = MEM_B(ctx->r9, 0X1B);
    // 0x80051A18: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80051A1C: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x80051A20: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80051A24: jal         0x80040B58
    // 0x80051A28: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_80040B58(rdram, ctx);
        goto after_11;
    // 0x80051A28: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_11:
    // 0x80051A2C: jal         0x8028EF0C
    // 0x80051A30: nop

    LOOKUP_FUNC(0x8028EF0C)(rdram, ctx);
        goto after_12;
    // 0x80051A30: nop

    after_12:
    // 0x80051A34: b           L_80051EEC
    // 0x80051A38: nop

        goto L_80051EEC;
    // 0x80051A38: nop

L_80051A3C:
    // 0x80051A3C: beq         $t5, $zero, L_80051C20
    if (ctx->r13 == 0) {
        // 0x80051A40: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80051C20;
    }
    // 0x80051A40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80051A44: addiu       $a0, $a0, 0xB4A
    ctx->r4 = ADD32(ctx->r4, 0XB4A);
    // 0x80051A48: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x80051A4C: nop

    // 0x80051A50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80051A54: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80051A58: lhu         $v0, 0xDC($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XDC);
    // 0x80051A5C: nop

    // 0x80051A60: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80051A64: beq         $t8, $zero, L_80051BC8
    if (ctx->r24 == 0) {
        // 0x80051A68: andi        $t9, $v0, 0xFFEF
        ctx->r25 = ctx->r2 & 0XFFEF;
            goto L_80051BC8;
    }
    // 0x80051A68: andi        $t9, $v0, 0xFFEF
    ctx->r25 = ctx->r2 & 0XFFEF;
    // 0x80051A6C: sh          $t9, 0xDC($v1)
    MEM_H(0XDC, ctx->r3) = ctx->r25;
    // 0x80051A70: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80051A74: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x80051A78: sh          $t2, 0xCC($t3)
    MEM_H(0XCC, ctx->r11) = ctx->r10;
    // 0x80051A7C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051A80: nop

    // 0x80051A84: lw          $t6, 0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XB4);
    // 0x80051A88: lh          $t4, 0xD8($v1)
    ctx->r12 = MEM_H(ctx->r3, 0XD8);
    // 0x80051A8C: lh          $t5, 0xDA($v1)
    ctx->r13 = MEM_H(ctx->r3, 0XDA);
    // 0x80051A90: lhu         $a2, 0x8($t6)
    ctx->r6 = MEM_HU(ctx->r14, 0X8);
    // 0x80051A94: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80051A98: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80051A9C: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    // 0x80051AA0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80051AA4: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80051AA8: jal         0x80271FD4
    // 0x80051AAC: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_13;
    // 0x80051AAC: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_13:
    // 0x80051AB0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051AB4: bne         $v0, $zero, L_80051B30
    if (ctx->r2 != 0) {
        // 0x80051AB8: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_80051B30;
    }
    // 0x80051AB8: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051ABC: jal         0x80078580
    // 0x80051AC0: nop

    func_80078580(rdram, ctx);
        goto after_14;
    // 0x80051AC0: nop

    after_14:
    // 0x80051AC4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051AC8: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051ACC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80051AD0: nop

    // 0x80051AD4: lw          $v0, 0xB4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XB4);
    // 0x80051AD8: nop

    // 0x80051ADC: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x80051AE0: nop

    // 0x80051AE4: ori         $t2, $t9, 0x800
    ctx->r10 = ctx->r25 | 0X800;
    // 0x80051AE8: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80051AEC: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80051AF0: nop

    // 0x80051AF4: lw          $t4, 0xB4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XB4);
    // 0x80051AF8: nop

    // 0x80051AFC: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x80051B00: nop

    // 0x80051B04: lbu         $a0, 0x7($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7);
    // 0x80051B08: jal         0x800490A0
    // 0x80051B0C: nop

    func_800490A0(rdram, ctx);
        goto after_15;
    // 0x80051B0C: nop

    after_15:
    // 0x80051B10: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80051B14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051B18: sh          $t6, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r14;
    // 0x80051B1C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051B20: sh          $zero, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = 0;
    // 0x80051B24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80051B28: b           L_80051EEC
    // 0x80051B2C: sb          $zero, 0x5450($at)
    MEM_B(0X5450, ctx->r1) = 0;
        goto L_80051EEC;
    // 0x80051B2C: sb          $zero, 0x5450($at)
    MEM_B(0X5450, ctx->r1) = 0;
L_80051B30:
    // 0x80051B30: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80051B34: nop

    // 0x80051B38: lw          $v0, 0xB4($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XB4);
    // 0x80051B3C: nop

    // 0x80051B40: lh          $t8, 0x8B0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X8B0);
    // 0x80051B44: nop

    // 0x80051B48: slti        $at, $t8, -0xE5
    ctx->r1 = SIGNED(ctx->r24) < -0XE5 ? 1 : 0;
    // 0x80051B4C: bne         $at, $zero, L_80051B78
    if (ctx->r1 != 0) {
        // 0x80051B50: nop
    
            goto L_80051B78;
    }
    // 0x80051B50: nop

    // 0x80051B54: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80051B58: nop

    // 0x80051B5C: lbu         $a0, 0x7($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X7);
    // 0x80051B60: jal         0x800490FC
    // 0x80051B64: nop

    func_800490FC(rdram, ctx);
        goto after_16;
    // 0x80051B64: nop

    after_16:
    // 0x80051B68: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80051B6C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051B70: b           L_80051EEC
    // 0x80051B74: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
        goto L_80051EEC;
    // 0x80051B74: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
L_80051B78:
    // 0x80051B78: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x80051B7C: nop

    // 0x80051B80: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x80051B84: jal         0x80074D84
    // 0x80051B88: nop

    func_80074D84(rdram, ctx);
        goto after_17;
    // 0x80051B88: nop

    after_17:
    // 0x80051B8C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051B90: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051B94: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80051B98: nop

    // 0x80051B9C: lw          $t5, 0xB4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB4);
    // 0x80051BA0: nop

    // 0x80051BA4: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80051BA8: nop

    // 0x80051BAC: lbu         $a0, 0x7($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X7);
    // 0x80051BB0: jal         0x800490FC
    // 0x80051BB4: nop

    func_800490FC(rdram, ctx);
        goto after_18;
    // 0x80051BB4: nop

    after_18:
    // 0x80051BB8: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80051BBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051BC0: b           L_80051EEC
    // 0x80051BC4: sh          $t7, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r15;
        goto L_80051EEC;
    // 0x80051BC4: sh          $t7, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r15;
L_80051BC8:
    // 0x80051BC8: lw          $t8, 0xB4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XB4);
    // 0x80051BCC: nop

    // 0x80051BD0: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x80051BD4: nop

    // 0x80051BD8: lbu         $a0, 0x7($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X7);
    // 0x80051BDC: jal         0x800490FC
    // 0x80051BE0: nop

    func_800490FC(rdram, ctx);
        goto after_19;
    // 0x80051BE0: nop

    after_19:
    // 0x80051BE4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051BE8: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051BEC: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x80051BF0: nop

    // 0x80051BF4: lw          $t3, 0xB4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XB4);
    // 0x80051BF8: nop

    // 0x80051BFC: lbu         $a0, 0x7($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X7);
    // 0x80051C00: jal         0x80049328
    // 0x80051C04: nop

    func_80049328(rdram, ctx);
        goto after_20;
    // 0x80051C04: nop

    after_20:
    // 0x80051C08: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x80051C0C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051C10: jal         0x80293148
    // 0x80051C14: sh          $t4, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r12;
    LOOKUP_FUNC(0x80293148)(rdram, ctx);
        goto after_21;
    // 0x80051C14: sh          $t4, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r12;
    after_21:
    // 0x80051C18: b           L_80051EEC
    // 0x80051C1C: nop

        goto L_80051EEC;
    // 0x80051C1C: nop

L_80051C20:
    // 0x80051C20: andi        $t5, $v0, 0xC
    ctx->r13 = ctx->r2 & 0XC;
    // 0x80051C24: beq         $t5, $zero, L_80051C70
    if (ctx->r13 == 0) {
        // 0x80051C28: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_80051C70;
    }
    // 0x80051C28: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80051C2C: lw          $t6, 0x8C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8C);
    // 0x80051C30: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80051C34: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80051C38: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051C3C: sw          $t7, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r15;
    // 0x80051C40: addiu       $v0, $v0, 0xB4C
    ctx->r2 = ADD32(ctx->r2, 0XB4C);
    // 0x80051C44: sh          $t8, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r24;
    // 0x80051C48: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80051C4C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80051C50: addiu       $a0, $a0, -0x1B30
    ctx->r4 = ADD32(ctx->r4, -0X1B30);
    // 0x80051C54: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80051C58: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x80051C5C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80051C60: jal         0x80290BE4
    // 0x80051C64: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    LOOKUP_FUNC(0x80290BE4)(rdram, ctx);
        goto after_22;
    // 0x80051C64: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    after_22:
    // 0x80051C68: b           L_80051EEC
    // 0x80051C6C: nop

        goto L_80051EEC;
    // 0x80051C6C: nop

L_80051C70:
    // 0x80051C70: lbu         $t3, 0xBC($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XBC);
    // 0x80051C74: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80051C78: bne         $t3, $at, L_80051CA8
    if (ctx->r11 != ctx->r1) {
        // 0x80051C7C: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80051CA8;
    }
    // 0x80051C7C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80051C80: lbu         $t4, -0x32A4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X32A4);
    // 0x80051C84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80051C88: beq         $t4, $at, L_80051CA8
    if (ctx->r12 == ctx->r1) {
        // 0x80051C8C: nop
    
            goto L_80051CA8;
    }
    // 0x80051C8C: nop

    // 0x80051C90: jal         0x802719DC
    // 0x80051C94: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_23;
    // 0x80051C94: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    after_23:
    // 0x80051C98: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051C9C: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051CA0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051CA4: nop

L_80051CA8:
    // 0x80051CA8: lbu         $t5, 0xBD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XBD);
    // 0x80051CAC: nop

    // 0x80051CB0: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x80051CB4: beq         $t6, $zero, L_80051D24
    if (ctx->r14 == 0) {
        // 0x80051CB8: nop
    
            goto L_80051D24;
    }
    // 0x80051CB8: nop

    // 0x80051CBC: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80051CC0: jal         0x80272AEC
    // 0x80051CC4: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_24;
    // 0x80051CC4: nop

    after_24:
    // 0x80051CC8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80051CCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80051CD0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051CD4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80051CD8: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051CDC: bc1t        L_80051D00
    if (c1cs) {
        // 0x80051CE0: lui         $at, 0x4210
        ctx->r1 = S32(0X4210 << 16);
            goto L_80051D00;
    }
    // 0x80051CE0: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80051CE4: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80051CE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80051CEC: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80051CF0: nop

    // 0x80051CF4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80051CF8: nop

    // 0x80051CFC: bc1f        L_80051D24
    if (!c1cs) {
        // 0x80051D00: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80051D24;
    }
L_80051D00:
    // 0x80051D00: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80051D04: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80051D08: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80051D0C: beq         $t8, $at, L_80051D24
    if (ctx->r24 == ctx->r1) {
        // 0x80051D10: nop
    
            goto L_80051D24;
    }
    // 0x80051D10: nop

    // 0x80051D14: jal         0x802719DC
    // 0x80051D18: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_25;
    // 0x80051D18: addiu       $a0, $zero, 0x3D8
    ctx->r4 = ADD32(0, 0X3D8);
    after_25:
    // 0x80051D1C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051D20: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
L_80051D24:
    // 0x80051D24: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80051D28: lhu         $t9, 0xB4A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB4A);
    // 0x80051D2C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051D30: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80051D34: sh          $t2, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = ctx->r10;
    // 0x80051D38: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051D3C: nop

    // 0x80051D40: lw          $t3, 0x8C($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8C);
    // 0x80051D44: nop

    // 0x80051D48: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x80051D4C: nop

    // 0x80051D50: sw          $t4, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r12;
    // 0x80051D54: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80051D58: nop

    // 0x80051D5C: lhu         $t5, 0xD0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XD0);
    // 0x80051D60: nop

    // 0x80051D64: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80051D68: beq         $t6, $zero, L_80051E34
    if (ctx->r14 == 0) {
        // 0x80051D6C: nop
    
            goto L_80051E34;
    }
    // 0x80051D6C: nop

    // 0x80051D70: lw          $t7, 0xB4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XB4);
    // 0x80051D74: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80051D78: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x80051D7C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80051D80: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80051D84: beq         $t9, $zero, L_80051DC0
    if (ctx->r25 == 0) {
        // 0x80051D88: addiu       $v0, $v0, 0xB4C
        ctx->r2 = ADD32(ctx->r2, 0XB4C);
            goto L_80051DC0;
    }
    // 0x80051D88: addiu       $v0, $v0, 0xB4C
    ctx->r2 = ADD32(ctx->r2, 0XB4C);
    // 0x80051D8C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051D90: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80051D94: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x80051D98: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
    // 0x80051D9C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80051DA0: beq         $t3, $at, L_80051DB0
    if (ctx->r11 == ctx->r1) {
        // 0x80051DA4: nop
    
            goto L_80051DB0;
    }
    // 0x80051DA4: nop

    // 0x80051DA8: jal         0x80077918
    // 0x80051DAC: nop

    func_80077918(rdram, ctx);
        goto after_26;
    // 0x80051DAC: nop

    after_26:
L_80051DB0:
    // 0x80051DB0: jal         0x8028EA48
    // 0x80051DB4: nop

    LOOKUP_FUNC(0x8028EA48)(rdram, ctx);
        goto after_27;
    // 0x80051DB4: nop

    after_27:
    // 0x80051DB8: b           L_80051EEC
    // 0x80051DBC: nop

        goto L_80051EEC;
    // 0x80051DBC: nop

L_80051DC0:
    // 0x80051DC0: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x80051DC4: nop

    // 0x80051DC8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80051DCC: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x80051DD0: lw          $t6, 0xB4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XB4);
    // 0x80051DD4: nop

    // 0x80051DD8: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80051DDC: nop

    // 0x80051DE0: lbu         $a0, 0x0($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X0);
    // 0x80051DE4: jal         0x80074D84
    // 0x80051DE8: nop

    func_80074D84(rdram, ctx);
        goto after_28;
    // 0x80051DE8: nop

    after_28:
    // 0x80051DEC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051DF0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80051DF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051DF8: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051DFC: sh          $t8, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r24;
    // 0x80051E00: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80051E04: nop

    // 0x80051E08: lw          $t2, 0xB4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XB4);
    // 0x80051E0C: nop

    // 0x80051E10: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x80051E14: nop

    // 0x80051E18: lbu         $a0, 0x7($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X7);
    // 0x80051E1C: jal         0x80049158
    // 0x80051E20: nop

    func_80049158(rdram, ctx);
        goto after_29;
    // 0x80051E20: nop

    after_29:
    // 0x80051E24: jal         0x8028FDEC
    // 0x80051E28: nop

    LOOKUP_FUNC(0x8028FDEC)(rdram, ctx);
        goto after_30;
    // 0x80051E28: nop

    after_30:
    // 0x80051E2C: b           L_80051EEC
    // 0x80051E30: nop

        goto L_80051EEC;
    // 0x80051E30: nop

L_80051E34:
    // 0x80051E34: lw          $t4, 0xB4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XB4);
    // 0x80051E38: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80051E3C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x80051E40: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051E44: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80051E48: beq         $t6, $zero, L_80051EC8
    if (ctx->r14 == 0) {
        // 0x80051E4C: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80051EC8;
    }
    // 0x80051E4C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80051E50: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80051E54: addiu       $v0, $v0, 0xB4C
    ctx->r2 = ADD32(ctx->r2, 0XB4C);
    // 0x80051E58: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80051E5C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80051E60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80051E64: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x80051E68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051E6C: sh          $t9, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r25;
    // 0x80051E70: lw          $t2, 0xB4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XB4);
    // 0x80051E74: nop

    // 0x80051E78: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x80051E7C: nop

    // 0x80051E80: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x80051E84: jal         0x80074D84
    // 0x80051E88: nop

    func_80074D84(rdram, ctx);
        goto after_31;
    // 0x80051E88: nop

    after_31:
    // 0x80051E8C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80051E90: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80051E94: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x80051E98: nop

    // 0x80051E9C: lw          $t5, 0xB4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB4);
    // 0x80051EA0: nop

    // 0x80051EA4: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x80051EA8: nop

    // 0x80051EAC: lbu         $a0, 0x7($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X7);
    // 0x80051EB0: jal         0x80049158
    // 0x80051EB4: nop

    func_80049158(rdram, ctx);
        goto after_32;
    // 0x80051EB4: nop

    after_32:
    // 0x80051EB8: jal         0x8028FDEC
    // 0x80051EBC: nop

    LOOKUP_FUNC(0x8028FDEC)(rdram, ctx);
        goto after_33;
    // 0x80051EBC: nop

    after_33:
    // 0x80051EC0: b           L_80051EEC
    // 0x80051EC4: nop

        goto L_80051EEC;
    // 0x80051EC4: nop

L_80051EC8:
    // 0x80051EC8: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80051ECC: sh          $t7, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r15;
    // 0x80051ED0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80051ED4: beq         $t8, $at, L_80051EE4
    if (ctx->r24 == ctx->r1) {
        // 0x80051ED8: nop
    
            goto L_80051EE4;
    }
    // 0x80051ED8: nop

    // 0x80051EDC: jal         0x80077918
    // 0x80051EE0: nop

    func_80077918(rdram, ctx);
        goto after_34;
    // 0x80051EE0: nop

    after_34:
L_80051EE4:
    // 0x80051EE4: jal         0x8028EA48
    // 0x80051EE8: nop

    LOOKUP_FUNC(0x8028EA48)(rdram, ctx);
        goto after_35;
    // 0x80051EE8: nop

    after_35:
L_80051EEC:
    // 0x80051EEC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80051EF0: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x80051EF4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80051EF8: jal         0x80050F74
    // 0x80051EFC: sh          $t9, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r25;
    func_80050F74(rdram, ctx);
        goto after_36;
    // 0x80051EFC: sh          $t9, 0xB7A($at)
    MEM_H(0XB7A, ctx->r1) = ctx->r25;
    after_36:
    // 0x80051F00: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80051F04: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80051F08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80051F0C: beq         $v0, $at, L_80051F1C
    if (ctx->r2 == ctx->r1) {
        // 0x80051F10: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80051F1C;
    }
    // 0x80051F10: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80051F14: bne         $v0, $at, L_80051F24
    if (ctx->r2 != ctx->r1) {
        // 0x80051F18: nop
    
            goto L_80051F24;
    }
    // 0x80051F18: nop

L_80051F1C:
    // 0x80051F1C: jal         0x8005133C
    // 0x80051F20: nop

    func_8005133C(rdram, ctx);
        goto after_37;
    // 0x80051F20: nop

    after_37:
L_80051F24:
    // 0x80051F24: jal         0x800658EC
    // 0x80051F28: nop

    func_800658EC(rdram, ctx);
        goto after_38;
    // 0x80051F28: nop

    after_38:
    // 0x80051F2C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80051F30: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x80051F34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80051F38: bne         $t2, $at, L_80051F48
    if (ctx->r10 != ctx->r1) {
        // 0x80051F3C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80051F48;
    }
    // 0x80051F3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80051F40: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80051F44: sb          $t3, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r11;
L_80051F48:
    // 0x80051F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051F4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80051F50: jr          $ra
    // 0x80051F54: nop

    return;
    // 0x80051F54: nop

;}
RECOMP_FUNC void func_80051F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051F58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051F5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051F60: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80051F64: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80051F68: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051F70: lhu         $t6, 0xD0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XD0);
    // 0x80051F74: nop

    // 0x80051F78: bne         $t6, $zero, L_80052024
    if (ctx->r14 != 0) {
        // 0x80051F7C: nop
    
            goto L_80052024;
    }
    // 0x80051F7C: nop

    // 0x80051F80: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80051F84: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80051F88: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x80051F8C: bne         $t8, $zero, L_80051FC4
    if (ctx->r24 != 0) {
        // 0x80051F90: nop
    
            goto L_80051FC4;
    }
    // 0x80051F90: nop

    // 0x80051F94: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x80051F98: nop

    // 0x80051F9C: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80051FA0: bne         $t0, $zero, L_80051FC4
    if (ctx->r8 != 0) {
        // 0x80051FA4: nop
    
            goto L_80051FC4;
    }
    // 0x80051FA4: nop

    // 0x80051FA8: lw          $t1, 0x8C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8C);
    // 0x80051FAC: nop

    // 0x80051FB0: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x80051FB4: nop

    // 0x80051FB8: lbu         $a0, 0x7($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X7);
    // 0x80051FBC: jal         0x800492C8
    // 0x80051FC0: nop

    func_800492C8(rdram, ctx);
        goto after_0;
    // 0x80051FC0: nop

    after_0:
L_80051FC4:
    // 0x80051FC4: jal         0x800506E8
    // 0x80051FC8: nop

    func_800506E8(rdram, ctx);
        goto after_1;
    // 0x80051FC8: nop

    after_1:
    // 0x80051FCC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80051FD0: beq         $v0, $zero, L_800521A0
    if (ctx->r2 == 0) {
        // 0x80051FD4: sh          $v0, 0xD0($t3)
        MEM_H(0XD0, ctx->r11) = ctx->r2;
            goto L_800521A0;
    }
    // 0x80051FD4: sh          $v0, 0xD0($t3)
    MEM_H(0XD0, ctx->r11) = ctx->r2;
    // 0x80051FD8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051FDC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80051FE0: lhu         $t4, 0xD0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XD0);
    // 0x80051FE4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80051FE8: sh          $t4, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = ctx->r12;
    // 0x80051FEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80051FF0: addiu       $a0, $a0, 0x3698
    ctx->r4 = ADD32(ctx->r4, 0X3698);
    // 0x80051FF4: lhu         $t5, 0xCE($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XCE);
    // 0x80051FF8: addiu       $v1, $v1, 0xB7E
    ctx->r3 = ADD32(ctx->r3, 0XB7E);
    // 0x80051FFC: sh          $t5, 0xD2($v0)
    MEM_H(0XD2, ctx->r2) = ctx->r13;
    // 0x80052000: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80052004: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x80052008: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x8005200C: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80052010: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80052014: jal         0x8005148C
    // 0x80052018: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    func_8005148C(rdram, ctx);
        goto after_2;
    // 0x80052018: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    after_2:
    // 0x8005201C: b           L_800521A0
    // 0x80052020: nop

        goto L_800521A0;
    // 0x80052020: nop

L_80052024:
    // 0x80052024: lhu         $v1, 0xCC($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XCC);
    // 0x80052028: nop

    // 0x8005202C: beq         $v1, $zero, L_800521A0
    if (ctx->r3 == 0) {
        // 0x80052030: addiu       $t0, $v1, -0x1
        ctx->r8 = ADD32(ctx->r3, -0X1);
            goto L_800521A0;
    }
    // 0x80052030: addiu       $t0, $v1, -0x1
    ctx->r8 = ADD32(ctx->r3, -0X1);
    // 0x80052034: sh          $t0, 0xCC($v0)
    MEM_H(0XCC, ctx->r2) = ctx->r8;
    // 0x80052038: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005203C: nop

    // 0x80052040: lhu         $t1, 0xCC($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XCC);
    // 0x80052044: nop

    // 0x80052048: bne         $t1, $zero, L_800521A0
    if (ctx->r9 != 0) {
        // 0x8005204C: nop
    
            goto L_800521A0;
    }
    // 0x8005204C: nop

    // 0x80052050: sh          $zero, 0xCE($v0)
    MEM_H(0XCE, ctx->r2) = 0;
    // 0x80052054: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80052058: nop

    // 0x8005205C: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x80052060: nop

    // 0x80052064: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x80052068: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    // 0x8005206C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80052070: nop

    // 0x80052074: lhu         $t4, 0xC2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XC2);
    // 0x80052078: nop

    // 0x8005207C: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80052080: bne         $t5, $zero, L_800521A0
    if (ctx->r13 != 0) {
        // 0x80052084: nop
    
            goto L_800521A0;
    }
    // 0x80052084: nop

    // 0x80052088: lw          $v1, 0x88($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X88);
    // 0x8005208C: nop

    // 0x80052090: beq         $v1, $zero, L_800520F8
    if (ctx->r3 == 0) {
        // 0x80052094: nop
    
            goto L_800520F8;
    }
    // 0x80052094: nop

    // 0x80052098: lw          $t6, 0xCC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XCC);
    // 0x8005209C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800520A0: lw          $v0, 0x30($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X30);
    // 0x800520A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800520A8: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x800520AC: nop

    // 0x800520B0: ori         $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 | 0X4000;
    // 0x800520B4: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x800520B8: jal         0x8024BC08
    // 0x800520BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_3;
    // 0x800520BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x800520C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800520C4: nop

    // 0x800520C8: lhu         $t9, 0x16($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X16);
    // 0x800520CC: nop

    // 0x800520D0: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x800520D4: sh          $t0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r8;
    // 0x800520D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800520DC: nop

    // 0x800520E0: lhu         $t1, 0xDC($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XDC);
    // 0x800520E4: nop

    // 0x800520E8: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x800520EC: sh          $t2, 0xDC($v0)
    MEM_H(0XDC, ctx->r2) = ctx->r10;
    // 0x800520F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800520F4: nop

L_800520F8:
    // 0x800520F8: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x800520FC: nop

    // 0x80052100: ori         $t4, $t3, 0x200
    ctx->r12 = ctx->r11 | 0X200;
    // 0x80052104: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x80052108: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005210C: jal         0x800557AC
    // 0x80052110: nop

    func_800557AC(rdram, ctx);
        goto after_4;
    // 0x80052110: nop

    after_4:
    // 0x80052114: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80052118: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005211C: sw          $zero, 0x84($t5)
    MEM_W(0X84, ctx->r13) = 0;
    // 0x80052120: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80052124: addiu       $v1, $v1, 0x361E
    ctx->r3 = ADD32(ctx->r3, 0X361E);
    // 0x80052128: sw          $zero, 0x88($t6)
    MEM_W(0X88, ctx->r14) = 0;
    // 0x8005212C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80052130: nop

    // 0x80052134: lhu         $t7, 0xDC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XDC);
    // 0x80052138: nop

    // 0x8005213C: andi        $t8, $t7, 0x18
    ctx->r24 = ctx->r15 & 0X18;
    // 0x80052140: beq         $t8, $zero, L_800521A0
    if (ctx->r24 == 0) {
        // 0x80052144: nop
    
            goto L_800521A0;
    }
    // 0x80052144: nop

    // 0x80052148: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8005214C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052150: andi        $t0, $t9, 0xEFFF
    ctx->r8 = ctx->r25 & 0XEFFF;
    // 0x80052154: sh          $t0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r8;
    // 0x80052158: lh          $t1, 0xE8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE8);
    // 0x8005215C: nop

    // 0x80052160: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80052164: nop

    // 0x80052168: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005216C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80052170: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80052174: nop

    // 0x80052178: lh          $t2, 0xEA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XEA);
    // 0x8005217C: nop

    // 0x80052180: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80052184: nop

    // 0x80052188: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005218C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x80052190: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80052194: lwc1        $f16, -0x6E6C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6E6C);
    // 0x80052198: nop

    // 0x8005219C: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
L_800521A0:
    // 0x800521A0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800521A4: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x800521A8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800521AC: beq         $t4, $zero, L_80052240
    if (ctx->r12 == 0) {
        // 0x800521B0: addiu       $v0, $v0, 0x3630
        ctx->r2 = ADD32(ctx->r2, 0X3630);
            goto L_80052240;
    }
    // 0x800521B0: addiu       $v0, $v0, 0x3630
    ctx->r2 = ADD32(ctx->r2, 0X3630);
    // 0x800521B4: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x800521B8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800521BC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800521C0: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x800521C4: lhu         $t8, 0xC0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XC0);
    // 0x800521C8: nop

    // 0x800521CC: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x800521D0: bne         $t9, $zero, L_80052244
    if (ctx->r25 != 0) {
        // 0x800521D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80052244;
    }
    // 0x800521D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800521D8: jal         0x80050664
    // 0x800521DC: nop

    func_80050664(rdram, ctx);
        goto after_5;
    // 0x800521DC: nop

    after_5:
    // 0x800521E0: bne         $v0, $zero, L_80052240
    if (ctx->r2 != 0) {
        // 0x800521E4: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80052240;
    }
    // 0x800521E4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800521E8: sh          $zero, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = 0;
    // 0x800521EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800521F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800521F4: lhu         $t0, 0xC0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XC0);
    // 0x800521F8: nop

    // 0x800521FC: andi        $t1, $t0, 0xFDFF
    ctx->r9 = ctx->r8 & 0XFDFF;
    // 0x80052200: sh          $t1, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r9;
    // 0x80052204: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80052208: nop

    // 0x8005220C: sh          $zero, 0xCE($t2)
    MEM_H(0XCE, ctx->r10) = 0;
    // 0x80052210: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80052214: nop

    // 0x80052218: sh          $zero, 0xD0($t3)
    MEM_H(0XD0, ctx->r11) = 0;
    // 0x8005221C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80052220: nop

    // 0x80052224: sh          $zero, 0xDC($t4)
    MEM_H(0XDC, ctx->r12) = 0;
    // 0x80052228: sh          $zero, 0xB4A($at)
    MEM_H(0XB4A, ctx->r1) = 0;
    // 0x8005222C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80052230: jal         0x8007C32C
    // 0x80052234: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    func_8007C32C(rdram, ctx);
        goto after_6;
    // 0x80052234: sh          $zero, 0xB4C($at)
    MEM_H(0XB4C, ctx->r1) = 0;
    after_6:
    // 0x80052238: jal         0x8028E6A0
    // 0x8005223C: nop

    LOOKUP_FUNC(0x8028E6A0)(rdram, ctx);
        goto after_7;
    // 0x8005223C: nop

    after_7:
L_80052240:
    // 0x80052240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80052244:
    // 0x80052244: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052248: jr          $ra
    // 0x8005224C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005224C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80052250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052250: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80052254: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80052258: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8005225C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052260: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80052264: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80052268: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8005226C: lwc1        $f8, 0x20E0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20E0);
    // 0x80052270: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80052274: lwc1        $f4, 0x20DC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20DC);
    // 0x80052278: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005227C: lwc1        $f18, 0x20E4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20E4);
    // 0x80052280: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80052284: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80052288: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8005228C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80052290: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80052294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80052298: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x8005229C: jal         0x8001C5D0
    // 0x800522A0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x800522A0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x800522A4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800522A8: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800522AC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800522B0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800522B4: nop

    // 0x800522B8: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x800522BC: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800522C0: jal         0x8007FA40
    // 0x800522C4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x800522C4: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x800522C8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800522CC: jal         0x8001C5D0
    // 0x800522D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x800522D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x800522D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800522D8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800522DC: lwc1        $f3, -0x6E68($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6E68);
    // 0x800522E0: lwc1        $f2, -0x6E64($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6E64);
    // 0x800522E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800522E8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x800522EC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800522F0: nop

    // 0x800522F4: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800522F8: nop

    // 0x800522FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80052300: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80052304: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80052308: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8005230C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80052310: nop

    // 0x80052314: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80052318: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x8005231C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80052320: swc1        $f16, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f16.u32l;
    // 0x80052324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005232C: jr          $ra
    // 0x80052330: nop

    return;
    // 0x80052330: nop

;}
RECOMP_FUNC void func_80052334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052334: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80052338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005233C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80052340: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80052344: addiu       $a0, $a0, 0x6420
    ctx->r4 = ADD32(ctx->r4, 0X6420);
    // 0x80052348: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8005234C: jal         0x80052250
    // 0x80052350: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80052250(rdram, ctx);
        goto after_0;
    // 0x80052350: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x80052354: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80052358: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x8005235C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80052360: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80052364: lwc1        $f6, 0x58($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X58);
    // 0x80052368: nop

    // 0x8005236C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80052370: jal         0x80081040
    // 0x80052374: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80052374: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80052378: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8005237C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80052380: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80052384: lwc1        $f8, 0x5C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X5C);
    // 0x80052388: nop

    // 0x8005238C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80052390: jal         0x80081040
    // 0x80052394: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80052394: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x80052398: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8005239C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800523A0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800523A4: jal         0x80080E80
    // 0x800523A8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x800523A8: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800523AC: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800523B0: jal         0x80080E80
    // 0x800523B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x800523B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x800523B8: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800523BC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x800523C0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800523C4: nop

    // 0x800523C8: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800523CC: jal         0x8007FA40
    // 0x800523D0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x800523D0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x800523D4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800523D8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x800523DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800523E0: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800523E4: c.lt.d      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.d < ctx->f2.d;
    // 0x800523E8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800523EC: bc1f        L_80052418
    if (!c1cs) {
        // 0x800523F0: nop
    
            goto L_80052418;
    }
    // 0x800523F0: nop

    // 0x800523F4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800523F8: nop

    // 0x800523FC: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80052400: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80052404: sub.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d - ctx->f18.d;
    // 0x80052408: jal         0x8007FA40
    // 0x8005240C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_8007FA40(rdram, ctx);
        goto after_6;
    // 0x8005240C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x80052410: b           L_80052420
    // 0x80052414: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_80052420;
    // 0x80052414: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_80052418:
    // 0x80052418: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8005241C: nop

L_80052420:
    // 0x80052420: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80052424: jal         0x8001C5D0
    // 0x80052428: nop

    func_8001C5D0(rdram, ctx);
        goto after_7;
    // 0x80052428: nop

    after_7:
    // 0x8005242C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052430: lwc1        $f9, -0x6E60($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6E60);
    // 0x80052434: lwc1        $f8, -0x6E5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E5C);
    // 0x80052438: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8005243C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80052440: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052444: lwc1        $f17, -0x6E58($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6E58);
    // 0x80052448: lwc1        $f16, -0x6E54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6E54);
    // 0x8005244C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80052450: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x80052454: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80052458: swc1        $f4, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->f4.u32l;
    // 0x8005245C: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80052460: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80052464: jal         0x8001C5D0
    // 0x80052468: nop

    func_8001C5D0(rdram, ctx);
        goto after_8;
    // 0x80052468: nop

    after_8:
    // 0x8005246C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052470: lwc1        $f9, -0x6E50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6E50);
    // 0x80052474: lwc1        $f8, -0x6E4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E4C);
    // 0x80052478: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8005247C: mul.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80052480: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80052484: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80052488: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005248C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80052490: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80052494: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x80052498: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8005249C: swc1        $f10, 0x1DA8($v0)
    MEM_W(0X1DA8, ctx->r2) = ctx->f10.u32l;
    // 0x800524A0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800524A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800524A8: bc1f        L_800524BC
    if (!c1cs) {
        // 0x800524AC: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_800524BC;
    }
    // 0x800524AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800524B0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800524B4: b           L_800524C8
    // 0x800524B8: sh          $t9, 0x64($t0)
    MEM_H(0X64, ctx->r8) = ctx->r25;
        goto L_800524C8;
    // 0x800524B8: sh          $t9, 0x64($t0)
    MEM_H(0X64, ctx->r8) = ctx->r25;
L_800524BC:
    // 0x800524BC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x800524C0: nop

    // 0x800524C4: sh          $zero, 0x64($t1)
    MEM_H(0X64, ctx->r9) = 0;
L_800524C8:
    // 0x800524C8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x800524CC: nop

    // 0x800524D0: lh          $t3, 0x64($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X64);
    // 0x800524D4: nop

    // 0x800524D8: bne         $t3, $zero, L_80052500
    if (ctx->r11 != 0) {
        // 0x800524DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80052500;
    }
    // 0x800524DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800524E0: lwc1        $f16, 0x1DA8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1DA8);
    // 0x800524E4: lwc1        $f19, -0x6E48($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6E48);
    // 0x800524E8: lwc1        $f18, -0x6E44($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6E44);
    // 0x800524EC: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x800524F0: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x800524F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800524F8: swc1        $f6, 0x1DA8($v0)
    MEM_W(0X1DA8, ctx->r2) = ctx->f6.u32l;
    // 0x800524FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80052500:
    // 0x80052500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052504: jr          $ra
    // 0x80052508: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80052508: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005250C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80052510: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80052514: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80052518: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8005251C: lbu         $a1, -0x2FAF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2FAF);
    // 0x80052520: lh          $a0, 0x50($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X50);
    // 0x80052524: bne         $a1, $zero, L_80052590
    if (ctx->r5 != 0) {
        // 0x80052528: andi        $v1, $a0, 0xFFFF
        ctx->r3 = ctx->r4 & 0XFFFF;
            goto L_80052590;
    }
    // 0x80052528: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x8005252C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80052530: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x80052534: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80052538: beq         $t6, $at, L_80052590
    if (ctx->r14 == ctx->r1) {
        // 0x8005253C: nop
    
            goto L_80052590;
    }
    // 0x8005253C: nop

    // 0x80052540: lh          $t7, 0x64($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X64);
    // 0x80052544: nop

    // 0x80052548: bne         $t7, $zero, L_80052568
    if (ctx->r15 != 0) {
        // 0x8005254C: nop
    
            goto L_80052568;
    }
    // 0x8005254C: nop

    // 0x80052550: lw          $t8, 0x50($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X50);
    // 0x80052554: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x80052558: nop

    // 0x8005255C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80052560: b           L_8005257C
    // 0x80052564: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
        goto L_8005257C;
    // 0x80052564: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
L_80052568:
    // 0x80052568: lw          $t1, 0x50($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X50);
    // 0x8005256C: lw          $t2, 0x54($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X54);
    // 0x80052570: nop

    // 0x80052574: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x80052578: sw          $t3, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r11;
L_8005257C:
    // 0x8005257C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80052580: nop

    // 0x80052584: lhu         $v1, 0x50($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X50);
    // 0x80052588: b           L_800525DC
    // 0x8005258C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
        goto L_800525DC;
    // 0x8005258C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_80052590:
    // 0x80052590: beq         $a1, $zero, L_800525D8
    if (ctx->r5 == 0) {
        // 0x80052594: lui         $t4, 0x802C
        ctx->r12 = S32(0X802C << 16);
            goto L_800525D8;
    }
    // 0x80052594: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80052598: lbu         $t4, 0x38DF($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X38DF);
    // 0x8005259C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800525A0: bne         $t4, $at, L_800525D8
    if (ctx->r12 != ctx->r1) {
        // 0x800525A4: or          $t5, $v1, $zero
        ctx->r13 = ctx->r3 | 0;
            goto L_800525D8;
    }
    // 0x800525A4: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x800525A8: bltz        $a0, L_800525B8
    if (SIGNED(ctx->r4) < 0) {
        // 0x800525AC: andi        $v1, $t5, 0x7FFF
        ctx->r3 = ctx->r13 & 0X7FFF;
            goto L_800525B8;
    }
    // 0x800525AC: andi        $v1, $t5, 0x7FFF
    ctx->r3 = ctx->r13 & 0X7FFF;
    // 0x800525B0: b           L_800525BC
    // 0x800525B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_800525BC;
    // 0x800525B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800525B8:
    // 0x800525B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800525BC:
    // 0x800525BC: lh          $t7, 0x64($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X64);
    // 0x800525C0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x800525C4: beq         $t7, $a0, L_800525DC
    if (ctx->r15 == ctx->r4) {
        // 0x800525C8: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_800525DC;
    }
    // 0x800525C8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800525CC: subu        $v1, $t9, $v1
    ctx->r3 = SUB32(ctx->r25, ctx->r3);
    // 0x800525D0: andi        $t0, $v1, 0xFFFF
    ctx->r8 = ctx->r3 & 0XFFFF;
    // 0x800525D4: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_800525D8:
    // 0x800525D8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_800525DC:
    // 0x800525DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800525E0: lwc1        $f0, 0x60($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X60);
    // 0x800525E4: nop

    // 0x800525E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800525EC: nop

    // 0x800525F0: bc1f        L_80052694
    if (!c1cs) {
        // 0x800525F4: lui         $at, 0x4190
        ctx->r1 = S32(0X4190 << 16);
            goto L_80052694;
    }
    // 0x800525F4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800525F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800525FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80052600: div.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80052604: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80052608: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8005260C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80052610: nop

    // 0x80052614: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80052618: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8005261C: nop

    // 0x80052620: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80052624: beq         $a0, $zero, L_80052678
    if (ctx->r4 == 0) {
        // 0x80052628: nop
    
            goto L_80052678;
    }
    // 0x80052628: nop

    // 0x8005262C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80052630: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80052634: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80052638: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005263C: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80052640: nop

    // 0x80052644: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80052648: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8005264C: nop

    // 0x80052650: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80052654: bne         $a0, $zero, L_8005266C
    if (ctx->r4 != 0) {
        // 0x80052658: nop
    
            goto L_8005266C;
    }
    // 0x80052658: nop

    // 0x8005265C: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80052660: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80052664: b           L_8005274C
    // 0x80052668: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_8005274C;
    // 0x80052668: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8005266C:
    // 0x8005266C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80052670: b           L_8005274C
    // 0x80052674: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_8005274C;
    // 0x80052674: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_80052678:
    // 0x80052678: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8005267C: nop

    // 0x80052680: bltz        $a0, L_8005266C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80052684: nop
    
            goto L_8005266C;
    }
    // 0x80052684: nop

    // 0x80052688: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8005268C: b           L_80052750
    // 0x80052690: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
        goto L_80052750;
    // 0x80052690: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_80052694:
    // 0x80052694: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80052698: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8005269C: bc1f        L_800526AC
    if (!c1cs) {
        // 0x800526A0: nop
    
            goto L_800526AC;
    }
    // 0x800526A0: nop

    // 0x800526A4: b           L_8005274C
    // 0x800526A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8005274C;
    // 0x800526A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_800526AC:
    // 0x800526AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800526B0: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800526B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800526B8: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x800526BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800526C0: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800526C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800526C8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800526CC: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800526D0: nop

    // 0x800526D4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800526D8: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800526DC: nop

    // 0x800526E0: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x800526E4: beq         $a0, $zero, L_80052730
    if (ctx->r4 == 0) {
        // 0x800526E8: nop
    
            goto L_80052730;
    }
    // 0x800526E8: nop

    // 0x800526EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800526F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800526F4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800526F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800526FC: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x80052700: nop

    // 0x80052704: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80052708: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x8005270C: nop

    // 0x80052710: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x80052714: bne         $a0, $zero, L_80052728
    if (ctx->r4 != 0) {
        // 0x80052718: nop
    
            goto L_80052728;
    }
    // 0x80052718: nop

    // 0x8005271C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80052720: b           L_80052740
    // 0x80052724: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80052740;
    // 0x80052724: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80052728:
    // 0x80052728: b           L_80052740
    // 0x8005272C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80052740;
    // 0x8005272C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_80052730:
    // 0x80052730: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80052734: nop

    // 0x80052738: bltz        $a0, L_80052728
    if (SIGNED(ctx->r4) < 0) {
        // 0x8005273C: nop
    
            goto L_80052728;
    }
    // 0x8005273C: nop

L_80052740:
    // 0x80052740: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80052744: nop

    // 0x80052748: nop

L_8005274C:
    // 0x8005274C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_80052750:
    // 0x80052750: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80052754: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80052758: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8005275C: sll         $t6, $t6, 11
    ctx->r14 = S32(ctx->r14 << 11);
    // 0x80052760: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80052764: mfhi        $t3
    ctx->r11 = hi;
    // 0x80052768: sll         $t4, $t3, 10
    ctx->r12 = S32(ctx->r11 << 10);
    // 0x8005276C: bgez        $t4, L_8005277C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80052770: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_8005277C;
    }
    // 0x80052770: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x80052774: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x80052778: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8005277C:
    // 0x8005277C: jr          $ra
    // 0x80052780: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    return;
    // 0x80052780: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
;}
RECOMP_FUNC void func_80052784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052784: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80052788: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005278C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80052790: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80052794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052798: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005279C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800527A0: lhu         $a1, 0xC2($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XC2);
    // 0x800527A4: nop

    // 0x800527A8: andi        $t6, $a1, 0x1000
    ctx->r14 = ctx->r5 & 0X1000;
    // 0x800527AC: bne         $t6, $zero, L_800527D0
    if (ctx->r14 != 0) {
        // 0x800527B0: ori         $t7, $a1, 0x1000
        ctx->r15 = ctx->r5 | 0X1000;
            goto L_800527D0;
    }
    // 0x800527B0: ori         $t7, $a1, 0x1000
    ctx->r15 = ctx->r5 | 0X1000;
    // 0x800527B4: sh          $t7, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r15;
    // 0x800527B8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800527BC: nop

    // 0x800527C0: sh          $zero, 0x68($t8)
    MEM_H(0X68, ctx->r24) = 0;
    // 0x800527C4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800527C8: nop

    // 0x800527CC: sh          $zero, 0x66($t9)
    MEM_H(0X66, ctx->r25) = 0;
L_800527D0:
    // 0x800527D0: lw          $t0, 0xD8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XD8);
    // 0x800527D4: nop

    // 0x800527D8: lbu         $a1, 0x2($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X2);
    // 0x800527DC: jal         0x802752E8
    // 0x800527E0: nop

    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_0;
    // 0x800527E0: nop

    after_0:
    // 0x800527E4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x800527E8: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x800527EC: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800527F0: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800527F4: sll         $t1, $t1, 7
    ctx->r9 = S32(ctx->r9 << 7);
    // 0x800527F8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800527FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052800: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80052804: lwc1        $f11, -0x6E40($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6E40);
    // 0x80052808: lwc1        $f10, -0x6E3C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E3C);
    // 0x8005280C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80052810: nop

    // 0x80052814: div.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80052818: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005281C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80052820: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80052824: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80052828: lbu         $t3, 0xBC($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XBC);
    // 0x8005282C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80052830: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80052834: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x80052838: bne         $t3, $at, L_80052864
    if (ctx->r11 != ctx->r1) {
        // 0x8005283C: mov.s       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
            goto L_80052864;
    }
    // 0x8005283C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x80052840: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052844: lwc1        $f1, -0x6E38($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6E38);
    // 0x80052848: lwc1        $f0, -0x6E34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6E34);
    // 0x8005284C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80052850: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80052854: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80052858: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x8005285C: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    // 0x80052860: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
L_80052864:
    // 0x80052864: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x80052868: jal         0x80081040
    // 0x8005286C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8005286C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80052870: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80052874: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80052878: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8005287C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80052880: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80052884: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80052888: mul.d       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8005288C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80052890: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80052894: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80052898: lh          $t4, 0x66($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X66);
    // 0x8005289C: mul.d       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x800528A0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x800528A4: nop

    // 0x800528A8: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800528AC: add.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d + ctx->f18.d;
    // 0x800528B0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800528B4: nop

    // 0x800528B8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800528BC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800528C0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800528C4: nop

    // 0x800528C8: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x800528CC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x800528D0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800528D4: sh          $t6, 0x66($v0)
    MEM_H(0X66, ctx->r2) = ctx->r14;
    // 0x800528D8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800528DC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x800528E0: jal         0x80080E80
    // 0x800528E4: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x800528E4: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    after_2:
    // 0x800528E8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800528EC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800528F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800528F4: lwc1        $f3, 0x18($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800528F8: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800528FC: lh          $t7, 0x68($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X68);
    // 0x80052900: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80052904: mul.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f18.d);
    // 0x80052908: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8005290C: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80052910: cvt.d.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.d = CVT_D_W(ctx->f10.u32l);
    // 0x80052914: add.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d + ctx->f4.d;
    // 0x80052918: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8005291C: nop

    // 0x80052920: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80052924: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80052928: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005292C: nop

    // 0x80052930: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x80052934: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80052938: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8005293C: sh          $t9, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r25;
    // 0x80052940: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80052944: nop

    // 0x80052948: lh          $t0, 0x66($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X66);
    // 0x8005294C: nop

    // 0x80052950: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80052954: nop

    // 0x80052958: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8005295C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80052960: nop

    // 0x80052964: bc1f        L_800529A4
    if (!c1cs) {
        // 0x80052968: nop
    
            goto L_800529A4;
    }
    // 0x80052968: nop

    // 0x8005296C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80052970: nop

    // 0x80052974: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80052978: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005297C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80052980: nop

    // 0x80052984: cvt.w.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    ctx->f8.u32l = CVT_W_S(ctx->f14.fl);
    // 0x80052988: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x8005298C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80052990: sh          $t2, 0x66($v0)
    MEM_H(0X66, ctx->r2) = ctx->r10;
    // 0x80052994: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80052998: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005299C: b           L_800529F0
    // 0x800529A0: lh          $t5, 0x68($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X68);
        goto L_800529F0;
    // 0x800529A0: lh          $t5, 0x68($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X68);
L_800529A4:
    // 0x800529A4: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x800529A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x800529AC: nop

    // 0x800529B0: bc1f        L_800529EC
    if (!c1cs) {
        // 0x800529B4: nop
    
            goto L_800529EC;
    }
    // 0x800529B4: nop

    // 0x800529B8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800529BC: nop

    // 0x800529C0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800529C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800529C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800529CC: nop

    // 0x800529D0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800529D4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x800529D8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800529DC: sh          $t4, 0x66($v0)
    MEM_H(0X66, ctx->r2) = ctx->r12;
    // 0x800529E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800529E4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800529E8: nop

L_800529EC:
    // 0x800529EC: lh          $t5, 0x68($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X68);
L_800529F0:
    // 0x800529F0: nop

    // 0x800529F4: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800529F8: nop

    // 0x800529FC: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80052A00: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80052A04: nop

    // 0x80052A08: bc1f        L_80052A3C
    if (!c1cs) {
        // 0x80052A0C: nop
    
            goto L_80052A3C;
    }
    // 0x80052A0C: nop

    // 0x80052A10: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80052A14: nop

    // 0x80052A18: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80052A1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80052A20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80052A24: nop

    // 0x80052A28: cvt.w.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = CVT_W_S(ctx->f14.fl);
    // 0x80052A2C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80052A30: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80052A34: b           L_80052A7C
    // 0x80052A38: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
        goto L_80052A7C;
    // 0x80052A38: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
L_80052A3C:
    // 0x80052A3C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x80052A40: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80052A44: nop

    // 0x80052A48: bc1f        L_80052A80
    if (!c1cs) {
        // 0x80052A4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052A80;
    }
    // 0x80052A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052A50: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80052A54: nop

    // 0x80052A58: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80052A5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80052A60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80052A64: nop

    // 0x80052A68: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80052A6C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80052A70: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80052A74: sh          $t9, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r25;
    // 0x80052A78: nop

L_80052A7C:
    // 0x80052A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80052A80:
    // 0x80052A80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80052A84: jr          $ra
    // 0x80052A88: nop

    return;
    // 0x80052A88: nop

;}
RECOMP_FUNC void func_80052A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052A8C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80052A90: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x80052A94: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052A98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052A9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052AA0: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x80052AA4: nop

    // 0x80052AA8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80052AAC: sh          $t7, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r15;
    // 0x80052AB0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052AB4: nop

    // 0x80052AB8: lhu         $a0, 0xC0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC0);
    // 0x80052ABC: nop

    // 0x80052AC0: andi        $t8, $a0, 0x1000
    ctx->r24 = ctx->r4 & 0X1000;
    // 0x80052AC4: beq         $t8, $zero, L_80052B8C
    if (ctx->r24 == 0) {
        // 0x80052AC8: nop
    
            goto L_80052B8C;
    }
    // 0x80052AC8: nop

    // 0x80052ACC: lw          $t9, 0xA4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XA4);
    // 0x80052AD0: ori         $t1, $a0, 0x4000
    ctx->r9 = ctx->r4 | 0X4000;
    // 0x80052AD4: lhu         $v1, 0x6($t9)
    ctx->r3 = MEM_HU(ctx->r25, 0X6);
    // 0x80052AD8: nop

    // 0x80052ADC: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x80052AE0: beq         $t0, $zero, L_80052B08
    if (ctx->r8 == 0) {
        // 0x80052AE4: andi        $t3, $v1, 0x1
        ctx->r11 = ctx->r3 & 0X1;
            goto L_80052B08;
    }
    // 0x80052AE4: andi        $t3, $v1, 0x1
    ctx->r11 = ctx->r3 & 0X1;
    // 0x80052AE8: sh          $t1, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r9;
    // 0x80052AEC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052AF0: nop

    // 0x80052AF4: lw          $t2, 0xA4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XA4);
    // 0x80052AF8: lhu         $a0, 0xC0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC0);
    // 0x80052AFC: lhu         $v1, 0x6($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0X6);
    // 0x80052B00: b           L_80052B30
    // 0x80052B04: andi        $t6, $a0, 0x4000
    ctx->r14 = ctx->r4 & 0X4000;
        goto L_80052B30;
    // 0x80052B04: andi        $t6, $a0, 0x4000
    ctx->r14 = ctx->r4 & 0X4000;
L_80052B08:
    // 0x80052B08: beq         $t3, $zero, L_80052B2C
    if (ctx->r11 == 0) {
        // 0x80052B0C: ori         $t4, $a0, 0x8000
        ctx->r12 = ctx->r4 | 0X8000;
            goto L_80052B2C;
    }
    // 0x80052B0C: ori         $t4, $a0, 0x8000
    ctx->r12 = ctx->r4 | 0X8000;
    // 0x80052B10: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x80052B14: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052B18: nop

    // 0x80052B1C: lw          $t5, 0xA4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XA4);
    // 0x80052B20: lhu         $a0, 0xC0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC0);
    // 0x80052B24: lhu         $v1, 0x6($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X6);
    // 0x80052B28: nop

L_80052B2C:
    // 0x80052B2C: andi        $t6, $a0, 0x4000
    ctx->r14 = ctx->r4 & 0X4000;
L_80052B30:
    // 0x80052B30: beq         $t6, $zero, L_80052B54
    if (ctx->r14 == 0) {
        // 0x80052B34: andi        $t9, $a0, 0x8000
        ctx->r25 = ctx->r4 & 0X8000;
            goto L_80052B54;
    }
    // 0x80052B34: andi        $t9, $a0, 0x8000
    ctx->r25 = ctx->r4 & 0X8000;
    // 0x80052B38: andi        $t7, $v1, 0x4
    ctx->r15 = ctx->r3 & 0X4;
    // 0x80052B3C: bne         $t7, $zero, L_80052B8C
    if (ctx->r15 != 0) {
        // 0x80052B40: ori         $t8, $a0, 0x2000
        ctx->r24 = ctx->r4 | 0X2000;
            goto L_80052B8C;
    }
    // 0x80052B40: ori         $t8, $a0, 0x2000
    ctx->r24 = ctx->r4 | 0X2000;
    // 0x80052B44: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
    // 0x80052B48: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052B4C: b           L_80052B90
    // 0x80052B50: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
        goto L_80052B90;
    // 0x80052B50: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
L_80052B54:
    // 0x80052B54: beq         $t9, $zero, L_80052B78
    if (ctx->r25 == 0) {
        // 0x80052B58: andi        $t2, $v1, 0x8000
        ctx->r10 = ctx->r3 & 0X8000;
            goto L_80052B78;
    }
    // 0x80052B58: andi        $t2, $v1, 0x8000
    ctx->r10 = ctx->r3 & 0X8000;
    // 0x80052B5C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x80052B60: bne         $t0, $zero, L_80052B8C
    if (ctx->r8 != 0) {
        // 0x80052B64: andi        $t1, $a0, 0xDFFF
        ctx->r9 = ctx->r4 & 0XDFFF;
            goto L_80052B8C;
    }
    // 0x80052B64: andi        $t1, $a0, 0xDFFF
    ctx->r9 = ctx->r4 & 0XDFFF;
    // 0x80052B68: sh          $t1, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r9;
    // 0x80052B6C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052B70: b           L_80052B90
    // 0x80052B74: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
        goto L_80052B90;
    // 0x80052B74: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
L_80052B78:
    // 0x80052B78: bne         $t2, $zero, L_80052B8C
    if (ctx->r10 != 0) {
        // 0x80052B7C: ori         $t3, $a0, 0x2000
        ctx->r11 = ctx->r4 | 0X2000;
            goto L_80052B8C;
    }
    // 0x80052B7C: ori         $t3, $a0, 0x2000
    ctx->r11 = ctx->r4 | 0X2000;
    // 0x80052B80: sh          $t3, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r11;
    // 0x80052B84: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052B88: nop

L_80052B8C:
    // 0x80052B8C: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
L_80052B90:
    // 0x80052B90: nop

    // 0x80052B94: bne         $t4, $zero, L_80052CCC
    if (ctx->r12 != 0) {
        // 0x80052B98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052B9C: lhu         $t5, 0x6A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X6A);
    // 0x80052BA0: nop

    // 0x80052BA4: slti        $at, $t5, 0x1F
    ctx->r1 = SIGNED(ctx->r13) < 0X1F ? 1 : 0;
    // 0x80052BA8: beq         $at, $zero, L_80052CCC
    if (ctx->r1 == 0) {
        // 0x80052BAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052BB0: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x80052BB4: nop

    // 0x80052BB8: lw          $v1, 0xC8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XC8);
    // 0x80052BBC: nop

    // 0x80052BC0: lhu         $t7, 0x95C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X95C);
    // 0x80052BC4: nop

    // 0x80052BC8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80052BCC: beq         $t8, $zero, L_80052C30
    if (ctx->r24 == 0) {
        // 0x80052BD0: nop
    
            goto L_80052C30;
    }
    // 0x80052BD0: nop

    // 0x80052BD4: lh          $t9, 0x962($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X962);
    // 0x80052BD8: nop

    // 0x80052BDC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80052BE0: sh          $t0, 0x962($v1)
    MEM_H(0X962, ctx->r3) = ctx->r8;
    // 0x80052BE4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80052BE8: nop

    // 0x80052BEC: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x80052BF0: nop

    // 0x80052BF4: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80052BF8: nop

    // 0x80052BFC: lh          $t1, 0x962($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X962);
    // 0x80052C00: nop

    // 0x80052C04: blez        $t1, L_80052CCC
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80052C08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052C0C: lwc1        $f4, 0x970($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X970);
    // 0x80052C10: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80052C14: lui         $a2, 0x4274
    ctx->r6 = S32(0X4274 << 16);
    // 0x80052C18: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80052C1C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80052C20: jal         0x80052784
    // 0x80052C24: nop

    func_80052784(rdram, ctx);
        goto after_0;
    // 0x80052C24: nop

    after_0:
    // 0x80052C28: b           L_80052CCC
    // 0x80052C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80052CCC;
    // 0x80052C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80052C30:
    // 0x80052C30: lw          $t2, 0x84($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X84);
    // 0x80052C34: nop

    // 0x80052C38: bne         $t2, $zero, L_80052CCC
    if (ctx->r10 != 0) {
        // 0x80052C3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052C40: lhu         $t3, 0xC2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC2);
    // 0x80052C44: nop

    // 0x80052C48: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80052C4C: beq         $t4, $zero, L_80052CCC
    if (ctx->r12 == 0) {
        // 0x80052C50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052C54: lw          $v1, 0x74($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X74);
    // 0x80052C58: nop

    // 0x80052C5C: beq         $v1, $zero, L_80052CCC
    if (ctx->r3 == 0) {
        // 0x80052C60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052C64: lhu         $a0, 0xC0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XC0);
    // 0x80052C68: nop

    // 0x80052C6C: andi        $t5, $a0, 0x4
    ctx->r13 = ctx->r4 & 0X4;
    // 0x80052C70: bne         $t5, $zero, L_80052C94
    if (ctx->r13 != 0) {
        // 0x80052C74: nop
    
            goto L_80052C94;
    }
    // 0x80052C74: nop

    // 0x80052C78: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x80052C7C: ori         $t8, $a0, 0x4
    ctx->r24 = ctx->r4 | 0X4;
    // 0x80052C80: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80052C84: beq         $t7, $zero, L_80052CCC
    if (ctx->r15 == 0) {
        // 0x80052C88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052C8C: b           L_80052CC8
    // 0x80052C90: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
        goto L_80052CC8;
    // 0x80052C90: sh          $t8, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r24;
L_80052C94:
    // 0x80052C94: lhu         $t9, 0x2($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2);
    // 0x80052C98: nop

    // 0x80052C9C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80052CA0: bne         $t0, $zero, L_80052CCC
    if (ctx->r8 != 0) {
        // 0x80052CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052CCC;
    }
    // 0x80052CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052CA8: lwc1        $f8, 0x24($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80052CAC: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80052CB0: lw          $a0, 0x40($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X40);
    // 0x80052CB4: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80052CB8: lw          $a2, 0x30($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X30);
    // 0x80052CBC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80052CC0: jal         0x80052784
    // 0x80052CC4: nop

    func_80052784(rdram, ctx);
        goto after_1;
    // 0x80052CC4: nop

    after_1:
L_80052CC8:
    // 0x80052CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80052CCC:
    // 0x80052CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052CD0: jr          $ra
    // 0x80052CD4: nop

    return;
    // 0x80052CD4: nop

;}
RECOMP_FUNC void func_80052CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052CD8: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80052CDC: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80052CE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80052CE4: lwc1        $f4, -0x6E30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6E30);
    // 0x80052CE8: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80052CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052CF4: swc1        $f4, 0x5C($t6)
    MEM_W(0X5C, ctx->r14) = ctx->f4.u32l;
    // 0x80052CF8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80052CFC: nop

    // 0x80052D00: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80052D04: nop

    // 0x80052D08: swc1        $f6, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f6.u32l;
    // 0x80052D0C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80052D10: nop

    // 0x80052D14: lh          $a0, 0x66($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X66);
    // 0x80052D18: nop

    // 0x80052D1C: bgez        $a0, L_80052D2C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80052D20: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80052D2C;
    }
    // 0x80052D20: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80052D24: b           L_80052D2C
    // 0x80052D28: negu        $a2, $a0
    ctx->r6 = SUB32(0, ctx->r4);
        goto L_80052D2C;
    // 0x80052D28: negu        $a2, $a0
    ctx->r6 = SUB32(0, ctx->r4);
L_80052D2C:
    // 0x80052D2C: lh          $v1, 0x68($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X68);
    // 0x80052D30: nop

    // 0x80052D34: bgez        $v1, L_80052D44
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80052D38: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80052D44;
    }
    // 0x80052D38: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80052D3C: b           L_80052D44
    // 0x80052D40: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
        goto L_80052D44;
    // 0x80052D40: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
L_80052D44:
    // 0x80052D44: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80052D48: bne         $at, $zero, L_80052D58
    if (ctx->r1 != 0) {
        // 0x80052D4C: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_80052D58;
    }
    // 0x80052D4C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80052D50: b           L_80052D58
    // 0x80052D54: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
        goto L_80052D58;
    // 0x80052D54: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_80052D58:
    // 0x80052D58: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x80052D5C: sw          $t7, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r15;
    // 0x80052D60: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80052D64: nop

    // 0x80052D68: lh          $v1, 0x68($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X68);
    // 0x80052D6C: nop

    // 0x80052D70: beq         $v1, $zero, L_80052E40
    if (ctx->r3 == 0) {
        // 0x80052D74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80052E40;
    }
    // 0x80052D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052D78: bgez        $v1, L_80052D88
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80052D7C: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80052D88;
    }
    // 0x80052D7C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x80052D80: b           L_80052D88
    // 0x80052D84: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
        goto L_80052D88;
    // 0x80052D84: negu        $a2, $v1
    ctx->r6 = SUB32(0, ctx->r3);
L_80052D88:
    // 0x80052D88: lh          $a0, 0x66($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X66);
    // 0x80052D8C: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x80052D90: bgez        $a0, L_80052DA0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80052D94: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80052DA0;
    }
    // 0x80052D94: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80052D98: b           L_80052DA4
    // 0x80052D9C: negu        $a1, $a0
    ctx->r5 = SUB32(0, ctx->r4);
        goto L_80052DA4;
    // 0x80052D9C: negu        $a1, $a0
    ctx->r5 = SUB32(0, ctx->r4);
L_80052DA0:
    // 0x80052DA0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_80052DA4:
    // 0x80052DA4: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x80052DA8: jal         0x8001C5D0
    // 0x80052DAC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80052DAC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_0:
    // 0x80052DB0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80052DB4: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80052DB8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80052DBC: nop

    // 0x80052DC0: lh          $t8, 0x66($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X66);
    // 0x80052DC4: nop

    // 0x80052DC8: bltz        $t8, L_80052E08
    if (SIGNED(ctx->r24) < 0) {
        // 0x80052DCC: nop
    
            goto L_80052E08;
    }
    // 0x80052DCC: nop

    // 0x80052DD0: lh          $t9, 0x68($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X68);
    // 0x80052DD4: nop

    // 0x80052DD8: bltz        $t9, L_80052DF4
    if (SIGNED(ctx->r25) < 0) {
        // 0x80052DDC: nop
    
            goto L_80052DF4;
    }
    // 0x80052DDC: nop

    // 0x80052DE0: lwc1        $f16, 0x5C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80052DE4: nop

    // 0x80052DE8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80052DEC: b           L_80052E3C
    // 0x80052DF0: swc1        $f18, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f18.u32l;
        goto L_80052E3C;
    // 0x80052DF0: swc1        $f18, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f18.u32l;
L_80052DF4:
    // 0x80052DF4: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80052DF8: nop

    // 0x80052DFC: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80052E00: b           L_80052E3C
    // 0x80052E04: swc1        $f6, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f6.u32l;
        goto L_80052E3C;
    // 0x80052E04: swc1        $f6, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f6.u32l;
L_80052E08:
    // 0x80052E08: lh          $t0, 0x68($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X68);
    // 0x80052E0C: nop

    // 0x80052E10: bltz        $t0, L_80052E2C
    if (SIGNED(ctx->r8) < 0) {
        // 0x80052E14: nop
    
            goto L_80052E2C;
    }
    // 0x80052E14: nop

    // 0x80052E18: lwc1        $f8, 0x5C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80052E1C: nop

    // 0x80052E20: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80052E24: b           L_80052E3C
    // 0x80052E28: swc1        $f10, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f10.u32l;
        goto L_80052E3C;
    // 0x80052E28: swc1        $f10, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f10.u32l;
L_80052E2C:
    // 0x80052E2C: lwc1        $f16, 0x5C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x80052E30: nop

    // 0x80052E34: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80052E38: swc1        $f18, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f18.u32l;
L_80052E3C:
    // 0x80052E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80052E40:
    // 0x80052E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052E44: jr          $ra
    // 0x80052E48: nop

    return;
    // 0x80052E48: nop

;}
RECOMP_FUNC void func_80052E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052E4C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80052E50: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80052E54: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80052E58: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80052E5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80052E60: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80052E64: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80052E68: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80052E6C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80052E70: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80052E74: lhu         $a1, 0x6A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6A);
    // 0x80052E78: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80052E7C: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80052E80: bltz        $a1, L_80052F34
    if (SIGNED(ctx->r5) < 0) {
        // 0x80052E84: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80052F34;
    }
    // 0x80052E84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80052E88: lwc1        $f18, 0x78($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X78);
    // 0x80052E8C: lwc1        $f22, 0x70($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80052E90: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80052E94: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80052E98: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x80052E9C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_80052EA0:
    // 0x80052EA0: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052EA4: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x80052EA8: add.s       $f14, $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f22.fl;
    // 0x80052EAC: mflo        $t6
    ctx->r14 = lo;
    // 0x80052EB0: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x80052EB4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80052EB8: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80052EBC: sub.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80052EC0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80052EC4: sub.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80052EC8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80052ECC: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80052ED0: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x80052ED4: mov.s       $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    ctx->f24.fl = ctx->f20.fl;
    // 0x80052ED8: bc1f        L_80052F1C
    if (!c1cs) {
        // 0x80052EDC: nop
    
            goto L_80052F1C;
    }
    // 0x80052EDC: nop

    // 0x80052EE0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80052EE4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80052EE8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80052EEC: jal         0x8007FA40
    // 0x80052EF0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80052EF0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80052EF4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80052EF8: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80052EFC: nop

    // 0x80052F00: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x80052F04: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80052F08: nop

    // 0x80052F0C: swc1        $f4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f4.u32l;
    // 0x80052F10: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x80052F14: b           L_80052F78
    // 0x80052F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80052F78;
    // 0x80052F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80052F1C:
    // 0x80052F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80052F20: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x80052F24: slt         $at, $a1, $t7
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80052F28: beq         $at, $zero, L_80052EA0
    if (ctx->r1 == 0) {
        // 0x80052F2C: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80052EA0;
    }
    // 0x80052F2C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80052F30: swc1        $f24, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f24.u32l;
L_80052F34:
    // 0x80052F34: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80052F38: jal         0x8007FA40
    // 0x80052F3C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80052F3C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80052F40: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x80052F44: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80052F48: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x80052F4C: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x80052F50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80052F54: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052F58: addiu       $a0, $a0, 0x680
    ctx->r4 = ADD32(ctx->r4, 0X680);
    // 0x80052F5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80052F60: mflo        $t9
    ctx->r25 = lo;
    // 0x80052F64: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80052F68: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80052F6C: nop

    // 0x80052F70: swc1        $f6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f6.u32l;
    // 0x80052F74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80052F78:
    // 0x80052F78: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80052F7C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80052F80: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80052F84: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80052F88: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80052F8C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80052F90: jr          $ra
    // 0x80052F94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80052F94: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80052F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052FA0: lwc1        $f12, 0x20($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80052FA4: jal         0x80081040
    // 0x80052FA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80052FA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80052FAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052FB0: nop

    // 0x80052FB4: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80052FB8: lwc1        $f12, 0x20($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80052FBC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80052FC0: jal         0x80080E80
    // 0x80052FC4: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80052FC4: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    after_1:
    // 0x80052FC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052FCC: nop

    // 0x80052FD0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80052FD4: nop

    // 0x80052FD8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80052FDC: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80052FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052FE8: jr          $ra
    // 0x80052FEC: nop

    return;
    // 0x80052FEC: nop

;}
RECOMP_FUNC void func_80052FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052FF4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80052FF8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80052FFC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80053000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053004: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80053008: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8005300C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053010: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80053014: lwc1        $f9, -0x6E28($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6E28);
    // 0x80053018: lwc1        $f8, -0x6E24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E24);
    // 0x8005301C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80053020: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80053024: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80053028: bc1f        L_8005303C
    if (!c1cs) {
        // 0x8005302C: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_8005303C;
    }
    // 0x8005302C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053030: lwc1        $f10, -0x6E20($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E20);
    // 0x80053034: nop

    // 0x80053038: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
L_8005303C:
    // 0x8005303C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053040: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x80053044: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80053048: jal         0x8007FA40
    // 0x8005304C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8005304C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_0:
    // 0x80053050: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053054: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80053058: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005305C: nop

    // 0x80053060: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x80053064: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80053068: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8005306C: nop

    // 0x80053070: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
    // 0x80053074: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053078: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005307C: jal         0x8001C5D0
    // 0x80053080: nop

    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x80053080: nop

    after_1:
    // 0x80053084: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053088: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8005308C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80053090: nop

    // 0x80053094: swc1        $f0, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f0.u32l;
    // 0x80053098: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8005309C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800530A0: nop

    // 0x800530A4: swc1        $f8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f8.u32l;
    // 0x800530A8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800530AC: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800530B0: nop

    // 0x800530B4: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x800530B8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800530BC: jal         0x80052F98
    // 0x800530C0: nop

    func_80052F98(rdram, ctx);
        goto after_2;
    // 0x800530C0: nop

    after_2:
    // 0x800530C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800530C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800530CC: jr          $ra
    // 0x800530D0: nop

    return;
    // 0x800530D0: nop

;}
RECOMP_FUNC void func_800530D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800530D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800530D8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800530DC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800530E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800530E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800530E8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x800530EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800530F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800530F4: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800530F8: lwc1        $f9, -0x6E18($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6E18);
    // 0x800530FC: lwc1        $f8, -0x6E14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E14);
    // 0x80053100: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80053104: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80053108: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005310C: bc1f        L_80053128
    if (!c1cs) {
        // 0x80053110: nop
    
            goto L_80053128;
    }
    // 0x80053110: nop

    // 0x80053114: lwc1        $f10, -0x6E10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6E10);
    // 0x80053118: nop

    // 0x8005311C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80053120: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80053124: nop

L_80053128:
    // 0x80053128: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005312C: nop

    // 0x80053130: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x80053134: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80053138: nop

    // 0x8005313C: swc1        $f14, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f14.u32l;
    // 0x80053140: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80053144: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80053148: nop

    // 0x8005314C: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x80053150: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80053154: jal         0x80080E80
    // 0x80053158: nop

    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x80053158: nop

    after_0:
    // 0x8005315C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053160: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80053164: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80053168: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005316C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80053170: nop

    // 0x80053174: swc1        $f6, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f6.u32l;
    // 0x80053178: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8005317C: jal         0x80081040
    // 0x80053180: nop

    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80053180: nop

    after_1:
    // 0x80053184: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053188: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005318C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80053190: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80053194: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80053198: nop

    // 0x8005319C: swc1        $f10, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f10.u32l;
    // 0x800531A0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800531A4: jal         0x80052F98
    // 0x800531A8: nop

    func_80052F98(rdram, ctx);
        goto after_2;
    // 0x800531A8: nop

    after_2:
    // 0x800531AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800531B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800531B4: jr          $ra
    // 0x800531B8: nop

    return;
    // 0x800531B8: nop

;}
RECOMP_FUNC void func_800531BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800531BC: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x800531C0: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x800531C4: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800531C8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800531CC: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800531D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800531D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800531D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800531DC: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800531E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800531E4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800531E8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800531EC: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x800531F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800531F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800531F8: lwc1        $f4, -0x6E04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6E04);
    // 0x800531FC: lwc1        $f5, -0x6E08($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6E08);
    // 0x80053200: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80053204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053208: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8005320C: nop

    // 0x80053210: div.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80053214: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80053218: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8005321C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80053220: jal         0x800530D4
    // 0x80053224: nop

    func_800530D4(rdram, ctx);
        goto after_0;
    // 0x80053224: nop

    after_0:
    // 0x80053228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053230: jr          $ra
    // 0x80053234: nop

    return;
    // 0x80053234: nop

;}
RECOMP_FUNC void func_80053238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005323C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053240: lh          $t6, 0x68($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X68);
    // 0x80053244: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053248: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8005324C: lwc1        $f8, -0x6E00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6E00);
    // 0x80053250: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80053254: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80053258: lhu         $t7, 0xC0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XC0);
    // 0x8005325C: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80053260: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x80053264: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80053268: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8005326C: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x80053270: bne         $t8, $zero, L_800532B0
    if (ctx->r24 != 0) {
        // 0x80053274: swc1        $f16, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
            goto L_800532B0;
    }
    // 0x80053274: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x80053278: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8005327C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80053280: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80053284: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x80053288: c.le.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d <= ctx->f0.d;
    // 0x8005328C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053290: bc1f        L_800532B0
    if (!c1cs) {
        // 0x80053294: nop
    
            goto L_800532B0;
    }
    // 0x80053294: nop

    // 0x80053298: lwc1        $f7, -0x6DF8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6DF8);
    // 0x8005329C: lwc1        $f6, -0x6DF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6DF4);
    // 0x800532A0: nop

    // 0x800532A4: sub.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d - ctx->f6.d;
    // 0x800532A8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800532AC: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
L_800532B0:
    // 0x800532B0: jal         0x80052F98
    // 0x800532B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80052F98(rdram, ctx);
        goto after_0;
    // 0x800532B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800532B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800532BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800532C0: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800532C4: lwc1        $f18, 0x1C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800532C8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800532CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800532D0: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x800532D4: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800532D8: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800532DC: lhu         $t9, 0xC2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC2);
    // 0x800532E0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800532E4: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x800532E8: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x800532EC: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x800532F0: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x800532F4: beq         $t0, $zero, L_80053378
    if (ctx->r8 == 0) {
        // 0x800532F8: swc1        $f18, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
            goto L_80053378;
    }
    // 0x800532F8: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x800532FC: lwc1        $f4, -0x6DF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6DF0);
    // 0x80053300: lh          $v0, 0x66($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X66);
    // 0x80053304: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053308: blez        $v0, L_80053348
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005330C: swc1        $f4, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
            goto L_80053348;
    }
    // 0x8005330C: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x80053310: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80053314: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053318: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8005331C: lwc1        $f11, -0x6DE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6DE8);
    // 0x80053320: lwc1        $f10, -0x6DE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6DE4);
    // 0x80053324: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053328: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8005332C: lwc1        $f19, -0x6DE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6DE0);
    // 0x80053330: lwc1        $f18, -0x6DDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6DDC);
    // 0x80053334: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80053338: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8005333C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80053340: b           L_80053378
    // 0x80053344: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
        goto L_80053378;
    // 0x80053344: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
L_80053348:
    // 0x80053348: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8005334C: lwc1        $f17, -0x6DD8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6DD8);
    // 0x80053350: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80053354: lwc1        $f16, -0x6DD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6DD4);
    // 0x80053358: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005335C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80053360: lwc1        $f5, -0x6DD0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6DD0);
    // 0x80053364: lwc1        $f4, -0x6DCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6DCC);
    // 0x80053368: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8005336C: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80053370: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80053374: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
L_80053378:
    // 0x80053378: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8005337C: nop

    // 0x80053380: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80053384: swc1        $f16, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f16.u32l;
    // 0x80053388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005338C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053390: jr          $ra
    // 0x80053394: nop

    return;
    // 0x80053394: nop

;}
RECOMP_FUNC void func_80053398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005339C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800533A0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800533A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800533A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800533AC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x800533B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800533B4: bc1f        L_800533DC
    if (!c1cs) {
        // 0x800533B8: nop
    
            goto L_800533DC;
    }
    // 0x800533B8: nop

    // 0x800533BC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800533C0: lwc1        $f7, -0x6DC8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6DC8);
    // 0x800533C4: lwc1        $f6, -0x6DC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6DC4);
    // 0x800533C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800533CC: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x800533D0: nop

    // 0x800533D4: bc1f        L_800534A0
    if (!c1cs) {
        // 0x800533D8: nop
    
            goto L_800534A0;
    }
    // 0x800533D8: nop

L_800533DC:
    // 0x800533DC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800533E0: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x800533E4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x800533E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800533EC: sub.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800533F0: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x800533F4: swc1        $f8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f8.u32l;
    // 0x800533F8: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800533FC: lwc1        $f6, -0x6DBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6DBC);
    // 0x80053400: lwc1        $f7, -0x6DC0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6DC0);
    // 0x80053404: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80053408: c.le.d      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.d <= ctx->f6.d;
    // 0x8005340C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053410: bc1f        L_8005351C
    if (!c1cs) {
        // 0x80053414: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005351C;
    }
    // 0x80053414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053418: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005341C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80053420: bne         $a1, $v0, L_80053488
    if (ctx->r5 != ctx->r2) {
        // 0x80053424: addiu       $a0, $a0, 0x361E
        ctx->r4 = ADD32(ctx->r4, 0X361E);
            goto L_80053488;
    }
    // 0x80053424: addiu       $a0, $a0, 0x361E
    ctx->r4 = ADD32(ctx->r4, 0X361E);
    // 0x80053428: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8005342C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80053430: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x80053434: bne         $t6, $zero, L_80053488
    if (ctx->r14 != 0) {
        // 0x80053438: ori         $t7, $v1, 0x1
        ctx->r15 = ctx->r3 | 0X1;
            goto L_80053488;
    }
    // 0x80053438: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x8005343C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80053440: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80053444: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80053448: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005344C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80053450: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80053454: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80053458: jal         0x8027A258
    // 0x8005345C: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    LOOKUP_FUNC(0x8027A258)(rdram, ctx);
        goto after_0;
    // 0x8005345C: add.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f4.fl;
    after_0:
    // 0x80053460: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80053464: lb          $t8, -0x309F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X309F);
    // 0x80053468: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8005346C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80053470: bne         $t8, $at, L_80053488
    if (ctx->r24 != ctx->r1) {
        // 0x80053474: addiu       $a0, $zero, 0x3FF
        ctx->r4 = ADD32(0, 0X3FF);
            goto L_80053488;
    }
    // 0x80053474: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x80053478: jal         0x802719DC
    // 0x8005347C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_1;
    // 0x8005347C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x80053480: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80053484: nop

L_80053488:
    // 0x80053488: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005348C: lwc1        $f8, -0x6DB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6DB8);
    // 0x80053490: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80053494: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x80053498: b           L_80053518
    // 0x8005349C: swc1        $f10, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f10.u32l;
        goto L_80053518;
    // 0x8005349C: swc1        $f10, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f10.u32l;
L_800534A0:
    // 0x800534A0: lh          $v0, 0xC6($a1)
    ctx->r2 = MEM_H(ctx->r5, 0XC6);
    // 0x800534A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800534A8: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x800534AC: bgez        $v0, L_80053518
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800534B0: sh          $t9, 0xC6($a1)
        MEM_H(0XC6, ctx->r5) = ctx->r25;
            goto L_80053518;
    }
    // 0x800534B0: sh          $t9, 0xC6($a1)
    MEM_H(0XC6, ctx->r5) = ctx->r25;
    // 0x800534B4: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x800534B8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800534BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800534C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800534C4: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x800534C8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800534CC: bc1f        L_8005351C
    if (!c1cs) {
        // 0x800534D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005351C;
    }
    // 0x800534D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800534D4: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x800534D8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800534DC: bne         $a1, $t0, L_800534F4
    if (ctx->r5 != ctx->r8) {
        // 0x800534E0: addiu       $a0, $a0, 0x361E
        ctx->r4 = ADD32(ctx->r4, 0X361E);
            goto L_800534F4;
    }
    // 0x800534E0: addiu       $a0, $a0, 0x361E
    ctx->r4 = ADD32(ctx->r4, 0X361E);
    // 0x800534E4: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x800534E8: nop

    // 0x800534EC: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x800534F0: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
L_800534F4:
    // 0x800534F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800534F8: jal         0x80059898
    // 0x800534FC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x800534FC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x80053500: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80053504: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053508: sh          $v0, 0xC6($a1)
    MEM_H(0XC6, ctx->r5) = ctx->r2;
    // 0x8005350C: lwc1        $f4, -0x6DB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6DB4);
    // 0x80053510: nop

    // 0x80053514: swc1        $f4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f4.u32l;
L_80053518:
    // 0x80053518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005351C:
    // 0x8005351C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053520: jr          $ra
    // 0x80053524: nop

    return;
    // 0x80053524: nop

;}
RECOMP_FUNC void func_80053528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005352C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053530: jal         0x80055850
    // 0x80053534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80055850(rdram, ctx);
        goto after_0;
    // 0x80053534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80053538: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8005353C: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x80053540: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80053544: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80053548: bne         $t6, $at, L_80053584
    if (ctx->r14 != ctx->r1) {
        // 0x8005354C: lui         $at, 0x4034
        ctx->r1 = S32(0X4034 << 16);
            goto L_80053584;
    }
    // 0x8005354C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x80053550: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80053554: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80053558: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005355C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053560: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80053564: lwc1        $f11, -0x6DB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6DB0);
    // 0x80053568: lwc1        $f10, -0x6DAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6DAC);
    // 0x8005356C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x80053570: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80053574: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80053578: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8005357C: b           L_800535B8
    // 0x80053580: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
        goto L_800535B8;
    // 0x80053580: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_80053584:
    // 0x80053584: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x80053588: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8005358C: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80053590: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053594: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053598: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x8005359C: lwc1        $f17, -0x6DA8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6DA8);
    // 0x800535A0: lwc1        $f16, -0x6DA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6DA4);
    // 0x800535A4: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x800535A8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800535AC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800535B0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800535B4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
L_800535B8:
    // 0x800535B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800535BC: nop

    // 0x800535C0: bc1f        L_800535D0
    if (!c1cs) {
        // 0x800535C4: nop
    
            goto L_800535D0;
    }
    // 0x800535C4: nop

    // 0x800535C8: b           L_80053640
    // 0x800535CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80053640;
    // 0x800535CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800535D0:
    // 0x800535D0: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800535D4: swc1        $f8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f8.u32l;
    // 0x800535D8: jal         0x80052F98
    // 0x800535DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80052F98(rdram, ctx);
        goto after_1;
    // 0x800535DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800535E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800535E4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800535E8: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800535EC: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800535F0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800535F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800535F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800535FC: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80053600: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x80053604: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80053608: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8005360C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80053610: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80053614: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80053618: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x8005361C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80053620: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80053624: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80053628: nop

    // 0x8005362C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80053630: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80053634: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80053638: sh          $t8, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r24;
    // 0x8005363C: nop

L_80053640:
    // 0x80053640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80053648: jr          $ra
    // 0x8005364C: nop

    return;
    // 0x8005364C: nop

;}
RECOMP_FUNC void func_80053650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80053654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053658: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005365C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80053660: lwc1        $f5, -0x6DA0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6DA0);
    // 0x80053664: lwc1        $f4, -0x6D9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D9C);
    // 0x80053668: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8005366C: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x80053670: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80053674: bc1f        L_80053C68
    if (!c1cs) {
        // 0x80053678: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80053C68;
    }
    // 0x80053678: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005367C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80053680: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053684: bne         $a0, $v0, L_80053828
    if (ctx->r4 != ctx->r2) {
        // 0x80053688: lui         $a2, 0x3E4C
        ctx->r6 = S32(0X3E4C << 16);
            goto L_80053828;
    }
    // 0x80053688: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x8005368C: sb          $zero, 0x3689($at)
    MEM_B(0X3689, ctx->r1) = 0;
    // 0x80053690: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80053694: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80053698: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8005369C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800536A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800536A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x800536A8: jal         0x8027A258
    // 0x800536AC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    LOOKUP_FUNC(0x8027A258)(rdram, ctx);
        goto after_0;
    // 0x800536AC: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x800536B0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800536B4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800536B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800536BC: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800536C0: lwc1        $f5, -0x6D98($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6D98);
    // 0x800536C4: lwc1        $f4, -0x6D94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D94);
    // 0x800536C8: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x800536CC: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x800536D0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800536D4: bc1f        L_80053814
    if (!c1cs) {
        // 0x800536D8: nop
    
            goto L_80053814;
    }
    // 0x800536D8: nop

    // 0x800536DC: lwc1        $f12, 0x34($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X34);
    // 0x800536E0: jal         0x80272AEC
    // 0x800536E4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x800536E4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_1:
    // 0x800536E8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800536EC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800536F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800536F4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800536F8: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x800536FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053700: bc1f        L_80053814
    if (!c1cs) {
        // 0x80053704: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_80053814;
    }
    // 0x80053704: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80053708: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8005370C: nop

    // 0x80053710: lwc1        $f12, 0x38($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X38);
    // 0x80053714: jal         0x80272AEC
    // 0x80053718: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x80053718: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x8005371C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80053720: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80053724: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80053728: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8005372C: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80053730: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053734: bc1f        L_80053814
    if (!c1cs) {
        // 0x80053738: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80053814;
    }
    // 0x80053738: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005373C: lhu         $v0, 0x3620($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3620);
    // 0x80053740: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80053744: bne         $v0, $zero, L_80053788
    if (ctx->r2 != 0) {
        // 0x80053748: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80053788;
    }
    // 0x80053748: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005374C: lb          $t7, -0x309F($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X309F);
    // 0x80053750: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80053754: bne         $a0, $t7, L_80053770
    if (ctx->r4 != ctx->r15) {
        // 0x80053758: addiu       $a0, $zero, 0x322
        ctx->r4 = ADD32(0, 0X322);
            goto L_80053770;
    }
    // 0x80053758: addiu       $a0, $zero, 0x322
    ctx->r4 = ADD32(0, 0X322);
    // 0x8005375C: jal         0x802719DC
    // 0x80053760: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_3;
    // 0x80053760: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_3:
    // 0x80053764: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053768: b           L_80053814
    // 0x8005376C: nop

        goto L_80053814;
    // 0x8005376C: nop

L_80053770:
    // 0x80053770: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80053774: jal         0x80271980
    // 0x80053778: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_4;
    // 0x80053778: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_4:
    // 0x8005377C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053780: b           L_80053814
    // 0x80053784: nop

        goto L_80053814;
    // 0x80053784: nop

L_80053788:
    // 0x80053788: bne         $a0, $v0, L_800537D0
    if (ctx->r4 != ctx->r2) {
        // 0x8005378C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800537D0;
    }
    // 0x8005378C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80053790: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80053794: lb          $t8, -0x309F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X309F);
    // 0x80053798: nop

    // 0x8005379C: bne         $a0, $t8, L_800537B8
    if (ctx->r4 != ctx->r24) {
        // 0x800537A0: addiu       $a0, $zero, 0x323
        ctx->r4 = ADD32(0, 0X323);
            goto L_800537B8;
    }
    // 0x800537A0: addiu       $a0, $zero, 0x323
    ctx->r4 = ADD32(0, 0X323);
    // 0x800537A4: jal         0x802719DC
    // 0x800537A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_5;
    // 0x800537A8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_5:
    // 0x800537AC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800537B0: b           L_80053814
    // 0x800537B4: nop

        goto L_80053814;
    // 0x800537B4: nop

L_800537B8:
    // 0x800537B8: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x800537BC: jal         0x80271980
    // 0x800537C0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_6;
    // 0x800537C0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_6:
    // 0x800537C4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800537C8: b           L_80053814
    // 0x800537CC: nop

        goto L_80053814;
    // 0x800537CC: nop

L_800537D0:
    // 0x800537D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800537D4: bne         $v1, $at, L_80053814
    if (ctx->r3 != ctx->r1) {
        // 0x800537D8: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_80053814;
    }
    // 0x800537D8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800537DC: lb          $t9, -0x309F($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X309F);
    // 0x800537E0: nop

    // 0x800537E4: bne         $a0, $t9, L_80053800
    if (ctx->r4 != ctx->r25) {
        // 0x800537E8: addiu       $a0, $zero, 0x3FF
        ctx->r4 = ADD32(0, 0X3FF);
            goto L_80053800;
    }
    // 0x800537E8: addiu       $a0, $zero, 0x3FF
    ctx->r4 = ADD32(0, 0X3FF);
    // 0x800537EC: jal         0x802719DC
    // 0x800537F0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x802719DC)(rdram, ctx);
        goto after_7;
    // 0x800537F0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_7:
    // 0x800537F4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800537F8: b           L_80053814
    // 0x800537FC: nop

        goto L_80053814;
    // 0x800537FC: nop

L_80053800:
    // 0x80053800: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80053804: jal         0x80271980
    // 0x80053808: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_8;
    // 0x80053808: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_8:
    // 0x8005380C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053810: nop

L_80053814:
    // 0x80053814: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80053818: lhu         $t0, 0x3620($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3620);
    // 0x8005381C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053820: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80053824: sh          $t1, 0x3620($at)
    MEM_H(0X3620, ctx->r1) = ctx->r9;
L_80053828:
    // 0x80053828: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8005382C: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x80053830: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80053834: beq         $t2, $zero, L_80053894
    if (ctx->r10 == 0) {
        // 0x80053838: nop
    
            goto L_80053894;
    }
    // 0x80053838: nop

    // 0x8005383C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80053840: nop

    // 0x80053844: bne         $a1, $t3, L_80053894
    if (ctx->r5 != ctx->r11) {
        // 0x80053848: nop
    
            goto L_80053894;
    }
    // 0x80053848: nop

    // 0x8005384C: lhu         $t4, 0xC0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0XC0);
    // 0x80053850: nop

    // 0x80053854: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x80053858: bne         $t5, $zero, L_80053894
    if (ctx->r13 != 0) {
        // 0x8005385C: nop
    
            goto L_80053894;
    }
    // 0x8005385C: nop

    // 0x80053860: jal         0x80050664
    // 0x80053864: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80050664(rdram, ctx);
        goto after_9;
    // 0x80053864: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_9:
    // 0x80053868: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8005386C: beq         $v0, $zero, L_80053894
    if (ctx->r2 == 0) {
        // 0x80053870: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_80053894;
    }
    // 0x80053870: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80053874: addiu       $v0, $v0, 0xB7E
    ctx->r2 = ADD32(ctx->r2, 0XB7E);
    // 0x80053878: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8005387C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80053880: ori         $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 | 0X2000;
    // 0x80053884: jal         0x8005148C
    // 0x80053888: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    func_8005148C(rdram, ctx);
        goto after_10;
    // 0x80053888: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x8005388C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053890: nop

L_80053894:
    // 0x80053894: lh          $t8, 0x68($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X68);
    // 0x80053898: lbu         $t0, 0xBC($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XBC);
    // 0x8005389C: bgez        $t8, L_800538AC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800538A0: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_800538AC;
    }
    // 0x800538A0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x800538A4: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x800538A8: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_800538AC:
    // 0x800538AC: sh          $t9, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r25;
    // 0x800538B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800538B4: lwc1        $f6, -0x6D90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6D90);
    // 0x800538B8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x800538BC: bne         $t0, $at, L_800538D4
    if (ctx->r8 != ctx->r1) {
        // 0x800538C0: swc1        $f6, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
            goto L_800538D4;
    }
    // 0x800538C0: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800538C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800538C8: lwc1        $f4, -0x6D8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D8C);
    // 0x800538CC: b           L_80053924
    // 0x800538D0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
        goto L_80053924;
    // 0x800538D0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_800538D4:
    // 0x800538D4: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x800538D8: lwc1        $f10, 0x30($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X30);
    // 0x800538DC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800538E0: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800538E4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800538E8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800538EC: nop

    // 0x800538F0: bc1f        L_80053900
    if (!c1cs) {
        // 0x800538F4: nop
    
            goto L_80053900;
    }
    // 0x800538F4: nop

    // 0x800538F8: b           L_80053904
    // 0x800538FC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80053904;
    // 0x800538FC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80053900:
    // 0x80053900: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80053904:
    // 0x80053904: lb          $t1, -0x309F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X309F);
    // 0x80053908: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005390C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80053910: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80053914: lwc1        $f18, -0x5450($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5450);
    // 0x80053918: nop

    // 0x8005391C: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80053920: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
L_80053924:
    // 0x80053924: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053928: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005392C: lwc1        $f11, -0x6D88($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6D88);
    // 0x80053930: lwc1        $f10, -0x6D84($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6D84);
    // 0x80053934: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80053938: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8005393C: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80053940: bc1t        L_80053958
    if (c1cs) {
        // 0x80053944: nop
    
            goto L_80053958;
    }
    // 0x80053944: nop

    // 0x80053948: lhu         $t3, 0x3620($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3620);
    // 0x8005394C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80053950: bne         $t3, $at, L_80053984
    if (ctx->r11 != ctx->r1) {
        // 0x80053954: nop
    
            goto L_80053984;
    }
    // 0x80053954: nop

L_80053958:
    // 0x80053958: lh          $t6, 0x68($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X68);
    // 0x8005395C: lhu         $t4, 0xC0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0XC0);
    // 0x80053960: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053964: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80053968: sh          $t5, 0xC0($a1)
    MEM_H(0XC0, ctx->r5) = ctx->r13;
    // 0x8005396C: bgez        $t6, L_8005397C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80053970: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_8005397C;
    }
    // 0x80053970: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x80053974: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x80053978: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_8005397C:
    // 0x8005397C: b           L_80053C6C
    // 0x80053980: sh          $t7, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r15;
        goto L_80053C6C;
    // 0x80053980: sh          $t7, 0x68($a1)
    MEM_H(0X68, ctx->r5) = ctx->r15;
L_80053984:
    // 0x80053984: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053988: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8005398C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053990: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80053994: nop

    // 0x80053998: bc1f        L_800539A8
    if (!c1cs) {
        // 0x8005399C: nop
    
            goto L_800539A8;
    }
    // 0x8005399C: nop

    // 0x800539A0: b           L_800539AC
    // 0x800539A4: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
        goto L_800539AC;
    // 0x800539A4: neg.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = -ctx->f2.fl;
L_800539A8:
    // 0x800539A8: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_800539AC:
    // 0x800539AC: jal         0x8001C5D0
    // 0x800539B0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8001C5D0(rdram, ctx);
        goto after_11;
    // 0x800539B0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_11:
    // 0x800539B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800539B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800539BC: lhu         $t8, 0xC0($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XC0);
    // 0x800539C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800539C4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x800539C8: beq         $t9, $zero, L_80053A50
    if (ctx->r25 == 0) {
        // 0x800539CC: nop
    
            goto L_80053A50;
    }
    // 0x800539CC: nop

    // 0x800539D0: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x800539D4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800539D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800539DC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x800539E0: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x800539E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800539E8: bc1f        L_800539FC
    if (!c1cs) {
        // 0x800539EC: nop
    
            goto L_800539FC;
    }
    // 0x800539EC: nop

    // 0x800539F0: lwc1        $f14, -0x6D80($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6D80);
    // 0x800539F4: b           L_80053A34
    // 0x800539F8: nop

        goto L_80053A34;
    // 0x800539F8: nop

L_800539FC:
    // 0x800539FC: jal         0x80080E80
    // 0x80053A00: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80080E80(rdram, ctx);
        goto after_12;
    // 0x80053A00: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_12:
    // 0x80053A04: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053A08: lwc1        $f9, -0x6D78($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6D78);
    // 0x80053A0C: lwc1        $f8, -0x6D74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6D74);
    // 0x80053A10: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80053A14: mul.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80053A18: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80053A1C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80053A20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80053A24: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053A28: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x80053A2C: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053A30: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
L_80053A34:
    // 0x80053A34: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x80053A38: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80053A3C: addiu       $t0, $t0, -0x2DE0
    ctx->r8 = ADD32(ctx->r8, -0X2DE0);
    // 0x80053A40: bne         $a1, $t0, L_80053C2C
    if (ctx->r5 != ctx->r8) {
        // 0x80053A44: swc1        $f6, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
            goto L_80053C2C;
    }
    // 0x80053A44: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x80053A48: b           L_80053C30
    // 0x80053A4C: lhu         $t7, 0xC0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC0);
        goto L_80053C30;
    // 0x80053A4C: lhu         $t7, 0xC0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC0);
L_80053A50:
    // 0x80053A50: jal         0x80080E80
    // 0x80053A54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_80080E80(rdram, ctx);
        goto after_13;
    // 0x80053A54: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_13:
    // 0x80053A58: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80053A5C: add.d       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f2.d + ctx->f2.d;
    // 0x80053A60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053A64: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x80053A68: lwc1        $f9, -0x6D70($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6D70);
    // 0x80053A6C: lwc1        $f8, -0x6D6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6D6C);
    // 0x80053A70: cvt.d.s     $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f16.d = CVT_D_S(ctx->f14.fl);
    // 0x80053A74: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x80053A78: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80053A7C: bc1f        L_80053A90
    if (!c1cs) {
        // 0x80053A80: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_80053A90;
    }
    // 0x80053A80: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80053A84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053A88: lwc1        $f14, -0x6D68($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6D68);
    // 0x80053A8C: nop

L_80053A90:
    // 0x80053A90: lb          $t1, -0x309F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X309F);
    // 0x80053A94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80053A98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80053A9C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80053AA0: lwc1        $f10, -0x5444($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5444);
    // 0x80053AA4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80053AA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80053AAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80053AB0: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80053AB4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80053AB8: mul.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80053ABC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80053AC0: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x80053AC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80053AC8: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x80053ACC: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x80053AD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80053AD4: bc1f        L_80053AE8
    if (!c1cs) {
        // 0x80053AD8: nop
    
            goto L_80053AE8;
    }
    // 0x80053AD8: nop

    // 0x80053ADC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80053AE0: nop

    // 0x80053AE4: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
L_80053AE8:
    // 0x80053AE8: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x80053AEC: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80053AF0: bc1f        L_80053B00
    if (!c1cs) {
        // 0x80053AF4: nop
    
            goto L_80053B00;
    }
    // 0x80053AF4: nop

    // 0x80053AF8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80053AFC: nop

L_80053B00:
    // 0x80053B00: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053B04: lh          $v0, 0x66($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X66);
    // 0x80053B08: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80053B0C: bltz        $v0, L_80053B34
    if (SIGNED(ctx->r2) < 0) {
        // 0x80053B10: swc1        $f18, 0x10($a1)
        MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
            goto L_80053B34;
    }
    // 0x80053B10: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x80053B14: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053B18: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80053B1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053B20: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x80053B24: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x80053B28: nop

    // 0x80053B2C: bc1f        L_80053BF0
    if (!c1cs) {
        // 0x80053B30: nop
    
            goto L_80053BF0;
    }
    // 0x80053B30: nop

L_80053B34:
    // 0x80053B34: lhu         $t3, 0xC2($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0XC2);
    // 0x80053B38: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053B3C: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x80053B40: beq         $t4, $zero, L_80053BB8
    if (ctx->r12 == 0) {
        // 0x80053B44: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80053BB8;
    }
    // 0x80053B44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80053B48: blez        $v0, L_80053B84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80053B4C: cvt.d.s     $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
            goto L_80053B84;
    }
    // 0x80053B4C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x80053B50: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80053B54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053B58: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80053B5C: lwc1        $f19, -0x6D60($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6D60);
    // 0x80053B60: lwc1        $f18, -0x6D5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D5C);
    // 0x80053B64: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80053B68: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80053B6C: add.d       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f0.d + ctx->f10.d;
    // 0x80053B70: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x80053B74: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x80053B78: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053B7C: b           L_80053BB8
    // 0x80053B80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
        goto L_80053BB8;
    // 0x80053B80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_80053B84:
    // 0x80053B84: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80053B88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053B8C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80053B90: lwc1        $f11, -0x6D58($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6D58);
    // 0x80053B94: lwc1        $f10, -0x6D54($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6D54);
    // 0x80053B98: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80053B9C: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x80053BA0: add.d       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f0.d + ctx->f6.d;
    // 0x80053BA4: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80053BA8: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x80053BAC: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80053BB0: nop

    // 0x80053BB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_80053BB8:
    // 0x80053BB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80053BBC: nop

    // 0x80053BC0: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80053BC4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80053BC8: nop

    // 0x80053BCC: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80053BD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80053BD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80053BD8: nop

    // 0x80053BDC: cvt.w.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80053BE0: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x80053BE4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80053BE8: sh          $t6, 0x66($a1)
    MEM_H(0X66, ctx->r5) = ctx->r14;
    // 0x80053BEC: nop

L_80053BF0:
    // 0x80053BF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80053BF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053BF8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80053BFC: nop

    // 0x80053C00: bc1f        L_80053C2C
    if (!c1cs) {
        // 0x80053C04: nop
    
            goto L_80053C2C;
    }
    // 0x80053C04: nop

    // 0x80053C08: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x80053C0C: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    // 0x80053C10: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80053C14: lwc1        $f18, -0x6D4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D4C);
    // 0x80053C18: lwc1        $f19, -0x6D50($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6D50);
    // 0x80053C1C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80053C20: add.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f16.d + ctx->f18.d;
    // 0x80053C24: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x80053C28: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
L_80053C2C:
    // 0x80053C2C: lhu         $t7, 0xC0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC0);
L_80053C30:
    // 0x80053C30: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80053C34: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80053C38: sh          $t8, 0xC0($a1)
    MEM_H(0XC0, ctx->r5) = ctx->r24;
    // 0x80053C3C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053C40: swc1        $f4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f4.u32l;
    // 0x80053C44: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80053C48: nop

    // 0x80053C4C: bne         $a1, $v0, L_80053C68
    if (ctx->r5 != ctx->r2) {
        // 0x80053C50: nop
    
            goto L_80053C68;
    }
    // 0x80053C50: nop

    // 0x80053C54: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x80053C58: nop

    // 0x80053C5C: andi        $t0, $t9, 0xFF8F
    ctx->r8 = ctx->r25 & 0XFF8F;
    // 0x80053C60: jal         0x800540CC
    // 0x80053C64: sh          $t0, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r8;
    func_800540CC(rdram, ctx);
        goto after_14;
    // 0x80053C64: sh          $t0, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r8;
    after_14:
L_80053C68:
    // 0x80053C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80053C6C:
    // 0x80053C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80053C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80053C74: jr          $ra
    // 0x80053C78: nop

    return;
    // 0x80053C78: nop

;}
RECOMP_FUNC void func_80053C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053C7C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80053C80: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80053C84: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80053C88: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80053C8C: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80053C90: swc1        $f4, 0x1C04($v1)
    MEM_W(0X1C04, ctx->r3) = ctx->f4.u32l;
    // 0x80053C94: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80053C98: jr          $ra
    // 0x80053C9C: swc1        $f6, 0x1BFC($v1)
    MEM_W(0X1BFC, ctx->r3) = ctx->f6.u32l;
    return;
    // 0x80053C9C: swc1        $f6, 0x1BFC($v1)
    MEM_W(0X1BFC, ctx->r3) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80053CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80053CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80053CA4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80053CA8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80053CAC: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80053CB0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80053CB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80053CB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80053CBC: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80053CC0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80053CC4: beq         $a0, $t7, L_80053CD4
    if (ctx->r4 == ctx->r15) {
        // 0x80053CC8: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80053CD4;
    }
    // 0x80053CC8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80053CCC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053CD0: sh          $zero, 0x366C($at)
    MEM_H(0X366C, ctx->r1) = 0;
L_80053CD4:
    // 0x80053CD4: addiu       $v0, $v0, 0x3678
    ctx->r2 = ADD32(ctx->r2, 0X3678);
    // 0x80053CD8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80053CDC: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x80053CE0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80053CE4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80053CE8: jal         0x80059868
    // 0x80053CEC: sh          $t9, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r25;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x80053CEC: sh          $t9, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r25;
    after_0:
    // 0x80053CF0: lhu         $t0, 0x12($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X12);
    // 0x80053CF4: sh          $v0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r2;
    // 0x80053CF8: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x80053CFC: sh          $t1, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r9;
    // 0x80053D00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053D04: lwc1        $f4, -0x6D48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D48);
    // 0x80053D08: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80053D0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80053D10: swc1        $f4, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f4.u32l;
    // 0x80053D14: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80053D18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053D1C: sw          $zero, 0x84($t3)
    MEM_W(0X84, ctx->r11) = 0;
    // 0x80053D20: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80053D24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80053D28: sw          $zero, 0x88($t4)
    MEM_W(0X88, ctx->r12) = 0;
    // 0x80053D2C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80053D30: nop

    // 0x80053D34: sw          $zero, 0xA8($t5)
    MEM_W(0XA8, ctx->r13) = 0;
    // 0x80053D38: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80053D3C: nop

    // 0x80053D40: sw          $zero, 0xA4($t6)
    MEM_W(0XA4, ctx->r14) = 0;
    // 0x80053D44: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80053D48: nop

    // 0x80053D4C: sw          $zero, 0xA0($t7)
    MEM_W(0XA0, ctx->r15) = 0;
    // 0x80053D50: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80053D54: nop

    // 0x80053D58: sw          $zero, 0xB0($t8)
    MEM_W(0XB0, ctx->r24) = 0;
    // 0x80053D5C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80053D60: nop

    // 0x80053D64: sw          $s1, 0x8C($t9)
    MEM_W(0X8C, ctx->r25) = ctx->r17;
    // 0x80053D68: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80053D6C: nop

    // 0x80053D70: sh          $zero, 0x66($t0)
    MEM_H(0X66, ctx->r8) = 0;
    // 0x80053D74: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80053D78: nop

    // 0x80053D7C: sh          $zero, 0x68($t1)
    MEM_H(0X68, ctx->r9) = 0;
    // 0x80053D80: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80053D84: nop

    // 0x80053D88: sw          $zero, 0x90($t2)
    MEM_W(0X90, ctx->r10) = 0;
    // 0x80053D8C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80053D90: nop

    // 0x80053D94: sw          $zero, 0x94($t3)
    MEM_W(0X94, ctx->r11) = 0;
    // 0x80053D98: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80053D9C: nop

    // 0x80053DA0: swc1        $f0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f0.u32l;
    // 0x80053DA4: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80053DA8: nop

    // 0x80053DAC: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x80053DB0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80053DB4: nop

    // 0x80053DB8: sb          $zero, 0xBD($t6)
    MEM_B(0XBD, ctx->r14) = 0;
    // 0x80053DBC: sw          $zero, 0x3614($at)
    MEM_W(0X3614, ctx->r1) = 0;
    // 0x80053DC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DC4: sh          $zero, 0x361C($at)
    MEM_H(0X361C, ctx->r1) = 0;
    // 0x80053DC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DCC: sb          $zero, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = 0;
    // 0x80053DD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DD4: sh          $zero, 0x3620($at)
    MEM_H(0X3620, ctx->r1) = 0;
    // 0x80053DD8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DDC: sw          $zero, 0x3680($at)
    MEM_W(0X3680, ctx->r1) = 0;
    // 0x80053DE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DE4: sw          $zero, 0x3684($at)
    MEM_W(0X3684, ctx->r1) = 0;
    // 0x80053DE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DEC: sh          $zero, 0x3622($at)
    MEM_H(0X3622, ctx->r1) = 0;
    // 0x80053DF0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DF4: sh          $zero, 0x3624($at)
    MEM_H(0X3624, ctx->r1) = 0;
    // 0x80053DF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053DFC: sh          $zero, 0x362A($at)
    MEM_H(0X362A, ctx->r1) = 0;
    // 0x80053E00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053E04: sh          $zero, 0x362C($at)
    MEM_H(0X362C, ctx->r1) = 0;
    // 0x80053E08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053E0C: sh          $zero, 0x3674($at)
    MEM_H(0X3674, ctx->r1) = 0;
    // 0x80053E10: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053E14: sb          $zero, 0x3689($at)
    MEM_B(0X3689, ctx->r1) = 0;
    // 0x80053E18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053E1C: jal         0x80271A18
    // 0x80053E20: sh          $zero, 0x368A($at)
    MEM_H(0X368A, ctx->r1) = 0;
    LOOKUP_FUNC(0x80271A18)(rdram, ctx);
        goto after_1;
    // 0x80053E20: sh          $zero, 0x368A($at)
    MEM_H(0X368A, ctx->r1) = 0;
    after_1:
    // 0x80053E24: lw          $t7, 0xD8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XD8);
    // 0x80053E28: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80053E2C: lbu         $t8, 0x12($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X12);
    // 0x80053E30: addiu       $v1, $v1, 0x3626
    ctx->r3 = ADD32(ctx->r3, 0X3626);
    // 0x80053E34: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80053E38: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80053E3C: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x80053E40: nop

    // 0x80053E44: bgez        $t0, L_80053E50
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80053E48: nop
    
            goto L_80053E50;
    }
    // 0x80053E48: nop

    // 0x80053E4C: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_80053E50:
    // 0x80053E50: jal         0x80271A18
    // 0x80053E54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(0x80271A18)(rdram, ctx);
        goto after_2;
    // 0x80053E54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80053E58: lw          $t1, 0xD8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XD8);
    // 0x80053E5C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80053E60: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x80053E64: addiu       $v1, $v1, 0x3628
    ctx->r3 = ADD32(ctx->r3, 0X3628);
    // 0x80053E68: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x80053E6C: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x80053E70: lh          $t4, 0x0($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X0);
    // 0x80053E74: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80053E78: bgez        $t4, L_80053E84
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80053E7C: addiu       $a0, $a0, 0x364C
        ctx->r4 = ADD32(ctx->r4, 0X364C);
            goto L_80053E84;
    }
    // 0x80053E7C: addiu       $a0, $a0, 0x364C
    ctx->r4 = ADD32(ctx->r4, 0X364C);
    // 0x80053E80: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_80053E84:
    // 0x80053E84: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80053E88: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80053E8C: lhu         $t5, 0xC0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XC0);
    // 0x80053E90: addiu       $v1, $v1, 0x361E
    ctx->r3 = ADD32(ctx->r3, 0X361E);
    // 0x80053E94: andi        $t6, $t5, 0x2788
    ctx->r14 = ctx->r13 & 0X2788;
    // 0x80053E98: sh          $t6, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r14;
    // 0x80053E9C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80053EA0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80053EA4: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80053EA8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80053EAC: andi        $t8, $t7, 0xCBBD
    ctx->r24 = ctx->r15 & 0XCBBD;
    // 0x80053EB0: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80053EB4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80053EB8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80053EBC: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x80053EC0: addiu       $a1, $a1, 0x3650
    ctx->r5 = ADD32(ctx->r5, 0X3650);
    // 0x80053EC4: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x80053EC8: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
    // 0x80053ECC: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80053ED0: nop

    // 0x80053ED4: ori         $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 | 0X2000;
    // 0x80053ED8: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x80053EDC: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x80053EE0: nop

    // 0x80053EE4: beq         $t3, $at, L_80053F44
    if (ctx->r11 == ctx->r1) {
        // 0x80053EE8: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80053F44;
    }
    // 0x80053EE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053EEC: sh          $t2, 0x365C($at)
    MEM_H(0X365C, ctx->r1) = ctx->r10;
    // 0x80053EF0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80053EF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053EF8: swc1        $f6, 0x3654($at)
    MEM_W(0X3654, ctx->r1) = ctx->f6.u32l;
    // 0x80053EFC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80053F00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053F04: swc1        $f8, 0x3658($at)
    MEM_W(0X3658, ctx->r1) = ctx->f8.u32l;
    // 0x80053F08: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80053F0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80053F10: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80053F14: nop

    // 0x80053F18: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x80053F1C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80053F20: nop

    // 0x80053F24: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x80053F28: lw          $t5, 0xC8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC8);
    // 0x80053F2C: nop

    // 0x80053F30: lw          $t6, 0x1C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1C);
    // 0x80053F34: nop

    // 0x80053F38: lwc1        $f18, 0x84($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X84);
    // 0x80053F3C: nop

    // 0x80053F40: swc1        $f18, 0x3648($at)
    MEM_W(0X3648, ctx->r1) = ctx->f18.u32l;
L_80053F44:
    // 0x80053F44: lhu         $t7, 0x0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X0);
    // 0x80053F48: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80053F4C: andi        $t8, $t7, 0x220A
    ctx->r24 = ctx->r15 & 0X220A;
    // 0x80053F50: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x80053F54: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80053F58: sw          $zero, 0x98($t9)
    MEM_W(0X98, ctx->r25) = 0;
    // 0x80053F5C: sh          $zero, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = 0;
    // 0x80053F60: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80053F64: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80053F68: sh          $zero, 0x6A($t0)
    MEM_H(0X6A, ctx->r8) = 0;
    // 0x80053F6C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80053F70: lw          $t1, 0xC4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC4);
    // 0x80053F74: nop

    // 0x80053F78: sw          $t1, 0x74($t2)
    MEM_W(0X74, ctx->r10) = ctx->r9;
    // 0x80053F7C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80053F80: lhu         $t3, 0x522A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X522A);
    // 0x80053F84: jal         0x80059868
    // 0x80053F88: sh          $t3, 0x6C($t4)
    MEM_H(0X6C, ctx->r12) = ctx->r11;
    func_80059868(rdram, ctx);
        goto after_3;
    // 0x80053F88: sh          $t3, 0x6C($t4)
    MEM_H(0X6C, ctx->r12) = ctx->r11;
    after_3:
    // 0x80053F8C: lw          $t5, 0xC8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC8);
    // 0x80053F90: jal         0x800554AC
    // 0x80053F94: sh          $v0, 0x92C($t5)
    MEM_H(0X92C, ctx->r13) = ctx->r2;
    func_800554AC(rdram, ctx);
        goto after_4;
    // 0x80053F94: sh          $v0, 0x92C($t5)
    MEM_H(0X92C, ctx->r13) = ctx->r2;
    after_4:
    // 0x80053F98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80053F9C: lwc1        $f4, 0xB58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x80053FA0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80053FA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80053FA8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80053FAC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80053FB0: nop

    // 0x80053FB4: bc1f        L_80054058
    if (!c1cs) {
        // 0x80053FB8: nop
    
            goto L_80054058;
    }
    // 0x80053FB8: nop

    // 0x80053FBC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80053FC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80053FC4: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80053FC8: nop

    // 0x80053FCC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80053FD0: nop

    // 0x80053FD4: bc1f        L_80054058
    if (!c1cs) {
        // 0x80053FD8: nop
    
            goto L_80054058;
    }
    // 0x80053FD8: nop

    // 0x80053FDC: lw          $t6, 0xC8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC8);
    // 0x80053FE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80053FE4: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80053FE8: nop

    // 0x80053FEC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80053FF0: beq         $t8, $zero, L_80054008
    if (ctx->r24 == 0) {
        // 0x80053FF4: nop
    
            goto L_80054008;
    }
    // 0x80053FF4: nop

    // 0x80053FF8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80053FFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80054000: b           L_80054018
    // 0x80054004: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
        goto L_80054018;
    // 0x80054004: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
L_80054008:
    // 0x80054008: lwc1        $f1, -0x6D40($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6D40);
    // 0x8005400C: lwc1        $f0, -0x6D3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6D3C);
    // 0x80054010: nop

    // 0x80054014: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
L_80054018:
    // 0x80054018: jal         0x80279308
    // 0x8005401C: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_5;
    // 0x8005401C: cvt.s.d     $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f14.fl = CVT_S_D(ctx->f0.d);
    after_5:
    // 0x80054020: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054024: lwc1        $f19, -0x6D38($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6D38);
    // 0x80054028: lwc1        $f18, -0x6D34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D34);
    // 0x8005402C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80054030: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80054034: nop

    // 0x80054038: bc1f        L_80054058
    if (!c1cs) {
        // 0x8005403C: nop
    
            goto L_80054058;
    }
    // 0x8005403C: nop

    // 0x80054040: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80054044: nop

    // 0x80054048: lhu         $t9, 0xC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC2);
    // 0x8005404C: nop

    // 0x80054050: ori         $t0, $t9, 0x400
    ctx->r8 = ctx->r25 | 0X400;
    // 0x80054054: sh          $t0, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r8;
L_80054058:
    // 0x80054058: jal         0x800656E4
    // 0x8005405C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800656E4(rdram, ctx);
        goto after_6;
    // 0x8005405C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80054060: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80054064: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80054068: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8005406C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80054070: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80054074: sw          $s1, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r17;
    // 0x80054078: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005407C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80054080: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80054084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054088: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005408C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80054090: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80054094: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80054098: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005409C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800540A0: sh          $t2, 0x6C($v1)
    MEM_H(0X6C, ctx->r3) = ctx->r10;
    // 0x800540A4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800540A8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800540AC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800540B0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800540B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800540B8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800540BC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800540C0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800540C4: jr          $ra
    // 0x800540C8: sh          $t4, 0x6E($v1)
    MEM_H(0X6E, ctx->r3) = ctx->r12;
    return;
    // 0x800540C8: sh          $t4, 0x6E($v1)
    MEM_H(0X6E, ctx->r3) = ctx->r12;
;}
RECOMP_FUNC void func_800540CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800540CC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800540D0: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x800540D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800540D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800540DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800540E0: lhu         $t6, 0xC0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC0);
    // 0x800540E4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800540E8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x800540EC: sh          $t7, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r15;
    // 0x800540F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800540F4: nop

    // 0x800540F8: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800540FC: lwc1        $f12, 0x30($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80054100: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80054104: div.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80054108: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8005410C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80054110: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x80054114: mul.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80054118: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005411C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80054120: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80054124: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80054128: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8005412C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80054130: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80054134: sub.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d - ctx->f8.d;
    // 0x80054138: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    // 0x8005413C: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x80054140: nop

    // 0x80054144: bc1f        L_8005415C
    if (!c1cs) {
        // 0x80054148: nop
    
            goto L_8005415C;
    }
    // 0x80054148: nop

    // 0x8005414C: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x80054150: nop

    // 0x80054154: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80054158: sh          $t9, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r25;
L_8005415C:
    // 0x8005415C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80054160: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80054164: sw          $zero, 0x918($v0)
    MEM_W(0X918, ctx->r2) = 0;
    // 0x80054168: jal         0x80054180
    // 0x8005416C: sw          $zero, 0x13AC($v0)
    MEM_W(0X13AC, ctx->r2) = 0;
    func_80054180(rdram, ctx);
        goto after_0;
    // 0x8005416C: sw          $zero, 0x13AC($v0)
    MEM_W(0X13AC, ctx->r2) = 0;
    after_0:
    // 0x80054170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054178: jr          $ra
    // 0x8005417C: nop

    return;
    // 0x8005417C: nop

;}
RECOMP_FUNC void func_80054180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054180: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80054184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80054188: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8005418C: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80054190: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80054194: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80054198: lhu         $t6, 0xC0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC0);
    // 0x8005419C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800541A0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800541A4: beq         $t7, $zero, L_800542B0
    if (ctx->r15 == 0) {
        // 0x800541A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800542B0;
    }
    // 0x800541A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800541AC: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800541B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800541B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800541B8: div.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800541BC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800541C0: lwc1        $f17, -0x6D30($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6D30);
    // 0x800541C4: lwc1        $f16, -0x6D2C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6D2C);
    // 0x800541C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800541CC: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x800541D0: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800541D4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800541D8: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x800541DC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800541E0: jal         0x800542BC
    // 0x800541E4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800542BC(rdram, ctx);
        goto after_0;
    // 0x800541E4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_0:
    // 0x800541E8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800541EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800541F0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800541F4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800541F8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800541FC: nop

    // 0x80054200: bc1f        L_80054294
    if (!c1cs) {
        // 0x80054204: nop
    
            goto L_80054294;
    }
    // 0x80054204: nop

    // 0x80054208: swc1        $f6, 0xB60($at)
    MEM_W(0XB60, ctx->r1) = ctx->f6.u32l;
    // 0x8005420C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80054210: nop

    // 0x80054214: lwc1        $f12, 0x10($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80054218: jal         0x80272AEC
    // 0x8005421C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x8005421C: nop

    after_1:
    // 0x80054220: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80054224: lui         $a2, 0xBC88
    ctx->r6 = S32(0XBC88 << 16);
    // 0x80054228: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8005422C: ori         $a2, $a2, 0x8889
    ctx->r6 = ctx->r6 | 0X8889;
    // 0x80054230: jal         0x80054494
    // 0x80054234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_80054494(rdram, ctx);
        goto after_2;
    // 0x80054234: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x80054238: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8005423C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80054240: lwc1        $f12, 0x20($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80054244: jal         0x80081040
    // 0x80054248: nop

    func_80081040(rdram, ctx);
        goto after_3;
    // 0x80054248: nop

    after_3:
    // 0x8005424C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80054250: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80054254: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80054258: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005425C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80054260: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80054264: swc1        $f4, 0x64C8($at)
    MEM_W(0X64C8, ctx->r1) = ctx->f4.u32l;
    // 0x80054268: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8005426C: jal         0x80080E80
    // 0x80054270: nop

    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80054270: nop

    after_4:
    // 0x80054274: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80054278: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8005427C: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80054280: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80054284: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80054288: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8005428C: b           L_800542AC
    // 0x80054290: swc1        $f16, 0x64C0($at)
    MEM_W(0X64C0, ctx->r1) = ctx->f16.u32l;
        goto L_800542AC;
    // 0x80054290: swc1        $f16, 0x64C0($at)
    MEM_W(0X64C0, ctx->r1) = ctx->f16.u32l;
L_80054294:
    // 0x80054294: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80054298: nop

    // 0x8005429C: lhu         $t1, 0xC0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC0);
    // 0x800542A0: nop

    // 0x800542A4: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x800542A8: sh          $t2, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r10;
L_800542AC:
    // 0x800542AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800542B0:
    // 0x800542B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800542B4: jr          $ra
    // 0x800542B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800542B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800542BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800542BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800542C0: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800542C4: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x800542C8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800542CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800542D0: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800542D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800542D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800542DC: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800542E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800542E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800542E8: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800542EC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800542F0: nop

    // 0x800542F4: bc1f        L_80054310
    if (!c1cs) {
        // 0x800542F8: nop
    
            goto L_80054310;
    }
    // 0x800542F8: nop

    // 0x800542FC: lwc1        $f0, -0x6D28($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6D28);
    // 0x80054300: nop

    // 0x80054304: swc1        $f0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f0.u32l;
    // 0x80054308: b           L_80054378
    // 0x8005430C: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
        goto L_80054378;
    // 0x8005430C: swc1        $f0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f0.u32l;
L_80054310:
    // 0x80054310: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80054314: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80054318: jal         0x8007FA40
    // 0x8005431C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x8005431C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80054320: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80054324: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80054328: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005432C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80054330: mul.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80054334: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80054338: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8005433C: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80054340: add.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80054344: nop

    // 0x80054348: div.s       $f14, $f8, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8005434C: nop

    // 0x80054350: div.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80054354: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80054358: nop

    // 0x8005435C: bc1f        L_80054370
    if (!c1cs) {
        // 0x80054360: nop
    
            goto L_80054370;
    }
    // 0x80054360: nop

    // 0x80054364: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x80054368: b           L_80054378
    // 0x8005436C: swc1        $f14, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f14.u32l;
        goto L_80054378;
    // 0x8005436C: swc1        $f14, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f14.u32l;
L_80054370:
    // 0x80054370: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
    // 0x80054374: swc1        $f16, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f16.u32l;
L_80054378:
    // 0x80054378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005437C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80054380: jr          $ra
    // 0x80054384: nop

    return;
    // 0x80054384: nop

;}
RECOMP_FUNC void func_80054388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054388: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005438C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054390: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80054394: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80054398: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8005439C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800543A0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800543A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800543A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800543AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800543B0: lwc1        $f19, -0x6D20($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6D20);
    // 0x800543B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800543B8: lwc1        $f18, -0x6D1C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D1C);
    // 0x800543BC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800543C0: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800543C4: jal         0x80080E80
    // 0x800543C8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x800543C8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x800543CC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800543D0: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800543D4: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x800543D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800543DC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800543E0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800543E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800543E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800543EC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800543F0: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800543F4: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x800543F8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800543FC: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80054400: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054404: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80054408: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8005440C: lwc1        $f4, -0x6D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6D14);
    // 0x80054410: lwc1        $f5, -0x6D18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6D18);
    // 0x80054414: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80054418: mul.s       $f14, $f0, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8005441C: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80054420: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80054424: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80054428: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x8005442C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80054430: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80054434: jal         0x800542BC
    // 0x80054438: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    func_800542BC(rdram, ctx);
        goto after_1;
    // 0x80054438: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8005443C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80054440: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80054444: jr          $ra
    // 0x80054448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80054448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005444C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005444C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80054450: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80054454: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80054458: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8005445C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80054460: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80054464: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80054468: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8005446C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80054470: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80054474: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80054478: nop

    // 0x8005447C: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x80054480: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80054484: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80054488: add.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d + ctx->f4.d;
    // 0x8005448C: jr          $ra
    // 0x80054490: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x80054490: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
;}
RECOMP_FUNC void func_80054494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80054498: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8005449C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800544A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800544A4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800544A8: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x800544AC: jal         0x80272AEC
    // 0x800544B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x800544B0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x800544B4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800544B8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800544BC: div.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800544C0: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800544C4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800544C8: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800544CC: nop

    // 0x800544D0: bc1f        L_800544F0
    if (!c1cs) {
        // 0x800544D4: nop
    
            goto L_800544F0;
    }
    // 0x800544D4: nop

    // 0x800544D8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800544DC: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x800544E0: jal         0x8005444C
    // 0x800544E4: nop

    func_8005444C(rdram, ctx);
        goto after_1;
    // 0x800544E4: nop

    after_1:
    // 0x800544E8: b           L_80054518
    // 0x800544EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80054518;
    // 0x800544EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800544F0:
    // 0x800544F0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800544F4: jal         0x8005444C
    // 0x800544F8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_8005444C(rdram, ctx);
        goto after_2;
    // 0x800544F8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x800544FC: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80054500: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80054504: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80054508: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8005450C: mul.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80054510: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80054514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80054518:
    // 0x80054518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005451C: jr          $ra
    // 0x80054520: nop

    return;
    // 0x80054520: nop

;}
RECOMP_FUNC void func_80054524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005452C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80054530: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80054534: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80054538: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8005453C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80054540: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80054544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80054548: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005454C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054550: lwc1        $f19, -0x6D10($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6D10);
    // 0x80054554: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80054558: lwc1        $f18, -0x6D0C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6D0C);
    // 0x8005455C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80054560: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80054564: jal         0x80081040
    // 0x80054568: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80054568: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x8005456C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80054570: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80054574: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80054578: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005457C: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80054580: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80054584: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80054588: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8005458C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80054590: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80054594: mul.s       $f14, $f0, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80054598: jal         0x8005444C
    // 0x8005459C: nop

    func_8005444C(rdram, ctx);
        goto after_1;
    // 0x8005459C: nop

    after_1:
    // 0x800545A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800545A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800545A8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800545AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800545B0: bc1f        L_800545BC
    if (!c1cs) {
        // 0x800545B4: addiu       $sp, $sp, 0x18
        ctx->r29 = ADD32(ctx->r29, 0X18);
            goto L_800545BC;
    }
    // 0x800545B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800545B8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800545BC:
    // 0x800545BC: jr          $ra
    // 0x800545C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x800545C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_800545C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800545C4: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x800545C8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800545CC: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x800545D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800545D4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800545D8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800545DC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800545E0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800545E4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800545E8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800545EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800545F0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800545F4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800545F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800545FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80054600: lw          $t6, 0xA8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XA8);
    // 0x80054604: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x80054608: bne         $a0, $t6, L_80054624
    if (ctx->r4 != ctx->r14) {
        // 0x8005460C: or          $s5, $a0, $zero
        ctx->r21 = ctx->r4 | 0;
            goto L_80054624;
    }
    // 0x8005460C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80054610: lw          $t7, 0xA4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XA4);
    // 0x80054614: nop

    // 0x80054618: lw          $v0, 0x40($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X40);
    // 0x8005461C: b           L_80054A88
    // 0x80054620: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80054A88;
    // 0x80054620: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80054624:
    // 0x80054624: lw          $t8, 0xC8($s5)
    ctx->r24 = MEM_W(ctx->r21, 0XC8);
    // 0x80054628: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005462C: lw          $s1, 0x18($t8)
    ctx->r17 = MEM_W(ctx->r24, 0X18);
    // 0x80054630: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80054634: sw          $s1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r17;
    // 0x80054638: lhu         $t9, 0x12($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X12);
    // 0x8005463C: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
    // 0x80054640: andi        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 & 0X40;
    // 0x80054644: beq         $t0, $zero, L_800549B8
    if (ctx->r8 == 0) {
        // 0x80054648: addiu       $s4, $zero, 0xB
        ctx->r20 = ADD32(0, 0XB);
            goto L_800549B8;
    }
    // 0x80054648: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x8005464C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054650: lwc1        $f21, -0x6D08($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6D08);
    // 0x80054654: lwc1        $f20, -0x6D04($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6D04);
    // 0x80054658: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005465C: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x80054660: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80054664: addiu       $s6, $sp, 0x5C
    ctx->r22 = ADD32(ctx->r29, 0X5C);
L_80054668:
    // 0x80054668: beq         $s5, $s1, L_800546F4
    if (ctx->r21 == ctx->r17) {
        // 0x8005466C: nop
    
            goto L_800546F4;
    }
    // 0x8005466C: nop

    // 0x80054670: lhu         $t1, 0xC($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0XC);
    // 0x80054674: nop

    // 0x80054678: beq         $t1, $zero, L_800546F4
    if (ctx->r9 == 0) {
        // 0x8005467C: nop
    
            goto L_800546F4;
    }
    // 0x8005467C: nop

    // 0x80054680: lhu         $t2, 0x14($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X14);
    // 0x80054684: nop

    // 0x80054688: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x8005468C: bne         $t3, $zero, L_800546F4
    if (ctx->r11 != 0) {
        // 0x80054690: nop
    
            goto L_800546F4;
    }
    // 0x80054690: nop

    // 0x80054694: lhu         $t4, 0x20($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X20);
    // 0x80054698: nop

    // 0x8005469C: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x800546A0: bne         $t5, $zero, L_800546F4
    if (ctx->r13 != 0) {
        // 0x800546A4: nop
    
            goto L_800546F4;
    }
    // 0x800546A4: nop

    // 0x800546A8: lwc1        $f14, 0x9C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x800546AC: jal         0x80279308
    // 0x800546B0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x800546B0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_0:
    // 0x800546B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800546B8: lwc1        $f17, -0x6CF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6CF8);
    // 0x800546BC: lwc1        $f16, -0x6CF4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6CF4);
    // 0x800546C0: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x800546C4: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x800546C8: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x800546CC: bc1f        L_800546F4
    if (!c1cs) {
        // 0x800546D0: addu        $s0, $s6, $t6
        ctx->r16 = ADD32(ctx->r22, ctx->r14);
            goto L_800546F4;
    }
    // 0x800546D0: addu        $s0, $s6, $t6
    ctx->r16 = ADD32(ctx->r22, ctx->r14);
    // 0x800546D4: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x800546D8: lwc1        $f4, 0xA0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x800546DC: add.d       $f8, $f20, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f20.d + ctx->f2.d;
    // 0x800546E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800546E4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800546E8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800546EC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x800546F0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_800546F4:
    // 0x800546F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800546F8: sltiu       $at, $s2, 0xB
    ctx->r1 = ctx->r18 < 0XB ? 1 : 0;
    // 0x800546FC: bne         $at, $zero, L_80054668
    if (ctx->r1 != 0) {
        // 0x80054700: addiu       $s1, $s1, 0xF8
        ctx->r17 = ADD32(ctx->r17, 0XF8);
            goto L_80054668;
    }
    // 0x80054700: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x80054704: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054708: lwc1        $f2, -0x6CF0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6CF0);
    // 0x8005470C: beq         $s3, $zero, L_80054750
    if (ctx->r19 == 0) {
        // 0x80054710: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80054750;
    }
    // 0x80054710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054714: addiu       $a1, $s3, -0x1
    ctx->r5 = ADD32(ctx->r19, -0X1);
    // 0x80054718: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8005471C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80054720: jal         0x8005DE74
    // 0x80054724: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x80054724: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_1:
    // 0x80054728: lhu         $t9, 0x5C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X5C);
    // 0x8005472C: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x80054730: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80054734: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80054738: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8005473C: addu        $s4, $t0, $t1
    ctx->r20 = ADD32(ctx->r8, ctx->r9);
    // 0x80054740: lwc1        $f12, 0x9C($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X9C);
    // 0x80054744: jal         0x80279308
    // 0x80054748: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_2;
    // 0x80054748: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_2:
    // 0x8005474C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80054750:
    // 0x80054750: lw          $t3, 0xC4($s5)
    ctx->r11 = MEM_W(ctx->r21, 0XC4);
    // 0x80054754: lw          $t2, 0xC8($s5)
    ctx->r10 = MEM_W(ctx->r21, 0XC8);
    // 0x80054758: lwc1        $f6, 0x24($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8005475C: lw          $s1, 0x18($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X18);
    // 0x80054760: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80054764: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80054768: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
L_8005476C:
    // 0x8005476C: beq         $s5, $s1, L_800547F4
    if (ctx->r21 == ctx->r17) {
        // 0x80054770: nop
    
            goto L_800547F4;
    }
    // 0x80054770: nop

    // 0x80054774: lhu         $t4, 0xC($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0XC);
    // 0x80054778: nop

    // 0x8005477C: beq         $t4, $zero, L_800547F4
    if (ctx->r12 == 0) {
        // 0x80054780: nop
    
            goto L_800547F4;
    }
    // 0x80054780: nop

    // 0x80054784: lhu         $t5, 0x14($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X14);
    // 0x80054788: nop

    // 0x8005478C: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x80054790: bne         $t6, $zero, L_800547F4
    if (ctx->r14 != 0) {
        // 0x80054794: nop
    
            goto L_800547F4;
    }
    // 0x80054794: nop

    // 0x80054798: lhu         $t7, 0x20($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X20);
    // 0x8005479C: lwc1        $f12, 0xD0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x800547A0: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x800547A4: beq         $t8, $zero, L_800547F4
    if (ctx->r24 == 0) {
        // 0x800547A8: nop
    
            goto L_800547F4;
    }
    // 0x800547A8: nop

    // 0x800547AC: lwc1        $f14, 0x9C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x800547B0: jal         0x80279308
    // 0x800547B4: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_3;
    // 0x800547B4: swc1        $f2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x800547B8: lwc1        $f2, 0xCC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x800547BC: sll         $t9, $s3, 3
    ctx->r25 = S32(ctx->r19 << 3);
    // 0x800547C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x800547C4: addu        $s0, $s6, $t9
    ctx->r16 = ADD32(ctx->r22, ctx->r25);
    // 0x800547C8: bc1f        L_800547F4
    if (!c1cs) {
        // 0x800547CC: nop
    
            goto L_800547F4;
    }
    // 0x800547CC: nop

    // 0x800547D0: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x800547D4: lwc1        $f8, 0x84($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X84);
    // 0x800547D8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800547DC: add.d       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f20.d + ctx->f4.d;
    // 0x800547E0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800547E4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800547E8: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x800547EC: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x800547F0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_800547F4:
    // 0x800547F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800547F8: sltiu       $at, $s2, 0xB
    ctx->r1 = ctx->r18 < 0XB ? 1 : 0;
    // 0x800547FC: bne         $at, $zero, L_8005476C
    if (ctx->r1 != 0) {
        // 0x80054800: addiu       $s1, $s1, 0xF8
        ctx->r17 = ADD32(ctx->r17, 0XF8);
            goto L_8005476C;
    }
    // 0x80054800: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x80054804: beq         $s3, $zero, L_8005483C
    if (ctx->r19 == 0) {
        // 0x80054808: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8005483C;
    }
    // 0x80054808: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005480C: addiu       $a1, $s3, -0x1
    ctx->r5 = ADD32(ctx->r19, -0X1);
    // 0x80054810: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x80054814: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80054818: jal         0x8005DE74
    // 0x8005481C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8005DE74(rdram, ctx);
        goto after_4;
    // 0x8005481C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_4:
    // 0x80054820: lhu         $t2, 0x5C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X5C);
    // 0x80054824: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x80054828: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x8005482C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80054830: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80054834: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80054838: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
L_8005483C:
    // 0x8005483C: beq         $s4, $zero, L_80054900
    if (ctx->r20 == 0) {
        // 0x80054840: lw          $t9, 0xBC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XBC);
            goto L_80054900;
    }
    // 0x80054840: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x80054844: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x80054848: nop

    // 0x8005484C: beq         $t6, $zero, L_8005485C
    if (ctx->r14 == 0) {
        // 0x80054850: nop
    
            goto L_8005485C;
    }
    // 0x80054850: nop

    // 0x80054854: bne         $s4, $t6, L_80054864
    if (ctx->r20 != ctx->r14) {
        // 0x80054858: nop
    
            goto L_80054864;
    }
    // 0x80054858: nop

L_8005485C:
    // 0x8005485C: b           L_80054A84
    // 0x80054860: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
        goto L_80054A84;
    // 0x80054860: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80054864:
    // 0x80054864: lwc1        $f14, 0x9C($s4)
    ctx->f14.u32l = MEM_W(ctx->r20, 0X9C);
    // 0x80054868: jal         0x80279308
    // 0x8005486C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_5;
    // 0x8005486C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_5:
    // 0x80054870: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x80054874: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80054878: lwc1        $f14, 0x9C($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X9C);
    // 0x8005487C: jal         0x80279308
    // 0x80054880: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_6;
    // 0x80054880: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_6:
    // 0x80054884: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80054888: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8005488C: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80054890: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80054894: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80054898: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x8005489C: add.d       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = ctx->f10.d + ctx->f6.d;
    // 0x800548A0: lwc1        $f4, 0x84($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X84);
    // 0x800548A4: mul.d       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x800548A8: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x800548AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800548B0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800548B4: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x800548B8: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800548BC: add.d       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = ctx->f4.d + ctx->f16.d;
    // 0x800548C0: lwc1        $f10, 0x84($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X84);
    // 0x800548C4: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x800548C8: mul.d       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x800548CC: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    // 0x800548D0: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800548D4: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x800548D8: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x800548DC: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x800548E0: nop

    // 0x800548E4: bc1f        L_800548F4
    if (!c1cs) {
        // 0x800548E8: nop
    
            goto L_800548F4;
    }
    // 0x800548E8: nop

    // 0x800548EC: b           L_80054A84
    // 0x800548F0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
        goto L_80054A84;
    // 0x800548F0: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_800548F4:
    // 0x800548F4: b           L_80054A88
    // 0x800548F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80054A88;
    // 0x800548F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800548FC: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
L_80054900:
    // 0x80054900: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80054904: beq         $t9, $zero, L_80054914
    if (ctx->r25 == 0) {
        // 0x80054908: nop
    
            goto L_80054914;
    }
    // 0x80054908: nop

    // 0x8005490C: b           L_80054A84
    // 0x80054910: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80054A84;
    // 0x80054910: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80054914:
    // 0x80054914: lw          $t0, 0xC8($s5)
    ctx->r8 = MEM_W(ctx->r21, 0XC8);
    // 0x80054918: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8005491C: lw          $s1, 0x18($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X18);
    // 0x80054920: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
L_80054924:
    // 0x80054924: beq         $s5, $s1, L_80054974
    if (ctx->r21 == ctx->r17) {
        // 0x80054928: nop
    
            goto L_80054974;
    }
    // 0x80054928: nop

    // 0x8005492C: lhu         $t1, 0xC($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0XC);
    // 0x80054930: nop

    // 0x80054934: beq         $t1, $zero, L_80054974
    if (ctx->r9 == 0) {
        // 0x80054938: nop
    
            goto L_80054974;
    }
    // 0x80054938: nop

    // 0x8005493C: lhu         $t2, 0x14($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X14);
    // 0x80054940: sll         $t4, $s3, 3
    ctx->r12 = S32(ctx->r19 << 3);
    // 0x80054944: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80054948: bne         $t3, $zero, L_80054974
    if (ctx->r11 != 0) {
        // 0x8005494C: addu        $s0, $s6, $t4
        ctx->r16 = ADD32(ctx->r22, ctx->r12);
            goto L_80054974;
    }
    // 0x8005494C: addu        $s0, $s6, $t4
    ctx->r16 = ADD32(ctx->r22, ctx->r12);
    // 0x80054950: lwc1        $f14, 0x9C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X9C);
    // 0x80054954: jal         0x80279308
    // 0x80054958: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_7;
    // 0x80054958: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_7:
    // 0x8005495C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80054960: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x80054964: lwc1        $f10, 0x84($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X84);
    // 0x80054968: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8005496C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80054970: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
L_80054974:
    // 0x80054974: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80054978: bne         $s2, $s4, L_80054924
    if (ctx->r18 != ctx->r20) {
        // 0x8005497C: addiu       $s1, $s1, 0xF8
        ctx->r17 = ADD32(ctx->r17, 0XF8);
            goto L_80054924;
    }
    // 0x8005497C: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x80054980: beq         $s3, $zero, L_80054A80
    if (ctx->r19 == 0) {
        // 0x80054984: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80054A80;
    }
    // 0x80054984: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054988: addiu       $a1, $s3, -0x1
    ctx->r5 = ADD32(ctx->r19, -0X1);
    // 0x8005498C: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x80054990: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80054994: jal         0x8005DE74
    // 0x80054998: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8005DE74(rdram, ctx);
        goto after_8;
    // 0x80054998: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_8:
    // 0x8005499C: lhu         $t7, 0x5C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X5C);
    // 0x800549A0: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x800549A4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x800549A8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800549AC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800549B0: b           L_80054A84
    // 0x800549B4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
        goto L_80054A84;
    // 0x800549B4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_800549B8:
    // 0x800549B8: beq         $s5, $s1, L_80054A3C
    if (ctx->r21 == ctx->r17) {
        // 0x800549BC: nop
    
            goto L_80054A3C;
    }
    // 0x800549BC: nop

    // 0x800549C0: lhu         $t0, 0xC($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0XC);
    // 0x800549C4: nop

    // 0x800549C8: beq         $t0, $zero, L_80054A3C
    if (ctx->r8 == 0) {
        // 0x800549CC: nop
    
            goto L_80054A3C;
    }
    // 0x800549CC: nop

    // 0x800549D0: lhu         $t1, 0x14($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X14);
    // 0x800549D4: nop

    // 0x800549D8: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x800549DC: bne         $t2, $zero, L_80054A3C
    if (ctx->r10 != 0) {
        // 0x800549E0: nop
    
            goto L_80054A3C;
    }
    // 0x800549E0: nop

    // 0x800549E4: lwc1        $f14, 0x88($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X88);
    // 0x800549E8: jal         0x80279308
    // 0x800549EC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_9;
    // 0x800549EC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_9:
    // 0x800549F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800549F4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800549F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800549FC: lwc1        $f19, -0x6CE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6CE0);
    // 0x80054A00: lwc1        $f18, -0x6CDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6CDC);
    // 0x80054A04: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80054A08: c.lt.d      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.d < ctx->f18.d;
    // 0x80054A0C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80054A10: bc1f        L_80054A3C
    if (!c1cs) {
        // 0x80054A14: sll         $t3, $s3, 3
        ctx->r11 = S32(ctx->r19 << 3);
            goto L_80054A3C;
    }
    // 0x80054A14: sll         $t3, $s3, 3
    ctx->r11 = S32(ctx->r19 << 3);
    // 0x80054A18: addu        $s0, $s6, $t3
    ctx->r16 = ADD32(ctx->r22, ctx->r11);
    // 0x80054A1C: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x80054A20: lwc1        $f4, 0x84($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X84);
    // 0x80054A24: add.d       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f16.d + ctx->f2.d;
    // 0x80054A28: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80054A2C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80054A30: mul.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80054A34: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x80054A38: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
L_80054A3C:
    // 0x80054A3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80054A40: bne         $s2, $s4, L_800549B8
    if (ctx->r18 != ctx->r20) {
        // 0x80054A44: addiu       $s1, $s1, 0xF8
        ctx->r17 = ADD32(ctx->r17, 0XF8);
            goto L_800549B8;
    }
    // 0x80054A44: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
    // 0x80054A48: beq         $s3, $zero, L_80054A80
    if (ctx->r19 == 0) {
        // 0x80054A4C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80054A80;
    }
    // 0x80054A4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054A50: addiu       $a1, $s3, -0x1
    ctx->r5 = ADD32(ctx->r19, -0X1);
    // 0x80054A54: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80054A58: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80054A5C: jal         0x8005DE74
    // 0x80054A60: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8005DE74(rdram, ctx);
        goto after_10;
    // 0x80054A60: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_10:
    // 0x80054A64: lhu         $t6, 0x5C($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X5C);
    // 0x80054A68: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x80054A6C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80054A70: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80054A74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80054A78: b           L_80054A84
    // 0x80054A7C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_80054A84;
    // 0x80054A7C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80054A80:
    // 0x80054A80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80054A84:
    // 0x80054A84: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80054A88:
    // 0x80054A88: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80054A8C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80054A90: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80054A94: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80054A98: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80054A9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80054AA0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80054AA4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80054AA8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80054AAC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80054AB0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80054AB4: jr          $ra
    // 0x80054AB8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x80054AB8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80054ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054ABC: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x80054AC0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80054AC4: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80054AC8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80054ACC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80054AD0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80054AD4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80054AD8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80054ADC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80054AE0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80054AE4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80054AE8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80054AEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80054AF0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80054AF4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80054AF8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80054AFC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80054B00: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80054B04: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80054B08: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x80054B0C: lw          $t7, 0xA8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XA8);
    // 0x80054B10: sll         $fp, $a2, 16
    ctx->r30 = S32(ctx->r6 << 16);
    // 0x80054B14: sra         $t6, $fp, 16
    ctx->r14 = S32(SIGNED(ctx->r30) >> 16);
    // 0x80054B18: mtc1        $a1, $f24
    ctx->f24.u32l = ctx->r5;
    // 0x80054B1C: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x80054B20: bne         $a0, $t7, L_80054B3C
    if (ctx->r4 != ctx->r15) {
        // 0x80054B24: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_80054B3C;
    }
    // 0x80054B24: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80054B28: lw          $t8, 0xA4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XA4);
    // 0x80054B2C: nop

    // 0x80054B30: lw          $v0, 0x40($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X40);
    // 0x80054B34: b           L_80054D00
    // 0x80054B38: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_80054D00;
    // 0x80054B38: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80054B3C:
    // 0x80054B3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054B40: lw          $t9, 0xC8($s3)
    ctx->r25 = MEM_W(ctx->r19, 0XC8);
    // 0x80054B44: lwc1        $f23, -0x6CD8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X6CD8);
    // 0x80054B48: lwc1        $f22, -0x6CD4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6CD4);
    // 0x80054B4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054B50: lw          $s0, 0x18($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X18);
    // 0x80054B54: lwc1        $f21, -0x6CD0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X6CD0);
    // 0x80054B58: lwc1        $f20, -0x6CCC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6CCC);
    // 0x80054B5C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80054B60: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80054B64: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80054B68: addiu       $s7, $sp, 0x128
    ctx->r23 = ADD32(ctx->r29, 0X128);
    // 0x80054B6C: addiu       $s6, $zero, 0xB
    ctx->r22 = ADD32(0, 0XB);
    // 0x80054B70: sw          $s0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r16;
L_80054B74:
    // 0x80054B74: beq         $fp, $zero, L_80054BA0
    if (ctx->r30 == 0) {
        // 0x80054B78: nop
    
            goto L_80054BA0;
    }
    // 0x80054B78: nop

    // 0x80054B7C: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x80054B80: nop

    // 0x80054B84: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80054B88: bne         $t1, $zero, L_80054C60
    if (ctx->r9 != 0) {
        // 0x80054B8C: nop
    
            goto L_80054C60;
    }
    // 0x80054B8C: nop

    // 0x80054B90: lhu         $t2, 0x1A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X1A);
    // 0x80054B94: nop

    // 0x80054B98: beq         $t2, $zero, L_80054C60
    if (ctx->r10 == 0) {
        // 0x80054B9C: nop
    
            goto L_80054C60;
    }
    // 0x80054B9C: nop

L_80054BA0:
    // 0x80054BA0: beq         $s3, $s0, L_80054C60
    if (ctx->r19 == ctx->r16) {
        // 0x80054BA4: nop
    
            goto L_80054C60;
    }
    // 0x80054BA4: nop

    // 0x80054BA8: lhu         $t3, 0xC($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XC);
    // 0x80054BAC: nop

    // 0x80054BB0: beq         $t3, $zero, L_80054C60
    if (ctx->r11 == 0) {
        // 0x80054BB4: nop
    
            goto L_80054C60;
    }
    // 0x80054BB4: nop

    // 0x80054BB8: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x80054BBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80054BC0: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x80054BC4: bne         $t5, $zero, L_80054C60
    if (ctx->r13 != 0) {
        // 0x80054BC8: or          $a3, $s7, $zero
        ctx->r7 = ctx->r23 | 0;
            goto L_80054C60;
    }
    // 0x80054BC8: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x80054BCC: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80054BD0: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x80054BD4: sll         $t6, $s5, 3
    ctx->r14 = S32(ctx->r21 << 3);
    // 0x80054BD8: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x80054BDC: jal         0x80272B98
    // 0x80054BE0: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x80054BE0: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80054BE4: lwc1        $f14, 0x128($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X128);
    // 0x80054BE8: jal         0x80279308
    // 0x80054BEC: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x80054BEC: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_1:
    // 0x80054BF0: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x80054BF4: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x80054BF8: sll         $t8, $s4, 3
    ctx->r24 = S32(ctx->r20 << 3);
    // 0x80054BFC: bc1f        L_80054C2C
    if (!c1cs) {
        // 0x80054C00: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_80054C2C;
    }
    // 0x80054C00: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80054C04: addiu       $t9, $sp, 0xC8
    ctx->r25 = ADD32(ctx->r29, 0XC8);
    // 0x80054C08: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80054C0C: sh          $s2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r18;
    // 0x80054C10: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80054C14: add.d       $f8, $f22, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f22.d + ctx->f2.d;
    // 0x80054C18: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80054C1C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80054C20: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80054C24: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80054C28: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_80054C2C:
    // 0x80054C2C: sh          $s2, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r18;
    // 0x80054C30: lhu         $t0, 0x20($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X20);
    // 0x80054C34: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80054C38: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x80054C3C: beq         $t1, $zero, L_80054C4C
    if (ctx->r9 == 0) {
        // 0x80054C40: nop
    
            goto L_80054C4C;
    }
    // 0x80054C40: nop

    // 0x80054C44: b           L_80054C60
    // 0x80054C48: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
        goto L_80054C60;
    // 0x80054C48: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
L_80054C4C:
    // 0x80054C4C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80054C50: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x80054C54: nop

    // 0x80054C58: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80054C5C: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
L_80054C60:
    // 0x80054C60: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80054C64: bne         $s2, $s6, L_80054B74
    if (ctx->r18 != ctx->r22) {
        // 0x80054C68: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_80054B74;
    }
    // 0x80054C68: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x80054C6C: lhu         $t2, 0x20($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X20);
    // 0x80054C70: nop

    // 0x80054C74: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x80054C78: beq         $t3, $zero, L_80054C88
    if (ctx->r11 == 0) {
        // 0x80054C7C: nop
    
            goto L_80054C88;
    }
    // 0x80054C7C: nop

    // 0x80054C80: beq         $fp, $zero, L_80054CC0
    if (ctx->r30 == 0) {
        // 0x80054C84: nop
    
            goto L_80054CC0;
    }
    // 0x80054C84: nop

L_80054C88:
    // 0x80054C88: beq         $s4, $zero, L_80054CC0
    if (ctx->r20 == 0) {
        // 0x80054C8C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80054CC0;
    }
    // 0x80054C8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054C90: addiu       $a1, $s4, -0x1
    ctx->r5 = ADD32(ctx->r20, -0X1);
    // 0x80054C94: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x80054C98: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80054C9C: jal         0x8005DE74
    // 0x80054CA0: addiu       $a2, $sp, 0xC8
    ctx->r6 = ADD32(ctx->r29, 0XC8);
    func_8005DE74(rdram, ctx);
        goto after_2;
    // 0x80054CA0: addiu       $a2, $sp, 0xC8
    ctx->r6 = ADD32(ctx->r29, 0XC8);
    after_2:
    // 0x80054CA4: lhu         $t6, 0xC8($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XC8);
    // 0x80054CA8: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x80054CAC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80054CB0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80054CB4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80054CB8: b           L_80054CFC
    // 0x80054CBC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_80054CFC;
    // 0x80054CBC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80054CC0:
    // 0x80054CC0: beq         $s5, $zero, L_80054CFC
    if (ctx->r21 == 0) {
        // 0x80054CC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80054CFC;
    }
    // 0x80054CC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80054CC8: addiu       $a1, $s5, -0x1
    ctx->r5 = ADD32(ctx->r21, -0X1);
    // 0x80054CCC: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80054CD0: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80054CD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80054CD8: jal         0x8005DE74
    // 0x80054CDC: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_8005DE74(rdram, ctx);
        goto after_3;
    // 0x80054CDC: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_3:
    // 0x80054CE0: lhu         $t1, 0x70($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X70);
    // 0x80054CE4: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x80054CE8: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x80054CEC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80054CF0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80054CF4: b           L_80054CFC
    // 0x80054CF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
        goto L_80054CFC;
    // 0x80054CF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
L_80054CFC:
    // 0x80054CFC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_80054D00:
    // 0x80054D00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80054D04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80054D08: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80054D0C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80054D10: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80054D14: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80054D18: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80054D1C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80054D20: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80054D24: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80054D28: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80054D2C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80054D30: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80054D34: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80054D38: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80054D3C: jr          $ra
    // 0x80054D40: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    return;
    // 0x80054D40: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
;}
RECOMP_FUNC void func_80054D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054D44: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80054D48: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80054D4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80054D50: sw          $a1, 0x98($t6)
    MEM_W(0X98, ctx->r14) = ctx->r5;
    // 0x80054D54: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80054D58: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80054D5C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x80054D60: lwc1        $f4, 0x4C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x80054D64: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80054D68: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x80054D6C: lwc1        $f6, 0x44($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80054D70: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x80054D74: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x80054D78: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x80054D7C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80054D80: lhu         $t8, 0x12($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X12);
    // 0x80054D84: nop

    // 0x80054D88: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80054D8C: beq         $t9, $zero, L_80054DA8
    if (ctx->r25 == 0) {
        // 0x80054D90: nop
    
            goto L_80054DA8;
    }
    // 0x80054D90: nop

    // 0x80054D94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80054D98: lwc1        $f9, -0x6CC8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6CC8);
    // 0x80054D9C: lwc1        $f8, -0x6CC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CC4);
    // 0x80054DA0: b           L_80054DB8
    // 0x80054DA4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
        goto L_80054DB8;
    // 0x80054DA4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
L_80054DA8:
    // 0x80054DA8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80054DAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80054DB0: nop

    // 0x80054DB4: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_80054DB8:
    // 0x80054DB8: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x80054DBC: jr          $ra
    // 0x80054DC0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x80054DC0: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80054DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054DC4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80054DC8: lhu         $t6, 0x361E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X361E);
    // 0x80054DCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80054DD0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80054DD4: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x80054DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80054DDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80054DE0: beq         $t7, $zero, L_80054E28
    if (ctx->r15 == 0) {
        // 0x80054DE4: sh          $zero, 0x65F4($at)
        MEM_H(0X65F4, ctx->r1) = 0;
            goto L_80054E28;
    }
    // 0x80054DE4: sh          $zero, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = 0;
    // 0x80054DE8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80054DEC: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80054DF0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80054DF4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80054DF8: lw          $t9, 0x98($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X98);
    // 0x80054DFC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80054E00: beq         $t9, $zero, L_80054E28
    if (ctx->r25 == 0) {
        // 0x80054E04: nop
    
            goto L_80054E28;
    }
    // 0x80054E04: nop

    // 0x80054E08: sh          $t1, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = ctx->r9;
    // 0x80054E0C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80054E10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80054E14: lw          $a1, 0x98($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X98);
    // 0x80054E18: jal         0x80054D44
    // 0x80054E1C: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    func_80054D44(rdram, ctx);
        goto after_0;
    // 0x80054E1C: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    after_0:
    // 0x80054E20: b           L_80054FC8
    // 0x80054E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80054FC8;
    // 0x80054E24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80054E28:
    // 0x80054E28: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80054E2C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80054E30: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80054E34: sh          $zero, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = 0;
    // 0x80054E38: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80054E3C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80054E40: sw          $zero, 0x98($t3)
    MEM_W(0X98, ctx->r11) = 0;
    // 0x80054E44: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80054E48: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x80054E4C: lw          $s0, 0x88($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X88);
    // 0x80054E50: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x80054E54: beq         $at, $zero, L_80054FC8
    if (ctx->r1 == 0) {
        // 0x80054E58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054E58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054E5C: beq         $s0, $zero, L_80054FC8
    if (ctx->r16 == 0) {
        // 0x80054E60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054E64: lhu         $t5, 0xC0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XC0);
    // 0x80054E68: nop

    // 0x80054E6C: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x80054E70: bne         $t6, $zero, L_80054FC8
    if (ctx->r14 != 0) {
        // 0x80054E74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054E78: lw          $t7, 0xA4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA4);
    // 0x80054E7C: nop

    // 0x80054E80: bne         $t7, $zero, L_80054FC8
    if (ctx->r15 != 0) {
        // 0x80054E84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054E88: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x80054E8C: nop

    // 0x80054E90: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x80054E94: beq         $t8, $zero, L_80054FC8
    if (ctx->r24 == 0) {
        // 0x80054E98: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054E98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054E9C: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x80054EA0: nop

    // 0x80054EA4: andi        $t1, $t9, 0x8800
    ctx->r9 = ctx->r25 & 0X8800;
    // 0x80054EA8: bne         $t1, $zero, L_80054FC8
    if (ctx->r9 != 0) {
        // 0x80054EAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054EB0: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x80054EB4: andi        $a0, $v1, 0x40
    ctx->r4 = ctx->r3 & 0X40;
    // 0x80054EB8: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80054EBC: bne         $t3, $zero, L_80054FC8
    if (ctx->r11 != 0) {
        // 0x80054EC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80054FC8;
    }
    // 0x80054EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80054EC4: beq         $a0, $zero, L_80054EE0
    if (ctx->r4 == 0) {
        // 0x80054EC8: nop
    
            goto L_80054EE0;
    }
    // 0x80054EC8: nop

    // 0x80054ECC: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80054ED0: nop

    // 0x80054ED4: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x80054ED8: b           L_80054EF4
    // 0x80054EDC: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
        goto L_80054EF4;
    // 0x80054EDC: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
L_80054EE0:
    // 0x80054EE0: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80054EE4: nop

    // 0x80054EE8: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80054EEC: nop

    // 0x80054EF0: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
L_80054EF4:
    // 0x80054EF4: nop

    // 0x80054EF8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80054EFC: bne         $t5, $zero, L_80054F20
    if (ctx->r13 != 0) {
        // 0x80054F00: nop
    
            goto L_80054F20;
    }
    // 0x80054F00: nop

    // 0x80054F04: beq         $a0, $zero, L_80054F20
    if (ctx->r4 == 0) {
        // 0x80054F08: nop
    
            goto L_80054F20;
    }
    // 0x80054F08: nop

    // 0x80054F0C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80054F10: jal         0x800545C4
    // 0x80054F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800545C4(rdram, ctx);
        goto after_1;
    // 0x80054F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80054F18: bne         $v0, $zero, L_80054FB8
    if (ctx->r2 != 0) {
        // 0x80054F1C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80054FB8;
    }
    // 0x80054F1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80054F20:
    // 0x80054F20: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x80054F24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80054F28: addiu       $t0, $a0, 0x318
    ctx->r8 = ADD32(ctx->r4, 0X318);
    // 0x80054F2C: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x80054F30: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x80054F34: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80054F38: addiu       $a3, $zero, 0xF8
    ctx->r7 = ADD32(0, 0XF8);
L_80054F3C:
    // 0x80054F3C: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80054F40: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80054F44: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054F48: mflo        $t7
    ctx->r15 = lo;
    // 0x80054F4C: addu        $a1, $t7, $a2
    ctx->r5 = ADD32(ctx->r15, ctx->r6);
    // 0x80054F50: beq         $a1, $s0, L_80054F7C
    if (ctx->r5 == ctx->r16) {
        // 0x80054F54: nop
    
            goto L_80054F7C;
    }
    // 0x80054F54: nop

    // 0x80054F58: lhu         $t8, 0xC($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XC);
    // 0x80054F5C: nop

    // 0x80054F60: beq         $t8, $zero, L_80054F7C
    if (ctx->r24 == 0) {
        // 0x80054F64: nop
    
            goto L_80054F7C;
    }
    // 0x80054F64: nop

    // 0x80054F68: lhu         $t9, 0x14($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X14);
    // 0x80054F6C: nop

    // 0x80054F70: andi        $t1, $t9, 0x8000
    ctx->r9 = ctx->r25 & 0X8000;
    // 0x80054F74: beq         $t1, $zero, L_80054FB8
    if (ctx->r9 == 0) {
        // 0x80054F78: nop
    
            goto L_80054FB8;
    }
    // 0x80054F78: nop

L_80054F7C:
    // 0x80054F7C: bne         $v0, $a0, L_80054F3C
    if (ctx->r2 != ctx->r4) {
        // 0x80054F80: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80054F3C;
    }
    // 0x80054F80: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80054F84: lhu         $t2, 0x0($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X0);
    // 0x80054F88: nop

    // 0x80054F8C: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054F90: mflo        $t3
    ctx->r11 = lo;
    // 0x80054F94: addu        $a1, $t3, $a2
    ctx->r5 = ADD32(ctx->r11, ctx->r6);
    // 0x80054F98: bne         $a1, $s0, L_80054FB8
    if (ctx->r5 != ctx->r16) {
        // 0x80054F9C: nop
    
            goto L_80054FB8;
    }
    // 0x80054F9C: nop

    // 0x80054FA0: lhu         $t4, 0x8($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X8);
    // 0x80054FA4: nop

    // 0x80054FA8: multu       $t4, $a3
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80054FAC: mflo        $t5
    ctx->r13 = lo;
    // 0x80054FB0: addu        $a1, $t5, $a2
    ctx->r5 = ADD32(ctx->r13, ctx->r6);
    // 0x80054FB4: nop

L_80054FB8:
    // 0x80054FB8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80054FBC: jal         0x80054D44
    // 0x80054FC0: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    func_80054D44(rdram, ctx);
        goto after_2;
    // 0x80054FC0: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    after_2:
    // 0x80054FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80054FC8:
    // 0x80054FC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80054FCC: jr          $ra
    // 0x80054FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80054FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80054FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80054FD4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80054FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80054FDC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80054FE0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80054FE4: lw          $a2, 0xC4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC4);
    // 0x80054FE8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80054FEC: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x80054FF0: nop

    // 0x80054FF4: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80054FF8: bne         $t6, $zero, L_800551A8
    if (ctx->r14 != 0) {
        // 0x80054FFC: nop
    
            goto L_800551A8;
    }
    // 0x80054FFC: nop

    // 0x80055000: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80055004: beq         $t7, $zero, L_80055018
    if (ctx->r15 == 0) {
        // 0x80055008: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80055018;
    }
    // 0x80055008: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8005500C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80055010: b           L_8005527C
    // 0x80055014: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
        goto L_8005527C;
    // 0x80055014: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
L_80055018:
    // 0x80055018: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8005501C: jal         0x802720BC
    // 0x80055020: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x802720BC)(rdram, ctx);
        goto after_0;
    // 0x80055020: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x80055024: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80055028: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8005502C: beq         $v0, $zero, L_80055094
    if (ctx->r2 == 0) {
        // 0x80055030: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80055094;
    }
    // 0x80055030: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055034: lwc1        $f0, -0x6CC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6CC0);
    // 0x80055038: lwc1        $f4, 0x44($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X44);
    // 0x8005503C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055040: lwc1        $f8, -0x6CBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CBC);
    // 0x80055044: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80055048: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005504C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80055050: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80055054: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055058: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8005505C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80055060: nop

    // 0x80055064: bc1f        L_80055074
    if (!c1cs) {
        // 0x80055068: nop
    
            goto L_80055074;
    }
    // 0x80055068: nop

    // 0x8005506C: b           L_80055278
    // 0x80055070: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80055278;
    // 0x80055070: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80055074:
    // 0x80055074: lwc1        $f0, -0x6CB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6CB8);
    // 0x80055078: nop

    // 0x8005507C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80055080: nop

    // 0x80055084: bc1f        L_80055278
    if (!c1cs) {
        // 0x80055088: nop
    
            goto L_80055278;
    }
    // 0x80055088: nop

    // 0x8005508C: b           L_80055278
    // 0x80055090: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
        goto L_80055278;
    // 0x80055090: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80055094:
    // 0x80055094: lhu         $t8, 0x2($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X2);
    // 0x80055098: nop

    // 0x8005509C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x800550A0: bne         $t9, $zero, L_80055170
    if (ctx->r25 != 0) {
        // 0x800550A4: nop
    
            goto L_80055170;
    }
    // 0x800550A4: nop

    // 0x800550A8: lw          $t0, 0x38($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X38);
    // 0x800550AC: nop

    // 0x800550B0: lh          $a0, 0x8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X8);
    // 0x800550B4: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x800550B8: jal         0x80272AD4
    // 0x800550BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_1;
    // 0x800550BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x800550C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800550C4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800550C8: addiu       $a0, $v0, -0x7
    ctx->r4 = ADD32(ctx->r2, -0X7);
    // 0x800550CC: bgez        $a0, L_800550DC
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800550D0: slti        $at, $a0, 0x40
        ctx->r1 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
            goto L_800550DC;
    }
    // 0x800550D0: slti        $at, $a0, 0x40
    ctx->r1 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
    // 0x800550D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800550D8: slti        $at, $a0, 0x40
    ctx->r1 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
L_800550DC:
    // 0x800550DC: bne         $at, $zero, L_800550E8
    if (ctx->r1 != 0) {
        // 0x800550E0: nop
    
            goto L_800550E8;
    }
    // 0x800550E0: nop

    // 0x800550E4: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
L_800550E8:
    // 0x800550E8: lw          $t1, 0xC8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XC8);
    // 0x800550EC: nop

    // 0x800550F0: lh          $v1, 0x8B8($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X8B8);
    // 0x800550F4: nop

    // 0x800550F8: blez        $v1, L_8005511C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800550FC: nop
    
            goto L_8005511C;
    }
    // 0x800550FC: nop

    // 0x80055100: lw          $t2, 0x38($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X38);
    // 0x80055104: nop

    // 0x80055108: lh          $t3, 0x6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X6);
    // 0x8005510C: nop

    // 0x80055110: bgez        $t3, L_8005511C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80055114: nop
    
            goto L_8005511C;
    }
    // 0x80055114: nop

    // 0x80055118: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
L_8005511C:
    // 0x8005511C: lw          $v0, 0x38($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X38);
    // 0x80055120: bgez        $v1, L_8005513C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80055124: nop
    
            goto L_8005513C;
    }
    // 0x80055124: nop

    // 0x80055128: lh          $t4, 0x6($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X6);
    // 0x8005512C: nop

    // 0x80055130: blez        $t4, L_8005513C
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80055134: nop
    
            goto L_8005513C;
    }
    // 0x80055134: nop

    // 0x80055138: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
L_8005513C:
    // 0x8005513C: lh          $t5, 0x8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8);
    // 0x80055140: nop

    // 0x80055144: bgez        $t5, L_80055150
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80055148: nop
    
            goto L_80055150;
    }
    // 0x80055148: nop

    // 0x8005514C: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80055150:
    // 0x80055150: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x80055154: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055158: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005515C: lwc1        $f4, -0x6CB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6CB4);
    // 0x80055160: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80055164: mul.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80055168: b           L_8005527C
    // 0x8005516C: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
        goto L_8005527C;
    // 0x8005516C: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
L_80055170:
    // 0x80055170: lhu         $t6, 0x6($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X6);
    // 0x80055174: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80055178: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x8005517C: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80055180: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80055184: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80055188: lh          $t0, -0x5420($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X5420);
    // 0x8005518C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055190: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80055194: lwc1        $f10, -0x6CB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CB0);
    // 0x80055198: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8005519C: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800551A0: b           L_8005527C
    // 0x800551A4: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
        goto L_8005527C;
    // 0x800551A4: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
L_800551A8:
    // 0x800551A8: lw          $v1, 0xC8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC8);
    // 0x800551AC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x800551B0: lbu         $v0, 0x8AC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8AC);
    // 0x800551B4: lhu         $a0, 0x2C($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X2C);
    // 0x800551B8: sll         $t1, $v0, 1
    ctx->r9 = S32(ctx->r2 << 1);
    // 0x800551BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800551C0: lhu         $t2, -0x5438($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X5438);
    // 0x800551C4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x800551C8: div         $zero, $a0, $t2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r10)));
    // 0x800551CC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x800551D0: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x800551D4: lhu         $t4, -0x542C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X542C);
    // 0x800551D8: bne         $t2, $zero, L_800551E4
    if (ctx->r10 != 0) {
        // 0x800551DC: nop
    
            goto L_800551E4;
    }
    // 0x800551DC: nop

    // 0x800551E0: break       7
    do_break(2147832288);
L_800551E4:
    // 0x800551E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800551E8: bne         $t2, $at, L_800551FC
    if (ctx->r10 != ctx->r1) {
        // 0x800551EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800551FC;
    }
    // 0x800551EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800551F0: bne         $a0, $at, L_800551FC
    if (ctx->r4 != ctx->r1) {
        // 0x800551F4: nop
    
            goto L_800551FC;
    }
    // 0x800551F4: nop

    // 0x800551F8: break       6
    do_break(2147832312);
L_800551FC:
    // 0x800551FC: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80055200: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80055204: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80055208: mfhi        $t3
    ctx->r11 = hi;
    // 0x8005520C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80055210: bgez        $t4, L_80055224
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80055214: cvt.s.w     $f18, $f4
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80055224;
    }
    // 0x80055214: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80055218: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8005521C: nop

    // 0x80055220: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_80055224:
    // 0x80055224: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80055228: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005522C: bc1f        L_80055238
    if (!c1cs) {
        // 0x80055230: nop
    
            goto L_80055238;
    }
    // 0x80055230: nop

    // 0x80055234: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80055238:
    // 0x80055238: lhu         $v0, 0x95C($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X95C);
    // 0x8005523C: nop

    // 0x80055240: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x80055244: bne         $t5, $zero, L_80055268
    if (ctx->r13 != 0) {
        // 0x80055248: andi        $t6, $v0, 0x40
        ctx->r14 = ctx->r2 & 0X40;
            goto L_80055268;
    }
    // 0x80055248: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x8005524C: beq         $t6, $zero, L_8005525C
    if (ctx->r14 == 0) {
        // 0x80055250: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_8005525C;
    }
    // 0x80055250: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x80055254: b           L_80055268
    // 0x80055258: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
        goto L_80055268;
    // 0x80055258: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
L_8005525C:
    // 0x8005525C: beq         $t7, $zero, L_80055268
    if (ctx->r15 == 0) {
        // 0x80055260: nop
    
            goto L_80055268;
    }
    // 0x80055260: nop

    // 0x80055264: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
L_80055268:
    // 0x80055268: lwc1        $f10, -0x6CAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6CAC);
    // 0x8005526C: nop

    // 0x80055270: mul.s       $f18, $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80055274: nop

L_80055278:
    // 0x80055278: lw          $t8, 0xD8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD8);
L_8005527C:
    // 0x8005527C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80055280: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x80055284: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80055288: jal         0x802752E8
    // 0x8005528C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_2;
    // 0x8005528C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_2:
    // 0x80055290: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80055294: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80055298: lhu         $t9, 0x14($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X14);
    // 0x8005529C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800552A0: andi        $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 & 0X2000;
    // 0x800552A4: beq         $t0, $zero, L_800552BC
    if (ctx->r8 == 0) {
        // 0x800552A8: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800552BC;
    }
    // 0x800552A8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800552AC: addiu       $a0, $v1, -0x14
    ctx->r4 = ADD32(ctx->r3, -0X14);
    // 0x800552B0: bgtz        $a0, L_800552BC
    if (SIGNED(ctx->r4) > 0) {
        // 0x800552B4: nop
    
            goto L_800552BC;
    }
    // 0x800552B4: nop

    // 0x800552B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800552BC:
    // 0x800552BC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800552C0: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x800552C4: nop

    // 0x800552C8: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800552CC: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x800552D0: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x800552D4: jal         0x80272AEC
    // 0x800552D8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x800552D8: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_3:
    // 0x800552DC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800552E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800552E4: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x800552E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800552EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800552F0: sub.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x800552F4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800552F8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x800552FC: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80055300: bc1f        L_80055310
    if (!c1cs) {
        // 0x80055304: sub.s       $f2, $f12, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_80055310;
    }
    // 0x80055304: sub.s       $f2, $f12, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80055308: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8005530C: nop

L_80055310:
    // 0x80055310: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80055314: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80055318: nop

    // 0x8005531C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x80055320: nop

    // 0x80055324: bc1f        L_80055330
    if (!c1cs) {
        // 0x80055328: nop
    
            goto L_80055330;
    }
    // 0x80055328: nop

    // 0x8005532C: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_80055330:
    // 0x80055330: lw          $t2, 0xC8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XC8);
    // 0x80055334: nop

    // 0x80055338: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x8005533C: nop

    // 0x80055340: lwc1        $f12, 0x8C0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X8C0);
    // 0x80055344: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80055348: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8005534C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x80055350: jal         0x80080E80
    // 0x80055354: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80055354: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_4:
    // 0x80055358: jal         0x80272AEC
    // 0x8005535C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x8005535C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x80055360: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80055364: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80055368: lbu         $t4, 0x3688($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X3688);
    // 0x8005536C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80055370: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80055374: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80055378: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8005537C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80055380: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80055384: beq         $t4, $zero, L_800553A0
    if (ctx->r12 == 0) {
        // 0x80055388: nop
    
            goto L_800553A0;
    }
    // 0x80055388: nop

    // 0x8005538C: addiu       $a0, $a0, -0x14
    ctx->r4 = ADD32(ctx->r4, -0X14);
    // 0x80055390: bgtz        $a0, L_800553D0
    if (SIGNED(ctx->r4) > 0) {
        // 0x80055394: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_800553D0;
    }
    // 0x80055394: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x80055398: b           L_800553D0
    // 0x8005539C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800553D0;
    // 0x8005539C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800553A0:
    // 0x800553A0: lw          $t5, 0xC8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XC8);
    // 0x800553A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800553A8: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x800553AC: lwc1        $f8, -0x6CA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6CA8);
    // 0x800553B0: lwc1        $f6, 0x8BC($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x800553B4: nop

    // 0x800553B8: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800553BC: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x800553C0: nop

    // 0x800553C4: bc1f        L_800553D0
    if (!c1cs) {
        // 0x800553C8: nop
    
            goto L_800553D0;
    }
    // 0x800553C8: nop

    // 0x800553CC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_800553D0:
    // 0x800553D0: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x800553D4: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800553D8: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x800553DC: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x800553E0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x800553E4: jal         0x80059898
    // 0x800553E8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    func_80059898(rdram, ctx);
        goto after_6;
    // 0x800553E8: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x800553EC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800553F0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800553F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800553F8: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800553FC: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80055400: bgez        $v0, L_80055418
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80055404: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80055418;
    }
    // 0x80055404: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80055408: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8005540C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80055410: nop

    // 0x80055414: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80055418:
    // 0x80055418: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x8005541C: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80055420: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80055424: nop

    // 0x80055428: bc1f        L_80055434
    if (!c1cs) {
        // 0x8005542C: nop
    
            goto L_80055434;
    }
    // 0x8005542C: nop

    // 0x80055430: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80055434:
    // 0x80055434: lw          $t7, 0xC8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XC8);
    // 0x80055438: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005543C: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80055440: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055444: lh          $t9, 0x8B8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8B8);
    // 0x80055448: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005544C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80055450: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80055454: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80055458: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005545C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80055460: mul.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80055464: sub.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80055468: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x8005546C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80055470: sub.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80055474: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80055478: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8005547C: jal         0x8007FA40
    // 0x80055480: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_7;
    // 0x80055480: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    after_7:
    // 0x80055484: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80055488: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8005548C: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x80055490: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80055494: jal         0x8001C5D0
    // 0x80055498: nop

    func_8001C5D0(rdram, ctx);
        goto after_8;
    // 0x80055498: nop

    after_8:
    // 0x8005549C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800554A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800554A4: jr          $ra
    // 0x800554A8: nop

    return;
    // 0x800554A8: nop

;}
RECOMP_FUNC void func_800554AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800554AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800554B0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x800554B4: lhu         $t6, 0x95C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X95C);
    // 0x800554B8: lhu         $t8, 0x13F0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X13F0);
    // 0x800554BC: andi        $t7, $t6, 0xEFFF
    ctx->r15 = ctx->r14 & 0XEFFF;
    // 0x800554C0: andi        $t9, $t8, 0xEFFF
    ctx->r25 = ctx->r24 & 0XEFFF;
    // 0x800554C4: sw          $zero, 0x918($v0)
    MEM_W(0X918, ctx->r2) = 0;
    // 0x800554C8: sw          $zero, 0x13AC($v0)
    MEM_W(0X13AC, ctx->r2) = 0;
    // 0x800554CC: sh          $t7, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r15;
    // 0x800554D0: sh          $t9, 0x13F0($v0)
    MEM_H(0X13F0, ctx->r2) = ctx->r25;
    // 0x800554D4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800554D8: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x800554DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800554E0: bne         $t0, $zero, L_800554FC
    if (ctx->r8 != 0) {
        // 0x800554E4: nop
    
            goto L_800554FC;
    }
    // 0x800554E4: nop

    // 0x800554E8: sw          $zero, 0x914($v0)
    MEM_W(0X914, ctx->r2) = 0;
    // 0x800554EC: sw          $zero, 0x13A8($v0)
    MEM_W(0X13A8, ctx->r2) = 0;
    // 0x800554F0: sw          $zero, 0xB2C($at)
    MEM_W(0XB2C, ctx->r1) = 0;
    // 0x800554F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800554F8: sh          $zero, 0x3630($at)
    MEM_H(0X3630, ctx->r1) = 0;
L_800554FC:
    // 0x800554FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80055500: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80055504: lhu         $t1, 0x6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X6);
    // 0x80055508: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    // 0x8005550C: andi        $t2, $t1, 0xBDF7
    ctx->r10 = ctx->r9 & 0XBDF7;
    // 0x80055510: sh          $t2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r10;
    // 0x80055514: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x80055518: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x8005551C: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x80055520: jr          $ra
    // 0x80055524: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    return;
    // 0x80055524: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
;}
