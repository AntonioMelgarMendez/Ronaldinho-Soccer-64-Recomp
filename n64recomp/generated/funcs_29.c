#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80064738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064738: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006473C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064744: bne         $t6, $zero, L_80064860
    if (ctx->r14 != 0) {
        // 0x80064748: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80064860;
    }
    // 0x80064748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006474C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064750: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80064754: nop

    // 0x80064758: lw          $t7, 0xA0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XA0);
    // 0x8006475C: nop

    // 0x80064760: bne         $a0, $t7, L_80064864
    if (ctx->r4 != ctx->r15) {
        // 0x80064764: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064864;
    }
    // 0x80064764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064768: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x8006476C: nop

    // 0x80064770: lh          $v1, 0x8B0($t8)
    ctx->r3 = MEM_H(ctx->r24, 0X8B0);
    // 0x80064774: nop

    // 0x80064778: blez        $v1, L_80064860
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8006477C: slti        $at, $v1, 0x158
        ctx->r1 = SIGNED(ctx->r3) < 0X158 ? 1 : 0;
            goto L_80064860;
    }
    // 0x8006477C: slti        $at, $v1, 0x158
    ctx->r1 = SIGNED(ctx->r3) < 0X158 ? 1 : 0;
    // 0x80064780: beq         $at, $zero, L_80064864
    if (ctx->r1 == 0) {
        // 0x80064784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064864;
    }
    // 0x80064784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064788: lw          $t9, 0x8C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8C);
    // 0x8006478C: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80064790: lwc1        $f4, 0x4C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4C);
    // 0x80064794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80064798: jal         0x80272AEC
    // 0x8006479C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x8006479C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x800647A0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800647A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800647A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800647AC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800647B0: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800647B4: bc1f        L_80064864
    if (!c1cs) {
        // 0x800647B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064864;
    }
    // 0x800647B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800647BC: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x800647C0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800647C4: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x800647C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800647CC: lwc1        $f10, 0x84($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X84);
    // 0x800647D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800647D4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800647D8: nop

    // 0x800647DC: bc1f        L_80064864
    if (!c1cs) {
        // 0x800647E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064864;
    }
    // 0x800647E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800647E4: lhu         $a0, 0xA14($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA14);
    // 0x800647E8: jal         0x8006445C
    // 0x800647EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x800647EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x800647F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800647F4: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x800647F8: bne         $at, $zero, L_80064860
    if (ctx->r1 != 0) {
        // 0x800647FC: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80064860;
    }
    // 0x800647FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80064800: lhu         $a0, 0x9EE($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9EE);
    // 0x80064804: jal         0x8006445C
    // 0x80064808: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80064808: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_2:
    // 0x8006480C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80064810: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x80064814: bne         $at, $zero, L_80064860
    if (ctx->r1 != 0) {
        // 0x80064818: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_80064860;
    }
    // 0x80064818: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x8006481C: lh          $t2, -0x1B60($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1B60);
    // 0x80064820: nop

    // 0x80064824: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80064828: beq         $t3, $zero, L_80064840
    if (ctx->r11 == 0) {
        // 0x8006482C: nop
    
            goto L_80064840;
    }
    // 0x8006482C: nop

    // 0x80064830: jal         0x800765A8
    // 0x80064834: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800765A8(rdram, ctx);
        goto after_3;
    // 0x80064834: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x80064838: b           L_80064848
    // 0x8006483C: nop

        goto L_80064848;
    // 0x8006483C: nop

L_80064840:
    // 0x80064840: jal         0x80076B3C
    // 0x80064844: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80076B3C(rdram, ctx);
        goto after_4;
    // 0x80064844: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
L_80064848:
    // 0x80064848: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8006484C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80064850: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x80064854: nop

    // 0x80064858: sh          $v0, 0x9E($v1)
    MEM_H(0X9E, ctx->r3) = ctx->r2;
    // 0x8006485C: sh          $v0, 0xC4($v1)
    MEM_H(0XC4, ctx->r3) = ctx->r2;
L_80064860:
    // 0x80064860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064864:
    // 0x80064864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80064868: jr          $ra
    // 0x8006486C: nop

    return;
    // 0x8006486C: nop

;}
RECOMP_FUNC void func_8006490C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006490C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064910: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064918: bne         $t6, $zero, L_80064994
    if (ctx->r14 != 0) {
        // 0x8006491C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80064994;
    }
    // 0x8006491C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064920: lh          $t7, 0xE6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE6);
    // 0x80064924: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80064928: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8006492C: beq         $t8, $zero, L_80064944
    if (ctx->r24 == 0) {
        // 0x80064930: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80064944;
    }
    // 0x80064930: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80064934: lhu         $t9, 0x98($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X98);
    // 0x80064938: nop

    // 0x8006493C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80064940: sh          $t0, 0x98($v1)
    MEM_H(0X98, ctx->r3) = ctx->r8;
L_80064944:
    // 0x80064944: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80064948: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x8006494C: lhu         $t1, 0x98($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X98);
    // 0x80064950: nop

    // 0x80064954: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80064958: bne         $at, $zero, L_80064998
    if (ctx->r1 != 0) {
        // 0x8006495C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064998;
    }
    // 0x8006495C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064960: lhu         $a0, 0x96($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X96);
    // 0x80064964: jal         0x8006445C
    // 0x80064968: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80064968: nop

    after_0:
    // 0x8006496C: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x80064970: bne         $at, $zero, L_80064998
    if (ctx->r1 != 0) {
        // 0x80064974: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064998;
    }
    // 0x80064974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064978: jal         0x80075CC8
    // 0x8006497C: nop

    func_80075CC8(rdram, ctx);
        goto after_1;
    // 0x8006497C: nop

    after_1:
    // 0x80064980: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80064984: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80064988: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x8006498C: nop

    // 0x80064990: sh          $t2, 0x96($v1)
    MEM_H(0X96, ctx->r3) = ctx->r10;
L_80064994:
    // 0x80064994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064998:
    // 0x80064998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006499C: jr          $ra
    // 0x800649A0: nop

    return;
    // 0x800649A0: nop

;}
RECOMP_FUNC void func_800649A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800649A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800649A8: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x800649AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800649B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800649B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800649B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800649BC: bne         $t7, $zero, L_80064A38
    if (ctx->r15 != 0) {
        // 0x800649C0: andi        $t6, $a1, 0xFFFF
        ctx->r14 = ctx->r5 & 0XFFFF;
            goto L_80064A38;
    }
    // 0x800649C0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x800649C4: andi        $t8, $t6, 0x20
    ctx->r24 = ctx->r14 & 0X20;
    // 0x800649C8: beq         $t8, $zero, L_80064A38
    if (ctx->r24 == 0) {
        // 0x800649CC: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80064A38;
    }
    // 0x800649CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800649D0: lhu         $a0, 0x9E4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9E4);
    // 0x800649D4: jal         0x8006445C
    // 0x800649D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x800649D8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800649DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800649E0: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x800649E4: bne         $at, $zero, L_80064A3C
    if (ctx->r1 != 0) {
        // 0x800649E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064A3C;
    }
    // 0x800649E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800649EC: lw          $v0, 0xD8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD8);
    // 0x800649F0: nop

    // 0x800649F4: lbu         $t9, 0x28($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X28);
    // 0x800649F8: nop

    // 0x800649FC: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80064A00: bne         $at, $zero, L_80064A1C
    if (ctx->r1 != 0) {
        // 0x80064A04: nop
    
            goto L_80064A1C;
    }
    // 0x80064A04: nop

    // 0x80064A08: lbu         $t0, 0x1A($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1A);
    // 0x80064A0C: nop

    // 0x80064A10: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80064A14: beq         $at, $zero, L_80064A3C
    if (ctx->r1 == 0) {
        // 0x80064A18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064A3C;
    }
    // 0x80064A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064A1C:
    // 0x80064A1C: jal         0x80077DEC
    // 0x80064A20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80077DEC(rdram, ctx);
        goto after_1;
    // 0x80064A20: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80064A24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80064A28: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80064A2C: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x80064A30: nop

    // 0x80064A34: sh          $t1, 0x94($v0)
    MEM_H(0X94, ctx->r2) = ctx->r9;
L_80064A38:
    // 0x80064A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064A3C:
    // 0x80064A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80064A40: jr          $ra
    // 0x80064A44: nop

    return;
    // 0x80064A44: nop

;}
RECOMP_FUNC void func_80064A48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064A48: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064A4C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064A58: bne         $t6, $zero, L_80064AE4
    if (ctx->r14 != 0) {
        // 0x80064A5C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80064AE4;
    }
    // 0x80064A5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80064A60: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80064A64: lhu         $a0, 0x9E2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9E2);
    // 0x80064A68: jal         0x8006445C
    // 0x80064A6C: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80064A6C: nop

    after_0:
    // 0x80064A70: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x80064A74: bne         $at, $zero, L_80064AE8
    if (ctx->r1 != 0) {
        // 0x80064A78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064AE8;
    }
    // 0x80064A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064A7C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80064A80: nop

    // 0x80064A84: lwc1        $f12, 0x4C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80064A88: jal         0x80272AEC
    // 0x80064A8C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80064A8C: nop

    after_1:
    // 0x80064A90: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80064A94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80064A98: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80064A9C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80064AA0: nop

    // 0x80064AA4: bc1f        L_80064AE8
    if (!c1cs) {
        // 0x80064AA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064AE8;
    }
    // 0x80064AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064AAC: lw          $t9, 0xD8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XD8);
    // 0x80064AB0: lui         $at, 0xF4
    ctx->r1 = S32(0XF4 << 16);
    // 0x80064AB4: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x80064AB8: ori         $at, $at, 0x2400
    ctx->r1 = ctx->r1 | 0X2400;
    // 0x80064ABC: sltu        $at, $t0, $at
    ctx->r1 = ctx->r8 < ctx->r1 ? 1 : 0;
    // 0x80064AC0: beq         $at, $zero, L_80064AE8
    if (ctx->r1 == 0) {
        // 0x80064AC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064AE8;
    }
    // 0x80064AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064AC8: jal         0x80077D14
    // 0x80064ACC: nop

    func_80077D14(rdram, ctx);
        goto after_2;
    // 0x80064ACC: nop

    after_2:
    // 0x80064AD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80064AD4: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80064AD8: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x80064ADC: nop

    // 0x80064AE0: sh          $t1, 0x92($v0)
    MEM_H(0X92, ctx->r2) = ctx->r9;
L_80064AE4:
    // 0x80064AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064AE8:
    // 0x80064AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80064AEC: jr          $ra
    // 0x80064AF0: nop

    return;
    // 0x80064AF0: nop

;}
RECOMP_FUNC void func_80064AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064AF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064AF8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064AFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80064B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80064B04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064B08: bne         $t6, $zero, L_80064C28
    if (ctx->r14 != 0) {
        // 0x80064B0C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80064C28;
    }
    // 0x80064B0C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80064B10: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80064B14: nop

    // 0x80064B18: lh          $v0, 0x8B0($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X8B0);
    // 0x80064B1C: nop

    // 0x80064B20: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x80064B24: beq         $at, $zero, L_80064C28
    if (ctx->r1 == 0) {
        // 0x80064B28: slti        $at, $v0, -0xC8
        ctx->r1 = SIGNED(ctx->r2) < -0XC8 ? 1 : 0;
            goto L_80064C28;
    }
    // 0x80064B28: slti        $at, $v0, -0xC8
    ctx->r1 = SIGNED(ctx->r2) < -0XC8 ? 1 : 0;
    // 0x80064B2C: bne         $at, $zero, L_80064C28
    if (ctx->r1 != 0) {
        // 0x80064B30: lui         $s0, 0x8012
        ctx->r16 = S32(0X8012 << 16);
            goto L_80064C28;
    }
    // 0x80064B30: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80064B34: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80064B38: lhu         $a0, 0xA2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA2);
    // 0x80064B3C: jal         0x8006445C
    // 0x80064B40: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80064B40: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80064B44: lhu         $a0, 0xA2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA2);
    // 0x80064B48: jal         0x8006445C
    // 0x80064B4C: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80064B4C: nop

    after_1:
    // 0x80064B50: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80064B54: sltiu       $at, $v0, 0x709
    ctx->r1 = ctx->r2 < 0X709 ? 1 : 0;
    // 0x80064B58: bne         $at, $zero, L_80064B94
    if (ctx->r1 != 0) {
        // 0x80064B5C: nop
    
            goto L_80064B94;
    }
    // 0x80064B5C: nop

    // 0x80064B60: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x80064B64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80064B68: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80064B6C: nop

    // 0x80064B70: bne         $t9, $at, L_80064B94
    if (ctx->r25 != ctx->r1) {
        // 0x80064B74: nop
    
            goto L_80064B94;
    }
    // 0x80064B74: nop

    // 0x80064B78: jal         0x80079E00
    // 0x80064B7C: nop

    func_80079E00(rdram, ctx);
        goto after_2;
    // 0x80064B7C: nop

    after_2:
    // 0x80064B80: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80064B84: nop

    // 0x80064B88: sh          $v0, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = ctx->r2;
    // 0x80064B8C: b           L_80064C28
    // 0x80064B90: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
        goto L_80064C28;
    // 0x80064B90: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
L_80064B94:
    // 0x80064B94: lhu         $a0, 0x90($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X90);
    // 0x80064B98: jal         0x8006445C
    // 0x80064B9C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_3;
    // 0x80064B9C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_3:
    // 0x80064BA0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80064BA4: sltiu       $at, $v0, 0x385
    ctx->r1 = ctx->r2 < 0X385 ? 1 : 0;
    // 0x80064BA8: bne         $at, $zero, L_80064C2C
    if (ctx->r1 != 0) {
        // 0x80064BAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064C2C;
    }
    // 0x80064BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064BB0: lw          $v0, 0xD8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XD8);
    // 0x80064BB4: nop

    // 0x80064BB8: lbu         $t0, 0x28($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X28);
    // 0x80064BBC: nop

    // 0x80064BC0: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80064BC4: bne         $at, $zero, L_80064C2C
    if (ctx->r1 != 0) {
        // 0x80064BC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064C2C;
    }
    // 0x80064BC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064BCC: lbu         $t1, 0x1A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1A);
    // 0x80064BD0: nop

    // 0x80064BD4: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x80064BD8: bne         $at, $zero, L_80064C2C
    if (ctx->r1 != 0) {
        // 0x80064BDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064C2C;
    }
    // 0x80064BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064BE0: lw          $t2, 0x74($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X74);
    // 0x80064BE4: nop

    // 0x80064BE8: sltiu       $at, $t2, 0x3D
    ctx->r1 = ctx->r10 < 0X3D ? 1 : 0;
    // 0x80064BEC: bne         $at, $zero, L_80064C28
    if (ctx->r1 != 0) {
        // 0x80064BF0: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80064C28;
    }
    // 0x80064BF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064BF4: lwc1        $f6, 0x50($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X50);
    // 0x80064BF8: lwc1        $f5, -0x6220($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6220);
    // 0x80064BFC: lwc1        $f4, -0x621C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X621C);
    // 0x80064C00: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80064C04: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80064C08: nop

    // 0x80064C0C: bc1f        L_80064C2C
    if (!c1cs) {
        // 0x80064C10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064C2C;
    }
    // 0x80064C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064C14: jal         0x80077CE8
    // 0x80064C18: nop

    func_80077CE8(rdram, ctx);
        goto after_4;
    // 0x80064C18: nop

    after_4:
    // 0x80064C1C: lhu         $t3, 0x4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X4);
    // 0x80064C20: nop

    // 0x80064C24: sh          $t3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r11;
L_80064C28:
    // 0x80064C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80064C2C:
    // 0x80064C2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80064C30: jr          $ra
    // 0x80064C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80064C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80064C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064C38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80064C3C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80064C40: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80064C44: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80064C48: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80064C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80064C50: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80064C54: lhu         $t6, 0xC2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC2);
    // 0x80064C58: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80064C5C: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x80064C60: bne         $t7, $zero, L_80064DCC
    if (ctx->r15 != 0) {
        // 0x80064C64: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80064DCC;
    }
    // 0x80064C64: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80064C68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80064C6C: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80064C70: nop

    // 0x80064C74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80064C78: nop

    // 0x80064C7C: bc1t        L_80064DD0
    if (c1cs) {
        // 0x80064C80: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064DD0;
    }
    // 0x80064C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064C84: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80064C88: jal         0x80272AEC
    // 0x80064C8C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80064C8C: nop

    after_0:
    // 0x80064C90: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80064C94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80064C98: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80064C9C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80064CA0: nop

    // 0x80064CA4: bc1t        L_80064DD0
    if (c1cs) {
        // 0x80064CA8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064DD0;
    }
    // 0x80064CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064CAC: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80064CB0: nop

    // 0x80064CB4: bne         $t8, $zero, L_80064DD0
    if (ctx->r24 != 0) {
        // 0x80064CB8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064DD0;
    }
    // 0x80064CB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064CBC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80064CC0: lw          $t2, 0xC8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC8);
    // 0x80064CC4: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x80064CC8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80064CCC: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x80064CD0: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80064CD4: beq         $t1, $t2, L_80064DD0
    if (ctx->r9 == ctx->r10) {
        // 0x80064CD8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80064DD0;
    }
    // 0x80064CD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064CDC: lhu         $a0, 0x80($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X80);
    // 0x80064CE0: jal         0x8006445C
    // 0x80064CE4: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80064CE4: nop

    after_1:
    // 0x80064CE8: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x80064CEC: beq         $at, $zero, L_80064DB0
    if (ctx->r1 == 0) {
        // 0x80064CF0: nop
    
            goto L_80064DB0;
    }
    // 0x80064CF0: nop

    // 0x80064CF4: lhu         $a0, 0x8A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8A);
    // 0x80064CF8: jal         0x8006445C
    // 0x80064CFC: nop

    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80064CFC: nop

    after_2:
    // 0x80064D00: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x80064D04: bne         $at, $zero, L_80064D9C
    if (ctx->r1 != 0) {
        // 0x80064D08: nop
    
            goto L_80064D9C;
    }
    // 0x80064D08: nop

    // 0x80064D0C: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x80064D10: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80064D14: bne         $s1, $t3, L_80064D4C
    if (ctx->r17 != ctx->r11) {
        // 0x80064D18: nop
    
            goto L_80064D4C;
    }
    // 0x80064D18: nop

    // 0x80064D1C: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x80064D20: nop

    // 0x80064D24: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80064D28: beq         $t5, $zero, L_80064D38
    if (ctx->r13 == 0) {
        // 0x80064D2C: nop
    
            goto L_80064D38;
    }
    // 0x80064D2C: nop

    // 0x80064D30: jal         0x800771A8
    // 0x80064D34: nop

    func_800771A8(rdram, ctx);
        goto after_3;
    // 0x80064D34: nop

    after_3:
L_80064D38:
    // 0x80064D38: jal         0x8007717C
    // 0x80064D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007717C(rdram, ctx);
        goto after_4;
    // 0x80064D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80064D40: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
    // 0x80064D44: b           L_80064D9C
    // 0x80064D48: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
        goto L_80064D9C;
    // 0x80064D48: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
L_80064D4C:
    // 0x80064D4C: lw          $t8, 0xC8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC8);
    // 0x80064D50: lbu         $t7, 0x7F($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X7F);
    // 0x80064D54: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x80064D58: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80064D5C: bne         $t7, $t9, L_80064D9C
    if (ctx->r15 != ctx->r25) {
        // 0x80064D60: nop
    
            goto L_80064D9C;
    }
    // 0x80064D60: nop

    // 0x80064D64: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x80064D68: nop

    // 0x80064D6C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80064D70: beq         $t1, $zero, L_80064D88
    if (ctx->r9 == 0) {
        // 0x80064D74: nop
    
            goto L_80064D88;
    }
    // 0x80064D74: nop

    // 0x80064D78: jal         0x800771A8
    // 0x80064D7C: nop

    func_800771A8(rdram, ctx);
        goto after_5;
    // 0x80064D7C: nop

    after_5:
    // 0x80064D80: b           L_80064D94
    // 0x80064D84: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
        goto L_80064D94;
    // 0x80064D84: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
L_80064D88:
    // 0x80064D88: jal         0x80076020
    // 0x80064D8C: nop

    func_80076020(rdram, ctx);
        goto after_6;
    // 0x80064D8C: nop

    after_6:
    // 0x80064D90: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
L_80064D94:
    // 0x80064D94: nop

    // 0x80064D98: sh          $t2, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r10;
L_80064D9C:
    // 0x80064D9C: lw          $t3, 0xC8($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC8);
    // 0x80064DA0: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80064DA4: lhu         $v1, 0x6($t3)
    ctx->r3 = MEM_HU(ctx->r11, 0X6);
    // 0x80064DA8: b           L_80064DC4
    // 0x80064DAC: sb          $v1, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = ctx->r3;
        goto L_80064DC4;
    // 0x80064DAC: sb          $v1, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = ctx->r3;
L_80064DB0:
    // 0x80064DB0: lw          $t4, 0xC8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC8);
    // 0x80064DB4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80064DB8: lhu         $v1, 0x6($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0X6);
    // 0x80064DBC: nop

    // 0x80064DC0: sb          $v1, 0x7F($s0)
    MEM_B(0X7F, ctx->r16) = ctx->r3;
L_80064DC4:
    // 0x80064DC4: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x80064DC8: sw          $s1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r17;
L_80064DCC:
    // 0x80064DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80064DD0:
    // 0x80064DD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80064DD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80064DD8: jr          $ra
    // 0x80064DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80064DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80064DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064DE0: jr          $ra
    // 0x80064DE4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80064DE4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80064DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064DE8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064DEC: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064DF8: bne         $t6, $zero, L_80064E3C
    if (ctx->r14 != 0) {
        // 0x80064DFC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80064E3C;
    }
    // 0x80064DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80064E00: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80064E04: lhu         $a0, 0x9CA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9CA);
    // 0x80064E08: jal         0x8006445C
    // 0x80064E0C: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80064E0C: nop

    after_0:
    // 0x80064E10: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x80064E14: bne         $at, $zero, L_80064E40
    if (ctx->r1 != 0) {
        // 0x80064E18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80064E40;
    }
    // 0x80064E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80064E20: jal         0x800771F8
    // 0x80064E24: nop

    func_800771F8(rdram, ctx);
        goto after_1;
    // 0x80064E24: nop

    after_1:
    // 0x80064E28: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80064E2C: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80064E30: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80064E34: nop

    // 0x80064E38: sh          $t7, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r15;
L_80064E3C:
    // 0x80064E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80064E40:
    // 0x80064E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80064E44: jr          $ra
    // 0x80064E48: nop

    return;
    // 0x80064E48: nop

;}
RECOMP_FUNC void func_80064E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064E4C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064E50: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064E54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80064E58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80064E5C: bne         $t6, $zero, L_80065150
    if (ctx->r14 != 0) {
        // 0x80064E60: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80065150;
    }
    // 0x80064E60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064E64: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80064E68: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80064E6C: lhu         $t7, 0x6($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X6);
    // 0x80064E70: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80064E74: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x80064E78: beq         $t8, $zero, L_80064FDC
    if (ctx->r24 == 0) {
        // 0x80064E7C: nop
    
            goto L_80064FDC;
    }
    // 0x80064E7C: nop

    // 0x80064E80: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80064E84: nop

    // 0x80064E88: lwc1        $f12, 0x8($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80064E8C: jal         0x80272AEC
    // 0x80064E90: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80064E90: nop

    after_0:
    // 0x80064E94: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x80064E98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80064E9C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80064EA0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80064EA4: nop

    // 0x80064EA8: bc1f        L_80064FDC
    if (!c1cs) {
        // 0x80064EAC: nop
    
            goto L_80064FDC;
    }
    // 0x80064EAC: nop

    // 0x80064EB0: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80064EB4: lbu         $t0, 0x3($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3);
    // 0x80064EB8: lw          $t2, 0x8C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8C);
    // 0x80064EBC: nop

    // 0x80064EC0: lw          $t3, 0xC8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC8);
    // 0x80064EC4: nop

    // 0x80064EC8: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x80064ECC: nop

    // 0x80064ED0: beq         $t0, $t4, L_80064FCC
    if (ctx->r8 == ctx->r12) {
        // 0x80064ED4: nop
    
            goto L_80064FCC;
    }
    // 0x80064ED4: nop

    // 0x80064ED8: lhu         $a0, 0xA4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA4);
    // 0x80064EDC: jal         0x8006445C
    // 0x80064EE0: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80064EE0: nop

    after_1:
    // 0x80064EE4: sltiu       $at, $v0, 0x12C
    ctx->r1 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80064EE8: beq         $at, $zero, L_80064FCC
    if (ctx->r1 == 0) {
        // 0x80064EEC: nop
    
            goto L_80064FCC;
    }
    // 0x80064EEC: nop

    // 0x80064EF0: lhu         $a0, 0xA6($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA6);
    // 0x80064EF4: jal         0x8006445C
    // 0x80064EF8: nop

    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80064EF8: nop

    after_2:
    // 0x80064EFC: sltiu       $at, $v0, 0x385
    ctx->r1 = ctx->r2 < 0X385 ? 1 : 0;
    // 0x80064F00: bne         $at, $zero, L_80064FBC
    if (ctx->r1 != 0) {
        // 0x80064F04: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80064FBC;
    }
    // 0x80064F04: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064F08: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80064F0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064F10: lhu         $t5, 0xBE($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XBE);
    // 0x80064F14: nop

    // 0x80064F18: bne         $t5, $at, L_80064FBC
    if (ctx->r13 != ctx->r1) {
        // 0x80064F1C: nop
    
            goto L_80064FBC;
    }
    // 0x80064F1C: nop

    // 0x80064F20: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x80064F24: nop

    // 0x80064F28: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x80064F2C: bne         $at, $zero, L_80064FBC
    if (ctx->r1 != 0) {
        // 0x80064F30: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80064FBC;
    }
    // 0x80064F30: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80064F34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80064F38: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80064F3C: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80064F40: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80064F44: nop

    // 0x80064F48: bc1f        L_80064FBC
    if (!c1cs) {
        // 0x80064F4C: nop
    
            goto L_80064FBC;
    }
    // 0x80064F4C: nop

    // 0x80064F50: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x80064F54: nop

    // 0x80064F58: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80064F5C: beq         $t8, $zero, L_80064F74
    if (ctx->r24 == 0) {
        // 0x80064F60: nop
    
            goto L_80064F74;
    }
    // 0x80064F60: nop

    // 0x80064F64: jal         0x800780E4
    // 0x80064F68: nop

    func_800780E4(rdram, ctx);
        goto after_3;
    // 0x80064F68: nop

    after_3:
    // 0x80064F6C: b           L_80064FB4
    // 0x80064F70: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
        goto L_80064FB4;
    // 0x80064F70: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
L_80064F74:
    // 0x80064F74: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x80064F78: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80064F7C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80064F80: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80064F84: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80064F88: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80064F8C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80064F90: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80064F94: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80064F98: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80064F9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80064FA0: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x80064FA4: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    // 0x80064FA8: jal         0x800780B0
    // 0x80064FAC: nop

    func_800780B0(rdram, ctx);
        goto after_4;
    // 0x80064FAC: nop

    after_4:
    // 0x80064FB0: lhu         $t2, 0x4($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X4);
L_80064FB4:
    // 0x80064FB4: nop

    // 0x80064FB8: sh          $t2, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r10;
L_80064FBC:
    // 0x80064FBC: lhu         $t3, 0x6($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X6);
    // 0x80064FC0: nop

    // 0x80064FC4: andi        $t0, $t3, 0xF7FF
    ctx->r8 = ctx->r11 & 0XF7FF;
    // 0x80064FC8: sh          $t0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r8;
L_80064FCC:
    // 0x80064FCC: lhu         $t4, 0x6($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X6);
    // 0x80064FD0: nop

    // 0x80064FD4: andi        $t5, $t4, 0xDFFF
    ctx->r13 = ctx->r12 & 0XDFFF;
    // 0x80064FD8: sh          $t5, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r13;
L_80064FDC:
    // 0x80064FDC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80064FE0: nop

    // 0x80064FE4: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x80064FE8: beq         $t6, $zero, L_80065150
    if (ctx->r14 == 0) {
        // 0x80064FEC: andi        $t7, $v0, 0x2000
        ctx->r15 = ctx->r2 & 0X2000;
            goto L_80065150;
    }
    // 0x80064FEC: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x80064FF0: bne         $t7, $zero, L_80065154
    if (ctx->r15 != 0) {
        // 0x80064FF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80065154;
    }
    // 0x80064FF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064FF8: lhu         $a0, 0x7C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7C);
    // 0x80064FFC: jal         0x8006445C
    // 0x80065000: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x80065000: nop

    after_5:
    // 0x80065004: lbu         $v1, 0x7E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7E);
    // 0x80065008: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8006500C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80065010: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80065014: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80065018: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x8006501C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80065020: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x80065024: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80065028: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x8006502C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80065030: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80065034: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x80065038: lw          $a1, -0x2CCC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2CCC);
    // 0x8006503C: slti        $at, $t9, 0x3D
    ctx->r1 = SIGNED(ctx->r25) < 0X3D ? 1 : 0;
    // 0x80065040: bne         $at, $zero, L_80065118
    if (ctx->r1 != 0) {
        // 0x80065044: sh          $v0, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r2;
            goto L_80065118;
    }
    // 0x80065044: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80065048: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8006504C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80065050: lwc1        $f16, 0x8BC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8BC);
    // 0x80065054: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80065058: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8006505C: nop

    // 0x80065060: bc1f        L_8006511C
    if (!c1cs) {
        // 0x80065064: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8006511C;
    }
    // 0x80065064: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80065068: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006506C: nop

    // 0x80065070: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x80065074: nop

    // 0x80065078: lw          $t1, 0xC8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC8);
    // 0x8006507C: nop

    // 0x80065080: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x80065084: nop

    // 0x80065088: beq         $v1, $t2, L_8006511C
    if (ctx->r3 == ctx->r10) {
        // 0x8006508C: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8006511C;
    }
    // 0x8006508C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80065090: lhu         $t3, 0xBE($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XBE);
    // 0x80065094: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065098: bne         $t3, $at, L_8006511C
    if (ctx->r11 != ctx->r1) {
        // 0x8006509C: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8006511C;
    }
    // 0x8006509C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800650A0: lhu         $t0, 0x6A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6A);
    // 0x800650A4: nop

    // 0x800650A8: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x800650AC: bne         $at, $zero, L_80065118
    if (ctx->r1 != 0) {
        // 0x800650B0: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80065118;
    }
    // 0x800650B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800650B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800650B8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800650BC: nop

    // 0x800650C0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800650C4: nop

    // 0x800650C8: bc1f        L_8006511C
    if (!c1cs) {
        // 0x800650CC: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8006511C;
    }
    // 0x800650CC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800650D0: lhu         $t4, 0x8($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X8);
    // 0x800650D4: nop

    // 0x800650D8: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x800650DC: beq         $t5, $zero, L_800650F8
    if (ctx->r13 == 0) {
        // 0x800650E0: nop
    
            goto L_800650F8;
    }
    // 0x800650E0: nop

    // 0x800650E4: jal         0x80077F5C
    // 0x800650E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80077F5C(rdram, ctx);
        goto after_6;
    // 0x800650E8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_6:
    // 0x800650EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800650F0: b           L_8006510C
    // 0x800650F4: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
        goto L_8006510C;
    // 0x800650F4: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
L_800650F8:
    // 0x800650F8: jal         0x80077FA4
    // 0x800650FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80077FA4(rdram, ctx);
        goto after_7;
    // 0x800650FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_7:
    // 0x80065100: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80065104: nop

    // 0x80065108: lhu         $t6, 0x6($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X6);
L_8006510C:
    // 0x8006510C: nop

    // 0x80065110: andi        $t7, $t6, 0xF7FF
    ctx->r15 = ctx->r14 & 0XF7FF;
    // 0x80065114: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
L_80065118:
    // 0x80065118: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_8006511C:
    // 0x8006511C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80065120: lwc1        $f8, 0x8BC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8BC);
    // 0x80065124: lhu         $t8, 0x22($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X22);
    // 0x80065128: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8006512C: slti        $at, $t8, 0xF1
    ctx->r1 = SIGNED(ctx->r24) < 0XF1 ? 1 : 0;
    // 0x80065130: bc1t        L_80065140
    if (c1cs) {
        // 0x80065134: nop
    
            goto L_80065140;
    }
    // 0x80065134: nop

    // 0x80065138: bne         $at, $zero, L_80065154
    if (ctx->r1 != 0) {
        // 0x8006513C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80065154;
    }
    // 0x8006513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80065140:
    // 0x80065140: lhu         $t9, 0x6($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X6);
    // 0x80065144: nop

    // 0x80065148: andi        $t1, $t9, 0xF7FF
    ctx->r9 = ctx->r25 & 0XF7FF;
    // 0x8006514C: sh          $t1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r9;
L_80065150:
    // 0x80065150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80065154:
    // 0x80065154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065158: jr          $ra
    // 0x8006515C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006515C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065160: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065164: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006516C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065170: bne         $t6, $zero, L_80065244
    if (ctx->r14 != 0) {
        // 0x80065174: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80065244;
    }
    // 0x80065174: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80065178: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8006517C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80065180: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    // 0x80065184: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80065188: lhu         $t8, 0x10($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X10);
    // 0x8006518C: nop

    // 0x80065190: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80065194: beq         $t9, $zero, L_800651C8
    if (ctx->r25 == 0) {
        // 0x80065198: addiu       $a1, $a0, 0x318
        ctx->r5 = ADD32(ctx->r4, 0X318);
            goto L_800651C8;
    }
    // 0x80065198: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    // 0x8006519C: lhu         $t1, 0x6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X6);
    // 0x800651A0: lhu         $t0, 0x4($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X4);
    // 0x800651A4: ori         $t2, $t1, 0x800
    ctx->r10 = ctx->r9 | 0X800;
    // 0x800651A8: sh          $t2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r10;
    // 0x800651AC: sh          $t0, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r8;
    // 0x800651B0: lw          $t3, 0xC8($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC8);
    // 0x800651B4: nop

    // 0x800651B8: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x800651BC: b           L_80065244
    // 0x800651C0: sb          $t4, 0x7E($v0)
    MEM_B(0X7E, ctx->r2) = ctx->r12;
        goto L_80065244;
    // 0x800651C0: sb          $t4, 0x7E($v0)
    MEM_B(0X7E, ctx->r2) = ctx->r12;
    // 0x800651C4: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
L_800651C8:
    // 0x800651C8: jal         0x802636CC
    // 0x800651CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802636CC)(rdram, ctx);
        goto after_0;
    // 0x800651CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x800651D0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800651D4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800651D8: lw          $t5, 0xC8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0XC8);
    // 0x800651DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800651E0: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x800651E4: nop

    // 0x800651E8: lwc1        $f4, 0x8BC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x800651EC: nop

    // 0x800651F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800651F4: nop

    // 0x800651F8: bc1f        L_80065244
    if (!c1cs) {
        // 0x800651FC: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80065244;
    }
    // 0x800651FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80065200: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80065204: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x80065208: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006520C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80065210: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80065214: bc1f        L_80065248
    if (!c1cs) {
        // 0x80065218: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80065248;
    }
    // 0x80065218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006521C: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x80065220: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80065224: ori         $t9, $t8, 0x800
    ctx->r25 = ctx->r24 | 0X800;
    // 0x80065228: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x8006522C: sh          $t7, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r15;
    // 0x80065230: lw          $t0, 0xC8($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XC8);
    // 0x80065234: nop

    // 0x80065238: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x8006523C: nop

    // 0x80065240: sb          $t1, 0x7E($v0)
    MEM_B(0X7E, ctx->r2) = ctx->r9;
L_80065244:
    // 0x80065244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80065248:
    // 0x80065248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006524C: jr          $ra
    // 0x80065250: nop

    return;
    // 0x80065250: nop

;}
RECOMP_FUNC void func_80065254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065254: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80065258: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8006525C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065260: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80065264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065268: beq         $v0, $at, L_8006527C
    if (ctx->r2 == ctx->r1) {
        // 0x8006526C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8006527C;
    }
    // 0x8006526C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80065270: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80065274: bne         $v0, $at, L_800652EC
    if (ctx->r2 != ctx->r1) {
        // 0x80065278: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800652EC;
    }
    // 0x80065278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006527C:
    // 0x8006527C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80065280: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80065284: lw          $v0, 0x24($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X24);
    // 0x80065288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006528C: lwc1        $f4, 0x8BC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x80065290: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80065294: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80065298: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006529C: bc1f        L_800652EC
    if (!c1cs) {
        // 0x800652A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800652EC;
    }
    // 0x800652A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800652A4: lwc1        $f17, -0x6218($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6218);
    // 0x800652A8: lwc1        $f16, -0x6214($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6214);
    // 0x800652AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800652B0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800652B4: lwc1        $f14, 0x8C0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8C0);
    // 0x800652B8: jal         0x80279308
    // 0x800652BC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x800652BC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x800652C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800652C4: lwc1        $f7, -0x6210($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6210);
    // 0x800652C8: lwc1        $f6, -0x620C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X620C);
    // 0x800652CC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800652D0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x800652D4: nop

    // 0x800652D8: bc1f        L_800652EC
    if (!c1cs) {
        // 0x800652DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800652EC;
    }
    // 0x800652DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800652E0: jal         0x80078F08
    // 0x800652E4: nop

    func_80078F08(rdram, ctx);
        goto after_1;
    // 0x800652E4: nop

    after_1:
    // 0x800652E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800652EC:
    // 0x800652EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800652F0: jr          $ra
    // 0x800652F4: nop

    return;
    // 0x800652F4: nop

