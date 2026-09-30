#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80078F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078F10: jal         0x802A13CC
    // 0x80078F14: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_0;
    // 0x80078F14: nop

    after_0:
    // 0x80078F18: addiu       $a0, $zero, 0x4ED
    ctx->r4 = ADD32(0, 0X4ED);
    // 0x80078F1C: jal         0x802A14C0
    // 0x80078F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80078F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80078F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078F28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078F2C: jr          $ra
    // 0x80078F30: nop

    return;
    // 0x80078F30: nop

;}
RECOMP_FUNC void func_80078F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078F3C: addiu       $a0, $zero, 0x453
    ctx->r4 = ADD32(0, 0X453);
    // 0x80078F40: jal         0x802A14C0
    // 0x80078F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80078F44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80078F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80078F50: jr          $ra
    // 0x80078F54: nop

    return;
    // 0x80078F54: nop

;}
RECOMP_FUNC void func_80078F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80078F60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078F68: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078F6C: jal         0x80074D94
    // 0x80078F70: sb          $zero, 0x3AD0($at)
    MEM_B(0X3AD0, ctx->r1) = 0;
    func_80074D94(rdram, ctx);
        goto after_0;
    // 0x80078F70: sb          $zero, 0x3AD0($at)
    MEM_B(0X3AD0, ctx->r1) = 0;
    after_0:
    // 0x80078F74: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80078F78: addiu       $v0, $v0, 0x39FE
    ctx->r2 = ADD32(ctx->r2, 0X39FE);
    // 0x80078F7C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80078F80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80078F84: bne         $a1, $t6, L_80078FA8
    if (ctx->r5 != ctx->r14) {
        // 0x80078F88: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_80078FA8;
    }
    // 0x80078F88: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80078F8C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80078F90: lh          $t7, 0x39FC($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X39FC);
    // 0x80078F94: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80078F98: slti        $at, $t7, 0x4B0
    ctx->r1 = SIGNED(ctx->r15) < 0X4B0 ? 1 : 0;
    // 0x80078F9C: beq         $at, $zero, L_80078FA8
    if (ctx->r1 == 0) {
        // 0x80078FA0: nop
    
            goto L_80078FA8;
    }
    // 0x80078FA0: nop

    // 0x80078FA4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_80078FA8:
    // 0x80078FA8: lhu         $t9, 0x3944($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3944);
    // 0x80078FAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80078FB0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80078FB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078FB8: sh          $t9, 0x39CE($at)
    MEM_H(0X39CE, ctx->r1) = ctx->r25;
    // 0x80078FBC: lbu         $t0, 0xBC($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XBC);
    // 0x80078FC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078FC4: sb          $t0, 0x39F1($at)
    MEM_B(0X39F1, ctx->r1) = ctx->r8;
    // 0x80078FC8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80078FCC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078FD0: sb          $zero, 0x39F0($at)
    MEM_B(0X39F0, ctx->r1) = 0;
    // 0x80078FD4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80078FD8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80078FDC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80078FE0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80078FE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80078FE8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80078FEC: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80078FF0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80078FF4: jal         0x802A13CC
    // 0x80078FF8: sh          $t2, 0x3AC4($at)
    MEM_H(0X3AC4, ctx->r1) = ctx->r10;
    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_1;
    // 0x80078FF8: sh          $t2, 0x3AC4($at)
    MEM_H(0X3AC4, ctx->r1) = ctx->r10;
    after_1:
    // 0x80078FFC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80079000: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x80079004: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80079008: beq         $t3, $at, L_800791AC
    if (ctx->r11 == ctx->r1) {
        // 0x8007900C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800791AC;
    }
    // 0x8007900C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80079010: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80079014: lhu         $t4, 0xB72($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB72);
    // 0x80079018: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8007901C: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80079020: beq         $at, $zero, L_800791A4
    if (ctx->r1 == 0) {
        // 0x80079024: nop
    
            goto L_800791A4;
    }
    // 0x80079024: nop

    // 0x80079028: lw          $t5, 0xB24($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB24);
    // 0x8007902C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079030: lw          $a0, 0xC8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC8);
    // 0x80079034: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80079038: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8007903C: nop

    // 0x80079040: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x80079044: beq         $t7, $zero, L_8007905C
    if (ctx->r15 == 0) {
        // 0x80079048: nop
    
            goto L_8007905C;
    }
    // 0x80079048: nop

    // 0x8007904C: jal         0x800791BC
    // 0x80079050: nop

    func_800791BC(rdram, ctx);
        goto after_2;
    // 0x80079050: nop

    after_2:
    // 0x80079054: b           L_800791B0
    // 0x80079058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x80079058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007905C:
    // 0x8007905C: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079060: lhu         $t9, 0x38D0($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X38D0);
    // 0x80079064: xor         $t8, $a1, $v0
    ctx->r24 = ctx->r5 ^ ctx->r2;
    // 0x80079068: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x8007906C: sltiu       $t0, $t9, 0x1
    ctx->r8 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80079070: and         $t1, $t8, $t0
    ctx->r9 = ctx->r24 & ctx->r8;
    // 0x80079074: beq         $t1, $zero, L_80079108
    if (ctx->r9 == 0) {
        // 0x80079078: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80079108;
    }
    // 0x80079078: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8007907C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80079080: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x80079084: lhu         $v0, 0xA($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XA);
    // 0x80079088: lhu         $v1, 0xA9E($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XA9E);
    // 0x8007908C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80079090: bne         $v0, $v1, L_800790C8
    if (ctx->r2 != ctx->r3) {
        // 0x80079094: addiu       $t2, $t2, -0x225C
        ctx->r10 = ADD32(ctx->r10, -0X225C);
            goto L_800790C8;
    }
    // 0x80079094: addiu       $t2, $t2, -0x225C
    ctx->r10 = ADD32(ctx->r10, -0X225C);
    // 0x80079098: addiu       $a0, $zero, 0x43D
    ctx->r4 = ADD32(0, 0X43D);
    // 0x8007909C: jal         0x802A14C0
    // 0x800790A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800790A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800790A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800790A8: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x800790AC: jal         0x8007A034
    // 0x800790B0: nop

    func_8007A034(rdram, ctx);
        goto after_4;
    // 0x800790B0: nop

    after_4:
    // 0x800790B4: addiu       $a0, $zero, 0x47A
    ctx->r4 = ADD32(0, 0X47A);
    // 0x800790B8: jal         0x802A14C0
    // 0x800790BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x800790BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800790C0: b           L_800791B0
    // 0x800790C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x800790C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800790C8:
    // 0x800790C8: bne         $t2, $a0, L_800790F8
    if (ctx->r10 != ctx->r4) {
        // 0x800790CC: subu        $t3, $v1, $v0
        ctx->r11 = SUB32(ctx->r3, ctx->r2);
            goto L_800790F8;
    }
    // 0x800790CC: subu        $t3, $v1, $v0
    ctx->r11 = SUB32(ctx->r3, ctx->r2);
    // 0x800790D0: bne         $a1, $t3, L_800790E8
    if (ctx->r5 != ctx->r11) {
        // 0x800790D4: addiu       $a0, $zero, 0x43D
        ctx->r4 = ADD32(0, 0X43D);
            goto L_800790E8;
    }
    // 0x800790D4: addiu       $a0, $zero, 0x43D
    ctx->r4 = ADD32(0, 0X43D);
    // 0x800790D8: jal         0x802A14C0
    // 0x800790DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x800790DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800790E0: b           L_800791B0
    // 0x800790E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x800790E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800790E8:
    // 0x800790E8: jal         0x800791BC
    // 0x800790EC: nop

    func_800791BC(rdram, ctx);
        goto after_7;
    // 0x800790EC: nop

    after_7:
    // 0x800790F0: b           L_800791B0
    // 0x800790F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x800790F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800790F8:
    // 0x800790F8: jal         0x800791BC
    // 0x800790FC: nop

    func_800791BC(rdram, ctx);
        goto after_8;
    // 0x800790FC: nop

    after_8:
    // 0x80079100: b           L_800791B0
    // 0x80079104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x80079104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079108:
    // 0x80079108: bne         $at, $zero, L_80079194
    if (ctx->r1 != 0) {
        // 0x8007910C: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80079194;
    }
    // 0x8007910C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80079110: addiu       $t4, $t4, -0x225C
    ctx->r12 = ADD32(ctx->r12, -0X225C);
    // 0x80079114: bne         $t4, $a0, L_80079184
    if (ctx->r12 != ctx->r4) {
        // 0x80079118: lui         $a3, 0x8012
        ctx->r7 = S32(0X8012 << 16);
            goto L_80079184;
    }
    // 0x80079118: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8007911C: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x80079120: lhu         $t5, 0xA9E($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0XA9E);
    // 0x80079124: lhu         $t6, 0xA($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0XA);
    // 0x80079128: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007912C: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x80079130: bne         $a1, $t7, L_80079174
    if (ctx->r5 != ctx->r15) {
        // 0x80079134: addiu       $a0, $zero, 0x43D
        ctx->r4 = ADD32(0, 0X43D);
            goto L_80079174;
    }
    // 0x80079134: addiu       $a0, $zero, 0x43D
    ctx->r4 = ADD32(0, 0X43D);
    // 0x80079138: lb          $t9, -0x3093($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3093);
    // 0x8007913C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80079140: bne         $t9, $zero, L_8007914C
    if (ctx->r25 != 0) {
        // 0x80079144: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8007914C;
    }
    // 0x80079144: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80079148: sb          $t8, 0x39F0($at)
    MEM_B(0X39F0, ctx->r1) = ctx->r24;
L_8007914C:
    // 0x8007914C: jal         0x802A14C0
    // 0x80079150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80079150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80079154: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80079158: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x8007915C: lbu         $a0, 0xB($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XB);
    // 0x80079160: lbu         $a1, 0xA9F($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XA9F);
    // 0x80079164: jal         0x80075544
    // 0x80079168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80075544(rdram, ctx);
        goto after_10;
    // 0x80079168: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8007916C: b           L_800791B0
    // 0x80079170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x80079170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079174:
    // 0x80079174: jal         0x800791BC
    // 0x80079178: nop

    func_800791BC(rdram, ctx);
        goto after_11;
    // 0x80079178: nop

    after_11:
    // 0x8007917C: b           L_800791B0
    // 0x80079180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x80079180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079184:
    // 0x80079184: jal         0x800791BC
    // 0x80079188: nop

    func_800791BC(rdram, ctx);
        goto after_12;
    // 0x80079188: nop

    after_12:
    // 0x8007918C: b           L_800791B0
    // 0x80079190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x80079190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079194:
    // 0x80079194: jal         0x800791BC
    // 0x80079198: nop

    func_800791BC(rdram, ctx);
        goto after_13;
    // 0x80079198: nop

    after_13:
    // 0x8007919C: b           L_800791B0
    // 0x800791A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800791B0;
    // 0x800791A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800791A4:
    // 0x800791A4: jal         0x800791BC
    // 0x800791A8: nop

    func_800791BC(rdram, ctx);
        goto after_14;
    // 0x800791A8: nop

    after_14:
L_800791AC:
    // 0x800791AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800791B0:
    // 0x800791B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800791B4: jr          $ra
    // 0x800791B8: nop

    return;
    // 0x800791B8: nop

;}
RECOMP_FUNC void func_800791BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800791BC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800791C0: lbu         $t6, 0xB65($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB65);
    // 0x800791C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800791C8: beq         $t6, $zero, L_80079234
    if (ctx->r14 == 0) {
        // 0x800791CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80079234;
    }
    // 0x800791CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800791D0: jal         0x80077DF4
    // 0x800791D4: nop

    func_80077DF4(rdram, ctx);
        goto after_0;
    // 0x800791D4: nop

    after_0:
    // 0x800791D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800791DC: lhu         $t7, 0xB74($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB74);
    // 0x800791E0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800791E4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x800791E8: bne         $at, $zero, L_80079204
    if (ctx->r1 != 0) {
        // 0x800791EC: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_80079204;
    }
    // 0x800791EC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800791F0: lb          $t8, -0x3093($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X3093);
    // 0x800791F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800791F8: bne         $t8, $zero, L_80079204
    if (ctx->r24 != 0) {
        // 0x800791FC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80079204;
    }
    // 0x800791FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80079200: sb          $t9, 0x39F0($at)
    MEM_B(0X39F0, ctx->r1) = ctx->r25;
L_80079204:
    // 0x80079204: lw          $t0, 0xB24($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XB24);
    // 0x80079208: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007920C: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x80079210: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80079214: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x80079218: nop

    // 0x8007921C: lhu         $t3, 0x6($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6);
    // 0x80079220: nop

    // 0x80079224: sb          $t3, 0x3A20($at)
    MEM_B(0X3A20, ctx->r1) = ctx->r11;
    // 0x80079228: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007922C: b           L_800793CC
    // 0x80079230: sh          $t4, 0x39DA($at)
    MEM_H(0X39DA, ctx->r1) = ctx->r12;
        goto L_800793CC;
    // 0x80079230: sh          $t4, 0x39DA($at)
    MEM_H(0X39DA, ctx->r1) = ctx->r12;
L_80079234:
    // 0x80079234: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80079238: lhu         $t5, 0xB74($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB74);
    // 0x8007923C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80079240: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80079244: bne         $at, $zero, L_80079274
    if (ctx->r1 != 0) {
        // 0x80079248: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_80079274;
    }
    // 0x80079248: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8007924C: lb          $t6, -0x3093($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3093);
    // 0x80079250: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80079254: bne         $t6, $zero, L_80079264
    if (ctx->r14 != 0) {
        // 0x80079258: addiu       $a0, $zero, 0x455
        ctx->r4 = ADD32(0, 0X455);
            goto L_80079264;
    }
    // 0x80079258: addiu       $a0, $zero, 0x455
    ctx->r4 = ADD32(0, 0X455);
    // 0x8007925C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80079260: sb          $t7, 0x39F0($at)
    MEM_B(0X39F0, ctx->r1) = ctx->r15;
L_80079264:
    // 0x80079264: jal         0x802A14C0
    // 0x80079268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007926C: b           L_80079300
    // 0x80079270: nop

        goto L_80079300;
    // 0x80079270: nop

L_80079274:
    // 0x80079274: lbu         $t8, 0x3610($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3610);
    // 0x80079278: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007927C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80079280: bne         $t9, $zero, L_80079300
    if (ctx->r25 != 0) {
        // 0x80079284: nop
    
            goto L_80079300;
    }
    // 0x80079284: nop

    // 0x80079288: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007928C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079290: andi        $t0, $v0, 0x7
    ctx->r8 = ctx->r2 & 0X7;
    // 0x80079294: beq         $t0, $at, L_800792C8
    if (ctx->r8 == ctx->r1) {
        // 0x80079298: addiu       $a0, $zero, 0x455
        ctx->r4 = ADD32(0, 0X455);
            goto L_800792C8;
    }
    // 0x80079298: addiu       $a0, $zero, 0x455
    ctx->r4 = ADD32(0, 0X455);
    // 0x8007929C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800792A0: beq         $t0, $at, L_800792D8
    if (ctx->r8 == ctx->r1) {
        // 0x800792A4: addiu       $a0, $zero, 0x4F4
        ctx->r4 = ADD32(0, 0X4F4);
            goto L_800792D8;
    }
    // 0x800792A4: addiu       $a0, $zero, 0x4F4
    ctx->r4 = ADD32(0, 0X4F4);
    // 0x800792A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800792AC: beq         $t0, $at, L_800792E8
    if (ctx->r8 == ctx->r1) {
        // 0x800792B0: addiu       $a0, $zero, 0x4F5
        ctx->r4 = ADD32(0, 0X4F5);
            goto L_800792E8;
    }
    // 0x800792B0: addiu       $a0, $zero, 0x4F5
    ctx->r4 = ADD32(0, 0X4F5);
    // 0x800792B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800792B8: beq         $t0, $at, L_800792F8
    if (ctx->r8 == ctx->r1) {
        // 0x800792BC: addiu       $a0, $zero, 0x4F6
        ctx->r4 = ADD32(0, 0X4F6);
            goto L_800792F8;
    }
    // 0x800792BC: addiu       $a0, $zero, 0x4F6
    ctx->r4 = ADD32(0, 0X4F6);
    // 0x800792C0: b           L_80079300
    // 0x800792C4: nop

        goto L_80079300;
    // 0x800792C4: nop

L_800792C8:
    // 0x800792C8: jal         0x802A14C0
    // 0x800792CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800792CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800792D0: b           L_80079300
    // 0x800792D4: nop

        goto L_80079300;
    // 0x800792D4: nop

L_800792D8:
    // 0x800792D8: jal         0x802A14C0
    // 0x800792DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800792DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800792E0: b           L_80079300
    // 0x800792E4: nop

        goto L_80079300;
    // 0x800792E4: nop

L_800792E8:
    // 0x800792E8: jal         0x802A14C0
    // 0x800792EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x800792EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800792F0: b           L_80079300
    // 0x800792F4: nop

        goto L_80079300;
    // 0x800792F4: nop

L_800792F8:
    // 0x800792F8: jal         0x802A14C0
    // 0x800792FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x800792FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80079300:
    // 0x80079300: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80079304: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x80079308: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007930C: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x80079310: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80079314: addu        $at, $at, $t2
    gpr jr_addend_80079320 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80079318: lw          $t2, -0x529C($at)
    ctx->r10 = ADD32(ctx->r1, -0X529C);
    // 0x8007931C: nop

    // 0x80079320: jr          $t2
    // 0x80079324: nop

    switch (jr_addend_80079320 >> 2) {
        case 0: goto L_80079328; break;
        case 1: goto L_8007933C; break;
        case 2: goto L_80079350; break;
        case 3: goto L_80079364; break;
        case 4: goto L_80079378; break;
        case 5: goto L_8007938C; break;
        case 6: goto L_800793A0; break;
        case 7: goto L_800793B4; break;
        default: switch_error(__func__, 0x80079320, 0x800DAD64);
    }
    // 0x80079324: nop

L_80079328:
    // 0x80079328: addiu       $a0, $zero, 0x4F3
    ctx->r4 = ADD32(0, 0X4F3);
    // 0x8007932C: jal         0x802A14C0
    // 0x80079330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80079330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80079334: b           L_800793C4
    // 0x80079338: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x80079338: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_8007933C:
    // 0x8007933C: addiu       $a0, $zero, 0x4F1
    ctx->r4 = ADD32(0, 0X4F1);
    // 0x80079340: jal         0x802A14C0
    // 0x80079344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80079344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80079348: b           L_800793C4
    // 0x8007934C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x8007934C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_80079350:
    // 0x80079350: addiu       $a0, $zero, 0x4F2
    ctx->r4 = ADD32(0, 0X4F2);
    // 0x80079354: jal         0x802A14C0
    // 0x80079358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80079358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8007935C: b           L_800793C4
    // 0x80079360: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x80079360: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_80079364:
    // 0x80079364: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    // 0x80079368: jal         0x802A14C0
    // 0x8007936C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x8007936C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80079370: b           L_800793C4
    // 0x80079374: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x80079374: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_80079378:
    // 0x80079378: addiu       $a0, $zero, 0x4F1
    ctx->r4 = ADD32(0, 0X4F1);
    // 0x8007937C: jal         0x802A14C0
    // 0x80079380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80079380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80079384: b           L_800793C4
    // 0x80079388: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x80079388: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_8007938C:
    // 0x8007938C: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    // 0x80079390: jal         0x802A14C0
    // 0x80079394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x80079394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80079398: b           L_800793C4
    // 0x8007939C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x8007939C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_800793A0:
    // 0x800793A0: addiu       $a0, $zero, 0x4F2
    ctx->r4 = ADD32(0, 0X4F2);
    // 0x800793A4: jal         0x802A14C0
    // 0x800793A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_12;
    // 0x800793A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800793AC: b           L_800793C4
    // 0x800793B0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
        goto L_800793C4;
    // 0x800793B0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_800793B4:
    // 0x800793B4: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    // 0x800793B8: jal         0x802A14C0
    // 0x800793BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_13;
    // 0x800793BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800793C0: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
L_800793C4:
    // 0x800793C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800793C8: sh          $t3, 0x39DA($at)
    MEM_H(0X39DA, ctx->r1) = ctx->r11;
L_800793CC:
    // 0x800793CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800793D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800793D4: jr          $ra
    // 0x800793D8: nop

    return;
    // 0x800793D8: nop

;}
RECOMP_FUNC void func_800793DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800793DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800793E0: lw          $v0, 0xB24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB24);
    // 0x800793E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800793E8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800793EC: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x800793F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800793F4: lhu         $t6, 0xA9E($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0XA9E);
    // 0x800793F8: lhu         $t7, 0xA($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0XA);
    // 0x800793FC: lhu         $t9, 0x1A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X1A);
    // 0x80079400: lw          $a1, 0xC8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC8);
    // 0x80079404: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x80079408: addu        $t3, $a1, $t9
    ctx->r11 = ADD32(ctx->r5, ctx->r25);
    // 0x8007940C: andi        $a3, $a2, 0xFF
    ctx->r7 = ctx->r6 & 0XFF;
    // 0x80079410: lbu         $t0, 0x308($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0X308);
    // 0x80079414: lbu         $t1, 0x7($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X7);
    // 0x80079418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007941C: blez        $a3, L_80079474
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80079420: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80079474;
    }
    // 0x80079420: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80079424: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80079428: addiu       $a2, $a2, 0xB88
    ctx->r6 = ADD32(ctx->r6, 0XB88);
    // 0x8007942C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
L_80079430:
    // 0x80079430: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80079434: addu        $v0, $a2, $t4
    ctx->r2 = ADD32(ctx->r6, ctx->r12);
    // 0x80079438: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8007943C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80079440: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80079444: bne         $a1, $t6, L_80079468
    if (ctx->r5 != ctx->r14) {
        // 0x80079448: andi        $t9, $v1, 0xFF
        ctx->r25 = ctx->r3 & 0XFF;
            goto L_80079468;
    }
    // 0x80079448: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8007944C: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x80079450: nop

    // 0x80079454: bne         $t0, $t7, L_8007946C
    if (ctx->r8 != ctx->r15) {
        // 0x80079458: slt         $at, $t9, $a3
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8007946C;
    }
    // 0x80079458: slt         $at, $t9, $a3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8007945C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80079460: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x80079464: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80079468:
    // 0x80079468: slt         $at, $t9, $a3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r7) ? 1 : 0;
L_8007946C:
    // 0x8007946C: bne         $at, $zero, L_80079430
    if (ctx->r1 != 0) {
        // 0x80079470: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80079430;
    }
    // 0x80079470: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80079474:
    // 0x80079474: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80079478: bne         $a2, $a0, L_80079494
    if (ctx->r6 != ctx->r4) {
        // 0x8007947C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80079494;
    }
    // 0x8007947C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80079480: addiu       $a0, $zero, 0x421
    ctx->r4 = ADD32(0, 0X421);
    // 0x80079484: jal         0x802A14C0
    // 0x80079488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007948C: b           L_80079680
    // 0x80079490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079494:
    // 0x80079494: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80079498: lbu         $v0, 0x3610($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3610);
    // 0x8007949C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x800794A0: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x800794A4: beq         $t3, $zero, L_800794B4
    if (ctx->r11 == 0) {
        // 0x800794A8: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_800794B4;
    }
    // 0x800794A8: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x800794AC: b           L_800794C0
    // 0x800794B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_800794C0;
    // 0x800794B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800794B4:
    // 0x800794B4: lhu         $t4, 0x522A($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X522A);
    // 0x800794B8: nop

    // 0x800794BC: andi        $v1, $t4, 0x3
    ctx->r3 = ctx->r12 & 0X3;
L_800794C0:
    // 0x800794C0: beq         $v1, $zero, L_800794D8
    if (ctx->r3 == 0) {
        // 0x800794C4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800794D8;
    }
    // 0x800794C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800794C8: beq         $v1, $at, L_800794F8
    if (ctx->r3 == ctx->r1) {
        // 0x800794CC: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_800794F8;
    }
    // 0x800794CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800794D0: b           L_80079588
    // 0x800794D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
        goto L_80079588;
    // 0x800794D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
L_800794D8:
    // 0x800794D8: bne         $v0, $zero, L_8007967C
    if (ctx->r2 != 0) {
        // 0x800794DC: slti        $at, $a1, 0x4
        ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
            goto L_8007967C;
    }
    // 0x800794DC: slti        $at, $a1, 0x4
    ctx->r1 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x800794E0: bne         $at, $zero, L_8007967C
    if (ctx->r1 != 0) {
        // 0x800794E4: addiu       $a0, $zero, 0x5A5
        ctx->r4 = ADD32(0, 0X5A5);
            goto L_8007967C;
    }
    // 0x800794E4: addiu       $a0, $zero, 0x5A5
    ctx->r4 = ADD32(0, 0X5A5);
    // 0x800794E8: jal         0x802A14C0
    // 0x800794EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800794EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800794F0: b           L_80079680
    // 0x800794F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x800794F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800794F8:
    // 0x800794F8: lbu         $v0, 0x39F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39F1);
    // 0x800794FC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80079500: beq         $a2, $v0, L_8007951C
    if (ctx->r6 == ctx->r2) {
        // 0x80079504: nop
    
            goto L_8007951C;
    }
    // 0x80079504: nop

    // 0x80079508: beq         $v0, $at, L_8007951C
    if (ctx->r2 == ctx->r1) {
        // 0x8007950C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8007951C;
    }
    // 0x8007950C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80079510: beq         $v0, $at, L_8007951C
    if (ctx->r2 == ctx->r1) {
        // 0x80079514: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_8007951C;
    }
    // 0x80079514: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80079518: bne         $v0, $at, L_8007967C
    if (ctx->r2 != ctx->r1) {
        // 0x8007951C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007967C;
    }