;}
RECOMP_FUNC void func_800652F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800652F8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800652FC: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065308: bne         $t6, $zero, L_8006539C
    if (ctx->r14 != 0) {
        // 0x8006530C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8006539C;
    }
    // 0x8006530C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80065310: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80065314: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80065318: nop

    // 0x8006531C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80065320: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80065324: jal         0x80272058
    // 0x80065328: nop

    LOOKUP_FUNC(0x80272058)(rdram, ctx);
        goto after_0;
    // 0x80065328: nop

    after_0:
    // 0x8006532C: bne         $v0, $zero, L_8006539C
    if (ctx->r2 != 0) {
        // 0x80065330: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8006539C;
    }
    // 0x80065330: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065334: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80065338: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x8006533C: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80065340: lhu         $t9, 0x4C($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X4C);
    // 0x80065344: lhu         $v0, 0x6($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X6);
    // 0x80065348: nop

    // 0x8006534C: bne         $t9, $v0, L_8006538C
    if (ctx->r25 != ctx->r2) {
        // 0x80065350: nop
    
            goto L_8006538C;
    }
    // 0x80065350: nop

    // 0x80065354: lhu         $a0, 0x4E($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X4E);
    // 0x80065358: jal         0x8006445C
    // 0x8006535C: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x8006535C: nop

    after_1:
    // 0x80065360: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065364: sltiu       $at, $v0, 0x12C
    ctx->r1 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80065368: beq         $at, $zero, L_80065384
    if (ctx->r1 == 0) {
        // 0x8006536C: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80065384;
    }
    // 0x8006536C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065370: lhu         $t0, 0x50($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X50);
    // 0x80065374: nop

    // 0x80065378: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006537C: b           L_8006539C
    // 0x80065380: sh          $t1, 0x50($v1)
    MEM_H(0X50, ctx->r3) = ctx->r9;
        goto L_8006539C;
    // 0x80065380: sh          $t1, 0x50($v1)
    MEM_H(0X50, ctx->r3) = ctx->r9;
L_80065384:
    // 0x80065384: b           L_8006539C
    // 0x80065388: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
        goto L_8006539C;
    // 0x80065388: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
L_8006538C:
    // 0x8006538C: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x80065390: sh          $v0, 0x4C($v1)
    MEM_H(0X4C, ctx->r3) = ctx->r2;
    // 0x80065394: sh          $zero, 0x50($v1)
    MEM_H(0X50, ctx->r3) = 0;
    // 0x80065398: sh          $t2, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r10;
L_8006539C:
    // 0x8006539C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800653A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800653A4: jr          $ra
    // 0x800653A8: nop

    return;
    // 0x800653A8: nop

;}
RECOMP_FUNC void func_800653AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800653AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800653B0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x800653B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800653B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800653BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800653C0: bne         $t6, $zero, L_800656D4
    if (ctx->r14 != 0) {
        // 0x800653C4: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800656D4;
    }
    // 0x800653C4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800653C8: jal         0x800652F8
    // 0x800653CC: nop

    func_800652F8(rdram, ctx);
        goto after_0;
    // 0x800653CC: nop

    after_0:
    // 0x800653D0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800653D4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800653D8: lw          $v0, 0xC8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC8);
    // 0x800653DC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800653E0: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x800653E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800653E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800653EC: lwc1        $f4, 0x31C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X31C);
    // 0x800653F0: nop

    // 0x800653F4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800653F8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800653FC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80065400: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80065404: lh          $t1, 0x8B0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8B0);
    // 0x80065408: nop

    // 0x8006540C: slti        $at, $t1, -0x158
    ctx->r1 = SIGNED(ctx->r9) < -0X158 ? 1 : 0;
    // 0x80065410: beq         $at, $zero, L_800656D8
    if (ctx->r1 == 0) {
        // 0x80065414: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800656D8;
    }
    // 0x80065414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065418: lhu         $t2, 0xE($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE);
    // 0x8006541C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065420: bne         $t2, $at, L_800656D4
    if (ctx->r10 != ctx->r1) {
        // 0x80065424: slti        $at, $t0, 0x50
        ctx->r1 = SIGNED(ctx->r8) < 0X50 ? 1 : 0;
            goto L_800656D4;
    }
    // 0x80065424: slti        $at, $t0, 0x50
    ctx->r1 = SIGNED(ctx->r8) < 0X50 ? 1 : 0;
    // 0x80065428: beq         $at, $zero, L_800656D4
    if (ctx->r1 == 0) {
        // 0x8006542C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_800656D4;
    }
    // 0x8006542C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065430: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065434: lhu         $t4, 0x34($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X34);
    // 0x80065438: lhu         $t5, 0x6($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X6);
    // 0x8006543C: nop

    // 0x80065440: bne         $t4, $t5, L_800654B8
    if (ctx->r12 != ctx->r13) {
        // 0x80065444: nop
    
            goto L_800654B8;
    }
    // 0x80065444: nop

    // 0x80065448: lhu         $a0, 0x36($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X36);
    // 0x8006544C: jal         0x8006445C
    // 0x80065450: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80065450: nop

    after_1:
    // 0x80065454: sltiu       $at, $v0, 0x1C2
    ctx->r1 = ctx->r2 < 0X1C2 ? 1 : 0;
    // 0x80065458: beq         $at, $zero, L_800654B8
    if (ctx->r1 == 0) {
        // 0x8006545C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_800654B8;
    }
    // 0x8006545C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065460: lhu         $a0, 0xA08($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA08);
    // 0x80065464: jal         0x8006445C
    // 0x80065468: nop

    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80065468: nop

    after_2:
    // 0x8006546C: sltiu       $at, $v0, 0x259
    ctx->r1 = ctx->r2 < 0X259 ? 1 : 0;
    // 0x80065470: bne         $at, $zero, L_800654B8
    if (ctx->r1 != 0) {
        // 0x80065474: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_800654B8;
    }
    // 0x80065474: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80065478: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8006547C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80065480: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80065484: beq         $t7, $zero, L_8006549C
    if (ctx->r15 == 0) {
        // 0x80065488: nop
    
            goto L_8006549C;
    }
    // 0x80065488: nop

    // 0x8006548C: jal         0x800768E8
    // 0x80065490: nop

    func_800768E8(rdram, ctx);
        goto after_3;
    // 0x80065490: nop

    after_3:
    // 0x80065494: b           L_800654A4
    // 0x80065498: nop

        goto L_800654A4;
    // 0x80065498: nop

L_8006549C:
    // 0x8006549C: jal         0x80076910
    // 0x800654A0: nop

    func_80076910(rdram, ctx);
        goto after_4;
    // 0x800654A0: nop

    after_4:
L_800654A4:
    // 0x800654A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800654A8: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800654AC: lhu         $t8, 0x4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X4);
    // 0x800654B0: b           L_800656B4
    // 0x800654B4: sh          $t8, 0xB8($v0)
    MEM_H(0XB8, ctx->r2) = ctx->r24;
        goto L_800656B4;
    // 0x800654B4: sh          $t8, 0xB8($v0)
    MEM_H(0XB8, ctx->r2) = ctx->r24;
L_800654B8:
    // 0x800654B8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800654BC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800654C0: lhu         $t9, 0x1C($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X1C);
    // 0x800654C4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800654C8: bne         $t9, $at, L_8006553C
    if (ctx->r25 != ctx->r1) {
        // 0x800654CC: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_8006553C;
    }
    // 0x800654CC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800654D0: lhu         $a0, 0x26($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X26);
    // 0x800654D4: jal         0x8006445C
    // 0x800654D8: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x800654D8: nop

    after_5:
    // 0x800654DC: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x800654E0: beq         $at, $zero, L_8006553C
    if (ctx->r1 == 0) {
        // 0x800654E4: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_8006553C;
    }
    // 0x800654E4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800654E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800654EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800654F0: slti        $at, $t0, 0x32
    ctx->r1 = SIGNED(ctx->r8) < 0X32 ? 1 : 0;
    // 0x800654F4: beq         $at, $zero, L_8006553C
    if (ctx->r1 == 0) {
        // 0x800654F8: lw          $t4, 0x20($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X20);
            goto L_8006553C;
    }
    // 0x800654F8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800654FC: beq         $t1, $zero, L_80065538
    if (ctx->r9 == 0) {
        // 0x80065500: lui         $t2, 0x8028
        ctx->r10 = S32(0X8028 << 16);
            goto L_80065538;
    }
    // 0x80065500: lui         $t2, 0x8028
    ctx->r10 = S32(0X8028 << 16);
    // 0x80065504: lh          $t2, -0x1B60($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1B60);
    // 0x80065508: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006550C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80065510: beq         $t3, $zero, L_80065528
    if (ctx->r11 == 0) {
        // 0x80065514: nop
    
            goto L_80065528;
    }
    // 0x80065514: nop

    // 0x80065518: jal         0x800765F4
    // 0x8006551C: nop

    func_800765F4(rdram, ctx);
        goto after_6;
    // 0x8006551C: nop

    after_6:
    // 0x80065520: b           L_800656B8
    // 0x80065524: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065524: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80065528:
    // 0x80065528: jal         0x80076E24
    // 0x8006552C: nop

    func_80076E24(rdram, ctx);
        goto after_7;
    // 0x8006552C: nop

    after_7:
    // 0x80065530: b           L_800656B8
    // 0x80065534: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065534: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80065538:
    // 0x80065538: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
L_8006553C:
    // 0x8006553C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065540: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80065544: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80065548: lw          $t6, 0x24($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X24);
    // 0x8006554C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065550: lhu         $t7, 0x8B6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8B6);
    // 0x80065554: nop

    // 0x80065558: slti        $at, $t7, 0x97
    ctx->r1 = SIGNED(ctx->r15) < 0X97 ? 1 : 0;
    // 0x8006555C: bne         $at, $zero, L_800655C4
    if (ctx->r1 != 0) {
        // 0x80065560: nop
    
            goto L_800655C4;
    }
    // 0x80065560: nop

    // 0x80065564: beq         $t8, $zero, L_800655C4
    if (ctx->r24 == 0) {
        // 0x80065568: nop
    
            goto L_800655C4;
    }
    // 0x80065568: nop

    // 0x8006556C: lhu         $a0, 0xBA($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XBA);
    // 0x80065570: jal         0x8006445C
    // 0x80065574: nop

    func_8006445C(rdram, ctx);
        goto after_8;
    // 0x80065574: nop

    after_8:
    // 0x80065578: sltiu       $at, $v0, 0x385
    ctx->r1 = ctx->r2 < 0X385 ? 1 : 0;
    // 0x8006557C: bne         $at, $zero, L_800656B4
    if (ctx->r1 != 0) {
        // 0x80065580: lui         $t9, 0x8010
        ctx->r25 = S32(0X8010 << 16);
            goto L_800656B4;
    }
    // 0x80065580: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80065584: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x80065588: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006558C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80065590: beq         $t0, $zero, L_800655A8
    if (ctx->r8 == 0) {
        // 0x80065594: nop
    
            goto L_800655A8;
    }
    // 0x80065594: nop

    // 0x80065598: jal         0x80076808
    // 0x8006559C: nop

    func_80076808(rdram, ctx);
        goto after_9;
    // 0x8006559C: nop

    after_9:
    // 0x800655A0: b           L_800655B0
    // 0x800655A4: nop

        goto L_800655B0;
    // 0x800655A4: nop

L_800655A8:
    // 0x800655A8: jal         0x800768A0
    // 0x800655AC: nop

    func_800768A0(rdram, ctx);
        goto after_10;
    // 0x800655AC: nop

    after_10:
L_800655B0:
    // 0x800655B0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800655B4: lhu         $t1, 0x954($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X954);
    // 0x800655B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800655BC: b           L_800656B4
    // 0x800655C0: sh          $t1, 0xA0A($at)
    MEM_H(0XA0A, ctx->r1) = ctx->r9;
        goto L_800656B4;
    // 0x800655C0: sh          $t1, 0xA0A($at)
    MEM_H(0XA0A, ctx->r1) = ctx->r9;
L_800655C4:
    // 0x800655C4: lhu         $a0, 0xBE($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XBE);
    // 0x800655C8: jal         0x8006445C
    // 0x800655CC: nop

    func_8006445C(rdram, ctx);
        goto after_11;
    // 0x800655CC: nop

    after_11:
    // 0x800655D0: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x800655D4: bne         $at, $zero, L_800656B4
    if (ctx->r1 != 0) {
        // 0x800655D8: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_800656B4;
    }
    // 0x800655D8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800655DC: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x800655E0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800655E4: lhu         $t3, 0x522A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X522A);
    // 0x800655E8: lhu         $t2, 0x954($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X954);
    // 0x800655EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800655F0: and         $t4, $t3, $v0
    ctx->r12 = ctx->r11 & ctx->r2;
    // 0x800655F4: beq         $t4, $zero, L_8006564C
    if (ctx->r12 == 0) {
        // 0x800655F8: sh          $t2, 0xA0E($at)
        MEM_H(0XA0E, ctx->r1) = ctx->r10;
            goto L_8006564C;
    }
    // 0x800655F8: sh          $t2, 0xA0E($at)
    MEM_H(0XA0E, ctx->r1) = ctx->r10;
    // 0x800655FC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80065600: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80065604: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80065608: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x8006560C: beq         $t5, $zero, L_80065624
    if (ctx->r13 == 0) {
        // 0x80065610: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_80065624;
    }
    // 0x80065610: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80065614: jal         0x800767E0
    // 0x80065618: nop

    func_800767E0(rdram, ctx);
        goto after_12;
    // 0x80065618: nop

    after_12:
    // 0x8006561C: b           L_800656B8
    // 0x80065620: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065620: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80065624:
    // 0x80065624: beq         $t6, $zero, L_8006563C
    if (ctx->r14 == 0) {
        // 0x80065628: nop
    
            goto L_8006563C;
    }
    // 0x80065628: nop

    // 0x8006562C: jal         0x80076850
    // 0x80065630: nop

    func_80076850(rdram, ctx);
        goto after_13;
    // 0x80065630: nop

    after_13:
    // 0x80065634: b           L_800656B8
    // 0x80065638: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065638: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_8006563C:
    // 0x8006563C: jal         0x80076790
    // 0x80065640: nop

    func_80076790(rdram, ctx);
        goto after_14;
    // 0x80065640: nop

    after_14:
    // 0x80065644: b           L_800656B8
    // 0x80065648: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065648: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_8006564C:
    // 0x8006564C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80065650: bne         $v0, $at, L_8006566C
    if (ctx->r2 != ctx->r1) {
        // 0x80065654: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006566C;
    }
    // 0x80065654: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065658: jal         0x800767BC
    // 0x8006565C: nop

    func_800767BC(rdram, ctx);
        goto after_15;
    // 0x8006565C: nop

    after_15:
    // 0x80065660: b           L_800656B8
    // 0x80065664: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x80065664: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80065668: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8006566C:
    // 0x8006566C: bne         $v0, $at, L_800656B4
    if (ctx->r2 != ctx->r1) {
        // 0x80065670: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_800656B4;
    }
    // 0x80065670: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065674: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80065678: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x8006567C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80065680: lwc1        $f10, 0xC($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XC);
    // 0x80065684: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80065688: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8006568C: nop

    // 0x80065690: bc1f        L_800656AC
    if (!c1cs) {
        // 0x80065694: nop
    
            goto L_800656AC;
    }
    // 0x80065694: nop

    // 0x80065698: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8006569C: jal         0x800766F8
    // 0x800656A0: nop

    func_800766F8(rdram, ctx);
        goto after_16;
    // 0x800656A0: nop

    after_16:
    // 0x800656A4: b           L_800656B8
    // 0x800656A8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
        goto L_800656B8;
    // 0x800656A8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_800656AC:
    // 0x800656AC: jal         0x800767E0
    // 0x800656B0: nop

    func_800767E0(rdram, ctx);
        goto after_17;
    // 0x800656B0: nop

    after_17:
L_800656B4:
    // 0x800656B4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_800656B8:
    // 0x800656B8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800656BC: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x800656C0: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800656C4: lhu         $t1, 0x4($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X4);
    // 0x800656C8: lhu         $t0, 0x6($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X6);
    // 0x800656CC: sh          $t1, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r9;
    // 0x800656D0: sh          $t0, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r8;
L_800656D4:
    // 0x800656D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800656D8:
    // 0x800656D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800656DC: jr          $ra
    // 0x800656E0: nop

    return;
    // 0x800656E0: nop

;}
RECOMP_FUNC void func_800656E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800656E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800656E8: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800656EC: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x800656F0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800656F4: beq         $a0, $t6, L_8006577C
    if (ctx->r4 == ctx->r14) {
        // 0x800656F8: addiu       $t9, $t9, 0x978
        ctx->r25 = ADD32(ctx->r25, 0X978);
            goto L_8006577C;
    }
    // 0x800656F8: addiu       $t9, $t9, 0x978
    ctx->r25 = ADD32(ctx->r25, 0X978);
    // 0x800656FC: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x80065700: sw          $zero, 0x74($v1)
    MEM_W(0X74, ctx->r3) = 0;
    // 0x80065704: bne         $v0, $zero, L_80065714
    if (ctx->r2 != 0) {
        // 0x80065708: nop
    
            goto L_80065714;
    }
    // 0x80065708: nop

    // 0x8006570C: b           L_8006572C
    // 0x80065710: sw          $zero, 0x70($v1)
    MEM_W(0X70, ctx->r3) = 0;
        goto L_8006572C;
    // 0x80065710: sw          $zero, 0x70($v1)
    MEM_W(0X70, ctx->r3) = 0;
L_80065714:
    // 0x80065714: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80065718: lw          $t8, 0xC8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC8);
    // 0x8006571C: nop

    // 0x80065720: beq         $t7, $t8, L_8006572C
    if (ctx->r15 == ctx->r24) {
        // 0x80065724: nop
    
            goto L_8006572C;
    }
    // 0x80065724: nop

    // 0x80065728: sw          $zero, 0x70($v1)
    MEM_W(0X70, ctx->r3) = 0;
L_8006572C:
    // 0x8006572C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80065730: addiu       $v0, $v0, 0x970
    ctx->r2 = ADD32(ctx->r2, 0X970);
    // 0x80065734: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x80065738: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8006573C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80065740: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80065744: addiu       $t2, $t2, 0x968
    ctx->r10 = ADD32(ctx->r10, 0X968);
    // 0x80065748: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8006574C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80065750: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80065754: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x80065758: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x8006575C: nop

    // 0x80065760: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80065764: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x80065768: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8006576C: lhu         $t7, 0x4($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X4);
    // 0x80065770: lbu         $t6, 0xBC($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XBC);
    // 0x80065774: sh          $t7, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r15;
    // 0x80065778: sh          $t6, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r14;
L_8006577C:
    // 0x8006577C: jr          $ra
    // 0x80065780: nop

    return;
    // 0x80065780: nop

;}
RECOMP_FUNC void func_80065784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065784: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065788: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006578C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065790: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80065794: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80065798: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006579C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x800657A0: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x800657A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800657A8: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x800657AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800657B0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800657B4: beq         $t9, $zero, L_800657CC
    if (ctx->r25 == 0) {
        // 0x800657B8: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_800657CC;
    }
    // 0x800657B8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800657BC: lwc1        $f5, -0x6208($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6208);
    // 0x800657C0: lwc1        $f4, -0x6204($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6204);
    // 0x800657C4: b           L_800657DC
    // 0x800657C8: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
        goto L_800657DC;
    // 0x800657C8: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_800657CC:
    // 0x800657CC: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x800657D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800657D4: nop

    // 0x800657D8: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
L_800657DC:
    // 0x800657DC: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x800657E0: nop

    // 0x800657E4: bne         $t0, $zero, L_800658E0
    if (ctx->r8 != 0) {
        // 0x800657E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800658E0;
    }
    // 0x800657E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800657EC: jal         0x8026AB2C
    // 0x800657F0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(0x8026AB2C)(rdram, ctx);
        goto after_0;
    // 0x800657F0: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x800657F4: lui         $at, 0x4384
    ctx->r1 = S32(0X4384 << 16);
    // 0x800657F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800657FC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80065800: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80065804: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80065808: bc1f        L_800658C8
    if (!c1cs) {
        // 0x8006580C: nop
    
            goto L_800658C8;
    }
    // 0x8006580C: nop

    // 0x80065810: jal         0x80279308
    // 0x80065814: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x80065814: nop

    after_1:
    // 0x80065818: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006581C: lwc1        $f17, -0x6200($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6200);
    // 0x80065820: lwc1        $f16, -0x61FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X61FC);
    // 0x80065824: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80065828: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8006582C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80065830: bc1f        L_800658C8
    if (!c1cs) {
        // 0x80065834: addiu       $s0, $s0, 0x950
        ctx->r16 = ADD32(ctx->r16, 0X950);
            goto L_800658C8;
    }
    // 0x80065834: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80065838: lhu         $a0, 0x32($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X32);
    // 0x8006583C: jal         0x8006445C
    // 0x80065840: nop

    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80065840: nop

    after_2:
    // 0x80065844: sltiu       $at, $v0, 0x12D
    ctx->r1 = ctx->r2 < 0X12D ? 1 : 0;
    // 0x80065848: bne         $at, $zero, L_800658C8
    if (ctx->r1 != 0) {
        // 0x8006584C: nop
    
            goto L_800658C8;
    }
    // 0x8006584C: nop

    // 0x80065850: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80065854: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80065858: nop

    // 0x8006585C: bne         $t1, $t2, L_80065890
    if (ctx->r9 != ctx->r10) {
        // 0x80065860: nop
    
            goto L_80065890;
    }
    // 0x80065860: nop

    // 0x80065864: lhu         $a0, 0x30($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X30);
    // 0x80065868: jal         0x8006445C
    // 0x8006586C: nop

    func_8006445C(rdram, ctx);
        goto after_3;
    // 0x8006586C: nop

    after_3:
    // 0x80065870: sltiu       $at, $v0, 0x12C
    ctx->r1 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80065874: beq         $at, $zero, L_80065890
    if (ctx->r1 == 0) {
        // 0x80065878: nop
    
            goto L_80065890;
    }
    // 0x80065878: nop

    // 0x8006587C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065880: jal         0x80076958
    // 0x80065884: nop

    func_80076958(rdram, ctx);
        goto after_4;
    // 0x80065884: nop

    after_4:
    // 0x80065888: b           L_800658C0
    // 0x8006588C: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
        goto L_800658C0;
    // 0x8006588C: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
L_80065890:
    // 0x80065890: lhu         $a0, 0x88($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X88);
    // 0x80065894: jal         0x8006445C
    // 0x80065898: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x80065898: nop

    after_5:
    // 0x8006589C: sltiu       $at, $v0, 0x12D
    ctx->r1 = ctx->r2 < 0X12D ? 1 : 0;
    // 0x800658A0: bne         $at, $zero, L_800658BC
    if (ctx->r1 != 0) {
        // 0x800658A4: nop
    
            goto L_800658BC;
    }
    // 0x800658A4: nop

    // 0x800658A8: jal         0x80077BF8
    // 0x800658AC: nop

    func_80077BF8(rdram, ctx);
        goto after_6;
    // 0x800658AC: nop

    after_6:
    // 0x800658B0: lhu         $t3, 0x4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X4);
    // 0x800658B4: nop

    // 0x800658B8: sh          $t3, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r11;
L_800658BC:
    // 0x800658BC: lhu         $t4, 0x4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X4);
L_800658C0:
    // 0x800658C0: nop

    // 0x800658C4: sh          $t4, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r12;
L_800658C8:
    // 0x800658C8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800658CC: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x800658D0: lhu         $t5, 0x4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X4);
    // 0x800658D4: nop

    // 0x800658D8: sh          $t5, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r13;
    // 0x800658DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800658E0:
    // 0x800658E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800658E4: jr          $ra
    // 0x800658E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800658E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800658EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800658EC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800658F0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800658F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800658F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800658FC: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x80065900: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80065904: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x80065908: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8006590C: lw          $v0, 0x24($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X24);
    // 0x80065910: bne         $a0, $t8, L_800659A4
    if (ctx->r4 != ctx->r24) {
        // 0x80065914: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_800659A4;
    }
    // 0x80065914: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065918: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x8006591C: lhu         $t9, 0x10($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X10);
    // 0x80065920: nop

    // 0x80065924: bne         $a0, $t9, L_800659A4
    if (ctx->r4 != ctx->r25) {
        // 0x80065928: nop
    
            goto L_800659A4;
    }
    // 0x80065928: nop

    // 0x8006592C: lhu         $t0, 0x14($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X14);
    // 0x80065930: lhu         $t1, 0x6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X6);
    // 0x80065934: nop

    // 0x80065938: bne         $t0, $t1, L_800659A4
    if (ctx->r8 != ctx->r9) {
        // 0x8006593C: nop
    
            goto L_800659A4;
    }
    // 0x8006593C: nop

    // 0x80065940: lhu         $a0, 0x16($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X16);
    // 0x80065944: nop

    // 0x80065948: beq         $a0, $zero, L_800659A4
    if (ctx->r4 == 0) {
        // 0x8006594C: nop
    
            goto L_800659A4;
    }
    // 0x8006594C: nop

    // 0x80065950: jal         0x8006445C
    // 0x80065954: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80065954: nop

    after_0:
    // 0x80065958: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8006595C: sltiu       $at, $v0, 0x12C
    ctx->r1 = ctx->r2 < 0X12C ? 1 : 0;
    // 0x80065960: beq         $at, $zero, L_800659A4
    if (ctx->r1 == 0) {
        // 0x80065964: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_800659A4;
    }
    // 0x80065964: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065968: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x8006596C: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80065970: lh          $t2, 0x12($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X12);
    // 0x80065974: lh          $t4, 0xDA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XDA);
    // 0x80065978: nop

    // 0x8006597C: multu       $t2, $t4
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065980: mflo        $v0
    ctx->r2 = lo;
    // 0x80065984: bltz        $v0, L_8006599C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80065988: nop
    
            goto L_8006599C;
    }
    // 0x80065988: nop

    // 0x8006598C: jal         0x80076F34
    // 0x80065990: nop

    func_80076F34(rdram, ctx);
        goto after_1;
    // 0x80065990: nop

    after_1:
    // 0x80065994: b           L_800659A4
    // 0x80065998: nop

        goto L_800659A4;
    // 0x80065998: nop

L_8006599C:
    // 0x8006599C: jal         0x80076F80
    // 0x800659A0: nop

    func_80076F80(rdram, ctx);
        goto after_2;
    // 0x800659A0: nop

    after_2:
L_800659A4:
    // 0x800659A4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800659A8: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x800659AC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800659B0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800659B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800659B8: sh          $t5, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r13;
    // 0x800659BC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800659C0: lhu         $t9, 0x4($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X4);
    // 0x800659C4: lh          $t6, 0xDA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDA);
    // 0x800659C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800659CC: sh          $t6, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r14;
    // 0x800659D0: lw          $t7, 0xB4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XB4);
    // 0x800659D4: nop

    // 0x800659D8: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x800659DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800659E0: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x800659E4: jr          $ra
    // 0x800659E8: sh          $t8, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r24;
    return;
    // 0x800659E8: sh          $t8, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_800659EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800659EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800659F0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x800659F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800659F8: bne         $t6, $zero, L_80065A8C
    if (ctx->r14 != 0) {
        // 0x800659FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80065A8C;
    }
    // 0x800659FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065A00: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80065A04: nop

    // 0x80065A08: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x80065A0C: nop

    // 0x80065A10: lw          $t8, 0x914($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X914);
    // 0x80065A14: nop

    // 0x80065A18: beq         $t8, $zero, L_80065A60
    if (ctx->r24 == 0) {
        // 0x80065A1C: nop
    
            goto L_80065A60;
    }
    // 0x80065A1C: nop

    // 0x80065A20: lhu         $t9, 0xA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA);
    // 0x80065A24: nop

    // 0x80065A28: bne         $t9, $zero, L_80065A90
    if (ctx->r25 != 0) {
        // 0x80065A2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80065A90;
    }
    // 0x80065A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065A30: lhu         $t0, 0x930($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X930);
    // 0x80065A34: nop

    // 0x80065A38: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x80065A3C: bne         $at, $zero, L_80065A90
    if (ctx->r1 != 0) {
        // 0x80065A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80065A90;
    }
    // 0x80065A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065A44: jal         0x80077AA0
    // 0x80065A48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80077AA0(rdram, ctx);
        goto after_0;
    // 0x80065A48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80065A4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80065A50: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80065A54: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x80065A58: b           L_80065A8C
    // 0x80065A5C: sh          $t1, 0x930($t2)
    MEM_H(0X930, ctx->r10) = ctx->r9;
        goto L_80065A8C;
    // 0x80065A5C: sh          $t1, 0x930($t2)
    MEM_H(0X930, ctx->r10) = ctx->r9;
L_80065A60:
    // 0x80065A60: lhu         $t3, 0x930($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X930);
    // 0x80065A64: nop

    // 0x80065A68: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80065A6C: bne         $at, $zero, L_80065A84
    if (ctx->r1 != 0) {
        // 0x80065A70: nop
    
            goto L_80065A84;
    }
    // 0x80065A70: nop

    // 0x80065A74: jal         0x80077A78
    // 0x80065A78: nop

    func_80077A78(rdram, ctx);
        goto after_1;
    // 0x80065A78: nop

    after_1:
    // 0x80065A7C: b           L_80065A90
    // 0x80065A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80065A90;
    // 0x80065A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80065A84:
    // 0x80065A84: jal         0x80077B08
    // 0x80065A88: nop

    func_80077B08(rdram, ctx);
        goto after_2;
    // 0x80065A88: nop

    after_2:
L_80065A8C:
    // 0x80065A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80065A90:
    // 0x80065A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065A94: jr          $ra
    // 0x80065A98: nop

    return;
    // 0x80065A98: nop

;}
RECOMP_FUNC void func_80065A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065A9C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065AA0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065AA4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80065AA8: bne         $t6, $zero, L_80065AF4
    if (ctx->r14 != 0) {
        // 0x80065AAC: nop
    
            goto L_80065AF4;
    }
    // 0x80065AAC: nop

    // 0x80065AB0: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80065AB4: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80065AB8: lw          $t9, 0x8C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8C);
    // 0x80065ABC: lhu         $v0, 0x6($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X6);
    // 0x80065AC0: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x80065AC4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065AC8: lhu         $t1, 0x6($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X6);
    // 0x80065ACC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065AD0: beq         $t1, $v0, L_80065AF0
    if (ctx->r9 == ctx->r2) {
        // 0x80065AD4: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_80065AF0;
    }
    // 0x80065AD4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80065AD8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065ADC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065AE0: lhu         $t2, 0x4($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X4);
    // 0x80065AE4: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    // 0x80065AE8: jr          $ra
    // 0x80065AEC: sh          $t2, 0xCA($v1)
    MEM_H(0XCA, ctx->r3) = ctx->r10;
    return;
    // 0x80065AEC: sh          $t2, 0xCA($v1)
    MEM_H(0XCA, ctx->r3) = ctx->r10;
L_80065AF0:
    // 0x80065AF0: sb          $t3, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r11;
L_80065AF4:
    // 0x80065AF4: jr          $ra
    // 0x80065AF8: nop

    return;
    // 0x80065AF8: nop

;}
RECOMP_FUNC void func_80065AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065AFC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065B00: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065B08: bne         $t6, $zero, L_80065B60
    if (ctx->r14 != 0) {
        // 0x80065B0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80065B60;
    }
    // 0x80065B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065B10: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065B14: lhu         $a0, 0x976($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X976);
    // 0x80065B18: jal         0x8006445C
    // 0x80065B1C: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80065B1C: nop

    after_0:
    // 0x80065B20: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x80065B24: bne         $at, $zero, L_80065B60
    if (ctx->r1 != 0) {
        // 0x80065B28: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80065B60;
    }
    // 0x80065B28: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065B2C: lhu         $a0, 0xA0C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA0C);
    // 0x80065B30: jal         0x8006445C
    // 0x80065B34: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80065B34: nop

    after_1:
    // 0x80065B38: sltiu       $at, $v0, 0x259
    ctx->r1 = ctx->r2 < 0X259 ? 1 : 0;
    // 0x80065B3C: bne         $at, $zero, L_80065B60
    if (ctx->r1 != 0) {
        // 0x80065B40: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80065B60;
    }
    // 0x80065B40: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065B44: lw          $a0, 0x970($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X970);
    // 0x80065B48: jal         0x80076EC4
    // 0x80065B4C: nop

    func_80076EC4(rdram, ctx);
        goto after_2;
    // 0x80065B4C: nop

    after_2:
    // 0x80065B50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80065B54: lhu         $t7, 0x954($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X954);
    // 0x80065B58: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80065B5C: sh          $t7, 0xA0C($at)
    MEM_H(0XA0C, ctx->r1) = ctx->r15;
L_80065B60:
    // 0x80065B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065B68: jr          $ra
    // 0x80065B6C: nop

    return;
    // 0x80065B6C: nop

;}
RECOMP_FUNC void func_80065B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065B70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065B74: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065B78: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065B7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065B80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065B84: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80065B88: beq         $t6, $zero, L_80065B98
    if (ctx->r14 == 0) {
        // 0x80065B8C: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_80065B98;
    }
    // 0x80065B8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80065B90: b           L_80065E6C
    // 0x80065B94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80065E6C;
    // 0x80065B94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80065B98:
    // 0x80065B98: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065B9C: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80065BA0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80065BA4: lw          $v0, 0x90($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X90);
    // 0x80065BA8: nop

    // 0x80065BAC: beq         $v0, $zero, L_80065C40
    if (ctx->r2 == 0) {
        // 0x80065BB0: nop
    
            goto L_80065C40;
    }
    // 0x80065BB0: nop

    // 0x80065BB4: lw          $t8, 0xC8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC8);
    // 0x80065BB8: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x80065BBC: nop

    // 0x80065BC0: beq         $t8, $t0, L_80065C40
    if (ctx->r24 == ctx->r8) {
        // 0x80065BC4: nop
    
            goto L_80065C40;
    }
    // 0x80065BC4: nop

    // 0x80065BC8: jal         0x80076CE4
    // 0x80065BCC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80076CE4(rdram, ctx);
        goto after_0;
    // 0x80065BCC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x80065BD0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80065BD4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80065BD8: nop

    // 0x80065BDC: lwc1        $f12, 0x8($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80065BE0: jal         0x80272AEC
    // 0x80065BE4: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80065BE4: nop

    after_1:
    // 0x80065BE8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80065BEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80065BF0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80065BF4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80065BF8: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80065BFC: bc1f        L_80065C40
    if (!c1cs) {
        // 0x80065C00: nop
    
            goto L_80065C40;
    }
    // 0x80065C00: nop

    // 0x80065C04: lhu         $a0, 0x9A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9A);
    // 0x80065C08: jal         0x8006445C
    // 0x80065C0C: nop

    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80065C0C: nop

    after_2:
    // 0x80065C10: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x80065C14: bne         $at, $zero, L_80065C40
    if (ctx->r1 != 0) {
        // 0x80065C18: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_80065C40;
    }
    // 0x80065C18: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80065C1C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80065C20: nop

    // 0x80065C24: lw          $a0, 0x8C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8C);
    // 0x80065C28: jal         0x80075CEC
    // 0x80065C2C: nop

    func_80075CEC(rdram, ctx);
        goto after_3;
    // 0x80065C2C: nop

    after_3:
    // 0x80065C30: lhu         $t3, 0x4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X4);
    // 0x80065C34: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80065C38: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80065C3C: sh          $t3, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r11;
L_80065C40:
    // 0x80065C40: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80065C44: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x80065C48: lhu         $a0, 0xCA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XCA);
    // 0x80065C4C: jal         0x8006445C
    // 0x80065C50: nop

    func_8006445C(rdram, ctx);
        goto after_4;
    // 0x80065C50: nop

    after_4:
    // 0x80065C54: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80065C58: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x80065C5C: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x80065C60: nop

    // 0x80065C64: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x80065C68: nop

    // 0x80065C6C: bne         $t5, $t8, L_80065E48
    if (ctx->r13 != ctx->r24) {
        // 0x80065C70: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_80065E48;
    }
    // 0x80065C70: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80065C74: lhu         $a0, 0xCA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XCA);
    // 0x80065C78: jal         0x8006445C
    // 0x80065C7C: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x80065C7C: nop

    after_5:
    // 0x80065C80: sltiu       $at, $v0, 0x3C
    ctx->r1 = ctx->r2 < 0X3C ? 1 : 0;
    // 0x80065C84: beq         $at, $zero, L_80065E48
    if (ctx->r1 == 0) {
        // 0x80065C88: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_80065E48;
    }
    // 0x80065C88: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80065C8C: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80065C90: jal         0x8006445C
    // 0x80065C94: nop

    func_8006445C(rdram, ctx);
        goto after_6;
    // 0x80065C94: nop

    after_6:
    // 0x80065C98: sltiu       $at, $v0, 0x1C2
    ctx->r1 = ctx->r2 < 0X1C2 ? 1 : 0;
    // 0x80065C9C: beq         $at, $zero, L_80065DC0
    if (ctx->r1 == 0) {
        // 0x80065CA0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80065DC0;
    }
    // 0x80065CA0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065CA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065CA8: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x80065CAC: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80065CB0: nop

    // 0x80065CB4: lhu         $t1, 0x6($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X6);
    // 0x80065CB8: nop

    // 0x80065CBC: bne         $t0, $t1, L_80065DBC
    if (ctx->r8 != ctx->r9) {
        // 0x80065CC0: nop
    
            goto L_80065DBC;
    }
    // 0x80065CC0: nop

    // 0x80065CC4: lhu         $t2, 0x6($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X6);
    // 0x80065CC8: nop

    // 0x80065CCC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80065CD0: beq         $t3, $zero, L_80065CFC
    if (ctx->r11 == 0) {
        // 0x80065CD4: nop
    
            goto L_80065CFC;
    }
    // 0x80065CD4: nop

    // 0x80065CD8: jal         0x80076C94
    // 0x80065CDC: nop

    func_80076C94(rdram, ctx);
        goto after_7;
    // 0x80065CDC: nop

    after_7:
    // 0x80065CE0: jal         0x80065AFC
    // 0x80065CE4: nop

    func_80065AFC(rdram, ctx);
        goto after_8;
    // 0x80065CE4: nop

    after_8:
    // 0x80065CE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80065CEC: nop

    // 0x80065CF0: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x80065CF4: b           L_80065D14
    // 0x80065CF8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80065D14;
    // 0x80065CF8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80065CFC:
    // 0x80065CFC: jal         0x80076CB8
    // 0x80065D00: nop

    func_80076CB8(rdram, ctx);
        goto after_9;
    // 0x80065D00: nop

    after_9:
    // 0x80065D04: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80065D08: nop

    // 0x80065D0C: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80065D10: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80065D14:
    // 0x80065D14: lhu         $t8, 0xA($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XA);
    // 0x80065D18: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80065D1C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80065D20: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80065D24: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x80065D28: bne         $at, $zero, L_80065E20
    if (ctx->r1 != 0) {
        // 0x80065D2C: sh          $t9, 0xA($s0)
        MEM_H(0XA, ctx->r16) = ctx->r25;
            goto L_80065E20;
    }
    // 0x80065D2C: sh          $t9, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r25;
    // 0x80065D30: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80065D34: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x80065D38: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80065D3C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80065D40: beq         $t2, $zero, L_80065D78
    if (ctx->r10 == 0) {
        // 0x80065D44: nop
    
            goto L_80065D78;
    }
    // 0x80065D44: nop

    // 0x80065D48: lwc1        $f12, 0x4C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X4C);
    // 0x80065D4C: jal         0x80272AEC
    // 0x80065D50: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_10;
    // 0x80065D50: nop

    after_10:
    // 0x80065D54: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80065D58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80065D5C: nop

    // 0x80065D60: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80065D64: nop

    // 0x80065D68: bc1f        L_80065D78
    if (!c1cs) {
        // 0x80065D6C: nop
    
            goto L_80065D78;
    }
    // 0x80065D6C: nop

    // 0x80065D70: jal         0x80076A78
    // 0x80065D74: nop

    func_80076A78(rdram, ctx);
        goto after_11;
    // 0x80065D74: nop

    after_11:
L_80065D78:
    // 0x80065D78: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80065D7C: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x80065D80: nop

    // 0x80065D84: andi        $t6, $t4, 0x2
    ctx->r14 = ctx->r12 & 0X2;
    // 0x80065D88: beq         $t6, $zero, L_80065DA0
    if (ctx->r14 == 0) {
        // 0x80065D8C: nop
    
            goto L_80065DA0;
    }
    // 0x80065D8C: nop

    // 0x80065D90: jal         0x80076B70
    // 0x80065D94: nop

    func_80076B70(rdram, ctx);
        goto after_12;
    // 0x80065D94: nop

    after_12:
    // 0x80065D98: b           L_80065DAC
    // 0x80065D9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80065DAC;
    // 0x80065D9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80065DA0:
    // 0x80065DA0: jal         0x80076B18
    // 0x80065DA4: nop

    func_80076B18(rdram, ctx);
        goto after_13;
    // 0x80065DA4: nop

    after_13:
    // 0x80065DA8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80065DAC:
    // 0x80065DAC: nop

    // 0x80065DB0: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x80065DB4: b           L_80065E20
    // 0x80065DB8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
        goto L_80065E20;
    // 0x80065DB8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80065DBC:
    // 0x80065DBC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80065DC0:
    // 0x80065DC0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80065DC4: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80065DC8: nop

    // 0x80065DCC: lh          $t9, 0x8B0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8B0);
    // 0x80065DD0: nop

    // 0x80065DD4: bgez        $t9, L_80065E00
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80065DD8: nop
    
            goto L_80065E00;
    }
    // 0x80065DD8: nop

    // 0x80065DDC: lh          $t0, -0x1B60($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1B60);
    // 0x80065DE0: nop

    // 0x80065DE4: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80065DE8: beq         $t1, $zero, L_80065E00
    if (ctx->r9 == 0) {
        // 0x80065DEC: nop
    
            goto L_80065E00;
    }
    // 0x80065DEC: nop

    // 0x80065DF0: jal         0x80076C68
    // 0x80065DF4: nop

    func_80076C68(rdram, ctx);
        goto after_14;
    // 0x80065DF4: nop

    after_14:
    // 0x80065DF8: b           L_80065E08
    // 0x80065DFC: nop

        goto L_80065E08;
    // 0x80065DFC: nop

L_80065E00:
    // 0x80065E00: jal         0x80076BD0
    // 0x80065E04: nop

    func_80076BD0(rdram, ctx);
        goto after_15;
    // 0x80065E04: nop

    after_15:
L_80065E08:
    // 0x80065E08: jal         0x80065AFC
    // 0x80065E0C: nop

    func_80065AFC(rdram, ctx);
        goto after_16;
    // 0x80065E0C: nop

    after_16:
    // 0x80065E10: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80065E14: nop

    // 0x80065E18: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80065E1C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80065E20:
    // 0x80065E20: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80065E24: nop

    // 0x80065E28: lw          $t6, 0xC8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0XC8);
    // 0x80065E2C: nop

    // 0x80065E30: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80065E34: nop

    // 0x80065E38: lhu         $t5, 0x6($t7)
    ctx->r13 = MEM_HU(ctx->r15, 0X6);
    // 0x80065E3C: b           L_80065E4C
    // 0x80065E40: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
        goto L_80065E4C;
    // 0x80065E40: sb          $t5, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r13;
    // 0x80065E44: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
L_80065E48:
    // 0x80065E48: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
L_80065E4C:
    // 0x80065E4C: lhu         $t1, 0x6($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X6);
    // 0x80065E50: lhu         $t0, 0x4($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4);
    // 0x80065E54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80065E58: andi        $t2, $t1, 0xFFFB
    ctx->r10 = ctx->r9 & 0XFFFB;
    // 0x80065E5C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80065E60: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x80065E64: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
    // 0x80065E68: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
L_80065E6C:
    // 0x80065E6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065E70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065E74: jr          $ra
    // 0x80065E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065E7C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065E80: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80065E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065E8C: beq         $t6, $zero, L_80065E9C
    if (ctx->r14 == 0) {
        // 0x80065E90: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80065E9C;
    }
    // 0x80065E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80065E94: b           L_80065F54
    // 0x80065E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80065F54;
    // 0x80065E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80065E9C:
    // 0x80065E9C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065EA0: lhu         $a0, 0x9C8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X9C8);
    // 0x80065EA4: jal         0x8006445C
    // 0x80065EA8: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80065EA8: nop

    after_0:
    // 0x80065EAC: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x80065EB0: beq         $at, $zero, L_80065EC4
    if (ctx->r1 == 0) {
        // 0x80065EB4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80065EC4;
    }
    // 0x80065EB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80065EB8: b           L_80065F54
    // 0x80065EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80065F54;
    // 0x80065EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80065EC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80065EC4:
    // 0x80065EC4: jal         0x80271F6C
    // 0x80065EC8: nop

    LOOKUP_FUNC(0x80271F6C)(rdram, ctx);
        goto after_1;
    // 0x80065EC8: nop

    after_1:
    // 0x80065ECC: bne         $v0, $zero, L_80065F54
    if (ctx->r2 != 0) {
        // 0x80065ED0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80065F54;
    }
    // 0x80065ED0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80065ED4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80065ED8: nop

    // 0x80065EDC: lwc1        $f12, 0x4C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x80065EE0: jal         0x80272AEC
    // 0x80065EE4: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x80065EE4: nop

    after_2:
    // 0x80065EE8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80065EEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80065EF0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80065EF4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80065EF8: nop

    // 0x80065EFC: bc1f        L_80065F54
    if (!c1cs) {
        // 0x80065F00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80065F54;
    }
    // 0x80065F00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80065F04: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x80065F08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80065F0C: lw          $v0, 0x24($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X24);
    // 0x80065F10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80065F14: lhu         $t0, 0x318($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X318);
    // 0x80065F18: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80065F1C: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x80065F20: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80065F24: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80065F28: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80065F2C: lwc1        $f6, 0x84($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X84);
    // 0x80065F30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80065F34: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80065F38: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80065F3C: bc1f        L_80065F50
    if (!c1cs) {
        // 0x80065F40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80065F50;
    }
    // 0x80065F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80065F44: lhu         $t3, 0x4($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4);
    // 0x80065F48: b           L_80065F54
    // 0x80065F4C: sh          $t3, 0x78($v1)
    MEM_H(0X78, ctx->r3) = ctx->r11;
        goto L_80065F54;
    // 0x80065F4C: sh          $t3, 0x78($v1)
    MEM_H(0X78, ctx->r3) = ctx->r11;
L_80065F50:
    // 0x80065F50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80065F54:
    // 0x80065F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065F5C: jr          $ra
    // 0x80065F60: nop

    return;
    // 0x80065F60: nop

;}
RECOMP_FUNC void func_80065F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065F68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065F6C: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x80065F70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80065F74: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x80065F78: nop

    // 0x80065F7C: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x80065F80: bne         $t8, $at, L_80066070
    if (ctx->r24 != ctx->r1) {
        // 0x80065F84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x80065F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065F88: lw          $a1, 0x4C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4C);
    // 0x80065F8C: jal         0x8026AB68
    // 0x80065F90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_0;
    // 0x80065F90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80065F94: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80065F98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80065F9C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80065FA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80065FA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80065FA8: nop

    // 0x80065FAC: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80065FB0: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80065FB4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80065FB8: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x80065FBC: bne         $at, $zero, L_80066054
    if (ctx->r1 != 0) {
        // 0x80065FC0: slti        $at, $v0, 0x64
        ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
            goto L_80066054;
    }
    // 0x80065FC0: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80065FC4: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80065FC8: jal         0x80272AEC
    // 0x80065FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80065FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80065FD0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80065FD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80065FD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80065FDC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80065FE0: nop

    // 0x80065FE4: bc1f        L_80066070
    if (!c1cs) {
        // 0x80065FE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x80065FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065FEC: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x80065FF0: nop

    // 0x80065FF4: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80065FF8: bne         $t0, $zero, L_80066070
    if (ctx->r8 != 0) {
        // 0x80065FFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x80065FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066000: lhu         $t1, 0x14($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X14);
    // 0x80066004: ori         $t3, $v0, 0x1
    ctx->r11 = ctx->r2 | 0X1;
    // 0x80066008: andi        $t2, $t1, 0x800
    ctx->r10 = ctx->r9 & 0X800;
    // 0x8006600C: bne         $t2, $zero, L_80066070
    if (ctx->r10 != 0) {
        // 0x80066010: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x80066010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066014: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x80066018: sh          $t3, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r11;
    // 0x8006601C: lh          $t5, 0x8B0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8B0);
    // 0x80066020: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066024: slti        $at, $t5, 0x12C
    ctx->r1 = SIGNED(ctx->r13) < 0X12C ? 1 : 0;
    // 0x80066028: beq         $at, $zero, L_80066070
    if (ctx->r1 == 0) {
        // 0x8006602C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x8006602C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066030: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066034: nop

    // 0x80066038: bne         $t6, $zero, L_80066070
    if (ctx->r14 != 0) {
        // 0x8006603C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x8006603C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066040: jal         0x80076E1C
    // 0x80066044: nop

    func_80076E1C(rdram, ctx);
        goto after_2;
    // 0x80066044: nop

    after_2:
    // 0x80066048: b           L_80066070
    // 0x8006604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066070;
    // 0x8006604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066050: slti        $at, $v0, 0x64
    ctx->r1 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
L_80066054:
    // 0x80066054: beq         $at, $zero, L_80066070
    if (ctx->r1 == 0) {
        // 0x80066058: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066070;
    }
    // 0x80066058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006605C: lhu         $t7, 0x20($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X20);
    // 0x80066060: nop

    // 0x80066064: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x80066068: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x8006606C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066070:
    // 0x80066070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066074: jr          $ra
    // 0x80066078: nop

    return;
    // 0x80066078: nop

;}
RECOMP_FUNC void func_8006607C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006607C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066080: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006608C: bne         $t6, $zero, L_80066158
    if (ctx->r14 != 0) {
        // 0x80066090: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80066158;
    }
    // 0x80066090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066094: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80066098: lhu         $a0, 0x95E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X95E);
    // 0x8006609C: jal         0x8006445C
    // 0x800660A0: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x800660A0: nop

    after_0:
    // 0x800660A4: sltiu       $at, $v0, 0x384
    ctx->r1 = ctx->r2 < 0X384 ? 1 : 0;
    // 0x800660A8: bne         $at, $zero, L_80066158
    if (ctx->r1 != 0) {
        // 0x800660AC: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_80066158;
    }
    // 0x800660AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800660B0: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800660B4: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x800660B8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800660BC: sh          $t7, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r15;
    // 0x800660C0: lwc1        $f12, 0x4C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X4C);
    // 0x800660C4: jal         0x80272AEC
    // 0x800660C8: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x800660C8: nop

    after_1:
    // 0x800660CC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800660D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800660D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800660D8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800660DC: nop

    // 0x800660E0: bc1f        L_8006615C
    if (!c1cs) {
        // 0x800660E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006615C;
    }
    // 0x800660E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800660E8: lhu         $v0, 0x956($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X956);
    // 0x800660EC: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x800660F0: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800660F4: beq         $t9, $zero, L_80066114
    if (ctx->r25 == 0) {
        // 0x800660F8: andi        $t0, $v0, 0x2
        ctx->r8 = ctx->r2 & 0X2;
            goto L_80066114;
    }
    // 0x800660F8: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x800660FC: bne         $t0, $zero, L_80066114
    if (ctx->r8 != 0) {
        // 0x80066100: nop
    
            goto L_80066114;
    }
    // 0x80066100: nop

    // 0x80066104: jal         0x80076A9C
    // 0x80066108: nop

    func_80076A9C(rdram, ctx);
        goto after_2;
    // 0x80066108: nop

    after_2:
    // 0x8006610C: b           L_8006615C
    // 0x80066110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006615C;
    // 0x80066110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066114:
    // 0x80066114: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x80066118: nop

    // 0x8006611C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80066120: beq         $t2, $zero, L_80066150
    if (ctx->r10 == 0) {
        // 0x80066124: nop
    
            goto L_80066150;
    }
    // 0x80066124: nop

    // 0x80066128: jal         0x8006445C
    // 0x8006612C: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    func_8006445C(rdram, ctx);
        goto after_3;
    // 0x8006612C: addiu       $a0, $zero, 0x384
    ctx->r4 = ADD32(0, 0X384);
    after_3:
    // 0x80066130: sltiu       $at, $v0, 0x12D
    ctx->r1 = ctx->r2 < 0X12D ? 1 : 0;
    // 0x80066134: bne         $at, $zero, L_80066150
    if (ctx->r1 != 0) {
        // 0x80066138: nop
    
            goto L_80066150;
    }
    // 0x80066138: nop

    // 0x8006613C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066140: jal         0x80076BA4
    // 0x80066144: nop

    func_80076BA4(rdram, ctx);
        goto after_4;
    // 0x80066144: nop

    after_4:
    // 0x80066148: b           L_8006615C
    // 0x8006614C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8006615C;
    // 0x8006614C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066150:
    // 0x80066150: jal         0x800769C4
    // 0x80066154: nop

    func_800769C4(rdram, ctx);
        goto after_5;
    // 0x80066154: nop

    after_5:
L_80066158:
    // 0x80066158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006615C:
    // 0x8006615C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066160: jr          $ra
    // 0x80066164: nop

    return;
    // 0x80066164: nop

;}
RECOMP_FUNC void func_80066168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006616C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066170: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066174: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80066178: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006617C: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x80066180: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80066184: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80066188: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006618C: lwc1        $f4, 0x31C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X31C);
    // 0x80066190: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80066194: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80066198: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x8006619C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x800661A0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800661A4: bne         $t8, $zero, L_800662EC
    if (ctx->r24 != 0) {
        // 0x800661A8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_800662EC;
    }
    // 0x800661A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800661AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800661B0: addiu       $s0, $s0, 0x950
    ctx->r16 = ADD32(ctx->r16, 0X950);
    // 0x800661B4: lw          $t9, 0x18($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X18);
    // 0x800661B8: nop

    // 0x800661BC: beq         $a0, $t9, L_800662F0
    if (ctx->r4 == ctx->r25) {
        // 0x800661C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800662F0;
    }
    // 0x800661C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800661C4: lh          $t0, 0x8B0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8B0);
    // 0x800661C8: nop

    // 0x800661CC: slti        $at, $t0, 0x12D
    ctx->r1 = SIGNED(ctx->r8) < 0X12D ? 1 : 0;
    // 0x800661D0: bne         $at, $zero, L_800662EC
    if (ctx->r1 != 0) {
        // 0x800661D4: slti        $at, $v1, 0x65
        ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
            goto L_800662EC;
    }
    // 0x800661D4: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x800661D8: bne         $at, $zero, L_800662F0
    if (ctx->r1 != 0) {
        // 0x800661DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800662F0;
    }
    // 0x800661DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800661E0: lhu         $a0, 0xC4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC4);
    // 0x800661E4: jal         0x8006445C
    // 0x800661E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x800661E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x800661EC: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x800661F0: bne         $at, $zero, L_800662F0
    if (ctx->r1 != 0) {
        // 0x800661F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800662F0;
    }
    // 0x800661F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800661F8: lhu         $a0, 0xC2($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC2);
    // 0x800661FC: jal         0x8006445C
    // 0x80066200: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80066200: nop

    after_1:
    // 0x80066204: sltiu       $at, $v0, 0x12D
    ctx->r1 = ctx->r2 < 0X12D ? 1 : 0;
    // 0x80066208: bne         $at, $zero, L_80066298
    if (ctx->r1 != 0) {
        // 0x8006620C: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_80066298;
    }
    // 0x8006620C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80066210: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80066214: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80066218: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006621C: lwc1        $f0, 0x0($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80066220: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80066224: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80066228: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8006622C: bc1t        L_8006624C
    if (c1cs) {
        // 0x80066230: nop
    
            goto L_8006624C;
    }
    // 0x80066230: nop

    // 0x80066234: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80066238: lui         $t2, 0x8010
    ctx->r10 = S32(0X8010 << 16);
    // 0x8006623C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80066240: nop

    // 0x80066244: bc1f        L_8006625C
    if (!c1cs) {
        // 0x80066248: nop
    
            goto L_8006625C;
    }
    // 0x80066248: nop

L_8006624C:
    // 0x8006624C: jal         0x80076240
    // 0x80066250: nop

    func_80076240(rdram, ctx);
        goto after_2;
    // 0x80066250: nop

    after_2:
    // 0x80066254: b           L_8006628C
    // 0x80066258: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
        goto L_8006628C;
    // 0x80066258: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
L_8006625C:
    // 0x8006625C: lhu         $t2, 0x522A($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X522A);
    // 0x80066260: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80066264: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80066268: beq         $t3, $zero, L_80066280
    if (ctx->r11 == 0) {
        // 0x8006626C: nop
    
            goto L_80066280;
    }
    // 0x8006626C: nop

    // 0x80066270: jal         0x80076268
    // 0x80066274: nop

    func_80076268(rdram, ctx);
        goto after_3;
    // 0x80066274: nop

    after_3:
    // 0x80066278: b           L_8006628C
    // 0x8006627C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
        goto L_8006628C;
    // 0x8006627C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
L_80066280:
    // 0x80066280: jal         0x800762F4
    // 0x80066284: nop

    func_800762F4(rdram, ctx);
        goto after_4;
    // 0x80066284: nop

    after_4:
    // 0x80066288: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
L_8006628C:
    // 0x8006628C: nop

    // 0x80066290: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x80066294: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
L_80066298:
    // 0x80066298: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8006629C: nop

    // 0x800662A0: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x800662A4: nop

    // 0x800662A8: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x800662AC: nop

    // 0x800662B0: slti        $at, $t6, 0x12C
    ctx->r1 = SIGNED(ctx->r14) < 0X12C ? 1 : 0;
    // 0x800662B4: beq         $at, $zero, L_800662F0
    if (ctx->r1 == 0) {
        // 0x800662B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800662F0;
    }
    // 0x800662B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800662BC: lhu         $a0, 0xA0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA0);
    // 0x800662C0: jal         0x8006445C
    // 0x800662C4: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x800662C4: nop

    after_5:
    // 0x800662C8: sltiu       $at, $v0, 0x385
    ctx->r1 = ctx->r2 < 0X385 ? 1 : 0;
    // 0x800662CC: bne         $at, $zero, L_800662F0
    if (ctx->r1 != 0) {
        // 0x800662D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800662F0;
    }
    // 0x800662D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800662D4: jal         0x80078AF8
    // 0x800662D8: nop

    func_80078AF8(rdram, ctx);
        goto after_6;
    // 0x800662D8: nop

    after_6:
    // 0x800662DC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x800662E0: nop

    // 0x800662E4: sh          $v0, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r2;
    // 0x800662E8: sh          $v0, 0xC4($s0)
    MEM_H(0XC4, ctx->r16) = ctx->r2;
L_800662EC:
    // 0x800662EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800662F0:
    // 0x800662F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800662F4: jr          $ra
    // 0x800662F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800662F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800662FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800662FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066300: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066308: bne         $t6, $zero, L_80066448
    if (ctx->r14 != 0) {
        // 0x8006630C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80066448;
    }
    // 0x8006630C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066310: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80066314: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80066318: nop

    // 0x8006631C: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80066320: nop

    // 0x80066324: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x80066328: bne         $t8, $zero, L_8006644C
    if (ctx->r24 != 0) {
        // 0x8006632C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006644C;
    }
    // 0x8006632C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066330: lw          $t9, 0x88($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X88);
    // 0x80066334: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80066338: bne         $t9, $zero, L_8006644C
    if (ctx->r25 != 0) {
        // 0x8006633C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006644C;
    }
    // 0x8006633C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066340: lhu         $t0, 0x956($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X956);
    // 0x80066344: nop

    // 0x80066348: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x8006634C: bne         $t1, $zero, L_8006644C
    if (ctx->r9 != 0) {
        // 0x80066350: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006644C;
    }
    // 0x80066350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066354: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80066358: jal         0x80272AEC
    // 0x8006635C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x8006635C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80066360: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x80066364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80066368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006636C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80066370: nop

    // 0x80066374: bc1t        L_8006644C
    if (c1cs) {
        // 0x80066378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006644C;
    }
    // 0x80066378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006637C: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80066380: jal         0x80272AEC
    // 0x80066384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80066384: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80066388: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8006638C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80066390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066394: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80066398: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006639C: bc1t        L_80066448
    if (c1cs) {
        // 0x800663A0: addiu       $v0, $v0, 0x950
        ctx->r2 = ADD32(ctx->r2, 0X950);
            goto L_80066448;
    }
    // 0x800663A0: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800663A4: lui         $at, 0x45C8
    ctx->r1 = S32(0X45C8 << 16);
    // 0x800663A8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800663AC: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x800663B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800663B4: addiu       $a1, $a1, 0x4890
    ctx->r5 = ADD32(ctx->r5, 0X4890);
    // 0x800663B8: addiu       $a2, $a2, 0x964
    ctx->r6 = ADD32(ctx->r6, 0X964);
L_800663BC:
    // 0x800663BC: lw          $v1, 0x38($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X38);
    // 0x800663C0: nop

    // 0x800663C4: beq         $v1, $zero, L_80066404
    if (ctx->r3 == 0) {
        // 0x800663C8: nop
    
            goto L_80066404;
    }
    // 0x800663C8: nop

    // 0x800663CC: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x800663D0: lw          $t3, 0xC8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC8);
    // 0x800663D4: nop

    // 0x800663D8: beq         $t2, $t3, L_80066440
    if (ctx->r10 == ctx->r11) {
        // 0x800663DC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80066440;
    }
    // 0x800663DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800663E0: jal         0x80076360
    // 0x800663E4: nop

    func_80076360(rdram, ctx);
        goto after_2;
    // 0x800663E4: nop

    after_2:
    // 0x800663E8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800663EC: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800663F0: lhu         $t4, 0x6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6);
    // 0x800663F4: nop

    // 0x800663F8: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x800663FC: b           L_80066448
    // 0x80066400: sh          $t5, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r13;
        goto L_80066448;
    // 0x80066400: sh          $t5, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r13;
L_80066404:
    // 0x80066404: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80066408: lwc1        $f10, 0x1C38($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C38);
    // 0x8006640C: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80066410: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80066414: lwc1        $f18, 0x1C30($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X1C30);
    // 0x80066418: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8006641C: sub.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80066420: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80066424: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80066428: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x8006642C: nop

    // 0x80066430: bc1f        L_8006643C
    if (!c1cs) {
        // 0x80066434: nop
    
            goto L_8006643C;
    }
    // 0x80066434: nop

    // 0x80066438: sw          $a0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r4;
L_8006643C:
    // 0x8006643C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80066440:
    // 0x80066440: bne         $v0, $a2, L_800663BC
    if (ctx->r2 != ctx->r6) {
        // 0x80066444: nop
    
            goto L_800663BC;
    }
    // 0x80066444: nop

L_80066448:
    // 0x80066448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006644C:
    // 0x8006644C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066450: jr          $ra
    // 0x80066454: nop

    return;
    // 0x80066454: nop

;}
RECOMP_FUNC void func_80066458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066458: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006645C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066468: beq         $t6, $zero, L_80066478
    if (ctx->r14 == 0) {
        // 0x8006646C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80066478;
    }
    // 0x8006646C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80066470: b           L_80066520
    // 0x80066474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80066520;
    // 0x80066474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80066478:
    // 0x80066478: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x8006647C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066480: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066484: lhu         $t7, 0x4C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X4C);
    // 0x80066488: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x8006648C: nop

    // 0x80066490: bne         $t7, $t8, L_8006651C
    if (ctx->r15 != ctx->r24) {
        // 0x80066494: nop
    
            goto L_8006651C;
    }
    // 0x80066494: nop

    // 0x80066498: lh          $t9, 0x8B0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8B0);
    // 0x8006649C: nop

    // 0x800664A0: slti        $at, $t9, 0x127
    ctx->r1 = SIGNED(ctx->r25) < 0X127 ? 1 : 0;
    // 0x800664A4: bne         $at, $zero, L_80066520
    if (ctx->r1 != 0) {
        // 0x800664A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80066520;
    }
    // 0x800664A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800664AC: lhu         $t0, 0x50($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X50);
    // 0x800664B0: nop

    // 0x800664B4: beq         $t0, $zero, L_80066520
    if (ctx->r8 == 0) {
        // 0x800664B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80066520;
    }
    // 0x800664B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800664BC: lhu         $a0, 0x4E($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X4E);
    // 0x800664C0: jal         0x8006445C
    // 0x800664C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x800664C4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x800664C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800664CC: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x800664D0: beq         $at, $zero, L_8006651C
    if (ctx->r1 == 0) {
        // 0x800664D4: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8006651C;
    }
    // 0x800664D4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800664D8: lhu         $t1, 0xB74($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB74);
    // 0x800664DC: nop

    // 0x800664E0: beq         $t1, $zero, L_80066514
    if (ctx->r9 == 0) {
        // 0x800664E4: nop
    
            goto L_80066514;
    }
    // 0x800664E4: nop

    // 0x800664E8: lw          $v0, 0xC8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC8);
    // 0x800664EC: nop

    // 0x800664F0: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x800664F4: lhu         $t2, 0xA($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XA);
    // 0x800664F8: lhu         $t4, 0xA($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XA);
    // 0x800664FC: nop

    // 0x80066500: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80066504: beq         $at, $zero, L_80066514
    if (ctx->r1 == 0) {
        // 0x80066508: nop
    
            goto L_80066514;
    }
    // 0x80066508: nop

    // 0x8006650C: jal         0x80076240
    // 0x80066510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80076240(rdram, ctx);
        goto after_1;
    // 0x80066510: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_80066514:
    // 0x80066514: b           L_80066520
    // 0x80066518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80066520;
    // 0x80066518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006651C:
    // 0x8006651C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80066520:
    // 0x80066520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066528: jr          $ra
    // 0x8006652C: nop

    return;
    // 0x8006652C: nop

;}
RECOMP_FUNC void func_80066530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066530: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066534: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006653C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066540: bne         $t6, $zero, L_800666D4
    if (ctx->r14 != 0) {
        // 0x80066544: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_800666D4;
    }
    // 0x80066544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066548: jal         0x80066458
    // 0x8006654C: nop

    func_80066458(rdram, ctx);
        goto after_0;
    // 0x8006654C: nop

    after_0:
    // 0x80066550: bne         $v0, $zero, L_800666D4
    if (ctx->r2 != 0) {
        // 0x80066554: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_800666D4;
    }
    // 0x80066554: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80066558: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006655C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066560: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80066564: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80066568: jal         0x8027200C
    // 0x8006656C: nop

    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_1;
    // 0x8006656C: nop

    after_1:
    // 0x80066570: bne         $v0, $zero, L_800666A0
    if (ctx->r2 != 0) {
        // 0x80066574: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_800666A0;
    }
    // 0x80066574: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066578: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x8006657C: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80066580: nop

    // 0x80066584: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x80066588: bne         $t7, $zero, L_800666D4
    if (ctx->r15 != 0) {
        // 0x8006658C: ori         $t8, $v0, 0x20
        ctx->r24 = ctx->r2 | 0X20;
            goto L_800666D4;
    }
    // 0x8006658C: ori         $t8, $v0, 0x20
    ctx->r24 = ctx->r2 | 0X20;
    // 0x80066590: lhu         $a0, 0x8E($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X8E);
    // 0x80066594: jal         0x8006445C
    // 0x80066598: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    func_8006445C(rdram, ctx);
        goto after_2;
    // 0x80066598: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    after_2:
    // 0x8006659C: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x800665A0: bne         $at, $zero, L_800665CC
    if (ctx->r1 != 0) {
        // 0x800665A4: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800665CC;
    }
    // 0x800665A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800665A8: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800665AC: lhu         $t9, 0x4($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X4);
    // 0x800665B0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800665B4: sh          $t9, 0x8E($v0)
    MEM_H(0X8E, ctx->r2) = ctx->r25;
    // 0x800665B8: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x800665BC: nop

    // 0x800665C0: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    // 0x800665C4: jal         0x80074D84
    // 0x800665C8: nop

    func_80074D84(rdram, ctx);
        goto after_3;
    // 0x800665C8: nop

    after_3:
L_800665CC:
    // 0x800665CC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800665D0: lhu         $t2, 0xB72($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB72);
    // 0x800665D4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800665D8: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x800665DC: beq         $at, $zero, L_8006662C
    if (ctx->r1 == 0) {
        // 0x800665E0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8006662C;
    }
    // 0x800665E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800665E4: lw          $v0, 0xC8($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XC8);
    // 0x800665E8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800665EC: lhu         $t4, 0x6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6);
    // 0x800665F0: nop

    // 0x800665F4: beq         $t4, $zero, L_8006662C
    if (ctx->r12 == 0) {
        // 0x800665F8: nop
    
            goto L_8006662C;
    }
    // 0x800665F8: nop

    // 0x800665FC: lw          $t5, 0x24($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X24);
    // 0x80066600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80066604: lwc1        $f4, 0x8BC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8BC);
    // 0x80066608: nop

    // 0x8006660C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80066610: nop

    // 0x80066614: bc1f        L_800666D8
    if (!c1cs) {
        // 0x80066618: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800666D8;
    }
    // 0x80066618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006661C: jal         0x80076318
    // 0x80066620: nop

    func_80076318(rdram, ctx);
        goto after_4;
    // 0x80066620: nop

    after_4:
    // 0x80066624: b           L_800666D8
    // 0x80066628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800666D8;
    // 0x80066628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006662C:
    // 0x8006662C: lhu         $a0, 0xA18($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA18);
    // 0x80066630: jal         0x8006445C
    // 0x80066634: nop

    func_8006445C(rdram, ctx);
        goto after_5;
    // 0x80066634: nop

    after_5:
    // 0x80066638: sltiu       $at, $v0, 0x12D
    ctx->r1 = ctx->r2 < 0X12D ? 1 : 0;
    // 0x8006663C: bne         $at, $zero, L_800666D4
    if (ctx->r1 != 0) {
        // 0x80066640: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_800666D4;
    }
    // 0x80066640: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80066644: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80066648: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006664C: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80066650: beq         $t6, $zero, L_80066668
    if (ctx->r14 == 0) {
        // 0x80066654: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_80066668;
    }
    // 0x80066654: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80066658: jal         0x80076218
    // 0x8006665C: nop

    func_80076218(rdram, ctx);
        goto after_6;
    // 0x8006665C: nop

    after_6:
    // 0x80066660: b           L_8006668C
    // 0x80066664: nop

        goto L_8006668C;
    // 0x80066664: nop

L_80066668:
    // 0x80066668: beq         $t7, $zero, L_80066684
    if (ctx->r15 == 0) {
        // 0x8006666C: nop
    
            goto L_80066684;
    }
    // 0x8006666C: nop

    // 0x80066670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066674: jal         0x800762C0
    // 0x80066678: nop

    func_800762C0(rdram, ctx);
        goto after_7;
    // 0x80066678: nop

    after_7:
    // 0x8006667C: b           L_8006668C
    // 0x80066680: nop

        goto L_8006668C;
    // 0x80066680: nop

L_80066684:
    // 0x80066684: jal         0x8007629C
    // 0x80066688: nop

    func_8007629C(rdram, ctx);
        goto after_8;
    // 0x80066688: nop

    after_8:
L_8006668C:
    // 0x8006668C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80066690: lhu         $t8, 0x954($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X954);
    // 0x80066694: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80066698: b           L_800666D4
    // 0x8006669C: sh          $t8, 0xA18($at)
    MEM_H(0XA18, ctx->r1) = ctx->r24;
        goto L_800666D4;
    // 0x8006669C: sh          $t8, 0xA18($at)
    MEM_H(0XA18, ctx->r1) = ctx->r24;
L_800666A0:
    // 0x800666A0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800666A4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800666A8: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x800666AC: nop

    // 0x800666B0: lh          $t1, 0x8B0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8B0);
    // 0x800666B4: nop

    // 0x800666B8: slti        $at, $t1, 0xFA
    ctx->r1 = SIGNED(ctx->r9) < 0XFA ? 1 : 0;
    // 0x800666BC: beq         $at, $zero, L_800666D8
    if (ctx->r1 == 0) {
        // 0x800666C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800666D8;
    }
    // 0x800666C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800666C4: lhu         $t2, 0x956($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X956);
    // 0x800666C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800666CC: andi        $t3, $t2, 0xFFDF
    ctx->r11 = ctx->r10 & 0XFFDF;
    // 0x800666D0: sh          $t3, 0x956($at)
    MEM_H(0X956, ctx->r1) = ctx->r11;
L_800666D4:
    // 0x800666D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800666D8:
    // 0x800666D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800666DC: jr          $ra
    // 0x800666E0: nop

    return;
    // 0x800666E0: nop

;}
RECOMP_FUNC void func_800666E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800666E4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800666E8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x800666EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800666F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800666F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800666F8: bne         $t6, $zero, L_80066910
    if (ctx->r14 != 0) {
        // 0x800666FC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80066910;
    }
    // 0x800666FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066700: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80066704: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80066708: nop

    // 0x8006670C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80066710: jal         0x80272AEC
    // 0x80066714: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80066714: nop

    after_0:
    // 0x80066718: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8006671C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80066720: nop

    // 0x80066724: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80066728: nop

    // 0x8006672C: bc1f        L_80066880
    if (!c1cs) {
        // 0x80066730: nop
    
            goto L_80066880;
    }
    // 0x80066730: nop

    // 0x80066734: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x80066738: nop

    // 0x8006673C: lh          $v0, 0x8B0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8B0);
    // 0x80066740: nop

    // 0x80066744: slti        $at, $v0, 0xF5
    ctx->r1 = SIGNED(ctx->r2) < 0XF5 ? 1 : 0;
    // 0x80066748: bne         $at, $zero, L_80066880
    if (ctx->r1 != 0) {
        // 0x8006674C: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_80066880;
    }
    // 0x8006674C: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x80066750: beq         $at, $zero, L_80066880
    if (ctx->r1 == 0) {
        // 0x80066754: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_80066880;
    }
    // 0x80066754: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80066758: addiu       $a1, $a1, 0x950
    ctx->r5 = ADD32(ctx->r5, 0X950);
    // 0x8006675C: lhu         $t8, 0x52($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X52);
    // 0x80066760: lhu         $t9, 0x6($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6);
    // 0x80066764: nop

    // 0x80066768: beq         $t8, $t9, L_80066780
    if (ctx->r24 == ctx->r25) {
        // 0x8006676C: nop
    
            goto L_80066780;
    }
    // 0x8006676C: nop

    // 0x80066770: lhu         $t0, 0x6($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X6);
    // 0x80066774: nop

    // 0x80066778: andi        $t1, $t0, 0xFFEF
    ctx->r9 = ctx->r8 & 0XFFEF;
    // 0x8006677C: sh          $t1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r9;