L_8007951C:
    // 0x8007951C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80079520: lbu         $v0, 0x3A88($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3A88);
    // 0x80079524: addiu       $a0, $zero, 0x4CC
    ctx->r4 = ADD32(0, 0X4CC);
    // 0x80079528: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8007952C: bne         $at, $zero, L_8007954C
    if (ctx->r1 != 0) {
        // 0x80079530: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_8007954C;
    }
    // 0x80079530: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80079534: beq         $at, $zero, L_8007954C
    if (ctx->r1 == 0) {
        // 0x80079538: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8007954C;
    }
    // 0x80079538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007953C: jal         0x802A14C0
    // 0x80079540: addiu       $a0, $zero, 0x4CB
    ctx->r4 = ADD32(0, 0X4CB);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80079540: addiu       $a0, $zero, 0x4CB
    ctx->r4 = ADD32(0, 0X4CB);
    after_2:
    // 0x80079544: b           L_80079680
    // 0x80079548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007954C:
    // 0x8007954C: jal         0x802A14C0
    // 0x80079550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80079550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80079554: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80079558: lbu         $t6, 0xB64($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB64);
    // 0x8007955C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079560: beq         $t6, $zero, L_80079578
    if (ctx->r14 == 0) {
        // 0x80079564: addiu       $a0, $zero, 0x4CE
        ctx->r4 = ADD32(0, 0X4CE);
            goto L_80079578;
    }
    // 0x80079564: addiu       $a0, $zero, 0x4CE
    ctx->r4 = ADD32(0, 0X4CE);
    // 0x80079568: jal         0x802A14C0
    // 0x8007956C: addiu       $a0, $zero, 0x4CD
    ctx->r4 = ADD32(0, 0X4CD);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8007956C: addiu       $a0, $zero, 0x4CD
    ctx->r4 = ADD32(0, 0X4CD);
    after_4:
    // 0x80079570: b           L_80079680
    // 0x80079574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079578:
    // 0x80079578: jal         0x802A14C0
    // 0x8007957C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8007957C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80079580: b           L_80079680
    // 0x80079584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079588:
    // 0x80079588: lbu         $v0, 0x39F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39F1);
    // 0x8007958C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80079590: beq         $v0, $at, L_800795B8
    if (ctx->r2 == ctx->r1) {
        // 0x80079594: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_800795B8;
    }
    // 0x80079594: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80079598: beq         $v0, $at, L_800795B8
    if (ctx->r2 == ctx->r1) {
        // 0x8007959C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_800795B8;
    }
    // 0x8007959C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800795A0: beq         $v0, $at, L_800795B8
    if (ctx->r2 == ctx->r1) {
        // 0x800795A4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800795B8;
    }
    // 0x800795A4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800795A8: beq         $v0, $at, L_800795B8
    if (ctx->r2 == ctx->r1) {
        // 0x800795AC: nop
    
            goto L_800795B8;
    }
    // 0x800795AC: nop

    // 0x800795B0: bne         $a2, $v0, L_80079680
    if (ctx->r6 != ctx->r2) {
        // 0x800795B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80079680;
    }
    // 0x800795B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800795B8:
    // 0x800795B8: bne         $a2, $v0, L_800795DC
    if (ctx->r6 != ctx->r2) {
        // 0x800795BC: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800795DC;
    }
    // 0x800795BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800795C0: lwc1        $f4, 0xB58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x800795C4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800795C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800795CC: nop

    // 0x800795D0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800795D4: nop

    // 0x800795D8: bc1t        L_8007967C
    if (c1cs) {
        // 0x800795DC: addiu       $t7, $v0, -0x3
        ctx->r15 = ADD32(ctx->r2, -0X3);
            goto L_8007967C;
    }
L_800795DC:
    // 0x800795DC: addiu       $t7, $v0, -0x3
    ctx->r15 = ADD32(ctx->r2, -0X3);
    // 0x800795E0: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x800795E4: beq         $at, $zero, L_8007967C
    if (ctx->r1 == 0) {
        // 0x800795E8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8007967C;
    }
    // 0x800795E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800795EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800795F0: addu        $at, $at, $t7
    gpr jr_addend_800795FC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800795F4: lw          $t7, -0x527C($at)
    ctx->r15 = ADD32(ctx->r1, -0X527C);
    // 0x800795F8: nop

    // 0x800795FC: jr          $t7
    // 0x80079600: nop

    switch (jr_addend_800795FC >> 2) {
        case 0: goto L_80079640; break;
        case 1: goto L_8007967C; break;
        case 2: goto L_80079604; break;
        case 3: goto L_80079604; break;
        case 4: goto L_80079618; break;
        case 5: goto L_8007967C; break;
        case 6: goto L_8007967C; break;
        case 7: goto L_8007962C; break;
        default: switch_error(__func__, 0x800795FC, 0x800DAD84);
    }
    // 0x80079600: nop

L_80079604:
    // 0x80079604: addiu       $a0, $zero, 0x425
    ctx->r4 = ADD32(0, 0X425);
    // 0x80079608: jal         0x802A14C0
    // 0x8007960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80079610: b           L_80079680
    // 0x80079614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079618:
    // 0x80079618: addiu       $a0, $zero, 0x572
    ctx->r4 = ADD32(0, 0X572);
    // 0x8007961C: jal         0x802A14C0
    // 0x80079620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80079620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80079624: b           L_80079680
    // 0x80079628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007962C:
    // 0x8007962C: addiu       $a0, $zero, 0x41D
    ctx->r4 = ADD32(0, 0X41D);
    // 0x80079630: jal         0x802A14C0
    // 0x80079634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80079634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80079638: b           L_80079680
    // 0x8007963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x8007963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079640:
    // 0x80079640: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80079644: lwc1        $f8, 0xB58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x80079648: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8007964C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80079650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079654: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80079658: addiu       $a0, $zero, 0x4AF
    ctx->r4 = ADD32(0, 0X4AF);
    // 0x8007965C: bc1f        L_80079674
    if (!c1cs) {
        // 0x80079660: nop
    
            goto L_80079674;
    }
    // 0x80079660: nop

    // 0x80079664: jal         0x802A14C0
    // 0x80079668: addiu       $a0, $zero, 0x482
    ctx->r4 = ADD32(0, 0X482);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80079668: addiu       $a0, $zero, 0x482
    ctx->r4 = ADD32(0, 0X482);
    after_9:
    // 0x8007966C: b           L_80079680
    // 0x80079670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079680;
    // 0x80079670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079674:
    // 0x80079674: jal         0x802A14C0
    // 0x80079678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80079678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_8007967C:
    // 0x8007967C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079680:
    // 0x80079680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079684: jr          $ra
    // 0x80079688: nop

    return;
    // 0x80079688: nop

;}
RECOMP_FUNC void func_8007968C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007968C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079690: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007969C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x800796A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800796A4: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x800796A8: lhu         $t6, 0xA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA);
    // 0x800796AC: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x800796B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800796B4: subu        $a2, $t6, $t8
    ctx->r6 = SUB32(ctx->r14, ctx->r24);
    // 0x800796B8: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x800796BC: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800796C0: bne         $t0, $zero, L_80079730
    if (ctx->r8 != 0) {
        // 0x800796C4: or          $a2, $t0, $zero
        ctx->r6 = ctx->r8 | 0;
            goto L_80079730;
    }
    // 0x800796C4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800796C8: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x800796CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800796D0: bne         $v0, $at, L_80079714
    if (ctx->r2 != ctx->r1) {
        // 0x800796D4: lui         $t1, 0x802C
        ctx->r9 = S32(0X802C << 16);
            goto L_80079714;
    }
    // 0x800796D4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x800796D8: lhu         $t1, 0x38D0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X38D0);
    // 0x800796DC: nop

    // 0x800796E0: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x800796E4: beq         $at, $zero, L_800797B8
    if (ctx->r1 == 0) {
        // 0x800796E8: nop
    
            goto L_800797B8;
    }
    // 0x800796E8: nop

    // 0x800796EC: jal         0x8007A034
    // 0x800796F0: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    func_8007A034(rdram, ctx);
        goto after_0;
    // 0x800796F0: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    after_0:
    // 0x800796F4: addiu       $a0, $zero, 0x4CF
    ctx->r4 = ADD32(0, 0X4CF);
    // 0x800796F8: jal         0x802A14C0
    // 0x800796FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800796FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80079700: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079704: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079708: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8007970C: b           L_800797B8
    // 0x80079710: nop

        goto L_800797B8;
    // 0x80079710: nop

L_80079714:
    // 0x80079714: jal         0x80079ADC
    // 0x80079718: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    func_80079ADC(rdram, ctx);
        goto after_2;
    // 0x80079718: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_2:
    // 0x8007971C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079720: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079724: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x80079728: b           L_800797B8
    // 0x8007972C: nop

        goto L_800797B8;
    // 0x8007972C: nop

L_80079730:
    // 0x80079730: beq         $a2, $at, L_80079744
    if (ctx->r6 == ctx->r1) {
        // 0x80079734: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_80079744;
    }
    // 0x80079734: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079738: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8007973C: bne         $a2, $at, L_800797A0
    if (ctx->r6 != ctx->r1) {
        // 0x80079740: nop
    
            goto L_800797A0;
    }
    // 0x80079740: nop

L_80079744:
    // 0x80079744: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007974C: bne         $v0, $at, L_80079784
    if (ctx->r2 != ctx->r1) {
        // 0x80079750: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_80079784;
    }
    // 0x80079750: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80079754: lhu         $t2, 0x38D0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X38D0);
    // 0x80079758: addiu       $a0, $zero, 0x44A
    ctx->r4 = ADD32(0, 0X44A);
    // 0x8007975C: slti        $at, $t2, 0x3C
    ctx->r1 = SIGNED(ctx->r10) < 0X3C ? 1 : 0;
    // 0x80079760: beq         $at, $zero, L_800797B8
    if (ctx->r1 == 0) {
        // 0x80079764: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800797B8;
    }
    // 0x80079764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079768: jal         0x802A14C0
    // 0x8007976C: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8007976C: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_3:
    // 0x80079770: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079774: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079778: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8007977C: b           L_800797B8
    // 0x80079780: nop

        goto L_800797B8;
    // 0x80079780: nop

L_80079784:
    // 0x80079784: jal         0x80079ADC
    // 0x80079788: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    func_80079ADC(rdram, ctx);
        goto after_4;
    // 0x80079788: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_4:
    // 0x8007978C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80079790: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80079794: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x80079798: b           L_800797B8
    // 0x8007979C: nop

        goto L_800797B8;
    // 0x8007979C: nop

L_800797A0:
    // 0x800797A0: jal         0x80079ADC
    // 0x800797A4: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    func_80079ADC(rdram, ctx);
        goto after_5;
    // 0x800797A4: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_5:
    // 0x800797A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800797AC: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x800797B0: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x800797B4: nop

L_800797B8:
    // 0x800797B8: bne         $v0, $zero, L_800797E4
    if (ctx->r2 != 0) {
        // 0x800797BC: lui         $t3, 0x802C
        ctx->r11 = S32(0X802C << 16);
            goto L_800797E4;
    }
    // 0x800797BC: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x800797C0: lhu         $t3, 0x3944($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3944);
    // 0x800797C4: addiu       $a0, $zero, 0x420
    ctx->r4 = ADD32(0, 0X420);
    // 0x800797C8: slti        $at, $t3, 0x1E
    ctx->r1 = SIGNED(ctx->r11) < 0X1E ? 1 : 0;
    // 0x800797CC: beq         $at, $zero, L_800797E4
    if (ctx->r1 == 0) {
        // 0x800797D0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_800797E4;
    }
    // 0x800797D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800797D4: jal         0x802A14C0
    // 0x800797D8: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x800797D8: sh          $a2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r6;
    after_6:
    // 0x800797DC: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x800797E0: nop

L_800797E4:
    // 0x800797E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800797E8: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x800797EC: lhu         $v0, 0xA9E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA9E);
    // 0x800797F0: lhu         $v1, 0xA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA);
    // 0x800797F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800797F8: addu        $t4, $v0, $v1
    ctx->r12 = ADD32(ctx->r2, ctx->r3);
    // 0x800797FC: bne         $t4, $at, L_8007987C
    if (ctx->r12 != ctx->r1) {
        // 0x80079800: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_8007987C;
    }
    // 0x80079800: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80079804: lhu         $t5, 0xB74($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB74);
    // 0x80079808: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007980C: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x80079810: beq         $t7, $zero, L_8007985C
    if (ctx->r15 == 0) {
        // 0x80079814: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8007985C;
    }
    // 0x80079814: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079818: lhu         $t6, 0x38D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X38D0);
    // 0x8007981C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079820: slti        $at, $t6, 0x1E
    ctx->r1 = SIGNED(ctx->r14) < 0X1E ? 1 : 0;
    // 0x80079824: beq         $at, $zero, L_8007983C
    if (ctx->r1 == 0) {
        // 0x80079828: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8007983C;
    }
    // 0x80079828: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007982C: jal         0x802A14C0
    // 0x80079830: addiu       $a0, $zero, 0x4A5
    ctx->r4 = ADD32(0, 0X4A5);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80079830: addiu       $a0, $zero, 0x4A5
    ctx->r4 = ADD32(0, 0X4A5);
    after_7:
    // 0x80079834: b           L_80079A10
    // 0x80079838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x80079838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007983C:
    // 0x8007983C: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079840: jal         0x8007A034
    // 0x80079844: nop

    func_8007A034(rdram, ctx);
        goto after_8;
    // 0x80079844: nop

    after_8:
    // 0x80079848: addiu       $a0, $zero, 0x4C0
    ctx->r4 = ADD32(0, 0X4C0);
    // 0x8007984C: jal         0x802A14C0
    // 0x80079850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80079850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80079854: b           L_80079A10
    // 0x80079858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x80079858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007985C:
    // 0x8007985C: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079860: jal         0x8007A034
    // 0x80079864: nop

    func_8007A034(rdram, ctx);
        goto after_10;
    // 0x80079864: nop

    after_10:
    // 0x80079868: addiu       $a0, $zero, 0x4C0
    ctx->r4 = ADD32(0, 0X4C0);
    // 0x8007986C: jal         0x802A14C0
    // 0x80079870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x80079870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80079874: b           L_80079A10
    // 0x80079878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x80079878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007987C:
    // 0x8007987C: bne         $v1, $v0, L_80079894
    if (ctx->r3 != ctx->r2) {
        // 0x80079880: addiu       $a0, $zero, 0x55A
        ctx->r4 = ADD32(0, 0X55A);
            goto L_80079894;
    }
    // 0x80079880: addiu       $a0, $zero, 0x55A
    ctx->r4 = ADD32(0, 0X55A);
    // 0x80079884: jal         0x802A14C0
    // 0x80079888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_12;
    // 0x80079888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x8007988C: b           L_80079A10
    // 0x80079890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x80079890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079894:
    // 0x80079894: bgez        $a2, L_800798EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80079898: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800798EC;
    }
    // 0x80079898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007989C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800798A0: bne         $a2, $at, L_800798CC
    if (ctx->r6 != ctx->r1) {
        // 0x800798A4: addiu       $a0, $zero, 0x48E
        ctx->r4 = ADD32(0, 0X48E);
            goto L_800798CC;
    }
    // 0x800798A4: addiu       $a0, $zero, 0x48E
    ctx->r4 = ADD32(0, 0X48E);
    // 0x800798A8: addiu       $a0, $zero, 0x48F
    ctx->r4 = ADD32(0, 0X48F);
    // 0x800798AC: jal         0x802A14C0
    // 0x800798B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_13;
    // 0x800798B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800798B4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800798B8: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x800798BC: jal         0x8007A034
    // 0x800798C0: nop

    func_8007A034(rdram, ctx);
        goto after_14;
    // 0x800798C0: nop

    after_14:
    // 0x800798C4: b           L_80079A10
    // 0x800798C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x800798C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800798CC:
    // 0x800798CC: jal         0x802A14C0
    // 0x800798D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_15;
    // 0x800798D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x800798D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800798D8: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x800798DC: jal         0x8007A034
    // 0x800798E0: nop

    func_8007A034(rdram, ctx);
        goto after_16;
    // 0x800798E0: nop

    after_16:
    // 0x800798E4: b           L_80079A10
    // 0x800798E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x800798E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800798EC:
    // 0x800798EC: bne         $a2, $at, L_800799C0
    if (ctx->r6 != ctx->r1) {
        // 0x800798F0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_800799C0;
    }
    // 0x800798F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800798F4: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x800798F8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x800798FC: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x80079900: lbu         $t0, 0x3A20($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3A20);
    // 0x80079904: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x80079908: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007990C: bne         $t9, $t0, L_800799A4
    if (ctx->r25 != ctx->r8) {
        // 0x80079910: addiu       $v0, $v0, 0x3AA9
        ctx->r2 = ADD32(ctx->r2, 0X3AA9);
            goto L_800799A4;
    }
    // 0x80079910: addiu       $v0, $v0, 0x3AA9
    ctx->r2 = ADD32(ctx->r2, 0X3AA9);
    // 0x80079914: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80079918: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8007991C: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80079920: beq         $t2, $zero, L_80079980
    if (ctx->r10 == 0) {
        // 0x80079924: addiu       $a0, $zero, 0x450
        ctx->r4 = ADD32(0, 0X450);
            goto L_80079980;
    }
    // 0x80079924: addiu       $a0, $zero, 0x450
    ctx->r4 = ADD32(0, 0X450);
    // 0x80079928: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x8007992C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079930: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80079934: bne         $t4, $at, L_80079960
    if (ctx->r12 != ctx->r1) {
        // 0x80079938: lui         $t5, 0x802C
        ctx->r13 = S32(0X802C << 16);
            goto L_80079960;
    }
    // 0x80079938: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8007993C: lhu         $t5, 0x38D0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X38D0);
    // 0x80079940: addiu       $a0, $zero, 0x4DC
    ctx->r4 = ADD32(0, 0X4DC);
    // 0x80079944: slti        $at, $t5, 0x1E
    ctx->r1 = SIGNED(ctx->r13) < 0X1E ? 1 : 0;
    // 0x80079948: beq         $at, $zero, L_80079960
    if (ctx->r1 == 0) {
        // 0x8007994C: nop
    
            goto L_80079960;
    }
    // 0x8007994C: nop

    // 0x80079950: jal         0x802A14C0
    // 0x80079954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_17;
    // 0x80079954: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x80079958: b           L_80079970
    // 0x8007995C: addiu       $a0, $zero, 0x45D
    ctx->r4 = ADD32(0, 0X45D);
        goto L_80079970;
    // 0x8007995C: addiu       $a0, $zero, 0x45D
    ctx->r4 = ADD32(0, 0X45D);
L_80079960:
    // 0x80079960: addiu       $a0, $zero, 0x478
    ctx->r4 = ADD32(0, 0X478);
    // 0x80079964: jal         0x802A14C0
    // 0x80079968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_18;
    // 0x80079968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x8007996C: addiu       $a0, $zero, 0x45D
    ctx->r4 = ADD32(0, 0X45D);
L_80079970:
    // 0x80079970: jal         0x802A14C0
    // 0x80079974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_19;
    // 0x80079974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80079978: b           L_80079A10
    // 0x8007997C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x8007997C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079980:
    // 0x80079980: jal         0x802A14C0
    // 0x80079984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_20;
    // 0x80079984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x80079988: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007998C: addiu       $v0, $v0, 0x3AA9
    ctx->r2 = ADD32(ctx->r2, 0X3AA9);
    // 0x80079990: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80079994: nop

    // 0x80079998: ori         $t6, $t7, 0x2
    ctx->r14 = ctx->r15 | 0X2;
    // 0x8007999C: b           L_80079A0C
    // 0x800799A0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
        goto L_80079A0C;
    // 0x800799A0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_800799A4:
    // 0x800799A4: jal         0x8007A034
    // 0x800799A8: nop

    func_8007A034(rdram, ctx);
        goto after_21;
    // 0x800799A8: nop

    after_21:
    // 0x800799AC: addiu       $a0, $zero, 0x56D
    ctx->r4 = ADD32(0, 0X56D);
    // 0x800799B0: jal         0x802A14C0
    // 0x800799B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_22;
    // 0x800799B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x800799B8: b           L_80079A10
    // 0x800799BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x800799BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800799C0:
    // 0x800799C0: slti        $at, $a2, 0x5
    ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
    // 0x800799C4: beq         $at, $zero, L_800799DC
    if (ctx->r1 == 0) {
        // 0x800799C8: andi        $t8, $a2, 0x1
        ctx->r24 = ctx->r6 & 0X1;
            goto L_800799DC;
    }
    // 0x800799C8: andi        $t8, $a2, 0x1
    ctx->r24 = ctx->r6 & 0X1;
    // 0x800799CC: jal         0x80079A1C
    // 0x800799D0: nop

    func_80079A1C(rdram, ctx);
        goto after_23;
    // 0x800799D0: nop

    after_23:
    // 0x800799D4: b           L_80079A10
    // 0x800799D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x800799D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800799DC:
    // 0x800799DC: beq         $t8, $zero, L_80079A04
    if (ctx->r24 == 0) {
        // 0x800799E0: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80079A04;
    }
    // 0x800799E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800799E4: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x800799E8: jal         0x8007A034
    // 0x800799EC: nop

    func_8007A034(rdram, ctx);
        goto after_24;
    // 0x800799EC: nop

    after_24:
    // 0x800799F0: addiu       $a0, $zero, 0x4E3
    ctx->r4 = ADD32(0, 0X4E3);
    // 0x800799F4: jal         0x802A14C0
    // 0x800799F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_25;
    // 0x800799F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x800799FC: b           L_80079A10
    // 0x80079A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079A10;
    // 0x80079A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079A04:
    // 0x80079A04: jal         0x80079A1C
    // 0x80079A08: nop

    func_80079A1C(rdram, ctx);
        goto after_26;
    // 0x80079A08: nop

    after_26:
L_80079A0C:
    // 0x80079A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079A10:
    // 0x80079A10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079A14: jr          $ra
    // 0x80079A18: nop

    return;
    // 0x80079A18: nop

;}
RECOMP_FUNC void func_80079A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079A1C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80079A20: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80079A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079A28: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80079A2C: beq         $t6, $zero, L_80079A60
    if (ctx->r14 == 0) {
        // 0x80079A30: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80079A60;
    }
    // 0x80079A30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079A34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079A38: beq         $t6, $at, L_80079A84
    if (ctx->r14 == ctx->r1) {
        // 0x80079A3C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80079A84;
    }
    // 0x80079A3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079A40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079A44: beq         $t6, $at, L_80079AA4
    if (ctx->r14 == ctx->r1) {
        // 0x80079A48: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80079AA4;
    }
    // 0x80079A48: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079A4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80079A50: beq         $t6, $at, L_80079AC4
    if (ctx->r14 == ctx->r1) {
        // 0x80079A54: addiu       $a0, $zero, 0x5CF
        ctx->r4 = ADD32(0, 0X5CF);
            goto L_80079AC4;
    }
    // 0x80079A54: addiu       $a0, $zero, 0x5CF
    ctx->r4 = ADD32(0, 0X5CF);
    // 0x80079A58: b           L_80079AD0
    // 0x80079A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079AD0;
    // 0x80079A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079A60:
    // 0x80079A60: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80079A64: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079A68: jal         0x8007A034
    // 0x80079A6C: nop

    func_8007A034(rdram, ctx);
        goto after_0;
    // 0x80079A6C: nop

    after_0:
    // 0x80079A70: addiu       $a0, $zero, 0x56A
    ctx->r4 = ADD32(0, 0X56A);
    // 0x80079A74: jal         0x802A14C0
    // 0x80079A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80079A7C: b           L_80079AD0
    // 0x80079A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079AD0;
    // 0x80079A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079A84:
    // 0x80079A84: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079A88: jal         0x8007A034
    // 0x80079A8C: nop

    func_8007A034(rdram, ctx);
        goto after_2;
    // 0x80079A8C: nop

    after_2:
    // 0x80079A90: addiu       $a0, $zero, 0x5CE
    ctx->r4 = ADD32(0, 0X5CE);
    // 0x80079A94: jal         0x802A14C0
    // 0x80079A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80079A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80079A9C: b           L_80079AD0
    // 0x80079AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079AD0;
    // 0x80079AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079AA4:
    // 0x80079AA4: lw          $a0, 0xB24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB24);
    // 0x80079AA8: jal         0x8007A034
    // 0x80079AAC: nop

    func_8007A034(rdram, ctx);
        goto after_4;
    // 0x80079AAC: nop

    after_4:
    // 0x80079AB0: addiu       $a0, $zero, 0x5D0
    ctx->r4 = ADD32(0, 0X5D0);
    // 0x80079AB4: jal         0x802A14C0
    // 0x80079AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80079AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80079ABC: b           L_80079AD0
    // 0x80079AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079AD0;
    // 0x80079AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079AC4:
    // 0x80079AC4: jal         0x802A14C0
    // 0x80079AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80079AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80079ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079AD0:
    // 0x80079AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079AD4: jr          $ra
    // 0x80079AD8: nop

    return;
    // 0x80079AD8: nop

;}
RECOMP_FUNC void func_80079ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079ADC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80079AE0: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x80079AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079AE8: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x80079AEC: bne         $t7, $zero, L_80079BF4
    if (ctx->r15 != 0) {
        // 0x80079AF0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80079BF4;
    }
    // 0x80079AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079AF4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80079AF8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x80079AFC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80079B00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80079B04: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80079B08: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80079B0C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80079B10: addiu       $a0, $zero, 0x45F
    ctx->r4 = ADD32(0, 0X45F);
    // 0x80079B14: bc1t        L_80079B34
    if (c1cs) {
        // 0x80079B18: nop
    
            goto L_80079B34;
    }
    // 0x80079B18: nop

    // 0x80079B1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80079B20: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80079B24: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80079B28: nop

    // 0x80079B2C: bc1f        L_80079B44
    if (!c1cs) {
        // 0x80079B30: nop
    
            goto L_80079B44;
    }
    // 0x80079B30: nop

L_80079B34:
    // 0x80079B34: jal         0x802A14C0
    // 0x80079B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079B3C: b           L_80079BF8
    // 0x80079B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079BF8;
    // 0x80079B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079B44:
    // 0x80079B44: lh          $t9, 0x3AC4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X3AC4);
    // 0x80079B48: nop

    // 0x80079B4C: slti        $at, $t9, 0x9
    ctx->r1 = SIGNED(ctx->r25) < 0X9 ? 1 : 0;
    // 0x80079B50: bne         $at, $zero, L_80079BF4
    if (ctx->r1 != 0) {
        // 0x80079B54: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80079BF4;
    }
    // 0x80079B54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80079B58: lwc1        $f0, 0x3AB8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3AB8);
    // 0x80079B5C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80079B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80079B64: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x80079B68: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80079B6C: nop

    // 0x80079B70: bc1t        L_80079B8C
    if (c1cs) {
        // 0x80079B74: nop
    
            goto L_80079B8C;
    }
    // 0x80079B74: nop

    // 0x80079B78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80079B7C: nop

    // 0x80079B80: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80079B84: nop

    // 0x80079B88: bc1f        L_80079BF4
    if (!c1cs) {
        // 0x80079B8C: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80079BF4;
    }
L_80079B8C:
    // 0x80079B8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80079B90: lwc1        $f0, 0x3ABC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3ABC);
    // 0x80079B94: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x80079B98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80079B9C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x80079BA0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80079BA4: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80079BA8: bc1t        L_80079BC8
    if (c1cs) {
        // 0x80079BAC: nop
    
            goto L_80079BC8;
    }
    // 0x80079BAC: nop

    // 0x80079BB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80079BB4: nop

    // 0x80079BB8: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80079BBC: nop

    // 0x80079BC0: bc1f        L_80079BF8
    if (!c1cs) {
        // 0x80079BC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80079BF8;
    }
    // 0x80079BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079BC8:
    // 0x80079BC8: lhu         $t0, 0x522A($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X522A);
    // 0x80079BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079BD0: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80079BD4: beq         $t1, $zero, L_80079BEC
    if (ctx->r9 == 0) {
        // 0x80079BD8: addiu       $a0, $zero, 0x5CD
        ctx->r4 = ADD32(0, 0X5CD);
            goto L_80079BEC;
    }
    // 0x80079BD8: addiu       $a0, $zero, 0x5CD
    ctx->r4 = ADD32(0, 0X5CD);
    // 0x80079BDC: jal         0x802A14C0
    // 0x80079BE0: addiu       $a0, $zero, 0x55C
    ctx->r4 = ADD32(0, 0X55C);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079BE0: addiu       $a0, $zero, 0x55C
    ctx->r4 = ADD32(0, 0X55C);
    after_1:
    // 0x80079BE4: b           L_80079BF8
    // 0x80079BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079BF8;
    // 0x80079BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079BEC:
    // 0x80079BEC: jal         0x802A14C0
    // 0x80079BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80079BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80079BF4:
    // 0x80079BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079BF8:
    // 0x80079BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079BFC: jr          $ra
    // 0x80079C00: nop

    return;
    // 0x80079C00: nop