L_80066780:
    // 0x80066780: lhu         $v1, 0x6($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X6);
    // 0x80066784: nop

    // 0x80066788: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x8006678C: beq         $t2, $zero, L_80066834
    if (ctx->r10 == 0) {
        // 0x80066790: ori         $t0, $v1, 0x10
        ctx->r8 = ctx->r3 | 0X10;
            goto L_80066834;
    }
    // 0x80066790: ori         $t0, $v1, 0x10
    ctx->r8 = ctx->r3 | 0X10;
    // 0x80066794: lhu         $t3, 0x54($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X54);
    // 0x80066798: lhu         $t4, 0x1A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X1A);
    // 0x8006679C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800667A0: bne         $t3, $t4, L_80066880
    if (ctx->r11 != ctx->r12) {
        // 0x800667A4: nop
    
            goto L_80066880;
    }
    // 0x800667A4: nop

    // 0x800667A8: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x800667AC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800667B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800667B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800667B8: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x800667BC: nop

    // 0x800667C0: bc1f        L_80066880
    if (!c1cs) {
        // 0x800667C4: nop
    
            goto L_80066880;
    }
    // 0x800667C4: nop

    // 0x800667C8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x800667CC: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x800667D0: lh          $t6, 0x8B0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X8B0);
    // 0x800667D4: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x800667D8: slti        $at, $t6, 0x127
    ctx->r1 = SIGNED(ctx->r14) < 0X127 ? 1 : 0;
    // 0x800667DC: bne         $at, $zero, L_80066880
    if (ctx->r1 != 0) {
        // 0x800667E0: nop
    
            goto L_80066880;
    }
    // 0x800667E0: nop

    // 0x800667E4: sh          $t7, 0x54($a1)
    MEM_H(0X54, ctx->r5) = ctx->r15;
    // 0x800667E8: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x800667EC: nop

    // 0x800667F0: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x800667F4: beq         $t8, $zero, L_8006680C
    if (ctx->r24 == 0) {
        // 0x800667F8: andi        $t9, $v0, 0x2
        ctx->r25 = ctx->r2 & 0X2;
            goto L_8006680C;
    }
    // 0x800667F8: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x800667FC: jal         0x80076458
    // 0x80066800: nop

    func_80076458(rdram, ctx);
        goto after_1;
    // 0x80066800: nop

    after_1:
    // 0x80066804: b           L_80066884
    // 0x80066808: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
        goto L_80066884;
    // 0x80066808: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_8006680C:
    // 0x8006680C: beq         $t9, $zero, L_80066824
    if (ctx->r25 == 0) {
        // 0x80066810: nop
    
            goto L_80066824;
    }
    // 0x80066810: nop

    // 0x80066814: jal         0x8007648C
    // 0x80066818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007648C(rdram, ctx);
        goto after_2;
    // 0x80066818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8006681C: b           L_80066884
    // 0x80066820: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
        goto L_80066884;
    // 0x80066820: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_80066824:
    // 0x80066824: jal         0x800764C8
    // 0x80066828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800764C8(rdram, ctx);
        goto after_3;
    // 0x80066828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8006682C: b           L_80066884
    // 0x80066830: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
        goto L_80066884;
    // 0x80066830: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_80066834:
    // 0x80066834: sh          $t0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r8;
    // 0x80066838: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x8006683C: lhu         $a0, 0x8C($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X8C);
    // 0x80066840: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x80066844: nop

    // 0x80066848: sh          $t2, 0x52($a1)
    MEM_H(0X52, ctx->r5) = ctx->r10;
    // 0x8006684C: lhu         $t3, 0x1A($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X1A);
    // 0x80066850: jal         0x8006445C
    // 0x80066854: sh          $t3, 0x54($a1)
    MEM_H(0X54, ctx->r5) = ctx->r11;
    func_8006445C(rdram, ctx);
        goto after_4;
    // 0x80066854: sh          $t3, 0x54($a1)
    MEM_H(0X54, ctx->r5) = ctx->r11;
    after_4:
    // 0x80066858: sltiu       $at, $v0, 0x1C3
    ctx->r1 = ctx->r2 < 0X1C3 ? 1 : 0;
    // 0x8006685C: bne         $at, $zero, L_80066880
    if (ctx->r1 != 0) {
        // 0x80066860: nop
    
            goto L_80066880;
    }
    // 0x80066860: nop

    // 0x80066864: jal         0x8007639C
    // 0x80066868: nop

    func_8007639C(rdram, ctx);
        goto after_5;
    // 0x80066868: nop

    after_5:
    // 0x8006686C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80066870: addiu       $a1, $a1, 0x950
    ctx->r5 = ADD32(ctx->r5, 0X950);
    // 0x80066874: lhu         $t4, 0x4($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X4);
    // 0x80066878: nop

    // 0x8006687C: sh          $t4, 0x8C($a1)
    MEM_H(0X8C, ctx->r5) = ctx->r12;
L_80066880:
    // 0x80066880: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_80066884:
    // 0x80066884: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80066888: lh          $t5, 0x8B0($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X8B0);
    // 0x8006688C: addiu       $a1, $a1, 0x950
    ctx->r5 = ADD32(ctx->r5, 0X950);
    // 0x80066890: lhu         $v1, 0x6($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X6);
    // 0x80066894: bgez        $t5, L_800668A8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80066898: andi        $t6, $v1, 0xFFEF
        ctx->r14 = ctx->r3 & 0XFFEF;
            goto L_800668A8;
    }
    // 0x80066898: andi        $t6, $v1, 0xFFEF
    ctx->r14 = ctx->r3 & 0XFFEF;
    // 0x8006689C: sh          $t6, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r14;
    // 0x800668A0: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x800668A4: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
L_800668A8:
    // 0x800668A8: lhu         $t7, 0x56($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X56);
    // 0x800668AC: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x800668B0: andi        $t9, $v1, 0xFFBF
    ctx->r25 = ctx->r3 & 0XFFBF;
    // 0x800668B4: beq         $t7, $t8, L_800668C8
    if (ctx->r15 == ctx->r24) {
        // 0x800668B8: andi        $t0, $v1, 0x10
        ctx->r8 = ctx->r3 & 0X10;
            goto L_800668C8;
    }
    // 0x800668B8: andi        $t0, $v1, 0x10
    ctx->r8 = ctx->r3 & 0X10;
    // 0x800668BC: sh          $t9, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r25;
    // 0x800668C0: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x800668C4: andi        $t0, $v1, 0x10
    ctx->r8 = ctx->r3 & 0X10;
L_800668C8:
    // 0x800668C8: bne         $t0, $zero, L_80066914
    if (ctx->r8 != 0) {
        // 0x800668CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80066914;
    }
    // 0x800668CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800668D0: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x800668D4: nop

    // 0x800668D8: lh          $v0, 0x8B0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X8B0);
    // 0x800668DC: nop

    // 0x800668E0: blez        $v0, L_80066910
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800668E4: slti        $at, $v0, 0xF4
        ctx->r1 = SIGNED(ctx->r2) < 0XF4 ? 1 : 0;
            goto L_80066910;
    }
    // 0x800668E4: slti        $at, $v0, 0xF4
    ctx->r1 = SIGNED(ctx->r2) < 0XF4 ? 1 : 0;
    // 0x800668E8: beq         $at, $zero, L_80066910
    if (ctx->r1 == 0) {
        // 0x800668EC: andi        $t2, $v1, 0x40
        ctx->r10 = ctx->r3 & 0X40;
            goto L_80066910;
    }
    // 0x800668EC: andi        $t2, $v1, 0x40
    ctx->r10 = ctx->r3 & 0X40;
    // 0x800668F0: bne         $t2, $zero, L_80066910
    if (ctx->r10 != 0) {
        // 0x800668F4: ori         $t3, $v1, 0x40
        ctx->r11 = ctx->r3 | 0X40;
            goto L_80066910;
    }
    // 0x800668F4: ori         $t3, $v1, 0x40
    ctx->r11 = ctx->r3 | 0X40;
    // 0x800668F8: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
    // 0x800668FC: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x80066900: nop

    // 0x80066904: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x80066908: nop

    // 0x8006690C: sh          $t5, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r13;
L_80066910:
    // 0x80066910: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80066914:
    // 0x80066914: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066918: jr          $ra
    // 0x8006691C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8006691C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80066920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066920: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80066924: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80066928: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006692C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066930: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    // 0x80066934: nop

    // 0x80066938: beq         $a0, $v0, L_80066AB8
    if (ctx->r4 == ctx->r2) {
        // 0x8006693C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066AB8;
    }
    // 0x8006693C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066940: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80066944: lw          $t8, 0xC8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC8);
    // 0x80066948: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006694C: bne         $t7, $t8, L_80066AB8
    if (ctx->r15 != ctx->r24) {
        // 0x80066950: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066AB8;
    }
    // 0x80066950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066954: lhu         $t9, 0x956($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X956);
    // 0x80066958: nop

    // 0x8006695C: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x80066960: bne         $t0, $zero, L_80066AB8
    if (ctx->r8 != 0) {
        // 0x80066964: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066AB8;
    }
    // 0x80066964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066968: lw          $a1, 0x4C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4C);
    // 0x8006696C: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x80066970: jal         0x8027200C
    // 0x80066974: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_0;
    // 0x80066974: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80066978: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006697C: bne         $v0, $zero, L_80066AB4
    if (ctx->r2 != 0) {
        // 0x80066980: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_80066AB4;
    }
    // 0x80066980: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80066984: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80066988: lh          $t1, 0x6C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X6C);
    // 0x8006698C: lh          $t2, 0x6E($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6E);
    // 0x80066990: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80066994: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80066998: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006699C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x800669A0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800669A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800669A8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x800669AC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800669B0: jal         0x80272B98
    // 0x800669B4: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_1;
    // 0x800669B4: nop

    after_1:
    // 0x800669B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800669BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800669C0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800669C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800669C8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800669CC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800669D0: bc1t        L_80066AB4
    if (c1cs) {
        // 0x800669D4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80066AB4;
    }
    // 0x800669D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800669D8: lwc1        $f16, 0x88($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X88);
    // 0x800669DC: lwc1        $f5, -0x61F8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X61F8);
    // 0x800669E0: lwc1        $f4, -0x61F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X61F4);
    // 0x800669E4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800669E8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800669EC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800669F0: jal         0x80279308
    // 0x800669F4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_2;
    // 0x800669F4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x800669F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800669FC: lwc1        $f9, -0x61F0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X61F0);
    // 0x80066A00: lwc1        $f8, -0x61EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X61EC);
    // 0x80066A04: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80066A08: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80066A0C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80066A10: bc1f        L_80066AB4
    if (!c1cs) {
        // 0x80066A14: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_80066AB4;
    }
    // 0x80066A14: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80066A18: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x80066A1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80066A20: lwc1        $f18, 0x31C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X31C);
    // 0x80066A24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80066A28: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80066A2C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80066A30: bc1f        L_80066AB4
    if (!c1cs) {
        // 0x80066A34: lui         $v0, 0x8028
        ctx->r2 = S32(0X8028 << 16);
            goto L_80066AB4;
    }
    // 0x80066A34: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80066A38: lhu         $t4, 0x956($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X956);
    // 0x80066A3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80066A40: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80066A44: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80066A48: ori         $t5, $t4, 0x200
    ctx->r13 = ctx->r12 | 0X200;
    // 0x80066A4C: sh          $t5, 0x956($at)
    MEM_H(0X956, ctx->r1) = ctx->r13;
    // 0x80066A50: bne         $t7, $zero, L_80066AB4
    if (ctx->r15 != 0) {
        // 0x80066A54: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_80066AB4;
    }
    // 0x80066A54: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80066A58: sltiu       $v1, $t6, 0x1
    ctx->r3 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80066A5C: beq         $v1, $zero, L_80066A74
    if (ctx->r3 == 0) {
        // 0x80066A60: addiu       $v0, $t6, -0x1
        ctx->r2 = ADD32(ctx->r14, -0X1);
            goto L_80066A74;
    }
    // 0x80066A60: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x80066A64: jal         0x80075B70
    // 0x80066A68: nop

    func_80075B70(rdram, ctx);
        goto after_3;
    // 0x80066A68: nop

    after_3:
    // 0x80066A6C: b           L_80066AB8
    // 0x80066A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066AB8;
    // 0x80066A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066A74:
    // 0x80066A74: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80066A78: beq         $v1, $zero, L_80066A90
    if (ctx->r3 == 0) {
        // 0x80066A7C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80066A90;
    }
    // 0x80066A7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80066A80: jal         0x80075B94
    // 0x80066A84: nop

    func_80075B94(rdram, ctx);
        goto after_4;
    // 0x80066A84: nop

    after_4:
    // 0x80066A88: b           L_80066AB8
    // 0x80066A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066AB8;
    // 0x80066A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066A90:
    // 0x80066A90: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80066A94: beq         $v1, $zero, L_80066AAC
    if (ctx->r3 == 0) {
        // 0x80066A98: nop
    
            goto L_80066AAC;
    }
    // 0x80066A98: nop

    // 0x80066A9C: jal         0x80075BB8
    // 0x80066AA0: nop

    func_80075BB8(rdram, ctx);
        goto after_5;
    // 0x80066AA0: nop

    after_5:
    // 0x80066AA4: b           L_80066AB8
    // 0x80066AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066AB8;
    // 0x80066AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066AAC:
    // 0x80066AAC: jal         0x80075BE0
    // 0x80066AB0: nop

    func_80075BE0(rdram, ctx);
        goto after_6;
    // 0x80066AB0: nop

    after_6:
L_80066AB4:
    // 0x80066AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066AB8:
    // 0x80066AB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80066ABC: jr          $ra
    // 0x80066AC0: nop

    return;
    // 0x80066AC0: nop

;}
RECOMP_FUNC void func_80066AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066AC4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066AC8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066AD4: bne         $t6, $zero, L_80066B7C
    if (ctx->r14 != 0) {
        // 0x80066AD8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80066B7C;
    }
    // 0x80066AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066ADC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066AE0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066AE4: lhu         $t7, 0x1C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X1C);
    // 0x80066AE8: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80066AEC: bne         $t7, $at, L_80066B80
    if (ctx->r15 != ctx->r1) {
        // 0x80066AF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066B80;
    }
    // 0x80066AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066AF4: lhu         $a0, 0xC6($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XC6);
    // 0x80066AF8: jal         0x8006445C
    // 0x80066AFC: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80066AFC: nop

    after_0:
    // 0x80066B00: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066B04: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x80066B08: bne         $at, $zero, L_80066B7C
    if (ctx->r1 != 0) {
        // 0x80066B0C: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80066B7C;
    }
    // 0x80066B0C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066B10: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x80066B14: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80066B18: sh          $t8, 0xC6($v1)
    MEM_H(0XC6, ctx->r3) = ctx->r24;
    // 0x80066B1C: lw          $v0, 0xC8($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XC8);
    // 0x80066B20: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x80066B24: lh          $t0, 0x8B0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X8B0);
    // 0x80066B28: nop

    // 0x80066B2C: slti        $at, $t0, 0xFB
    ctx->r1 = SIGNED(ctx->r8) < 0XFB ? 1 : 0;
    // 0x80066B30: bne         $at, $zero, L_80066B80
    if (ctx->r1 != 0) {
        // 0x80066B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066B80;
    }
    // 0x80066B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066B38: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x80066B3C: nop

    // 0x80066B40: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80066B44: beq         $t2, $zero, L_80066B80
    if (ctx->r10 == 0) {
        // 0x80066B48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066B80;
    }
    // 0x80066B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066B4C: lw          $t3, 0x20($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X20);
    // 0x80066B50: nop

    // 0x80066B54: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x80066B58: nop

    // 0x80066B5C: bne         $v0, $t4, L_80066B74
    if (ctx->r2 != ctx->r12) {
        // 0x80066B60: nop
    
            goto L_80066B74;
    }
    // 0x80066B60: nop

    // 0x80066B64: jal         0x80075E28
    // 0x80066B68: nop

    func_80075E28(rdram, ctx);
        goto after_1;
    // 0x80066B68: nop

    after_1:
    // 0x80066B6C: b           L_80066B80
    // 0x80066B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066B80;
    // 0x80066B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066B74:
    // 0x80066B74: jal         0x80075DF4
    // 0x80066B78: nop

    func_80075DF4(rdram, ctx);
        goto after_2;
    // 0x80066B78: nop

    after_2:
L_80066B7C:
    // 0x80066B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066B80:
    // 0x80066B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066B84: jr          $ra
    // 0x80066B88: nop

    return;
    // 0x80066B88: nop

;}
RECOMP_FUNC void func_80066B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066B8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066B90: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066B98: bne         $t6, $zero, L_80066C54
    if (ctx->r14 != 0) {
        // 0x80066B9C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80066C54;
    }
    // 0x80066B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066BA0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80066BA4: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80066BA8: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x80066BAC: nop

    // 0x80066BB0: andi        $t8, $t7, 0xFEFF
    ctx->r24 = ctx->r15 & 0XFEFF;
    // 0x80066BB4: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
    // 0x80066BB8: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80066BBC: nop

    // 0x80066BC0: lh          $t0, 0x8CA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8CA);
    // 0x80066BC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066BC8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80066BCC: nop

    // 0x80066BD0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80066BD4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80066BD8: jal         0x8026AB68
    // 0x80066BDC: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_0;
    // 0x80066BDC: nop

    after_0:
    // 0x80066BE0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80066BE4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80066BE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066BEC: lh          $t2, 0xDE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XDE);
    // 0x80066BF0: nop

    // 0x80066BF4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80066BF8: nop

    // 0x80066BFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80066C00: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80066C04: jal         0x8026AB68
    // 0x80066C08: nop

    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_1;
    // 0x80066C08: nop

    after_1:
    // 0x80066C0C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80066C10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80066C14: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x80066C18: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80066C1C: lh          $t5, 0x8CA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X8CA);
    // 0x80066C20: nop

    // 0x80066C24: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80066C28: nop

    // 0x80066C2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80066C30: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80066C34: nop

    // 0x80066C38: bc1f        L_80066C58
    if (!c1cs) {
        // 0x80066C3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066C58;
    }
    // 0x80066C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066C40: lhu         $t6, 0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6);
    // 0x80066C44: nop

    // 0x80066C48: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80066C4C: jal         0x80075D64
    // 0x80066C50: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    func_80075D64(rdram, ctx);
        goto after_2;
    // 0x80066C50: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    after_2:
L_80066C54:
    // 0x80066C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066C58:
    // 0x80066C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066C5C: jr          $ra
    // 0x80066C60: nop

    return;
    // 0x80066C60: nop

;}
RECOMP_FUNC void func_80066C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066C64: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066C68: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066C70: bne         $t6, $zero, L_80066CF8
    if (ctx->r14 != 0) {
        // 0x80066C74: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80066CF8;
    }
    // 0x80066C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066C78: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80066C7C: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80066C80: lhu         $t7, 0x1C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1C);
    // 0x80066C84: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80066C88: bne         $t7, $at, L_80066CFC
    if (ctx->r15 != ctx->r1) {
        // 0x80066C8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066CFC;
    }
    // 0x80066C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066C90: lhu         $t8, 0x6($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X6);
    // 0x80066C94: nop

    // 0x80066C98: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x80066C9C: beq         $t9, $zero, L_80066CFC
    if (ctx->r25 == 0) {
        // 0x80066CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066CFC;
    }
    // 0x80066CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066CA4: lw          $t1, 0x20($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X20);
    // 0x80066CA8: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x80066CAC: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x80066CB0: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80066CB4: bne         $t0, $t2, L_80066CF0
    if (ctx->r8 != ctx->r10) {
        // 0x80066CB8: nop
    
            goto L_80066CF0;
    }
    // 0x80066CB8: nop

    // 0x80066CBC: lh          $t3, -0x1B60($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1B60);
    // 0x80066CC0: nop

    // 0x80066CC4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80066CC8: beq         $t4, $zero, L_80066CE0
    if (ctx->r12 == 0) {
        // 0x80066CCC: nop
    
            goto L_80066CE0;
    }
    // 0x80066CCC: nop

    // 0x80066CD0: jal         0x80075D18
    // 0x80066CD4: nop

    func_80075D18(rdram, ctx);
        goto after_0;
    // 0x80066CD4: nop

    after_0:
    // 0x80066CD8: b           L_80066CFC
    // 0x80066CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066CFC;
    // 0x80066CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066CE0:
    // 0x80066CE0: jal         0x80075DD0
    // 0x80066CE4: nop

    func_80075DD0(rdram, ctx);
        goto after_1;
    // 0x80066CE4: nop

    after_1:
    // 0x80066CE8: b           L_80066CFC
    // 0x80066CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066CFC;
    // 0x80066CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066CF0:
    // 0x80066CF0: jal         0x80075DF4
    // 0x80066CF4: nop

    func_80075DF4(rdram, ctx);
        goto after_2;
    // 0x80066CF4: nop

    after_2:
L_80066CF8:
    // 0x80066CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066CFC:
    // 0x80066CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066D00: jr          $ra
    // 0x80066D04: nop

    return;
    // 0x80066D04: nop

;}
RECOMP_FUNC void func_80066D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066D10: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80066D14: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80066D18: lh          $t6, 0x8B0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8B0);
    // 0x80066D1C: addiu       $a0, $a0, 0x950
    ctx->r4 = ADD32(ctx->r4, 0X950);
    // 0x80066D20: slti        $at, $t6, -0x157
    ctx->r1 = SIGNED(ctx->r14) < -0X157 ? 1 : 0;
    // 0x80066D24: bne         $at, $zero, L_80066DB8
    if (ctx->r1 != 0) {
        // 0x80066D28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066DB8;
    }
    // 0x80066D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066D2C: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80066D30: nop

    // 0x80066D34: andi        $t7, $v1, 0x80
    ctx->r15 = ctx->r3 & 0X80;
    // 0x80066D38: beq         $t7, $zero, L_80066DB8
    if (ctx->r15 == 0) {
        // 0x80066D3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066DB8;
    }
    // 0x80066D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066D40: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x80066D44: andi        $t9, $v1, 0xFF7F
    ctx->r25 = ctx->r3 & 0XFF7F;
    // 0x80066D48: beq         $t8, $v0, L_80066DB4
    if (ctx->r24 == ctx->r2) {
        // 0x80066D4C: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80066DB4;
    }
    // 0x80066D4C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80066D50: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
    // 0x80066D54: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80066D58: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80066D5C: lbu         $t1, 0xBD($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XBD);
    // 0x80066D60: nop

    // 0x80066D64: andi        $t2, $t1, 0x6
    ctx->r10 = ctx->r9 & 0X6;
    // 0x80066D68: beq         $t2, $zero, L_80066DAC
    if (ctx->r10 == 0) {
        // 0x80066D6C: nop
    
            goto L_80066DAC;
    }
    // 0x80066D6C: nop

    // 0x80066D70: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80066D74: nop

    // 0x80066D78: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80066D7C: beq         $t3, $zero, L_80066DB4
    if (ctx->r11 == 0) {
        // 0x80066D80: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_80066DB4;
    }
    // 0x80066D80: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x80066D84: beq         $t4, $zero, L_80066D9C
    if (ctx->r12 == 0) {
        // 0x80066D88: nop
    
            goto L_80066D9C;
    }
    // 0x80066D88: nop

    // 0x80066D8C: jal         0x80076108
    // 0x80066D90: nop

    func_80076108(rdram, ctx);
        goto after_0;
    // 0x80066D90: nop

    after_0:
    // 0x80066D94: b           L_80066DB8
    // 0x80066D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066DB8;
    // 0x80066D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066D9C:
    // 0x80066D9C: jal         0x80260F5C
    // 0x80066DA0: nop

    LOOKUP_FUNC(0x80260F5C)(rdram, ctx);
        goto after_1;
    // 0x80066DA0: nop

    after_1:
    // 0x80066DA4: b           L_80066DB8
    // 0x80066DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066DB8;
    // 0x80066DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066DAC:
    // 0x80066DAC: jal         0x80076108
    // 0x80066DB0: nop

    func_80076108(rdram, ctx);
        goto after_2;
    // 0x80066DB0: nop

    after_2:
L_80066DB4:
    // 0x80066DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066DB8:
    // 0x80066DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066DBC: jr          $ra
    // 0x80066DC0: nop

    return;
    // 0x80066DC0: nop

;}
RECOMP_FUNC void func_80066DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066DC4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066DC8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066DD4: bne         $t6, $zero, L_80066EBC
    if (ctx->r14 != 0) {
        // 0x80066DD8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80066EBC;
    }
    // 0x80066DD8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80066DDC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066DE0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066DE4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x80066DE8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80066DEC: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80066DF0: beq         $t7, $zero, L_80066EBC
    if (ctx->r15 == 0) {
        // 0x80066DF4: andi        $t8, $v0, 0xFF7F
        ctx->r24 = ctx->r2 & 0XFF7F;
            goto L_80066EBC;
    }
    // 0x80066DF4: andi        $t8, $v0, 0xFF7F
    ctx->r24 = ctx->r2 & 0XFF7F;
    // 0x80066DF8: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x80066DFC: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80066E00: nop

    // 0x80066E04: lhu         $t0, 0xC2($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XC2);
    // 0x80066E08: nop

    // 0x80066E0C: andi        $t1, $t0, 0x40
    ctx->r9 = ctx->r8 & 0X40;
    // 0x80066E10: bne         $t1, $zero, L_80066EC0
    if (ctx->r9 != 0) {
        // 0x80066E14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066EC0;
    }
    // 0x80066E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066E18: lw          $t2, 0x58($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X58);
    // 0x80066E1C: lw          $t3, 0x20($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X20);
    // 0x80066E20: nop

    // 0x80066E24: bne         $t2, $t3, L_80066EC0
    if (ctx->r10 != ctx->r11) {
        // 0x80066E28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066EC0;
    }
    // 0x80066E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066E2C: lhu         $a0, 0x5C($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X5C);
    // 0x80066E30: jal         0x8006445C
    // 0x80066E34: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80066E34: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80066E38: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066E3C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80066E40: sltiu       $at, $v0, 0x960
    ctx->r1 = ctx->r2 < 0X960 ? 1 : 0;
    // 0x80066E44: beq         $at, $zero, L_80066EBC
    if (ctx->r1 == 0) {
        // 0x80066E48: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80066EBC;
    }
    // 0x80066E48: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066E4C: lw          $t4, 0x58($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X58);
    // 0x80066E50: lw          $t6, 0xC8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC8);
    // 0x80066E54: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80066E58: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80066E5C: bne         $t5, $t6, L_80066EB4
    if (ctx->r13 != ctx->r14) {
        // 0x80066E60: nop
    
            goto L_80066EB4;
    }
    // 0x80066E60: nop

    // 0x80066E64: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80066E68: nop

    // 0x80066E6C: lw          $t7, 0x84($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X84);
    // 0x80066E70: nop

    // 0x80066E74: beq         $a1, $t7, L_80066E8C
    if (ctx->r5 == ctx->r15) {
        // 0x80066E78: nop
    
            goto L_80066E8C;
    }
    // 0x80066E78: nop

    // 0x80066E7C: lw          $t8, 0xB0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XB0);
    // 0x80066E80: nop

    // 0x80066E84: bne         $a1, $t8, L_80066EC0
    if (ctx->r5 != ctx->r24) {
        // 0x80066E88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066EC0;
    }
    // 0x80066E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066E8C:
    // 0x80066E8C: lhu         $a0, 0xB6($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XB6);
    // 0x80066E90: jal         0x8006445C
    // 0x80066E94: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80066E94: nop

    after_1:
    // 0x80066E98: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x80066E9C: bne         $at, $zero, L_80066EC0
    if (ctx->r1 != 0) {
        // 0x80066EA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80066EC0;
    }
    // 0x80066EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066EA4: jal         0x80076088
    // 0x80066EA8: nop

    func_80076088(rdram, ctx);
        goto after_2;
    // 0x80066EA8: nop

    after_2:
    // 0x80066EAC: b           L_80066EC0
    // 0x80066EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80066EC0;
    // 0x80066EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066EB4:
    // 0x80066EB4: jal         0x80076108
    // 0x80066EB8: nop

    func_80076108(rdram, ctx);
        goto after_3;
    // 0x80066EB8: nop

    after_3:
L_80066EBC:
    // 0x80066EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066EC0:
    // 0x80066EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066EC4: jr          $ra
    // 0x80066EC8: nop

    return;
    // 0x80066EC8: nop

;}
RECOMP_FUNC void func_80066ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066ECC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066ED0: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066EDC: beq         $t6, $zero, L_80066EEC
    if (ctx->r14 == 0) {
        // 0x80066EE0: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80066EEC;
    }
    // 0x80066EE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066EE4: b           L_80066F58
    // 0x80066EE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80066F58;
    // 0x80066EE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80066EEC:
    // 0x80066EEC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066EF0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066EF4: lhu         $a0, 0x62($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X62);
    // 0x80066EF8: jal         0x8006445C
    // 0x80066EFC: nop

    func_8006445C(rdram, ctx);
        goto after_0;
    // 0x80066EFC: nop

    after_0:
    // 0x80066F00: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066F04: sltiu       $at, $v0, 0x258
    ctx->r1 = ctx->r2 < 0X258 ? 1 : 0;
    // 0x80066F08: beq         $at, $zero, L_80066F3C
    if (ctx->r1 == 0) {
        // 0x80066F0C: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80066F3C;
    }
    // 0x80066F0C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066F10: jal         0x800761E0
    // 0x80066F14: nop

    func_800761E0(rdram, ctx);
        goto after_1;
    // 0x80066F14: nop

    after_1:
    // 0x80066F18: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80066F1C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80066F20: lhu         $t7, 0x4($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X4);
    // 0x80066F24: sh          $zero, 0x5E($v1)
    MEM_H(0X5E, ctx->r3) = 0;
    // 0x80066F28: sh          $zero, 0x60($v1)
    MEM_H(0X60, ctx->r3) = 0;
    // 0x80066F2C: sh          $zero, 0x62($v1)
    MEM_H(0X62, ctx->r3) = 0;
    // 0x80066F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80066F34: b           L_80066F58
    // 0x80066F38: sh          $t7, 0xB6($v1)
    MEM_H(0XB6, ctx->r3) = ctx->r15;
        goto L_80066F58;
    // 0x80066F38: sh          $t7, 0xB6($v1)
    MEM_H(0XB6, ctx->r3) = ctx->r15;
L_80066F3C:
    // 0x80066F3C: lhu         $t8, 0x60($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X60);
    // 0x80066F40: lhu         $t9, 0x5E($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X5E);
    // 0x80066F44: lhu         $t0, 0x4($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X4);
    // 0x80066F48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80066F4C: sh          $t8, 0x62($v1)
    MEM_H(0X62, ctx->r3) = ctx->r24;
    // 0x80066F50: sh          $t9, 0x60($v1)
    MEM_H(0X60, ctx->r3) = ctx->r25;
    // 0x80066F54: sh          $t0, 0x5E($v1)
    MEM_H(0X5E, ctx->r3) = ctx->r8;
L_80066F58:
    // 0x80066F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066F60: jr          $ra
    // 0x80066F64: nop

    return;
    // 0x80066F64: nop

;}
RECOMP_FUNC void func_80066F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066F68: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80066F6C: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80066F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066F74: bne         $t6, $zero, L_800670E0
    if (ctx->r14 != 0) {
        // 0x80066F78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800670E0;
    }
    // 0x80066F78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066F7C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80066F80: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80066F84: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x80066F88: sw          $a0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r4;
    // 0x80066F8C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80066F90: sh          $t7, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r15;
    // 0x80066F94: lwc1        $f12, 0x64C0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64C0);
    // 0x80066F98: jal         0x80272AEC
    // 0x80066F9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80066F9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80066FA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80066FA4: lwc1        $f4, -0x61E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X61E8);
    // 0x80066FA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066FAC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80066FB0: nop

    // 0x80066FB4: bc1f        L_80066FE8
    if (!c1cs) {
        // 0x80066FB8: nop
    
            goto L_80066FE8;
    }
    // 0x80066FB8: nop

    // 0x80066FBC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80066FC0: lhu         $a0, 0xA0E($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0XA0E);
    // 0x80066FC4: jal         0x8006445C
    // 0x80066FC8: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80066FC8: nop

    after_1:
    // 0x80066FCC: sltiu       $at, $v0, 0x3D
    ctx->r1 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x80066FD0: bne         $at, $zero, L_800670E4
    if (ctx->r1 != 0) {
        // 0x80066FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800670E4;
    }
    // 0x80066FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066FD8: jal         0x800761BC
    // 0x80066FDC: nop

    func_800761BC(rdram, ctx);
        goto after_2;
    // 0x80066FDC: nop

    after_2:
    // 0x80066FE0: b           L_800670E4
    // 0x80066FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800670E4;
    // 0x80066FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80066FE8:
    // 0x80066FE8: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80066FEC: nop

    // 0x80066FF0: lh          $v0, 0x8B0($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X8B0);
    // 0x80066FF4: nop

    // 0x80066FF8: bgez        $v0, L_800670E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80066FFC: slti        $at, $v0, -0x157
        ctx->r1 = SIGNED(ctx->r2) < -0X157 ? 1 : 0;
            goto L_800670E0;
    }
    // 0x80066FFC: slti        $at, $v0, -0x157
    ctx->r1 = SIGNED(ctx->r2) < -0X157 ? 1 : 0;
    // 0x80067000: bne         $at, $zero, L_800670E0
    if (ctx->r1 != 0) {
        // 0x80067004: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_800670E0;
    }
    // 0x80067004: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80067008: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8006700C: lui         $at, 0x401C
    ctx->r1 = S32(0X401C << 16);
    // 0x80067010: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x80067014: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80067018: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006701C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80067020: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80067024: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x80067028: bc1f        L_800670E4
    if (!c1cs) {
        // 0x8006702C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800670E4;
    }
    // 0x8006702C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067030: lw          $a1, 0x64C8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X64C8);
    // 0x80067034: jal         0x8026AB68
    // 0x80067038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026AB68)(rdram, ctx);
        goto after_3;
    // 0x80067038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x8006703C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067040: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80067044: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x80067048: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006704C: lh          $t1, 0x8B0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8B0);
    // 0x80067050: nop

    // 0x80067054: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80067058: nop

    // 0x8006705C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80067060: sub.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80067064: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80067068: nop

    // 0x8006706C: bc1f        L_800670E4
    if (!c1cs) {
        // 0x80067070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800670E4;
    }
    // 0x80067070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067074: jal         0x80066ECC
    // 0x80067078: nop

    func_80066ECC(rdram, ctx);
        goto after_4;
    // 0x80067078: nop

    after_4:
    // 0x8006707C: bne         $v0, $zero, L_800670C8
    if (ctx->r2 != 0) {
        // 0x80067080: lui         $v0, 0x8028
        ctx->r2 = S32(0X8028 << 16);
            goto L_800670C8;
    }
    // 0x80067080: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80067084: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x80067088: nop

    // 0x8006708C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80067090: beq         $t2, $zero, L_800670A8
    if (ctx->r10 == 0) {
        // 0x80067094: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_800670A8;
    }
    // 0x80067094: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x80067098: jal         0x80075F68
    // 0x8006709C: nop

    func_80075F68(rdram, ctx);
        goto after_5;
    // 0x8006709C: nop

    after_5:
    // 0x800670A0: b           L_800670C8
    // 0x800670A4: nop

        goto L_800670C8;
    // 0x800670A4: nop

L_800670A8:
    // 0x800670A8: beq         $t3, $zero, L_800670C0
    if (ctx->r11 == 0) {
        // 0x800670AC: nop
    
            goto L_800670C0;
    }
    // 0x800670AC: nop

    // 0x800670B0: jal         0x80075F20
    // 0x800670B4: nop

    func_80075F20(rdram, ctx);
        goto after_6;
    // 0x800670B4: nop

    after_6:
    // 0x800670B8: b           L_800670C8
    // 0x800670BC: nop

        goto L_800670C8;
    // 0x800670BC: nop

L_800670C0:
    // 0x800670C0: jal         0x80076198
    // 0x800670C4: nop

    func_80076198(rdram, ctx);
        goto after_7;
    // 0x800670C4: nop

    after_7:
L_800670C8:
    // 0x800670C8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800670CC: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x800670D0: lhu         $t4, 0x6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6);
    // 0x800670D4: nop

    // 0x800670D8: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x800670DC: sh          $t5, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r13;
L_800670E0:
    // 0x800670E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800670E4:
    // 0x800670E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800670E8: jr          $ra
    // 0x800670EC: nop

    return;
    // 0x800670EC: nop

;}
RECOMP_FUNC void func_800670F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800670F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800670F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800670F8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800670FC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80067100: lw          $v0, 0x24($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X24);
    // 0x80067104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80067108: lwc1        $f6, 0x8BC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x8006710C: nop

    // 0x80067110: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80067114: nop

    // 0x80067118: bc1t        L_800671E8
    if (c1cs) {
        // 0x8006711C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800671E8;
    }
    // 0x8006711C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067120: lhu         $t7, 0x370($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X370);
    // 0x80067124: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80067128: bne         $t7, $zero, L_800671E8
    if (ctx->r15 != 0) {
        // 0x8006712C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800671E8;
    }
    // 0x8006712C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067130: lhu         $t8, 0x318($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X318);
    // 0x80067134: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80067138: beq         $t8, $zero, L_8006714C
    if (ctx->r24 == 0) {
        // 0x8006713C: nop
    
            goto L_8006714C;
    }
    // 0x8006713C: nop

    // 0x80067140: lwc1        $f0, 0x31C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X31C);
    // 0x80067144: b           L_80067158
    // 0x80067148: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
        goto L_80067158;
    // 0x80067148: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
L_8006714C:
    // 0x8006714C: lwc1        $f0, 0x324($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X324);
    // 0x80067150: nop

    // 0x80067154: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