;}
RECOMP_FUNC void func_80079CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079CF4: addiu       $a0, $zero, 0x4B8
    ctx->r4 = ADD32(0, 0X4B8);
    // 0x80079CF8: jal         0x802A14C0
    // 0x80079CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079D08: jr          $ra
    // 0x80079D0C: nop

    return;
    // 0x80079D0C: nop

;}
RECOMP_FUNC void func_80079D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079D38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80079D3C: addiu       $a0, $zero, 0x41E
    ctx->r4 = ADD32(0, 0X41E);
    // 0x80079D40: jal         0x802A14C0
    // 0x80079D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079D50: jr          $ra
    // 0x80079D54: nop

    return;
    // 0x80079D54: nop

;}
RECOMP_FUNC void func_80079DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079DB8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80079DBC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80079DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079DC4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80079DC8: beq         $t7, $zero, L_80079DE4
    if (ctx->r15 == 0) {
        // 0x80079DCC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80079DE4;
    }
    // 0x80079DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079DD0: addiu       $a0, $zero, 0x4B3
    ctx->r4 = ADD32(0, 0X4B3);
    // 0x80079DD4: jal         0x802A14C0
    // 0x80079DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079DDC: b           L_80079DF4
    // 0x80079DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079DF4;
    // 0x80079DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079DE4:
    // 0x80079DE4: addiu       $a0, $zero, 0x4B4
    ctx->r4 = ADD32(0, 0X4B4);
    // 0x80079DE8: jal         0x802A14C0
    // 0x80079DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079DEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80079DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079DF4:
    // 0x80079DF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079DF8: jr          $ra
    // 0x80079DFC: nop

    return;
    // 0x80079DFC: nop

;}
RECOMP_FUNC void func_80079E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079E00: jr          $ra
    // 0x80079E04: nop

    return;
    // 0x80079E04: nop

;}
RECOMP_FUNC void func_80079E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079E10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80079E14: addiu       $a0, $zero, 0x4B7
    ctx->r4 = ADD32(0, 0X4B7);
    // 0x80079E18: jal         0x802A14C0
    // 0x80079E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079E20: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80079E24: jal         0x80079F98
    // 0x80079E28: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80079E28: nop

    after_1:
    // 0x80079E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079E34: jr          $ra
    // 0x80079E38: nop

    return;
    // 0x80079E38: nop

;}
RECOMP_FUNC void func_80079E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079E50: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x80079E54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079E58: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    // 0x80079E5C: addiu       $a0, $zero, 0x555
    ctx->r4 = ADD32(0, 0X555);
    // 0x80079E60: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80079E64: beq         $t7, $zero, L_80079E94
    if (ctx->r15 == 0) {
        // 0x80079E68: nop
    
            goto L_80079E94;
    }
    // 0x80079E68: nop

    // 0x80079E6C: beq         $t7, $at, L_80079EA4
    if (ctx->r15 == ctx->r1) {
        // 0x80079E70: addiu       $a0, $zero, 0x5B0
        ctx->r4 = ADD32(0, 0X5B0);
            goto L_80079EA4;
    }
    // 0x80079E70: addiu       $a0, $zero, 0x5B0
    ctx->r4 = ADD32(0, 0X5B0);
    // 0x80079E74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079E78: beq         $t7, $at, L_80079EB4
    if (ctx->r15 == ctx->r1) {
        // 0x80079E7C: addiu       $a0, $zero, 0x557
        ctx->r4 = ADD32(0, 0X557);
            goto L_80079EB4;
    }
    // 0x80079E7C: addiu       $a0, $zero, 0x557
    ctx->r4 = ADD32(0, 0X557);
    // 0x80079E80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80079E84: beq         $t7, $at, L_80079EC4
    if (ctx->r15 == ctx->r1) {
        // 0x80079E88: addiu       $a0, $zero, 0x554
        ctx->r4 = ADD32(0, 0X554);
            goto L_80079EC4;
    }
    // 0x80079E88: addiu       $a0, $zero, 0x554
    ctx->r4 = ADD32(0, 0X554);
    // 0x80079E8C: b           L_80079ED0
    // 0x80079E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079ED0;
    // 0x80079E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079E94:
    // 0x80079E94: jal         0x802A14C0
    // 0x80079E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079E9C: b           L_80079ED0
    // 0x80079EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079ED0;
    // 0x80079EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079EA4:
    // 0x80079EA4: jal         0x802A14C0
    // 0x80079EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80079EAC: b           L_80079ED0
    // 0x80079EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079ED0;
    // 0x80079EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079EB4:
    // 0x80079EB4: jal         0x802A14C0
    // 0x80079EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80079EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80079EBC: b           L_80079ED0
    // 0x80079EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079ED0;
    // 0x80079EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079EC4:
    // 0x80079EC4: jal         0x802A14C0
    // 0x80079EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80079EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80079ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079ED0:
    // 0x80079ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079ED4: jr          $ra
    // 0x80079ED8: nop

    return;
    // 0x80079ED8: nop

;}
RECOMP_FUNC void func_80079EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079EE4: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x80079EE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079EEC: lbu         $v0, 0x4($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X4);
    // 0x80079EF0: addiu       $a0, $zero, 0x556
    ctx->r4 = ADD32(0, 0X556);
    // 0x80079EF4: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x80079EF8: beq         $t7, $zero, L_80079F28
    if (ctx->r15 == 0) {
        // 0x80079EFC: nop
    
            goto L_80079F28;
    }
    // 0x80079EFC: nop

    // 0x80079F00: beq         $t7, $at, L_80079F38
    if (ctx->r15 == ctx->r1) {
        // 0x80079F04: addiu       $a0, $zero, 0x5B0
        ctx->r4 = ADD32(0, 0X5B0);
            goto L_80079F38;
    }
    // 0x80079F04: addiu       $a0, $zero, 0x5B0
    ctx->r4 = ADD32(0, 0X5B0);
    // 0x80079F08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079F0C: beq         $t7, $at, L_80079F48
    if (ctx->r15 == ctx->r1) {
        // 0x80079F10: addiu       $a0, $zero, 0x557
        ctx->r4 = ADD32(0, 0X557);
            goto L_80079F48;
    }
    // 0x80079F10: addiu       $a0, $zero, 0x557
    ctx->r4 = ADD32(0, 0X557);
    // 0x80079F14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80079F18: beq         $t7, $at, L_80079F58
    if (ctx->r15 == ctx->r1) {
        // 0x80079F1C: addiu       $a0, $zero, 0x554
        ctx->r4 = ADD32(0, 0X554);
            goto L_80079F58;
    }
    // 0x80079F1C: addiu       $a0, $zero, 0x554
    ctx->r4 = ADD32(0, 0X554);
    // 0x80079F20: b           L_80079F64
    // 0x80079F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079F64;
    // 0x80079F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079F28:
    // 0x80079F28: jal         0x802A14C0
    // 0x80079F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079F2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079F30: b           L_80079F64
    // 0x80079F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079F64;
    // 0x80079F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079F38:
    // 0x80079F38: jal         0x802A14C0
    // 0x80079F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80079F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80079F40: b           L_80079F64
    // 0x80079F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079F64;
    // 0x80079F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079F48:
    // 0x80079F48: jal         0x802A14C0
    // 0x80079F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80079F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80079F50: b           L_80079F64
    // 0x80079F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80079F64;
    // 0x80079F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079F58:
    // 0x80079F58: jal         0x802A14C0
    // 0x80079F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80079F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80079F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80079F64:
    // 0x80079F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079F68: jr          $ra
    // 0x80079F6C: nop

    return;
    // 0x80079F6C: nop

;}
RECOMP_FUNC void func_80079F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079F70: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x80079F74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80079F78: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x80079F7C: nop

    // 0x80079F80: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80079F84: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80079F88: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80079F8C: lhu         $v0, -0x478($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X478);
    // 0x80079F90: jr          $ra
    // 0x80079F94: nop

    return;
    // 0x80079F94: nop

;}
RECOMP_FUNC void func_80079F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079F9C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80079FA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80079FA4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80079FA8: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x80079FAC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80079FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079FB4: lhu         $a0, -0x520($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X520);
    // 0x80079FB8: jal         0x802A14C0
    // 0x80079FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80079FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80079FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079FC8: jr          $ra
    // 0x80079FCC: nop

    return;
    // 0x80079FCC: nop

;}
RECOMP_FUNC void func_80079FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079FD8: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x80079FDC: nop

    // 0x80079FE0: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x80079FE4: jal         0x80079F98
    // 0x80079FE8: nop

    func_80079F98(rdram, ctx);
        goto after_0;
    // 0x80079FE8: nop

    after_0:
    // 0x80079FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079FF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80079FF4: jr          $ra
    // 0x80079FF8: nop

    return;
    // 0x80079FF8: nop

;}
RECOMP_FUNC void func_80079FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A000: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8007A004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A008: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007A00C: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x8007A010: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8007A014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A018: lhu         $a0, -0x4CC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4CC);
    // 0x8007A01C: jal         0x802A14C0
    // 0x8007A020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007A020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007A024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A02C: jr          $ra
    // 0x8007A030: nop

    return;
    // 0x8007A030: nop

;}
RECOMP_FUNC void func_8007A034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A03C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x8007A040: nop

    // 0x8007A044: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x8007A048: jal         0x80079FFC
    // 0x8007A04C: nop

    func_80079FFC(rdram, ctx);
        goto after_0;
    // 0x8007A04C: nop

    after_0:
    // 0x8007A050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A058: jr          $ra
    // 0x8007A05C: nop

    return;
    // 0x8007A05C: nop

;}
RECOMP_FUNC void func_8007A068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A06C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A070: addiu       $a0, $zero, 0x5CC
    ctx->r4 = ADD32(0, 0X5CC);
    // 0x8007A074: jal         0x802A14C0
    // 0x8007A078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007A078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007A07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A084: jr          $ra
    // 0x8007A088: nop

    return;
    // 0x8007A088: nop

;}
RECOMP_FUNC void func_8007A08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A08C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A090: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8007A094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A098: bne         $t6, $zero, L_8007A0A8
    if (ctx->r14 != 0) {
        // 0x8007A09C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8007A0A8;
    }
    // 0x8007A09C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A0A0: b           L_8007A0AC
    // 0x8007A0A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8007A0AC;
    // 0x8007A0A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007A0A8:
    // 0x8007A0A8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8007A0AC:
    // 0x8007A0AC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007A0B0: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007A0B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A0B8: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x8007A0BC: beq         $t7, $zero, L_8007A0E4
    if (ctx->r15 == 0) {
        // 0x8007A0C0: nop
    
            goto L_8007A0E4;
    }
    // 0x8007A0C0: nop

    // 0x8007A0C4: beq         $t7, $at, L_8007A0F4
    if (ctx->r15 == ctx->r1) {
        // 0x8007A0C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007A0F4;
    }
    // 0x8007A0C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A0CC: beq         $t7, $at, L_8007A104
    if (ctx->r15 == ctx->r1) {
        // 0x8007A0D0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8007A104;
    }
    // 0x8007A0D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A0D4: beq         $t7, $at, L_8007A114
    if (ctx->r15 == ctx->r1) {
        // 0x8007A0D8: nop
    
            goto L_8007A114;
    }
    // 0x8007A0D8: nop

    // 0x8007A0DC: b           L_8007A120
    // 0x8007A0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A120;
    // 0x8007A0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A0E4:
    // 0x8007A0E4: jal         0x80015BEC
    // 0x8007A0E8: addiu       $a0, $zero, 0x210
    ctx->r4 = ADD32(0, 0X210);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x8007A0E8: addiu       $a0, $zero, 0x210
    ctx->r4 = ADD32(0, 0X210);
    after_0:
    // 0x8007A0EC: b           L_8007A120
    // 0x8007A0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A120;
    // 0x8007A0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A0F4:
    // 0x8007A0F4: jal         0x80015BEC
    // 0x8007A0F8: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8007A0F8: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_1:
    // 0x8007A0FC: b           L_8007A120
    // 0x8007A100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A120;
    // 0x8007A100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A104:
    // 0x8007A104: jal         0x80015BEC
    // 0x8007A108: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8007A108: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_2:
    // 0x8007A10C: b           L_8007A120
    // 0x8007A110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A120;
    // 0x8007A110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A114:
    // 0x8007A114: jal         0x80015BEC
    // 0x8007A118: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8007A118: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_3:
    // 0x8007A11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A120:
    // 0x8007A120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A124: jr          $ra
    // 0x8007A128: nop

    return;
    // 0x8007A128: nop

;}
RECOMP_FUNC void func_8007A12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A130: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8007A134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A138: bne         $t6, $zero, L_8007A148
    if (ctx->r14 != 0) {
        // 0x8007A13C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8007A148;
    }
    // 0x8007A13C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A140: b           L_8007A14C
    // 0x8007A144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8007A14C;
    // 0x8007A144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007A148:
    // 0x8007A148: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8007A14C:
    // 0x8007A14C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007A150: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007A154: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A158: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x8007A15C: beq         $t7, $zero, L_8007A184
    if (ctx->r15 == 0) {
        // 0x8007A160: nop
    
            goto L_8007A184;
    }
    // 0x8007A160: nop

    // 0x8007A164: beq         $t7, $at, L_8007A194
    if (ctx->r15 == ctx->r1) {
        // 0x8007A168: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007A194;
    }
    // 0x8007A168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A16C: beq         $t7, $at, L_8007A1A4
    if (ctx->r15 == ctx->r1) {
        // 0x8007A170: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8007A1A4;
    }
    // 0x8007A170: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A174: beq         $t7, $at, L_8007A1B4
    if (ctx->r15 == ctx->r1) {
        // 0x8007A178: nop
    
            goto L_8007A1B4;
    }
    // 0x8007A178: nop

    // 0x8007A17C: b           L_8007A1C0
    // 0x8007A180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A1C0;
    // 0x8007A180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A184:
    // 0x8007A184: jal         0x80015BEC
    // 0x8007A188: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x8007A188: addiu       $a0, $zero, 0x218
    ctx->r4 = ADD32(0, 0X218);
    after_0:
    // 0x8007A18C: b           L_8007A1C0
    // 0x8007A190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A1C0;
    // 0x8007A190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A194:
    // 0x8007A194: jal         0x80015BEC
    // 0x8007A198: addiu       $a0, $zero, 0x219
    ctx->r4 = ADD32(0, 0X219);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8007A198: addiu       $a0, $zero, 0x219
    ctx->r4 = ADD32(0, 0X219);
    after_1:
    // 0x8007A19C: b           L_8007A1C0
    // 0x8007A1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A1C0;
    // 0x8007A1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A1A4:
    // 0x8007A1A4: jal         0x80015BEC
    // 0x8007A1A8: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8007A1A8: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    after_2:
    // 0x8007A1AC: b           L_8007A1C0
    // 0x8007A1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A1C0;
    // 0x8007A1B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A1B4:
    // 0x8007A1B4: jal         0x80015BEC
    // 0x8007A1B8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8007A1B8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_3:
    // 0x8007A1BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A1C0:
    // 0x8007A1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A1C4: jr          $ra
    // 0x8007A1C8: nop

    return;
    // 0x8007A1C8: nop

;}
RECOMP_FUNC void func_8007A1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A1CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A1D0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8007A1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A1D8: bne         $t6, $zero, L_8007A1E8
    if (ctx->r14 != 0) {
        // 0x8007A1DC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8007A1E8;
    }
    // 0x8007A1DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A1E0: b           L_8007A1EC
    // 0x8007A1E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8007A1EC;
    // 0x8007A1E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007A1E8:
    // 0x8007A1E8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8007A1EC:
    // 0x8007A1EC: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8007A1F0: lhu         $t7, 0x522A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X522A);
    // 0x8007A1F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A1F8: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8007A1FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007A200: addu        $at, $at, $t8
    gpr jr_addend_8007A20C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8007A204: lw          $t8, -0x525C($at)
    ctx->r24 = ADD32(ctx->r1, -0X525C);
    // 0x8007A208: nop

    // 0x8007A20C: jr          $t8
    // 0x8007A210: nop

    switch (jr_addend_8007A20C >> 2) {
        case 0: goto L_8007A214; break;
        case 1: goto L_8007A224; break;
        case 2: goto L_8007A234; break;
        case 3: goto L_8007A244; break;
        case 4: goto L_8007A254; break;
        case 5: goto L_8007A264; break;
        case 6: goto L_8007A274; break;
        case 7: goto L_8007A284; break;
        default: switch_error(__func__, 0x8007A20C, 0x800DADA4);
    }
    // 0x8007A210: nop

L_8007A214:
    // 0x8007A214: jal         0x80015BEC
    // 0x8007A218: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x8007A218: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_0:
    // 0x8007A21C: b           L_8007A290
    // 0x8007A220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A224:
    // 0x8007A224: jal         0x80015BEC
    // 0x8007A228: addiu       $a0, $zero, 0x215
    ctx->r4 = ADD32(0, 0X215);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8007A228: addiu       $a0, $zero, 0x215
    ctx->r4 = ADD32(0, 0X215);
    after_1:
    // 0x8007A22C: b           L_8007A290
    // 0x8007A230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A234:
    // 0x8007A234: jal         0x80015BEC
    // 0x8007A238: addiu       $a0, $zero, 0x216
    ctx->r4 = ADD32(0, 0X216);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8007A238: addiu       $a0, $zero, 0x216
    ctx->r4 = ADD32(0, 0X216);
    after_2:
    // 0x8007A23C: b           L_8007A290
    // 0x8007A240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A244:
    // 0x8007A244: jal         0x80015BEC
    // 0x8007A248: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8007A248: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    after_3:
    // 0x8007A24C: b           L_8007A290
    // 0x8007A250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A254:
    // 0x8007A254: jal         0x80015BEC
    // 0x8007A258: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    func_80015BEC(rdram, ctx);
        goto after_4;
    // 0x8007A258: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    after_4:
    // 0x8007A25C: b           L_8007A290
    // 0x8007A260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A264:
    // 0x8007A264: jal         0x80015BEC
    // 0x8007A268: addiu       $a0, $zero, 0x21D
    ctx->r4 = ADD32(0, 0X21D);
    func_80015BEC(rdram, ctx);
        goto after_5;
    // 0x8007A268: addiu       $a0, $zero, 0x21D
    ctx->r4 = ADD32(0, 0X21D);
    after_5:
    // 0x8007A26C: b           L_8007A290
    // 0x8007A270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A274:
    // 0x8007A274: jal         0x80015BEC
    // 0x8007A278: addiu       $a0, $zero, 0x21E
    ctx->r4 = ADD32(0, 0X21E);
    func_80015BEC(rdram, ctx);
        goto after_6;
    // 0x8007A278: addiu       $a0, $zero, 0x21E
    ctx->r4 = ADD32(0, 0X21E);
    after_6:
    // 0x8007A27C: b           L_8007A290
    // 0x8007A280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A290;
    // 0x8007A280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A284:
    // 0x8007A284: jal         0x80015BEC
    // 0x8007A288: addiu       $a0, $zero, 0x21F
    ctx->r4 = ADD32(0, 0X21F);
    func_80015BEC(rdram, ctx);
        goto after_7;
    // 0x8007A288: addiu       $a0, $zero, 0x21F
    ctx->r4 = ADD32(0, 0X21F);
    after_7:
    // 0x8007A28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A290:
    // 0x8007A290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A294: jr          $ra
    // 0x8007A298: nop

    return;
    // 0x8007A298: nop

;}
RECOMP_FUNC void func_8007A29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A29C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A2A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A2A4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8007A2A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8007A2AC: bne         $t6, $zero, L_8007A2BC
    if (ctx->r14 != 0) {
        // 0x8007A2B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007A2BC;
    }
    // 0x8007A2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A2B4: b           L_8007A2C0
    // 0x8007A2B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8007A2C0;
    // 0x8007A2B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007A2BC:
    // 0x8007A2BC: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8007A2C0:
    // 0x8007A2C0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8007A2C4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007A2C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A2CC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007A2D0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007A2D4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007A2D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A2DC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007A2E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A2E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007A2E8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8007A2EC: lbu         $v0, -0x2CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2CF0);
    // 0x8007A2F0: nop

    // 0x8007A2F4: slti        $at, $v0, 0x18
    ctx->r1 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8007A2F8: beq         $at, $zero, L_8007A314
    if (ctx->r1 == 0) {
        // 0x8007A2FC: slti        $at, $v0, 0x1B
        ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
            goto L_8007A314;
    }
    // 0x8007A2FC: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x8007A300: jal         0x80015BEC
    // 0x8007A304: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x8007A304: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_0:
    // 0x8007A308: b           L_8007A370
    // 0x8007A30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A370;
    // 0x8007A30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A310: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
L_8007A314:
    // 0x8007A314: beq         $at, $zero, L_8007A330
    if (ctx->r1 == 0) {
        // 0x8007A318: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_8007A330;
    }
    // 0x8007A318: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x8007A31C: jal         0x80015BEC
    // 0x8007A320: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8007A320: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    after_1:
    // 0x8007A324: b           L_8007A370
    // 0x8007A328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A370;
    // 0x8007A328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A32C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_8007A330:
    // 0x8007A330: bne         $v0, $at, L_8007A34C
    if (ctx->r2 != ctx->r1) {
        // 0x8007A334: slti        $at, $v0, 0x1E
        ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
            goto L_8007A34C;
    }
    // 0x8007A334: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8007A338: jal         0x80015BEC
    // 0x8007A33C: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8007A33C: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    after_2:
    // 0x8007A340: b           L_8007A370
    // 0x8007A344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A370;
    // 0x8007A344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A348: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
L_8007A34C:
    // 0x8007A34C: beq         $at, $zero, L_8007A364
    if (ctx->r1 == 0) {
        // 0x8007A350: nop
    
            goto L_8007A364;
    }
    // 0x8007A350: nop

    // 0x8007A354: jal         0x80015BEC
    // 0x8007A358: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8007A358: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_3:
    // 0x8007A35C: b           L_8007A370
    // 0x8007A360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A370;
    // 0x8007A360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A364:
    // 0x8007A364: jal         0x80015BEC
    // 0x8007A368: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    func_80015BEC(rdram, ctx);
        goto after_4;
    // 0x8007A368: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_4:
    // 0x8007A36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A370:
    // 0x8007A370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A374: jr          $ra
    // 0x8007A378: nop

    return;
    // 0x8007A378: nop

;}
RECOMP_FUNC void func_8007A37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A37C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007A380: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007A384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A388: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x8007A38C: beq         $t6, $zero, L_8007A3B8
    if (ctx->r14 == 0) {
        // 0x8007A390: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007A3B8;
    }
    // 0x8007A390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A394: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A398: beq         $t6, $at, L_8007A3C8
    if (ctx->r14 == ctx->r1) {
        // 0x8007A39C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007A3C8;
    }
    // 0x8007A39C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A3A0: beq         $t6, $at, L_8007A3D8
    if (ctx->r14 == ctx->r1) {
        // 0x8007A3A4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8007A3D8;
    }
    // 0x8007A3A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A3A8: beq         $t6, $at, L_8007A3E8
    if (ctx->r14 == ctx->r1) {
        // 0x8007A3AC: nop
    
            goto L_8007A3E8;
    }
    // 0x8007A3AC: nop

    // 0x8007A3B0: b           L_8007A3F4
    // 0x8007A3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A3F4;
    // 0x8007A3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A3B8:
    // 0x8007A3B8: jal         0x80015BC0
    // 0x8007A3BC: addiu       $a0, $zero, 0x333
    ctx->r4 = ADD32(0, 0X333);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007A3BC: addiu       $a0, $zero, 0x333
    ctx->r4 = ADD32(0, 0X333);
    after_0:
    // 0x8007A3C0: b           L_8007A3F4
    // 0x8007A3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A3F4;
    // 0x8007A3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A3C8:
    // 0x8007A3C8: jal         0x80015BC0
    // 0x8007A3CC: addiu       $a0, $zero, 0x334
    ctx->r4 = ADD32(0, 0X334);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007A3CC: addiu       $a0, $zero, 0x334
    ctx->r4 = ADD32(0, 0X334);
    after_1:
    // 0x8007A3D0: b           L_8007A3F4
    // 0x8007A3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A3F4;
    // 0x8007A3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A3D8:
    // 0x8007A3D8: jal         0x80015BC0
    // 0x8007A3DC: addiu       $a0, $zero, 0x335
    ctx->r4 = ADD32(0, 0X335);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007A3DC: addiu       $a0, $zero, 0x335
    ctx->r4 = ADD32(0, 0X335);
    after_2:
    // 0x8007A3E0: b           L_8007A3F4
    // 0x8007A3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A3F4;
    // 0x8007A3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A3E8:
    // 0x8007A3E8: jal         0x80015BC0
    // 0x8007A3EC: addiu       $a0, $zero, 0x336
    ctx->r4 = ADD32(0, 0X336);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007A3EC: addiu       $a0, $zero, 0x336
    ctx->r4 = ADD32(0, 0X336);
    after_3:
    // 0x8007A3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A3F4:
    // 0x8007A3F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A3F8: jr          $ra
    // 0x8007A3FC: nop

    return;
    // 0x8007A3FC: nop

;}
RECOMP_FUNC void func_8007A400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A400: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007A404: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007A408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A40C: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x8007A410: beq         $t6, $zero, L_8007A43C
    if (ctx->r14 == 0) {
        // 0x8007A414: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007A43C;
    }
    // 0x8007A414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A41C: beq         $t6, $at, L_8007A44C
    if (ctx->r14 == ctx->r1) {
        // 0x8007A420: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007A44C;
    }
    // 0x8007A420: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A424: beq         $t6, $at, L_8007A45C
    if (ctx->r14 == ctx->r1) {
        // 0x8007A428: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8007A45C;
    }
    // 0x8007A428: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A42C: beq         $t6, $at, L_8007A46C
    if (ctx->r14 == ctx->r1) {
        // 0x8007A430: nop
    
            goto L_8007A46C;
    }
    // 0x8007A430: nop

    // 0x8007A434: b           L_8007A478
    // 0x8007A438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A478;
    // 0x8007A438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A43C:
    // 0x8007A43C: jal         0x80015BC0
    // 0x8007A440: addiu       $a0, $zero, 0x337
    ctx->r4 = ADD32(0, 0X337);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007A440: addiu       $a0, $zero, 0x337
    ctx->r4 = ADD32(0, 0X337);
    after_0:
    // 0x8007A444: b           L_8007A478
    // 0x8007A448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A478;
    // 0x8007A448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A44C:
    // 0x8007A44C: jal         0x80015BC0
    // 0x8007A450: addiu       $a0, $zero, 0x338
    ctx->r4 = ADD32(0, 0X338);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007A450: addiu       $a0, $zero, 0x338
    ctx->r4 = ADD32(0, 0X338);
    after_1:
    // 0x8007A454: b           L_8007A478
    // 0x8007A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A478;
    // 0x8007A458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A45C:
    // 0x8007A45C: jal         0x80015BC0
    // 0x8007A460: addiu       $a0, $zero, 0x339
    ctx->r4 = ADD32(0, 0X339);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007A460: addiu       $a0, $zero, 0x339
    ctx->r4 = ADD32(0, 0X339);
    after_2:
    // 0x8007A464: b           L_8007A478
    // 0x8007A468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A478;
    // 0x8007A468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A46C:
    // 0x8007A46C: jal         0x80015BC0
    // 0x8007A470: addiu       $a0, $zero, 0x33A
    ctx->r4 = ADD32(0, 0X33A);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007A470: addiu       $a0, $zero, 0x33A
    ctx->r4 = ADD32(0, 0X33A);
    after_3:
    // 0x8007A474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A478:
    // 0x8007A478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A47C: jr          $ra
    // 0x8007A480: nop

    return;
    // 0x8007A480: nop