L_80067158:
    // 0x80067158: nop

    // 0x8006715C: bc1t        L_800671E8
    if (c1cs) {
        // 0x80067160: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800671E8;
    }
    // 0x80067160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067164: lh          $t9, 0x8B8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8B8);
    // 0x80067168: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x8006716C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80067170: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80067174: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80067178: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8006717C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80067180: jal         0x80272B98
    // 0x80067184: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x80067184: nop

    after_0:
    // 0x80067188: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8006718C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80067190: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80067194: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80067198: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8006719C: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800671A0: bc1t        L_800671E8
    if (c1cs) {
        // 0x800671A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800671E8;
    }
    // 0x800671A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800671A8: lhu         $a0, 0xCC($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XCC);
    // 0x800671AC: jal         0x8006445C
    // 0x800671B0: nop

    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x800671B0: nop

    after_1:
    // 0x800671B4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800671B8: sltiu       $at, $v0, 0x97
    ctx->r1 = ctx->r2 < 0X97 ? 1 : 0;
    // 0x800671BC: bne         $at, $zero, L_800671E4
    if (ctx->r1 != 0) {
        // 0x800671C0: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_800671E4;
    }
    // 0x800671C0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800671C4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x800671C8: nop

    // 0x800671CC: sh          $v0, 0xCC($v1)
    MEM_H(0XCC, ctx->r3) = ctx->r2;
    // 0x800671D0: sh          $v0, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r2;
    // 0x800671D4: sh          $v0, 0x90($v1)
    MEM_H(0X90, ctx->r3) = ctx->r2;
    // 0x800671D8: sh          $v0, 0xC8($v1)
    MEM_H(0XC8, ctx->r3) = ctx->r2;
    // 0x800671DC: jal         0x8007633C
    // 0x800671E0: sh          $v0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r2;
    func_8007633C(rdram, ctx);
        goto after_2;
    // 0x800671E0: sh          $v0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r2;
    after_2:
L_800671E4:
    // 0x800671E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800671E8:
    // 0x800671E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800671EC: jr          $ra
    // 0x800671F0: nop

    return;
    // 0x800671F0: nop

    // 0x800671F4: nop

    // 0x800671F8: nop

    // 0x800671FC: nop

;}
RECOMP_FUNC void func_80067200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80067204: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80067208: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006720C: lhu         $t6, 0x1A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1A);
    // 0x80067210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80067214: beq         $t6, $zero, L_80067224
    if (ctx->r14 == 0) {
        // 0x80067218: nop
    
            goto L_80067224;
    }
    // 0x80067218: nop

    // 0x8006721C: b           L_80067340
    // 0x80067220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80067340;
    // 0x80067220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80067224:
    // 0x80067224: jal         0x800681E8
    // 0x80067228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800681E8(rdram, ctx);
        goto after_0;
    // 0x80067228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006722C: bne         $v0, $zero, L_8006724C
    if (ctx->r2 != 0) {
        // 0x80067230: nop
    
            goto L_8006724C;
    }
    // 0x80067230: nop

    // 0x80067234: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x80067238: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x8006723C: jal         0x80272058
    // 0x80067240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272058)(rdram, ctx);
        goto after_1;
    // 0x80067240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80067244: beq         $v0, $zero, L_80067254
    if (ctx->r2 == 0) {
        // 0x80067248: lui         $at, 0x40E0
        ctx->r1 = S32(0X40E0 << 16);
            goto L_80067254;
    }
    // 0x80067248: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
L_8006724C:
    // 0x8006724C: b           L_80067340
    // 0x80067250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80067340;
    // 0x80067250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80067254:
    // 0x80067254: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067258: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8006725C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80067260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80067264: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80067268: addiu       $t7, $zero, 0x1FD
    ctx->r15 = ADD32(0, 0X1FD);
    // 0x8006726C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80067270: addiu       $t8, $zero, 0x1FC
    ctx->r24 = ADD32(0, 0X1FC);
    // 0x80067274: bc1f        L_80067284
    if (!c1cs) {
        // 0x80067278: nop
    
            goto L_80067284;
    }
    // 0x80067278: nop

    // 0x8006727C: b           L_80067288
    // 0x80067280: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
        goto L_80067288;
    // 0x80067280: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80067284:
    // 0x80067284: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
L_80067288:
    // 0x80067288: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8006728C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067290: swc1        $f6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f6.u32l;
    // 0x80067294: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80067298: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x8006729C: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800672A0: nop

    // 0x800672A4: swc1        $f8, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f8.u32l;
    // 0x800672A8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800672AC: nop

    // 0x800672B0: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800672B4: jal         0x8024BC08
    // 0x800672B8: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_2;
    // 0x800672B8: swc1        $f10, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x800672BC: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x800672C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800672C4: jal         0x80272D3C
    // 0x800672C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_3;
    // 0x800672C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800672CC: jal         0x80250BCC
    // 0x800672D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80250BCC)(rdram, ctx);
        goto after_4;
    // 0x800672D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800672D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800672D8: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x800672DC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800672E0: lwc1        $f16, 0xEC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XEC);
    // 0x800672E4: addiu       $at, $zero, 0x1FE
    ctx->r1 = ADD32(0, 0X1FE);
    // 0x800672E8: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x800672EC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800672F0: lwc1        $f18, 0xF0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XF0);
    // 0x800672F4: nop

    // 0x800672F8: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
    // 0x800672FC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80067300: lwc1        $f4, 0xF4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XF4);
    // 0x80067304: nop

    // 0x80067308: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
    // 0x8006730C: lhu         $t4, 0x26($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X26);
    // 0x80067310: nop

    // 0x80067314: beq         $t4, $at, L_80067340
    if (ctx->r12 == ctx->r1) {
        // 0x80067318: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80067340;
    }
    // 0x80067318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006731C: lw          $t5, 0xCC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XCC);
    // 0x80067320: nop

    // 0x80067324: lw          $v0, 0x30($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X30);
    // 0x80067328: nop

    // 0x8006732C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80067330: nop

    // 0x80067334: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x80067338: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x8006733C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80067340:
    // 0x80067340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80067344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80067348: jr          $ra
    // 0x8006734C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006734C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80067350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80067354: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067358: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8006735C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067360: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80067364: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80067368: lbu         $t6, 0xBD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBD);
    // 0x8006736C: nop

    // 0x80067370: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80067374: bne         $t7, $zero, L_80067384
    if (ctx->r15 != 0) {
        // 0x80067378: nop
    
            goto L_80067384;
    }
    // 0x80067378: nop

    // 0x8006737C: b           L_800674B4
    // 0x80067380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800674B4;
    // 0x80067380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80067384:
    // 0x80067384: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x80067388: jal         0x8006825C
    // 0x8006738C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8006825C(rdram, ctx);
        goto after_0;
    // 0x8006738C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80067390: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80067394: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80067398: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x8006739C: nop

    // 0x800673A0: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x800673A4: jal         0x802752E8
    // 0x800673A8: nop

    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_1;
    // 0x800673A8: nop

    after_1:
    // 0x800673AC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800673B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800673B4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800673B8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800673BC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800673C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800673C4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800673C8: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800673CC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800673D0: nop

    // 0x800673D4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800673D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800673DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800673E0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800673E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800673E8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800673EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800673F0: lwc1        $f10, 0x3648($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3648);
    // 0x800673F4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800673F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800673FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80067400: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80067404: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80067408: div.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8006740C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80067410: nop

    // 0x80067414: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80067418: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006741C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80067420: nop

    // 0x80067424: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80067428: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8006742C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80067430: bgez        $v1, L_8006743C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80067434: nop
    
            goto L_8006743C;
    }
    // 0x80067434: nop

    // 0x80067438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8006743C:
    // 0x8006743C: lw          $t1, 0xD8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XD8);
    // 0x80067440: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80067444: lbu         $a1, 0xA($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0XA);
    // 0x80067448: jal         0x802752E8
    // 0x8006744C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_2;
    // 0x8006744C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_2:
    // 0x80067450: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80067454: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80067458: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006745C: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x80067460: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80067464: lhu         $t1, 0x2C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2C);
    // 0x80067468: lw          $t3, 0xC8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC8);
    // 0x8006746C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80067470: lbu         $t4, 0x8A8($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8A8);
    // 0x80067474: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80067478: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8006747C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80067480: lh          $t6, -0x14A8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X14A8);
    // 0x80067484: lhu         $t8, 0x36($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X36);
    // 0x80067488: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8006748C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80067490: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80067494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80067498: mfhi        $t2
    ctx->r10 = hi;
    // 0x8006749C: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x800674A0: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800674A4: beq         $at, $zero, L_800674B4
    if (ctx->r1 == 0) {
        // 0x800674A8: nop
    
            goto L_800674B4;
    }
    // 0x800674A8: nop

    // 0x800674AC: b           L_800674B4
    // 0x800674B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800674B4;
    // 0x800674B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800674B4:
    // 0x800674B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800674B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800674BC: jr          $ra
    // 0x800674C0: nop

    return;
    // 0x800674C0: nop

;}
RECOMP_FUNC void func_800674C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800674C4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800674C8: addiu       $t0, $zero, 0x1F3
    ctx->r8 = ADD32(0, 0X1F3);
    // 0x800674CC: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x800674D0: addiu       $t9, $zero, -0x1F3
    ctx->r25 = ADD32(0, -0X1F3);
    // 0x800674D4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800674D8: beq         $t8, $zero, L_800674E8
    if (ctx->r24 == 0) {
        // 0x800674DC: nop
    
            goto L_800674E8;
    }
    // 0x800674DC: nop

    // 0x800674E0: jr          $ra
    // 0x800674E4: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
    return;
    // 0x800674E4: sh          $t9, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r25;
L_800674E8:
    // 0x800674E8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x800674EC: jr          $ra
    // 0x800674F0: nop

    return;
    // 0x800674F0: nop

;}
RECOMP_FUNC void func_800674F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800674F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800674F8: lhu         $v0, 0xB7A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB7A);
    // 0x800674FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067500: beq         $v0, $zero, L_800675CC
    if (ctx->r2 == 0) {
        // 0x80067504: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800675CC;
    }
    // 0x80067504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067508: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006750C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80067510: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80067514: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x80067518: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006751C: bne         $t7, $t8, L_800675D0
    if (ctx->r15 != ctx->r24) {
        // 0x80067520: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800675D0;
    }
    // 0x80067520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067524: beq         $v0, $at, L_80067540
    if (ctx->r2 == ctx->r1) {
        // 0x80067528: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_80067540;
    }
    // 0x80067528: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006752C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80067530: beq         $v0, $at, L_80067588
    if (ctx->r2 == ctx->r1) {
        // 0x80067534: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80067588;
    }
    // 0x80067534: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80067538: b           L_800675D0
    // 0x8006753C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800675D0;
    // 0x8006753C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80067540:
    // 0x80067540: lw          $t9, 0xB44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XB44);
    // 0x80067544: nop

    // 0x80067548: sltiu       $at, $t9, 0x14
    ctx->r1 = ctx->r25 < 0X14 ? 1 : 0;
    // 0x8006754C: beq         $at, $zero, L_800675D0
    if (ctx->r1 == 0) {
        // 0x80067550: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800675D0;
    }
    // 0x80067550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067554: jal         0x800674C4
    // 0x80067558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800674C4(rdram, ctx);
        goto after_0;
    // 0x80067558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8006755C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80067560: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80067564: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80067568: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x8006756C: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x80067570: blez        $t1, L_80067580
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80067574: addiu       $t2, $zero, -0xC
        ctx->r10 = ADD32(0, -0XC);
            goto L_80067580;
    }
    // 0x80067574: addiu       $t2, $zero, -0xC
    ctx->r10 = ADD32(0, -0XC);
    // 0x80067578: b           L_800675CC
    // 0x8006757C: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
        goto L_800675CC;
    // 0x8006757C: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
L_80067580:
    // 0x80067580: b           L_800675CC
    // 0x80067584: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
        goto L_800675CC;
    // 0x80067584: sh          $t3, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r11;
L_80067588:
    // 0x80067588: lw          $t4, 0xB44($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB44);
    // 0x8006758C: nop

    // 0x80067590: sltiu       $at, $t4, 0x14
    ctx->r1 = ctx->r12 < 0X14 ? 1 : 0;
    // 0x80067594: beq         $at, $zero, L_800675D0
    if (ctx->r1 == 0) {
        // 0x80067598: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800675D0;
    }
    // 0x80067598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006759C: jal         0x800674C4
    // 0x800675A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800674C4(rdram, ctx);
        goto after_1;
    // 0x800675A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x800675A4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x800675A8: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x800675AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800675B0: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x800675B4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800675B8: blez        $t6, L_800675C8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800675BC: addiu       $t7, $zero, -0xA
        ctx->r15 = ADD32(0, -0XA);
            goto L_800675C8;
    }
    // 0x800675BC: addiu       $t7, $zero, -0xA
    ctx->r15 = ADD32(0, -0XA);
    // 0x800675C0: b           L_800675CC
    // 0x800675C4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
        goto L_800675CC;
    // 0x800675C4: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
L_800675C8:
    // 0x800675C8: sh          $t8, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r24;
L_800675CC:
    // 0x800675CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800675D0:
    // 0x800675D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800675D4: jr          $ra
    // 0x800675D8: nop

    return;
    // 0x800675D8: nop

;}
RECOMP_FUNC void func_800675DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800675DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800675E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800675E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800675E8: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x800675EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800675F0: lbu         $t6, 0x868($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X868);
    // 0x800675F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800675F8: bne         $t6, $at, L_80067614
    if (ctx->r14 != ctx->r1) {
        // 0x800675FC: nop
    
            goto L_80067614;
    }
    // 0x800675FC: nop

    // 0x80067600: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x80067604: nop

    // 0x80067608: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8006760C: bne         $t8, $zero, L_80067624
    if (ctx->r24 != 0) {
        // 0x80067610: nop
    
            goto L_80067624;
    }
    // 0x80067610: nop

L_80067614:
    // 0x80067614: jal         0x80069D68
    // 0x80067618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069D68(rdram, ctx);
        goto after_0;
    // 0x80067618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006761C: bne         $v0, $zero, L_800678DC
    if (ctx->r2 != 0) {
        // 0x80067620: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800678DC;
    }
    // 0x80067620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80067624:
    // 0x80067624: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80067628: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006762C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80067630: lh          $t9, 0x8AE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8AE);
    // 0x80067634: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x80067638: beq         $t9, $zero, L_80067664
    if (ctx->r25 == 0) {
        // 0x8006763C: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_80067664;
    }
    // 0x8006763C: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x80067640: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80067644: lwc1        $f6, 0x8BC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x80067648: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x8006764C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80067650: nop

    // 0x80067654: bc1f        L_80067664
    if (!c1cs) {
        // 0x80067658: nop
    
            goto L_80067664;
    }
    // 0x80067658: nop

    // 0x8006765C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80067660: nop

L_80067664:
    // 0x80067664: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80067668: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006766C: lwc1        $f0, 0x8BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x80067670: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80067674: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80067678: nop

    // 0x8006767C: bc1f        L_800676B8
    if (!c1cs) {
        // 0x80067680: nop
    
            goto L_800676B8;
    }
    // 0x80067680: nop

    // 0x80067684: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80067688: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006768C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80067690: lwc1        $f19, -0x5A08($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5A08);
    // 0x80067694: lwc1        $f18, -0x5A04($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5A04);
    // 0x80067698: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8006769C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x800676A0: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x800676A4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x800676A8: nop

    // 0x800676AC: bc1f        L_800676B8
    if (!c1cs) {
        // 0x800676B0: nop
    
            goto L_800676B8;
    }
    // 0x800676B0: nop

    // 0x800676B4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_800676B8:
    // 0x800676B8: lwc1        $f12, 0x8C0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8C0);
    // 0x800676BC: jal         0x80081040
    // 0x800676C0: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x800676C0: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x800676C4: jal         0x80272AEC
    // 0x800676C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x800676C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x800676CC: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x800676D0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800676D4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800676D8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800676DC: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x800676E0: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x800676E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800676E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800676EC: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x800676F0: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x800676F4: lhu         $t1, 0xC0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC0);
    // 0x800676F8: nop

    // 0x800676FC: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80067700: beq         $t2, $zero, L_800677C4
    if (ctx->r10 == 0) {
        // 0x80067704: nop
    
            goto L_800677C4;
    }
    // 0x80067704: nop

    // 0x80067708: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x8006770C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80067710: lhu         $t3, 0x8($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X8);
    // 0x80067714: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80067718: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x8006771C: beq         $t4, $zero, L_80067750
    if (ctx->r12 == 0) {
        // 0x80067720: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80067750;
    }
    // 0x80067720: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80067724: lh          $t5, 0x8B8($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X8B8);
    // 0x80067728: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8006772C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80067730: lw          $a2, 0x1C38($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X1C38);
    // 0x80067734: lw          $a3, 0x1C30($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1C30);
    // 0x80067738: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x8006773C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80067740: jal         0x80272B1C
    // 0x80067744: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_3;
    // 0x80067744: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x80067748: b           L_80067818
    // 0x8006774C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
        goto L_80067818;
    // 0x8006774C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
L_80067750:
    // 0x80067750: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80067754: jal         0x8026D720
    // 0x80067758: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_4;
    // 0x80067758: nop

    after_4:
    // 0x8006775C: bgez        $v0, L_8006777C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80067760: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8006777C;
    }
    // 0x80067760: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80067764: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80067768: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006776C: jal         0x8026D720
    // 0x80067770: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_5;
    // 0x80067770: nop

    after_5:
    // 0x80067774: bltz        $v0, L_800678D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80067778: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800678D8;
    }
    // 0x80067778: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8006777C:
    // 0x8006777C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80067780: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80067784: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x80067788: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8006778C: lh          $t8, 0x8B8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B8);
    // 0x80067790: addiu       $t0, $t0, 0x680
    ctx->r8 = ADD32(ctx->r8, 0X680);
    // 0x80067794: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80067798: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8006779C: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800677A0: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x800677A4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x800677A8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800677AC: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x800677B0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800677B4: jal         0x80272B1C
    // 0x800677B8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_6;
    // 0x800677B8: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x800677BC: b           L_80067818
    // 0x800677C0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
        goto L_80067818;
    // 0x800677C0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
L_800677C4:
    // 0x800677C4: lw          $v0, 0x3680($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3680);
    // 0x800677C8: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x800677CC: beq         $v0, $zero, L_80067800
    if (ctx->r2 == 0) {
        // 0x800677D0: nop
    
            goto L_80067800;
    }
    // 0x800677D0: nop

    // 0x800677D4: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x800677D8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800677DC: lh          $t3, 0x8B8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8B8);
    // 0x800677E0: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x800677E4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800677E8: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x800677EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800677F0: jal         0x80272B1C
    // 0x800677F4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_7;
    // 0x800677F4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_7:
    // 0x800677F8: b           L_80067818
    // 0x800677FC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
        goto L_80067818;
    // 0x800677FC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
L_80067800:
    // 0x80067800: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x80067804: nop

    // 0x80067808: lwc1        $f6, 0x8C0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8C0);
    // 0x8006780C: nop

    // 0x80067810: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80067814: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
L_80067818:
    // 0x80067818: jal         0x80081040
    // 0x8006781C: nop

    func_80081040(rdram, ctx);
        goto after_8;
    // 0x8006781C: nop

    after_8:
    // 0x80067820: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80067824: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067828: lh          $t7, 0x8B8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X8B8);
    // 0x8006782C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80067830: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80067834: nop

    // 0x80067838: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006783C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80067840: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80067844: nop

    // 0x80067848: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8006784C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80067850: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80067854: nop

    // 0x80067858: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006785C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80067860: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80067864: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x80067868: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8006786C: jal         0x80080E80
    // 0x80067870: nop

    func_80080E80(rdram, ctx);
        goto after_9;
    // 0x80067870: nop

    after_9:
    // 0x80067874: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80067878: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x8006787C: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80067880: addiu       $t2, $zero, 0x1F8
    ctx->r10 = ADD32(0, 0X1F8);
    // 0x80067884: addiu       $t3, $zero, -0x1F8
    ctx->r11 = ADD32(0, -0X1F8);
    // 0x80067888: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8006788C: nop

    // 0x80067890: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80067894: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80067898: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006789C: slti        $at, $v0, 0x1F9
    ctx->r1 = SIGNED(ctx->r2) < 0X1F9 ? 1 : 0;
    // 0x800678A0: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800678A4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800678A8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800678AC: bne         $at, $zero, L_800678C0
    if (ctx->r1 != 0) {
        // 0x800678B0: sh          $t1, 0x30($s0)
        MEM_H(0X30, ctx->r16) = ctx->r9;
            goto L_800678C0;
    }
    // 0x800678B0: sh          $t1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r9;
    // 0x800678B4: sh          $t2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r10;
    // 0x800678B8: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x800678BC: nop

L_800678C0:
    // 0x800678C0: slti        $at, $v0, -0x1F8
    ctx->r1 = SIGNED(ctx->r2) < -0X1F8 ? 1 : 0;
    // 0x800678C4: beq         $at, $zero, L_800678D0
    if (ctx->r1 == 0) {
        // 0x800678C8: nop
    
            goto L_800678D0;
    }
    // 0x800678C8: nop

    // 0x800678CC: sh          $t3, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r11;
L_800678D0:
    // 0x800678D0: jal         0x800674F4
    // 0x800678D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800674F4(rdram, ctx);
        goto after_10;
    // 0x800678D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_800678D8:
    // 0x800678D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800678DC:
    // 0x800678DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800678E0: jr          $ra
    // 0x800678E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800678E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800678E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800678E8: bne         $a1, $zero, L_800679EC
    if (ctx->r5 != 0) {
        // 0x800678EC: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800679EC;
    }
    // 0x800678EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800678F0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800678F4: lwc1        $f4, 0x688($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X688);
    // 0x800678F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800678FC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80067900: addiu       $v0, $v0, 0x68C
    ctx->r2 = ADD32(ctx->r2, 0X68C);
    // 0x80067904: bc1f        L_80067914
    if (!c1cs) {
        // 0x80067908: nop
    
            goto L_80067914;
    }
    // 0x80067908: nop

    // 0x8006790C: jr          $ra
    // 0x80067910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80067910: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80067914:
    // 0x80067914: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067918: nop

    // 0x8006791C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80067920: nop

    // 0x80067924: bc1f        L_80067934
    if (!c1cs) {
        // 0x80067928: nop
    
            goto L_80067934;
    }
    // 0x80067928: nop

    // 0x8006792C: jr          $ra
    // 0x80067930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80067930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80067934:
    // 0x80067934: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067938: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8006793C: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80067940: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067944: bc1f        L_80067954
    if (!c1cs) {
        // 0x80067948: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80067954;
    }
    // 0x80067948: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006794C: jr          $ra
    // 0x80067950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80067950: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80067954:
    // 0x80067954: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
L_80067958:
    // 0x80067958: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8006795C: nop

    // 0x80067960: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80067964: nop

    // 0x80067968: bc1f        L_80067978
    if (!c1cs) {
        // 0x8006796C: nop
    
            goto L_80067978;
    }
    // 0x8006796C: nop

    // 0x80067970: jr          $ra
    // 0x80067974: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80067974: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80067978:
    // 0x80067978: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8006797C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067980: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80067984: nop

    // 0x80067988: bc1f        L_80067998
    if (!c1cs) {
        // 0x8006798C: nop
    
            goto L_80067998;
    }
    // 0x8006798C: nop

    // 0x80067990: jr          $ra
    // 0x80067994: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x80067994: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_80067998:
    // 0x80067998: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8006799C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800679A0: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x800679A4: nop

    // 0x800679A8: bc1f        L_800679B8
    if (!c1cs) {
        // 0x800679AC: nop
    
            goto L_800679B8;
    }
    // 0x800679AC: nop

    // 0x800679B0: jr          $ra
    // 0x800679B4: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x800679B4: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_800679B8:
    // 0x800679B8: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800679BC: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800679C0: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x800679C4: nop

    // 0x800679C8: bc1f        L_800679D8
    if (!c1cs) {
        // 0x800679CC: nop
    
            goto L_800679D8;
    }
    // 0x800679CC: nop

    // 0x800679D0: jr          $ra
    // 0x800679D4: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x800679D4: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_800679D8:
    // 0x800679D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800679DC: bne         $v1, $a0, L_80067958
    if (ctx->r3 != ctx->r4) {
        // 0x800679E0: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80067958;
    }
    // 0x800679E0: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800679E4: b           L_80067AE0
    // 0x800679E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80067AE0;
    // 0x800679E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800679EC:
    // 0x800679EC: lwc1        $f6, 0x688($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X688);
    // 0x800679F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800679F4: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x800679F8: addiu       $v0, $v0, 0x68C
    ctx->r2 = ADD32(ctx->r2, 0X68C);
    // 0x800679FC: bc1f        L_80067A0C
    if (!c1cs) {
        // 0x80067A00: nop
    
            goto L_80067A0C;
    }
    // 0x80067A00: nop

    // 0x80067A04: jr          $ra
    // 0x80067A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80067A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80067A0C:
    // 0x80067A0C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067A10: nop

    // 0x80067A14: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x80067A18: nop

    // 0x80067A1C: bc1f        L_80067A2C
    if (!c1cs) {
        // 0x80067A20: nop
    
            goto L_80067A2C;
    }
    // 0x80067A20: nop

    // 0x80067A24: jr          $ra
    // 0x80067A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80067A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80067A2C:
    // 0x80067A2C: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067A30: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067A34: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80067A38: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067A3C: bc1f        L_80067A4C
    if (!c1cs) {
        // 0x80067A40: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80067A4C;
    }
    // 0x80067A40: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80067A44: jr          $ra
    // 0x80067A48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80067A48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80067A4C:
    // 0x80067A4C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
L_80067A50:
    // 0x80067A50: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067A54: nop

    // 0x80067A58: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80067A5C: nop

    // 0x80067A60: bc1f        L_80067A70
    if (!c1cs) {
        // 0x80067A64: nop
    
            goto L_80067A70;
    }
    // 0x80067A64: nop

    // 0x80067A68: jr          $ra
    // 0x80067A6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80067A6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80067A70:
    // 0x80067A70: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067A74: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067A78: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80067A7C: nop

    // 0x80067A80: bc1f        L_80067A90
    if (!c1cs) {
        // 0x80067A84: nop
    
            goto L_80067A90;
    }
    // 0x80067A84: nop

    // 0x80067A88: jr          $ra
    // 0x80067A8C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x80067A8C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_80067A90:
    // 0x80067A90: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067A94: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067A98: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80067A9C: nop

    // 0x80067AA0: bc1f        L_80067AB0
    if (!c1cs) {
        // 0x80067AA4: nop
    
            goto L_80067AB0;
    }
    // 0x80067AA4: nop

    // 0x80067AA8: jr          $ra
    // 0x80067AAC: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x80067AAC: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_80067AB0:
    // 0x80067AB0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067AB4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067AB8: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80067ABC: nop

    // 0x80067AC0: bc1f        L_80067AD0
    if (!c1cs) {
        // 0x80067AC4: nop
    
            goto L_80067AD0;
    }
    // 0x80067AC4: nop

    // 0x80067AC8: jr          $ra
    // 0x80067ACC: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x80067ACC: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_80067AD0:
    // 0x80067AD0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80067AD4: bne         $v1, $a0, L_80067A50
    if (ctx->r3 != ctx->r4) {
        // 0x80067AD8: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80067A50;
    }
    // 0x80067AD8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067ADC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80067AE0:
    // 0x80067AE0: jr          $ra
    // 0x80067AE4: nop

    return;
    // 0x80067AE4: nop

;}
RECOMP_FUNC void func_80067AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80067AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067AF0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80067AF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80067AF8: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x80067AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067B00: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80067B04: beq         $t8, $zero, L_80067B14
    if (ctx->r24 == 0) {
        // 0x80067B08: nop
    
            goto L_80067B14;
    }
    // 0x80067B08: nop

    // 0x80067B0C: b           L_80067B14
    // 0x80067B10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80067B14;
    // 0x80067B10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80067B14:
    // 0x80067B14: jal         0x800678E8
    // 0x80067B18: nop

    func_800678E8(rdram, ctx);
        goto after_0;
    // 0x80067B18: nop

    after_0:
    // 0x80067B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80067B24: jr          $ra
    // 0x80067B28: nop

    return;
    // 0x80067B28: nop

;}
RECOMP_FUNC void func_80067B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067B2C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80067B30: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80067B34: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80067B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067B3C: lh          $t6, 0xD4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XD4);
    // 0x80067B40: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80067B44: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x80067B48: beq         $t7, $zero, L_80067B5C
    if (ctx->r15 == 0) {
        // 0x80067B4C: addiu       $v0, $v0, 0x680
        ctx->r2 = ADD32(ctx->r2, 0X680);
            goto L_80067B5C;
    }
    // 0x80067B4C: addiu       $v0, $v0, 0x680
    ctx->r2 = ADD32(ctx->r2, 0X680);
    // 0x80067B50: lh          $a2, 0xD6($v1)
    ctx->r6 = MEM_H(ctx->r3, 0XD6);
    // 0x80067B54: b           L_80067B64
    // 0x80067B58: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
        goto L_80067B64;
    // 0x80067B58: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
L_80067B5C:
    // 0x80067B5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80067B60: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
L_80067B64:
    // 0x80067B64: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80067B68: lwc1        $f4, 0x8C0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8C0);
    // 0x80067B6C: lwc1        $f9, -0x5A00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5A00);
    // 0x80067B70: lwc1        $f8, -0x59FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X59FC);
    // 0x80067B74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80067B78: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80067B7C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x80067B80: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x80067B84: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80067B88: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x80067B8C: jal         0x80081040
    // 0x80067B90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80067B90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80067B94: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80067B98: jal         0x80272AEC
    // 0x80067B9C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80067B9C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80067BA0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80067BA4: lwc1        $f17, -0x59F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X59F8);
    // 0x80067BA8: lwc1        $f16, -0x59F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X59F4);
    // 0x80067BAC: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80067BB0: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x80067BB4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80067BB8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80067BBC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80067BC0: bc1f        L_80067CAC
    if (!c1cs) {
        // 0x80067BC4: nop
    
            goto L_80067CAC;
    }
    // 0x80067BC4: nop

    // 0x80067BC8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80067BCC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80067BD0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80067BD4: jal         0x80080E80
    // 0x80067BD8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80067BD8: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_2:
    // 0x80067BDC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80067BE0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80067BE4: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80067BE8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80067BEC: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80067BF0: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80067BF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80067BF8: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80067BFC: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80067C00: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80067C04: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80067C08: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80067C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067C10: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    // 0x80067C14: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80067C18: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80067C1C: bc1f        L_80067C68
    if (!c1cs) {
        // 0x80067C20: sub.s       $f12, $f6, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
            goto L_80067C68;
    }
    // 0x80067C20: sub.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80067C24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80067C28: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
L_80067C2C:
    // 0x80067C2C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067C30: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80067C34: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80067C38: add.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x80067C3C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80067C40: nop

    // 0x80067C44: bc1f        L_80067C54
    if (!c1cs) {
        // 0x80067C48: nop
    
            goto L_80067C54;
    }
    // 0x80067C48: nop

    // 0x80067C4C: b           L_80067C9C
    // 0x80067C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80067C9C;
    // 0x80067C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80067C54:
    // 0x80067C54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80067C58: bne         $v1, $a0, L_80067C2C
    if (ctx->r3 != ctx->r4) {
        // 0x80067C5C: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80067C2C;
    }
    // 0x80067C5C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067C60: b           L_80067C9C
    // 0x80067C64: nop

        goto L_80067C9C;
    // 0x80067C64: nop

L_80067C68:
    // 0x80067C68: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067C6C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80067C70: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x80067C74: add.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x80067C78: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80067C7C: nop

    // 0x80067C80: bc1f        L_80067C90
    if (!c1cs) {
        // 0x80067C84: nop
    
            goto L_80067C90;
    }
    // 0x80067C84: nop

    // 0x80067C88: b           L_80067C9C
    // 0x80067C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80067C9C;
    // 0x80067C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80067C90:
    // 0x80067C90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80067C94: bne         $v1, $a0, L_80067C68
    if (ctx->r3 != ctx->r4) {
        // 0x80067C98: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80067C68;
    }
    // 0x80067C98: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80067C9C:
    // 0x80067C9C: bne         $a1, $zero, L_80067CC4
    if (ctx->r5 != 0) {
        // 0x80067CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80067CC4;
    }
    // 0x80067CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80067CA4: b           L_80067CC0
    // 0x80067CA8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_80067CC0;
    // 0x80067CA8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80067CAC:
    // 0x80067CAC: lw          $a1, 0x4C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4C);
    // 0x80067CB0: jal         0x80067AE8
    // 0x80067CB4: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_80067AE8(rdram, ctx);
        goto after_3;
    // 0x80067CB4: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_3:
    // 0x80067CB8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80067CBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80067CC0:
    // 0x80067CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80067CC4:
    // 0x80067CC4: bgez        $a2, L_80067CD4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80067CC8: nop
    
            goto L_80067CD4;
    }
    // 0x80067CC8: nop

    // 0x80067CCC: b           L_80067CF4
    // 0x80067CD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80067CF4;
    // 0x80067CD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80067CD4:
    // 0x80067CD4: bgez        $v1, L_80067CE4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80067CD8: slt         $at, $a2, $v1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80067CE4;
    }
    // 0x80067CD8: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067CDC: b           L_80067CF4
    // 0x80067CE0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_80067CF4;
    // 0x80067CE0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_80067CE4:
    // 0x80067CE4: beq         $at, $zero, L_80067CF4
    if (ctx->r1 == 0) {
        // 0x80067CE8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80067CF4;
    }
    // 0x80067CE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80067CEC: b           L_80067CF4
    // 0x80067CF0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
        goto L_80067CF4;
    // 0x80067CF0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_80067CF4:
    // 0x80067CF4: jr          $ra
    // 0x80067CF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80067CF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80067CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067CFC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80067D00: slti        $at, $a1, 0x3C
    ctx->r1 = SIGNED(ctx->r5) < 0X3C ? 1 : 0;
    // 0x80067D04: beq         $at, $zero, L_80067E88
    if (ctx->r1 == 0) {
        // 0x80067D08: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_80067E88;
    }
    // 0x80067D08: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80067D0C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80067D10: subu        $a3, $t0, $a1
    ctx->r7 = SUB32(ctx->r8, ctx->r5);
    // 0x80067D14: andi        $t6, $a3, 0x3
    ctx->r14 = ctx->r7 & 0X3;
    // 0x80067D18: beq         $t6, $zero, L_80067D88
    if (ctx->r14 == 0) {
        // 0x80067D1C: addu        $a2, $t6, $a1
        ctx->r6 = ADD32(ctx->r14, ctx->r5);
            goto L_80067D88;
    }
    // 0x80067D1C: addu        $a2, $t6, $a1
    ctx->r6 = ADD32(ctx->r14, ctx->r5);
    // 0x80067D20: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80067D24: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80067D28: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80067D2C: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x80067D30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80067D34: mul.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80067D38: lwc1        $f14, 0x4C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80067D3C: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80067D40: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_80067D44:
    // 0x80067D44: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067D48: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80067D4C: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80067D50: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80067D54: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80067D58: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80067D5C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80067D60: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80067D64: nop

    // 0x80067D68: bc1f        L_80067D78
    if (!c1cs) {
        // 0x80067D6C: nop
    
            goto L_80067D78;
    }
    // 0x80067D6C: nop

    // 0x80067D70: jr          $ra
    // 0x80067D74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80067D74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80067D78:
    // 0x80067D78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80067D7C: bne         $a2, $v1, L_80067D44
    if (ctx->r6 != ctx->r3) {
        // 0x80067D80: addiu       $v0, $v0, 0xC
        ctx->r2 = ADD32(ctx->r2, 0XC);
            goto L_80067D44;
    }
    // 0x80067D80: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80067D84: beq         $v1, $t0, L_80067E88
    if (ctx->r3 == ctx->r8) {
        // 0x80067D88: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_80067E88;
    }
L_80067D88:
    // 0x80067D88: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80067D8C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x80067D90: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80067D94: addiu       $t1, $t1, 0x680
    ctx->r9 = ADD32(ctx->r9, 0X680);
    // 0x80067D98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80067D9C: mul.s       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80067DA0: lwc1        $f14, 0x4C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80067DA4: lwc1        $f18, 0x44($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80067DA8: addu        $v0, $t9, $t1
    ctx->r2 = ADD32(ctx->r25, ctx->r9);
L_80067DAC:
    // 0x80067DAC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80067DB0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80067DB4: sub.s       $f2, $f14, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x80067DB8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80067DBC: sub.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80067DC0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80067DC4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80067DC8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80067DCC: nop

    // 0x80067DD0: bc1f        L_80067DE0
    if (!c1cs) {
        // 0x80067DD4: nop
    
            goto L_80067DE0;
    }
    // 0x80067DD4: nop

    // 0x80067DD8: jr          $ra
    // 0x80067DDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80067DDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80067DE0:
    // 0x80067DE0: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80067DE4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80067DE8: sub.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x80067DEC: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80067DF0: sub.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80067DF4: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80067DF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80067DFC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80067E00: nop

    // 0x80067E04: bc1f        L_80067E14
    if (!c1cs) {
        // 0x80067E08: nop
    
            goto L_80067E14;
    }
    // 0x80067E08: nop

    // 0x80067E0C: jr          $ra
    // 0x80067E10: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x80067E10: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_80067E14:
    // 0x80067E14: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80067E18: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80067E1C: sub.s       $f2, $f14, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x80067E20: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80067E24: sub.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80067E28: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80067E2C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80067E30: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80067E34: nop

    // 0x80067E38: bc1f        L_80067E48
    if (!c1cs) {
        // 0x80067E3C: nop
    
            goto L_80067E48;
    }
    // 0x80067E3C: nop

    // 0x80067E40: jr          $ra
    // 0x80067E44: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x80067E44: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_80067E48:
    // 0x80067E48: lwc1        $f4, 0x2C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80067E4C: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80067E50: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x80067E54: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80067E58: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80067E5C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80067E60: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80067E64: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80067E68: nop

    // 0x80067E6C: bc1f        L_80067E7C
    if (!c1cs) {
        // 0x80067E70: nop
    
            goto L_80067E7C;
    }
    // 0x80067E70: nop

    // 0x80067E74: jr          $ra
    // 0x80067E78: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x80067E78: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_80067E7C:
    // 0x80067E7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80067E80: bne         $v1, $t0, L_80067DAC
    if (ctx->r3 != ctx->r8) {
        // 0x80067E84: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_80067DAC;
    }
    // 0x80067E84: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80067E88:
    // 0x80067E88: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80067E8C: jr          $ra
    // 0x80067E90: nop

    return;
    // 0x80067E90: nop

;}
RECOMP_FUNC void func_80067E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067E94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80067E98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80067E9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80067EA0: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80067EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80067EA8: lhu         $v0, 0x928($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X928);
    // 0x80067EAC: nop

    // 0x80067EB0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x80067EB4: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x80067EB8: beq         $at, $zero, L_800681B8
    if (ctx->r1 == 0) {
        // 0x80067EBC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800681B8;
    }
    // 0x80067EBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80067EC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80067EC4: addu        $at, $at, $t7
    gpr jr_addend_80067ED0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80067EC8: lw          $t7, -0x59F0($at)
    ctx->r15 = ADD32(ctx->r1, -0X59F0);
    // 0x80067ECC: nop

    // 0x80067ED0: jr          $t7
    // 0x80067ED4: nop

    switch (jr_addend_80067ED0 >> 2) {
        case 0: goto L_80068108; break;
        case 1: goto L_800680C4; break;
        case 2: goto L_800680E4; break;
        case 3: goto L_8006819C; break;
        case 4: goto L_8006817C; break;
        case 5: goto L_80068128; break;
        case 6: goto L_800680A0; break;
        case 7: goto L_8006807C; break;
        case 8: goto L_80068014; break;
        case 9: goto L_80068058; break;
        case 10: goto L_80067FF0; break;
        case 11: goto L_80067FAC; break;
        case 12: goto L_80067F8C; break;
        case 13: goto L_80067F6C; break;
        case 14: goto L_80067F4C; break;
        case 15: goto L_80067FCC; break;
        case 16: goto L_80068034; break;
        case 17: goto L_800681B8; break;
        case 18: goto L_80067ED8; break;
        default: switch_error(__func__, 0x80067ED0, 0x800DA610);
    }
    // 0x80067ED4: nop

L_80067ED8:
    // 0x80067ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067EDC: jal         0x8024BC08
    // 0x80067EE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_0;
    // 0x80067EE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80067EE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80067EE8: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80067EEC: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80067EF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80067EF4: sh          $t8, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r24;
    // 0x80067EF8: bc1f        L_80067F1C
    if (!c1cs) {
        // 0x80067EFC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80067F1C;
    }
    // 0x80067EFC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80067F00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80067F04: lwc1        $f9, -0x59A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X59A0);
    // 0x80067F08: lwc1        $f8, -0x599C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X599C);
    // 0x80067F0C: nop

    // 0x80067F10: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80067F14: b           L_80067F30
    // 0x80067F18: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
        goto L_80067F30;
    // 0x80067F18: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
L_80067F1C:
    // 0x80067F1C: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x80067F20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80067F24: nop

    // 0x80067F28: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80067F2C: swc1        $f18, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f18.u32l;
L_80067F30:
    // 0x80067F30: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x80067F34: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80067F38: sh          $t9, 0xEE($s0)
    MEM_H(0XEE, ctx->r16) = ctx->r25;
    // 0x80067F3C: sh          $t0, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r8;
    // 0x80067F40: lhu         $v0, 0x928($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X928);
    // 0x80067F44: b           L_800681B8
    // 0x80067F48: nop

        goto L_800681B8;
    // 0x80067F48: nop

L_80067F4C:
    // 0x80067F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067F50: jal         0x8024BC08
    // 0x80067F54: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x80067F54: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_1:
    // 0x80067F58: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80067F5C: nop

    // 0x80067F60: lhu         $v0, 0x928($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X928);
    // 0x80067F64: b           L_800681B8
    // 0x80067F68: nop

        goto L_800681B8;
    // 0x80067F68: nop

L_80067F6C:
    // 0x80067F6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067F70: jal         0x8024BC08
    // 0x80067F74: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_2;
    // 0x80067F74: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_2:
    // 0x80067F78: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80067F7C: nop

    // 0x80067F80: lhu         $v0, 0x928($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0X928);
    // 0x80067F84: b           L_800681B8
    // 0x80067F88: nop

        goto L_800681B8;
    // 0x80067F88: nop

L_80067F8C:
    // 0x80067F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067F90: jal         0x8024BC08
    // 0x80067F94: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_3;
    // 0x80067F94: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_3:
    // 0x80067F98: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x80067F9C: nop

    // 0x80067FA0: lhu         $v0, 0x928($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X928);
    // 0x80067FA4: b           L_800681B8
    // 0x80067FA8: nop

        goto L_800681B8;
    // 0x80067FA8: nop

L_80067FAC:
    // 0x80067FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067FB0: jal         0x8024BC08
    // 0x80067FB4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_4;
    // 0x80067FB4: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_4:
    // 0x80067FB8: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x80067FBC: nop

    // 0x80067FC0: lhu         $v0, 0x928($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X928);
    // 0x80067FC4: b           L_800681B8
    // 0x80067FC8: nop

        goto L_800681B8;
    // 0x80067FC8: nop

L_80067FCC:
    // 0x80067FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067FD0: jal         0x8024BC08
    // 0x80067FD4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_5;
    // 0x80067FD4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_5:
    // 0x80067FD8: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x80067FDC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80067FE0: sh          $t6, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r14;
    // 0x80067FE4: lhu         $v0, 0x928($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X928);
    // 0x80067FE8: b           L_800681B8
    // 0x80067FEC: nop

        goto L_800681B8;
    // 0x80067FEC: nop

L_80067FF0:
    // 0x80067FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067FF4: jal         0x8024BC08
    // 0x80067FF8: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_6;
    // 0x80067FF8: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_6:
    // 0x80067FFC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x80068000: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80068004: sh          $t8, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r24;
    // 0x80068008: lhu         $v0, 0x928($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X928);
    // 0x8006800C: b           L_800681B8
    // 0x80068010: nop

        goto L_800681B8;
    // 0x80068010: nop

L_80068014:
    // 0x80068014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068018: jal         0x8024BC08
    // 0x8006801C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_7;
    // 0x8006801C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_7:
    // 0x80068020: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80068024: nop

    // 0x80068028: lhu         $v0, 0x928($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X928);
    // 0x8006802C: b           L_800681B8
    // 0x80068030: nop

        goto L_800681B8;
    // 0x80068030: nop

L_80068034:
    // 0x80068034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068038: jal         0x8024BC08
    // 0x8006803C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_8;
    // 0x8006803C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_8:
    // 0x80068040: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80068044: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80068048: sh          $t1, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r9;
    // 0x8006804C: lhu         $v0, 0x928($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X928);
    // 0x80068050: b           L_800681B8
    // 0x80068054: nop

        goto L_800681B8;
    // 0x80068054: nop

L_80068058:
    // 0x80068058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006805C: jal         0x8024BC08
    // 0x80068060: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_9;
    // 0x80068060: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_9:
    // 0x80068064: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x80068068: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8006806C: sh          $t3, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r11;
    // 0x80068070: lhu         $v0, 0x928($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X928);
    // 0x80068074: b           L_800681B8
    // 0x80068078: nop

        goto L_800681B8;
    // 0x80068078: nop

L_8006807C:
    // 0x8006807C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068080: jal         0x8024BC08
    // 0x80068084: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_10;
    // 0x80068084: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_10:
    // 0x80068088: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8006808C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80068090: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
    // 0x80068094: lhu         $v0, 0x928($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X928);
    // 0x80068098: b           L_800681B8
    // 0x8006809C: nop

        goto L_800681B8;
    // 0x8006809C: nop

L_800680A0:
    // 0x800680A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800680A4: jal         0x8024BC08
    // 0x800680A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_11;
    // 0x800680A8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_11:
    // 0x800680AC: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x800680B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800680B4: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x800680B8: lhu         $v0, 0x928($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X928);
    // 0x800680BC: b           L_800681B8
    // 0x800680C0: nop

        goto L_800681B8;
    // 0x800680C0: nop

L_800680C4:
    // 0x800680C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800680C8: jal         0x8024BC08
    // 0x800680CC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_12;
    // 0x800680CC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_12:
    // 0x800680D0: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x800680D4: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x800680D8: lhu         $v0, 0x928($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X928);
    // 0x800680DC: b           L_800681B8
    // 0x800680E0: nop

        goto L_800681B8;
    // 0x800680E0: nop

L_800680E4:
    // 0x800680E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800680E8: jal         0x8024BC08
    // 0x800680EC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_13;
    // 0x800680EC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_13:
    // 0x800680F0: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x800680F4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800680F8: sh          $t0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r8;
    // 0x800680FC: lhu         $v0, 0x928($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X928);
    // 0x80068100: b           L_800681B8
    // 0x80068104: nop

        goto L_800681B8;
    // 0x80068104: nop

L_80068108:
    // 0x80068108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006810C: jal         0x8024BC08
    // 0x80068110: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_14;
    // 0x80068110: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_14:
    // 0x80068114: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80068118: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x8006811C: lhu         $v0, 0x928($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X928);
    // 0x80068120: b           L_800681B8
    // 0x80068124: nop

        goto L_800681B8;
    // 0x80068124: nop

L_80068128:
    // 0x80068128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006812C: jal         0x8024BC08
    // 0x80068130: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_15;
    // 0x80068130: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_15:
    // 0x80068134: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x80068138: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8006813C: lw          $t4, 0x24($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X24);
    // 0x80068140: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80068144: lwc1        $f6, 0x31C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X31C);
    // 0x80068148: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006814C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80068150: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80068154: bc1f        L_80068164
    if (!c1cs) {
        // 0x80068158: nop
    
            goto L_80068164;
    }
    // 0x80068158: nop

    // 0x8006815C: b           L_80068168
    // 0x80068160: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
        goto L_80068168;
    // 0x80068160: sh          $t5, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r13;
L_80068164:
    // 0x80068164: sh          $t6, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r14;
L_80068168:
    // 0x80068168: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006816C: nop

    // 0x80068170: lhu         $v0, 0x928($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0X928);
    // 0x80068174: b           L_800681B8
    // 0x80068178: nop

        goto L_800681B8;
    // 0x80068178: nop

L_8006817C:
    // 0x8006817C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068180: jal         0x8024BC08
    // 0x80068184: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_16;
    // 0x80068184: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_16:
    // 0x80068188: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x8006818C: nop

    // 0x80068190: lhu         $v0, 0x928($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X928);
    // 0x80068194: b           L_800681B8
    // 0x80068198: nop

        goto L_800681B8;
    // 0x80068198: nop

L_8006819C:
    // 0x8006819C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800681A0: jal         0x8024BC08
    // 0x800681A4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_17;
    // 0x800681A4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_17:
    // 0x800681A8: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x800681AC: nop

    // 0x800681B0: lhu         $v0, 0x928($t9)
    ctx->r2 = MEM_HU(ctx->r25, 0X928);
    // 0x800681B4: nop

L_800681B8:
    // 0x800681B8: beq         $v0, $zero, L_800681DC
    if (ctx->r2 == 0) {
        // 0x800681BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800681DC;
    }
    // 0x800681BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800681C0: lhu         $t0, 0x12($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X12);
    // 0x800681C4: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x800681C8: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x800681CC: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x800681D0: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x800681D4: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
    // 0x800681D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800681DC:
    // 0x800681DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800681E0: jr          $ra
    // 0x800681E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800681E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800681E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800681E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800681EC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800681F0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800681F4: lbu         $v1, 0xBC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XBC);
    // 0x800681F8: nop

    // 0x800681FC: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x80068200: lbu         $t6, -0x54C0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X54C0);
    // 0x80068204: nop

    // 0x80068208: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8006820C: beq         $t7, $zero, L_80068234
    if (ctx->r15 == 0) {
        // 0x80068210: nop
    
            goto L_80068234;
    }
    // 0x80068210: nop

    // 0x80068214: lw          $t8, 0x8C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8C);
    // 0x80068218: lw          $t0, 0xC8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC8);
    // 0x8006821C: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x80068220: nop

    // 0x80068224: bne         $t9, $t0, L_80068234
    if (ctx->r25 != ctx->r8) {
        // 0x80068228: nop
    
            goto L_80068234;
    }
    // 0x80068228: nop

    // 0x8006822C: jr          $ra
    // 0x80068230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80068230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068234:
    // 0x80068234: lw          $t1, 0x8C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8C);
    // 0x80068238: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8006823C: bne         $a0, $t1, L_80068254
    if (ctx->r4 != ctx->r9) {
        // 0x80068240: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068254;
    }
    // 0x80068240: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068244: beq         $v1, $at, L_80068254
    if (ctx->r3 == ctx->r1) {
        // 0x80068248: nop
    
            goto L_80068254;
    }
    // 0x80068248: nop

    // 0x8006824C: jr          $ra
    // 0x80068250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80068250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068254:
    // 0x80068254: jr          $ra
    // 0x80068258: nop

    return;
    // 0x80068258: nop

;}
RECOMP_FUNC void func_8006825C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006825C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80068260: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80068264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80068268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006826C: lwc1        $f0, 0x18($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80068270: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80068274: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80068278: nop

    // 0x8006827C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80068280: jal         0x8007FA40
    // 0x80068284: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80068284: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80068288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006828C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80068290: jr          $ra
    // 0x80068294: nop

    return;
    // 0x80068294: nop

;}
RECOMP_FUNC void func_80068298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006829C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800682A0: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800682A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800682A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800682AC: lbu         $t7, 0xBD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XBD);
    // 0x800682B0: nop

    // 0x800682B4: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x800682B8: beq         $t8, $zero, L_800682D0
    if (ctx->r24 == 0) {
        // 0x800682BC: nop
    
            goto L_800682D0;
    }
    // 0x800682BC: nop

    // 0x800682C0: lh          $t9, 0xE8($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XE8);
    // 0x800682C4: nop

    // 0x800682C8: beq         $t9, $zero, L_800682D8
    if (ctx->r25 == 0) {
        // 0x800682CC: nop
    
            goto L_800682D8;
    }
    // 0x800682CC: nop

L_800682D0:
    // 0x800682D0: b           L_800683AC
    // 0x800682D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800683AC;
    // 0x800682D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800682D8:
    // 0x800682D8: jal         0x8006825C
    // 0x800682DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8006825C(rdram, ctx);
        goto after_0;
    // 0x800682DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800682E0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800682E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800682E8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800682EC: lwc1        $f11, -0x5998($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5998);
    // 0x800682F0: lwc1        $f10, -0x5994($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5994);
    // 0x800682F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800682F8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800682FC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80068300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80068304: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80068308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006830C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80068310: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80068314: nop

    // 0x80068318: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x8006831C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80068320: nop

    // 0x80068324: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80068328: beq         $t1, $zero, L_80068378
    if (ctx->r9 == 0) {
        // 0x8006832C: nop
    
            goto L_80068378;
    }
    // 0x8006832C: nop

    // 0x80068330: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80068334: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80068338: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006833C: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80068340: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80068344: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80068348: nop

    // 0x8006834C: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80068350: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80068354: nop

    // 0x80068358: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8006835C: bne         $t1, $zero, L_80068370
    if (ctx->r9 != 0) {
        // 0x80068360: nop
    
            goto L_80068370;
    }
    // 0x80068360: nop

    // 0x80068364: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80068368: b           L_80068388
    // 0x8006836C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_80068388;
    // 0x8006836C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80068370:
    // 0x80068370: b           L_80068388
    // 0x80068374: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_80068388;
    // 0x80068374: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_80068378:
    // 0x80068378: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8006837C: nop

    // 0x80068380: bltz        $t1, L_80068370
    if (SIGNED(ctx->r9) < 0) {
        // 0x80068384: nop
    
            goto L_80068370;
    }
    // 0x80068384: nop

L_80068388:
    // 0x80068388: lw          $t2, 0xD8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XD8);
    // 0x8006838C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80068390: lbu         $t3, 0xB($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XB);
    // 0x80068394: nop

    // 0x80068398: sltu        $at, $t1, $t3
    ctx->r1 = ctx->r9 < ctx->r11 ? 1 : 0;
    // 0x8006839C: beq         $at, $zero, L_800683AC
    if (ctx->r1 == 0) {
        // 0x800683A0: nop
    
            goto L_800683AC;
    }
    // 0x800683A0: nop

    // 0x800683A4: b           L_800683AC
    // 0x800683A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800683AC;
    // 0x800683A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800683AC:
    // 0x800683AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800683B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800683B4: jr          $ra
    // 0x800683B8: nop

    return;
    // 0x800683B8: nop

;}
RECOMP_FUNC void func_800683BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800683BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800683C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800683C4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800683C8: nop

    // 0x800683CC: sh          $zero, 0x92A($t6)
    MEM_H(0X92A, ctx->r14) = 0;
    // 0x800683D0: jal         0x80069D68
    // 0x800683D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80069D68(rdram, ctx);
        goto after_0;
    // 0x800683D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800683D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800683DC: nop

    // 0x800683E0: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x800683E4: nop

    // 0x800683E8: lhu         $t7, 0x928($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X928);
    // 0x800683EC: nop

    // 0x800683F0: beq         $t7, $zero, L_80068408
    if (ctx->r15 == 0) {
        // 0x800683F4: nop
    
            goto L_80068408;
    }
    // 0x800683F4: nop

    // 0x800683F8: jal         0x80067E94
    // 0x800683FC: nop

    func_80067E94(rdram, ctx);
        goto after_1;
    // 0x800683FC: nop

    after_1:
    // 0x80068400: b           L_80068424
    // 0x80068404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80068424;
    // 0x80068404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80068408:
    // 0x80068408: lhu         $v0, 0x92A($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X92A);
    // 0x8006840C: nop

    // 0x80068410: beq         $v0, $zero, L_80068420
    if (ctx->r2 == 0) {
        // 0x80068414: sh          $v0, 0x928($v1)
        MEM_H(0X928, ctx->r3) = ctx->r2;
            goto L_80068420;
    }
    // 0x80068414: sh          $v0, 0x928($v1)
    MEM_H(0X928, ctx->r3) = ctx->r2;
    // 0x80068418: jal         0x80067E94
    // 0x8006841C: nop

    func_80067E94(rdram, ctx);
        goto after_2;
    // 0x8006841C: nop

    after_2:
L_80068420:
    // 0x80068420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80068424:
    // 0x80068424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80068428: jr          $ra
    // 0x8006842C: nop

    return;
    // 0x8006842C: nop

;}
RECOMP_FUNC void func_80068430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068430: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80068434: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80068438: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006843C: lwc1        $f10, 0x39F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x80068440: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80068444: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80068448: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8006844C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80068450: addiu       $t8, $zero, 0x2A
    ctx->r24 = ADD32(0, 0X2A);
    // 0x80068454: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80068458: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x8006845C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80068460: c.lt.d      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.d < ctx->f18.d;
    // 0x80068464: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80068468: bc1f        L_8006848C
    if (!c1cs) {
        // 0x8006846C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8006848C;
    }
    // 0x8006846C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068470: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80068474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068478: sh          $t6, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r14;
    // 0x8006847C: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x80068480: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x80068484: jr          $ra
    // 0x80068488: sh          $t9, 0xB3E($at)
    MEM_H(0XB3E, ctx->r1) = ctx->r25;
    return;
    // 0x80068488: sh          $t9, 0xB3E($at)
    MEM_H(0XB3E, ctx->r1) = ctx->r25;
L_8006848C:
    // 0x8006848C: jr          $ra
    // 0x80068490: nop

    return;
    // 0x80068490: nop

;}
RECOMP_FUNC void func_80068494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068494: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80068498: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8006849C: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x800684A0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800684A4: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x800684A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800684AC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800684B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800684B4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800684B8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800684BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800684C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800684C4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800684C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800684CC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800684D0: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800684D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800684D8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800684DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800684E0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800684E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800684E8: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x800684EC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800684F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800684F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800684F8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800684FC: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80068500: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80068504: jal         0x8026BC5C
    // 0x80068508: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
    LOOKUP_FUNC(0x8026BC5C)(rdram, ctx);
        goto after_0;
    // 0x80068508: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
    after_0:
    // 0x8006850C: beq         $v0, $zero, L_8006852C
    if (ctx->r2 == 0) {
        // 0x80068510: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_8006852C;
    }
    // 0x80068510: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80068514: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80068518: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x8006851C: nop

    // 0x80068520: lh          $t4, 0xD6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XD6);
    // 0x80068524: nop

    // 0x80068528: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_8006852C:
    // 0x8006852C: jal         0x8026BD38
    // 0x80068530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_1;
    // 0x80068530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80068534: lh          $t5, 0x2E($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2E);
    // 0x80068538: nop

    // 0x8006853C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80068540: jal         0x80272AEC
    // 0x80068544: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x80068544: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_2:
    // 0x80068548: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8006854C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80068550: nop

    // 0x80068554: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80068558: nop

    // 0x8006855C: bc1t        L_80068594
    if (c1cs) {
        // 0x80068560: nop
    
            goto L_80068594;
    }
    // 0x80068560: nop

    // 0x80068564: lh          $t6, 0x30($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X30);
    // 0x80068568: nop

    // 0x8006856C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80068570: jal         0x80272AEC
    // 0x80068574: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x80068574: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x80068578: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8006857C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068580: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80068584: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80068588: nop

    // 0x8006858C: bc1f        L_8006859C
    if (!c1cs) {
        // 0x80068590: nop
    
            goto L_8006859C;
    }
    // 0x80068590: nop

L_80068594:
    // 0x80068594: b           L_800688AC
    // 0x80068598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800688AC;
    // 0x80068598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006859C:
    // 0x8006859C: lwc1        $f8, 0xB4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x800685A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800685A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800685A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800685AC: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x800685B0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800685B4: bc1f        L_80068804
    if (!c1cs) {
        // 0x800685B8: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80068804;
    }
    // 0x800685B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800685BC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x800685C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800685C4: lh          $t0, 0x8B8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8B8);
    // 0x800685C8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800685CC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800685D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800685D4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800685D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800685DC: lwc1        $f18, 0x688($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X688);
    // 0x800685E0: jal         0x80272AEC
    // 0x800685E4: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x800685E4: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    after_4:
    // 0x800685E8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800685EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800685F0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800685F4: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x800685F8: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x800685FC: bc1f        L_80068798
    if (!c1cs) {
        // 0x80068600: nop
    
            goto L_80068798;
    }
    // 0x80068600: nop

    // 0x80068604: beq         $t1, $zero, L_800686C0
    if (ctx->r9 == 0) {
        // 0x80068608: lui         $t2, 0x801B
        ctx->r10 = S32(0X801B << 16);
            goto L_800686C0;
    }
    // 0x80068608: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8006860C: lw          $t2, 0x39F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X39F0);
    // 0x80068610: nop

    // 0x80068614: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80068618: jal         0x80272AEC
    // 0x8006861C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x8006861C: nop

    after_5:
    // 0x80068620: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x80068624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80068628: nop

    // 0x8006862C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80068630: nop

    // 0x80068634: bc1f        L_80068804
    if (!c1cs) {
        // 0x80068638: nop
    
            goto L_80068804;
    }
    // 0x80068638: nop

    // 0x8006863C: lwc1        $f12, 0x44($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80068640: jal         0x80272AEC
    // 0x80068644: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_6;
    // 0x80068644: nop

    after_6:
    // 0x80068648: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x8006864C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80068650: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80068654: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80068658: nop

    // 0x8006865C: bc1f        L_80068804
    if (!c1cs) {
        // 0x80068660: nop
    
            goto L_80068804;
    }
    // 0x80068660: nop

    // 0x80068664: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80068668: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006866C: lw          $t4, 0x8C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8C);
    // 0x80068670: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068674: lhu         $t5, 0x2C($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2C);
    // 0x80068678: nop

    // 0x8006867C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80068680: beq         $t6, $zero, L_80068804
    if (ctx->r14 == 0) {
        // 0x80068684: nop
    
            goto L_80068804;
    }
    // 0x80068684: nop

    // 0x80068688: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8006868C: lwc1        $f7, -0x5990($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5990);
    // 0x80068690: cvt.d.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.d = CVT_D_W(ctx->f4.u32l);
    // 0x80068694: lwc1        $f6, -0x598C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X598C);
    // 0x80068698: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8006869C: c.lt.d      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.d < ctx->f6.d;
    // 0x800686A0: addiu       $t0, $zero, 0x2A
    ctx->r8 = ADD32(0, 0X2A);
    // 0x800686A4: bc1f        L_80068804
    if (!c1cs) {
        // 0x800686A8: nop
    
            goto L_80068804;
    }
    // 0x800686A8: nop

    // 0x800686AC: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x800686B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800686B4: sh          $t8, 0x928($t9)
    MEM_H(0X928, ctx->r25) = ctx->r24;
    // 0x800686B8: b           L_800688AC
    // 0x800686BC: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
        goto L_800688AC;
    // 0x800686BC: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
L_800686C0:
    // 0x800686C0: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x800686C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800686C8: lh          $t2, 0x8B8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B8);
    // 0x800686CC: lwc1        $f8, 0x364C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x800686D0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800686D4: nop

    // 0x800686D8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800686DC: jal         0x80272AEC
    // 0x800686E0: sub.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f16.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_7;
    // 0x800686E0: sub.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f16.fl;
    after_7:
    // 0x800686E4: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800686E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800686EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800686F0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800686F4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x800686F8: bc1f        L_80068780
    if (!c1cs) {
        // 0x800686FC: nop
    
            goto L_80068780;
    }
    // 0x800686FC: nop

    // 0x80068700: lhu         $t3, 0x3620($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3620);
    // 0x80068704: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80068708: bne         $t3, $zero, L_80068780
    if (ctx->r11 != 0) {
        // 0x8006870C: nop
    
            goto L_80068780;
    }
    // 0x8006870C: nop

    // 0x80068710: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80068714: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80068718: lw          $t5, 0x8C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8C);
    // 0x8006871C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068720: lhu         $t6, 0x2C($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2C);
    // 0x80068724: nop

    // 0x80068728: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8006872C: bne         $t7, $zero, L_80068780
    if (ctx->r15 != 0) {
        // 0x80068730: nop
    
            goto L_80068780;
    }
    // 0x80068730: nop

    // 0x80068734: lwc1        $f11, -0x5988($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5988);
    // 0x80068738: lwc1        $f10, -0x5984($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5984);
    // 0x8006873C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80068740: lwc1        $f8, 0x39F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x80068744: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80068748: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x8006874C: cvt.d.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.d = CVT_D_W(ctx->f18.u32l);
    // 0x80068750: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x80068754: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x80068758: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x8006875C: c.lt.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d < ctx->f4.d;
    // 0x80068760: nop

    // 0x80068764: bc1f        L_80068804
    if (!c1cs) {
        // 0x80068768: nop
    
            goto L_80068804;
    }
    // 0x80068768: nop

    // 0x8006876C: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80068770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068774: sh          $t9, 0x928($t0)
    MEM_H(0X928, ctx->r8) = ctx->r25;
    // 0x80068778: b           L_800688AC
    // 0x8006877C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
        goto L_800688AC;
    // 0x8006877C: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
L_80068780:
    // 0x80068780: jal         0x80068430
    // 0x80068784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80068430(rdram, ctx);
        goto after_8;
    // 0x80068784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80068788: beq         $v0, $zero, L_80068804
    if (ctx->r2 == 0) {
        // 0x8006878C: nop
    
            goto L_80068804;
    }
    // 0x8006878C: nop

    // 0x80068790: b           L_800688AC
    // 0x80068794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800688AC;
    // 0x80068794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068798:
    // 0x80068798: lw          $t2, 0x39F8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X39F8);
    // 0x8006879C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x800687A0: beq         $t2, $zero, L_800687EC
    if (ctx->r10 == 0) {
        // 0x800687A4: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_800687EC;
    }
    // 0x800687A4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800687A8: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x800687AC: lwc1        $f12, 0x8C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x800687B0: lwc1        $f14, 0x20($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800687B4: jal         0x80279308
    // 0x800687B8: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_9;
    // 0x800687B8: nop

    after_9:
    // 0x800687BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800687C0: lwc1        $f9, -0x5980($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5980);
    // 0x800687C4: lwc1        $f8, -0x597C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X597C);
    // 0x800687C8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x800687CC: c.lt.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d < ctx->f8.d;
    // 0x800687D0: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x800687D4: bc1f        L_800687E8
    if (!c1cs) {
        // 0x800687D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800687E8;
    }
    // 0x800687D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800687DC: lw          $t5, 0xC8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC8);
    // 0x800687E0: b           L_800688AC
    // 0x800687E4: sh          $t4, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r12;
        goto L_800688AC;
    // 0x800687E4: sh          $t4, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r12;
L_800687E8:
    // 0x800687E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
L_800687EC:
    // 0x800687EC: jal         0x80068430
    // 0x800687F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80068430(rdram, ctx);
        goto after_10;
    // 0x800687F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x800687F4: beq         $v0, $zero, L_80068804
    if (ctx->r2 == 0) {
        // 0x800687F8: nop
    
            goto L_80068804;
    }
    // 0x800687F8: nop

    // 0x800687FC: b           L_800688AC
    // 0x80068800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800688AC;
    // 0x80068800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068804:
    // 0x80068804: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80068808: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8006880C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80068810: lhu         $t7, 0xC2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC2);
    // 0x80068814: lwc1        $f12, 0x39F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x80068818: lwc1        $f2, 0xB4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x8006881C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x80068820: beq         $t8, $zero, L_80068848
    if (ctx->r24 == 0) {
        // 0x80068824: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_80068848;
    }
    // 0x80068824: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80068828: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8006882C: lw          $t9, 0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X39FC);
    // 0x80068830: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80068834: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80068838: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8006883C: lwc1        $f0, -0x1488($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1488);
    // 0x80068840: b           L_80068864
    // 0x80068844: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
        goto L_80068864;
    // 0x80068844: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
L_80068848:
    // 0x80068848: lw          $t1, 0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X39FC);
    // 0x8006884C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80068850: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80068854: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80068858: lwc1        $f0, -0x149C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X149C);
    // 0x8006885C: nop

    // 0x80068860: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
L_80068864:
    // 0x80068864: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80068868: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8006886C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068870: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x80068874: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068878: add.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x8006887C: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80068880: nop

    // 0x80068884: bc1f        L_800688AC
    if (!c1cs) {
        // 0x80068888: nop
    
            goto L_800688AC;
    }
    // 0x80068888: nop

    // 0x8006888C: bne         $at, $zero, L_800688AC
    if (ctx->r1 != 0) {
        // 0x80068890: addiu       $t4, $zero, 0x2A
        ctx->r12 = ADD32(0, 0X2A);
            goto L_800688AC;
    }
    // 0x80068890: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x80068894: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x80068898: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x8006889C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800688A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800688A4: b           L_800688AC
    // 0x800688A8: sh          $t5, 0x92A($t6)
    MEM_H(0X92A, ctx->r14) = ctx->r13;
        goto L_800688AC;
    // 0x800688A8: sh          $t5, 0x92A($t6)
    MEM_H(0X92A, ctx->r14) = ctx->r13;
L_800688AC:
    // 0x800688AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800688B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800688B4: jr          $ra
    // 0x800688B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800688B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800688BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800688BC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800688C0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800688C4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x800688C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800688CC: lw          $v1, 0x914($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X914);
    // 0x800688D0: nop

    // 0x800688D4: beq         $v1, $zero, L_80068900
    if (ctx->r3 == 0) {
        // 0x800688D8: nop
    
            goto L_80068900;
    }
    // 0x800688D8: nop

    // 0x800688DC: lwc1        $f4, 0xB4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XB4);
    // 0x800688E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800688E4: nop

    // 0x800688E8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800688EC: nop

    // 0x800688F0: bc1f        L_80068900
    if (!c1cs) {
        // 0x800688F4: nop
    
            goto L_80068900;
    }
    // 0x800688F4: nop

    // 0x800688F8: jr          $ra
    // 0x800688FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800688FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80068900:
    // 0x80068900: jr          $ra
    // 0x80068904: nop

    return;
    // 0x80068904: nop

;}
RECOMP_FUNC void func_80068908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006890C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80068910: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80068914: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80068918: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006891C: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80068920: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068924: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80068928: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8006892C: jal         0x8026D720
    // 0x80068930: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_0;
    // 0x80068930: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80068934: blez        $v0, L_8006899C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80068938: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8006899C;
    }
    // 0x80068938: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006893C: jal         0x800688BC
    // 0x80068940: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800688BC(rdram, ctx);
        goto after_1;
    // 0x80068940: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80068944: beq         $v0, $zero, L_80068954
    if (ctx->r2 == 0) {
        // 0x80068948: lui         $at, 0x41C0
        ctx->r1 = S32(0X41C0 << 16);
            goto L_80068954;
    }
    // 0x80068948: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8006894C: b           L_80068964
    // 0x80068950: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_80068964;
    // 0x80068950: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_80068954:
    // 0x80068954: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80068958: jal         0x8026D720
    // 0x8006895C: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_2;
    // 0x8006895C: nop

    after_2:
    // 0x80068960: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80068964:
    // 0x80068964: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80068968: bne         $at, $zero, L_8006899C
    if (ctx->r1 != 0) {
        // 0x8006896C: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_8006899C;
    }
    // 0x8006896C: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_80068970:
    // 0x80068970: beq         $at, $zero, L_8006899C
    if (ctx->r1 == 0) {
        // 0x80068974: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8006899C;
    }
    // 0x80068974: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80068978: jal         0x80068494
    // 0x8006897C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80068494(rdram, ctx);
        goto after_3;
    // 0x8006897C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80068980: beq         $v0, $zero, L_80068990
    if (ctx->r2 == 0) {
        // 0x80068984: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80068990;
    }
    // 0x80068984: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80068988: b           L_80068B14
    // 0x8006898C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068B14;
    // 0x8006898C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068990:
    // 0x80068990: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80068994: beq         $at, $zero, L_80068970
    if (ctx->r1 == 0) {
        // 0x80068998: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_80068970;
    }
    // 0x80068998: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_8006899C:
    // 0x8006899C: jal         0x800688BC
    // 0x800689A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800688BC(rdram, ctx);
        goto after_4;
    // 0x800689A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x800689A4: beq         $v0, $zero, L_800689B4
    if (ctx->r2 == 0) {
        // 0x800689A8: lui         $at, 0x41B0
        ctx->r1 = S32(0X41B0 << 16);
            goto L_800689B4;
    }
    // 0x800689A8: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x800689AC: b           L_80068B14
    // 0x800689B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80068B14;
    // 0x800689B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800689B4:
    // 0x800689B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800689B8: jal         0x8026D720
    // 0x800689BC: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_5;
    // 0x800689BC: nop

    after_5:
    // 0x800689C0: blez        $v0, L_80068B10
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800689C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80068B10;
    }
    // 0x800689C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800689C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800689CC: jal         0x8026D8A4
    // 0x800689D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    LOOKUP_FUNC(0x8026D8A4)(rdram, ctx);
        goto after_6;
    // 0x800689D0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x800689D4: jal         0x8026BD38
    // 0x800689D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_7;
    // 0x800689D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_7:
    // 0x800689DC: lh          $t6, 0x2E($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X2E);
    // 0x800689E0: nop

    // 0x800689E4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800689E8: jal         0x80272AEC
    // 0x800689EC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_8;
    // 0x800689EC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_8:
    // 0x800689F0: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x800689F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800689F8: nop

    // 0x800689FC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80068A00: nop

    // 0x80068A04: bc1f        L_80068B14
    if (!c1cs) {
        // 0x80068A08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068B14;
    }
    // 0x80068A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068A0C: lh          $t7, 0x30($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X30);
    // 0x80068A10: nop

    // 0x80068A14: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80068A18: jal         0x80272AEC
    // 0x80068A1C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_9;
    // 0x80068A1C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_9:
    // 0x80068A20: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80068A24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80068A28: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80068A2C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80068A30: nop

    // 0x80068A34: bc1f        L_80068B14
    if (!c1cs) {
        // 0x80068A38: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068B14;
    }
    // 0x80068A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068A3C: lwc1        $f0, 0xB4($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0XB4);
    // 0x80068A40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80068A44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80068A48: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80068A4C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80068A50: lui         $at, 0x4023
    ctx->r1 = S32(0X4023 << 16);
    // 0x80068A54: bc1f        L_80068A94
    if (!c1cs) {
        // 0x80068A58: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_80068A94;
    }
    // 0x80068A58: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80068A5C: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80068A60: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80068A64: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80068A68: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80068A6C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80068A70: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80068A74: addiu       $t0, $zero, 0x2A
    ctx->r8 = ADD32(0, 0X2A);
    // 0x80068A78: bc1f        L_80068A94
    if (!c1cs) {
        // 0x80068A7C: nop
    
            goto L_80068A94;
    }
    // 0x80068A7C: nop

    // 0x80068A80: lw          $t9, 0xC8($s2)
    ctx->r25 = MEM_W(ctx->r18, 0XC8);
    // 0x80068A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068A88: sh          $t8, 0x928($t9)
    MEM_H(0X928, ctx->r25) = ctx->r24;
    // 0x80068A8C: b           L_80068B14
    // 0x80068A90: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
        goto L_80068B14;
    // 0x80068A90: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