;}
RECOMP_FUNC void func_8007A484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A484: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007A488: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007A48C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A490: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x8007A494: beq         $t6, $zero, L_8007A4C0
    if (ctx->r14 == 0) {
        // 0x8007A498: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007A4C0;
    }
    // 0x8007A498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A49C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A4A0: beq         $t6, $at, L_8007A4D0
    if (ctx->r14 == ctx->r1) {
        // 0x8007A4A4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007A4D0;
    }
    // 0x8007A4A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A4A8: beq         $t6, $at, L_8007A4E0
    if (ctx->r14 == ctx->r1) {
        // 0x8007A4AC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8007A4E0;
    }
    // 0x8007A4AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A4B0: beq         $t6, $at, L_8007A4F0
    if (ctx->r14 == ctx->r1) {
        // 0x8007A4B4: nop
    
            goto L_8007A4F0;
    }
    // 0x8007A4B4: nop

    // 0x8007A4B8: b           L_8007A4FC
    // 0x8007A4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A4FC;
    // 0x8007A4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A4C0:
    // 0x8007A4C0: jal         0x80015BC0
    // 0x8007A4C4: addiu       $a0, $zero, 0x33B
    ctx->r4 = ADD32(0, 0X33B);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007A4C4: addiu       $a0, $zero, 0x33B
    ctx->r4 = ADD32(0, 0X33B);
    after_0:
    // 0x8007A4C8: b           L_8007A4FC
    // 0x8007A4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A4FC;
    // 0x8007A4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A4D0:
    // 0x8007A4D0: jal         0x80015BC0
    // 0x8007A4D4: addiu       $a0, $zero, 0x33C
    ctx->r4 = ADD32(0, 0X33C);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007A4D4: addiu       $a0, $zero, 0x33C
    ctx->r4 = ADD32(0, 0X33C);
    after_1:
    // 0x8007A4D8: b           L_8007A4FC
    // 0x8007A4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A4FC;
    // 0x8007A4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A4E0:
    // 0x8007A4E0: jal         0x80015BC0
    // 0x8007A4E4: addiu       $a0, $zero, 0x33D
    ctx->r4 = ADD32(0, 0X33D);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007A4E4: addiu       $a0, $zero, 0x33D
    ctx->r4 = ADD32(0, 0X33D);
    after_2:
    // 0x8007A4E8: b           L_8007A4FC
    // 0x8007A4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A4FC;
    // 0x8007A4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A4F0:
    // 0x8007A4F0: jal         0x80015BC0
    // 0x8007A4F4: addiu       $a0, $zero, 0x33E
    ctx->r4 = ADD32(0, 0X33E);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007A4F4: addiu       $a0, $zero, 0x33E
    ctx->r4 = ADD32(0, 0X33E);
    after_3:
    // 0x8007A4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A4FC:
    // 0x8007A4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A500: jr          $ra
    // 0x8007A504: nop

    return;
    // 0x8007A504: nop

;}
RECOMP_FUNC void func_8007A508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A508: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8007A50C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8007A510: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A514: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x8007A518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A51C: addu        $at, $at, $t7
    gpr jr_addend_8007A528 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007A520: lw          $t7, -0x523C($at)
    ctx->r15 = ADD32(ctx->r1, -0X523C);
    // 0x8007A524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A528: jr          $t7
    // 0x8007A52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    switch (jr_addend_8007A528 >> 2) {
        case 0: goto L_8007A530; break;
        case 1: goto L_8007A540; break;
        case 2: goto L_8007A550; break;
        case 3: goto L_8007A560; break;
        case 4: goto L_8007A570; break;
        case 5: goto L_8007A580; break;
        case 6: goto L_8007A590; break;
        case 7: goto L_8007A5A0; break;
        default: switch_error(__func__, 0x8007A528, 0x800DADC4);
    }
    // 0x8007A52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_8007A530:
    // 0x8007A530: jal         0x80015BC0
    // 0x8007A534: addiu       $a0, $zero, 0x30F
    ctx->r4 = ADD32(0, 0X30F);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007A534: addiu       $a0, $zero, 0x30F
    ctx->r4 = ADD32(0, 0X30F);
    after_0:
    // 0x8007A538: b           L_8007A5AC
    // 0x8007A53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A53C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A540:
    // 0x8007A540: jal         0x80015BC0
    // 0x8007A544: addiu       $a0, $zero, 0x310
    ctx->r4 = ADD32(0, 0X310);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007A544: addiu       $a0, $zero, 0x310
    ctx->r4 = ADD32(0, 0X310);
    after_1:
    // 0x8007A548: b           L_8007A5AC
    // 0x8007A54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A550:
    // 0x8007A550: jal         0x80015BC0
    // 0x8007A554: addiu       $a0, $zero, 0x311
    ctx->r4 = ADD32(0, 0X311);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007A554: addiu       $a0, $zero, 0x311
    ctx->r4 = ADD32(0, 0X311);
    after_2:
    // 0x8007A558: b           L_8007A5AC
    // 0x8007A55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A560:
    // 0x8007A560: jal         0x80015BC0
    // 0x8007A564: addiu       $a0, $zero, 0x312
    ctx->r4 = ADD32(0, 0X312);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007A564: addiu       $a0, $zero, 0x312
    ctx->r4 = ADD32(0, 0X312);
    after_3:
    // 0x8007A568: b           L_8007A5AC
    // 0x8007A56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A570:
    // 0x8007A570: jal         0x80015BC0
    // 0x8007A574: addiu       $a0, $zero, 0x313
    ctx->r4 = ADD32(0, 0X313);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x8007A574: addiu       $a0, $zero, 0x313
    ctx->r4 = ADD32(0, 0X313);
    after_4:
    // 0x8007A578: b           L_8007A5AC
    // 0x8007A57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A580:
    // 0x8007A580: jal         0x80015BC0
    // 0x8007A584: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    func_80015BC0(rdram, ctx);
        goto after_5;
    // 0x8007A584: addiu       $a0, $zero, 0x314
    ctx->r4 = ADD32(0, 0X314);
    after_5:
    // 0x8007A588: b           L_8007A5AC
    // 0x8007A58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A590:
    // 0x8007A590: jal         0x80015BC0
    // 0x8007A594: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    func_80015BC0(rdram, ctx);
        goto after_6;
    // 0x8007A594: addiu       $a0, $zero, 0x315
    ctx->r4 = ADD32(0, 0X315);
    after_6:
    // 0x8007A598: b           L_8007A5AC
    // 0x8007A59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A5AC;
    // 0x8007A59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A5A0:
    // 0x8007A5A0: jal         0x80015BC0
    // 0x8007A5A4: addiu       $a0, $zero, 0x316
    ctx->r4 = ADD32(0, 0X316);
    func_80015BC0(rdram, ctx);
        goto after_7;
    // 0x8007A5A4: addiu       $a0, $zero, 0x316
    ctx->r4 = ADD32(0, 0X316);
    after_7:
    // 0x8007A5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A5AC:
    // 0x8007A5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A5B0: jr          $ra
    // 0x8007A5B4: nop

    return;
    // 0x8007A5B4: nop

;}
RECOMP_FUNC void func_8007A5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A5BC: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8007A5C0: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8007A5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A5C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007A5CC: addiu       $t7, $a2, 0x7FFF
    ctx->r15 = ADD32(ctx->r6, 0X7FFF);
    // 0x8007A5D0: lbu         $t7, 0x99D($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X99D);
    // 0x8007A5D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8007A5D8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007A5DC: beq         $t7, $at, L_8007A8FC
    if (ctx->r15 == ctx->r1) {
        // 0x8007A5E0: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_8007A8FC;
    }
    // 0x8007A5E0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8007A5E4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007A5E8: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x8007A5EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8007A5F0: beq         $t8, $at, L_8007A8FC
    if (ctx->r24 == ctx->r1) {
        // 0x8007A5F4: sll         $t9, $a0, 2
        ctx->r25 = S32(ctx->r4 << 2);
            goto L_8007A8FC;
    }
    // 0x8007A5F4: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8007A5F8: bne         $t6, $zero, L_8007A608
    if (ctx->r14 != 0) {
        // 0x8007A5FC: addu        $t9, $t9, $a0
        ctx->r25 = ADD32(ctx->r25, ctx->r4);
            goto L_8007A608;
    }
    // 0x8007A5FC: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8007A600: b           L_8007A60C
    // 0x8007A604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8007A60C;
    // 0x8007A604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8007A608:
    // 0x8007A608: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8007A60C:
    // 0x8007A60C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8007A610: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8007A614: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8007A618: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8007A61C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8007A620: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x8007A624: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8007A628: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007A62C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8007A630: lbu         $t0, -0x2CF0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X2CF0);
    // 0x8007A634: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8007A638: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8007A63C: lbu         $v1, -0x470($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X470);
    // 0x8007A640: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007A644: beq         $v1, $zero, L_8007A674
    if (ctx->r3 == 0) {
        // 0x8007A648: addiu       $t1, $a2, 0x7FFF
        ctx->r9 = ADD32(ctx->r6, 0X7FFF);
            goto L_8007A674;
    }
    // 0x8007A648: addiu       $t1, $a2, 0x7FFF
    ctx->r9 = ADD32(ctx->r6, 0X7FFF);
    // 0x8007A64C: beq         $v1, $at, L_8007A718
    if (ctx->r3 == ctx->r1) {
        // 0x8007A650: addiu       $t3, $a2, 0x7FFF
        ctx->r11 = ADD32(ctx->r6, 0X7FFF);
            goto L_8007A718;
    }
    // 0x8007A650: addiu       $t3, $a2, 0x7FFF
    ctx->r11 = ADD32(ctx->r6, 0X7FFF);
    // 0x8007A654: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007A658: beq         $v1, $at, L_8007A7BC
    if (ctx->r3 == ctx->r1) {
        // 0x8007A65C: addiu       $t5, $a2, 0x7FFF
        ctx->r13 = ADD32(ctx->r6, 0X7FFF);
            goto L_8007A7BC;
    }
    // 0x8007A65C: addiu       $t5, $a2, 0x7FFF
    ctx->r13 = ADD32(ctx->r6, 0X7FFF);
    // 0x8007A660: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007A664: beq         $v1, $at, L_8007A860
    if (ctx->r3 == ctx->r1) {
        // 0x8007A668: addiu       $t7, $a2, 0x7FFF
        ctx->r15 = ADD32(ctx->r6, 0X7FFF);
            goto L_8007A860;
    }
    // 0x8007A668: addiu       $t7, $a2, 0x7FFF
    ctx->r15 = ADD32(ctx->r6, 0X7FFF);
    // 0x8007A66C: b           L_8007A900
    // 0x8007A670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A674:
    // 0x8007A674: lhu         $t1, 0x99B($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X99B);
    // 0x8007A678: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A67C: andi        $t2, $t1, 0x7
    ctx->r10 = ctx->r9 & 0X7;
    // 0x8007A680: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8007A684: addu        $at, $at, $t2
    gpr jr_addend_8007A690 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8007A688: lw          $t2, -0x521C($at)
    ctx->r10 = ADD32(ctx->r1, -0X521C);
    // 0x8007A68C: nop

    // 0x8007A690: jr          $t2
    // 0x8007A694: nop

    switch (jr_addend_8007A690 >> 2) {
        case 0: goto L_8007A698; break;
        case 1: goto L_8007A6A8; break;
        case 2: goto L_8007A6B8; break;
        case 3: goto L_8007A6C8; break;
        case 4: goto L_8007A6D8; break;
        case 5: goto L_8007A6E8; break;
        case 6: goto L_8007A6F8; break;
        case 7: goto L_8007A708; break;
        default: switch_error(__func__, 0x8007A690, 0x800DADE4);
    }
    // 0x8007A694: nop

L_8007A698:
    // 0x8007A698: jal         0x80015BEC
    // 0x8007A69C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x8007A69C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x8007A6A0: b           L_8007A900
    // 0x8007A6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6A8:
    // 0x8007A6A8: jal         0x80015BEC
    // 0x8007A6AC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x8007A6AC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x8007A6B0: b           L_8007A900
    // 0x8007A6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6B8:
    // 0x8007A6B8: jal         0x80015BEC
    // 0x8007A6BC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    func_80015BEC(rdram, ctx);
        goto after_2;
    // 0x8007A6BC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x8007A6C0: b           L_8007A900
    // 0x8007A6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6C8:
    // 0x8007A6C8: jal         0x80015BEC
    // 0x8007A6CC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    func_80015BEC(rdram, ctx);
        goto after_3;
    // 0x8007A6CC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x8007A6D0: b           L_8007A900
    // 0x8007A6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6D8:
    // 0x8007A6D8: jal         0x80015BEC
    // 0x8007A6DC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    func_80015BEC(rdram, ctx);
        goto after_4;
    // 0x8007A6DC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x8007A6E0: b           L_8007A900
    // 0x8007A6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6E8:
    // 0x8007A6E8: jal         0x80015BEC
    // 0x8007A6EC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    func_80015BEC(rdram, ctx);
        goto after_5;
    // 0x8007A6EC: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_5:
    // 0x8007A6F0: b           L_8007A900
    // 0x8007A6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A6F8:
    // 0x8007A6F8: jal         0x80015BEC
    // 0x8007A6FC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    func_80015BEC(rdram, ctx);
        goto after_6;
    // 0x8007A6FC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_6:
    // 0x8007A700: b           L_8007A900
    // 0x8007A704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A708:
    // 0x8007A708: jal         0x80015BEC
    // 0x8007A70C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    func_80015BEC(rdram, ctx);
        goto after_7;
    // 0x8007A70C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_7:
    // 0x8007A710: b           L_8007A900
    // 0x8007A714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A718:
    // 0x8007A718: lhu         $t3, 0x99B($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X99B);
    // 0x8007A71C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A720: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x8007A724: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8007A728: addu        $at, $at, $t4
    gpr jr_addend_8007A734 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007A72C: lw          $t4, -0x51FC($at)
    ctx->r12 = ADD32(ctx->r1, -0X51FC);
    // 0x8007A730: nop

    // 0x8007A734: jr          $t4
    // 0x8007A738: nop

    switch (jr_addend_8007A734 >> 2) {
        case 0: goto L_8007A73C; break;
        case 1: goto L_8007A74C; break;
        case 2: goto L_8007A75C; break;
        case 3: goto L_8007A76C; break;
        case 4: goto L_8007A77C; break;
        case 5: goto L_8007A78C; break;
        case 6: goto L_8007A79C; break;
        case 7: goto L_8007A7AC; break;
        default: switch_error(__func__, 0x8007A734, 0x800DAE04);
    }
    // 0x8007A738: nop

L_8007A73C:
    // 0x8007A73C: jal         0x80015BEC
    // 0x8007A740: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    func_80015BEC(rdram, ctx);
        goto after_8;
    // 0x8007A740: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_8:
    // 0x8007A744: b           L_8007A900
    // 0x8007A748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A74C:
    // 0x8007A74C: jal         0x80015BEC
    // 0x8007A750: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    func_80015BEC(rdram, ctx);
        goto after_9;
    // 0x8007A750: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_9:
    // 0x8007A754: b           L_8007A900
    // 0x8007A758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A75C:
    // 0x8007A75C: jal         0x80015BEC
    // 0x8007A760: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    func_80015BEC(rdram, ctx);
        goto after_10;
    // 0x8007A760: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_10:
    // 0x8007A764: b           L_8007A900
    // 0x8007A768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A76C:
    // 0x8007A76C: jal         0x80015BEC
    // 0x8007A770: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    func_80015BEC(rdram, ctx);
        goto after_11;
    // 0x8007A770: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_11:
    // 0x8007A774: b           L_8007A900
    // 0x8007A778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A77C:
    // 0x8007A77C: jal         0x80015BEC
    // 0x8007A780: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    func_80015BEC(rdram, ctx);
        goto after_12;
    // 0x8007A780: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_12:
    // 0x8007A784: b           L_8007A900
    // 0x8007A788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A78C:
    // 0x8007A78C: jal         0x80015BEC
    // 0x8007A790: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    func_80015BEC(rdram, ctx);
        goto after_13;
    // 0x8007A790: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_13:
    // 0x8007A794: b           L_8007A900
    // 0x8007A798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A79C:
    // 0x8007A79C: jal         0x80015BEC
    // 0x8007A7A0: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    func_80015BEC(rdram, ctx);
        goto after_14;
    // 0x8007A7A0: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_14:
    // 0x8007A7A4: b           L_8007A900
    // 0x8007A7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A7A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A7AC:
    // 0x8007A7AC: jal         0x80015BEC
    // 0x8007A7B0: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    func_80015BEC(rdram, ctx);
        goto after_15;
    // 0x8007A7B0: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_15:
    // 0x8007A7B4: b           L_8007A900
    // 0x8007A7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A7BC:
    // 0x8007A7BC: lhu         $t5, 0x99B($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X99B);
    // 0x8007A7C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A7C4: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x8007A7C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007A7CC: addu        $at, $at, $t6
    gpr jr_addend_8007A7D8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007A7D0: lw          $t6, -0x51DC($at)
    ctx->r14 = ADD32(ctx->r1, -0X51DC);
    // 0x8007A7D4: nop

    // 0x8007A7D8: jr          $t6
    // 0x8007A7DC: nop

    switch (jr_addend_8007A7D8 >> 2) {
        case 0: goto L_8007A7E0; break;
        case 1: goto L_8007A7F0; break;
        case 2: goto L_8007A800; break;
        case 3: goto L_8007A810; break;
        case 4: goto L_8007A820; break;
        case 5: goto L_8007A830; break;
        case 6: goto L_8007A840; break;
        case 7: goto L_8007A850; break;
        default: switch_error(__func__, 0x8007A7D8, 0x800DAE24);
    }
    // 0x8007A7DC: nop

L_8007A7E0:
    // 0x8007A7E0: jal         0x80015BEC
    // 0x8007A7E4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    func_80015BEC(rdram, ctx);
        goto after_16;
    // 0x8007A7E4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_16:
    // 0x8007A7E8: b           L_8007A900
    // 0x8007A7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A7EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A7F0:
    // 0x8007A7F0: jal         0x80015BEC
    // 0x8007A7F4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    func_80015BEC(rdram, ctx);
        goto after_17;
    // 0x8007A7F4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_17:
    // 0x8007A7F8: b           L_8007A900
    // 0x8007A7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A800:
    // 0x8007A800: jal         0x80015BEC
    // 0x8007A804: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    func_80015BEC(rdram, ctx);
        goto after_18;
    // 0x8007A804: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_18:
    // 0x8007A808: b           L_8007A900
    // 0x8007A80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A810:
    // 0x8007A810: jal         0x80015BEC
    // 0x8007A814: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    func_80015BEC(rdram, ctx);
        goto after_19;
    // 0x8007A814: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_19:
    // 0x8007A818: b           L_8007A900
    // 0x8007A81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A820:
    // 0x8007A820: jal         0x80015BEC
    // 0x8007A824: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    func_80015BEC(rdram, ctx);
        goto after_20;
    // 0x8007A824: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_20:
    // 0x8007A828: b           L_8007A900
    // 0x8007A82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A830:
    // 0x8007A830: jal         0x80015BEC
    // 0x8007A834: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    func_80015BEC(rdram, ctx);
        goto after_21;
    // 0x8007A834: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_21:
    // 0x8007A838: b           L_8007A900
    // 0x8007A83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A840:
    // 0x8007A840: jal         0x80015BEC
    // 0x8007A844: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    func_80015BEC(rdram, ctx);
        goto after_22;
    // 0x8007A844: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_22:
    // 0x8007A848: b           L_8007A900
    // 0x8007A84C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A84C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A850:
    // 0x8007A850: jal         0x80015BEC
    // 0x8007A854: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    func_80015BEC(rdram, ctx);
        goto after_23;
    // 0x8007A854: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_23:
    // 0x8007A858: b           L_8007A900
    // 0x8007A85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A860:
    // 0x8007A860: lhu         $t7, 0x99B($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X99B);
    // 0x8007A864: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007A868: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x8007A86C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007A870: addu        $at, $at, $t8
    gpr jr_addend_8007A87C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8007A874: lw          $t8, -0x51BC($at)
    ctx->r24 = ADD32(ctx->r1, -0X51BC);
    // 0x8007A878: nop

    // 0x8007A87C: jr          $t8
    // 0x8007A880: nop

    switch (jr_addend_8007A87C >> 2) {
        case 0: goto L_8007A884; break;
        case 1: goto L_8007A894; break;
        case 2: goto L_8007A8A4; break;
        case 3: goto L_8007A8B4; break;
        case 4: goto L_8007A8C4; break;
        case 5: goto L_8007A8D4; break;
        case 6: goto L_8007A8E4; break;
        case 7: goto L_8007A8F4; break;
        default: switch_error(__func__, 0x8007A87C, 0x800DAE44);
    }
    // 0x8007A880: nop

L_8007A884:
    // 0x8007A884: jal         0x80015BEC
    // 0x8007A888: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    func_80015BEC(rdram, ctx);
        goto after_24;
    // 0x8007A888: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_24:
    // 0x8007A88C: b           L_8007A900
    // 0x8007A890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A894:
    // 0x8007A894: jal         0x80015BEC
    // 0x8007A898: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    func_80015BEC(rdram, ctx);
        goto after_25;
    // 0x8007A898: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_25:
    // 0x8007A89C: b           L_8007A900
    // 0x8007A8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8A4:
    // 0x8007A8A4: jal         0x80015BEC
    // 0x8007A8A8: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    func_80015BEC(rdram, ctx);
        goto after_26;
    // 0x8007A8A8: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_26:
    // 0x8007A8AC: b           L_8007A900
    // 0x8007A8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8B4:
    // 0x8007A8B4: jal         0x80015BEC
    // 0x8007A8B8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    func_80015BEC(rdram, ctx);
        goto after_27;
    // 0x8007A8B8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_27:
    // 0x8007A8BC: b           L_8007A900
    // 0x8007A8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8C4:
    // 0x8007A8C4: jal         0x80015BEC
    // 0x8007A8C8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    func_80015BEC(rdram, ctx);
        goto after_28;
    // 0x8007A8C8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_28:
    // 0x8007A8CC: b           L_8007A900
    // 0x8007A8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8D4:
    // 0x8007A8D4: jal         0x80015BEC
    // 0x8007A8D8: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    func_80015BEC(rdram, ctx);
        goto after_29;
    // 0x8007A8D8: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_29:
    // 0x8007A8DC: b           L_8007A900
    // 0x8007A8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8E4:
    // 0x8007A8E4: jal         0x80015BEC
    // 0x8007A8E8: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    func_80015BEC(rdram, ctx);
        goto after_30;
    // 0x8007A8E8: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_30:
    // 0x8007A8EC: b           L_8007A900
    // 0x8007A8F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007A900;
    // 0x8007A8F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A8F4:
    // 0x8007A8F4: jal         0x80015BEC
    // 0x8007A8F8: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    func_80015BEC(rdram, ctx);
        goto after_31;
    // 0x8007A8F8: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_31:
L_8007A8FC:
    // 0x8007A8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A900:
    // 0x8007A900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A904: jr          $ra
    // 0x8007A908: nop

    return;
    // 0x8007A908: nop

;}
RECOMP_FUNC void func_8007A90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A90C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007A918: jal         0x8007A940
    // 0x8007A91C: sb          $zero, 0x3A39($at)
    MEM_B(0X3A39, ctx->r1) = 0;
    func_8007A940(rdram, ctx);
        goto after_0;
    // 0x8007A91C: sb          $zero, 0x3A39($at)
    MEM_B(0X3A39, ctx->r1) = 0;
    after_0:
    // 0x8007A920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A924: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007A928: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8007A92C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8007A930: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8007A934: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x8007A938: jr          $ra
    // 0x8007A93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007A93C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007A940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A940: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8007A944: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x8007A948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A94C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007A950: beq         $t6, $at, L_8007A9D4
    if (ctx->r14 == ctx->r1) {
        // 0x8007A954: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007A9D4;
    }
    // 0x8007A954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A958: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007A95C: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8007A960: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x8007A964: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007A968: lbu         $t8, 0x7D6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7D6);
    // 0x8007A96C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007A970: bne         $t8, $zero, L_8007A9D8
    if (ctx->r24 != 0) {
        // 0x8007A974: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007A9D8;
    }
    // 0x8007A974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A978: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x8007A97C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8007A980: beq         $t9, $at, L_8007A9D8
    if (ctx->r25 == ctx->r1) {
        // 0x8007A984: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007A9D8;
    }
    // 0x8007A984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A988: jal         0x80015BC0
    // 0x8007A98C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007A98C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x8007A990: jal         0x80015BC0
    // 0x8007A994: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007A994: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    after_1:
    // 0x8007A998: jal         0x80015BC0
    // 0x8007A99C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007A99C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_2:
    // 0x8007A9A0: jal         0x80015BC0
    // 0x8007A9A4: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007A9A4: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    after_3:
    // 0x8007A9A8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007A9AC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8007A9B0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8007A9B4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8007A9B8: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x8007A9BC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8007A9C0: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8007A9C4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007A9C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007A9CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007A9D0: sb          $t0, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = ctx->r8;
L_8007A9D4:
    // 0x8007A9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007A9D8:
    // 0x8007A9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007A9DC: jr          $ra
    // 0x8007A9E0: nop

    return;
    // 0x8007A9E0: nop

;}
RECOMP_FUNC void func_8007AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AA60: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007AA64: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8007AA68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AA6C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8007AA70: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007AA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AA78: addiu       $t6, $t6, -0x440
    ctx->r14 = ADD32(ctx->r14, -0X440);
    // 0x8007AA7C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8007AA80: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007AA84: sw          $t6, -0x1178($at)
    MEM_W(-0X1178, ctx->r1) = ctx->r14;
    // 0x8007AA88: jal         0x80025A10
    // 0x8007AA8C: addiu       $a0, $a0, 0x3BD8
    ctx->r4 = ADD32(ctx->r4, 0X3BD8);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8007AA8C: addiu       $a0, $a0, 0x3BD8
    ctx->r4 = ADD32(ctx->r4, 0X3BD8);
    after_0:
    // 0x8007AA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AA98: jr          $ra
    // 0x8007AA9C: nop

    return;
    // 0x8007AA9C: nop