L_80068A94:
    // 0x80068A94: lw          $t1, 0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X39FC);
    // 0x80068A98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80068A9C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80068AA0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80068AA4: lwc1        $f18, -0x149C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X149C);
    // 0x80068AA8: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80068AAC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80068AB0: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x80068AB4: lui         $t4, 0x8010
    ctx->r12 = S32(0X8010 << 16);
    // 0x80068AB8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80068ABC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068AC0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80068AC4: nop

    // 0x80068AC8: bc1f        L_80068B14
    if (!c1cs) {
        // 0x80068ACC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068B14;
    }
    // 0x80068ACC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068AD0: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
    // 0x80068AD4: lhu         $t5, 0xB3E($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB3E);
    // 0x80068AD8: lhu         $t4, 0x522A($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X522A);
    // 0x80068ADC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80068AE0: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x80068AE4: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x80068AE8: beq         $at, $zero, L_80068AFC
    if (ctx->r1 == 0) {
        // 0x80068AEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80068AFC;
    }
    // 0x80068AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068AF0: lw          $t8, 0xC8($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XC8);
    // 0x80068AF4: b           L_80068B14
    // 0x80068AF8: sh          $t7, 0x928($t8)
    MEM_H(0X928, ctx->r24) = ctx->r15;
        goto L_80068B14;
    // 0x80068AF8: sh          $t7, 0x928($t8)
    MEM_H(0X928, ctx->r24) = ctx->r15;
L_80068AFC:
    // 0x80068AFC: lw          $t0, 0xC8($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XC8);
    // 0x80068B00: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80068B04: sh          $t9, 0x92A($t0)
    MEM_H(0X92A, ctx->r8) = ctx->r25;
    // 0x80068B08: b           L_80068B14
    // 0x80068B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068B14;
    // 0x80068B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068B10:
    // 0x80068B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068B14:
    // 0x80068B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80068B18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068B1C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80068B20: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80068B24: jr          $ra
    // 0x80068B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80068B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80068B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068B2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80068B30: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80068B34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80068B3C: lhu         $t7, 0xC0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC0);
    // 0x80068B40: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80068B44: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80068B48: beq         $t8, $zero, L_80068C18
    if (ctx->r24 == 0) {
        // 0x80068B4C: nop
    
            goto L_80068C18;
    }
    // 0x80068B4C: nop

    // 0x80068B50: lw          $t9, 0x39F8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X39F8);
    // 0x80068B54: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80068B58: beq         $t9, $zero, L_80068BF0
    if (ctx->r25 == 0) {
        // 0x80068B5C: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_80068BF0;
    }
    // 0x80068B5C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80068B60: lw          $t0, 0x39F0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X39F0);
    // 0x80068B64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80068B68: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80068B6C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80068B70: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80068B74: nop

    // 0x80068B78: bc1f        L_80068BF0
    if (!c1cs) {
        // 0x80068B7C: nop
    
            goto L_80068BF0;
    }
    // 0x80068B7C: nop

    // 0x80068B80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80068B84: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x80068B88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80068B8C: lwc1        $f18, 0x39F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x80068B90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80068B94: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80068B98: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80068B9C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80068BA0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80068BA4: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80068BA8: nop

    // 0x80068BAC: bc1f        L_80068BF0
    if (!c1cs) {
        // 0x80068BB0: nop
    
            goto L_80068BF0;
    }
    // 0x80068BB0: nop

    // 0x80068BB4: lw          $a1, 0x1C38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C38);
    // 0x80068BB8: lw          $a2, 0x1C30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C30);
    // 0x80068BBC: jal         0x80272B98
    // 0x80068BC0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x80068BC0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80068BC4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80068BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068BCC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80068BD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80068BD4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80068BD8: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x80068BDC: bc1f        L_80068BF0
    if (!c1cs) {
        // 0x80068BE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80068BF0;
    }
    // 0x80068BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068BE4: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x80068BE8: b           L_80068C40
    // 0x80068BEC: sh          $t1, 0x928($t2)
    MEM_H(0X928, ctx->r10) = ctx->r9;
        goto L_80068C40;
    // 0x80068BEC: sh          $t1, 0x928($t2)
    MEM_H(0X928, ctx->r10) = ctx->r9;
L_80068BF0:
    // 0x80068BF0: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x80068BF4: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80068BF8: lhu         $t4, 0x318($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X318);
    // 0x80068BFC: nop

    // 0x80068C00: bne         $t4, $zero, L_80068C40
    if (ctx->r12 != 0) {
        // 0x80068C04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068C40;
    }
    // 0x80068C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068C08: jal         0x8026DA7C
    // 0x80068C0C: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    LOOKUP_FUNC(0x8026DA7C)(rdram, ctx);
        goto after_1;
    // 0x80068C0C: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    after_1:
    // 0x80068C10: b           L_80068C40
    // 0x80068C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068C40;
    // 0x80068C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068C18:
    // 0x80068C18: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x80068C1C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80068C20: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80068C24: beq         $t7, $zero, L_80068C40
    if (ctx->r15 == 0) {
        // 0x80068C28: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068C40;
    }
    // 0x80068C28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068C2C: jal         0x8026DB68
    // 0x80068C30: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    LOOKUP_FUNC(0x8026DB68)(rdram, ctx);
        goto after_2;
    // 0x80068C30: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    after_2:
    // 0x80068C34: b           L_80068C40
    // 0x80068C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068C40;
    // 0x80068C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068C3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068C40:
    // 0x80068C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80068C44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80068C48: jr          $ra
    // 0x80068C4C: nop

    return;
    // 0x80068C4C: nop

;}
RECOMP_FUNC void func_80068C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068C50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80068C54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068C58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068C5C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80068C60: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80068C64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068C68: lwc1        $f4, 0x8BC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8BC);
    // 0x80068C6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80068C70: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80068C74: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80068C78: bc1f        L_80068D1C
    if (!c1cs) {
        // 0x80068C7C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80068D1C;
    }
    // 0x80068C7C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80068C80: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80068C84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80068C88: lwc1        $f8, 0x10($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X10);
    // 0x80068C8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80068C90: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80068C94: nop

    // 0x80068C98: bc1f        L_80068D20
    if (!c1cs) {
        // 0x80068C9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068D20;
    }
    // 0x80068C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068CA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80068CA4: jal         0x8026D720
    // 0x80068CA8: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_0;
    // 0x80068CA8: nop

    after_0:
    // 0x80068CAC: bgez        $v0, L_80068D1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80068CB0: addiu       $t8, $zero, 0x19
        ctx->r24 = ADD32(0, 0X19);
            goto L_80068D1C;
    }
    // 0x80068CB0: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80068CB4: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x80068CB8: jal         0x8026DB68
    // 0x80068CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8026DB68)(rdram, ctx);
        goto after_1;
    // 0x80068CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80068CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80068CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80068CC8: jal         0x80067CFC
    // 0x80068CCC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_80067CFC(rdram, ctx);
        goto after_2;
    // 0x80068CCC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_2:
    // 0x80068CD0: bltz        $v0, L_80068D0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80068CD4: addiu       $t1, $zero, 0xE
        ctx->r9 = ADD32(0, 0XE);
            goto L_80068D0C;
    }
    // 0x80068CD4: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x80068CD8: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80068CDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068CE0: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80068CE4: lwc1        $f5, -0x5978($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5978);
    // 0x80068CE8: lwc1        $f4, -0x5974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5974);
    // 0x80068CEC: nop

    // 0x80068CF0: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80068CF4: nop

    // 0x80068CF8: bc1f        L_80068D0C
    if (!c1cs) {
        // 0x80068CFC: nop
    
            goto L_80068D0C;
    }
    // 0x80068CFC: nop

    // 0x80068D00: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80068D04: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80068D08: sh          $t9, 0x928($t0)
    MEM_H(0X928, ctx->r8) = ctx->r25;
L_80068D0C:
    // 0x80068D0C: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80068D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068D14: b           L_80068D20
    // 0x80068D18: sh          $t1, 0x92A($t2)
    MEM_H(0X92A, ctx->r10) = ctx->r9;
        goto L_80068D20;
    // 0x80068D18: sh          $t1, 0x92A($t2)
    MEM_H(0X92A, ctx->r10) = ctx->r9;
L_80068D1C:
    // 0x80068D1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068D20:
    // 0x80068D20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068D24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068D28: jr          $ra
    // 0x80068D2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80068D2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80068D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068D30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80068D34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80068D38: jal         0x800688BC
    // 0x80068D3C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_800688BC(rdram, ctx);
        goto after_0;
    // 0x80068D3C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x80068D40: beq         $v0, $zero, L_80068DD8
    if (ctx->r2 == 0) {
        // 0x80068D44: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80068DD8;
    }
    // 0x80068D44: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80068D48: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80068D4C: lh          $t9, 0x2E($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2E);
    // 0x80068D50: lh          $t0, 0x30($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X30);
    // 0x80068D54: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80068D58: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80068D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80068D60: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80068D64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80068D68: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80068D6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068D70: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x80068D74: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068D78: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80068D7C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80068D80: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80068D84: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80068D88: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80068D8C: addiu       $t1, $sp, 0x24
    ctx->r9 = ADD32(ctx->r29, 0X24);
    // 0x80068D90: jal         0x80272B1C
    // 0x80068D94: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x80068D94: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x80068D98: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80068D9C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80068DA0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80068DA4: lwc1        $f14, 0x20($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80068DA8: jal         0x80279308
    // 0x80068DAC: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_2;
    // 0x80068DAC: nop

    after_2:
    // 0x80068DB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068DB4: lwc1        $f9, -0x5970($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5970);
    // 0x80068DB8: lwc1        $f8, -0x596C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X596C);
    // 0x80068DBC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80068DC0: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80068DC4: nop

    // 0x80068DC8: bc1f        L_80068DDC
    if (!c1cs) {
        // 0x80068DCC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80068DDC;
    }
    // 0x80068DCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80068DD0: b           L_80068DDC
    // 0x80068DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068DDC;
    // 0x80068DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068DD8:
    // 0x80068DD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068DDC:
    // 0x80068DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80068DE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80068DE4: jr          $ra
    // 0x80068DE8: nop

    return;
    // 0x80068DE8: nop

;}
RECOMP_FUNC void func_80068DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068DEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80068DF0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80068DF4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80068DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80068DFC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80068E00: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80068E04: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80068E08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80068E0C: jal         0x80081040
    // 0x80068E10: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80068E10: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80068E14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80068E18: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80068E1C: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80068E20: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80068E24: lhu         $t7, 0x8($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X8);
    // 0x80068E28: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80068E2C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80068E30: beq         $t8, $zero, L_80068E60
    if (ctx->r24 == 0) {
        // 0x80068E34: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_80068E60;
    }
    // 0x80068E34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068E38: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80068E3C: lwc1        $f7, -0x5968($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5968);
    // 0x80068E40: lwc1        $f6, -0x5964($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5964);
    // 0x80068E44: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80068E48: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x80068E4C: nop

    // 0x80068E50: bc1f        L_80068E80
    if (!c1cs) {
        // 0x80068E54: nop
    
            goto L_80068E80;
    }
    // 0x80068E54: nop

    // 0x80068E58: b           L_80068E80
    // 0x80068E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80068E80;
    // 0x80068E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068E60:
    // 0x80068E60: lwc1        $f9, -0x5960($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5960);
    // 0x80068E64: lwc1        $f8, -0x595C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X595C);
    // 0x80068E68: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80068E6C: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x80068E70: nop

    // 0x80068E74: bc1f        L_80068E80
    if (!c1cs) {
        // 0x80068E78: nop
    
            goto L_80068E80;
    }
    // 0x80068E78: nop

    // 0x80068E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80068E80:
    // 0x80068E80: lh          $t9, 0x8B8($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X8B8);
    // 0x80068E84: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80068E88: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80068E8C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80068E90: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80068E94: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80068E98: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80068E9C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80068EA0: jal         0x80272AEC
    // 0x80068EA4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x80068EA4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x80068EA8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80068EAC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80068EB0: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80068EB4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80068EB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80068EBC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80068EC0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80068EC4: bc1f        L_80068FBC
    if (!c1cs) {
        // 0x80068EC8: nop
    
            goto L_80068FBC;
    }
    // 0x80068EC8: nop

    // 0x80068ECC: beq         $v0, $zero, L_80068F58
    if (ctx->r2 == 0) {
        // 0x80068ED0: lui         $t4, 0x801B
        ctx->r12 = S32(0X801B << 16);
            goto L_80068F58;
    }
    // 0x80068ED0: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80068ED4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80068ED8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80068EDC: jal         0x80068D30
    // 0x80068EE0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_80068D30(rdram, ctx);
        goto after_2;
    // 0x80068EE0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x80068EE4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80068EE8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80068EEC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80068EF0: beq         $v0, $zero, L_80068F00
    if (ctx->r2 == 0) {
        // 0x80068EF4: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_80068F00;
    }
    // 0x80068EF4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80068EF8: b           L_80069318
    // 0x80068EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069318;
    // 0x80068EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068F00:
    // 0x80068F00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068F04: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80068F08: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80068F0C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80068F10: nop

    // 0x80068F14: bc1t        L_80068F50
    if (c1cs) {
        // 0x80068F18: nop
    
            goto L_80068F50;
    }
    // 0x80068F18: nop

    // 0x80068F1C: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80068F20: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80068F24: addiu       $t0, $t0, 0x680
    ctx->r8 = ADD32(ctx->r8, 0X680);
    // 0x80068F28: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80068F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80068F30: mflo        $t2
    ctx->r10 = lo;
    // 0x80068F34: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80068F38: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80068F3C: nop

    // 0x80068F40: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80068F44: nop

    // 0x80068F48: bc1f        L_80068FBC
    if (!c1cs) {
        // 0x80068F4C: nop
    
            goto L_80068FBC;
    }
    // 0x80068F4C: nop

L_80068F50:
    // 0x80068F50: b           L_80069318
    // 0x80068F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069318;
    // 0x80068F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068F58:
    // 0x80068F58: lw          $t4, 0x39F8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X39F8);
    // 0x80068F5C: nop

    // 0x80068F60: bne         $t4, $zero, L_80068FBC
    if (ctx->r12 != 0) {
        // 0x80068F64: nop
    
            goto L_80068FBC;
    }
    // 0x80068F64: nop

    // 0x80068F68: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80068F6C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80068F70: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80068F74: nop

    // 0x80068F78: bc1t        L_80068FB4
    if (c1cs) {
        // 0x80068F7C: nop
    
            goto L_80068FB4;
    }
    // 0x80068F7C: nop

    // 0x80068F80: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80068F84: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80068F88: addiu       $t0, $t0, 0x680
    ctx->r8 = ADD32(ctx->r8, 0X680);
    // 0x80068F8C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80068F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80068F94: mflo        $t5
    ctx->r13 = lo;
    // 0x80068F98: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x80068F9C: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80068FA0: nop

    // 0x80068FA4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80068FA8: nop

    // 0x80068FAC: bc1f        L_80068FBC
    if (!c1cs) {
        // 0x80068FB0: nop
    
            goto L_80068FBC;
    }
    // 0x80068FB0: nop

L_80068FB4:
    // 0x80068FB4: b           L_80069318
    // 0x80068FB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069318;
    // 0x80068FB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80068FBC:
    // 0x80068FBC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80068FC0: lhu         $t7, 0xB7A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB7A);
    // 0x80068FC4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80068FC8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80068FCC: addiu       $t0, $t0, 0x680
    ctx->r8 = ADD32(ctx->r8, 0X680);
    // 0x80068FD0: bne         $t7, $at, L_80069048
    if (ctx->r15 != ctx->r1) {
        // 0x80068FD4: addiu       $t1, $zero, 0xC
        ctx->r9 = ADD32(0, 0XC);
            goto L_80069048;
    }
    // 0x80068FD4: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x80068FD8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80068FDC: lw          $t8, 0xB44($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB44);
    // 0x80068FE0: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80068FE4: sltiu       $at, $t8, 0xE
    ctx->r1 = ctx->r24 < 0XE ? 1 : 0;
    // 0x80068FE8: beq         $at, $zero, L_80069048
    if (ctx->r1 == 0) {
        // 0x80068FEC: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80069048;
    }
    // 0x80068FEC: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80068FF0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80068FF4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80068FF8: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x80068FFC: lhu         $t9, 0x6A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X6A);
    // 0x80069000: lhu         $t3, 0x2C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2C);
    // 0x80069004: nop

    // 0x80069008: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8006900C: mfhi        $t4
    ctx->r12 = hi;
    // 0x80069010: slt         $at, $t9, $t4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80069014: beq         $at, $zero, L_80069048
    if (ctx->r1 == 0) {
        // 0x80069018: nop
    
            goto L_80069048;
    }
    // 0x80069018: nop

    // 0x8006901C: lbu         $t5, 0xBD($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBD);
    // 0x80069020: nop

    // 0x80069024: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x80069028: beq         $t6, $zero, L_80069048
    if (ctx->r14 == 0) {
        // 0x8006902C: nop
    
            goto L_80069048;
    }
    // 0x8006902C: nop

    // 0x80069030: jal         0x8026D61C
    // 0x80069034: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D61C)(rdram, ctx);
        goto after_3;
    // 0x80069034: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_3:
    // 0x80069038: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8006903C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069040: b           L_80069318
    // 0x80069044: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
        goto L_80069318;
    // 0x80069044: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_80069048:
    // 0x80069048: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8006904C: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80069050: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80069054: nop

    // 0x80069058: lhu         $v1, 0x6A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6A);
    // 0x8006905C: nop

    // 0x80069060: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80069064: beq         $at, $zero, L_800690E0
    if (ctx->r1 == 0) {
        // 0x80069068: slti        $at, $v1, 0xA
        ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_800690E0;
    }
    // 0x80069068: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x8006906C: multu       $a1, $t1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80069070: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80069074: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069078: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006907C: mflo        $t7
    ctx->r15 = lo;
    // 0x80069080: addu        $t8, $t0, $t7
    ctx->r24 = ADD32(ctx->r8, ctx->r15);
    // 0x80069084: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80069088: nop

    // 0x8006908C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80069090: nop

    // 0x80069094: bc1f        L_800690DC
    if (!c1cs) {
        // 0x80069098: nop
    
            goto L_800690DC;
    }
    // 0x80069098: nop

    // 0x8006909C: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800690A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800690A4: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x800690A8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800690AC: nop

    // 0x800690B0: bc1f        L_800690DC
    if (!c1cs) {
        // 0x800690B4: nop
    
            goto L_800690DC;
    }
    // 0x800690B4: nop

    // 0x800690B8: beq         $at, $zero, L_800690E0
    if (ctx->r1 == 0) {
        // 0x800690BC: slti        $at, $v1, 0xA
        ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
            goto L_800690E0;
    }
    // 0x800690BC: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x800690C0: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x800690C4: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x800690C8: sh          $t2, 0x928($t3)
    MEM_H(0X928, ctx->r11) = ctx->r10;
    // 0x800690CC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800690D0: nop

    // 0x800690D4: lhu         $v1, 0x6A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6A);
    // 0x800690D8: nop

L_800690DC:
    // 0x800690DC: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
L_800690E0:
    // 0x800690E0: beq         $at, $zero, L_800691AC
    if (ctx->r1 == 0) {
        // 0x800690E4: nop
    
            goto L_800691AC;
    }
    // 0x800690E4: nop

    // 0x800690E8: lbu         $t9, 0xBD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XBD);
    // 0x800690EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800690F0: andi        $t4, $t9, 0x4
    ctx->r12 = ctx->r25 & 0X4;
    // 0x800690F4: beq         $t4, $zero, L_800691AC
    if (ctx->r12 == 0) {
        // 0x800690F8: nop
    
            goto L_800691AC;
    }
    // 0x800690F8: nop

    // 0x800690FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80069100: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80069104: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x80069108: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8006910C: nop

    // 0x80069110: bc1f        L_8006912C
    if (!c1cs) {
        // 0x80069114: nop
    
            goto L_8006912C;
    }
    // 0x80069114: nop

    // 0x80069118: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8006911C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80069120: sh          $t5, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r13;
    // 0x80069124: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80069128: nop

L_8006912C:
    // 0x8006912C: beq         $at, $zero, L_800691AC
    if (ctx->r1 == 0) {
        // 0x80069130: nop
    
            goto L_800691AC;
    }
    // 0x80069130: nop

    // 0x80069134: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x80069138: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006913C: lhu         $t8, 0x2C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2C);
    // 0x80069140: nop

    // 0x80069144: andi        $t2, $t8, 0x1
    ctx->r10 = ctx->r24 & 0X1;
    // 0x80069148: beq         $t2, $zero, L_800691AC
    if (ctx->r10 == 0) {
        // 0x8006914C: nop
    
            goto L_800691AC;
    }
    // 0x8006914C: nop

    // 0x80069150: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80069154: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069158: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x8006915C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80069160: nop

    // 0x80069164: bc1f        L_80069198
    if (!c1cs) {
        // 0x80069168: nop
    
            goto L_80069198;
    }
    // 0x80069168: nop

    // 0x8006916C: lh          $t3, -0x1B60($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1B60);
    // 0x80069170: nop

    // 0x80069174: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
    // 0x80069178: beq         $t9, $zero, L_80069198
    if (ctx->r25 == 0) {
        // 0x8006917C: nop
    
            goto L_80069198;
    }
    // 0x8006917C: nop

    // 0x80069180: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x80069184: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x80069188: sh          $t4, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r12;
    // 0x8006918C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80069190: b           L_800691AC
    // 0x80069194: nop

        goto L_800691AC;
    // 0x80069194: nop

L_80069198:
    // 0x80069198: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8006919C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x800691A0: sh          $t6, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r14;
    // 0x800691A4: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800691A8: nop

L_800691AC:
    // 0x800691AC: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x800691B0: lw          $t8, 0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X39FC);
    // 0x800691B4: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800691B8: sll         $t2, $t8, 1
    ctx->r10 = S32(ctx->r24 << 1);
    // 0x800691BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800691C0: lhu         $t3, -0x1474($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X1474);
    // 0x800691C4: lhu         $t9, 0x6A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X6A);
    // 0x800691C8: nop

    // 0x800691CC: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800691D0: beq         $at, $zero, L_8006920C
    if (ctx->r1 == 0) {
        // 0x800691D4: nop
    
            goto L_8006920C;
    }
    // 0x800691D4: nop

    // 0x800691D8: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x800691DC: lui         $at, 0x4028
    ctx->r1 = S32(0X4028 << 16);
    // 0x800691E0: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800691E4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800691E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800691EC: nop

    // 0x800691F0: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x800691F4: nop

    // 0x800691F8: bc1f        L_8006920C
    if (!c1cs) {
        // 0x800691FC: nop
    
            goto L_8006920C;
    }
    // 0x800691FC: nop

    // 0x80069200: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x80069204: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80069208: sh          $t4, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r12;
L_8006920C:
    // 0x8006920C: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80069210: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80069214: sh          $t6, 0x92A($t7)
    MEM_H(0X92A, ctx->r15) = ctx->r14;
    // 0x80069218: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8006921C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80069220: lbu         $t8, 0xBC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XBC);
    // 0x80069224: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80069228: beq         $t8, $at, L_8006923C
    if (ctx->r24 == ctx->r1) {
        // 0x8006922C: addiu       $a1, $a1, -0x2
        ctx->r5 = ADD32(ctx->r5, -0X2);
            goto L_8006923C;
    }
    // 0x8006922C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x80069230: bgez        $a1, L_8006923C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80069234: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8006923C;
    }
    // 0x80069234: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80069238: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8006923C:
    // 0x8006923C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069240: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80069244: lwc1        $f7, -0x5958($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5958);
    // 0x80069248: lwc1        $f6, -0x5954($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5954);
    // 0x8006924C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80069250: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x80069254: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80069258: bc1f        L_80069318
    if (!c1cs) {
        // 0x8006925C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80069318;
    }
    // 0x8006925C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80069260: multu       $t2, $t1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80069264: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80069268: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x8006926C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80069270: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80069274: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80069278: mflo        $t3
    ctx->r11 = lo;
    // 0x8006927C: addu        $v0, $t0, $t3
    ctx->r2 = ADD32(ctx->r8, ctx->r11);
    // 0x80069280: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80069284: nop

    // 0x80069288: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006928C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80069290: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80069294: nop

    // 0x80069298: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8006929C: sh          $t4, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r12;
    // 0x800692A0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800692A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800692A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800692AC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800692B0: lh          $t7, 0x2E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2E);
    // 0x800692B4: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800692B8: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800692BC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800692C0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800692C4: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x800692C8: lh          $t8, 0x30($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X30);
    // 0x800692CC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800692D0: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x800692D4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800692D8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800692DC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800692E0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800692E4: jal         0x80272B98
    // 0x800692E8: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_4;
    // 0x800692E8: nop

    after_4:
    // 0x800692EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800692F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800692F4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800692F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800692FC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80069300: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80069304: bc1f        L_80069314
    if (!c1cs) {
        // 0x80069308: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069314;
    }
    // 0x80069308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006930C: b           L_80069318
    // 0x80069310: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
        goto L_80069318;
    // 0x80069310: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
L_80069314:
    // 0x80069314: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069318:
    // 0x80069318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006931C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80069320: jr          $ra
    // 0x80069324: nop

    return;
    // 0x80069324: nop

;}
RECOMP_FUNC void func_80069328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069328: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8006932C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80069330: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80069334: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80069338: addiu       $t8, $t8, 0x680
    ctx->r24 = ADD32(ctx->r24, 0X680);
    // 0x8006933C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80069340: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x80069344: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80069348: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8006934C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80069350: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x80069354: lw          $a2, 0x14($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X14);
    // 0x80069358: lwc1        $f12, 0x8($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8006935C: lwc1        $f14, 0x0($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80069360: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x80069364: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80069368: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8006936C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80069370: jal         0x80272B1C
    // 0x80069374: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x80069374: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80069378: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8006937C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80069380: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80069384: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80069388: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006938C: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80069390: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80069394: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80069398: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006939C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800693A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800693A4: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800693A8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800693AC: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800693B0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800693B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800693B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800693BC: addiu       $t1, $zero, 0x25
    ctx->r9 = ADD32(0, 0X25);
    // 0x800693C0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800693C4: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x800693C8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x800693CC: sh          $t3, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r11;
    // 0x800693D0: sh          $t5, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r13;
    // 0x800693D4: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x800693D8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800693DC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800693E0: beq         $t8, $zero, L_80069494
    if (ctx->r24 == 0) {
        // 0x800693E4: slti        $at, $a2, 0x8
        ctx->r1 = SIGNED(ctx->r6) < 0X8 ? 1 : 0;
            goto L_80069494;
    }
    // 0x800693E4: slti        $at, $a2, 0x8
    ctx->r1 = SIGNED(ctx->r6) < 0X8 ? 1 : 0;
    // 0x800693E8: beq         $at, $zero, L_80069494
    if (ctx->r1 == 0) {
        // 0x800693EC: lui         $a3, 0x8009
        ctx->r7 = S32(0X8009 << 16);
            goto L_80069494;
    }
    // 0x800693EC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x800693F0: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x800693F4: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x800693F8: nop

    // 0x800693FC: lhu         $t1, 0x6A($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X6A);
    // 0x80069400: nop

    // 0x80069404: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80069408: beq         $at, $zero, L_80069494
    if (ctx->r1 == 0) {
        // 0x8006940C: nop
    
            goto L_80069494;
    }
    // 0x8006940C: nop

    // 0x80069410: lwc1        $f16, 0x50($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80069414: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80069418: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8006941C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80069420: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80069424: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x80069428: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006942C: bc1f        L_80069494
    if (!c1cs) {
        // 0x80069430: nop
    
            goto L_80069494;
    }
    // 0x80069430: nop

    // 0x80069434: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80069438: lwc1        $f11, -0x5950($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5950);
    // 0x8006943C: lwc1        $f10, -0x594C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X594C);
    // 0x80069440: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80069444: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80069448: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8006944C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80069450: cvt.s.d     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f14.fl = CVT_S_D(ctx->f16.d);
    // 0x80069454: jal         0x80279308
    // 0x80069458: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x80069458: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_1:
    // 0x8006945C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069460: lwc1        $f5, -0x5948($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5948);
    // 0x80069464: lwc1        $f4, -0x5944($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5944);
    // 0x80069468: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8006946C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80069470: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80069474: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80069478: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8006947C: bc1f        L_80069494
    if (!c1cs) {
        // 0x80069480: addiu       $t2, $zero, 0xF
        ctx->r10 = ADD32(0, 0XF);
            goto L_80069494;
    }
    // 0x80069480: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80069484: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x80069488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006948C: b           L_8006991C
    // 0x80069490: sh          $t2, 0x928($t3)
    MEM_H(0X928, ctx->r11) = ctx->r10;
        goto L_8006991C;
    // 0x80069490: sh          $t2, 0x928($t3)
    MEM_H(0X928, ctx->r11) = ctx->r10;
L_80069494:
    // 0x80069494: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80069498: slti        $at, $a2, 0x7
    ctx->r1 = SIGNED(ctx->r6) < 0X7 ? 1 : 0;
    // 0x8006949C: beq         $at, $zero, L_80069544
    if (ctx->r1 == 0) {
        // 0x800694A0: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80069544;
    }
    // 0x800694A0: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x800694A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x800694A8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800694AC: jal         0x80067350
    // 0x800694B0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80067350(rdram, ctx);
        goto after_2;
    // 0x800694B0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_2:
    // 0x800694B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800694B8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800694BC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x800694C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800694C4: bne         $v0, $zero, L_80069544
    if (ctx->r2 != 0) {
        // 0x800694C8: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_80069544;
    }
    // 0x800694C8: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x800694CC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800694D0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800694D4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800694D8: lwc1        $f7, -0x5940($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5940);
    // 0x800694DC: lwc1        $f6, -0x593C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X593C);
    // 0x800694E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800694E4: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x800694E8: nop

    // 0x800694EC: bc1f        L_80069548
    if (!c1cs) {
        // 0x800694F0: lui         $at, 0x420C
        ctx->r1 = S32(0X420C << 16);
            goto L_80069548;
    }
    // 0x800694F0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x800694F4: lhu         $t4, 0x6A($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6A);
    // 0x800694F8: nop

    // 0x800694FC: slti        $at, $t4, 0x9
    ctx->r1 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x80069500: beq         $at, $zero, L_80069544
    if (ctx->r1 == 0) {
        // 0x80069504: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_80069544;
    }
    // 0x80069504: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80069508: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006950C: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80069510: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x80069514: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80069518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006951C: bc1f        L_80069530
    if (!c1cs) {
        // 0x80069520: nop
    
            goto L_80069530;
    }
    // 0x80069520: nop

    // 0x80069524: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80069528: b           L_8006991C
    // 0x8006952C: sh          $t5, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r13;
        goto L_8006991C;
    // 0x8006952C: sh          $t5, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r13;
L_80069530:
    // 0x80069530: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80069534: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80069538: sh          $t7, 0x928($t8)
    MEM_H(0X928, ctx->r24) = ctx->r15;
    // 0x8006953C: b           L_8006991C
    // 0x80069540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006991C;
    // 0x80069540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069544:
    // 0x80069544: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
L_80069548:
    // 0x80069548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006954C: lwc1        $f0, 0x4($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80069550: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80069554: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80069558: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8006955C: bc1f        L_80069578
    if (!c1cs) {
        // 0x80069560: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_80069578;
    }
    // 0x80069560: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80069564: bgez        $t9, L_80069578
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80069568: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80069578;
    }
    // 0x80069568: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8006956C: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x80069570: b           L_8006991C
    // 0x80069574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006991C;
    // 0x80069574: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069578:
    // 0x80069578: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006957C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80069580: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80069584: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80069588: bc1t        L_800695AC
    if (c1cs) {
        // 0x8006958C: lui         $t2, 0x801B
        ctx->r10 = S32(0X801B << 16);
            goto L_800695AC;
    }
    // 0x8006958C: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80069590: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80069594: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80069598: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8006959C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x800695A0: nop

    // 0x800695A4: bc1f        L_80069714
    if (!c1cs) {
        // 0x800695A8: nop
    
            goto L_80069714;
    }
    // 0x800695A8: nop

L_800695AC:
    // 0x800695AC: lw          $t2, 0x39FC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X39FC);
    // 0x800695B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800695B4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800695B8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800695BC: lwc1        $f16, -0x1468($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1468);
    // 0x800695C0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800695C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x800695C8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800695CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800695D0: bc1f        L_8006961C
    if (!c1cs) {
        // 0x800695D4: nop
    
            goto L_8006961C;
    }
    // 0x800695D4: nop

    // 0x800695D8: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x800695DC: lwc1        $f6, -0x5934($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5934);
    // 0x800695E0: lwc1        $f7, -0x5938($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5938);
    // 0x800695E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800695E8: lwc1        $f10, 0x39F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x800695EC: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800695F0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800695F4: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x800695F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800695FC: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x80069600: c.lt.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d < ctx->f18.d;
    // 0x80069604: nop

    // 0x80069608: bc1f        L_80069878
    if (!c1cs) {
        // 0x8006960C: nop
    
            goto L_80069878;
    }
    // 0x8006960C: nop

    // 0x80069610: lw          $t4, 0xC8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC8);
    // 0x80069614: b           L_8006991C
    // 0x80069618: sh          $a1, 0x928($t4)
    MEM_H(0X928, ctx->r12) = ctx->r5;
        goto L_8006991C;
    // 0x80069618: sh          $a1, 0x928($t4)
    MEM_H(0X928, ctx->r12) = ctx->r5;
L_8006961C:
    // 0x8006961C: lh          $t5, 0x8B8($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X8B8);
    // 0x80069620: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80069624: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80069628: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8006962C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80069630: jal         0x80272AEC
    // 0x80069634: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x80069634: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_3:
    // 0x80069638: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006963C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80069640: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80069644: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80069648: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006964C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80069650: bc1f        L_800696C4
    if (!c1cs) {
        // 0x80069654: addiu       $a3, $a3, 0x3B20
        ctx->r7 = ADD32(ctx->r7, 0X3B20);
            goto L_800696C4;
    }
    // 0x80069654: addiu       $a3, $a3, 0x3B20
    ctx->r7 = ADD32(ctx->r7, 0X3B20);
    // 0x80069658: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006965C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80069660: lwc1        $f11, -0x5930($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5930);
    // 0x80069664: lwc1        $f10, -0x592C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X592C);
    // 0x80069668: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x8006966C: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x80069670: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80069674: bc1f        L_800696C4
    if (!c1cs) {
        // 0x80069678: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_800696C4;
    }
    // 0x80069678: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006967C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80069680: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x80069684: sh          $v1, 0x92A($t6)
    MEM_H(0X92A, ctx->r14) = ctx->r3;
    // 0x80069688: lwc1        $f16, -0x5924($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5924);
    // 0x8006968C: lwc1        $f17, -0x5928($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5928);
    // 0x80069690: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069694: lwc1        $f8, 0x39F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x80069698: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8006969C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800696A0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x800696A4: add.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f16.d + ctx->f18.d;
    // 0x800696A8: c.lt.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d < ctx->f10.d;
    // 0x800696AC: nop

    // 0x800696B0: bc1f        L_80069878
    if (!c1cs) {
        // 0x800696B4: nop
    
            goto L_80069878;
    }
    // 0x800696B4: nop

    // 0x800696B8: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x800696BC: b           L_8006991C
    // 0x800696C0: sh          $v1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r3;
        goto L_8006991C;
    // 0x800696C0: sh          $v1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r3;
L_800696C4:
    // 0x800696C4: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x800696C8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x800696CC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800696D0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800696D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800696D8: sh          $v1, 0x92A($t8)
    MEM_H(0X92A, ctx->r24) = ctx->r3;
    // 0x800696DC: lwc1        $f18, 0x39F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X39F4);
    // 0x800696E0: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800696E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800696E8: cvt.d.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.d = CVT_D_W(ctx->f4.u32l);
    // 0x800696EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800696F0: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x800696F4: add.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d + ctx->f6.d;
    // 0x800696F8: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x800696FC: nop

    // 0x80069700: bc1f        L_80069878
    if (!c1cs) {
        // 0x80069704: nop
    
            goto L_80069878;
    }
    // 0x80069704: nop

    // 0x80069708: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x8006970C: b           L_8006991C
    // 0x80069710: sh          $v1, 0x928($t9)
    MEM_H(0X928, ctx->r25) = ctx->r3;
        goto L_8006991C;
    // 0x80069710: sh          $v1, 0x928($t9)
    MEM_H(0X928, ctx->r25) = ctx->r3;
L_80069714:
    // 0x80069714: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80069718: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006971C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80069720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80069724: bc1f        L_800697C8
    if (!c1cs) {
        // 0x80069728: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_800697C8;
    }
    // 0x80069728: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8006972C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80069730: lw          $v0, 0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X39FC);
    // 0x80069734: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80069738: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8006973C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80069740: lwc1        $f18, -0x1468($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1468);
    // 0x80069744: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80069748: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8006974C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80069750: bc1f        L_80069794
    if (!c1cs) {
        // 0x80069754: addu        $t5, $t5, $t4
        ctx->r13 = ADD32(ctx->r13, ctx->r12);
            goto L_80069794;
    }
    // 0x80069754: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80069758: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x8006975C: lh          $t5, -0x1454($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1454);
    // 0x80069760: lhu         $t3, 0x6A($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6A);
    // 0x80069764: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80069768: slt         $at, $t3, $t5
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006976C: beq         $at, $zero, L_80069794
    if (ctx->r1 == 0) {
        // 0x80069770: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_80069794;
    }
    // 0x80069770: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80069774: addiu       $t6, $t6, 0x6F8
    ctx->r14 = ADD32(ctx->r14, 0X6F8);
    // 0x80069778: sltu        $at, $t0, $t6
    ctx->r1 = ctx->r8 < ctx->r14 ? 1 : 0;
    // 0x8006977C: beq         $at, $zero, L_80069878
    if (ctx->r1 == 0) {
        // 0x80069780: sh          $a1, 0x92A($v1)
        MEM_H(0X92A, ctx->r3) = ctx->r5;
            goto L_80069878;
    }
    // 0x80069780: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x80069784: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80069788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006978C: b           L_8006991C
    // 0x80069790: sh          $a1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r5;
        goto L_8006991C;
    // 0x80069790: sh          $a1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r5;