;}
RECOMP_FUNC void func_8007AAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AAE0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007AAE4: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8007AAE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007AAEC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007AAF0: jr          $ra
    // 0x8007AAF4: sw          $a0, -0x1174($at)
    MEM_W(-0X1174, ctx->r1) = ctx->r4;
    return;
    // 0x8007AAF4: sw          $a0, -0x1174($at)
    MEM_W(-0X1174, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8007AAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AAF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AAFC: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8007AB00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AB04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007AB08: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8007AB0C: lw          $a2, -0x48E4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X48E4);
    // 0x8007AB10: jal         0x8003819C
    // 0x8007AB14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8003819C(rdram, ctx);
        goto after_0;
    // 0x8007AB14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x8007AB18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AB1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AB20: jr          $ra
    // 0x8007AB24: nop

    return;
    // 0x8007AB24: nop

    // 0x8007AB28: nop

    // 0x8007AB2C: nop

;}
RECOMP_FUNC void func_8007AB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AB34: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007AB38: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007AB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AB40: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8007AB44: sb          $zero, 0x6C15($at)
    MEM_B(0X6C15, ctx->r1) = 0;
    // 0x8007AB48: jal         0x8002F1F0
    // 0x8007AB4C: sb          $zero, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = 0;
    func_8002F1F0(rdram, ctx);
        goto after_0;
    // 0x8007AB4C: sb          $zero, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = 0;
    after_0:
    // 0x8007AB50: jal         0x8002F2AC
    // 0x8007AB54: nop

    func_8002F2AC(rdram, ctx);
        goto after_1;
    // 0x8007AB54: nop

    after_1:
    // 0x8007AB58: jal         0x80021004
    // 0x8007AB5C: nop

    func_80021004(rdram, ctx);
        goto after_2;
    // 0x8007AB5C: nop

    after_2:
    // 0x8007AB60: jal         0x80298AB0
    // 0x8007AB64: nop

    LOOKUP_FUNC(0x80298AB0)(rdram, ctx);
        goto after_3;
    // 0x8007AB64: nop

    after_3:
    // 0x8007AB68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8007AB6C: jal         0x8007AAE0
    // 0x8007AB70: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_4;
    // 0x8007AB70: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_4:
    // 0x8007AB74: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007AB78: lbu         $t6, 0x39DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39DF);
    // 0x8007AB7C: nop

    // 0x8007AB80: bne         $t6, $zero, L_8007AC0C
    if (ctx->r14 != 0) {
        // 0x8007AB84: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8007AC0C;
    }
    // 0x8007AB84: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8007AB88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007AB8C: jal         0x8029ACD4
    // 0x8007AB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_5;
    // 0x8007AB90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8007AB94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007AB98: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007AB9C: jal         0x8007AAF8
    // 0x8007ABA0: addiu       $a1, $zero, 0xE4
    ctx->r5 = ADD32(0, 0XE4);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007ABA0: addiu       $a1, $zero, 0xE4
    ctx->r5 = ADD32(0, 0XE4);
    after_6:
    // 0x8007ABA4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007ABA8: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007ABAC: lbu         $t7, 0x2200($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2200);
    // 0x8007ABB0: addiu       $t0, $zero, 0xD0
    ctx->r8 = ADD32(0, 0XD0);
    // 0x8007ABB4: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8007ABB8: ori         $t9, $t8, 0x6
    ctx->r25 = ctx->r24 | 0X6;
    // 0x8007ABBC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ABC0: sb          $t9, 0x2200($v0)
    MEM_B(0X2200, ctx->r2) = ctx->r25;
    // 0x8007ABC4: sb          $t0, 0x2209($v0)
    MEM_B(0X2209, ctx->r2) = ctx->r8;
    // 0x8007ABC8: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007ABCC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007ABD0: jal         0x8002135C
    // 0x8007ABD4: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8007ABD4: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_7:
    // 0x8007ABD8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x8007ABDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007ABE0: jal         0x8029ACD4
    // 0x8007ABE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_8;
    // 0x8007ABE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8007ABE8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ABEC: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x8007ABF0: jal         0x8007AAF8
    // 0x8007ABF4: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    func_8007AAF8(rdram, ctx);
        goto after_9;
    // 0x8007ABF4: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    after_9:
    // 0x8007ABF8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ABFC: addiu       $a0, $a0, 0x6CE0
    ctx->r4 = ADD32(ctx->r4, 0X6CE0);
    // 0x8007AC00: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007AC04: jal         0x8002135C
    // 0x8007AC08: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8007AC08: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_10:
L_8007AC0C:
    // 0x8007AC0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007AC10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007AC14: jal         0x8029ACD4
    // 0x8007AC18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_11;
    // 0x8007AC18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8007AC1C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007AC20: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007AC24: jal         0x8007AAF8
    // 0x8007AC28: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    func_8007AAF8(rdram, ctx);
        goto after_12;
    // 0x8007AC28: addiu       $a1, $zero, 0xE5
    ctx->r5 = ADD32(0, 0XE5);
    after_12:
    // 0x8007AC2C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007AC30: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007AC34: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007AC38: jal         0x8002135C
    // 0x8007AC3C: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    func_8002135C(rdram, ctx);
        goto after_13;
    // 0x8007AC3C: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    after_13:
    // 0x8007AC40: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8007AC44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007AC48: jal         0x8029ACD4
    // 0x8007AC4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_14;
    // 0x8007AC4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8007AC50: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007AC54: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x8007AC58: jal         0x8007AAF8
    // 0x8007AC5C: addiu       $a1, $zero, 0xE6
    ctx->r5 = ADD32(0, 0XE6);
    func_8007AAF8(rdram, ctx);
        goto after_15;
    // 0x8007AC5C: addiu       $a1, $zero, 0xE6
    ctx->r5 = ADD32(0, 0XE6);
    after_15:
    // 0x8007AC60: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007AC64: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x8007AC68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007AC6C: jal         0x8002135C
    // 0x8007AC70: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    func_8002135C(rdram, ctx);
        goto after_16;
    // 0x8007AC70: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    after_16:
    // 0x8007AC74: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8007AC78: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8007AC7C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007AC80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007AC84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007AC88: sb          $v1, -0x32B3($at)
    MEM_B(-0X32B3, ctx->r1) = ctx->r3;
    // 0x8007AC8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AC90: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8007AC94: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007AC98: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8007AC9C: sb          $t2, 0x38E0($at)
    MEM_B(0X38E0, ctx->r1) = ctx->r10;
    // 0x8007ACA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACA4: beq         $v0, $zero, L_8007AD40
    if (ctx->r2 == 0) {
        // 0x8007ACA8: sb          $v1, 0x38E1($at)
        MEM_B(0X38E1, ctx->r1) = ctx->r3;
            goto L_8007AD40;
    }
    // 0x8007ACA8: sb          $v1, 0x38E1($at)
    MEM_B(0X38E1, ctx->r1) = ctx->r3;
    // 0x8007ACAC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007ACB0: beq         $v0, $at, L_8007AD40
    if (ctx->r2 == ctx->r1) {
        // 0x8007ACB4: lui         $t3, 0x802C
        ctx->r11 = S32(0X802C << 16);
            goto L_8007AD40;
    }
    // 0x8007ACB4: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8007ACB8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACBC: lwc1        $f4, 0x3918($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007ACC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACC4: swc1        $f4, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->f4.u32l;
    // 0x8007ACC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACCC: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8007ACD0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACD4: swc1        $f6, 0x3A58($at)
    MEM_W(0X3A58, ctx->r1) = ctx->f6.u32l;
    // 0x8007ACD8: lbu         $t3, 0x3988($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3988);
    // 0x8007ACDC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACE0: lwc1        $f8, 0x3924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3924);
    // 0x8007ACE4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8007ACE8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007ACEC: swc1        $f8, 0x3A5C($at)
    MEM_W(0X3A5C, ctx->r1) = ctx->f8.u32l;
    // 0x8007ACF0: bgez        $t3, L_8007AD08
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8007ACF4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8007AD08;
    }
    // 0x8007ACF4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8007ACF8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8007ACFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007AD00: nop

    // 0x8007AD04: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8007AD08:
    // 0x8007AD08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD0C: swc1        $f16, 0x3A60($at)
    MEM_W(0X3A60, ctx->r1) = ctx->f16.u32l;
    // 0x8007AD10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD14: lwc1        $f4, 0x3974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8007AD18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD1C: swc1        $f4, 0x3A64($at)
    MEM_W(0X3A64, ctx->r1) = ctx->f4.u32l;
    // 0x8007AD20: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD24: lwc1        $f6, 0x3970($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3970);
    // 0x8007AD28: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD2C: swc1        $f6, 0x3A68($at)
    MEM_W(0X3A68, ctx->r1) = ctx->f6.u32l;
    // 0x8007AD30: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007AD34: lwc1        $f8, 0x699C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X699C);
    // 0x8007AD38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD3C: swc1        $f8, 0x3A6C($at)
    MEM_W(0X3A6C, ctx->r1) = ctx->f8.u32l;
L_8007AD40:
    // 0x8007AD40: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007AD44: lhu         $t4, 0x3A44($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X3A44);
    // 0x8007AD48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD4C: jal         0x8007B1A4
    // 0x8007AD50: sh          $t4, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r12;
    func_8007B1A4(rdram, ctx);
        goto after_17;
    // 0x8007AD50: sh          $t4, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r12;
    after_17:
    // 0x8007AD54: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007AD58: lhu         $a0, 0x3A42($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A42);
    // 0x8007AD5C: jal         0x8007BC2C
    // 0x8007AD60: nop

    func_8007BC2C(rdram, ctx);
        goto after_18;
    // 0x8007AD60: nop

    after_18:
    // 0x8007AD64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD68: lwc1        $f10, 0x3918($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007AD6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AD70: jal         0x80293CFC
    // 0x8007AD74: swc1        $f10, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f10.u32l;
    LOOKUP_FUNC(0x80293CFC)(rdram, ctx);
        goto after_19;
    // 0x8007AD74: swc1        $f10, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f10.u32l;
    after_19:
    // 0x8007AD78: jal         0x80293E24
    // 0x8007AD7C: nop

    LOOKUP_FUNC(0x80293E24)(rdram, ctx);
        goto after_20;
    // 0x8007AD7C: nop

    after_20:
    // 0x8007AD80: jal         0x80294FF8
    // 0x8007AD84: nop

    LOOKUP_FUNC(0x80294FF8)(rdram, ctx);
        goto after_21;
    // 0x8007AD84: nop

    after_21:
    // 0x8007AD88: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007AD8C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007AD90: lbu         $t5, 0x754($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X754);
    // 0x8007AD94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AD98: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x8007AD9C: sb          $t6, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r14;
    // 0x8007ADA0: jr          $ra
    // 0x8007ADA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007ADA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007ADA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007ADA8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007ADAC: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8007ADB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007ADB4: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8007ADB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007ADBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007ADC0: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x8007ADC4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007ADC8: bne         $t7, $at, L_8007ADE0
    if (ctx->r15 != ctx->r1) {
        // 0x8007ADCC: nop
    
            goto L_8007ADE0;
    }
    // 0x8007ADCC: nop

    // 0x8007ADD0: jal         0x8001B854
    // 0x8007ADD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x8007ADD4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8007ADD8: b           L_8007AE5C
    // 0x8007ADDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007AE5C;
    // 0x8007ADDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007ADE0:
    // 0x8007ADE0: jal         0x8007B1A4
    // 0x8007ADE4: nop

    func_8007B1A4(rdram, ctx);
        goto after_1;
    // 0x8007ADE4: nop

    after_1:
    // 0x8007ADE8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8007ADEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007ADF0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007ADF4: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8007ADF8: lhu         $t9, 0x3A44($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3A44);
    // 0x8007ADFC: swc1        $f4, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f4.u32l;
    // 0x8007AE00: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007AE04: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AE08: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8007AE0C: addiu       $v0, $v0, 0x3A42
    ctx->r2 = ADD32(ctx->r2, 0X3A42);
    // 0x8007AE10: sb          $t8, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r24;
    // 0x8007AE14: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x8007AE18: jal         0x8007BC2C
    // 0x8007AE1C: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    func_8007BC2C(rdram, ctx);
        goto after_2;
    // 0x8007AE1C: andi        $a0, $t9, 0xFFFF
    ctx->r4 = ctx->r25 & 0XFFFF;
    after_2:
    // 0x8007AE20: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AE24: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007AE28: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AE2C: jal         0x8002198C
    // 0x8007AE30: swc1        $f6, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f6.u32l;
    func_8002198C(rdram, ctx);
        goto after_3;
    // 0x8007AE30: swc1        $f6, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f6.u32l;
    after_3:
    // 0x8007AE34: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007AE38: sb          $zero, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = 0;
    // 0x8007AE3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007AE40: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007AE44: sb          $v0, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = ctx->r2;
    // 0x8007AE48: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AE4C: sb          $v0, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r2;
    // 0x8007AE50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007AE54: sb          $zero, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = 0;
    // 0x8007AE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007AE5C:
    // 0x8007AE5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AE60: jr          $ra
    // 0x8007AE64: nop

    return;
    // 0x8007AE64: nop

;}
RECOMP_FUNC void func_8007AE68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AE68: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007AE6C: lbu         $t6, 0x39DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39DF);
    // 0x8007AE70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AE74: bne         $t6, $zero, L_8007AF70
    if (ctx->r14 != 0) {
        // 0x8007AE78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007AF70;
    }
    // 0x8007AE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AE7C: jal         0x8007AF90
    // 0x8007AE80: nop

    func_8007AF90(rdram, ctx);
        goto after_0;
    // 0x8007AE80: nop

    after_0:
    // 0x8007AE84: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8007AE88: lbu         $t7, 0x5234($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5234);
    // 0x8007AE8C: nop

    // 0x8007AE90: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x8007AE94: beq         $at, $zero, L_8007AF2C
    if (ctx->r1 == 0) {
        // 0x8007AE98: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8007AF2C;
    }
    // 0x8007AE98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007AE9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007AEA0: addu        $at, $at, $t7
    gpr jr_addend_8007AEAC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007AEA4: lw          $t7, -0x4E88($at)
    ctx->r15 = ADD32(ctx->r1, -0X4E88);
    // 0x8007AEA8: nop

    // 0x8007AEAC: jr          $t7
    // 0x8007AEB0: nop

    switch (jr_addend_8007AEAC >> 2) {
        case 0: goto L_8007AEB4; break;
        case 1: goto L_8007AEC4; break;
        case 2: goto L_8007AED4; break;
        case 3: goto L_8007AEE4; break;
        case 4: goto L_8007AEF4; break;
        case 5: goto L_8007AF04; break;
        case 6: goto L_8007AF14; break;
        case 7: goto L_8007AF24; break;
        default: switch_error(__func__, 0x8007AEAC, 0x800DB178);
    }
    // 0x8007AEB0: nop

L_8007AEB4:
    // 0x8007AEB4: jal         0x8007B22C
    // 0x8007AEB8: nop

    func_8007B22C(rdram, ctx);
        goto after_1;
    // 0x8007AEB8: nop

    after_1:
    // 0x8007AEBC: b           L_8007AF2C
    // 0x8007AEC0: nop

        goto L_8007AF2C;
    // 0x8007AEC0: nop

L_8007AEC4:
    // 0x8007AEC4: jal         0x8007B3C0
    // 0x8007AEC8: nop

    func_8007B3C0(rdram, ctx);
        goto after_2;
    // 0x8007AEC8: nop

    after_2:
    // 0x8007AECC: b           L_8007AF2C
    // 0x8007AED0: nop

        goto L_8007AF2C;
    // 0x8007AED0: nop

L_8007AED4:
    // 0x8007AED4: jal         0x8007B460
    // 0x8007AED8: nop

    func_8007B460(rdram, ctx);
        goto after_3;
    // 0x8007AED8: nop

    after_3:
    // 0x8007AEDC: b           L_8007AF2C
    // 0x8007AEE0: nop

        goto L_8007AF2C;
    // 0x8007AEE0: nop

L_8007AEE4:
    // 0x8007AEE4: jal         0x8007B468
    // 0x8007AEE8: nop

    func_8007B468(rdram, ctx);
        goto after_4;
    // 0x8007AEE8: nop

    after_4:
    // 0x8007AEEC: b           L_8007AF2C
    // 0x8007AEF0: nop

        goto L_8007AF2C;
    // 0x8007AEF0: nop

L_8007AEF4:
    // 0x8007AEF4: jal         0x8007B4F4
    // 0x8007AEF8: nop

    func_8007B4F4(rdram, ctx);
        goto after_5;
    // 0x8007AEF8: nop

    after_5:
    // 0x8007AEFC: b           L_8007AF2C
    // 0x8007AF00: nop

        goto L_8007AF2C;
    // 0x8007AF00: nop

L_8007AF04:
    // 0x8007AF04: jal         0x8007B5F8
    // 0x8007AF08: nop

    func_8007B5F8(rdram, ctx);
        goto after_6;
    // 0x8007AF08: nop

    after_6:
    // 0x8007AF0C: b           L_8007AF2C
    // 0x8007AF10: nop

        goto L_8007AF2C;
    // 0x8007AF10: nop

L_8007AF14:
    // 0x8007AF14: jal         0x8007B6BC
    // 0x8007AF18: nop

    func_8007B6BC(rdram, ctx);
        goto after_7;
    // 0x8007AF18: nop

    after_7:
    // 0x8007AF1C: b           L_8007AF2C
    // 0x8007AF20: nop

        goto L_8007AF2C;
    // 0x8007AF20: nop

L_8007AF24:
    // 0x8007AF24: jal         0x8007B6E4
    // 0x8007AF28: nop

    func_8007B6E4(rdram, ctx);
        goto after_8;
    // 0x8007AF28: nop

    after_8:
L_8007AF2C:
    // 0x8007AF2C: jal         0x8007CBB4
    // 0x8007AF30: nop

    func_8007CBB4(rdram, ctx);
        goto after_9;
    // 0x8007AF30: nop

    after_9:
    // 0x8007AF34: jal         0x802988A0
    // 0x8007AF38: nop

    LOOKUP_FUNC(0x802988A0)(rdram, ctx);
        goto after_10;
    // 0x8007AF38: nop

    after_10:
    // 0x8007AF3C: jal         0x8007CFC8
    // 0x8007AF40: nop

    func_8007CFC8(rdram, ctx);
        goto after_11;
    // 0x8007AF40: nop

    after_11:
    // 0x8007AF44: jal         0x8007C8E4
    // 0x8007AF48: nop

    func_8007C8E4(rdram, ctx);
        goto after_12;
    // 0x8007AF48: nop

    after_12:
    // 0x8007AF4C: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8007AF50: lbu         $t8, 0x5234($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5234);
    // 0x8007AF54: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8007AF58: beq         $t8, $at, L_8007AF84
    if (ctx->r24 == ctx->r1) {
        // 0x8007AF5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007AF84;
    }
    // 0x8007AF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007AF60: jal         0x8029566C
    // 0x8007AF64: nop

    LOOKUP_FUNC(0x8029566C)(rdram, ctx);
        goto after_13;
    // 0x8007AF64: nop

    after_13:
    // 0x8007AF68: b           L_8007AF84
    // 0x8007AF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007AF84;
    // 0x8007AF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007AF70:
    // 0x8007AF70: jal         0x8007AFF0
    // 0x8007AF74: nop

    func_8007AFF0(rdram, ctx);
        goto after_14;
    // 0x8007AF74: nop

    after_14:
    // 0x8007AF78: jal         0x8007D0F8
    // 0x8007AF7C: nop

    func_8007D0F8(rdram, ctx);
        goto after_15;
    // 0x8007AF7C: nop

    after_15:
    // 0x8007AF80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007AF84:
    // 0x8007AF84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007AF88: jr          $ra
    // 0x8007AF8C: nop

    return;
    // 0x8007AF8C: nop

;}
RECOMP_FUNC void func_8007AF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AF90: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007AF94: addiu       $a0, $a0, 0x392E
    ctx->r4 = ADD32(ctx->r4, 0X392E);
    // 0x8007AF98: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007AF9C: nop

    // 0x8007AFA0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8007AFA4: beq         $at, $zero, L_8007AFE8
    if (ctx->r1 == 0) {
        // 0x8007AFA8: slti        $at, $v0, -0x9
        ctx->r1 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
            goto L_8007AFE8;
    }
    // 0x8007AFA8: slti        $at, $v0, -0x9
    ctx->r1 = SIGNED(ctx->r2) < -0X9 ? 1 : 0;
    // 0x8007AFAC: bne         $at, $zero, L_8007AFE8
    if (ctx->r1 != 0) {
        // 0x8007AFB0: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007AFE8;
    }
    // 0x8007AFB0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007AFB4: lhu         $v0, 0x3932($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3932);
    // 0x8007AFB8: nop

    // 0x8007AFBC: andi        $v1, $v0, 0x200
    ctx->r3 = ctx->r2 & 0X200;
    // 0x8007AFC0: bne         $v1, $zero, L_8007AFD0
    if (ctx->r3 != 0) {
        // 0x8007AFC4: andi        $t6, $v0, 0x100
        ctx->r14 = ctx->r2 & 0X100;
            goto L_8007AFD0;
    }
    // 0x8007AFC4: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x8007AFC8: beq         $t6, $zero, L_8007AFE8
    if (ctx->r14 == 0) {
        // 0x8007AFCC: nop
    
            goto L_8007AFE8;
    }
    // 0x8007AFCC: nop

L_8007AFD0:
    // 0x8007AFD0: beq         $v1, $zero, L_8007AFE4
    if (ctx->r3 == 0) {
        // 0x8007AFD4: addiu       $t8, $zero, 0x3C
        ctx->r24 = ADD32(0, 0X3C);
            goto L_8007AFE4;
    }
    // 0x8007AFD4: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x8007AFD8: addiu       $t7, $zero, -0x3C
    ctx->r15 = ADD32(0, -0X3C);
    // 0x8007AFDC: jr          $ra
    // 0x8007AFE0: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8007AFE0: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_8007AFE4:
    // 0x8007AFE4: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_8007AFE8:
    // 0x8007AFE8: jr          $ra
    // 0x8007AFEC: nop

    return;
    // 0x8007AFEC: nop

;}
RECOMP_FUNC void func_8007AFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007AFF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007AFF8: jal         0x8007D0F8
    // 0x8007AFFC: nop

    func_8007D0F8(rdram, ctx);
        goto after_0;
    // 0x8007AFFC: nop

    after_0:
    // 0x8007B000: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007B004: lbu         $v0, 0x5234($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5234);
    // 0x8007B008: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B00C: beq         $v0, $zero, L_8007B02C
    if (ctx->r2 == 0) {
        // 0x8007B010: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8007B02C;
    }
    // 0x8007B010: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007B014: beq         $v0, $at, L_8007B06C
    if (ctx->r2 == ctx->r1) {
        // 0x8007B018: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8007B06C;
    }
    // 0x8007B018: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007B01C: beq         $v0, $at, L_8007B150
    if (ctx->r2 == ctx->r1) {
        // 0x8007B020: nop
    
            goto L_8007B150;
    }
    // 0x8007B020: nop

    // 0x8007B024: b           L_8007B170
    // 0x8007B028: nop

        goto L_8007B170;
    // 0x8007B028: nop

L_8007B02C:
    // 0x8007B02C: lhu         $a0, 0x3A42($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A42);
    // 0x8007B030: jal         0x8007BC2C
    // 0x8007B034: nop

    func_8007BC2C(rdram, ctx);
        goto after_1;
    // 0x8007B034: nop

    after_1:
    // 0x8007B038: jal         0x8028D4B8
    // 0x8007B03C: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_2;
    // 0x8007B03C: nop

    after_2:
    // 0x8007B040: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007B044: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B048: lh          $t6, 0x7C2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X7C2);
    // 0x8007B04C: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8007B050: bne         $t6, $zero, L_8007B170
    if (ctx->r14 != 0) {
        // 0x8007B054: nop
    
            goto L_8007B170;
    }
    // 0x8007B054: nop

    // 0x8007B058: lbu         $t7, 0x5234($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X5234);
    // 0x8007B05C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B060: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8007B064: b           L_8007B170
    // 0x8007B068: sb          $t8, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r24;
        goto L_8007B170;
    // 0x8007B068: sb          $t8, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r24;
L_8007B06C:
    // 0x8007B06C: jal         0x8007C430
    // 0x8007B070: nop

    func_8007C430(rdram, ctx);
        goto after_3;
    // 0x8007B070: nop

    after_3:
    // 0x8007B074: jal         0x8028D4B8
    // 0x8007B078: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_4;
    // 0x8007B078: nop

    after_4:
    // 0x8007B07C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8007B080: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007B084: lhu         $t0, 0x3A42($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3A42);
    // 0x8007B088: lh          $t9, 0x3A50($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X3A50);
    // 0x8007B08C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007B090: bne         $t9, $t0, L_8007B0D8
    if (ctx->r25 != ctx->r8) {
        // 0x8007B094: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_8007B0D8;
    }
    // 0x8007B094: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007B098: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007B09C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B0A0: lh          $t1, 0x7C4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X7C4);
    // 0x8007B0A4: nop

    // 0x8007B0A8: bne         $t1, $zero, L_8007B170
    if (ctx->r9 != 0) {
        // 0x8007B0AC: nop
    
            goto L_8007B170;
    }
    // 0x8007B0AC: nop

    // 0x8007B0B0: jal         0x80021960
    // 0x8007B0B4: nop

    func_80021960(rdram, ctx);
        goto after_5;
    // 0x8007B0B4: nop

    after_5:
    // 0x8007B0B8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007B0BC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B0C0: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8007B0C4: lbu         $t2, 0x9A5($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X9A5);
    // 0x8007B0C8: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8007B0CC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007B0D0: b           L_8007B170
    // 0x8007B0D4: sb          $t3, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r11;
        goto L_8007B170;
    // 0x8007B0D4: sb          $t3, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r11;
L_8007B0D8:
    // 0x8007B0D8: lhu         $t4, 0x9AC($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X9AC);
    // 0x8007B0DC: nop

    // 0x8007B0E0: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8007B0E4: bne         $t5, $zero, L_8007B128
    if (ctx->r13 != 0) {
        // 0x8007B0E8: nop
    
            goto L_8007B128;
    }
    // 0x8007B0E8: nop

    // 0x8007B0EC: lhu         $t6, 0x9B6($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X9B6);
    // 0x8007B0F0: nop

    // 0x8007B0F4: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8007B0F8: bne         $t7, $zero, L_8007B128
    if (ctx->r15 != 0) {
        // 0x8007B0FC: nop
    
            goto L_8007B128;
    }
    // 0x8007B0FC: nop

    // 0x8007B100: lhu         $t8, 0x9C0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X9C0);
    // 0x8007B104: nop

    // 0x8007B108: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x8007B10C: bne         $t9, $zero, L_8007B128
    if (ctx->r25 != 0) {
        // 0x8007B110: nop
    
            goto L_8007B128;
    }
    // 0x8007B110: nop

    // 0x8007B114: lhu         $t0, 0x9CA($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9CA);
    // 0x8007B118: nop

    // 0x8007B11C: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x8007B120: beq         $t1, $zero, L_8007B170
    if (ctx->r9 == 0) {
        // 0x8007B124: nop
    
            goto L_8007B170;
    }
    // 0x8007B124: nop

L_8007B128:
    // 0x8007B128: jal         0x80021960
    // 0x8007B12C: nop

    func_80021960(rdram, ctx);
        goto after_6;
    // 0x8007B12C: nop

    after_6:
    // 0x8007B130: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007B134: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B138: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8007B13C: lbu         $t2, 0x9A5($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X9A5);
    // 0x8007B140: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8007B144: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007B148: b           L_8007B170
    // 0x8007B14C: sb          $t3, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r11;
        goto L_8007B170;
    // 0x8007B14C: sb          $t3, 0x9A5($at)
    MEM_B(0X9A5, ctx->r1) = ctx->r11;
L_8007B150:
    // 0x8007B150: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007B154: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B158: lh          $t4, 0x7CA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X7CA);
    // 0x8007B15C: nop

    // 0x8007B160: beq         $t4, $zero, L_8007B170
    if (ctx->r12 == 0) {
        // 0x8007B164: nop
    
            goto L_8007B170;
    }
    // 0x8007B164: nop

    // 0x8007B168: jal         0x8029BEF4
    // 0x8007B16C: sb          $zero, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = 0;
    LOOKUP_FUNC(0x8029BEF4)(rdram, ctx);
        goto after_7;
    // 0x8007B16C: sb          $zero, 0x7C1($v0)
    MEM_B(0X7C1, ctx->r2) = 0;
    after_7:
L_8007B170:
    // 0x8007B170: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8007B174: lbu         $t5, 0x38DF($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X38DF);
    // 0x8007B178: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8007B17C: beq         $t5, $at, L_8007B18C
    if (ctx->r13 == ctx->r1) {
        // 0x8007B180: nop
    
            goto L_8007B18C;
    }
    // 0x8007B180: nop

    // 0x8007B184: jal         0x8029566C
    // 0x8007B188: nop

    LOOKUP_FUNC(0x8029566C)(rdram, ctx);
        goto after_8;
    // 0x8007B188: nop

    after_8:
L_8007B18C:
    // 0x8007B18C: jal         0x8007CFC8
    // 0x8007B190: nop

    func_8007CFC8(rdram, ctx);
        goto after_9;
    // 0x8007B190: nop

    after_9:
    // 0x8007B194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B19C: jr          $ra
    // 0x8007B1A0: nop

    return;
    // 0x8007B1A0: nop

;}
RECOMP_FUNC void func_8007B1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B1A4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8007B1A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007B1AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B1B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B1B4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B1B8: jal         0x80293374
    // 0x8007B1BC: swc1        $f4, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f4.u32l;
    LOOKUP_FUNC(0x80293374)(rdram, ctx);
        goto after_0;
    // 0x8007B1BC: swc1        $f4, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x8007B1C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8007B1C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B1C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8007B1CC: sb          $t6, 0x38E6($at)
    MEM_B(0X38E6, ctx->r1) = ctx->r14;
    // 0x8007B1D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B1D4: swc1        $f0, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f0.u32l;
    // 0x8007B1D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B1DC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B1E0: swc1        $f0, 0x38EC($at)
    MEM_W(0X38EC, ctx->r1) = ctx->f0.u32l;
    // 0x8007B1E4: addiu       $v0, $v0, 0x38FC
    ctx->r2 = ADD32(ctx->r2, 0X38FC);
    // 0x8007B1E8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8007B1EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B1F0: swc1        $f0, 0x38F4($at)
    MEM_W(0X38F4, ctx->r1) = ctx->f0.u32l;
    // 0x8007B1F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B1F8: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007B1FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B200: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8007B204: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8007B208: swc1        $f6, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f6.u32l;
    // 0x8007B20C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007B210: beq         $t7, $at, L_8007B21C
    if (ctx->r15 == ctx->r1) {
        // 0x8007B214: addiu       $t8, $zero, 0x50
        ctx->r24 = ADD32(0, 0X50);
            goto L_8007B21C;
    }
    // 0x8007B214: addiu       $t8, $zero, 0x50
    ctx->r24 = ADD32(0, 0X50);
    // 0x8007B218: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_8007B21C:
    // 0x8007B21C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B220: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B224: jr          $ra
    // 0x8007B228: nop

    return;
    // 0x8007B228: nop

;}
RECOMP_FUNC void func_8007B22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B22C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B234: jal         0x8007B1A4
    // 0x8007B238: nop

    func_8007B1A4(rdram, ctx);
        goto after_0;
    // 0x8007B238: nop

    after_0:
    // 0x8007B23C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007B240: lhu         $a0, 0x3A42($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A42);
    // 0x8007B244: jal         0x8007BC2C
    // 0x8007B248: nop

    func_8007BC2C(rdram, ctx);
        goto after_1;
    // 0x8007B248: nop

    after_1:
    // 0x8007B24C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007B250: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x8007B254: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8007B258: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B25C: addiu       $v0, $v0, 0x38F8
    ctx->r2 = ADD32(ctx->r2, 0X38F8);
    // 0x8007B260: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007B264: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8007B268: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x8007B26C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007B270: bne         $t6, $at, L_8007B3A8
    if (ctx->r14 != ctx->r1) {
        // 0x8007B274: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_8007B3A8;
    }
    // 0x8007B274: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8007B278: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007B27C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8007B280: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8007B284: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8007B288: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x8007B28C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007B290: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8007B294: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B298: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8007B29C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8007B2A0: bc1f        L_8007B2C4
    if (!c1cs) {
        // 0x8007B2A4: addiu       $v0, $v0, 0x3AC6
        ctx->r2 = ADD32(ctx->r2, 0X3AC6);
            goto L_8007B2C4;
    }
    // 0x8007B2A4: addiu       $v0, $v0, 0x3AC6
    ctx->r2 = ADD32(ctx->r2, 0X3AC6);
    // 0x8007B2A8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8007B2AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007B2B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B2B4: swc1        $f0, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f0.u32l;
    // 0x8007B2B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B2BC: b           L_8007B2D8
    // 0x8007B2C0: swc1        $f0, 0x38EC($at)
    MEM_W(0X38EC, ctx->r1) = ctx->f0.u32l;
        goto L_8007B2D8;
    // 0x8007B2C0: swc1        $f0, 0x38EC($at)
    MEM_W(0X38EC, ctx->r1) = ctx->f0.u32l;
L_8007B2C4:
    // 0x8007B2C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007B2C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B2CC: swc1        $f0, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f0.u32l;
    // 0x8007B2D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B2D4: swc1        $f0, 0x38EC($at)
    MEM_W(0X38EC, ctx->r1) = ctx->f0.u32l;
L_8007B2D8:
    // 0x8007B2D8: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8007B2DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B2E0: bne         $t8, $at, L_8007B300
    if (ctx->r24 != ctx->r1) {
        // 0x8007B2E4: nop
    
            goto L_8007B300;
    }
    // 0x8007B2E4: nop

    // 0x8007B2E8: jal         0x80079DB8
    // 0x8007B2EC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_80079DB8(rdram, ctx);
        goto after_2;
    // 0x8007B2EC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_2:
    // 0x8007B2F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007B2F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B2F8: b           L_8007B308
    // 0x8007B2FC: sb          $t9, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r25;
        goto L_8007B308;
    // 0x8007B2FC: sb          $t9, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r25;
L_8007B300:
    // 0x8007B300: jal         0x80079DB8
    // 0x8007B304: nop

    func_80079DB8(rdram, ctx);
        goto after_3;
    // 0x8007B304: nop

    after_3:
L_8007B308:
    // 0x8007B308: jal         0x8001B80C
    // 0x8007B30C: nop

    func_8001B80C(rdram, ctx);
        goto after_4;
    // 0x8007B30C: nop

    after_4:
    // 0x8007B310: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B314: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    // 0x8007B318: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B31C: sb          $zero, 0x38E4($at)
    MEM_B(0X38E4, ctx->r1) = 0;
    // 0x8007B320: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007B324: lhu         $t0, 0xB72($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB72);
    // 0x8007B328: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B32C: sb          $zero, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = 0;
    // 0x8007B330: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8007B334: beq         $at, $zero, L_8007B348
    if (ctx->r1 == 0) {
        // 0x8007B338: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8007B348;
    }
    // 0x8007B338: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8007B33C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B340: b           L_8007B3B0
    // 0x8007B344: sb          $zero, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = 0;
        goto L_8007B3B0;
    // 0x8007B344: sb          $zero, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = 0;
L_8007B348:
    // 0x8007B348: lbu         $t1, 0xB65($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0XB65);
    // 0x8007B34C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8007B350: bne         $t1, $zero, L_8007B37C
    if (ctx->r9 != 0) {
        // 0x8007B354: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8007B37C;
    }
    // 0x8007B354: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8007B358: lw          $t2, 0xB24($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XB24);
    // 0x8007B35C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B360: lw          $t3, 0xC8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC8);
    // 0x8007B364: nop

    // 0x8007B368: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x8007B36C: nop

    // 0x8007B370: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8007B374: b           L_8007B3B0
    // 0x8007B378: sb          $t5, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = ctx->r13;
        goto L_8007B3B0;
    // 0x8007B378: sb          $t5, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = ctx->r13;
L_8007B37C:
    // 0x8007B37C: lw          $t6, 0xB24($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB24);
    // 0x8007B380: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B384: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8007B388: nop

    // 0x8007B38C: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8007B390: nop

    // 0x8007B394: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x8007B398: nop

    // 0x8007B39C: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8007B3A0: b           L_8007B3B0
    // 0x8007B3A4: sb          $t0, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = ctx->r8;
        goto L_8007B3B0;
    // 0x8007B3A4: sb          $t0, 0x39CA($at)
    MEM_B(0X39CA, ctx->r1) = ctx->r8;
L_8007B3A8:
    // 0x8007B3A8: jal         0x8007C608
    // 0x8007B3AC: nop

    func_8007C608(rdram, ctx);
        goto after_5;
    // 0x8007B3AC: nop

    after_5:
L_8007B3B0:
    // 0x8007B3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B3B8: jr          $ra
    // 0x8007B3BC: nop

    return;
    // 0x8007B3BC: nop

;}
RECOMP_FUNC void func_8007B3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B3C8: jal         0x8007C4A0
    // 0x8007B3CC: nop

    func_8007C4A0(rdram, ctx);
        goto after_0;
    // 0x8007B3CC: nop

    after_0:
    // 0x8007B3D0: jal         0x8028D4B8
    // 0x8007B3D4: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_1;
    // 0x8007B3D4: nop

    after_1:
    // 0x8007B3D8: jal         0x8007C8A4
    // 0x8007B3DC: nop

    func_8007C8A4(rdram, ctx);
        goto after_2;
    // 0x8007B3DC: nop

    after_2:
    // 0x8007B3E0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007B3E4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007B3E8: lhu         $t7, 0x3A42($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3A42);
    // 0x8007B3EC: lhu         $t6, 0x3A46($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3A46);
    // 0x8007B3F0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007B3F4: bne         $t6, $t7, L_8007B454
    if (ctx->r14 != ctx->r15) {
        // 0x8007B3F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007B454;
    }
    // 0x8007B3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B3FC: lh          $t8, -0x2FAC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2FAC);
    // 0x8007B400: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B404: bne         $t8, $zero, L_8007B450
    if (ctx->r24 != 0) {
        // 0x8007B408: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_8007B450;
    }
    // 0x8007B408: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007B40C: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x8007B410: sh          $zero, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = 0;
    // 0x8007B414: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007B418: bne         $t9, $at, L_8007B434
    if (ctx->r25 != ctx->r1) {
        // 0x8007B41C: nop
    
            goto L_8007B434;
    }
    // 0x8007B41C: nop

    // 0x8007B420: jal         0x80015BC0
    // 0x8007B424: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007B424: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x8007B428: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x8007B42C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B430: sh          $t0, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = ctx->r8;
L_8007B434:
    // 0x8007B434: jal         0x802A13CC
    // 0x8007B438: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_4;
    // 0x8007B438: nop

    after_4:
    // 0x8007B43C: jal         0x80021960
    // 0x8007B440: nop

    func_80021960(rdram, ctx);
        goto after_5;
    // 0x8007B440: nop

    after_5:
    // 0x8007B444: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8007B448: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B44C: sb          $t1, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r9;
L_8007B450:
    // 0x8007B450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B454:
    // 0x8007B454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B458: jr          $ra
    // 0x8007B45C: nop

    return;
    // 0x8007B45C: nop

;}
RECOMP_FUNC void func_8007B460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B460: jr          $ra
    // 0x8007B464: nop

    return;
    // 0x8007B464: nop

;}
RECOMP_FUNC void func_8007B468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B46C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B470: jal         0x8028D4B8
    // 0x8007B474: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_0;
    // 0x8007B474: nop

    after_0:
    // 0x8007B478: jal         0x8007CACC
    // 0x8007B47C: nop

    func_8007CACC(rdram, ctx);
        goto after_1;
    // 0x8007B47C: nop

    after_1:
    // 0x8007B480: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007B484: lhu         $t6, 0x3934($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3934);
    // 0x8007B488: nop

    // 0x8007B48C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8007B490: beq         $t7, $zero, L_8007B4A8
    if (ctx->r15 == 0) {
        // 0x8007B494: nop
    
            goto L_8007B4A8;
    }
    // 0x8007B494: nop

    // 0x8007B498: jal         0x8007CF64
    // 0x8007B49C: nop

    func_8007CF64(rdram, ctx);
        goto after_2;
    // 0x8007B49C: nop

    after_2:
    // 0x8007B4A0: b           L_8007B4E8
    // 0x8007B4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007B4E8;
    // 0x8007B4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B4A8:
    // 0x8007B4A8: jal         0x8007C5CC
    // 0x8007B4AC: nop

    func_8007C5CC(rdram, ctx);
        goto after_3;
    // 0x8007B4AC: nop

    after_3:
    // 0x8007B4B0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007B4B4: lb          $t8, 0x38E2($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X38E2);
    // 0x8007B4B8: nop

    // 0x8007B4BC: blez        $t8, L_8007B4E8
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8007B4C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007B4E8;
    }
    // 0x8007B4C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B4C4: jal         0x8001B80C
    // 0x8007B4C8: nop

    func_8001B80C(rdram, ctx);
        goto after_4;
    // 0x8007B4C8: nop

    after_4:
    // 0x8007B4CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B4D0: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    // 0x8007B4D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B4D8: sb          $zero, 0x38E4($at)
    MEM_B(0X38E4, ctx->r1) = 0;
    // 0x8007B4DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B4E0: sb          $zero, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = 0;
    // 0x8007B4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B4E8:
    // 0x8007B4E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B4EC: jr          $ra
    // 0x8007B4F0: nop

    return;
    // 0x8007B4F0: nop

;}
RECOMP_FUNC void func_8007B4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B4F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B4F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B4FC: jal         0x8028D4B8
    // 0x8007B500: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_0;
    // 0x8007B500: nop

    after_0:
    // 0x8007B504: jal         0x8007CACC
    // 0x8007B508: nop

    func_8007CACC(rdram, ctx);
        goto after_1;
    // 0x8007B508: nop

    after_1:
    // 0x8007B50C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007B510: lhu         $t6, 0x3934($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3934);
    // 0x8007B514: nop

    // 0x8007B518: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8007B51C: beq         $t7, $zero, L_8007B534
    if (ctx->r15 == 0) {
        // 0x8007B520: nop
    
            goto L_8007B534;
    }
    // 0x8007B520: nop

    // 0x8007B524: jal         0x8007CF64
    // 0x8007B528: nop

    func_8007CF64(rdram, ctx);
        goto after_2;
    // 0x8007B528: nop

    after_2:
    // 0x8007B52C: b           L_8007B5EC
    // 0x8007B530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007B5EC;
    // 0x8007B530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B534:
    // 0x8007B534: jal         0x8007C5CC
    // 0x8007B538: nop

    func_8007C5CC(rdram, ctx);
        goto after_3;
    // 0x8007B538: nop

    after_3:
    // 0x8007B53C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007B540: lb          $t8, 0x38E2($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X38E2);
    // 0x8007B544: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007B548: bne         $t8, $zero, L_8007B568
    if (ctx->r24 != 0) {
        // 0x8007B54C: nop
    
            goto L_8007B568;
    }
    // 0x8007B54C: nop

    // 0x8007B550: jal         0x8007C728
    // 0x8007B554: nop

    func_8007C728(rdram, ctx);
        goto after_4;
    // 0x8007B554: nop

    after_4:
    // 0x8007B558: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x8007B55C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B560: b           L_8007B5E8
    // 0x8007B564: sb          $t9, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r25;
        goto L_8007B5E8;
    // 0x8007B564: sb          $t9, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r25;
L_8007B568:
    // 0x8007B568: lh          $t0, 0x392E($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X392E);
    // 0x8007B56C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B570: blez        $t0, L_8007B5B4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8007B574: addiu       $v0, $v0, 0x38E4
        ctx->r2 = ADD32(ctx->r2, 0X38E4);
            goto L_8007B5B4;
    }
    // 0x8007B574: addiu       $v0, $v0, 0x38E4
    ctx->r2 = ADD32(ctx->r2, 0X38E4);
    // 0x8007B578: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B57C: addiu       $v0, $v0, 0x38E4
    ctx->r2 = ADD32(ctx->r2, 0X38E4);
    // 0x8007B580: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8007B584: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B588: bne         $t1, $zero, L_8007B5A0
    if (ctx->r9 != 0) {
        // 0x8007B58C: nop
    
            goto L_8007B5A0;
    }
    // 0x8007B58C: nop

    // 0x8007B590: jal         0x8007C378
    // 0x8007B594: nop

    func_8007C378(rdram, ctx);
        goto after_5;
    // 0x8007B594: nop

    after_5:
    // 0x8007B598: b           L_8007B5EC
    // 0x8007B59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007B5EC;
    // 0x8007B59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B5A0:
    // 0x8007B5A0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8007B5A4: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    // 0x8007B5A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B5AC: b           L_8007B5E8
    // 0x8007B5B0: sb          $zero, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = 0;
        goto L_8007B5E8;
    // 0x8007B5B0: sb          $zero, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = 0;
L_8007B5B4:
    // 0x8007B5B4: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007B5B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B5BC: bne         $t2, $at, L_8007B5D4
    if (ctx->r10 != ctx->r1) {
        // 0x8007B5C0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8007B5D4;
    }
    // 0x8007B5C0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007B5C4: jal         0x8007C378
    // 0x8007B5C8: nop

    func_8007C378(rdram, ctx);
        goto after_6;
    // 0x8007B5C8: nop

    after_6:
    // 0x8007B5CC: b           L_8007B5EC
    // 0x8007B5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007B5EC;
    // 0x8007B5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B5D4:
    // 0x8007B5D4: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007B5D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B5DC: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    // 0x8007B5E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B5E4: sb          $zero, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = 0;
L_8007B5E8:
    // 0x8007B5E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B5EC:
    // 0x8007B5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B5F0: jr          $ra
    // 0x8007B5F4: nop

    return;
    // 0x8007B5F4: nop

;}
RECOMP_FUNC void func_8007B5F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B5F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B600: jal         0x8007CACC
    // 0x8007B604: nop

    func_8007CACC(rdram, ctx);
        goto after_0;
    // 0x8007B604: nop

    after_0:
    // 0x8007B608: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007B60C: lhu         $t6, 0x3934($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3934);
    // 0x8007B610: nop

    // 0x8007B614: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8007B618: beq         $t7, $zero, L_8007B630
    if (ctx->r15 == 0) {
        // 0x8007B61C: nop
    
            goto L_8007B630;
    }
    // 0x8007B61C: nop

    // 0x8007B620: jal         0x8007C608
    // 0x8007B624: nop

    func_8007C608(rdram, ctx);
        goto after_1;
    // 0x8007B624: nop

    after_1:
    // 0x8007B628: b           L_8007B6B0
    // 0x8007B62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007B6B0;
    // 0x8007B62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B630:
    // 0x8007B630: jal         0x8007C5CC
    // 0x8007B634: nop

    func_8007C5CC(rdram, ctx);
        goto after_2;
    // 0x8007B634: nop

    after_2:
    // 0x8007B638: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007B63C: lb          $t8, 0x38E2($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X38E2);
    // 0x8007B640: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8007B644: blez        $t8, L_8007B69C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8007B648: nop
    
            goto L_8007B69C;
    }
    // 0x8007B648: nop

    // 0x8007B64C: lh          $t9, 0x392E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X392E);
    // 0x8007B650: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B654: blez        $t9, L_8007B684
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8007B658: addiu       $v0, $v0, 0x38E4
        ctx->r2 = ADD32(ctx->r2, 0X38E4);
            goto L_8007B684;
    }
    // 0x8007B658: addiu       $v0, $v0, 0x38E4
    ctx->r2 = ADD32(ctx->r2, 0X38E4);
    // 0x8007B65C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B660: addiu       $v0, $v0, 0x38E4
    ctx->r2 = ADD32(ctx->r2, 0X38E4);
    // 0x8007B664: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8007B668: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B66C: bne         $t0, $at, L_8007B69C
    if (ctx->r8 != ctx->r1) {
        // 0x8007B670: nop
    
            goto L_8007B69C;
    }
    // 0x8007B670: nop

    // 0x8007B674: jal         0x8007C590
    // 0x8007B678: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_8007C590(rdram, ctx);
        goto after_3;
    // 0x8007B678: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_3:
    // 0x8007B67C: b           L_8007B69C
    // 0x8007B680: nop

        goto L_8007B69C;
    // 0x8007B680: nop

L_8007B684:
    // 0x8007B684: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8007B688: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007B68C: bne         $t1, $zero, L_8007B69C
    if (ctx->r9 != 0) {
        // 0x8007B690: nop
    
            goto L_8007B69C;
    }
    // 0x8007B690: nop

    // 0x8007B694: jal         0x8007C590
    // 0x8007B698: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    func_8007C590(rdram, ctx);
        goto after_4;
    // 0x8007B698: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    after_4:
L_8007B69C:
    // 0x8007B69C: jal         0x8007C4A0
    // 0x8007B6A0: nop

    func_8007C4A0(rdram, ctx);
        goto after_5;
    // 0x8007B6A0: nop

    after_5:
    // 0x8007B6A4: jal         0x8028D4B8
    // 0x8007B6A8: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_6;
    // 0x8007B6A8: nop

    after_6:
    // 0x8007B6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B6B0:
    // 0x8007B6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B6B4: jr          $ra
    // 0x8007B6B8: nop

    return;
    // 0x8007B6B8: nop

;}
RECOMP_FUNC void func_8007B6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B6BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B6C4: jal         0x8028D4B8
    // 0x8007B6C8: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_0;
    // 0x8007B6C8: nop

    after_0:
    // 0x8007B6CC: jal         0x8007CACC
    // 0x8007B6D0: nop

    func_8007CACC(rdram, ctx);
        goto after_1;
    // 0x8007B6D0: nop

    after_1:
    // 0x8007B6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B6DC: jr          $ra
    // 0x8007B6E0: nop

    return;
    // 0x8007B6E0: nop

;}
RECOMP_FUNC void func_8007B6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B6E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B6E8: lhu         $v0, 0x3A4C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3A4C);
    // 0x8007B6EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B6F0: beq         $v0, $zero, L_8007B73C
    if (ctx->r2 == 0) {
        // 0x8007B6F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007B73C;
    }
    // 0x8007B6F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B6F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007B6FC: bne         $v0, $at, L_8007B730
    if (ctx->r2 != ctx->r1) {
        // 0x8007B700: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_8007B730;
    }
    // 0x8007B700: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x8007B704: jal         0x80015BC0
    // 0x8007B708: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007B708: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8007B70C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007B710: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8007B714: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007B718: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007B71C: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    // 0x8007B720: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B724: lhu         $v0, 0x3A4C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3A4C);
    // 0x8007B728: nop

    // 0x8007B72C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
L_8007B730:
    // 0x8007B730: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B734: b           L_8007BA5C
    // 0x8007B738: sh          $t7, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = ctx->r15;
        goto L_8007BA5C;
    // 0x8007B738: sh          $t7, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = ctx->r15;
L_8007B73C:
    // 0x8007B73C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007B740: lh          $t8, -0x2FA6($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2FA6);
    // 0x8007B744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007B748: bne         $t8, $at, L_8007BA54
    if (ctx->r24 != ctx->r1) {
        // 0x8007B74C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8007BA54;
    }
    // 0x8007B74C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007B750: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8007B754: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8007B758: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8007B75C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8007B760: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8007B764:
    // 0x8007B764: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007B76C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8007B770: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x8007B774: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8007B778: mflo        $t9
    ctx->r25 = lo;
    // 0x8007B77C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8007B780: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8007B784: bne         $at, $zero, L_8007B764
    if (ctx->r1 != 0) {
        // 0x8007B788: sb          $zero, 0x2148($t1)
        MEM_B(0X2148, ctx->r9) = 0;
            goto L_8007B764;
    }
    // 0x8007B788: sb          $zero, 0x2148($t1)
    MEM_B(0X2148, ctx->r9) = 0;
    // 0x8007B78C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8007B790: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x8007B794: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007B798: beq         $t3, $at, L_8007B978
    if (ctx->r11 == ctx->r1) {
        // 0x8007B79C: lui         $t1, 0x802C
        ctx->r9 = S32(0X802C << 16);
            goto L_8007B978;
    }
    // 0x8007B79C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8007B7A0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007B7A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007B7A8: lhu         $v0, 0x3A40($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3A40);
    // 0x8007B7AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B7B0: bne         $v0, $zero, L_8007B7C8
    if (ctx->r2 != 0) {
        // 0x8007B7B4: swc1        $f4, 0x38F4($at)
        MEM_W(0X38F4, ctx->r1) = ctx->f4.u32l;
            goto L_8007B7C8;
    }
    // 0x8007B7B4: swc1        $f4, 0x38F4($at)
    MEM_W(0X38F4, ctx->r1) = ctx->f4.u32l;
    // 0x8007B7B8: addiu       $t4, $zero, 0x72
    ctx->r12 = ADD32(0, 0X72);
    // 0x8007B7BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B7C0: b           L_8007B7D4
    // 0x8007B7C4: sh          $t4, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r12;
        goto L_8007B7D4;
    // 0x8007B7C4: sh          $t4, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r12;
L_8007B7C8:
    // 0x8007B7C8: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x8007B7CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B7D0: sh          $t5, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r13;