L_80069794:
    // 0x80069794: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80069798: lui         $at, 0x4023
    ctx->r1 = S32(0X4023 << 16);
    // 0x8006979C: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800697A0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800697A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800697A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800697AC: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x800697B0: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x800697B4: bc1f        L_80069878
    if (!c1cs) {
        // 0x800697B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069878;
    }
    // 0x800697B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800697BC: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x800697C0: b           L_8006991C
    // 0x800697C4: sh          $a1, 0x928($t8)
    MEM_H(0X928, ctx->r24) = ctx->r5;
        goto L_8006991C;
    // 0x800697C4: sh          $a1, 0x928($t8)
    MEM_H(0X928, ctx->r24) = ctx->r5;
L_800697C8:
    // 0x800697C8: lw          $v0, 0x39FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X39FC);
    // 0x800697CC: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800697D0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800697D4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800697D8: lwc1        $f4, -0x1468($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1468);
    // 0x800697DC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800697E0: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800697E4: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x800697E8: bc1f        L_80069824
    if (!c1cs) {
        // 0x800697EC: addu        $t3, $t3, $t4
        ctx->r11 = ADD32(ctx->r11, ctx->r12);
            goto L_80069824;
    }
    // 0x800697EC: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x800697F0: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x800697F4: lh          $t3, -0x1454($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1454);
    // 0x800697F8: lhu         $t2, 0x6A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6A);
    // 0x800697FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80069800: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80069804: beq         $at, $zero, L_80069824
    if (ctx->r1 == 0) {
        // 0x80069808: sltiu       $at, $a2, 0x9
        ctx->r1 = ctx->r6 < 0X9 ? 1 : 0;
            goto L_80069824;
    }
    // 0x80069808: sltiu       $at, $a2, 0x9
    ctx->r1 = ctx->r6 < 0X9 ? 1 : 0;
    // 0x8006980C: beq         $at, $zero, L_80069878
    if (ctx->r1 == 0) {
        // 0x80069810: sh          $a1, 0x92A($v1)
        MEM_H(0X92A, ctx->r3) = ctx->r5;
            goto L_80069878;
    }
    // 0x80069810: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x80069814: lw          $t5, 0xC8($a0)
    ctx->r13 = MEM_W(ctx->r4, 0XC8);
    // 0x80069818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006981C: b           L_8006991C
    // 0x80069820: sh          $a1, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r5;
        goto L_8006991C;
    // 0x80069820: sh          $a1, 0x928($t5)
    MEM_H(0X928, ctx->r13) = ctx->r5;
L_80069824:
    // 0x80069824: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80069828: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006982C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80069830: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80069834: sltiu       $at, $a2, 0x10
    ctx->r1 = ctx->r6 < 0X10 ? 1 : 0;
    // 0x80069838: bc1f        L_80069860
    if (!c1cs) {
        // 0x8006983C: nop
    
            goto L_80069860;
    }
    // 0x8006983C: nop

    // 0x80069840: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80069844: sltiu       $at, $a2, 0x5
    ctx->r1 = ctx->r6 < 0X5 ? 1 : 0;
    // 0x80069848: beq         $at, $zero, L_80069878
    if (ctx->r1 == 0) {
        // 0x8006984C: sh          $a1, 0x92A($v1)
        MEM_H(0X92A, ctx->r3) = ctx->r5;
            goto L_80069878;
    }
    // 0x8006984C: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x80069850: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80069854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069858: b           L_8006991C
    // 0x8006985C: sh          $a1, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r5;
        goto L_8006991C;
    // 0x8006985C: sh          $a1, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r5;
L_80069860:
    // 0x80069860: beq         $at, $zero, L_80069878
    if (ctx->r1 == 0) {
        // 0x80069864: sh          $a1, 0x92A($v1)
        MEM_H(0X92A, ctx->r3) = ctx->r5;
            goto L_80069878;
    }
    // 0x80069864: sh          $a1, 0x92A($v1)
    MEM_H(0X92A, ctx->r3) = ctx->r5;
    // 0x80069868: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x8006986C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80069870: b           L_8006991C
    // 0x80069874: sh          $a1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r5;
        goto L_8006991C;
    // 0x80069874: sh          $a1, 0x928($t7)
    MEM_H(0X928, ctx->r15) = ctx->r5;
L_80069878:
    // 0x80069878: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8006987C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80069880: lbu         $t8, 0xBC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XBC);
    // 0x80069884: addiu       $t9, $zero, 0x19
    ctx->r25 = ADD32(0, 0X19);
    // 0x80069888: bne         $t8, $at, L_800698B4
    if (ctx->r24 != ctx->r1) {
        // 0x8006988C: nop
    
            goto L_800698B4;
    }
    // 0x8006988C: nop

    // 0x80069890: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80069894: lui         $at, 0x401E
    ctx->r1 = S32(0X401E << 16);
    // 0x80069898: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8006989C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800698A0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800698A4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x800698A8: nop

    // 0x800698AC: bc1f        L_8006991C
    if (!c1cs) {
        // 0x800698B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006991C;
    }
    // 0x800698B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800698B4:
    // 0x800698B4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800698B8: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x800698BC: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x800698C0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800698C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800698C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800698CC: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800698D0: nop

    // 0x800698D4: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800698D8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800698DC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x800698E0: nop

    // 0x800698E4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800698E8: sh          $t2, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r10;
    // 0x800698EC: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x800698F0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800698F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800698F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800698FC: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80069900: nop

    // 0x80069904: cvt.w.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80069908: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8006990C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80069910: sh          $t6, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r14;
    // 0x80069914: nop

    // 0x80069918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006991C:
    // 0x8006991C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80069920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80069924: jr          $ra
    // 0x80069928: nop

    return;
    // 0x80069928: nop

;}
RECOMP_FUNC void func_8006992C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006992C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80069930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069934: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80069938: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8006993C: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x80069940: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x80069944: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80069948: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8006994C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80069950: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80069954: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80069958: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006995C: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80069960: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80069964: addiu       $t9, $t9, 0x680
    ctx->r25 = ADD32(ctx->r25, 0X680);
    // 0x80069968: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8006996C: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80069970: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80069974: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069978: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8006997C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80069980: bc1f        L_800699C8
    if (!c1cs) {
        // 0x80069984: nop
    
            goto L_800699C8;
    }
    // 0x80069984: nop

    // 0x80069988: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8006998C: lwc1        $f5, -0x5920($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5920);
    // 0x80069990: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80069994: lwc1        $f4, -0x591C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X591C);
    // 0x80069998: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006999C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x800699A0: nop

    // 0x800699A4: bc1f        L_800699C8
    if (!c1cs) {
        // 0x800699A8: nop
    
            goto L_800699C8;
    }
    // 0x800699A8: nop

    // 0x800699AC: jal         0x8026D928
    // 0x800699B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D928)(rdram, ctx);
        goto after_0;
    // 0x800699B0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x800699B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800699B8: addiu       $t1, $zero, 0x2A
    ctx->r9 = ADD32(0, 0X2A);
    // 0x800699BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800699C0: b           L_80069AD8
    // 0x800699C4: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
        goto L_80069AD8;
    // 0x800699C4: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
L_800699C8:
    // 0x800699C8: lw          $t2, 0xC8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XC8);
    // 0x800699CC: nop

    // 0x800699D0: lhu         $t3, 0x10($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X10);
    // 0x800699D4: nop

    // 0x800699D8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800699DC: beq         $t4, $zero, L_80069A08
    if (ctx->r12 == 0) {
        // 0x800699E0: nop
    
            goto L_80069A08;
    }
    // 0x800699E0: nop

    // 0x800699E4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800699E8: jal         0x80068C50
    // 0x800699EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80068C50(rdram, ctx);
        goto after_1;
    // 0x800699EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x800699F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800699F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800699F8: beq         $v0, $zero, L_80069A08
    if (ctx->r2 == 0) {
        // 0x800699FC: nop
    
            goto L_80069A08;
    }
    // 0x800699FC: nop

    // 0x80069A00: b           L_80069AD8
    // 0x80069A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80069AD8;
    // 0x80069A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069A08:
    // 0x80069A08: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x80069A0C: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x80069A10: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80069A14: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80069A18: jal         0x80272B98
    // 0x80069A1C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x80069A1C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x80069A20: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80069A24: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80069A28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80069A2C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80069A30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80069A34: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80069A38: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80069A3C: bc1f        L_80069A8C
    if (!c1cs) {
        // 0x80069A40: addiu       $a3, $sp, 0x20
        ctx->r7 = ADD32(ctx->r29, 0X20);
            goto L_80069A8C;
    }
    // 0x80069A40: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x80069A44: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80069A48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069A4C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80069A50: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80069A54: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80069A58: nop

    // 0x80069A5C: bc1f        L_80069A7C
    if (!c1cs) {
        // 0x80069A60: nop
    
            goto L_80069A7C;
    }
    // 0x80069A60: nop

    // 0x80069A64: jal         0x80068DEC
    // 0x80069A68: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80068DEC(rdram, ctx);
        goto after_3;
    // 0x80069A68: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
    // 0x80069A6C: beq         $v0, $zero, L_80069AD8
    if (ctx->r2 == 0) {
        // 0x80069A70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80069AD8;
    }
    // 0x80069A70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80069A74: b           L_80069AD8
    // 0x80069A78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80069AD8;
    // 0x80069A78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069A7C:
    // 0x80069A7C: jal         0x80069328
    // 0x80069A80: nop

    func_80069328(rdram, ctx);
        goto after_4;
    // 0x80069A80: nop

    after_4:
    // 0x80069A84: b           L_80069ADC
    // 0x80069A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80069ADC;
    // 0x80069A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80069A8C:
    // 0x80069A8C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80069A90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80069A94: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80069A98: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80069A9C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80069AA0: nop

    // 0x80069AA4: bc1f        L_80069AC4
    if (!c1cs) {
        // 0x80069AA8: nop
    
            goto L_80069AC4;
    }
    // 0x80069AA8: nop

    // 0x80069AAC: jal         0x80068DEC
    // 0x80069AB0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80068DEC(rdram, ctx);
        goto after_5;
    // 0x80069AB0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_5:
    // 0x80069AB4: beq         $v0, $zero, L_80069AD8
    if (ctx->r2 == 0) {
        // 0x80069AB8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80069AD8;
    }
    // 0x80069AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80069ABC: b           L_80069AD8
    // 0x80069AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80069AD8;
    // 0x80069AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069AC4:
    // 0x80069AC4: jal         0x80069328
    // 0x80069AC8: nop

    func_80069328(rdram, ctx);
        goto after_6;
    // 0x80069AC8: nop

    after_6:
    // 0x80069ACC: b           L_80069ADC
    // 0x80069AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80069ADC;
    // 0x80069AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069AD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069AD8:
    // 0x80069AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80069ADC:
    // 0x80069ADC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80069AE0: jr          $ra
    // 0x80069AE4: nop

    return;
    // 0x80069AE4: nop

;}
RECOMP_FUNC void func_80069AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069AE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80069AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069AF0: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80069AF4: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80069AF8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80069AFC: sh          $t6, 0x92A($t7)
    MEM_H(0X92A, ctx->r15) = ctx->r14;
    // 0x80069B00: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80069B04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80069B08: lw          $t9, 0x88($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X88);
    // 0x80069B0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80069B10: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80069B14: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x80069B18: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80069B1C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80069B20: beq         $t8, $t0, L_80069D04
    if (ctx->r24 == ctx->r8) {
        // 0x80069B24: nop
    
            goto L_80069D04;
    }
    // 0x80069B24: nop

    // 0x80069B28: lw          $t1, 0x84($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X84);
    // 0x80069B2C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80069B30: bne         $t1, $zero, L_80069B48
    if (ctx->r9 != 0) {
        // 0x80069B34: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80069B48;
    }
    // 0x80069B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069B38: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80069B3C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80069B40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80069B44: nop

L_80069B48:
    // 0x80069B48: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80069B4C: nop

    // 0x80069B50: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80069B54: nop

    // 0x80069B58: bc1f        L_80069B90
    if (!c1cs) {
        // 0x80069B5C: nop
    
            goto L_80069B90;
    }
    // 0x80069B5C: nop

    // 0x80069B60: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80069B64: jal         0x80067CFC
    // 0x80069B68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80067CFC(rdram, ctx);
        goto after_0;
    // 0x80069B68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80069B6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80069B70: bltz        $v0, L_80069B90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80069B74: sltiu       $at, $v0, 0x5
        ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
            goto L_80069B90;
    }
    // 0x80069B74: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80069B78: beq         $at, $zero, L_80069B90
    if (ctx->r1 == 0) {
        // 0x80069B7C: addiu       $t2, $zero, 0xE
        ctx->r10 = ADD32(0, 0XE);
            goto L_80069B90;
    }
    // 0x80069B7C: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80069B80: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x80069B84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069B88: b           L_80069D10
    // 0x80069B8C: sh          $t2, 0x928($t3)
    MEM_H(0X928, ctx->r11) = ctx->r10;
        goto L_80069D10;
    // 0x80069B8C: sh          $t2, 0x928($t3)
    MEM_H(0X928, ctx->r11) = ctx->r10;
L_80069B90:
    // 0x80069B90: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80069B94: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80069B98: lhu         $t4, 0x10($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X10);
    // 0x80069B9C: nop

    // 0x80069BA0: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80069BA4: beq         $t5, $zero, L_80069BE0
    if (ctx->r13 == 0) {
        // 0x80069BA8: nop
    
            goto L_80069BE0;
    }
    // 0x80069BA8: nop

    // 0x80069BAC: lwc1        $f6, 0x8BC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x80069BB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80069BB4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80069BB8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80069BBC: nop

    // 0x80069BC0: bc1f        L_80069BE0
    if (!c1cs) {
        // 0x80069BC4: nop
    
            goto L_80069BE0;
    }
    // 0x80069BC4: nop

    // 0x80069BC8: sb          $t6, 0x92F($v0)
    MEM_B(0X92F, ctx->r2) = ctx->r14;
    // 0x80069BCC: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80069BD0: nop

    // 0x80069BD4: lbu         $v1, 0x92F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X92F);
    // 0x80069BD8: b           L_80069C04
    // 0x80069BDC: nop

        goto L_80069C04;
    // 0x80069BDC: nop

L_80069BE0:
    // 0x80069BE0: lbu         $v1, 0x92F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X92F);
    // 0x80069BE4: nop

    // 0x80069BE8: beq         $v1, $zero, L_80069C04
    if (ctx->r3 == 0) {
        // 0x80069BEC: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_80069C04;
    }
    // 0x80069BEC: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80069BF0: sb          $t7, 0x92F($v0)
    MEM_B(0X92F, ctx->r2) = ctx->r15;
    // 0x80069BF4: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80069BF8: nop

    // 0x80069BFC: lbu         $v1, 0x92F($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X92F);
    // 0x80069C00: nop

L_80069C04:
    // 0x80069C04: beq         $v1, $zero, L_80069D0C
    if (ctx->r3 == 0) {
        // 0x80069C08: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_80069D0C;
    }
    // 0x80069C08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80069C0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80069C10: lwc1        $f2, 0x8BC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8BC);
    // 0x80069C14: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80069C18: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80069C1C: nop

    // 0x80069C20: bc1f        L_80069C54
    if (!c1cs) {
        // 0x80069C24: nop
    
            goto L_80069C54;
    }
    // 0x80069C24: nop

    // 0x80069C28: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80069C2C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80069C30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80069C34: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80069C38: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80069C3C: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x80069C40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80069C44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80069C48: nop

    // 0x80069C4C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80069C50: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80069C54:
    // 0x80069C54: lwc1        $f12, 0x8C0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8C0);
    // 0x80069C58: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x80069C5C: jal         0x80081040
    // 0x80069C60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80069C60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x80069C64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80069C68: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80069C6C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x80069C70: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80069C74: lh          $t9, 0x8B8($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X8B8);
    // 0x80069C78: nop

    // 0x80069C7C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x80069C80: nop

    // 0x80069C84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80069C88: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80069C8C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80069C90: nop

    // 0x80069C94: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80069C98: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80069C9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80069CA0: nop

    // 0x80069CA4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80069CA8: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80069CAC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80069CB0: sh          $t0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r8;
    // 0x80069CB4: lwc1        $f12, 0x8C0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8C0);
    // 0x80069CB8: jal         0x80080E80
    // 0x80069CBC: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80069CBC: nop

    after_2:
    // 0x80069CC0: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80069CC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80069CC8: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80069CCC: addiu       $t3, $zero, 0x4D
    ctx->r11 = ADD32(0, 0X4D);
    // 0x80069CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069CD4: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x80069CD8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80069CDC: nop

    // 0x80069CE0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80069CE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80069CE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80069CEC: nop

    // 0x80069CF0: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80069CF4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x80069CF8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80069CFC: b           L_80069D10
    // 0x80069D00: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
        goto L_80069D10;
    // 0x80069D00: sh          $t2, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r10;
L_80069D04:
    // 0x80069D04: b           L_80069D10
    // 0x80069D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069D10;
    // 0x80069D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069D0C:
    // 0x80069D0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069D10:
    // 0x80069D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069D14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80069D18: jr          $ra
    // 0x80069D1C: nop

    return;
    // 0x80069D1C: nop

;}
RECOMP_FUNC void func_80069D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D20: sltiu       $at, $a1, 0x2
    ctx->r1 = ctx->r5 < 0X2 ? 1 : 0;
    // 0x80069D24: bne         $at, $zero, L_80069D5C
    if (ctx->r1 != 0) {
        // 0x80069D28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069D5C;
    }
    // 0x80069D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069D2C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80069D30: addiu       $v1, $v1, 0x68C
    ctx->r3 = ADD32(ctx->r3, 0X68C);
L_80069D34:
    // 0x80069D34: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80069D38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80069D3C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80069D40: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80069D44: bc1f        L_80069D54
    if (!c1cs) {
        // 0x80069D48: nop
    
            goto L_80069D54;
    }
    // 0x80069D48: nop

    // 0x80069D4C: jr          $ra
    // 0x80069D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80069D50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069D54:
    // 0x80069D54: bne         $at, $zero, L_80069D34
    if (ctx->r1 != 0) {
        // 0x80069D58: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_80069D34;
    }
    // 0x80069D58: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_80069D5C:
    // 0x80069D5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80069D60: jr          $ra
    // 0x80069D64: nop

    return;
    // 0x80069D64: nop

;}
RECOMP_FUNC void func_80069D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80069D6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80069D70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80069D74: lw          $t6, 0xD8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD8);
    // 0x80069D78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80069D7C: lbu         $t7, 0x18($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X18);
    // 0x80069D80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069D84: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80069D88: beq         $t8, $zero, L_80069DA4
    if (ctx->r24 == 0) {
        // 0x80069D8C: addiu       $t1, $zero, 0xE
        ctx->r9 = ADD32(0, 0XE);
            goto L_80069DA4;
    }
    // 0x80069D8C: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x80069D90: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x80069D94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069D98: lbu         $t0, 0x8A8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8A8);
    // 0x80069D9C: b           L_80069DA8
    // 0x80069DA0: sw          $t0, 0x39FC($at)
    MEM_W(0X39FC, ctx->r1) = ctx->r8;
        goto L_80069DA8;
    // 0x80069DA0: sw          $t0, 0x39FC($at)
    MEM_W(0X39FC, ctx->r1) = ctx->r8;
L_80069DA4:
    // 0x80069DA4: sw          $zero, 0x39FC($at)
    MEM_W(0X39FC, ctx->r1) = 0;
L_80069DA8:
    // 0x80069DA8: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x80069DAC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80069DB0: sh          $t1, 0x92A($t2)
    MEM_H(0X92A, ctx->r10) = ctx->r9;
    // 0x80069DB4: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x80069DB8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80069DBC: bne         $t3, $zero, L_80069E10
    if (ctx->r11 != 0) {
        // 0x80069DC0: nop
    
            goto L_80069E10;
    }
    // 0x80069DC0: nop

    // 0x80069DC4: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80069DC8: nop

    // 0x80069DCC: lw          $t5, 0x88($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X88);
    // 0x80069DD0: nop

    // 0x80069DD4: beq         $s0, $t5, L_80069E10
    if (ctx->r16 == ctx->r13) {
        // 0x80069DD8: nop
    
            goto L_80069E10;
    }
    // 0x80069DD8: nop

    // 0x80069DDC: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x80069DE0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80069DE4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80069DE8: bne         $t7, $zero, L_80069E10
    if (ctx->r15 != 0) {
        // 0x80069DEC: nop
    
            goto L_80069E10;
    }
    // 0x80069DEC: nop

    // 0x80069DF0: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80069DF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80069DF8: lwc1        $f6, 0x8BC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8BC);
    // 0x80069DFC: nop

    // 0x80069E00: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80069E04: nop

    // 0x80069E08: bc1f        L_80069E18
    if (!c1cs) {
        // 0x80069E0C: nop
    
            goto L_80069E18;
    }
    // 0x80069E0C: nop

L_80069E10:
    // 0x80069E10: b           L_8006A334
    // 0x80069E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A334;
    // 0x80069E14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80069E18:
    // 0x80069E18: jal         0x800681E8
    // 0x80069E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800681E8(rdram, ctx);
        goto after_0;
    // 0x80069E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80069E20: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80069E24: addiu       $a0, $a0, 0x39F8
    ctx->r4 = ADD32(ctx->r4, 0X39F8);
    // 0x80069E28: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80069E2C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80069E30: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80069E34: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80069E38: lh          $t9, 0xD4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XD4);
    // 0x80069E3C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80069E40: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80069E44: beq         $t0, $zero, L_80069ECC
    if (ctx->r8 == 0) {
        // 0x80069E48: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80069ECC;
    }
    // 0x80069E48: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80069E4C: lh          $t1, 0xD6($v1)
    ctx->r9 = MEM_H(ctx->r3, 0XD6);
    // 0x80069E50: addiu       $t4, $t4, 0x680
    ctx->r12 = ADD32(ctx->r12, 0X680);
    // 0x80069E54: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80069E58: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x80069E5C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80069E60: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80069E64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069E68: sw          $t5, 0x39F0($at)
    MEM_W(0X39F0, ctx->r1) = ctx->r13;
    // 0x80069E6C: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80069E70: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80069E74: lwc1        $f0, 0x0($t5)
    ctx->f0.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80069E78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80069E7C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80069E80: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80069E84: nop

    // 0x80069E88: bc1f        L_80069ED0
    if (!c1cs) {
        // 0x80069E8C: nop
    
            goto L_80069ED0;
    }
    // 0x80069E8C: nop

    // 0x80069E90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069E94: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x80069E98: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80069E9C: nop

    // 0x80069EA0: bc1f        L_80069ED0
    if (!c1cs) {
        // 0x80069EA4: nop
    
            goto L_80069ED0;
    }
    // 0x80069EA4: nop

    // 0x80069EA8: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80069EAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80069EB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80069EB4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80069EB8: nop

    // 0x80069EBC: bc1f        L_80069ED0
    if (!c1cs) {
        // 0x80069EC0: nop
    
            goto L_80069ED0;
    }
    // 0x80069EC0: nop

    // 0x80069EC4: b           L_80069ED0
    // 0x80069EC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
        goto L_80069ED0;
    // 0x80069EC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
L_80069ECC:
    // 0x80069ECC: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_80069ED0:
    // 0x80069ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069ED4: jal         0x80275238
    // 0x80069ED8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80275238)(rdram, ctx);
        goto after_1;
    // 0x80069ED8: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_1:
    // 0x80069EDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069EE0: lwc1        $f7, -0x5918($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5918);
    // 0x80069EE4: lwc1        $f6, -0x5914($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5914);
    // 0x80069EE8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80069EEC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80069EF0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80069EF4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80069EF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80069EFC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80069F00: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80069F04: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80069F08: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80069F0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069F10: swc1        $f18, 0x39F4($at)
    MEM_W(0X39F4, ctx->r1) = ctx->f18.u32l;
    // 0x80069F14: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x80069F18: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80069F1C: beq         $t9, $zero, L_80069F34
    if (ctx->r25 == 0) {
        // 0x80069F20: nop
    
            goto L_80069F34;
    }
    // 0x80069F20: nop

    // 0x80069F24: jal         0x80069AE8
    // 0x80069F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80069AE8(rdram, ctx);
        goto after_2;
    // 0x80069F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80069F2C: b           L_8006A338
    // 0x80069F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006A338;
    // 0x80069F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80069F34:
    // 0x80069F34: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80069F38: beq         $a1, $zero, L_80069F54
    if (ctx->r5 == 0) {
        // 0x80069F3C: sb          $zero, 0x92F($t0)
        MEM_B(0X92F, ctx->r8) = 0;
            goto L_80069F54;
    }
    // 0x80069F3C: sb          $zero, 0x92F($t0)
    MEM_B(0X92F, ctx->r8) = 0;
    // 0x80069F40: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80069F44: jal         0x80068B2C
    // 0x80069F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80068B2C(rdram, ctx);
        goto after_3;
    // 0x80069F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80069F4C: b           L_8006A338
    // 0x80069F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8006A338;
    // 0x80069F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80069F54:
    // 0x80069F54: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80069F58: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80069F5C: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80069F60: lhu         $t2, 0xC0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0XC0);
    // 0x80069F64: nop

    // 0x80069F68: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80069F6C: beq         $t3, $zero, L_80069FB0
    if (ctx->r11 == 0) {
        // 0x80069F70: nop
    
            goto L_80069FB0;
    }
    // 0x80069F70: nop

    // 0x80069F74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80069F78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069F7C: lwc1        $f6, 0x3670($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3670);
    // 0x80069F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069F84: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80069F88: nop

    // 0x80069F8C: bc1f        L_80069FB0
    if (!c1cs) {
        // 0x80069F90: nop
    
            goto L_80069FB0;
    }
    // 0x80069F90: nop

    // 0x80069F94: jal         0x80068908
    // 0x80069F98: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_80068908(rdram, ctx);
        goto after_4;
    // 0x80069F98: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_4:
    // 0x80069F9C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80069FA0: beq         $v0, $zero, L_80069FB0
    if (ctx->r2 == 0) {
        // 0x80069FA4: nop
    
            goto L_80069FB0;
    }
    // 0x80069FA4: nop

    // 0x80069FA8: b           L_8006A334
    // 0x80069FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A334;
    // 0x80069FAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069FB0:
    // 0x80069FB0: bne         $a1, $zero, L_8006A020
    if (ctx->r5 != 0) {
        // 0x80069FB4: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_8006A020;
    }
    // 0x80069FB4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x80069FB8: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x80069FBC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80069FC0: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80069FC4: lwc1        $f17, -0x5910($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5910);
    // 0x80069FC8: lwc1        $f16, -0x590C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X590C);
    // 0x80069FCC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80069FD0: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80069FD4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80069FD8: bc1f        L_8006A020
    if (!c1cs) {
        // 0x80069FDC: nop
    
            goto L_8006A020;
    }
    // 0x80069FDC: nop

    // 0x80069FE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80069FE4: jal         0x8026D720
    // 0x80069FE8: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_5;
    // 0x80069FE8: nop

    after_5:
    // 0x80069FEC: bgez        $v0, L_8006A020
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80069FF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006A020;
    }
    // 0x80069FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069FF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80069FF8: jal         0x80067CFC
    // 0x80069FFC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_80067CFC(rdram, ctx);
        goto after_6;
    // 0x80069FFC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_6:
    // 0x8006A000: bltz        $v0, L_8006A020
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006A004: sltiu       $at, $v0, 0xC
        ctx->r1 = ctx->r2 < 0XC ? 1 : 0;
            goto L_8006A020;
    }
    // 0x8006A004: sltiu       $at, $v0, 0xC
    ctx->r1 = ctx->r2 < 0XC ? 1 : 0;
    // 0x8006A008: beq         $at, $zero, L_8006A020
    if (ctx->r1 == 0) {
        // 0x8006A00C: addiu       $t5, $zero, 0xD
        ctx->r13 = ADD32(0, 0XD);
            goto L_8006A020;
    }
    // 0x8006A00C: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x8006A010: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x8006A014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006A018: b           L_8006A334
    // 0x8006A01C: sh          $t5, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r13;
        goto L_8006A334;
    // 0x8006A01C: sh          $t5, 0x928($t6)
    MEM_H(0X928, ctx->r14) = ctx->r13;
L_8006A020:
    // 0x8006A020: jal         0x80067B2C
    // 0x8006A024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80067B2C(rdram, ctx);
        goto after_7;
    // 0x8006A024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006A028: bltz        $v0, L_8006A04C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006A02C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8006A04C;
    }
    // 0x8006A02C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006A030: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006A034: jal         0x8006992C
    // 0x8006A038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006992C(rdram, ctx);
        goto after_8;
    // 0x8006A038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8006A03C: beq         $v0, $zero, L_8006A04C
    if (ctx->r2 == 0) {
        // 0x8006A040: nop
    
            goto L_8006A04C;
    }
    // 0x8006A040: nop

    // 0x8006A044: b           L_8006A334
    // 0x8006A048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A334;
    // 0x8006A048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006A04C:
    // 0x8006A04C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x8006A050: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8006A054: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006A058: lwc1        $f18, 0x8BC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8BC);
    // 0x8006A05C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006A060: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8006A064: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8006A068: bc1f        L_8006A2D0
    if (!c1cs) {
        // 0x8006A06C: lw          $t3, 0x3C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X3C);
            goto L_8006A2D0;
    }
    // 0x8006A06C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006A070: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006A074: nop

    // 0x8006A078: lhu         $t9, 0xC0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XC0);
    // 0x8006A07C: nop

    // 0x8006A080: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8006A084: beq         $t0, $zero, L_8006A0C4
    if (ctx->r8 == 0) {
        // 0x8006A088: nop
    
            goto L_8006A0C4;
    }
    // 0x8006A088: nop

    // 0x8006A08C: jal         0x800688BC
    // 0x8006A090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800688BC(rdram, ctx);
        goto after_9;
    // 0x8006A090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8006A094: bne         $v0, $zero, L_8006A2D0
    if (ctx->r2 != 0) {
        // 0x8006A098: lw          $t3, 0x3C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X3C);
            goto L_8006A2D0;
    }
    // 0x8006A098: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006A09C: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x8006A0A0: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x8006A0A4: lhu         $t2, 0x318($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X318);
    // 0x8006A0A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A0AC: bne         $t2, $zero, L_8006A2CC
    if (ctx->r10 != 0) {
        // 0x8006A0B0: nop
    
            goto L_8006A2CC;
    }
    // 0x8006A0B0: nop

    // 0x8006A0B4: jal         0x8026DA7C
    // 0x8006A0B8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    LOOKUP_FUNC(0x8026DA7C)(rdram, ctx);
        goto after_10;
    // 0x8006A0B8: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    after_10:
    // 0x8006A0BC: b           L_8006A334
    // 0x8006A0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A334;
    // 0x8006A0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006A0C4:
    // 0x8006A0C4: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x8006A0C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006A0CC: andi        $t5, $t4, 0x80
    ctx->r13 = ctx->r12 & 0X80;
    // 0x8006A0D0: beq         $t5, $zero, L_8006A2D0
    if (ctx->r13 == 0) {
        // 0x8006A0D4: lw          $t3, 0x3C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X3C);
            goto L_8006A2D0;
    }
    // 0x8006A0D4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006A0D8: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x8006A0DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006A0E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006A0E4: sub.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8006A0E8: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x8006A0EC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8006A0F0: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
    // 0x8006A0F4: bc1f        L_8006A100
    if (!c1cs) {
        // 0x8006A0F8: nop
    
            goto L_8006A100;
    }
    // 0x8006A0F8: nop

    // 0x8006A0FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8006A100:
    // 0x8006A100: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006A104: nop

    // 0x8006A108: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x8006A10C: jal         0x80081040
    // 0x8006A110: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_11;
    // 0x8006A110: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x8006A114: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006A118: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006A11C: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8006A120: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8006A124: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006A128: nop

    // 0x8006A12C: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8006A130: nop

    // 0x8006A134: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006A138: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8006A13C: nop

    // 0x8006A140: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8006A144: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006A148: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006A14C: nop

    // 0x8006A150: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8006A154: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8006A158: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8006A15C: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x8006A160: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8006A164: nop

    // 0x8006A168: lwc1        $f12, 0x20($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X20);
    // 0x8006A16C: jal         0x80080E80
    // 0x8006A170: nop

    func_80080E80(rdram, ctx);
        goto after_12;
    // 0x8006A170: nop

    after_12:
    // 0x8006A174: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006A178: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8006A17C: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8006A180: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x8006A184: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006A188: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8006A18C: nop

    // 0x8006A190: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006A194: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006A198: nop

    // 0x8006A19C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8006A1A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006A1A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006A1A8: nop

    // 0x8006A1AC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006A1B0: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x8006A1B4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006A1B8: jal         0x80272AEC
    // 0x8006A1BC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_13;
    // 0x8006A1BC: sh          $t4, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r12;
    after_13:
    // 0x8006A1C0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8006A1C4: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x8006A1C8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8006A1CC: lwc1        $f12, 0x8($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8006A1D0: jal         0x80272AEC
    // 0x8006A1D4: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_14;
    // 0x8006A1D4: nop

    after_14:
    // 0x8006A1D8: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8006A1DC: nop

    // 0x8006A1E0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8006A1E4: nop

    // 0x8006A1E8: bc1f        L_8006A268
    if (!c1cs) {
        // 0x8006A1EC: nop
    
            goto L_8006A268;
    }
    // 0x8006A1EC: nop

    // 0x8006A1F0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8006A1F4: jal         0x80272AD4
    // 0x8006A1F8: nop

    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_15;
    // 0x8006A1F8: nop

    after_15:
    // 0x8006A1FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006A200: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006A204: jal         0x80272AEC
    // 0x8006A208: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_16;
    // 0x8006A208: nop

    after_16:
    // 0x8006A20C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006A210: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8006A214: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006A218: bgez        $t6, L_8006A22C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8006A21C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8006A22C;
    }
    // 0x8006A21C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006A220: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006A224: nop

    // 0x8006A228: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8006A22C:
    // 0x8006A22C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8006A230: nop

    // 0x8006A234: bc1f        L_8006A268
    if (!c1cs) {
        // 0x8006A238: nop
    
            goto L_8006A268;
    }
    // 0x8006A238: nop

    // 0x8006A23C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8006A240: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8006A244: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8006A248: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006A24C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006A250: nop

    // 0x8006A254: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006A258: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8006A25C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006A260: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x8006A264: nop

L_8006A268:
    // 0x8006A268: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8006A26C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x8006A270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006A274: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x8006A278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006A27C: beq         $s0, $t0, L_8006A2C4
    if (ctx->r16 == ctx->r8) {
        // 0x8006A280: nop
    
            goto L_8006A2C4;
    }
    // 0x8006A280: nop

    // 0x8006A284: jal         0x80067CFC
    // 0x8006A288: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_80067CFC(rdram, ctx);
        goto after_17;
    // 0x8006A288: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_17:
    // 0x8006A28C: bltz        $v0, L_8006A2C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006A290: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_8006A2C4;
    }
    // 0x8006A290: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8006A294: bne         $at, $zero, L_8006A2C4
    if (ctx->r1 != 0) {
        // 0x8006A298: slti        $at, $v0, 0x9
        ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
            goto L_8006A2C4;
    }
    // 0x8006A298: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8006A29C: beq         $at, $zero, L_8006A2C4
    if (ctx->r1 == 0) {
        // 0x8006A2A0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_8006A2C4;
    }
    // 0x8006A2A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006A2A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8006A2A8: jal         0x80069D20
    // 0x8006A2AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80069D20(rdram, ctx);
        goto after_18;
    // 0x8006A2AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_18:
    // 0x8006A2B0: bne         $v0, $zero, L_8006A2C4
    if (ctx->r2 != 0) {
        // 0x8006A2B4: nop
    
            goto L_8006A2C4;
    }
    // 0x8006A2B4: nop

    // 0x8006A2B8: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x8006A2BC: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x8006A2C0: sh          $t1, 0x928($t2)
    MEM_H(0X928, ctx->r10) = ctx->r9;
L_8006A2C4:
    // 0x8006A2C4: b           L_8006A334
    // 0x8006A2C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006A334;
    // 0x8006A2C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006A2CC:
    // 0x8006A2CC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_8006A2D0:
    // 0x8006A2D0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8006A2D4: bgez        $t3, L_8006A2E4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8006A2D8: lui         $at, 0x4238
        ctx->r1 = S32(0X4238 << 16);
            goto L_8006A2E4;
    }
    // 0x8006A2D8: lui         $at, 0x4238
    ctx->r1 = S32(0X4238 << 16);
    // 0x8006A2DC: b           L_8006A334
    // 0x8006A2E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A334;
    // 0x8006A2E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A2E4:
    // 0x8006A2E4: lw          $v0, 0x39F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X39F0);
    // 0x8006A2E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006A2EC: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8006A2F0: nop

    // 0x8006A2F4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8006A2F8: nop

    // 0x8006A2FC: bc1t        L_8006A32C
    if (c1cs) {
        // 0x8006A300: nop
    
            goto L_8006A32C;
    }
    // 0x8006A300: nop

    // 0x8006A304: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006A308: jal         0x80272AEC
    // 0x8006A30C: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_19;
    // 0x8006A30C: nop

    after_19:
    // 0x8006A310: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x8006A314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006A318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006A31C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8006A320: nop

    // 0x8006A324: bc1f        L_8006A334
    if (!c1cs) {
        // 0x8006A328: nop
    
            goto L_8006A334;
    }
    // 0x8006A328: nop

L_8006A32C:
    // 0x8006A32C: b           L_8006A334
    // 0x8006A330: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8006A334;
    // 0x8006A330: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8006A334:
    // 0x8006A334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006A338:
    // 0x8006A338: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006A33C: jr          $ra
    // 0x8006A340: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8006A340: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