L_8007B7D4:
    // 0x8007B7D4: jal         0x8002198C
    // 0x8007B7D8: nop

    func_8002198C(rdram, ctx);
        goto after_1;
    // 0x8007B7D8: nop

    after_1:
    // 0x8007B7DC: jal         0x802936B0
    // 0x8007B7E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x802936B0)(rdram, ctx);
        goto after_2;
    // 0x8007B7E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8007B7E4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007B7E8: lbu         $a0, 0x39CA($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39CA);
    // 0x8007B7EC: jal         0x80296524
    // 0x8007B7F0: nop

    LOOKUP_FUNC(0x80296524)(rdram, ctx);
        goto after_3;
    // 0x8007B7F0: nop

    after_3:
    // 0x8007B7F4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007B7F8: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B7FC: lbu         $t6, 0x754($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X754);
    // 0x8007B800: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B804: andi        $t7, $t6, 0xFE
    ctx->r15 = ctx->r14 & 0XFE;
    // 0x8007B808: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    // 0x8007B80C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007B810: lhu         $t8, 0xB78($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB78);
    // 0x8007B814: sb          $zero, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = 0;
    // 0x8007B818: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B81C: beq         $t8, $zero, L_8007B958
    if (ctx->r24 == 0) {
        // 0x8007B820: sb          $zero, 0x38DF($at)
        MEM_B(0X38DF, ctx->r1) = 0;
            goto L_8007B958;
    }
    // 0x8007B820: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x8007B824: jal         0x8028E770
    // 0x8007B828: nop

    LOOKUP_FUNC(0x8028E770)(rdram, ctx);
        goto after_4;
    // 0x8007B828: nop

    after_4:
    // 0x8007B82C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B830: lwc1        $f6, 0x3A54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3A54);
    // 0x8007B834: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B838: swc1        $f6, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f6.u32l;
    // 0x8007B83C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B840: lwc1        $f8, 0x3A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3A58);
    // 0x8007B844: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B848: swc1        $f8, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f8.u32l;
    // 0x8007B84C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B850: lwc1        $f10, 0x3A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3A5C);
    // 0x8007B854: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B858: swc1        $f10, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f10.u32l;
    // 0x8007B85C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B860: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8007B864: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007B868: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007B86C: lwc1        $f16, 0x3A60($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3A60);
    // 0x8007B870: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8007B874: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8007B878: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007B87C: nop

    // 0x8007B880: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8007B884: beq         $t0, $zero, L_8007B8D0
    if (ctx->r8 == 0) {
        // 0x8007B888: nop
    
            goto L_8007B8D0;
    }
    // 0x8007B888: nop

    // 0x8007B88C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B890: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007B894: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8007B898: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007B89C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8007B8A0: nop

    // 0x8007B8A4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8007B8A8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8007B8AC: nop

    // 0x8007B8B0: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8007B8B4: bne         $t0, $zero, L_8007B8C8
    if (ctx->r8 != 0) {
        // 0x8007B8B8: nop
    
            goto L_8007B8C8;
    }
    // 0x8007B8B8: nop

    // 0x8007B8BC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8007B8C0: b           L_8007B8E0
    // 0x8007B8C4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8007B8E0;
    // 0x8007B8C4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8007B8C8:
    // 0x8007B8C8: b           L_8007B8E0
    // 0x8007B8CC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8007B8E0;
    // 0x8007B8CC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_8007B8D0:
    // 0x8007B8D0: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8007B8D4: nop

    // 0x8007B8D8: bltz        $t0, L_8007B8C8
    if (SIGNED(ctx->r8) < 0) {
        // 0x8007B8DC: nop
    
            goto L_8007B8C8;
    }
    // 0x8007B8DC: nop

L_8007B8E0:
    // 0x8007B8E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B8E4: sb          $t0, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = ctx->r8;
    // 0x8007B8E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B8EC: lwc1        $f4, 0x3A64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3A64);
    // 0x8007B8F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B8F4: swc1        $f4, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f4.u32l;
    // 0x8007B8F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B8FC: lwc1        $f6, 0x3A68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3A68);
    // 0x8007B900: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B904: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
    // 0x8007B908: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B90C: lwc1        $f8, 0x3A6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3A6C);
    // 0x8007B910: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8007B914: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B918: jal         0x8005B6F0
    // 0x8007B91C: swc1        $f8, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f8.u32l;
    func_8005B6F0(rdram, ctx);
        goto after_5;
    // 0x8007B91C: swc1        $f8, 0x699C($at)
    MEM_W(0X699C, ctx->r1) = ctx->f8.u32l;
    after_5:
    // 0x8007B920: jal         0x80002F20
    // 0x8007B924: nop

    func_80002F20(rdram, ctx);
        goto after_6;
    // 0x8007B924: nop

    after_6:
    // 0x8007B928: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007B92C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x8007B930: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007B934: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8007B938: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x8007B93C: swc1        $f10, 0x1B94($a0)
    MEM_W(0X1B94, ctx->r4) = ctx->f10.u32l;
    // 0x8007B940: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8007B944: nop

    // 0x8007B948: swc1        $f16, 0x1B98($a0)
    MEM_W(0X1B98, ctx->r4) = ctx->f16.u32l;
    // 0x8007B94C: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8007B950: b           L_8007B968
    // 0x8007B954: swc1        $f18, 0x1B9C($a0)
    MEM_W(0X1B9C, ctx->r4) = ctx->f18.u32l;
        goto L_8007B968;
    // 0x8007B954: swc1        $f18, 0x1B9C($a0)
    MEM_W(0X1B9C, ctx->r4) = ctx->f18.u32l;
L_8007B958:
    // 0x8007B958: jal         0x8007BC04
    // 0x8007B95C: nop

    func_8007BC04(rdram, ctx);
        goto after_7;
    // 0x8007B95C: nop

    after_7:
    // 0x8007B960: jal         0x8028E6A0
    // 0x8007B964: nop

    LOOKUP_FUNC(0x8028E6A0)(rdram, ctx);
        goto after_8;
    // 0x8007B964: nop

    after_8:
L_8007B968:
    // 0x8007B968: jal         0x8028D4B8
    // 0x8007B96C: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_9;
    // 0x8007B96C: nop

    after_9:
    // 0x8007B970: b           L_8007BA60
    // 0x8007B974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007BA60;
    // 0x8007B974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007B978:
    // 0x8007B978: lbu         $t1, 0x39F0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39F0);
    // 0x8007B97C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007B980: bne         $t1, $zero, L_8007BA10
    if (ctx->r9 != 0) {
        // 0x8007B984: sb          $zero, 0x38DF($at)
        MEM_B(0X38DF, ctx->r1) = 0;
            goto L_8007BA10;
    }
    // 0x8007B984: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x8007B988: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007B98C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007B990: lhu         $t2, 0x10($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X10);
    // 0x8007B994: nop

    // 0x8007B998: andi        $t3, $t2, 0x40
    ctx->r11 = ctx->r10 & 0X40;
    // 0x8007B99C: bne         $t3, $zero, L_8007B9B8
    if (ctx->r11 != 0) {
        // 0x8007B9A0: nop
    
            goto L_8007B9B8;
    }
    // 0x8007B9A0: nop

    // 0x8007B9A4: lhu         $t4, 0xAA4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XAA4);
    // 0x8007B9A8: nop

    // 0x8007B9AC: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x8007B9B0: beq         $t5, $zero, L_8007BA00
    if (ctx->r13 == 0) {
        // 0x8007B9B4: nop
    
            goto L_8007BA00;
    }
    // 0x8007B9B4: nop

L_8007B9B8:
    // 0x8007B9B8: jal         0x80047B44
    // 0x8007B9BC: nop

    func_80047B44(rdram, ctx);
        goto after_10;
    // 0x8007B9BC: nop

    after_10:
    // 0x8007B9C0: beq         $v0, $zero, L_8007BA00
    if (ctx->r2 == 0) {
        // 0x8007B9C4: nop
    
            goto L_8007BA00;
    }
    // 0x8007B9C4: nop

    // 0x8007B9C8: jal         0x800603F0
    // 0x8007B9CC: nop

    func_800603F0(rdram, ctx);
        goto after_11;
    // 0x8007B9CC: nop

    after_11:
    // 0x8007B9D0: jal         0x80020270
    // 0x8007B9D4: nop

    func_80020270(rdram, ctx);
        goto after_12;
    // 0x8007B9D4: nop

    after_12:
    // 0x8007B9D8: jal         0x80036CB0
    // 0x8007B9DC: nop

    func_80036CB0(rdram, ctx);
        goto after_13;
    // 0x8007B9DC: nop

    after_13:
    // 0x8007B9E0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007B9E4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8007B9E8: lbu         $t6, 0x754($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X754);
    // 0x8007B9EC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007B9F0: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x8007B9F4: sb          $t7, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r15;
    // 0x8007B9F8: b           L_8007BA5C
    // 0x8007B9FC: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
        goto L_8007BA5C;
    // 0x8007B9FC: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
L_8007BA00:
    // 0x8007BA00: jal         0x8001B854
    // 0x8007BA04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_14;
    // 0x8007BA04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x8007BA08: b           L_8007BA60
    // 0x8007BA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007BA60;
    // 0x8007BA0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007BA10:
    // 0x8007BA10: jal         0x800603F0
    // 0x8007BA14: nop

    func_800603F0(rdram, ctx);
        goto after_15;
    // 0x8007BA14: nop

    after_15:
    // 0x8007BA18: jal         0x80020270
    // 0x8007BA1C: nop

    func_80020270(rdram, ctx);
        goto after_16;
    // 0x8007BA1C: nop

    after_16:
    // 0x8007BA20: jal         0x80036C78
    // 0x8007BA24: nop

    func_80036C78(rdram, ctx);
        goto after_17;
    // 0x8007BA24: nop

    after_17:
    // 0x8007BA28: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007BA2C: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x8007BA30: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007BA34: lbu         $t8, -0x301C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X301C);
    // 0x8007BA38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007BA3C: andi        $t9, $t8, 0xFC
    ctx->r25 = ctx->r24 & 0XFC;
    // 0x8007BA40: sb          $t9, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r25;
    // 0x8007BA44: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007BA48: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x8007BA4C: b           L_8007BA5C
    // 0x8007BA50: sh          $t0, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r8;
        goto L_8007BA5C;
    // 0x8007BA50: sh          $t0, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r8;
L_8007BA54:
    // 0x8007BA54: jal         0x8028D4B8
    // 0x8007BA58: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_18;
    // 0x8007BA58: nop

    after_18:
L_8007BA5C:
    // 0x8007BA5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007BA60:
    // 0x8007BA60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BA64: jr          $ra
    // 0x8007BA68: nop

    return;
    // 0x8007BA68: nop

;}
RECOMP_FUNC void func_8007BA6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BA6C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007BA70: lhu         $t6, 0x3A44($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3A44);
    // 0x8007BA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BA78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BA7C: addiu       $v0, $v0, 0x3A42
    ctx->r2 = ADD32(ctx->r2, 0X3A42);
    // 0x8007BA80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BA84: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x8007BA88: jal         0x8007BC2C
    // 0x8007BA8C: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    func_8007BC2C(rdram, ctx);
        goto after_0;
    // 0x8007BA8C: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    after_0:
    // 0x8007BA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BA94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BA98: jr          $ra
    // 0x8007BA9C: nop

    return;
    // 0x8007BA9C: nop

;}
RECOMP_FUNC void func_8007BAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BAA0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007BAA4: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007BAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BAB0: lhu         $a0, 0x0($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X0);
    // 0x8007BAB4: jal         0x8007BC2C
    // 0x8007BAB8: nop

    func_8007BC2C(rdram, ctx);
        goto after_0;
    // 0x8007BAB8: nop

    after_0:
    // 0x8007BABC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BAC0: addiu       $a0, $a0, 0x3978
    ctx->r4 = ADD32(ctx->r4, 0X3978);
    // 0x8007BAC4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8007BAC8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8007BACC: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8007BAD0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8007BAD4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007BAD8: bc1f        L_8007BB08
    if (!c1cs) {
        // 0x8007BADC: nop
    
            goto L_8007BB08;
    }
    // 0x8007BADC: nop

    // 0x8007BAE0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007BAE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007BAE8: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x8007BAEC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007BAF0: nop

    // 0x8007BAF4: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x8007BAF8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BAFC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8007BB00: b           L_8007BB3C
    // 0x8007BB04: swc1        $f16, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f16.u32l;
        goto L_8007BB3C;
    // 0x8007BB04: swc1        $f16, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f16.u32l;
L_8007BB08:
    // 0x8007BB08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8007BB0C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8007BB10: bc1f        L_8007BB3C
    if (!c1cs) {
        // 0x8007BB14: nop
    
            goto L_8007BB3C;
    }
    // 0x8007BB14: nop

    // 0x8007BB18: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8007BB1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007BB20: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x8007BB24: nop

    // 0x8007BB28: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8007BB2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB30: neg.d       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = -ctx->f6.d;
    // 0x8007BB34: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007BB38: swc1        $f10, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f10.u32l;
L_8007BB3C:
    // 0x8007BB3C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8007BB40: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB44: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007BB48: nop

    // 0x8007BB4C: swc1        $f16, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f16.u32l;
    // 0x8007BB50: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007BB54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB58: swc1        $f18, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f18.u32l;
    // 0x8007BB5C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007BB60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007BB64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB68: swc1        $f4, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f4.u32l;
    // 0x8007BB6C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007BB70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB74: swc1        $f6, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f6.u32l;
    // 0x8007BB78: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007BB7C: jal         0x80293374
    // 0x8007BB80: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    LOOKUP_FUNC(0x80293374)(rdram, ctx);
        goto after_1;
    // 0x8007BB80: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    after_1:
    // 0x8007BB84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB88: lwc1        $f10, 0x38E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x8007BB8C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007BB90: lhu         $t6, 0x3A4A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3A4A);
    // 0x8007BB94: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007BB98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BB9C: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007BBA0: beq         $t6, $zero, L_8007BBD4
    if (ctx->r14 == 0) {
        // 0x8007BBA4: swc1        $f10, 0x3914($at)
        MEM_W(0X3914, ctx->r1) = ctx->f10.u32l;
            goto L_8007BBD4;
    }
    // 0x8007BBA4: swc1        $f10, 0x3914($at)
    MEM_W(0X3914, ctx->r1) = ctx->f10.u32l;
    // 0x8007BBA8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007BBAC: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007BBB0: lhu         $t7, 0x3A46($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3A46);
    // 0x8007BBB4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8007BBB8: beq         $t7, $v0, L_8007BBF4
    if (ctx->r15 == ctx->r2) {
        // 0x8007BBBC: andi        $t9, $t8, 0xFFFF
        ctx->r25 = ctx->r24 & 0XFFFF;
            goto L_8007BBF4;
    }
    // 0x8007BBBC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8007BBC0: slti        $at, $t9, 0x72
    ctx->r1 = SIGNED(ctx->r25) < 0X72 ? 1 : 0;
    // 0x8007BBC4: bne         $at, $zero, L_8007BBF4
    if (ctx->r1 != 0) {
        // 0x8007BBC8: sh          $t8, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r24;
            goto L_8007BBF4;
    }
    // 0x8007BBC8: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007BBCC: b           L_8007BBF4
    // 0x8007BBD0: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
        goto L_8007BBF4;
    // 0x8007BBD0: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_8007BBD4:
    // 0x8007BBD4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007BBD8: lhu         $t0, 0x3A46($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3A46);
    // 0x8007BBDC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007BBE0: nop

    // 0x8007BBE4: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8007BBE8: beq         $at, $zero, L_8007BBF4
    if (ctx->r1 == 0) {
        // 0x8007BBEC: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_8007BBF4;
    }
    // 0x8007BBEC: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8007BBF0: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
L_8007BBF4:
    // 0x8007BBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BBF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BBFC: jr          $ra
    // 0x8007BC00: nop

    return;
    // 0x8007BC00: nop

;}
RECOMP_FUNC void func_8007BC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BC04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BC08: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BC0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BC10: lhu         $a0, 0x3A42($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A42);
    // 0x8007BC14: jal         0x8007BC2C
    // 0x8007BC18: nop

    func_8007BC2C(rdram, ctx);
        goto after_0;
    // 0x8007BC18: nop

    after_0:
    // 0x8007BC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BC24: jr          $ra
    // 0x8007BC28: nop

    return;
    // 0x8007BC28: nop

;}
RECOMP_FUNC void func_8007BC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BC2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007BC30: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007BC34: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8007BC38: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007BC3C: lw          $t8, 0x38C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X38C0);
    // 0x8007BC40: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007BC44: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007BC48: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007BC4C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8007BC50: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8007BC54: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8007BC58: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007BC5C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007BC60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007BC64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007BC68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007BC6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007BC70: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8007BC74: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007BC78: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x8007BC7C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8007BC80: lwc1        $f4, 0x0($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X0);
    // 0x8007BC84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BC88: swc1        $f4, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f4.u32l;
    // 0x8007BC8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BC90: lwc1        $f8, 0x38E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X38E8);
    // 0x8007BC94: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x8007BC98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BC9C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007BCA0: addiu       $v0, $v0, 0x3914
    ctx->r2 = ADD32(ctx->r2, 0X3914);
    // 0x8007BCA4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8007BCA8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCAC: lwc1        $f18, 0x38F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X38F4);
    // 0x8007BCB0: lwc1        $f16, 0x8($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X8);
    // 0x8007BCB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCB8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8007BCBC: lui         $fp, 0x2
    ctx->r30 = S32(0X2 << 16);
    // 0x8007BCC0: swc1        $f4, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f4.u32l;
    // 0x8007BCC4: lwc1        $f6, 0xC($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0XC);
    // 0x8007BCC8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCCC: swc1        $f6, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f6.u32l;
    // 0x8007BCD0: lwc1        $f8, 0x10($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X10);
    // 0x8007BCD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCD8: swc1        $f8, 0x39C0($at)
    MEM_W(0X39C0, ctx->r1) = ctx->f8.u32l;
    // 0x8007BCDC: lwc1        $f10, 0x14($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X14);
    // 0x8007BCE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCE4: swc1        $f10, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f10.u32l;
    // 0x8007BCE8: lwc1        $f16, 0x8($s5)
    ctx->f16.u32l = MEM_W(ctx->r21, 0X8);
    // 0x8007BCEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BCF0: swc1        $f16, 0x3A70($at)
    MEM_W(0X3A70, ctx->r1) = ctx->f16.u32l;
    // 0x8007BCF4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007BCF8: ori         $fp, $fp, 0x95E0
    ctx->r30 = ctx->r30 | 0X95E0;
    // 0x8007BCFC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8007BD00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8007BD04: bc1f        L_8007BD14
    if (!c1cs) {
        // 0x8007BD08: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8007BD14;
    }
    // 0x8007BD08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8007BD0C: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8007BD10: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8007BD14:
    // 0x8007BD14: lui         $s6, 0x8011
    ctx->r22 = S32(0X8011 << 16);
    // 0x8007BD18: addiu       $s6, $s6, -0x2F98
    ctx->r22 = ADD32(ctx->r22, -0X2F98);
    // 0x8007BD1C: addiu       $s7, $zero, 0x34
    ctx->r23 = ADD32(0, 0X34);
L_8007BD20:
    // 0x8007BD20: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BD24: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x8007BD28: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
    // 0x8007BD2C: addu        $a0, $s5, $t2
    ctx->r4 = ADD32(ctx->r21, ctx->r10);
    // 0x8007BD30: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x8007BD34: mflo        $t0
    ctx->r8 = lo;
    // 0x8007BD38: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8007BD3C: addu        $s2, $t1, $fp
    ctx->r18 = ADD32(ctx->r9, ctx->r30);
    // 0x8007BD40: lw          $s3, 0x30($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X30);
    // 0x8007BD44: jal         0x8000724C
    // 0x8007BD48: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    func_8000724C(rdram, ctx);
        goto after_0;
    // 0x8007BD48: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    after_0:
    // 0x8007BD4C: lwc1        $f4, 0x38($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X38);
    // 0x8007BD50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007BD54: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x8007BD58: lwc1        $f6, 0x40($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X40);
    // 0x8007BD5C: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007BD60: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x8007BD64: lwc1        $f8, 0x44($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X44);
    // 0x8007BD68: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8007BD6C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007BD70: bne         $at, $zero, L_8007BD20
    if (ctx->r1 != 0) {
        // 0x8007BD74: swc1        $f8, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
            goto L_8007BD20;
    }
    // 0x8007BD74: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x8007BD78: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8007BD7C: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x8007BD80: addiu       $s1, $zero, 0xE
    ctx->r17 = ADD32(0, 0XE);
L_8007BD84:
    // 0x8007BD84: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BD88: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x8007BD8C: sll         $t7, $s4, 4
    ctx->r15 = S32(ctx->r20 << 4);
    // 0x8007BD90: addu        $a0, $s5, $t7
    ctx->r4 = ADD32(ctx->r21, ctx->r15);
    // 0x8007BD94: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8007BD98: mflo        $t5
    ctx->r13 = lo;
    // 0x8007BD9C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8007BDA0: addu        $s2, $t6, $fp
    ctx->r18 = ADD32(ctx->r14, ctx->r30);
    // 0x8007BDA4: lw          $s3, 0x30($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X30);
    // 0x8007BDA8: jal         0x8000724C
    // 0x8007BDAC: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    func_8000724C(rdram, ctx);
        goto after_1;
    // 0x8007BDAC: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    after_1:
    // 0x8007BDB0: lwc1        $f10, 0x38($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X38);
    // 0x8007BDB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007BDB8: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
    // 0x8007BDBC: lwc1        $f16, 0x40($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X40);
    // 0x8007BDC0: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007BDC4: swc1        $f16, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f16.u32l;
    // 0x8007BDC8: lwc1        $f18, 0x44($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X44);
    // 0x8007BDCC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8007BDD0: slti        $at, $s1, 0x19
    ctx->r1 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
    // 0x8007BDD4: andi        $t8, $s4, 0xFF
    ctx->r24 = ctx->r20 & 0XFF;
    // 0x8007BDD8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007BDDC: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x8007BDE0: bne         $at, $zero, L_8007BD84
    if (ctx->r1 != 0) {
        // 0x8007BDE4: swc1        $f18, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
            goto L_8007BD84;
    }
    // 0x8007BDE4: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x8007BDE8: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x8007BDEC: ori         $s4, $s4, 0x9E34
    ctx->r20 = ctx->r20 | 0X9E34;
    // 0x8007BDF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8007BDF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8007BDF8:
    // 0x8007BDF8: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007BDFC: lw          $t0, 0x0($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X0);
    // 0x8007BE00: sll         $t3, $s0, 4
    ctx->r11 = S32(ctx->r16 << 4);
    // 0x8007BE04: addu        $a0, $s5, $t3
    ctx->r4 = ADD32(ctx->r21, ctx->r11);
    // 0x8007BE08: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    // 0x8007BE0C: mflo        $t1
    ctx->r9 = lo;
    // 0x8007BE10: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8007BE14: addu        $s2, $t2, $s4
    ctx->r18 = ADD32(ctx->r10, ctx->r20);
    // 0x8007BE18: lw          $s3, 0x30($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X30);
    // 0x8007BE1C: jal         0x8000724C
    // 0x8007BE20: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    func_8000724C(rdram, ctx);
        goto after_2;
    // 0x8007BE20: addiu       $a1, $s3, 0x30
    ctx->r5 = ADD32(ctx->r19, 0X30);
    after_2:
    // 0x8007BE24: lwc1        $f4, 0x38($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X38);
    // 0x8007BE28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007BE2C: swc1        $f4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f4.u32l;
    // 0x8007BE30: lwc1        $f6, 0x40($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X40);
    // 0x8007BE34: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007BE38: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x8007BE3C: lwc1        $f8, 0x44($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X44);
    // 0x8007BE40: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x8007BE44: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007BE48: bne         $at, $zero, L_8007BDF8
    if (ctx->r1 != 0) {
        // 0x8007BE4C: swc1        $f8, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
            goto L_8007BDF8;
    }
    // 0x8007BE4C: swc1        $f8, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f8.u32l;
    // 0x8007BE50: jal         0x8000F09C
    // 0x8007BE54: addiu       $a0, $s5, 0x1E0
    ctx->r4 = ADD32(ctx->r21, 0X1E0);
    func_8000F09C(rdram, ctx);
        goto after_3;
    // 0x8007BE54: addiu       $a0, $s5, 0x1E0
    ctx->r4 = ADD32(ctx->r21, 0X1E0);
    after_3:
    // 0x8007BE58: jal         0x8005F2B0
    // 0x8007BE5C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005F2B0(rdram, ctx);
        goto after_4;
    // 0x8007BE5C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x8007BE60: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8007BE64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007BE68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BE6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007BE70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007BE74: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007BE78: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007BE7C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007BE80: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8007BE84: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8007BE88: jr          $ra
    // 0x8007BE8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8007BE8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007BE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BE94: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BE9C: lhu         $a0, 0x3A40($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A40);
    // 0x8007BEA0: jal         0x8007BFA8
    // 0x8007BEA4: nop

    func_8007BFA8(rdram, ctx);
        goto after_0;
    // 0x8007BEA4: nop

    after_0:
    // 0x8007BEA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BEB0: jr          $ra
    // 0x8007BEB4: nop

    return;
    // 0x8007BEB4: nop

;}
RECOMP_FUNC void func_8007BEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BEB8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007BEBC: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x8007BEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BEC4: bne         $v0, $zero, L_8007BEF8
    if (ctx->r2 != 0) {
        // 0x8007BEC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007BEF8;
    }
    // 0x8007BEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BECC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BED0: lhu         $a0, 0x3A40($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A40);
    // 0x8007BED4: jal         0x8007BFA8
    // 0x8007BED8: nop

    func_8007BFA8(rdram, ctx);
        goto after_0;
    // 0x8007BED8: nop

    after_0:
    // 0x8007BEDC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BEE0: addiu       $a0, $a0, 0x3A4A
    ctx->r4 = ADD32(ctx->r4, 0X3A4A);
    // 0x8007BEE4: lhu         $t6, 0x0($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X0);
    // 0x8007BEE8: nop

    // 0x8007BEEC: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x8007BEF0: b           L_8007BF98
    // 0x8007BEF4: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_8007BF98;
    // 0x8007BEF4: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_8007BEF8:
    // 0x8007BEF8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BEFC: addiu       $a0, $a0, 0x3A4A
    ctx->r4 = ADD32(ctx->r4, 0X3A4A);
    // 0x8007BF00: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8007BF04: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8007BF08: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x8007BF0C: bne         $t8, $zero, L_8007BF5C
    if (ctx->r24 != 0) {
        // 0x8007BF10: ori         $t9, $v1, 0x2
        ctx->r25 = ctx->r3 | 0X2;
            goto L_8007BF5C;
    }
    // 0x8007BF10: ori         $t9, $v1, 0x2
    ctx->r25 = ctx->r3 | 0X2;
    // 0x8007BF14: bne         $v0, $at, L_8007BF30
    if (ctx->r2 != ctx->r1) {
        // 0x8007BF18: sh          $t9, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r25;
            goto L_8007BF30;
    }
    // 0x8007BF18: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x8007BF1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BF20: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x8007BF24: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x8007BF28: b           L_8007BF5C
    // 0x8007BF2C: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
        goto L_8007BF5C;
    // 0x8007BF2C: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
L_8007BF30:
    // 0x8007BF30: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007BF34: bne         $v0, $at, L_8007BF4C
    if (ctx->r2 != ctx->r1) {
        // 0x8007BF38: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007BF4C;
    }
    // 0x8007BF38: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BF3C: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x8007BF40: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8007BF44: b           L_8007BF5C
    // 0x8007BF48: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
        goto L_8007BF5C;
    // 0x8007BF48: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
L_8007BF4C:
    // 0x8007BF4C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BF50: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x8007BF54: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8007BF58: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
L_8007BF5C:
    // 0x8007BF5C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BF60: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x8007BF64: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8007BF68: nop

    // 0x8007BF6C: beq         $t3, $zero, L_8007BF98
    if (ctx->r11 == 0) {
        // 0x8007BF70: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8007BF98;
    }
    // 0x8007BF70: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007BF74: lhu         $a0, 0x3A40($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A40);
    // 0x8007BF78: jal         0x8007BFA8
    // 0x8007BF7C: nop

    func_8007BFA8(rdram, ctx);
        goto after_1;
    // 0x8007BF7C: nop

    after_1:
    // 0x8007BF80: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007BF84: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x8007BF88: lhu         $t4, 0x0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X0);
    // 0x8007BF8C: nop

    // 0x8007BF90: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8007BF94: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
L_8007BF98:
    // 0x8007BF98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BF9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007BFA0: jr          $ra
    // 0x8007BFA4: nop

    return;
    // 0x8007BFA4: nop

;}
RECOMP_FUNC void func_8007BFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BFA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007BFAC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007BFB0: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8007BFB4: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007BFB8: lw          $t8, 0x38C0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X38C0);
    // 0x8007BFBC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007BFC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BFC4: lwc1        $f4, 0x3910($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x8007BFC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007BFCC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8007BFD0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007BFD4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007BFD8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007BFDC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007BFE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007BFE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007BFE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007BFEC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8007BFF0: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8007BFF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007BFF8: swc1        $f4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f4.u32l;
    // 0x8007BFFC: lwc1        $f6, 0x3914($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3914);
    // 0x8007C000: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C004: swc1        $f6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f6.u32l;
    // 0x8007C008: lwc1        $f8, 0x3918($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007C00C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C010: swc1        $f8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f8.u32l;
    // 0x8007C014: lwc1        $f10, 0x3974($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x8007C018: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C01C: swc1        $f10, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f10.u32l;
    // 0x8007C020: lwc1        $f16, 0x39C0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X39C0);
    // 0x8007C024: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C028: swc1        $f16, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f16.u32l;
    // 0x8007C02C: lwc1        $f18, 0x3970($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3970);
    // 0x8007C030: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007C034: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007C038: swc1        $f18, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f18.u32l;
    // 0x8007C03C: lwc1        $f4, 0x1B94($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1B94);
    // 0x8007C040: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007C044: swc1        $f4, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f4.u32l;
    // 0x8007C048: lwc1        $f6, 0x1B98($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1B98);
    // 0x8007C04C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8007C050: swc1        $f6, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->f6.u32l;
    // 0x8007C054: lwc1        $f8, 0x1B9C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1B9C);
    // 0x8007C058: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8007C05C: swc1        $f8, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->f8.u32l;
    // 0x8007C060: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8007C064: lui         $s5, 0x8011
    ctx->r21 = S32(0X8011 << 16);
    // 0x8007C068: lhu         $t0, 0x50($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X50);
    // 0x8007C06C: lui         $s6, 0x2
    ctx->r22 = S32(0X2 << 16);
    // 0x8007C070: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x8007C074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007C078: ori         $s6, $s6, 0x95E0
    ctx->r22 = ctx->r22 | 0X95E0;
    // 0x8007C07C: addiu       $s5, $s5, -0x2F98
    ctx->r21 = ADD32(ctx->r21, -0X2F98);
    // 0x8007C080: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8007C084: mfhi        $t1
    ctx->r9 = hi;
    // 0x8007C088: sh          $t1, 0x24($s3)
    MEM_H(0X24, ctx->r19) = ctx->r9;
    // 0x8007C08C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8007C090: nop

    // 0x8007C094: lh          $t3, 0x64($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X64);
    // 0x8007C098: nop

    // 0x8007C09C: beq         $t3, $zero, L_8007C0AC
    if (ctx->r11 == 0) {
        // 0x8007C0A0: nop
    
            goto L_8007C0AC;
    }
    // 0x8007C0A0: nop

    // 0x8007C0A4: b           L_8007C0AC
    // 0x8007C0A8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
        goto L_8007C0AC;
    // 0x8007C0A8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
L_8007C0AC:
    // 0x8007C0AC: lhu         $t4, 0x24($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X24);
    // 0x8007C0B0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8007C0B4: or          $t5, $t4, $v0
    ctx->r13 = ctx->r12 | ctx->r2;
    // 0x8007C0B8: sh          $t5, 0x24($s3)
    MEM_H(0X24, ctx->r19) = ctx->r13;
    // 0x8007C0BC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8007C0C0: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8007C0C4: lwc1        $f10, 0x5C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X5C);
    // 0x8007C0C8: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8007C0CC: swc1        $f10, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->f10.u32l;
    // 0x8007C0D0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8007C0D4: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8007C0D8: lwc1        $f16, 0x58($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X58);
    // 0x8007C0DC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8007C0E0: swc1        $f16, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->f16.u32l;
    // 0x8007C0E4: lhu         $t8, 0xB7E($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7E);
    // 0x8007C0E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8007C0EC: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8007C0F0: bne         $t9, $zero, L_8007C17C
    if (ctx->r25 != 0) {
        // 0x8007C0F4: addiu       $s4, $zero, 0x34
        ctx->r20 = ADD32(0, 0X34);
            goto L_8007C17C;
    }
    // 0x8007C0F4: addiu       $s4, $zero, 0x34
    ctx->r20 = ADD32(0, 0X34);
    // 0x8007C0F8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007C0FC: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x8007C100: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
L_8007C104:
    // 0x8007C104: multu       $s0, $a1
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C108: mflo        $t0
    ctx->r8 = lo;
    // 0x8007C10C: addu        $v1, $a0, $t0
    ctx->r3 = ADD32(ctx->r4, ctx->r8);
    // 0x8007C110: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C114: nop

    // 0x8007C118: beq         $t1, $zero, L_8007C168
    if (ctx->r9 == 0) {
        // 0x8007C11C: nop
    
            goto L_8007C168;
    }
    // 0x8007C11C: nop

    // 0x8007C120: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C124: lw          $t2, 0x40($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X40);
    // 0x8007C128: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x8007C12C: lw          $t3, 0xC8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC8);
    // 0x8007C130: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x8007C134: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x8007C138: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x8007C13C: sb          $t4, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r12;
    // 0x8007C140: lw          $t5, 0x40($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X40);
    // 0x8007C144: nop

    // 0x8007C148: lhu         $t6, 0x1A($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X1A);
    // 0x8007C14C: mflo        $t7
    ctx->r15 = lo;
    // 0x8007C150: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x8007C154: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x8007C158: sb          $t6, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r14;
    // 0x8007C15C: lwc1        $f18, 0x1C74($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C74);
    // 0x8007C160: nop

    // 0x8007C164: swc1        $f18, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f18.u32l;
L_8007C168:
    // 0x8007C168: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007C16C: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x8007C170: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x8007C174: bne         $at, $zero, L_8007C104
    if (ctx->r1 != 0) {
        // 0x8007C178: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_8007C104;
    }
    // 0x8007C178: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
L_8007C17C:
    // 0x8007C17C: addiu       $s4, $zero, 0x34
    ctx->r20 = ADD32(0, 0X34);
    // 0x8007C180: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8007C184:
    // 0x8007C184: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C188: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x8007C18C: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8007C190: addu        $a0, $s3, $t6
    ctx->r4 = ADD32(ctx->r19, ctx->r14);
    // 0x8007C194: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x8007C198: mflo        $t4
    ctx->r12 = lo;
    // 0x8007C19C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8007C1A0: addu        $v0, $t5, $s6
    ctx->r2 = ADD32(ctx->r13, ctx->r22);
    // 0x8007C1A4: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x8007C1A8: jal         0x80006A1C
    // 0x8007C1AC: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    func_80006A1C(rdram, ctx);
        goto after_0;
    // 0x8007C1AC: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    after_0:
    // 0x8007C1B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007C1B4: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007C1B8: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8007C1BC: bne         $at, $zero, L_8007C184
    if (ctx->r1 != 0) {
        // 0x8007C1C0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8007C184;
    }
    // 0x8007C1C0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007C1C4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8007C1C8: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x8007C1CC: addiu       $s1, $zero, 0xE
    ctx->r17 = ADD32(0, 0XE);
L_8007C1D0:
    // 0x8007C1D0: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C1D4: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8007C1D8: sll         $t1, $s2, 4
    ctx->r9 = S32(ctx->r18 << 4);
    // 0x8007C1DC: addu        $a0, $s3, $t1
    ctx->r4 = ADD32(ctx->r19, ctx->r9);
    // 0x8007C1E0: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8007C1E4: mflo        $t9
    ctx->r25 = lo;
    // 0x8007C1E8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007C1EC: addu        $v0, $t0, $s6
    ctx->r2 = ADD32(ctx->r8, ctx->r22);
    // 0x8007C1F0: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x8007C1F4: jal         0x80006A1C
    // 0x8007C1F8: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    func_80006A1C(rdram, ctx);
        goto after_1;
    // 0x8007C1F8: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    after_1:
    // 0x8007C1FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007C200: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007C204: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8007C208: slti        $at, $s1, 0x19
    ctx->r1 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
    // 0x8007C20C: andi        $t2, $s2, 0xFF
    ctx->r10 = ctx->r18 & 0XFF;
    // 0x8007C210: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007C214: bne         $at, $zero, L_8007C1D0
    if (ctx->r1 != 0) {
        // 0x8007C218: or          $s2, $t2, $zero
        ctx->r18 = ctx->r10 | 0;
            goto L_8007C1D0;
    }
    // 0x8007C218: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x8007C21C: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x8007C220: ori         $s2, $s2, 0x9E34
    ctx->r18 = ctx->r18 | 0X9E34;
    // 0x8007C224: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8007C228: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8007C22C:
    // 0x8007C22C: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C230: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x8007C234: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x8007C238: addu        $a0, $s3, $t7
    ctx->r4 = ADD32(ctx->r19, ctx->r15);
    // 0x8007C23C: addiu       $a0, $a0, 0x1B0
    ctx->r4 = ADD32(ctx->r4, 0X1B0);
    // 0x8007C240: mflo        $t5
    ctx->r13 = lo;
    // 0x8007C244: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8007C248: addu        $v0, $t6, $s2
    ctx->r2 = ADD32(ctx->r14, ctx->r18);
    // 0x8007C24C: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x8007C250: jal         0x80006A1C
    // 0x8007C254: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    func_80006A1C(rdram, ctx);
        goto after_2;
    // 0x8007C254: addiu       $a1, $v1, 0x30
    ctx->r5 = ADD32(ctx->r3, 0X30);
    after_2:
    // 0x8007C258: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8007C25C: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x8007C260: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x8007C264: bne         $at, $zero, L_8007C22C
    if (ctx->r1 != 0) {
        // 0x8007C268: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8007C22C;
    }
    // 0x8007C268: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8007C26C: jal         0x8000F05C
    // 0x8007C270: addiu       $a0, $s3, 0x1E0
    ctx->r4 = ADD32(ctx->r19, 0X1E0);
    func_8000F05C(rdram, ctx);
        goto after_3;
    // 0x8007C270: addiu       $a0, $s3, 0x1E0
    ctx->r4 = ADD32(ctx->r19, 0X1E0);
    after_3:
    // 0x8007C274: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007C278: addiu       $a1, $a1, 0x3A40
    ctx->r5 = ADD32(ctx->r5, 0X3A40);
    // 0x8007C27C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8007C280: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8007C284: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C288: addiu       $a2, $a2, 0x3A4A
    ctx->r6 = ADD32(ctx->r6, 0X3A4A);
    // 0x8007C28C: sh          $v0, 0x3A46($at)
    MEM_H(0X3A46, ctx->r1) = ctx->r2;
    // 0x8007C290: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x8007C294: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8007C298: andi        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 & 0X1;
    // 0x8007C29C: beq         $v1, $zero, L_8007C2CC
    if (ctx->r3 == 0) {
        // 0x8007C2A0: sh          $t9, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r25;
            goto L_8007C2CC;
    }
    // 0x8007C2A0: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x8007C2A4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C2A8: addiu       $v0, $v0, 0x3A44
    ctx->r2 = ADD32(ctx->r2, 0X3A44);
    // 0x8007C2AC: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8007C2B0: nop

    // 0x8007C2B4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007C2B8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8007C2BC: slti        $at, $t2, 0x72
    ctx->r1 = SIGNED(ctx->r10) < 0X72 ? 1 : 0;
    // 0x8007C2C0: bne         $at, $zero, L_8007C2CC
    if (ctx->r1 != 0) {
        // 0x8007C2C4: sh          $t1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r9;
            goto L_8007C2CC;
    }
    // 0x8007C2C4: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x8007C2C8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_8007C2CC:
    // 0x8007C2CC: bne         $v1, $zero, L_8007C2E8
    if (ctx->r3 != 0) {
        // 0x8007C2D0: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007C2E8;
    }
    // 0x8007C2D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C2D4: addiu       $v0, $v0, 0x38FE
    ctx->r2 = ADD32(ctx->r2, 0X38FE);
    // 0x8007C2D8: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x8007C2DC: nop

    // 0x8007C2E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007C2E4: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_8007C2E8:
    // 0x8007C2E8: lhu         $t5, 0x0($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X0);
    // 0x8007C2EC: ori         $t6, $a0, 0x1
    ctx->r14 = ctx->r4 | 0X1;
    // 0x8007C2F0: slti        $at, $t5, 0x72
    ctx->r1 = SIGNED(ctx->r13) < 0X72 ? 1 : 0;
    // 0x8007C2F4: bne         $at, $zero, L_8007C308
    if (ctx->r1 != 0) {
        // 0x8007C2F8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8007C308;
    }
    // 0x8007C2F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007C2FC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x8007C300: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x8007C304: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8007C308:
    // 0x8007C308: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C30C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C310: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C314: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007C318: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007C31C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C320: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007C324: jr          $ra
    // 0x8007C328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007C328: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007C32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C32C: lui         $t6, 0x8036
    ctx->r14 = S32(0X8036 << 16);
    // 0x8007C330: addiu       $t6, $t6, -0x2A00
    ctx->r14 = ADD32(ctx->r14, -0X2A00);
    // 0x8007C334: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C338: sw          $t6, 0x38C0($at)
    MEM_W(0X38C0, ctx->r1) = ctx->r14;
    // 0x8007C33C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C340: sh          $zero, 0x3A4A($at)
    MEM_H(0X3A4A, ctx->r1) = 0;
    // 0x8007C344: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C348: sh          $zero, 0x3A44($at)
    MEM_H(0X3A44, ctx->r1) = 0;
    // 0x8007C34C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C350: sh          $zero, 0x3A46($at)
    MEM_H(0X3A46, ctx->r1) = 0;
    // 0x8007C354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C358: sh          $zero, 0x3A40($at)
    MEM_H(0X3A40, ctx->r1) = 0;
    // 0x8007C35C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C360: sh          $zero, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = 0;
    // 0x8007C364: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C368: sh          $zero, 0x38FE($at)
    MEM_H(0X38FE, ctx->r1) = 0;
    // 0x8007C36C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C370: jr          $ra
    // 0x8007C374: sb          $zero, 0x39DF($at)
    MEM_B(0X39DF, ctx->r1) = 0;
    return;
    // 0x8007C374: sb          $zero, 0x39DF($at)
    MEM_B(0X39DF, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8007C378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C378: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C37C: addiu       $v1, $v1, 0x38E5
    ctx->r3 = ADD32(ctx->r3, 0X38E5);
    // 0x8007C380: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007C384: lb          $t7, 0x38E2($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X38E2);
    // 0x8007C388: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007C38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C390: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8007C394: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007C398: slti        $at, $t9, 0x11
    ctx->r1 = SIGNED(ctx->r25) < 0X11 ? 1 : 0;
    // 0x8007C39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C3A0: bne         $at, $zero, L_8007C420
    if (ctx->r1 != 0) {
        // 0x8007C3A4: sb          $t8, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r24;
            goto L_8007C420;
    }
    // 0x8007C3A4: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x8007C3A8: jal         0x8007C4A0
    // 0x8007C3AC: nop

    func_8007C4A0(rdram, ctx);
        goto after_0;
    // 0x8007C3AC: nop

    after_0:
    // 0x8007C3B0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007C3B4: lbu         $t0, 0x38E4($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X38E4);
    // 0x8007C3B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C3BC: addiu       $v0, $v0, 0x38E3
    ctx->r2 = ADD32(ctx->r2, 0X38E3);
    // 0x8007C3C0: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007C3C4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007C3C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007C3CC: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8007C3D0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8007C3D4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8007C3D8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007C3DC: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x8007C3E0: lhu         $a1, 0x760($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X760);
    // 0x8007C3E4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C3E8: jal         0x8007AAF8
    // 0x8007C3EC: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C3EC: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    after_1:
    // 0x8007C3F0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C3F4: addiu       $v0, $v0, 0x38E3
    ctx->r2 = ADD32(ctx->r2, 0X38E3);
    // 0x8007C3F8: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8007C3FC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C400: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007C404: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8007C408: addiu       $v1, $v1, 0x38E5
    ctx->r3 = ADD32(ctx->r3, 0X38E5);
    // 0x8007C40C: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x8007C410: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x8007C414: bne         $at, $zero, L_8007C420
    if (ctx->r1 != 0) {
        // 0x8007C418: sb          $zero, 0x0($v1)
        MEM_B(0X0, ctx->r3) = 0;
            goto L_8007C420;
    }
    // 0x8007C418: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8007C41C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_8007C420:
    // 0x8007C420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C428: jr          $ra
    // 0x8007C42C: nop

    return;
    // 0x8007C42C: nop

;}
RECOMP_FUNC void func_8007C430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C430: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007C434: lhu         $t6, 0x3A4A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3A4A);
    // 0x8007C438: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C43C: beq         $t6, $zero, L_8007C478
    if (ctx->r14 == 0) {
        // 0x8007C440: addiu       $v1, $v1, 0x3A42
        ctx->r3 = ADD32(ctx->r3, 0X3A42);
            goto L_8007C478;
    }
    // 0x8007C440: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C444: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C448: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C44C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C450: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007C454: lh          $t7, 0x3A50($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X3A50);
    // 0x8007C458: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x8007C45C: beq         $t7, $v0, L_8007C498
    if (ctx->r15 == ctx->r2) {
        // 0x8007C460: andi        $t9, $t8, 0xFFFF
        ctx->r25 = ctx->r24 & 0XFFFF;
            goto L_8007C498;
    }
    // 0x8007C460: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8007C464: slti        $at, $t9, 0x72
    ctx->r1 = SIGNED(ctx->r25) < 0X72 ? 1 : 0;
    // 0x8007C468: bne         $at, $zero, L_8007C498
    if (ctx->r1 != 0) {
        // 0x8007C46C: sh          $t8, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r24;
            goto L_8007C498;
    }
    // 0x8007C46C: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007C470: jr          $ra
    // 0x8007C474: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    return;
    // 0x8007C474: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_8007C478:
    // 0x8007C478: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007C47C: lh          $t0, 0x3A50($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X3A50);
    // 0x8007C480: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C484: nop

    // 0x8007C488: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8007C48C: beq         $at, $zero, L_8007C498
    if (ctx->r1 == 0) {
        // 0x8007C490: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_8007C498;
    }
    // 0x8007C490: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x8007C494: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
L_8007C498:
    // 0x8007C498: jr          $ra
    // 0x8007C49C: nop

    return;
    // 0x8007C49C: nop

;}
RECOMP_FUNC void func_8007C4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C4A0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007C4A4: lbu         $t6, 0x38E4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38E4);
    // 0x8007C4A8: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007C4AC: bne         $t6, $zero, L_8007C51C
    if (ctx->r14 != 0) {
        // 0x8007C4B0: lui         $t3, 0x802C
        ctx->r11 = S32(0X802C << 16);
            goto L_8007C51C;
    }
    // 0x8007C4B0: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8007C4B4: lhu         $t7, 0x3A4A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3A4A);
    // 0x8007C4B8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C4BC: beq         $t7, $zero, L_8007C4F8
    if (ctx->r15 == 0) {
        // 0x8007C4C0: addiu       $v1, $v1, 0x3A42
        ctx->r3 = ADD32(ctx->r3, 0X3A42);
            goto L_8007C4F8;
    }
    // 0x8007C4C0: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C4C4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C4C8: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C4CC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C4D0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007C4D4: lhu         $t8, 0x3A46($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3A46);
    // 0x8007C4D8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8007C4DC: beq         $t8, $v0, L_8007C588
    if (ctx->r24 == ctx->r2) {
        // 0x8007C4E0: andi        $t0, $t9, 0xFFFF
        ctx->r8 = ctx->r25 & 0XFFFF;
            goto L_8007C588;
    }
    // 0x8007C4E0: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x8007C4E4: slti        $at, $t0, 0x72
    ctx->r1 = SIGNED(ctx->r8) < 0X72 ? 1 : 0;
    // 0x8007C4E8: bne         $at, $zero, L_8007C588
    if (ctx->r1 != 0) {
        // 0x8007C4EC: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_8007C588;
    }
    // 0x8007C4EC: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x8007C4F0: jr          $ra
    // 0x8007C4F4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    return;
    // 0x8007C4F4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_8007C4F8:
    // 0x8007C4F8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8007C4FC: lhu         $t1, 0x3A46($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X3A46);
    // 0x8007C500: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C504: nop

    // 0x8007C508: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8007C50C: beq         $at, $zero, L_8007C588
    if (ctx->r1 == 0) {
        // 0x8007C510: addiu       $t2, $v0, 0x1
        ctx->r10 = ADD32(ctx->r2, 0X1);
            goto L_8007C588;
    }
    // 0x8007C510: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8007C514: jr          $ra
    // 0x8007C518: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    return;
    // 0x8007C518: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
L_8007C51C:
    // 0x8007C51C: lhu         $t3, 0x3A4A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3A4A);
    // 0x8007C520: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C524: beq         $t3, $zero, L_8007C568
    if (ctx->r11 == 0) {
        // 0x8007C528: addiu       $v1, $v1, 0x3A42
        ctx->r3 = ADD32(ctx->r3, 0X3A42);
            goto L_8007C568;
    }
    // 0x8007C528: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C52C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C530: addiu       $v1, $v1, 0x3A42
    ctx->r3 = ADD32(ctx->r3, 0X3A42);
    // 0x8007C534: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007C538: lhu         $t4, 0x3A44($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X3A44);
    // 0x8007C53C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C540: nop

    // 0x8007C544: beq         $t4, $v0, L_8007C588
    if (ctx->r12 == ctx->r2) {
        // 0x8007C548: nop
    
            goto L_8007C588;
    }
    // 0x8007C548: nop

    // 0x8007C54C: bne         $v0, $zero, L_8007C560
    if (ctx->r2 != 0) {
        // 0x8007C550: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8007C560;
    }
    // 0x8007C550: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8007C554: addiu       $t5, $zero, 0x71
    ctx->r13 = ADD32(0, 0X71);
    // 0x8007C558: jr          $ra
    // 0x8007C55C: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
    return;
    // 0x8007C55C: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_8007C560:
    // 0x8007C560: jr          $ra
    // 0x8007C564: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    return;
    // 0x8007C564: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_8007C568:
    // 0x8007C568: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007C56C: lhu         $t7, 0x3A44($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3A44);
    // 0x8007C570: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007C574: nop

    // 0x8007C578: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007C57C: beq         $at, $zero, L_8007C588
    if (ctx->r1 == 0) {
        // 0x8007C580: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_8007C588;
    }
    // 0x8007C580: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x8007C584: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_8007C588:
    // 0x8007C588: jr          $ra
    // 0x8007C58C: nop

    return;
    // 0x8007C58C: nop

;}
RECOMP_FUNC void func_8007C590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C590: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007C594: lbu         $t6, 0x38E4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38E4);
    // 0x8007C598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C59C: bne         $t6, $zero, L_8007C5B4
    if (ctx->r14 != 0) {
        // 0x8007C5A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007C5B4;
    }
    // 0x8007C5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C5A4: jal         0x8007C80C
    // 0x8007C5A8: nop

    func_8007C80C(rdram, ctx);
        goto after_0;
    // 0x8007C5A8: nop

    after_0:
    // 0x8007C5AC: b           L_8007C5C0
    // 0x8007C5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007C5C0;
    // 0x8007C5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007C5B4:
    // 0x8007C5B4: jal         0x8007C858
    // 0x8007C5B8: nop

    func_8007C858(rdram, ctx);
        goto after_1;
    // 0x8007C5B8: nop

    after_1:
    // 0x8007C5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007C5C0:
    // 0x8007C5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C5C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_8007C5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C5CC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007C5D0: lh          $t6, 0x392E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X392E);
    // 0x8007C5D4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8007C5D8: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8007C5DC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007C5E0: addiu       $v1, $v1, 0x38E2
    ctx->r3 = ADD32(ctx->r3, 0X38E2);
    // 0x8007C5E4: mflo        $t7
    ctx->r15 = lo;
    // 0x8007C5E8: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x8007C5EC: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8007C5F0: nop

    // 0x8007C5F4: bgez        $v0, L_8007C600
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007C5F8: negu        $t8, $v0
        ctx->r24 = SUB32(0, ctx->r2);
            goto L_8007C600;
    }
    // 0x8007C5F8: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
    // 0x8007C5FC: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_8007C600:
    // 0x8007C600: jr          $ra
    // 0x8007C604: nop

    return;
    // 0x8007C604: nop

;}
RECOMP_FUNC void func_8007C608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C60C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C610: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8007C614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C618: jal         0x8029ACD4
    // 0x8007C61C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007C61C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C620: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C624: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8007C628: jal         0x8007AAF8
    // 0x8007C62C: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C62C: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    after_1:
    // 0x8007C630: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007C634: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007C638: lbu         $t6, 0x223C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X223C);
    // 0x8007C63C: addiu       $t9, $zero, 0xD0
    ctx->r25 = ADD32(0, 0XD0);
    // 0x8007C640: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8007C644: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x8007C648: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C64C: sb          $t8, 0x223C($v0)
    MEM_B(0X223C, ctx->r2) = ctx->r24;
    // 0x8007C650: sb          $t9, 0x2245($v0)
    MEM_B(0X2245, ctx->r2) = ctx->r25;
    // 0x8007C654: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
;}
RECOMP_FUNC void func_8007C728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C72C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C730: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8007C734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C738: jal         0x8029ACD4
    // 0x8007C73C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007C73C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C740: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C744: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C748: jal         0x8007AAF8
    // 0x8007C74C: addiu       $a1, $zero, 0xF5
    ctx->r5 = ADD32(0, 0XF5);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C74C: addiu       $a1, $zero, 0xF5
    ctx->r5 = ADD32(0, 0XF5);
    after_1:
    // 0x8007C750: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C754: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C758: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007C75C: jal         0x8002135C
    // 0x8007C760: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007C760: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_2:
    // 0x8007C764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C76C: jr          $ra
    // 0x8007C770: nop

    return;
    // 0x8007C770: nop

;}
