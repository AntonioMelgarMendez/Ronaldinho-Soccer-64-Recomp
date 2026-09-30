#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80072DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072DF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80072DFC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80072E00: addiu       $a0, $a0, 0x3A50
    ctx->r4 = ADD32(ctx->r4, 0X3A50);
    // 0x80072E04: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80072E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072E0C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80072E10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80072E14: bne         $v0, $zero, L_80072E34
    if (ctx->r2 != 0) {
        // 0x80072E18: sh          $t6, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r14;
            goto L_80072E34;
    }
    // 0x80072E18: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x80072E1C: jal         0x80037AB8
    // 0x80072E20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_0;
    // 0x80072E20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80072E24: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80072E28: lh          $t7, 0x3A52($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X3A52);
    // 0x80072E2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80072E30: sb          $t7, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r15;
L_80072E34:
    // 0x80072E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80072E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80072E3C: jr          $ra
    // 0x80072E40: nop

    return;
    // 0x80072E40: nop

;}
RECOMP_FUNC void func_80072E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072E44: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80072E48: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80072E4C: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80072E50: lhu         $t6, 0x70C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X70C);
    // 0x80072E54: lhu         $t7, 0x6F4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6F4);
    // 0x80072E58: addiu       $a3, $a3, 0x3A54
    ctx->r7 = ADD32(ctx->r7, 0X3A54);
    // 0x80072E5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80072E60: lhu         $t9, 0x710($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X710);
    // 0x80072E64: lhu         $t0, 0x6F8($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X6F8);
    // 0x80072E68: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x80072E6C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80072E70: or          $a2, $t6, $t7
    ctx->r6 = ctx->r14 | ctx->r15;
    // 0x80072E74: addiu       $v1, $v1, 0x3F78
    ctx->r3 = ADD32(ctx->r3, 0X3F78);
    // 0x80072E78: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x80072E7C: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x80072E80: sltiu       $at, $t2, 0x8
    ctx->r1 = ctx->r10 < 0X8 ? 1 : 0;
    // 0x80072E84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80072E88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80072E8C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80072E90: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80072E94: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80072E98: sh          $t1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r9;
    // 0x80072E9C: beq         $at, $zero, L_800734A4
    if (ctx->r1 == 0) {
        // 0x80072EA0: sh          $zero, 0x0($v1)
        MEM_H(0X0, ctx->r3) = 0;
            goto L_800734A4;
    }
    // 0x80072EA0: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x80072EA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80072EA8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80072EAC: addu        $at, $at, $t2
    gpr jr_addend_80072EB8 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80072EB0: lw          $t2, -0x5418($at)
    ctx->r10 = ADD32(ctx->r1, -0X5418);
    // 0x80072EB4: nop

    // 0x80072EB8: jr          $t2
    // 0x80072EBC: nop

    switch (jr_addend_80072EB8 >> 2) {
        case 0: goto L_80072EC0; break;
        case 1: goto L_80072FAC; break;
        case 2: goto L_800730FC; break;
        case 3: goto L_80073158; break;
        case 4: goto L_8007321C; break;
        case 5: goto L_8007333C; break;
        case 6: goto L_800732AC; break;
        case 7: goto L_80073068; break;
        default: switch_error(__func__, 0x80072EB8, 0x800DABE8);
    }
    // 0x80072EBC: nop

L_80072EC0:
    // 0x80072EC0: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80072EC4: lw          $t3, 0x3F5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3F5C);
    // 0x80072EC8: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x80072ECC: lw          $t4, 0x68($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X68);
    // 0x80072ED0: nop

    // 0x80072ED4: bne         $t4, $zero, L_80072F48
    if (ctx->r12 != 0) {
        // 0x80072ED8: lhu         $t9, 0x26($sp)
        ctx->r25 = MEM_HU(ctx->r29, 0X26);
            goto L_80072F48;
    }
    // 0x80072ED8: lhu         $t9, 0x26($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X26);
    // 0x80072EDC: lw          $t5, 0x3F60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3F60);
    // 0x80072EE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80072EE4: lw          $t6, 0x68($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X68);
    // 0x80072EE8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80072EEC: bne         $t6, $zero, L_80072F48
    if (ctx->r14 != 0) {
        // 0x80072EF0: lhu         $t9, 0x26($sp)
        ctx->r25 = MEM_HU(ctx->r29, 0X26);
            goto L_80072F48;
    }
    // 0x80072EF0: lhu         $t9, 0x26($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X26);
    // 0x80072EF4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80072EF8: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x80072EFC: jal         0x800711DC
    // 0x80072F00: nop

    func_800711DC(rdram, ctx);
        goto after_0;
    // 0x80072F00: nop

    after_0:
    // 0x80072F04: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80072F08: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x80072F0C: jal         0x80070EC0
    // 0x80072F10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_1;
    // 0x80072F10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80072F14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80072F18: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    // 0x80072F1C: jal         0x80070EC0
    // 0x80072F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_2;
    // 0x80072F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80072F24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80072F28: addiu       $a1, $zero, -0x140
    ctx->r5 = ADD32(0, -0X140);
    // 0x80072F2C: jal         0x80070EC0
    // 0x80072F30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_3;
    // 0x80072F30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80072F34: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80072F38: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80072F3C: addiu       $t8, $zero, 0x140
    ctx->r24 = ADD32(0, 0X140);
    // 0x80072F40: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80072F44: lhu         $t9, 0x26($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X26);
L_80072F48:
    // 0x80072F48: nop

    // 0x80072F4C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x80072F50: beq         $t0, $zero, L_800734A8
    if (ctx->r8 == 0) {
        // 0x80072F54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800734A8;
    }
    // 0x80072F54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80072F58: jal         0x80035770
    // 0x80072F5C: nop

    func_80035770(rdram, ctx);
        goto after_4;
    // 0x80072F5C: nop

    after_4:
    // 0x80072F60: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80072F64: lw          $t1, 0x3F5C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3F5C);
    // 0x80072F68: nop

    // 0x80072F6C: lw          $a0, 0x64($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X64);
    // 0x80072F70: jal         0x80063BF0
    // 0x80072F74: nop

    func_80063BF0(rdram, ctx);
        goto after_5;
    // 0x80072F74: nop

    after_5:
    // 0x80072F78: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80072F7C: lw          $t2, 0x3F5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3F5C);
    // 0x80072F80: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80072F84: sw          $v0, 0x6C($t2)
    MEM_W(0X6C, ctx->r10) = ctx->r2;
    // 0x80072F88: lw          $t3, 0x3F60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3F60);
    // 0x80072F8C: nop

    // 0x80072F90: lw          $a0, 0x64($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X64);
    // 0x80072F94: jal         0x80063BF0
    // 0x80072F98: nop

    func_80063BF0(rdram, ctx);
        goto after_6;
    // 0x80072F98: nop

    after_6:
    // 0x80072F9C: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80072FA0: lw          $t4, 0x3F60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3F60);
    // 0x80072FA4: b           L_800734A4
    // 0x80072FA8: sw          $v0, 0x6C($t4)
    MEM_W(0X6C, ctx->r12) = ctx->r2;
        goto L_800734A4;
    // 0x80072FA8: sw          $v0, 0x6C($t4)
    MEM_W(0X6C, ctx->r12) = ctx->r2;
L_80072FAC:
    // 0x80072FAC: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80072FB0: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80072FB4: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80072FB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80072FBC: bgtz        $a1, L_80073024
    if (SIGNED(ctx->r5) > 0) {
        // 0x80072FC0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80073024;
    }
    // 0x80072FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80072FC4: jal         0x80070EC0
    // 0x80072FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_7;
    // 0x80072FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80072FCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80072FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072FD4: jal         0x80070EC0
    // 0x80072FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_8;
    // 0x80072FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x80072FDC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80072FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072FE4: jal         0x80070EC0
    // 0x80072FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_9;
    // 0x80072FE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80072FEC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072FF0: addiu       $v0, $v0, 0x3F60
    ctx->r2 = ADD32(ctx->r2, 0X3F60);
    // 0x80072FF4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80072FF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80072FFC: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80073000: swc1        $f4, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f4.u32l;
    // 0x80073004: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80073008: lw          $t7, 0x3F5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3F5C);
    // 0x8007300C: lwc1        $f6, 0x80($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X80);
    // 0x80073010: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80073014: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073018: swc1        $f6, 0x80($t7)
    MEM_W(0X80, ctx->r15) = ctx->f6.u32l;
    // 0x8007301C: b           L_800734A4
    // 0x80073020: sw          $t8, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r24;
        goto L_800734A4;
    // 0x80073020: sw          $t8, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r24;
L_80073024:
    // 0x80073024: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073028: jal         0x80070EC0
    // 0x8007302C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_10;
    // 0x8007302C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80073030: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073034: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80073038: jal         0x80070EC0
    // 0x8007303C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_11;
    // 0x8007303C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80073040: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073044: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80073048: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007304C: jal         0x80070EC0
    // 0x80073050: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_80070EC0(rdram, ctx);
        goto after_12;
    // 0x80073050: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_12:
    // 0x80073054: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80073058: nop

    // 0x8007305C: addiu       $t0, $t9, -0x20
    ctx->r8 = ADD32(ctx->r25, -0X20);
    // 0x80073060: b           L_800734A4
    // 0x80073064: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
        goto L_800734A4;
    // 0x80073064: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
L_80073068:
    // 0x80073068: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8007306C: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80073070: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073078: bgtz        $a1, L_800730BC
    if (SIGNED(ctx->r5) > 0) {
        // 0x8007307C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_800730BC;
    }
    // 0x8007307C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073080: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073084: jal         0x80070EC0
    // 0x80073088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_13;
    // 0x80073088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8007308C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80073090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073094: jal         0x80070EC0
    // 0x80073098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_14;
    // 0x80073098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8007309C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800730A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800730A4: jal         0x80070EC0
    // 0x800730A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_15;
    // 0x800730A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x800730AC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800730B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800730B4: b           L_800734A4
    // 0x800730B8: sw          $t1, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r9;
        goto L_800734A4;
    // 0x800730B8: sw          $t1, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r9;
L_800730BC:
    // 0x800730BC: jal         0x80070EC0
    // 0x800730C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_16;
    // 0x800730C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x800730C4: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800730C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800730CC: jal         0x80070EC0
    // 0x800730D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_17;
    // 0x800730D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x800730D4: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800730D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800730DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800730E0: jal         0x80070EC0
    // 0x800730E4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_80070EC0(rdram, ctx);
        goto after_18;
    // 0x800730E4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_18:
    // 0x800730E8: lh          $t2, 0x0($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X0);
    // 0x800730EC: nop

    // 0x800730F0: addiu       $t3, $t2, -0x20
    ctx->r11 = ADD32(ctx->r10, -0X20);
    // 0x800730F4: b           L_800734A4
    // 0x800730F8: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
        goto L_800734A4;
    // 0x800730F8: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
L_800730FC:
    // 0x800730FC: lhu         $t4, 0x26($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X26);
    // 0x80073100: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80073104: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x80073108: beq         $t5, $zero, L_800734A8
    if (ctx->r13 == 0) {
        // 0x8007310C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800734A8;
    }
    // 0x8007310C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073110: lh          $t6, 0x3A64($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X3A64);
    // 0x80073114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073118: bne         $t6, $at, L_80073144
    if (ctx->r14 != ctx->r1) {
        // 0x8007311C: nop
    
            goto L_80073144;
    }
    // 0x8007311C: nop

    // 0x80073120: jal         0x80035770
    // 0x80073124: nop

    func_80035770(rdram, ctx);
        goto after_19;
    // 0x80073124: nop

    after_19:
    // 0x80073128: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8007312C: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80073130: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80073134: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80073138: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007313C: b           L_800734A4
    // 0x80073140: sw          $t7, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r15;
        goto L_800734A4;
    // 0x80073140: sw          $t7, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r15;
L_80073144:
    // 0x80073144: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80073148: jal         0x800296E0
    // 0x8007314C: addiu       $a0, $a0, 0x2D48
    ctx->r4 = ADD32(ctx->r4, 0X2D48);
    func_800296E0(rdram, ctx);
        goto after_20;
    // 0x8007314C: addiu       $a0, $a0, 0x2D48
    ctx->r4 = ADD32(ctx->r4, 0X2D48);
    after_20:
    // 0x80073150: b           L_800734A8
    // 0x80073154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800734A8;
    // 0x80073154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80073158:
    // 0x80073158: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8007315C: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80073160: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073168: slti        $at, $a1, 0x141
    ctx->r1 = SIGNED(ctx->r5) < 0X141 ? 1 : 0;
    // 0x8007316C: bne         $at, $zero, L_800731EC
    if (ctx->r1 != 0) {
        // 0x80073170: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_800731EC;
    }
    // 0x80073170: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073174: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073178: jal         0x80070EC0
    // 0x8007317C: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    func_80070EC0(rdram, ctx);
        goto after_21;
    // 0x8007317C: addiu       $a1, $zero, 0x140
    ctx->r5 = ADD32(0, 0X140);
    after_21:
    // 0x80073180: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80073184: addiu       $a1, $zero, -0x140
    ctx->r5 = ADD32(0, -0X140);
    // 0x80073188: jal         0x80070EC0
    // 0x8007318C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_22;
    // 0x8007318C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x80073190: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80073194: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x80073198: jal         0x8007216C
    // 0x8007319C: nop

    func_8007216C(rdram, ctx);
        goto after_23;
    // 0x8007319C: nop

    after_23:
    // 0x800731A0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800731A4: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x800731A8: jal         0x80072300
    // 0x800731AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80072300(rdram, ctx);
        goto after_24;
    // 0x800731AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x800731B0: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x800731B4: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x800731B8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800731BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800731C0: sw          $t9, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r25;
    // 0x800731C4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800731C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800731CC: jal         0x80070EC0
    // 0x800731D0: addiu       $a2, $zero, -0xF0
    ctx->r6 = ADD32(0, -0XF0);
    func_80070EC0(rdram, ctx);
        goto after_25;
    // 0x800731D0: addiu       $a2, $zero, -0xF0
    ctx->r6 = ADD32(0, -0XF0);
    after_25:
    // 0x800731D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800731D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800731DC: jal         0x80070EC0
    // 0x800731E0: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    func_80070EC0(rdram, ctx);
        goto after_26;
    // 0x800731E0: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_26:
    // 0x800731E4: b           L_800734A8
    // 0x800731E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800734A8;
    // 0x800731E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800731EC:
    // 0x800731EC: jal         0x80070EC0
    // 0x800731F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_27;
    // 0x800731F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x800731F4: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800731F8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800731FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073200: jal         0x80070EC0
    // 0x80073204: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    func_80070EC0(rdram, ctx);
        goto after_28;
    // 0x80073204: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_28:
    // 0x80073208: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x8007320C: nop

    // 0x80073210: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x80073214: b           L_800734A4
    // 0x80073218: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
        goto L_800734A4;
    // 0x80073218: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
L_8007321C:
    // 0x8007321C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80073220: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80073224: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x80073228: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8007322C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073230: jal         0x80070EC0
    // 0x80073234: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    func_80070EC0(rdram, ctx);
        goto after_29;
    // 0x80073234: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    after_29:
    // 0x80073238: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007323C: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x80073240: jal         0x80072300
    // 0x80073244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80072300(rdram, ctx);
        goto after_30;
    // 0x80073244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_30:
    // 0x80073248: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x8007324C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80073250: jal         0x80070EC0
    // 0x80073254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_31;
    // 0x80073254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x80073258: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8007325C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80073260: bgtz        $a1, L_800732A0
    if (SIGNED(ctx->r5) > 0) {
        // 0x80073264: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_800732A0;
    }
    // 0x80073264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073268: sw          $t2, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r10;
    // 0x8007326C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80073270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073274: jal         0x80070EC0
    // 0x80073278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_32;
    // 0x80073278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_32:
    // 0x8007327C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80073280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073284: jal         0x80070EC0
    // 0x80073288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_33;
    // 0x80073288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_33:
    // 0x8007328C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80073290: addiu       $a0, $a0, 0x3F76
    ctx->r4 = ADD32(ctx->r4, 0X3F76);
    // 0x80073294: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80073298: b           L_800734A4
    // 0x8007329C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_800734A4;
    // 0x8007329C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_800732A0:
    // 0x800732A0: addiu       $t3, $a1, -0x20
    ctx->r11 = ADD32(ctx->r5, -0X20);
    // 0x800732A4: b           L_800734A4
    // 0x800732A8: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
        goto L_800734A4;
    // 0x800732A8: sh          $t3, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r11;
L_800732AC:
    // 0x800732AC: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800732B0: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x800732B4: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x800732B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800732BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800732C0: jal         0x80070EC0
    // 0x800732C4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    func_80070EC0(rdram, ctx);
        goto after_34;
    // 0x800732C4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    after_34:
    // 0x800732C8: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x800732CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800732D0: jal         0x80070EC0
    // 0x800732D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80070EC0(rdram, ctx);
        goto after_35;
    // 0x800732D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_35:
    // 0x800732D8: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800732DC: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800732E0: slti        $at, $a1, 0xF0
    ctx->r1 = SIGNED(ctx->r5) < 0XF0 ? 1 : 0;
    // 0x800732E4: bne         $at, $zero, L_80073334
    if (ctx->r1 != 0) {
        // 0x800732E8: addiu       $t6, $a1, 0x20
        ctx->r14 = ADD32(ctx->r5, 0X20);
            goto L_80073334;
    }
    // 0x800732E8: addiu       $t6, $a1, 0x20
    ctx->r14 = ADD32(ctx->r5, 0X20);
    // 0x800732EC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800732F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800732F4: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x800732F8: jal         0x800711DC
    // 0x800732FC: sw          $t4, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r12;
    func_800711DC(rdram, ctx);
        goto after_36;
    // 0x800732FC: sw          $t4, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r12;
    after_36:
    // 0x80073300: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80073304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073308: jal         0x80070EC0
    // 0x8007330C: addiu       $a2, $zero, -0xF0
    ctx->r6 = ADD32(0, -0XF0);
    func_80070EC0(rdram, ctx);
        goto after_37;
    // 0x8007330C: addiu       $a2, $zero, -0xF0
    ctx->r6 = ADD32(0, -0XF0);
    after_37:
    // 0x80073310: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80073314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80073318: jal         0x80070EC0
    // 0x8007331C: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    func_80070EC0(rdram, ctx);
        goto after_38;
    // 0x8007331C: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_38:
    // 0x80073320: addiu       $t5, $zero, 0x140
    ctx->r13 = ADD32(0, 0X140);
    // 0x80073324: jal         0x80035770
    // 0x80073328: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    func_80035770(rdram, ctx);
        goto after_39;
    // 0x80073328: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    after_39:
    // 0x8007332C: b           L_800734A8
    // 0x80073330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800734A8;
    // 0x80073330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80073334:
    // 0x80073334: b           L_800734A4
    // 0x80073338: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
        goto L_800734A4;
    // 0x80073338: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
L_8007333C:
    // 0x8007333C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80073340: addiu       $s0, $s0, 0x3F74
    ctx->r16 = ADD32(ctx->r16, 0X3F74);
    // 0x80073344: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80073348: lw          $a0, 0x3F6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3F6C);
    // 0x8007334C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073350: jal         0x80072300
    // 0x80073354: sh          $a2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r6;
    func_80072300(rdram, ctx);
        goto after_40;
    // 0x80073354: sh          $a2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r6;
    after_40:
    // 0x80073358: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007335C: addiu       $a0, $a0, 0x3F76
    ctx->r4 = ADD32(ctx->r4, 0X3F76);
    // 0x80073360: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x80073364: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80073368: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007336C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80073370: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
    // 0x80073374: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073378: addiu       $v1, $v1, 0x3F78
    ctx->r3 = ADD32(ctx->r3, 0X3F78);
    // 0x8007337C: lhu         $a2, 0x24($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X24);
    // 0x80073380: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80073384: bgez        $a1, L_80073398
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80073388: sh          $t7, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r15;
            goto L_80073398;
    }
    // 0x80073388: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x8007338C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80073390: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x80073394: nop

L_80073398:
    // 0x80073398: bne         $a1, $zero, L_800733B0
    if (ctx->r5 != 0) {
        // 0x8007339C: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_800733B0;
    }
    // 0x8007339C: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x800733A0: lh          $t1, 0x0($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X0);
    // 0x800733A4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800733A8: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x800733AC: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
L_800733B0:
    // 0x800733B0: lw          $t3, 0x3A4C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3A4C);
    // 0x800733B4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x800733B8: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800733BC: andi        $t8, $a2, 0x800
    ctx->r24 = ctx->r6 & 0X800;
    // 0x800733C0: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x800733C4: mflo        $v0
    ctx->r2 = lo;
    // 0x800733C8: addiu       $v0, $v0, -0x78
    ctx->r2 = ADD32(ctx->r2, -0X78);
    // 0x800733CC: bgtz        $v0, L_800733E0
    if (SIGNED(ctx->r2) > 0) {
        // 0x800733D0: subu        $t4, $v0, $a1
        ctx->r12 = SUB32(ctx->r2, ctx->r5);
            goto L_800733E0;
    }
    // 0x800733D0: subu        $t4, $v0, $a1
    ctx->r12 = SUB32(ctx->r2, ctx->r5);
    // 0x800733D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800733D8: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x800733DC: subu        $t4, $v0, $a1
    ctx->r12 = SUB32(ctx->r2, ctx->r5);
L_800733E0:
    // 0x800733E0: bgez        $t4, L_800733F4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x800733E4: nop
    
            goto L_800733F4;
    }
    // 0x800733E4: nop

    // 0x800733E8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x800733EC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x800733F0: nop

L_800733F4:
    // 0x800733F4: bne         $v0, $a1, L_8007340C
    if (ctx->r2 != ctx->r5) {
        // 0x800733F8: nop
    
            goto L_8007340C;
    }
    // 0x800733F8: nop

    // 0x800733FC: lh          $t5, 0x0($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X0);
    // 0x80073400: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80073404: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80073408: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_8007340C:
    // 0x8007340C: div         $zero, $a1, $a3
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r7)));
    // 0x80073410: bne         $a3, $zero, L_8007341C
    if (ctx->r7 != 0) {
        // 0x80073414: nop
    
            goto L_8007341C;
    }
    // 0x80073414: nop

    // 0x80073418: break       7
    do_break(2147955736);
L_8007341C:
    // 0x8007341C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073420: bne         $a3, $at, L_80073434
    if (ctx->r7 != ctx->r1) {
        // 0x80073424: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073434;
    }
    // 0x80073424: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073428: bne         $a1, $at, L_80073434
    if (ctx->r5 != ctx->r1) {
        // 0x8007342C: nop
    
            goto L_80073434;
    }
    // 0x8007342C: nop

    // 0x80073430: break       6
    do_break(2147955760);
L_80073434:
    // 0x80073434: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073438: mfhi        $t7
    ctx->r15 = hi;
    // 0x8007343C: bne         $t7, $zero, L_80073474
    if (ctx->r15 != 0) {
        // 0x80073440: lhu         $v0, 0x26($sp)
        ctx->r2 = MEM_HU(ctx->r29, 0X26);
            goto L_80073474;
    }
    // 0x80073440: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x80073444: beq         $t8, $zero, L_80073458
    if (ctx->r24 == 0) {
        // 0x80073448: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80073458;
    }
    // 0x80073448: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8007344C: addiu       $t9, $zero, -0x4
    ctx->r25 = ADD32(0, -0X4);
    // 0x80073450: b           L_80073470
    // 0x80073454: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
        goto L_80073470;
    // 0x80073454: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
L_80073458:
    // 0x80073458: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x8007345C: beq         $t0, $zero, L_8007346C
    if (ctx->r8 == 0) {
        // 0x80073460: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_8007346C;
    }
    // 0x80073460: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80073464: b           L_80073470
    // 0x80073468: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
        goto L_80073470;
    // 0x80073468: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_8007346C:
    // 0x8007346C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_80073470:
    // 0x80073470: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
L_80073474:
    // 0x80073474: nop

    // 0x80073478: andi        $t2, $v0, 0x4000
    ctx->r10 = ctx->r2 & 0X4000;
    // 0x8007347C: beq         $t2, $zero, L_80073494
    if (ctx->r10 == 0) {
        // 0x80073480: andi        $t4, $v0, 0x8000
        ctx->r12 = ctx->r2 & 0X8000;
            goto L_80073494;
    }
    // 0x80073480: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x80073484: sw          $t3, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r11;
    // 0x80073488: b           L_800734A4
    // 0x8007348C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
        goto L_800734A4;
    // 0x8007348C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80073490: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
L_80073494:
    // 0x80073494: beq         $t4, $zero, L_800734A4
    if (ctx->r12 == 0) {
        // 0x80073498: lui         $a0, 0x8007
        ctx->r4 = S32(0X8007 << 16);
            goto L_800734A4;
    }
    // 0x80073498: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8007349C: jal         0x800296E0
    // 0x800734A0: addiu       $a0, $a0, 0x2D48
    ctx->r4 = ADD32(ctx->r4, 0X2D48);
    func_800296E0(rdram, ctx);
        goto after_41;
    // 0x800734A0: addiu       $a0, $a0, 0x2D48
    ctx->r4 = ADD32(ctx->r4, 0X2D48);
    after_41:
L_800734A4:
    // 0x800734A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800734A8:
    // 0x800734A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800734AC: jr          $ra
    // 0x800734B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800734B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800734D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800734D0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800734D4: addiu       $v0, $v0, 0x3A08
    ctx->r2 = ADD32(ctx->r2, 0X3A08);
    // 0x800734D8: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x800734DC: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x800734E0: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800734E4: bne         $at, $zero, L_800734F0
    if (ctx->r1 != 0) {
        // 0x800734E8: nop
    
            goto L_800734F0;
    }
    // 0x800734E8: nop

    // 0x800734EC: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
L_800734F0:
    // 0x800734F0: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x800734F4: nop

    // 0x800734F8: slti        $at, $t7, 0x64
    ctx->r1 = SIGNED(ctx->r15) < 0X64 ? 1 : 0;
    // 0x800734FC: bne         $at, $zero, L_80073508
    if (ctx->r1 != 0) {
        // 0x80073500: addiu       $a0, $zero, 0x63
        ctx->r4 = ADD32(0, 0X63);
            goto L_80073508;
    }
    // 0x80073500: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    // 0x80073504: sh          $a0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r4;
L_80073508:
    // 0x80073508: lhu         $t8, 0x8($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X8);
    // 0x8007350C: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    // 0x80073510: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80073514: bne         $at, $zero, L_80073520
    if (ctx->r1 != 0) {
        // 0x80073518: addiu       $a0, $zero, 0x63
        ctx->r4 = ADD32(0, 0X63);
            goto L_80073520;
    }
    // 0x80073518: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    // 0x8007351C: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
L_80073520:
    // 0x80073520: lhu         $t9, 0xA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA);
    // 0x80073524: nop

    // 0x80073528: slt         $at, $t9, $a1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007352C: bne         $at, $zero, L_80073538
    if (ctx->r1 != 0) {
        // 0x80073530: nop
    
            goto L_80073538;
    }
    // 0x80073530: nop

    // 0x80073534: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_80073538:
    // 0x80073538: lhu         $t0, 0xC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XC);
    // 0x8007353C: nop

    // 0x80073540: slt         $at, $t0, $a1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80073544: bne         $at, $zero, L_80073550
    if (ctx->r1 != 0) {
        // 0x80073548: nop
    
            goto L_80073550;
    }
    // 0x80073548: nop

    // 0x8007354C: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
L_80073550:
    // 0x80073550: lhu         $t1, 0xE($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XE);
    // 0x80073554: nop

    // 0x80073558: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007355C: bne         $at, $zero, L_80073568
    if (ctx->r1 != 0) {
        // 0x80073560: nop
    
            goto L_80073568;
    }
    // 0x80073560: nop

    // 0x80073564: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
L_80073568:
    // 0x80073568: lhu         $t2, 0x10($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X10);
    // 0x8007356C: nop

    // 0x80073570: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80073574: bne         $at, $zero, L_80073580
    if (ctx->r1 != 0) {
        // 0x80073578: nop
    
            goto L_80073580;
    }
    // 0x80073578: nop

    // 0x8007357C: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
L_80073580:
    // 0x80073580: lhu         $t3, 0x12($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X12);
    // 0x80073584: nop

    // 0x80073588: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007358C: bne         $at, $zero, L_80073598
    if (ctx->r1 != 0) {
        // 0x80073590: nop
    
            goto L_80073598;
    }
    // 0x80073590: nop

    // 0x80073594: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
L_80073598:
    // 0x80073598: lhu         $t4, 0x14($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X14);
    // 0x8007359C: nop

    // 0x800735A0: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800735A4: bne         $at, $zero, L_800735B0
    if (ctx->r1 != 0) {
        // 0x800735A8: nop
    
            goto L_800735B0;
    }
    // 0x800735A8: nop

    // 0x800735AC: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
L_800735B0:
    // 0x800735B0: lhu         $t5, 0x16($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X16);
    // 0x800735B4: nop

    // 0x800735B8: slti        $at, $t5, 0x64
    ctx->r1 = SIGNED(ctx->r13) < 0X64 ? 1 : 0;
    // 0x800735BC: bne         $at, $zero, L_800735C8
    if (ctx->r1 != 0) {
        // 0x800735C0: nop
    
            goto L_800735C8;
    }
    // 0x800735C0: nop

    // 0x800735C4: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
L_800735C8:
    // 0x800735C8: lhu         $t6, 0x18($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X18);
    // 0x800735CC: nop

    // 0x800735D0: slti        $at, $t6, 0x64
    ctx->r1 = SIGNED(ctx->r14) < 0X64 ? 1 : 0;
    // 0x800735D4: bne         $at, $zero, L_800735E0
    if (ctx->r1 != 0) {
        // 0x800735D8: nop
    
            goto L_800735E0;
    }
    // 0x800735D8: nop

    // 0x800735DC: sh          $a0, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r4;
L_800735E0:
    // 0x800735E0: lhu         $t7, 0x1A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1A);
    // 0x800735E4: nop

    // 0x800735E8: slti        $at, $t7, 0x64
    ctx->r1 = SIGNED(ctx->r15) < 0X64 ? 1 : 0;
    // 0x800735EC: bne         $at, $zero, L_800735F8
    if (ctx->r1 != 0) {
        // 0x800735F0: nop
    
            goto L_800735F8;
    }
    // 0x800735F0: nop

    // 0x800735F4: sh          $a0, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r4;
L_800735F8:
    // 0x800735F8: lhu         $t8, 0x1E($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1E);
    // 0x800735FC: nop

    // 0x80073600: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x80073604: bne         $at, $zero, L_80073610
    if (ctx->r1 != 0) {
        // 0x80073608: nop
    
            goto L_80073610;
    }
    // 0x80073608: nop

    // 0x8007360C: sh          $a0, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r4;
L_80073610:
    // 0x80073610: lh          $t9, 0x24($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X24);
    // 0x80073614: nop

    // 0x80073618: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007361C: bne         $at, $zero, L_80073628
    if (ctx->r1 != 0) {
        // 0x80073620: nop
    
            goto L_80073628;
    }
    // 0x80073620: nop

    // 0x80073624: sh          $zero, 0x24($v0)
    MEM_H(0X24, ctx->r2) = 0;
L_80073628:
    // 0x80073628: lhu         $t0, 0x26($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X26);
    // 0x8007362C: nop

    // 0x80073630: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x80073634: bne         $at, $zero, L_80073640
    if (ctx->r1 != 0) {
        // 0x80073638: nop
    
            goto L_80073640;
    }
    // 0x80073638: nop

    // 0x8007363C: sh          $a0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r4;
L_80073640:
    // 0x80073640: lhu         $t1, 0x28($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X28);
    // 0x80073644: nop

    // 0x80073648: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007364C: bne         $at, $zero, L_80073658
    if (ctx->r1 != 0) {
        // 0x80073650: nop
    
            goto L_80073658;
    }
    // 0x80073650: nop

    // 0x80073654: sh          $zero, 0x28($v0)
    MEM_H(0X28, ctx->r2) = 0;
L_80073658:
    // 0x80073658: lhu         $t2, 0x2A($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2A);
    // 0x8007365C: nop

    // 0x80073660: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80073664: bne         $at, $zero, L_80073670
    if (ctx->r1 != 0) {
        // 0x80073668: nop
    
            goto L_80073670;
    }
    // 0x80073668: nop

    // 0x8007366C: sh          $zero, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = 0;
L_80073670:
    // 0x80073670: lhu         $t3, 0x2C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2C);
    // 0x80073674: nop

    // 0x80073678: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007367C: bne         $at, $zero, L_80073688
    if (ctx->r1 != 0) {
        // 0x80073680: nop
    
            goto L_80073688;
    }
    // 0x80073680: nop

    // 0x80073684: sh          $zero, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = 0;
L_80073688:
    // 0x80073688: lhu         $t4, 0x2E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2E);
    // 0x8007368C: nop

    // 0x80073690: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80073694: bne         $at, $zero, L_800736A0
    if (ctx->r1 != 0) {
        // 0x80073698: nop
    
            goto L_800736A0;
    }
    // 0x80073698: nop

    // 0x8007369C: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
L_800736A0:
    // 0x800736A0: lhu         $t5, 0x30($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X30);
    // 0x800736A4: nop

    // 0x800736A8: slt         $at, $t5, $a1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800736AC: bne         $at, $zero, L_800736B8
    if (ctx->r1 != 0) {
        // 0x800736B0: nop
    
            goto L_800736B8;
    }
    // 0x800736B0: nop

    // 0x800736B4: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
L_800736B8:
    // 0x800736B8: lhu         $t6, 0x32($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X32);
    // 0x800736BC: nop

    // 0x800736C0: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800736C4: bne         $at, $zero, L_800736D0
    if (ctx->r1 != 0) {
        // 0x800736C8: nop
    
            goto L_800736D0;
    }
    // 0x800736C8: nop

    // 0x800736CC: sh          $zero, 0x32($v0)
    MEM_H(0X32, ctx->r2) = 0;
L_800736D0:
    // 0x800736D0: lhu         $t7, 0x34($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X34);
    // 0x800736D4: nop

    // 0x800736D8: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800736DC: bne         $at, $zero, L_800736E8
    if (ctx->r1 != 0) {
        // 0x800736E0: nop
    
            goto L_800736E8;
    }
    // 0x800736E0: nop

    // 0x800736E4: sh          $zero, 0x34($v0)
    MEM_H(0X34, ctx->r2) = 0;
L_800736E8:
    // 0x800736E8: lhu         $t8, 0x3E($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X3E);
    // 0x800736EC: nop

    // 0x800736F0: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x800736F4: bne         $at, $zero, L_80073700
    if (ctx->r1 != 0) {
        // 0x800736F8: nop
    
            goto L_80073700;
    }
    // 0x800736F8: nop

    // 0x800736FC: sh          $a0, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r4;
L_80073700:
    // 0x80073700: lhu         $t9, 0x36($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X36);
    // 0x80073704: nop

    // 0x80073708: slti        $at, $t9, 0x64
    ctx->r1 = SIGNED(ctx->r25) < 0X64 ? 1 : 0;
    // 0x8007370C: bne         $at, $zero, L_80073718
    if (ctx->r1 != 0) {
        // 0x80073710: nop
    
            goto L_80073718;
    }
    // 0x80073710: nop

    // 0x80073714: sh          $a0, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r4;
L_80073718:
    // 0x80073718: lhu         $t0, 0x38($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X38);
    // 0x8007371C: nop

    // 0x80073720: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x80073724: bne         $at, $zero, L_80073730
    if (ctx->r1 != 0) {
        // 0x80073728: nop
    
            goto L_80073730;
    }
    // 0x80073728: nop

    // 0x8007372C: sh          $a0, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r4;
L_80073730:
    // 0x80073730: lhu         $t1, 0x3A($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X3A);
    // 0x80073734: nop

    // 0x80073738: slti        $at, $t1, 0x64
    ctx->r1 = SIGNED(ctx->r9) < 0X64 ? 1 : 0;
    // 0x8007373C: bne         $at, $zero, L_80073748
    if (ctx->r1 != 0) {
        // 0x80073740: nop
    
            goto L_80073748;
    }
    // 0x80073740: nop

    // 0x80073744: sh          $a0, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r4;
L_80073748:
    // 0x80073748: jr          $ra
    // 0x8007374C: nop

    return;
    // 0x8007374C: nop

;}
RECOMP_FUNC void func_80073750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073750: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80073754: addiu       $v0, $v0, -0x2F98
    ctx->r2 = ADD32(ctx->r2, -0X2F98);
    // 0x80073758: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8007375C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80073760: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80073764: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80073768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007376C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80073770: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80073774: sb          $a0, 0x5019($t7)
    MEM_B(0X5019, ctx->r15) = ctx->r4;
    // 0x80073778: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8007377C: nop

    // 0x80073780: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80073784: sb          $a0, 0x52E5($t9)
    MEM_B(0X52E5, ctx->r25) = ctx->r4;
    // 0x80073788: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8007378C: nop

    // 0x80073790: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80073794: sb          $a0, 0x55B1($t7)
    MEM_B(0X55B1, ctx->r15) = ctx->r4;
    // 0x80073798: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8007379C: nop

    // 0x800737A0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x800737A4: sb          $a0, 0x587D($t9)
    MEM_B(0X587D, ctx->r25) = ctx->r4;
    // 0x800737A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800737AC: nop

    // 0x800737B0: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800737B4: sb          $a0, 0x5B49($t7)
    MEM_B(0X5B49, ctx->r15) = ctx->r4;
    // 0x800737B8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800737BC: nop

    // 0x800737C0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x800737C4: sb          $a0, 0x5E15($t9)
    MEM_B(0X5E15, ctx->r25) = ctx->r4;
    // 0x800737C8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800737CC: nop

    // 0x800737D0: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800737D4: sb          $a0, 0x60E1($t7)
    MEM_B(0X60E1, ctx->r15) = ctx->r4;
    // 0x800737D8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800737DC: nop

    // 0x800737E0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x800737E4: sb          $a0, 0x63AD($t9)
    MEM_B(0X63AD, ctx->r25) = ctx->r4;
    // 0x800737E8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800737EC: nop

    // 0x800737F0: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800737F4: sb          $a0, 0x6679($t7)
    MEM_B(0X6679, ctx->r15) = ctx->r4;
    // 0x800737F8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800737FC: nop

    // 0x80073800: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80073804: jal         0x800494D0
    // 0x80073808: sb          $a0, 0x6945($t9)
    MEM_B(0X6945, ctx->r25) = ctx->r4;
    func_800494D0(rdram, ctx);
        goto after_0;
    // 0x80073808: sb          $a0, 0x6945($t9)
    MEM_B(0X6945, ctx->r25) = ctx->r4;
    after_0:
    // 0x8007380C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80073810: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073814: sh          $v0, 0x3A64($at)
    MEM_H(0X3A64, ctx->r1) = ctx->r2;
    // 0x80073818: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x8007381C: lhu         $a2, 0x8($t2)
    ctx->r6 = MEM_HU(ctx->r10, 0X8);
    // 0x80073820: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80073824: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x80073828: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x8007382C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80073830: sltiu       $t0, $t6, 0x1
    ctx->r8 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80073834: addiu       $a1, $a1, 0x3A08
    ctx->r5 = ADD32(ctx->r5, 0X3A08);
    // 0x80073838: sltiu       $a2, $t0, 0x1
    ctx->r6 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8007383C: andi        $t9, $t3, 0x1
    ctx->r25 = ctx->r11 & 0X1;
    // 0x80073840: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80073844: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
    // 0x80073848: bne         $t3, $zero, L_80073868
    if (ctx->r11 != 0) {
        // 0x8007384C: or          $t5, $t3, $zero
        ctx->r13 = ctx->r11 | 0;
            goto L_80073868;
    }
    // 0x8007384C: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x80073850: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073854: lhu         $t6, 0xA($t2)
    ctx->r14 = MEM_HU(ctx->r10, 0XA);
    // 0x80073858: lhu         $t7, 0xA9E($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0XA9E);
    // 0x8007385C: addiu       $v0, $v0, 0x3F40
    ctx->r2 = ADD32(ctx->r2, 0X3F40);
    // 0x80073860: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x80073864: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_80073868:
    // 0x80073868: lhu         $t8, 0xAA0($t2)
    ctx->r24 = MEM_HU(ctx->r10, 0XAA0);
    // 0x8007386C: lhu         $t9, 0xC($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0XC);
    // 0x80073870: lhu         $v1, 0xA($t2)
    ctx->r3 = MEM_HU(ctx->r10, 0XA);
    // 0x80073874: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80073878: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
    // 0x8007387C: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x80073880: lhu         $a0, 0xA9E($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0XA9E);
    // 0x80073884: beq         $t7, $zero, L_800738A0
    if (ctx->r15 == 0) {
        // 0x80073888: sll         $t9, $t0, 2
        ctx->r25 = S32(ctx->r8 << 2);
            goto L_800738A0;
    }
    // 0x80073888: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8007388C: lui         $ra, 0x801B
    ctx->r31 = S32(0X801B << 16);
    // 0x80073890: addiu       $ra, $ra, 0x3F48
    ctx->r31 = ADD32(ctx->r31, 0X3F48);
    // 0x80073894: sh          $v1, 0x8($ra)
    MEM_H(0X8, ctx->r31) = ctx->r3;
    // 0x80073898: b           L_800738B8
    // 0x8007389C: sh          $a0, 0x12($ra)
    MEM_H(0X12, ctx->r31) = ctx->r4;
        goto L_800738B8;
    // 0x8007389C: sh          $a0, 0x12($ra)
    MEM_H(0X12, ctx->r31) = ctx->r4;
L_800738A0:
    // 0x800738A0: lui         $ra, 0x801B
    ctx->r31 = S32(0X801B << 16);
    // 0x800738A4: addiu       $ra, $ra, 0x3F48
    ctx->r31 = ADD32(ctx->r31, 0X3F48);
    // 0x800738A8: sll         $t8, $t3, 1
    ctx->r24 = S32(ctx->r11 << 1);
    // 0x800738AC: addu        $v0, $ra, $t8
    ctx->r2 = ADD32(ctx->r31, ctx->r24);
    // 0x800738B0: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x800738B4: sh          $a0, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r4;
L_800738B8:
    // 0x800738B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800738BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800738C0:
    // 0x800738C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800738C4:
    // 0x800738C4: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x800738C8: bne         $at, $zero, L_800738C4
    if (ctx->r1 != 0) {
        // 0x800738CC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_800738C4;
    }
    // 0x800738CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800738D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800738D4: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800738D8: bne         $at, $zero, L_800738C0
    if (ctx->r1 != 0) {
        // 0x800738DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800738C0;
    }
    // 0x800738DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800738E0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800738E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800738E8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800738EC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800738F0: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800738F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800738F8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800738FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80073900: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x80073904: lhu         $t9, 0x840($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X840);
    // 0x80073908: lhu         $t7, 0xA($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0XA);
    // 0x8007390C: sh          $t9, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r25;
    // 0x80073910: lbu         $t9, 0x839($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X839);
    // 0x80073914: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x80073918: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8007391C: sh          $t7, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r15;
    // 0x80073920: sh          $t9, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r25;
    // 0x80073924: lbu         $t7, 0x83B($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X83B);
    // 0x80073928: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8007392C: sh          $t6, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r14;
    // 0x80073930: lbu         $t6, 0x83C($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X83C);
    // 0x80073934: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80073938: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8007393C: sh          $t7, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r15;
    // 0x80073940: lhu         $t7, 0x844($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0X844);
    // 0x80073944: addu        $a3, $ra, $t9
    ctx->r7 = ADD32(ctx->r31, ctx->r25);
    // 0x80073948: sh          $t6, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r14;
    // 0x8007394C: lbu         $t8, 0x838($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X838);
    // 0x80073950: lhu         $t6, 0x846($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X846);
    // 0x80073954: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x80073958: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8007395C: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x80073960: sh          $t8, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r24;
    // 0x80073964: sh          $t6, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r14;
    // 0x80073968: beq         $t3, $zero, L_80073984
    if (ctx->r11 == 0) {
        // 0x8007396C: sh          $v0, 0x16($a1)
        MEM_H(0X16, ctx->r5) = ctx->r2;
            goto L_80073984;
    }
    // 0x8007396C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80073970: lh          $t0, 0x2($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X2);
    // 0x80073974: nop

    // 0x80073978: subu        $t6, $t0, $v0
    ctx->r14 = SUB32(ctx->r8, ctx->r2);
    // 0x8007397C: b           L_8007398C
    // 0x80073980: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
        goto L_8007398C;
    // 0x80073980: sh          $t6, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r14;
L_80073984:
    // 0x80073984: lh          $t0, 0x2($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X2);
    // 0x80073988: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
L_8007398C:
    // 0x8007398C: lbu         $t8, 0x83A($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X83A);
    // 0x80073990: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x80073994: sh          $t8, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r24;
    // 0x80073998: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8007399C: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x800739A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800739A4: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x800739A8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800739AC: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x800739B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800739B4: lhu         $t7, 0xC($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0XC);
    // 0x800739B8: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x800739BC: lh          $t6, 0x6($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X6);
    // 0x800739C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800739C4: subu        $t9, $v1, $t0
    ctx->r25 = SUB32(ctx->r3, ctx->r8);
    // 0x800739C8: sh          $t9, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r25;
    // 0x800739CC: addu        $v0, $t2, $t8
    ctx->r2 = ADD32(ctx->r10, ctx->r24);
    // 0x800739D0: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x800739D4: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800739D8: subu        $t7, $t6, $v1
    ctx->r15 = SUB32(ctx->r14, ctx->r3);
    // 0x800739DC: sh          $t7, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r15;
    // 0x800739E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800739E4: sh          $t9, 0x3A2C($at)
    MEM_H(0X3A2C, ctx->r1) = ctx->r25;
    // 0x800739E8: lhu         $t6, 0xA($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XA);
    // 0x800739EC: nop

    // 0x800739F0: sh          $t6, 0x3A2E($at)
    MEM_H(0X3A2E, ctx->r1) = ctx->r14;
    // 0x800739F4: lhu         $t7, 0x840($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X840);
    // 0x800739F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800739FC: sh          $t7, 0x3A30($at)
    MEM_H(0X3A30, ctx->r1) = ctx->r15;
    // 0x80073A00: lbu         $t8, 0x83C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X83C);
    // 0x80073A04: nop

    // 0x80073A08: sh          $t8, 0x3A32($at)
    MEM_H(0X3A32, ctx->r1) = ctx->r24;
    // 0x80073A0C: lbu         $t9, 0x83B($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X83B);
    // 0x80073A10: nop

    // 0x80073A14: sh          $t9, 0x3A34($at)
    MEM_H(0X3A34, ctx->r1) = ctx->r25;
    // 0x80073A18: lbu         $t6, 0x838($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X838);
    // 0x80073A1C: nop

    // 0x80073A20: sh          $t6, 0x3A36($at)
    MEM_H(0X3A36, ctx->r1) = ctx->r14;
    // 0x80073A24: lbu         $t7, 0x839($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X839);
    // 0x80073A28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A2C: sh          $t7, 0x3A38($at)
    MEM_H(0X3A38, ctx->r1) = ctx->r15;
    // 0x80073A30: lhu         $t8, 0x846($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X846);
    // 0x80073A34: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80073A38: sh          $t8, 0x3A3A($at)
    MEM_H(0X3A3A, ctx->r1) = ctx->r24;
    // 0x80073A3C: lhu         $t9, 0x844($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X844);
    // 0x80073A40: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x80073A44: sh          $t9, 0x3A3C($at)
    MEM_H(0X3A3C, ctx->r1) = ctx->r25;
    // 0x80073A48: lbu         $t6, 0x83A($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X83A);
    // 0x80073A4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A50: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80073A54: addu        $a0, $ra, $t7
    ctx->r4 = ADD32(ctx->r31, ctx->r15);
    // 0x80073A58: sh          $t6, 0x3A46($at)
    MEM_H(0X3A46, ctx->r1) = ctx->r14;
    // 0x80073A5C: lh          $t1, 0x0($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X0);
    // 0x80073A60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A64: beq         $t3, $zero, L_80073A80
    if (ctx->r11 == 0) {
        // 0x80073A68: sh          $t1, 0x3A3E($at)
        MEM_H(0X3A3E, ctx->r1) = ctx->r9;
            goto L_80073A80;
    }
    // 0x80073A68: sh          $t1, 0x3A3E($at)
    MEM_H(0X3A3E, ctx->r1) = ctx->r9;
    // 0x80073A6C: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x80073A70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A74: subu        $t8, $t0, $t1
    ctx->r24 = SUB32(ctx->r8, ctx->r9);
    // 0x80073A78: b           L_80073A88
    // 0x80073A7C: sh          $t8, 0x3A40($at)
    MEM_H(0X3A40, ctx->r1) = ctx->r24;
        goto L_80073A88;
    // 0x80073A7C: sh          $t8, 0x3A40($at)
    MEM_H(0X3A40, ctx->r1) = ctx->r24;
L_80073A80:
    // 0x80073A80: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x80073A84: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
L_80073A88:
    // 0x80073A88: lhu         $t9, 0xC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC);
    // 0x80073A8C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A90: sh          $t9, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r25;
    // 0x80073A94: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80073A98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073A9C: subu        $t6, $v1, $t0
    ctx->r14 = SUB32(ctx->r3, ctx->r8);
    // 0x80073AA0: sh          $t6, 0x3A48($at)
    MEM_H(0X3A48, ctx->r1) = ctx->r14;
    // 0x80073AA4: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x80073AA8: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80073AAC: lh          $t1, 0x3A64($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X3A64);
    // 0x80073AB0: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x80073AB4: bne         $t1, $zero, L_80073AF8
    if (ctx->r9 != 0) {
        // 0x80073AB8: sh          $t8, 0x3A4A($at)
        MEM_H(0X3A4A, ctx->r1) = ctx->r24;
            goto L_80073AF8;
    }
    // 0x80073AB8: sh          $t8, 0x3A4A($at)
    MEM_H(0X3A4A, ctx->r1) = ctx->r24;
    // 0x80073ABC: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80073AC0: addiu       $t9, $t9, 0x3F48
    ctx->r25 = ADD32(ctx->r25, 0X3F48);
    // 0x80073AC4: bne         $a3, $t9, L_80073AE0
    if (ctx->r7 != ctx->r25) {
        // 0x80073AC8: addiu       $ra, $zero, 0x1
        ctx->r31 = ADD32(0, 0X1);
            goto L_80073AE0;
    }
    // 0x80073AC8: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x80073ACC: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80073AD0: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x80073AD4: sh          $zero, 0x22($a1)
    MEM_H(0X22, ctx->r5) = 0;
    // 0x80073AD8: b           L_80073B34
    // 0x80073ADC: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
        goto L_80073B34;
    // 0x80073ADC: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
L_80073AE0:
    // 0x80073AE0: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
    // 0x80073AE4: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x80073AE8: sh          $zero, 0x42($a1)
    MEM_H(0X42, ctx->r5) = 0;
    // 0x80073AEC: sh          $zero, 0x40($a1)
    MEM_H(0X40, ctx->r5) = 0;
    // 0x80073AF0: b           L_80073B34
    // 0x80073AF4: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
        goto L_80073B34;
    // 0x80073AF4: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
L_80073AF8:
    // 0x80073AF8: addiu       $ra, $zero, 0x1
    ctx->r31 = ADD32(0, 0X1);
    // 0x80073AFC: bne         $ra, $t1, L_80073B34
    if (ctx->r31 != ctx->r9) {
        // 0x80073B00: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_80073B34;
    }
    // 0x80073B00: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80073B04: addiu       $t8, $t8, 0x3F52
    ctx->r24 = ADD32(ctx->r24, 0X3F52);
    // 0x80073B08: bne         $a3, $t8, L_80073B24
    if (ctx->r7 != ctx->r24) {
        // 0x80073B0C: nop
    
            goto L_80073B24;
    }
    // 0x80073B0C: nop

    // 0x80073B10: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80073B14: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x80073B18: sh          $zero, 0x22($a1)
    MEM_H(0X22, ctx->r5) = 0;
    // 0x80073B1C: b           L_80073B34
    // 0x80073B20: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
        goto L_80073B34;
    // 0x80073B20: sh          $zero, 0x20($a1)
    MEM_H(0X20, ctx->r5) = 0;
L_80073B24:
    // 0x80073B24: sh          $zero, 0x38($a1)
    MEM_H(0X38, ctx->r5) = 0;
    // 0x80073B28: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x80073B2C: sh          $zero, 0x42($a1)
    MEM_H(0X42, ctx->r5) = 0;
    // 0x80073B30: sh          $zero, 0x40($a1)
    MEM_H(0X40, ctx->r5) = 0;
L_80073B34:
    // 0x80073B34: lhu         $t0, 0x26($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X26);
    // 0x80073B38: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x80073B3C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073B40: addu        $t7, $t0, $a0
    ctx->r15 = ADD32(ctx->r8, ctx->r4);
    // 0x80073B44: addiu       $v0, $v0, 0x3A4C
    ctx->r2 = ADD32(ctx->r2, 0X3A4C);
    // 0x80073B48: slti        $at, $t7, 0x41
    ctx->r1 = SIGNED(ctx->r15) < 0X41 ? 1 : 0;
    // 0x80073B4C: bne         $at, $zero, L_80073B5C
    if (ctx->r1 != 0) {
        // 0x80073B50: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_80073B5C;
    }
    // 0x80073B50: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80073B54: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80073B58: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_80073B5C:
    // 0x80073B5C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80073B60: lbu         $a2, -0x32A4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X32A4);
    // 0x80073B64: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80073B68: beq         $a2, $ra, L_80073B90
    if (ctx->r6 == ctx->r31) {
        // 0x80073B6C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80073B90;
    }
    // 0x80073B6C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80073B70: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80073B74: beq         $a2, $v1, L_80073B98
    if (ctx->r6 == ctx->r3) {
        // 0x80073B78: addiu       $t3, $zero, 0x3
        ctx->r11 = ADD32(0, 0X3);
            goto L_80073B98;
    }
    // 0x80073B78: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80073B7C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80073B80: beq         $a2, $t3, L_80073BA0
    if (ctx->r6 == ctx->r11) {
        // 0x80073B84: nop
    
            goto L_80073BA0;
    }
    // 0x80073B84: nop

    // 0x80073B88: b           L_80073BAC
    // 0x80073B8C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
        goto L_80073BAC;
    // 0x80073B8C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80073B90:
    // 0x80073B90: b           L_80073BAC
    // 0x80073B94: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
        goto L_80073BAC;
    // 0x80073B94: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80073B98:
    // 0x80073B98: b           L_80073BAC
    // 0x80073B9C: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
        goto L_80073BAC;
    // 0x80073B9C: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_80073BA0:
    // 0x80073BA0: b           L_80073BAC
    // 0x80073BA4: sh          $ra, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r31;
        goto L_80073BAC;
    // 0x80073BA4: sh          $ra, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r31;
    // 0x80073BA8: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80073BAC:
    // 0x80073BAC: sh          $zero, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = 0;
    // 0x80073BB0: beq         $t1, $zero, L_80073BE0
    if (ctx->r9 == 0) {
        // 0x80073BB4: sh          $zero, 0x1C($a1)
        MEM_H(0X1C, ctx->r5) = 0;
            goto L_80073BE0;
    }
    // 0x80073BB4: sh          $zero, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = 0;
    // 0x80073BB8: beq         $ra, $t1, L_80073BE0
    if (ctx->r31 == ctx->r9) {
        // 0x80073BBC: slt         $at, $t0, $a0
        ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80073BE0;
    }
    // 0x80073BBC: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80073BC0: beq         $at, $zero, L_80073BD0
    if (ctx->r1 == 0) {
        // 0x80073BC4: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80073BD0;
    }
    // 0x80073BC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80073BC8: b           L_80073BE0
    // 0x80073BCC: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
        goto L_80073BE0;
    // 0x80073BCC: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
L_80073BD0:
    // 0x80073BD0: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80073BD4: beq         $at, $zero, L_80073BE0
    if (ctx->r1 == 0) {
        // 0x80073BD8: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80073BE0;
    }
    // 0x80073BD8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80073BDC: sh          $t8, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r24;
L_80073BE0:
    // 0x80073BE0: bne         $ra, $t5, L_80073C30
    if (ctx->r31 != ctx->r13) {
        // 0x80073BE4: nop
    
            goto L_80073C30;
    }
    // 0x80073BE4: nop

    // 0x80073BE8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80073BEC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073BF0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80073BF4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80073BF8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80073BFC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80073C00: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80073C04: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80073C08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80073C0C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80073C10: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80073C14: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x80073C18: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x80073C1C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80073C20: nop

    // 0x80073C24: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80073C28: b           L_80073C40
    // 0x80073C2C: sh          $t6, 0x3A62($at)
    MEM_H(0X3A62, ctx->r1) = ctx->r14;
        goto L_80073C40;
    // 0x80073C2C: sh          $t6, 0x3A62($at)
    MEM_H(0X3A62, ctx->r1) = ctx->r14;
L_80073C30:
    // 0x80073C30: bne         $t5, $zero, L_80073C40
    if (ctx->r13 != 0) {
        // 0x80073C34: addiu       $t7, $zero, 0x2710
        ctx->r15 = ADD32(0, 0X2710);
            goto L_80073C40;
    }
    // 0x80073C34: addiu       $t7, $zero, 0x2710
    ctx->r15 = ADD32(0, 0X2710);
    // 0x80073C38: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073C3C: sh          $t7, 0x3A62($at)
    MEM_H(0X3A62, ctx->r1) = ctx->r15;
L_80073C40:
    // 0x80073C40: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80073C44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073C48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80073C4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80073C50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80073C54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80073C58: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80073C5C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80073C60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80073C64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80073C68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80073C6C: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x80073C70: beq         $t5, $zero, L_80073C80
    if (ctx->r13 == 0) {
        // 0x80073C74: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_80073C80;
    }
    // 0x80073C74: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80073C78: bne         $ra, $t5, L_80073C98
    if (ctx->r31 != ctx->r13) {
        // 0x80073C7C: nop
    
            goto L_80073C98;
    }
    // 0x80073C7C: nop

L_80073C80:
    // 0x80073C80: sh          $zero, 0xAA0($t2)
    MEM_H(0XAA0, ctx->r10) = 0;
    // 0x80073C84: sh          $zero, 0xC($t2)
    MEM_H(0XC, ctx->r10) = 0;
    // 0x80073C88: sh          $zero, 0x3A5E($at)
    MEM_H(0X3A5E, ctx->r1) = 0;
    // 0x80073C8C: lhu         $t8, 0x844($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X844);
    // 0x80073C90: b           L_80073D08
    // 0x80073C94: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_80073D08;
    // 0x80073C94: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80073C98:
    // 0x80073C98: bne         $v1, $t5, L_80073CBC
    if (ctx->r3 != ctx->r13) {
        // 0x80073C9C: lui         $at, 0x801B
        ctx->r1 = S32(0X801B << 16);
            goto L_80073CBC;
    }
    // 0x80073C9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073CA0: andi        $t9, $zero, 0xFFFF
    ctx->r25 = 0 & 0XFFFF;
    // 0x80073CA4: sh          $t9, 0xC($t2)
    MEM_H(0XC, ctx->r10) = ctx->r25;
    // 0x80073CA8: sh          $zero, 0xAA0($t2)
    MEM_H(0XAA0, ctx->r10) = 0;
    // 0x80073CAC: sh          $ra, 0x3A5E($at)
    MEM_H(0X3A5E, ctx->r1) = ctx->r31;
    // 0x80073CB0: lhu         $t6, 0x844($t4)
    ctx->r14 = MEM_HU(ctx->r12, 0X844);
    // 0x80073CB4: b           L_80073D08
    // 0x80073CB8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_80073D08;
    // 0x80073CB8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80073CBC:
    // 0x80073CBC: bne         $t3, $t5, L_80073CEC
    if (ctx->r11 != ctx->r13) {
        // 0x80073CC0: nop
    
            goto L_80073CEC;
    }
    // 0x80073CC0: nop

    // 0x80073CC4: lh          $t7, 0x36($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X36);
    // 0x80073CC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073CCC: bne         $t7, $zero, L_80073CEC
    if (ctx->r15 != 0) {
        // 0x80073CD0: nop
    
            goto L_80073CEC;
    }
    // 0x80073CD0: nop

    // 0x80073CD4: sh          $zero, 0xAA0($t2)
    MEM_H(0XAA0, ctx->r10) = 0;
    // 0x80073CD8: sh          $zero, 0xC($t2)
    MEM_H(0XC, ctx->r10) = 0;
    // 0x80073CDC: sh          $v1, 0x3A5E($at)
    MEM_H(0X3A5E, ctx->r1) = ctx->r3;
    // 0x80073CE0: lhu         $t9, 0x844($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X844);
    // 0x80073CE4: b           L_80073D08
    // 0x80073CE8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_80073D08;
    // 0x80073CE8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_80073CEC:
    // 0x80073CEC: bne         $t3, $t5, L_80073D08
    if (ctx->r11 != ctx->r13) {
        // 0x80073CF0: nop
    
            goto L_80073D08;
    }
    // 0x80073CF0: nop

    // 0x80073CF4: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x80073CF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073CFC: beq         $t6, $zero, L_80073D08
    if (ctx->r14 == 0) {
        // 0x80073D00: nop
    
            goto L_80073D08;
    }
    // 0x80073D00: nop

    // 0x80073D04: sh          $t3, 0x3A5E($at)
    MEM_H(0X3A5E, ctx->r1) = ctx->r11;
L_80073D08:
    // 0x80073D08: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80073D0C: addiu       $t1, $t1, 0x3A60
    ctx->r9 = ADD32(ctx->r9, 0X3A60);
    // 0x80073D10: sh          $t5, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r13;
    // 0x80073D14: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80073D18: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x80073D1C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80073D20: beq         $t7, $at, L_80073D40
    if (ctx->r15 == ctx->r1) {
        // 0x80073D24: lui         $a3, 0x801B
        ctx->r7 = S32(0X801B << 16);
            goto L_80073D40;
    }
    // 0x80073D24: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80073D28: bne         $t3, $t5, L_80073D4C
    if (ctx->r11 != ctx->r13) {
        // 0x80073D2C: slti        $at, $t5, 0x2
        ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
            goto L_80073D4C;
    }
    // 0x80073D2C: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80073D30: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x80073D34: nop

    // 0x80073D38: beq         $t8, $zero, L_80073D4C
    if (ctx->r24 == 0) {
        // 0x80073D3C: nop
    
            goto L_80073D4C;
    }
    // 0x80073D3C: nop

L_80073D40:
    // 0x80073D40: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80073D44: b           L_80073D78
    // 0x80073D48: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
        goto L_80073D78;
    // 0x80073D48: sh          $t9, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r25;
L_80073D4C:
    // 0x80073D4C: bne         $at, $zero, L_80073D78
    if (ctx->r1 != 0) {
        // 0x80073D50: nop
    
            goto L_80073D78;
    }
    // 0x80073D50: nop

    // 0x80073D54: beq         $t0, $a0, L_80073D78
    if (ctx->r8 == ctx->r4) {
        // 0x80073D58: nop
    
            goto L_80073D78;
    }
    // 0x80073D58: nop

    // 0x80073D5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80073D60: lb          $t6, -0x3093($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3093);
    // 0x80073D64: nop

    // 0x80073D68: bne         $t6, $zero, L_80073D78
    if (ctx->r14 != 0) {
        // 0x80073D6C: nop
    
            goto L_80073D78;
    }
    // 0x80073D6C: nop

    // 0x80073D70: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80073D74: sh          $t7, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r15;
L_80073D78:
    // 0x80073D78: addiu       $a3, $a3, 0x3A5C
    ctx->r7 = ADD32(ctx->r7, 0X3A5C);
    // 0x80073D7C: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80073D80: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073D84: lh          $v0, 0x3A5E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X3A5E);
    // 0x80073D88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80073D8C: bne         $t3, $v0, L_80073DA4
    if (ctx->r11 != ctx->r2) {
        // 0x80073D90: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80073DA4;
    }
    // 0x80073D90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073D94: lhu         $a2, 0x1A($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X1A);
    // 0x80073D98: b           L_80073DA4
    // 0x80073D9C: nop

        goto L_80073DA4;
    // 0x80073D9C: nop

    // 0x80073DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80073DA4:
    // 0x80073DA4: bne         $t3, $v0, L_80073DB8
    if (ctx->r11 != ctx->r2) {
        // 0x80073DA8: addu        $v1, $a2, $a0
        ctx->r3 = ADD32(ctx->r6, ctx->r4);
            goto L_80073DB8;
    }
    // 0x80073DA8: addu        $v1, $a2, $a0
    ctx->r3 = ADD32(ctx->r6, ctx->r4);
    // 0x80073DAC: lhu         $a2, 0x3A($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X3A);
    // 0x80073DB0: b           L_80073DC0
    // 0x80073DB4: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
        goto L_80073DC0;
    // 0x80073DB4: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
L_80073DB8:
    // 0x80073DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80073DBC: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
L_80073DC0:
    // 0x80073DC0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80073DC4: beq         $at, $zero, L_80073DD4
    if (ctx->r1 == 0) {
        // 0x80073DC8: addiu       $t0, $zero, 0x64
        ctx->r8 = ADD32(0, 0X64);
            goto L_80073DD4;
    }
    // 0x80073DC8: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80073DCC: b           L_80073DE4
    // 0x80073DD0: sh          $ra, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r31;
        goto L_80073DE4;
    // 0x80073DD0: sh          $ra, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r31;
L_80073DD4:
    // 0x80073DD4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80073DD8: beq         $at, $zero, L_80073DE4
    if (ctx->r1 == 0) {
        // 0x80073DDC: nop
    
            goto L_80073DE4;
    }
    // 0x80073DDC: nop

    // 0x80073DE0: sh          $zero, 0x0($a3)
    MEM_H(0X0, ctx->r7) = 0;
L_80073DE4:
    // 0x80073DE4: lhu         $v0, 0x844($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X844);
    // 0x80073DE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80073DEC: nop

    // 0x80073DF0: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x80073DF4: bne         $v1, $zero, L_80073E00
    if (ctx->r3 != 0) {
        // 0x80073DF8: nop
    
            goto L_80073E00;
    }
    // 0x80073DF8: nop

    // 0x80073DFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80073E00:
    // 0x80073E00: multu       $a0, $t0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80073E04: mflo        $t8
    ctx->r24 = lo;
    // 0x80073E08: nop

    // 0x80073E0C: nop

    // 0x80073E10: div         $zero, $t8, $v1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r3)));
    // 0x80073E14: bne         $v1, $zero, L_80073E20
    if (ctx->r3 != 0) {
        // 0x80073E18: nop
    
            goto L_80073E20;
    }
    // 0x80073E18: nop

    // 0x80073E1C: break       7
    do_break(2147958300);
L_80073E20:
    // 0x80073E20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073E24: bne         $v1, $at, L_80073E38
    if (ctx->r3 != ctx->r1) {
        // 0x80073E28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073E38;
    }
    // 0x80073E28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073E2C: bne         $t8, $at, L_80073E38
    if (ctx->r24 != ctx->r1) {
        // 0x80073E30: nop
    
            goto L_80073E38;
    }
    // 0x80073E30: nop

    // 0x80073E34: break       6
    do_break(2147958324);
L_80073E38:
    // 0x80073E38: mflo        $t9
    ctx->r25 = lo;
    // 0x80073E3C: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x80073E40: lhu         $a2, 0x14($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X14);
    // 0x80073E44: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80073E48: mflo        $t6
    ctx->r14 = lo;
    // 0x80073E4C: nop

    // 0x80073E50: nop

    // 0x80073E54: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x80073E58: bne         $v1, $zero, L_80073E64
    if (ctx->r3 != 0) {
        // 0x80073E5C: nop
    
            goto L_80073E64;
    }
    // 0x80073E5C: nop

    // 0x80073E60: break       7
    do_break(2147958368);
L_80073E64:
    // 0x80073E64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80073E68: bne         $v1, $at, L_80073E7C
    if (ctx->r3 != ctx->r1) {
        // 0x80073E6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80073E7C;
    }
    // 0x80073E6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80073E70: bne         $t6, $at, L_80073E7C
    if (ctx->r14 != ctx->r1) {
        // 0x80073E74: nop
    
            goto L_80073E7C;
    }
    // 0x80073E74: nop

    // 0x80073E78: break       6
    do_break(2147958392);
L_80073E7C:
    // 0x80073E7C: mflo        $t7
    ctx->r15 = lo;
    // 0x80073E80: andi        $a3, $t7, 0xFFFF
    ctx->r7 = ctx->r15 & 0XFFFF;
    // 0x80073E84: addu        $v1, $a2, $a3
    ctx->r3 = ADD32(ctx->r6, ctx->r7);
    // 0x80073E88: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x80073E8C: beq         $at, $zero, L_80073EA0
    if (ctx->r1 == 0) {
        // 0x80073E90: sh          $t7, 0x34($a1)
        MEM_H(0X34, ctx->r5) = ctx->r15;
            goto L_80073EA0;
    }
    // 0x80073E90: sh          $t7, 0x34($a1)
    MEM_H(0X34, ctx->r5) = ctx->r15;
    // 0x80073E94: subu        $t8, $a2, $v1
    ctx->r24 = SUB32(ctx->r6, ctx->r3);
    // 0x80073E98: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x80073E9C: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
L_80073EA0:
    // 0x80073EA0: lh          $t6, 0x0($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X0);
    // 0x80073EA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80073EA8: bne         $t6, $at, L_80073EC0
    if (ctx->r14 != ctx->r1) {
        // 0x80073EAC: nop
    
            goto L_80073EC0;
    }
    // 0x80073EAC: nop

    // 0x80073EB0: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x80073EB4: nop

    // 0x80073EB8: sh          $t7, 0x844($t4)
    MEM_H(0X844, ctx->r12) = ctx->r15;
    // 0x80073EBC: sh          $a3, 0x844($t2)
    MEM_H(0X844, ctx->r10) = ctx->r7;
L_80073EC0:
    // 0x80073EC0: jal         0x80039028
    // 0x80073EC4: nop

    func_80039028(rdram, ctx);
        goto after_1;
    // 0x80073EC4: nop

    after_1:
    // 0x80073EC8: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80073ECC: bne         $v0, $zero, L_80073EF0
    if (ctx->r2 != 0) {
        // 0x80073ED0: addiu       $t1, $t1, 0x3A60
        ctx->r9 = ADD32(ctx->r9, 0X3A60);
            goto L_80073EF0;
    }
    // 0x80073ED0: addiu       $t1, $t1, 0x3A60
    ctx->r9 = ADD32(ctx->r9, 0X3A60);
    // 0x80073ED4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80073ED8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80073EDC: sb          $t8, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r24;
    // 0x80073EE0: jal         0x80015BC0
    // 0x80073EE4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80073EE4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_2:
    // 0x80073EE8: b           L_80073F20
    // 0x80073EEC: nop

        goto L_80073F20;
    // 0x80073EEC: nop

L_80073EF0:
    // 0x80073EF0: lh          $t9, 0x0($t1)
    ctx->r25 = MEM_H(ctx->r9, 0X0);
    // 0x80073EF4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80073EF8: beq         $t9, $at, L_80073F18
    if (ctx->r25 == ctx->r1) {
        // 0x80073EFC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80073F18;
    }
    // 0x80073EFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80073F00: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80073F04: sb          $t6, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r14;
    // 0x80073F08: jal         0x80015BC0
    // 0x80073F0C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80073F0C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_3:
    // 0x80073F10: b           L_80073F20
    // 0x80073F14: nop

        goto L_80073F20;
    // 0x80073F14: nop

L_80073F18:
    // 0x80073F18: jal         0x80035A04
    // 0x80073F1C: nop

    func_80035A04(rdram, ctx);
        goto after_4;
    // 0x80073F1C: nop

    after_4:
L_80073F20:
    // 0x80073F20: jal         0x800734D0
    // 0x80073F24: nop

    func_800734D0(rdram, ctx);
        goto after_5;
    // 0x80073F24: nop

    after_5:
    // 0x80073F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073F2C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80073F30: jr          $ra
    // 0x80073F34: nop

    return;
    // 0x80073F34: nop

;}
RECOMP_FUNC void func_80073F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073F48: jal         0x80063B94
    // 0x80073F4C: nop

    func_80063B94(rdram, ctx);
        goto after_0;
    // 0x80073F4C: nop

    after_0:
    // 0x80073F50: jal         0x80027B60
    // 0x80073F54: nop

    func_80027B60(rdram, ctx);
        goto after_1;
    // 0x80073F54: nop

    after_1:
    // 0x80073F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073F5C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80073F60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073F64: sw          $t6, 0x3A54($at)
    MEM_W(0X3A54, ctx->r1) = ctx->r14;
    // 0x80073F68: jr          $ra
    // 0x80073F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80073F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80073F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073F70: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80073F74: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80073F78: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x80073F7C: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80073F80: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80073F84: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80073F88: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80073F8C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80073F90: jal         0x80028E5C
    // 0x80073F94: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    func_80028E5C(rdram, ctx);
        goto after_0;
    // 0x80073F94: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    after_0:
    // 0x80073F98: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80073F9C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80073FA0: jal         0x80028E7C
    // 0x80073FA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80028E7C(rdram, ctx);
        goto after_1;
    // 0x80073FA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80073FA8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80073FAC: lui         $s2, 0xFF
    ctx->r18 = S32(0XFF << 16);
    // 0x80073FB0: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80073FB4: addiu       $t6, $t6, 0x15E0
    ctx->r14 = ADD32(ctx->r14, 0X15E0);
    // 0x80073FB8: ori         $s2, $s2, 0xFFFF
    ctx->r18 = ctx->r18 | 0XFFFF;
    // 0x80073FBC: lui         $s3, 0x8039
    ctx->r19 = S32(0X8039 << 16);
    // 0x80073FC0: addiu       $s3, $s3, 0x6A00
    ctx->r19 = ADD32(ctx->r19, 0X6A00);
    // 0x80073FC4: and         $t7, $t6, $s2
    ctx->r15 = ctx->r14 & ctx->r18;
    // 0x80073FC8: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80073FCC: addiu       $t9, $t9, 0x52C
    ctx->r25 = ADD32(ctx->r25, 0X52C);
    // 0x80073FD0: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x80073FD4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80073FD8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80073FDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80073FE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80073FE4: addiu       $a3, $zero, 0x314
    ctx->r7 = ADD32(0, 0X314);
    // 0x80073FE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80073FEC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80073FF0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80073FF4: jal         0x80028C74
    // 0x80073FF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_80028C74(rdram, ctx);
        goto after_2;
    // 0x80073FF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_2:
    // 0x80073FFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80074000: jal         0x80028E5C
    // 0x80074004: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    func_80028E5C(rdram, ctx);
        goto after_3;
    // 0x80074004: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    after_3:
    // 0x80074008: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8007400C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80074010: jal         0x80028E7C
    // 0x80074014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80028E7C(rdram, ctx);
        goto after_4;
    // 0x80074014: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_4:
    // 0x80074018: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x8007401C: addiu       $t0, $t0, 0x33F8
    ctx->r8 = ADD32(ctx->r8, 0X33F8);
    // 0x80074020: and         $t1, $t0, $s2
    ctx->r9 = ctx->r8 & ctx->r18;
    // 0x80074024: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80074028: addiu       $a0, $a0, 0x664
    ctx->r4 = ADD32(ctx->r4, 0X664);
    // 0x8007402C: addu        $v1, $t1, $s3
    ctx->r3 = ADD32(ctx->r9, ctx->r19);
    // 0x80074030: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80074034: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80074038: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8007403C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80074040: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80074044: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80074048: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x8007404C: addiu       $a3, $zero, 0x314
    ctx->r7 = ADD32(0, 0X314);
    // 0x80074050: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80074054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80074058: jal         0x80028C74
    // 0x8007405C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    func_80028C74(rdram, ctx);
        goto after_5;
    // 0x8007405C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    after_5:
    // 0x80074060: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80074064: jal         0x80028E5C
    // 0x80074068: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    func_80028E5C(rdram, ctx);
        goto after_6;
    // 0x80074068: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    after_6:
    // 0x8007406C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80074070: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80074074: jal         0x80028E7C
    // 0x80074078: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80028E7C(rdram, ctx);
        goto after_7;
    // 0x80074078: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_7:
    // 0x8007407C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80074080: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80074084: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80074088: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8007408C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x80074090: addiu       $a3, $zero, 0x314
    ctx->r7 = ADD32(0, 0X314);
    // 0x80074094: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80074098: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007409C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800740A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800740A4: jal         0x80028C74
    // 0x800740A8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80028C74(rdram, ctx);
        goto after_8;
    // 0x800740A8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_8:
    // 0x800740AC: addiu       $a0, $zero, 0x3E4
    ctx->r4 = ADD32(0, 0X3E4);
    // 0x800740B0: jal         0x80028E5C
    // 0x800740B4: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    func_80028E5C(rdram, ctx);
        goto after_9;
    // 0x800740B4: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_9:
    // 0x800740B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800740BC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x800740C0: jal         0x80028E7C
    // 0x800740C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80028E7C(rdram, ctx);
        goto after_10;
    // 0x800740C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
    // 0x800740C8: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800740CC: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x800740D0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x800740D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800740D8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x800740DC: addiu       $a3, $zero, 0x314
    ctx->r7 = ADD32(0, 0X314);
    // 0x800740E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800740E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800740E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800740EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800740F0: jal         0x80028C74
    // 0x800740F4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    func_80028C74(rdram, ctx);
        goto after_11;
    // 0x800740F4: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_11:
    // 0x800740F8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800740FC: addiu       $a0, $a0, -0x524
    ctx->r4 = ADD32(ctx->r4, -0X524);
    // 0x80074100: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80074104: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80074108: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007410C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80074110: lwc1        $f2, -0x53F8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X53F8);
    // 0x80074114: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80074118: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8007411C: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x80074120: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80074124: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80074128: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007412C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80074130: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80074134: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80074138: sw          $s2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r18;
    // 0x8007413C: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x80074140: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
    // 0x80074144: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x80074148: swc1        $f2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f2.u32l;
    // 0x8007414C: sw          $v1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r3;
    // 0x80074150: swc1        $f12, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f12.u32l;
    // 0x80074154: sw          $s0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->r16;
    // 0x80074158: sw          $s0, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->r16;
    // 0x8007415C: sw          $s0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r16;
    // 0x80074160: swc1        $f0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f0.u32l;
    // 0x80074164: swc1        $f0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f0.u32l;
    // 0x80074168: swc1        $f0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f0.u32l;
    // 0x8007416C: swc1        $f2, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->f2.u32l;
    // 0x80074170: swc1        $f2, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f2.u32l;
    // 0x80074174: swc1        $f2, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f2.u32l;
    // 0x80074178: swc1        $f12, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->f12.u32l;
    // 0x8007417C: swc1        $f12, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f12.u32l;
    // 0x80074180: swc1        $f12, 0x88($v1)
    MEM_W(0X88, ctx->r3) = ctx->f12.u32l;
    // 0x80074184: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80074188: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8007418C: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80074190: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80074194: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80074198: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8007419C: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800741A0: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800741A4: jr          $ra
    // 0x800741A8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x800741A8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800741CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800741CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800741D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800741D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800741D8: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    // 0x800741DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800741E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800741E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800741E8: jal         0x8000E0A8
    // 0x800741EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x800741EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x800741F0: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x800741F4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800741F8: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x800741FC: sb          $t8, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r24;
    // 0x80074200: addiu       $t9, $v0, 0x18
    ctx->r25 = ADD32(ctx->r2, 0X18);
    // 0x80074204: addiu       $t0, $v0, 0x198
    ctx->r8 = ADD32(ctx->r2, 0X198);
    // 0x80074208: sw          $t9, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r25;
    // 0x8007420C: sw          $t0, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r8;
    // 0x80074210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80074214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80074218: jr          $ra
    // 0x8007421C: nop

    return;
    // 0x8007421C: nop

;}
RECOMP_FUNC void func_80074274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074278: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007427C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074280: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80074284: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80074288: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8007428C: jal         0x80063B00
    // 0x80074290: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80063B00(rdram, ctx);
        goto after_0;
    // 0x80074290: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80074294: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80074298: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8007429C: lw          $v1, 0x74($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X74);
    // 0x800742A0: addiu       $t6, $t6, 0x85C
    ctx->r14 = ADD32(ctx->r14, 0X85C);
    // 0x800742A4: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x800742A8: addiu       $a0, $a0, 0x914
    ctx->r4 = ADD32(ctx->r4, 0X914);
    // 0x800742AC: sw          $v0, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->r2;
    // 0x800742B0: sw          $zero, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = 0;
    // 0x800742B4: sw          $zero, 0x68($a3)
    MEM_W(0X68, ctx->r7) = 0;
    // 0x800742B8: sw          $t6, 0xA8($a3)
    MEM_W(0XA8, ctx->r7) = ctx->r14;
    // 0x800742BC: sw          $a0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r4;
    // 0x800742C0: lw          $v1, 0x78($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X78);
    // 0x800742C4: nop

    // 0x800742C8: sw          $a0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r4;
    // 0x800742CC: lw          $v1, 0x7C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X7C);
    // 0x800742D0: nop

    // 0x800742D4: sw          $a0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r4;
    // 0x800742D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800742DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800742E0: jr          $ra
    // 0x800742E4: nop

    return;
    // 0x800742E4: nop

;}
RECOMP_FUNC void func_800742FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800742FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074304: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80074308: jal         0x80025A10
    // 0x8007430C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8007430C: addiu       $a0, $a0, 0x3C98
    ctx->r4 = ADD32(ctx->r4, 0X3C98);
    after_0:
    // 0x80074310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80074318: jr          $ra
    // 0x8007431C: nop

    return;
    // 0x8007431C: nop

;}
RECOMP_FUNC void func_80074360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074360: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80074364: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x80074368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007436C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80074370: beq         $v0, $at, L_8007473C
    if (ctx->r2 == ctx->r1) {
        // 0x80074374: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007473C;
    }
    // 0x80074374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074378: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007437C: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80074380: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80074384: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80074388: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x8007438C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80074390: beq         $t7, $at, L_8007473C
    if (ctx->r15 == ctx->r1) {
        // 0x80074394: addiu       $a2, $zero, 0x5
        ctx->r6 = ADD32(0, 0X5);
            goto L_8007473C;
    }
    // 0x80074394: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80074398: beq         $a2, $v0, L_8007473C
    if (ctx->r6 == ctx->r2) {
        // 0x8007439C: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_8007473C;
    }
    // 0x8007439C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800743A0: lhu         $a1, 0xB78($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XB78);
    // 0x800743A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800743A8: beq         $a1, $zero, L_800743D0
    if (ctx->r5 == 0) {
        // 0x800743AC: nop
    
            goto L_800743D0;
    }
    // 0x800743AC: nop

    // 0x800743B0: beq         $a1, $at, L_800743D0
    if (ctx->r5 == ctx->r1) {
        // 0x800743B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800743D0;
    }
    // 0x800743B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800743B8: beq         $a1, $at, L_800743D0
    if (ctx->r5 == ctx->r1) {
        // 0x800743BC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800743D0;
    }
    // 0x800743BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800743C0: beq         $a1, $at, L_800743D0
    if (ctx->r5 == ctx->r1) {
        // 0x800743C4: nop
    
            goto L_800743D0;
    }
    // 0x800743C4: nop

    // 0x800743C8: bne         $a2, $a1, L_80074410
    if (ctx->r6 != ctx->r5) {
        // 0x800743CC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80074410;
    }
    // 0x800743CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_800743D0:
    // 0x800743D0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800743D4: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x800743D8: lh          $t8, 0x8AE($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X8AE);
    // 0x800743DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800743E0: bne         $t8, $zero, L_800743F8
    if (ctx->r24 != 0) {
        // 0x800743E4: nop
    
            goto L_800743F8;
    }
    // 0x800743E4: nop

    // 0x800743E8: jal         0x800747D4
    // 0x800743EC: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    func_800747D4(rdram, ctx);
        goto after_0;
    // 0x800743EC: addiu       $a0, $a0, -0x225C
    ctx->r4 = ADD32(ctx->r4, -0X225C);
    after_0:
    // 0x800743F0: b           L_80074400
    // 0x800743F4: nop

        goto L_80074400;
    // 0x800743F4: nop

L_800743F8:
    // 0x800743F8: jal         0x800747D4
    // 0x800743FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800747D4(rdram, ctx);
        goto after_1;
    // 0x800743FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
L_80074400:
    // 0x80074400: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80074404: lhu         $a1, 0xB78($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XB78);
    // 0x80074408: b           L_80074428
    // 0x8007440C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80074428;
    // 0x8007440C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80074410:
    // 0x80074410: bne         $a1, $at, L_80074428
    if (ctx->r5 != ctx->r1) {
        // 0x80074414: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80074428;
    }
    // 0x80074414: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074418: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8007441C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80074420: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074424: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074428:
    // 0x80074428: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007442C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80074430: bne         $a1, $at, L_80074484
    if (ctx->r5 != ctx->r1) {
        // 0x80074434: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074484;
    }
    // 0x80074434: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074438: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8007443C: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80074440: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x80074444: lw          $t0, 0xB4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XB4);
    // 0x80074448: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x8007444C: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x80074450: nop

    // 0x80074454: lhu         $t2, 0x6($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X6);
    // 0x80074458: nop

    // 0x8007445C: bne         $t2, $zero, L_80074478
    if (ctx->r10 != 0) {
        // 0x80074460: nop
    
            goto L_80074478;
    }
    // 0x80074460: nop

    // 0x80074464: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x80074468: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x8007446C: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
    // 0x80074470: b           L_80074564
    // 0x80074474: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
        goto L_80074564;
    // 0x80074474: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074478:
    // 0x80074478: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8007447C: b           L_80074564
    // 0x80074480: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
        goto L_80074564;
    // 0x80074480: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
L_80074484:
    // 0x80074484: bne         $a2, $a1, L_80074564
    if (ctx->r6 != ctx->r5) {
        // 0x80074488: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_80074564;
    }
    // 0x80074488: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007448C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80074490: nop

    // 0x80074494: lw          $t3, 0xB4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XB4);
    // 0x80074498: nop

    // 0x8007449C: lw          $a0, 0x24($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X24);
    // 0x800744A0: nop

    // 0x800744A4: lhu         $t4, 0x8($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X8);
    // 0x800744A8: nop

    // 0x800744AC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x800744B0: beq         $t5, $zero, L_80074510
    if (ctx->r13 == 0) {
        // 0x800744B4: nop
    
            goto L_80074510;
    }
    // 0x800744B4: nop

    // 0x800744B8: lh          $t6, 0xE8($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE8);
    // 0x800744BC: nop

    // 0x800744C0: blez        $t6, L_80074568
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800744C4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80074568;
    }
    // 0x800744C4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800744C8: lhu         $t7, 0x6($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X6);
    // 0x800744CC: nop

    // 0x800744D0: bne         $t7, $zero, L_800744F4
    if (ctx->r15 != 0) {
        // 0x800744D4: nop
    
            goto L_800744F4;
    }
    // 0x800744D4: nop

    // 0x800744D8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x800744DC: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x800744E0: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x800744E4: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x800744E8: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x800744EC: b           L_80074564
    // 0x800744F0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
        goto L_80074564;
    // 0x800744F0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_800744F4:
    // 0x800744F4: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x800744F8: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x800744FC: addiu       $t3, $t2, 0x20
    ctx->r11 = ADD32(ctx->r10, 0X20);
    // 0x80074500: addiu       $t5, $t4, 0x30
    ctx->r13 = ADD32(ctx->r12, 0X30);
    // 0x80074504: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x80074508: b           L_80074564
    // 0x8007450C: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
        goto L_80074564;
    // 0x8007450C: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
L_80074510:
    // 0x80074510: lh          $t6, 0xE8($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE8);
    // 0x80074514: nop

    // 0x80074518: bgez        $t6, L_80074568
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8007451C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80074568;
    }
    // 0x8007451C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80074520: lhu         $t7, 0x6($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X6);
    // 0x80074524: nop

    // 0x80074528: bne         $t7, $zero, L_8007454C
    if (ctx->r15 != 0) {
        // 0x8007452C: nop
    
            goto L_8007454C;
    }
    // 0x8007452C: nop

    // 0x80074530: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x80074534: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x80074538: addiu       $t9, $t8, 0x30
    ctx->r25 = ADD32(ctx->r24, 0X30);
    // 0x8007453C: addiu       $t1, $t0, 0x20
    ctx->r9 = ADD32(ctx->r8, 0X20);
    // 0x80074540: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80074544: b           L_80074564
    // 0x80074548: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
        goto L_80074564;
    // 0x80074548: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_8007454C:
    // 0x8007454C: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x80074550: lh          $t4, 0x2($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X2);
    // 0x80074554: addiu       $t3, $t2, 0x20
    ctx->r11 = ADD32(ctx->r10, 0X20);
    // 0x80074558: addiu       $t5, $t4, 0x30
    ctx->r13 = ADD32(ctx->r12, 0X30);
    // 0x8007455C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x80074560: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
L_80074564:
    // 0x80074564: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80074568:
    // 0x80074568: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x8007456C: bne         $a1, $at, L_800745B4
    if (ctx->r5 != ctx->r1) {
        // 0x80074570: addiu       $a2, $zero, 0xC0
        ctx->r6 = ADD32(0, 0XC0);
            goto L_800745B4;
    }
    // 0x80074570: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80074574: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80074578: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8007457C: nop

    // 0x80074580: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x80074584: nop

    // 0x80074588: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x8007458C: nop

    // 0x80074590: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x80074594: nop

    // 0x80074598: bne         $t9, $zero, L_800745AC
    if (ctx->r25 != 0) {
        // 0x8007459C: nop
    
            goto L_800745AC;
    }
    // 0x8007459C: nop

    // 0x800745A0: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
    // 0x800745A4: b           L_800745B4
    // 0x800745A8: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
        goto L_800745B4;
    // 0x800745A8: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_800745AC:
    // 0x800745AC: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x800745B0: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
L_800745B4:
    // 0x800745B4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800745B8: beq         $a1, $at, L_800746F4
    if (ctx->r5 == ctx->r1) {
        // 0x800745BC: lui         $t0, 0x802C
        ctx->r8 = S32(0X802C << 16);
            goto L_800746F4;
    }
    // 0x800745BC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x800745C0: lhu         $t0, 0x38D0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X38D0);
    // 0x800745C4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800745C8: bne         $t0, $zero, L_800746F4
    if (ctx->r8 != 0) {
        // 0x800745CC: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_800746F4;
    }
    // 0x800745CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800745D0: lhu         $v1, -0x2CE6($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2CE6);
    // 0x800745D4: lhu         $a0, -0x2252($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2252);
    // 0x800745D8: nop

    // 0x800745DC: bne         $v1, $a0, L_80074600
    if (ctx->r3 != ctx->r4) {
        // 0x800745E0: slt         $at, $a0, $v1
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80074600;
    }
    // 0x800745E0: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800745E4: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x800745E8: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x800745EC: addiu       $t2, $t1, 0x40
    ctx->r10 = ADD32(ctx->r9, 0X40);
    // 0x800745F0: addiu       $t4, $t3, 0x40
    ctx->r12 = ADD32(ctx->r11, 0X40);
    // 0x800745F4: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x800745F8: b           L_80074690
    // 0x800745FC: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
        goto L_80074690;
    // 0x800745FC: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
L_80074600:
    // 0x80074600: beq         $at, $zero, L_80074650
    if (ctx->r1 == 0) {
        // 0x80074604: subu        $t4, $a0, $v1
        ctx->r12 = SUB32(ctx->r4, ctx->r3);
            goto L_80074650;
    }
    // 0x80074604: subu        $t4, $a0, $v1
    ctx->r12 = SUB32(ctx->r4, ctx->r3);
    // 0x80074608: subu        $t5, $v1, $a0
    ctx->r13 = SUB32(ctx->r3, ctx->r4);
    // 0x8007460C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80074610: bne         $t5, $at, L_80074634
    if (ctx->r13 != ctx->r1) {
        // 0x80074614: nop
    
            goto L_80074634;
    }
    // 0x80074614: nop

    // 0x80074618: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x8007461C: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x80074620: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80074624: addiu       $t9, $t8, 0x40
    ctx->r25 = ADD32(ctx->r24, 0X40);
    // 0x80074628: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8007462C: b           L_80074690
    // 0x80074630: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
        goto L_80074690;
    // 0x80074630: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
L_80074634:
    // 0x80074634: lh          $t0, 0x0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X0);
    // 0x80074638: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x8007463C: addiu       $t1, $t0, 0x30
    ctx->r9 = ADD32(ctx->r8, 0X30);
    // 0x80074640: addiu       $t3, $t2, 0x30
    ctx->r11 = ADD32(ctx->r10, 0X30);
    // 0x80074644: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x80074648: b           L_80074690
    // 0x8007464C: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
        goto L_80074690;
    // 0x8007464C: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_80074650:
    // 0x80074650: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80074654: bne         $t4, $at, L_80074678
    if (ctx->r12 != ctx->r1) {
        // 0x80074658: nop
    
            goto L_80074678;
    }
    // 0x80074658: nop

    // 0x8007465C: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x80074660: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x80074664: addiu       $t6, $t5, 0x40
    ctx->r14 = ADD32(ctx->r13, 0X40);
    // 0x80074668: addiu       $t8, $t7, 0x40
    ctx->r24 = ADD32(ctx->r15, 0X40);
    // 0x8007466C: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x80074670: b           L_80074690
    // 0x80074674: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
        goto L_80074690;
    // 0x80074674: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_80074678:
    // 0x80074678: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x8007467C: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x80074680: addiu       $t0, $t9, 0x30
    ctx->r8 = ADD32(ctx->r25, 0X30);
    // 0x80074684: addiu       $t2, $t1, 0x30
    ctx->r10 = ADD32(ctx->r9, 0X30);
    // 0x80074688: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8007468C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
L_80074690:
    // 0x80074690: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x80074694: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x80074698: slti        $at, $t3, 0x80
    ctx->r1 = SIGNED(ctx->r11) < 0X80 ? 1 : 0;
    // 0x8007469C: beq         $at, $zero, L_800746A8
    if (ctx->r1 == 0) {
        // 0x800746A0: addiu       $t6, $zero, 0x80
        ctx->r14 = ADD32(0, 0X80);
            goto L_800746A8;
    }
    // 0x800746A0: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x800746A4: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_800746A8:
    // 0x800746A8: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x800746AC: nop

    // 0x800746B0: slti        $at, $t5, 0x80
    ctx->r1 = SIGNED(ctx->r13) < 0X80 ? 1 : 0;
    // 0x800746B4: beq         $at, $zero, L_800746C4
    if (ctx->r1 == 0) {
        // 0x800746B8: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_800746C4;
    }
    // 0x800746B8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800746BC: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x800746C0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
L_800746C4:
    // 0x800746C4: beq         $a1, $at, L_800746F8
    if (ctx->r5 == ctx->r1) {
        // 0x800746C8: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_800746F8;
    }
    // 0x800746C8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800746CC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x800746D0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x800746D4: slti        $at, $t7, 0xD1
    ctx->r1 = SIGNED(ctx->r15) < 0XD1 ? 1 : 0;
    // 0x800746D8: bne         $at, $zero, L_800746E4
    if (ctx->r1 != 0) {
        // 0x800746DC: addiu       $t8, $zero, 0xD0
        ctx->r24 = ADD32(0, 0XD0);
            goto L_800746E4;
    }
    // 0x800746DC: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x800746E0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_800746E4:
    // 0x800746E4: slti        $at, $v1, 0xD1
    ctx->r1 = SIGNED(ctx->r3) < 0XD1 ? 1 : 0;
    // 0x800746E8: bne         $at, $zero, L_800746F4
    if (ctx->r1 != 0) {
        // 0x800746EC: addiu       $t9, $zero, 0xD0
        ctx->r25 = ADD32(0, 0XD0);
            goto L_800746F4;
    }
    // 0x800746EC: addiu       $t9, $zero, 0xD0
    ctx->r25 = ADD32(0, 0XD0);
    // 0x800746F0: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
L_800746F4:
    // 0x800746F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_800746F8:
    // 0x800746F8: beq         $a1, $at, L_8007473C
    if (ctx->r5 == ctx->r1) {
        // 0x800746FC: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8007473C;
    }
    // 0x800746FC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80074700: lhu         $t0, 0xB74($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB74);
    // 0x80074704: nop

    // 0x80074708: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8007470C: bne         $at, $zero, L_8007473C
    if (ctx->r1 != 0) {
        // 0x80074710: nop
    
            goto L_8007473C;
    }
    // 0x80074710: nop

    // 0x80074714: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x80074718: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8007471C: slti        $at, $t1, 0x70
    ctx->r1 = SIGNED(ctx->r9) < 0X70 ? 1 : 0;
    // 0x80074720: beq         $at, $zero, L_8007472C
    if (ctx->r1 == 0) {
        // 0x80074724: addiu       $t2, $zero, 0x70
        ctx->r10 = ADD32(0, 0X70);
            goto L_8007472C;
    }
    // 0x80074724: addiu       $t2, $zero, 0x70
    ctx->r10 = ADD32(0, 0X70);
    // 0x80074728: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
L_8007472C:
    // 0x8007472C: slti        $at, $v1, 0x70
    ctx->r1 = SIGNED(ctx->r3) < 0X70 ? 1 : 0;
    // 0x80074730: beq         $at, $zero, L_8007473C
    if (ctx->r1 == 0) {
        // 0x80074734: addiu       $t3, $zero, 0x70
        ctx->r11 = ADD32(0, 0X70);
            goto L_8007473C;
    }
    // 0x80074734: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x80074738: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_8007473C:
    // 0x8007473C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80074740: addiu       $a1, $a1, 0x3A39
    ctx->r5 = ADD32(ctx->r5, 0X3A39);
    // 0x80074744: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x80074748: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8007474C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074750: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x80074754: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074758: beq         $a0, $zero, L_80074778
    if (ctx->r4 == 0) {
        // 0x8007475C: addiu       $a2, $zero, 0xC0
        ctx->r6 = ADD32(0, 0XC0);
            goto L_80074778;
    }
    // 0x8007475C: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80074760: andi        $t4, $a0, 0x1
    ctx->r12 = ctx->r4 & 0X1;
    // 0x80074764: beq         $t4, $zero, L_80074774
    if (ctx->r12 == 0) {
        // 0x80074768: nop
    
            goto L_80074774;
    }
    // 0x80074768: nop

    // 0x8007476C: b           L_80074778
    // 0x80074770: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
        goto L_80074778;
    // 0x80074770: sh          $a2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r6;
L_80074774:
    // 0x80074774: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
L_80074778:
    // 0x80074778: lhu         $a0, 0xDC($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XDC);
    // 0x8007477C: addiu       $v1, $zero, 0x90
    ctx->r3 = ADD32(0, 0X90);
    // 0x80074780: andi        $t5, $a0, 0x2
    ctx->r13 = ctx->r4 & 0X2;
    // 0x80074784: bne         $t5, $zero, L_80074794
    if (ctx->r13 != 0) {
        // 0x80074788: andi        $t6, $a0, 0x4
        ctx->r14 = ctx->r4 & 0X4;
            goto L_80074794;
    }
    // 0x80074788: andi        $t6, $a0, 0x4
    ctx->r14 = ctx->r4 & 0X4;
    // 0x8007478C: beq         $t6, $zero, L_8007479C
    if (ctx->r14 == 0) {
        // 0x80074790: nop
    
            goto L_8007479C;
    }
    // 0x80074790: nop

L_80074794:
    // 0x80074794: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074798: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_8007479C:
    // 0x8007479C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x800747A0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x800747A4: slti        $at, $t7, 0xE9
    ctx->r1 = SIGNED(ctx->r15) < 0XE9 ? 1 : 0;
    // 0x800747A8: bne         $at, $zero, L_800747B4
    if (ctx->r1 != 0) {
        // 0x800747AC: addiu       $t8, $zero, 0xE8
        ctx->r24 = ADD32(0, 0XE8);
            goto L_800747B4;
    }
    // 0x800747AC: addiu       $t8, $zero, 0xE8
    ctx->r24 = ADD32(0, 0XE8);
    // 0x800747B0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_800747B4:
    // 0x800747B4: slti        $at, $v1, 0xE9
    ctx->r1 = SIGNED(ctx->r3) < 0XE9 ? 1 : 0;
    // 0x800747B8: bne         $at, $zero, L_800747C4
    if (ctx->r1 != 0) {
        // 0x800747BC: addiu       $t9, $zero, 0xE8
        ctx->r25 = ADD32(0, 0XE8);
            goto L_800747C4;
    }
    // 0x800747BC: addiu       $t9, $zero, 0xE8
    ctx->r25 = ADD32(0, 0XE8);
    // 0x800747C0: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
L_800747C4:
    // 0x800747C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800747C8: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x800747CC: jr          $ra
    // 0x800747D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800747D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800747D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800747D4: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x800747D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800747DC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800747E0: beq         $t7, $zero, L_80074A90
    if (ctx->r15 == 0) {
        // 0x800747E4: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_80074A90;
    }
    // 0x800747E4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800747E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800747EC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800747F0: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x800747F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800747F8: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800747FC: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074800: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80074804: nop

    // 0x80074808: bc1f        L_80074824
    if (!c1cs) {
        // 0x8007480C: nop
    
            goto L_80074824;
    }
    // 0x8007480C: nop

    // 0x80074810: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074814: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074818: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8007481C: jr          $ra
    // 0x80074820: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074820: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074824:
    // 0x80074824: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80074828: nop

    // 0x8007482C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80074830: nop

    // 0x80074834: bc1f        L_8007487C
    if (!c1cs) {
        // 0x80074838: nop
    
            goto L_8007487C;
    }
    // 0x80074838: nop

    // 0x8007483C: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x80074840: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074844: bne         $t8, $zero, L_80074868
    if (ctx->r24 != 0) {
        // 0x80074848: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074868;
    }
    // 0x80074848: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8007484C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074850: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074854: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074858: addiu       $t9, $zero, 0x70
    ctx->r25 = ADD32(0, 0X70);
    // 0x8007485C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80074860: jr          $ra
    // 0x80074864: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074864: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074868:
    // 0x80074868: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x8007486C: addiu       $t0, $zero, 0x70
    ctx->r8 = ADD32(0, 0X70);
    // 0x80074870: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074874: jr          $ra
    // 0x80074878: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    return;
    // 0x80074878: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
L_8007487C:
    // 0x8007487C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80074880: lwc1        $f8, -0x532C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X532C);
    // 0x80074884: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80074888: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8007488C: nop

    // 0x80074890: bc1f        L_80074950
    if (!c1cs) {
        // 0x80074894: nop
    
            goto L_80074950;
    }
    // 0x80074894: nop

    // 0x80074898: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007489C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800748A0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800748A4: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x800748A8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800748AC: nop

    // 0x800748B0: bc1f        L_80074910
    if (!c1cs) {
        // 0x800748B4: nop
    
            goto L_80074910;
    }
    // 0x800748B4: nop

    // 0x800748B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800748BC: nop

    // 0x800748C0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800748C4: nop

    // 0x800748C8: bc1f        L_80074910
    if (!c1cs) {
        // 0x800748CC: nop
    
            goto L_80074910;
    }
    // 0x800748CC: nop

    // 0x800748D0: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x800748D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800748D8: bne         $t1, $zero, L_800748FC
    if (ctx->r9 != 0) {
        // 0x800748DC: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_800748FC;
    }
    // 0x800748DC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x800748E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800748E4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x800748E8: addiu       $t2, $zero, 0xC8
    ctx->r10 = ADD32(0, 0XC8);
    // 0x800748EC: addiu       $t3, $zero, 0xC0
    ctx->r11 = ADD32(0, 0XC0);
    // 0x800748F0: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x800748F4: jr          $ra
    // 0x800748F8: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    return;
    // 0x800748F8: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_800748FC:
    // 0x800748FC: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x80074900: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x80074904: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80074908: jr          $ra
    // 0x8007490C: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    return;
    // 0x8007490C: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
L_80074910:
    // 0x80074910: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x80074914: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074918: bne         $t6, $zero, L_8007493C
    if (ctx->r14 != 0) {
        // 0x8007491C: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_8007493C;
    }
    // 0x8007491C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074920: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074924: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074928: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x8007492C: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x80074930: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80074934: jr          $ra
    // 0x80074938: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074938: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_8007493C:
    // 0x8007493C: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074940: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x80074944: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074948: jr          $ra
    // 0x8007494C: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x8007494C: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_80074950:
    // 0x80074950: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80074954: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80074958: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x8007495C: nop

    // 0x80074960: bc1f        L_800749A0
    if (!c1cs) {
        // 0x80074964: nop
    
            goto L_800749A0;
    }
    // 0x80074964: nop

    // 0x80074968: lhu         $t9, 0x6($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6);
    // 0x8007496C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074970: bne         $t9, $zero, L_80074990
    if (ctx->r25 != 0) {
        // 0x80074974: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074990;
    }
    // 0x80074974: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074978: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007497C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074980: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074984: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074988: jr          $ra
    // 0x8007498C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x8007498C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074990:
    // 0x80074990: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074994: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074998: jr          $ra
    // 0x8007499C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x8007499C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_800749A0:
    // 0x800749A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800749A4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800749A8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800749AC: nop

    // 0x800749B0: bc1f        L_800749F8
    if (!c1cs) {
        // 0x800749B4: nop
    
            goto L_800749F8;
    }
    // 0x800749B4: nop

    // 0x800749B8: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x800749BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800749C0: bne         $t0, $zero, L_800749E4
    if (ctx->r8 != 0) {
        // 0x800749C4: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_800749E4;
    }
    // 0x800749C4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x800749C8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800749CC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x800749D0: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x800749D4: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x800749D8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x800749DC: jr          $ra
    // 0x800749E0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    return;
    // 0x800749E0: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_800749E4:
    // 0x800749E4: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x800749E8: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x800749EC: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x800749F0: jr          $ra
    // 0x800749F4: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x800749F4: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_800749F8:
    // 0x800749F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800749FC: nop

    // 0x80074A00: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80074A04: nop

    // 0x80074A08: bc1f        L_80074A50
    if (!c1cs) {
        // 0x80074A0C: nop
    
            goto L_80074A50;
    }
    // 0x80074A0C: nop

    // 0x80074A10: lhu         $t3, 0x6($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X6);
    // 0x80074A14: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074A18: bne         $t3, $zero, L_80074A3C
    if (ctx->r11 != 0) {
        // 0x80074A1C: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074A3C;
    }
    // 0x80074A1C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074A20: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074A24: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074A28: addiu       $t4, $zero, 0x90
    ctx->r12 = ADD32(0, 0X90);
    // 0x80074A2C: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80074A30: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
    // 0x80074A34: jr          $ra
    // 0x80074A38: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    return;
    // 0x80074A38: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
L_80074A3C:
    // 0x80074A3C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80074A40: addiu       $t7, $zero, 0x90
    ctx->r15 = ADD32(0, 0X90);
    // 0x80074A44: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x80074A48: jr          $ra
    // 0x80074A4C: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    return;
    // 0x80074A4C: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_80074A50:
    // 0x80074A50: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x80074A54: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074A58: bne         $t8, $zero, L_80074A7C
    if (ctx->r24 != 0) {
        // 0x80074A5C: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074A7C;
    }
    // 0x80074A5C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074A60: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074A64: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074A68: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074A6C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x80074A70: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80074A74: jr          $ra
    // 0x80074A78: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074A78: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074A7C:
    // 0x80074A7C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074A80: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80074A84: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074A88: jr          $ra
    // 0x80074A8C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    return;
    // 0x80074A8C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
L_80074A90:
    // 0x80074A90: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80074A94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80074A98: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80074A9C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074AA0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80074AA4: nop

    // 0x80074AA8: bc1f        L_80074AC4
    if (!c1cs) {
        // 0x80074AAC: nop
    
            goto L_80074AC4;
    }
    // 0x80074AAC: nop

    // 0x80074AB0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074AB4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074AB8: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074ABC: jr          $ra
    // 0x80074AC0: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074AC0: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074AC4:
    // 0x80074AC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80074AC8: nop

    // 0x80074ACC: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80074AD0: nop

    // 0x80074AD4: bc1f        L_80074B1C
    if (!c1cs) {
        // 0x80074AD8: nop
    
            goto L_80074B1C;
    }
    // 0x80074AD8: nop

    // 0x80074ADC: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x80074AE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074AE4: bne         $t1, $zero, L_80074B08
    if (ctx->r9 != 0) {
        // 0x80074AE8: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074B08;
    }
    // 0x80074AE8: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074AEC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074AF0: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074AF4: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074AF8: addiu       $t2, $zero, 0x70
    ctx->r10 = ADD32(0, 0X70);
    // 0x80074AFC: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x80074B00: jr          $ra
    // 0x80074B04: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074B04: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074B08:
    // 0x80074B08: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074B0C: addiu       $t3, $zero, 0x70
    ctx->r11 = ADD32(0, 0X70);
    // 0x80074B10: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074B14: jr          $ra
    // 0x80074B18: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    return;
    // 0x80074B18: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_80074B1C:
    // 0x80074B1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80074B20: lwc1        $f16, -0x5328($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5328);
    // 0x80074B24: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80074B28: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80074B2C: nop

    // 0x80074B30: bc1f        L_80074BF0
    if (!c1cs) {
        // 0x80074B34: nop
    
            goto L_80074BF0;
    }
    // 0x80074B34: nop

    // 0x80074B38: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80074B3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80074B40: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80074B44: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80074B48: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80074B4C: nop

    // 0x80074B50: bc1f        L_80074BB0
    if (!c1cs) {
        // 0x80074B54: nop
    
            goto L_80074BB0;
    }
    // 0x80074B54: nop

    // 0x80074B58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074B5C: nop

    // 0x80074B60: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80074B64: nop

    // 0x80074B68: bc1f        L_80074BB0
    if (!c1cs) {
        // 0x80074B6C: nop
    
            goto L_80074BB0;
    }
    // 0x80074B6C: nop

    // 0x80074B70: lhu         $t4, 0x6($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X6);
    // 0x80074B74: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074B78: bne         $t4, $zero, L_80074B9C
    if (ctx->r12 != 0) {
        // 0x80074B7C: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074B9C;
    }
    // 0x80074B7C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074B80: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074B84: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074B88: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x80074B8C: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x80074B90: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x80074B94: jr          $ra
    // 0x80074B98: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    return;
    // 0x80074B98: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
L_80074B9C:
    // 0x80074B9C: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x80074BA0: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x80074BA4: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80074BA8: jr          $ra
    // 0x80074BAC: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x80074BAC: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_80074BB0:
    // 0x80074BB0: lhu         $t9, 0x6($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6);
    // 0x80074BB4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074BB8: bne         $t9, $zero, L_80074BDC
    if (ctx->r25 != 0) {
        // 0x80074BBC: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074BDC;
    }
    // 0x80074BBC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074BC0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074BC4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074BC8: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074BCC: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x80074BD0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x80074BD4: jr          $ra
    // 0x80074BD8: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074BD8: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074BDC:
    // 0x80074BDC: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074BE0: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x80074BE4: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074BE8: jr          $ra
    // 0x80074BEC: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    return;
    // 0x80074BEC: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_80074BF0:
    // 0x80074BF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074BF4: lui         $at, 0xC361
    ctx->r1 = S32(0XC361 << 16);
    // 0x80074BF8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80074BFC: nop

    // 0x80074C00: bc1f        L_80074C40
    if (!c1cs) {
        // 0x80074C04: nop
    
            goto L_80074C40;
    }
    // 0x80074C04: nop

    // 0x80074C08: lhu         $t2, 0x6($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X6);
    // 0x80074C0C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074C10: bne         $t2, $zero, L_80074C30
    if (ctx->r10 != 0) {
        // 0x80074C14: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074C30;
    }
    // 0x80074C14: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074C18: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074C1C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074C20: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074C24: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074C28: jr          $ra
    // 0x80074C2C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074C2C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074C30:
    // 0x80074C30: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074C34: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074C38: jr          $ra
    // 0x80074C3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074C3C: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074C40:
    // 0x80074C40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80074C44: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x80074C48: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80074C4C: nop

    // 0x80074C50: bc1f        L_80074C98
    if (!c1cs) {
        // 0x80074C54: nop
    
            goto L_80074C98;
    }
    // 0x80074C54: nop

    // 0x80074C58: lhu         $t3, 0x6($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X6);
    // 0x80074C5C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074C60: bne         $t3, $zero, L_80074C84
    if (ctx->r11 != 0) {
        // 0x80074C64: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074C84;
    }
    // 0x80074C64: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074C68: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074C6C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074C70: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074C74: addiu       $t4, $zero, 0xA0
    ctx->r12 = ADD32(0, 0XA0);
    // 0x80074C78: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074C7C: jr          $ra
    // 0x80074C80: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
    return;
    // 0x80074C80: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
L_80074C84:
    // 0x80074C84: addiu       $v1, $zero, 0xB0
    ctx->r3 = ADD32(0, 0XB0);
    // 0x80074C88: addiu       $t5, $zero, 0xA0
    ctx->r13 = ADD32(0, 0XA0);
    // 0x80074C8C: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x80074C90: jr          $ra
    // 0x80074C94: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074C94: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074C98:
    // 0x80074C98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074C9C: nop

    // 0x80074CA0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80074CA4: nop

    // 0x80074CA8: bc1f        L_80074CF0
    if (!c1cs) {
        // 0x80074CAC: nop
    
            goto L_80074CF0;
    }
    // 0x80074CAC: nop

    // 0x80074CB0: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x80074CB4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074CB8: bne         $t6, $zero, L_80074CDC
    if (ctx->r14 != 0) {
        // 0x80074CBC: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074CDC;
    }
    // 0x80074CBC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074CC0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074CC4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074CC8: addiu       $t7, $zero, 0x90
    ctx->r15 = ADD32(0, 0X90);
    // 0x80074CCC: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80074CD0: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80074CD4: jr          $ra
    // 0x80074CD8: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    return;
    // 0x80074CD8: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_80074CDC:
    // 0x80074CDC: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x80074CE0: addiu       $t0, $zero, 0x90
    ctx->r8 = ADD32(0, 0X90);
    // 0x80074CE4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80074CE8: jr          $ra
    // 0x80074CEC: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    return;
    // 0x80074CEC: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
L_80074CF0:
    // 0x80074CF0: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x80074CF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074CF8: bne         $t1, $zero, L_80074D1C
    if (ctx->r9 != 0) {
        // 0x80074CFC: addiu       $v0, $v0, 0x38C8
        ctx->r2 = ADD32(ctx->r2, 0X38C8);
            goto L_80074D1C;
    }
    // 0x80074CFC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074D00: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074D04: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074D08: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074D0C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80074D10: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x80074D14: jr          $ra
    // 0x80074D18: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    return;
    // 0x80074D18: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
L_80074D1C:
    // 0x80074D1C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80074D20: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80074D24: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80074D28: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x80074D2C: jr          $ra
    // 0x80074D30: nop

    return;
    // 0x80074D30: nop

;}
RECOMP_FUNC void func_80074D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D34: jr          $ra
    // 0x80074D38: nop

    return;
    // 0x80074D38: nop

;}
RECOMP_FUNC void func_80074D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80074D40: sb          $zero, 0x3A39($at)
    MEM_B(0X3A39, ctx->r1) = 0;
    // 0x80074D44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80074D48: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80074D4C: jr          $ra
    // 0x80074D50: sb          $t6, 0x39DC($at)
    MEM_B(0X39DC, ctx->r1) = ctx->r14;
    return;
    // 0x80074D50: sb          $t6, 0x39DC($at)
    MEM_B(0X39DC, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80074D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D64: jr          $ra
    // 0x80074D68: nop

    return;
    // 0x80074D68: nop

;}
RECOMP_FUNC void func_80074D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D84: jr          $ra
    // 0x80074D88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80074D88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80074D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074D9C: jal         0x80015BC0
    // 0x80074DA0: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80074DA0: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_0:
    // 0x80074DA4: jal         0x80015BC0
    // 0x80074DA8: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80074DA8: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_1:
    // 0x80074DAC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80074DB0: lbu         $t6, 0xB65($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB65);
    // 0x80074DB4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80074DB8: bne         $t6, $zero, L_80074E20
    if (ctx->r14 != 0) {
        // 0x80074DBC: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80074E20;
    }
    // 0x80074DBC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80074DC0: lw          $t7, 0xB24($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XB24);
    // 0x80074DC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074DC8: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80074DCC: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074DD0: lhu         $t9, 0x6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X6);
    // 0x80074DD4: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x80074DD8: bne         $t9, $zero, L_80074E08
    if (ctx->r25 != 0) {
        // 0x80074DDC: addiu       $t3, $zero, 0xE8
        ctx->r11 = ADD32(0, 0XE8);
            goto L_80074E08;
    }
    // 0x80074DDC: addiu       $t3, $zero, 0xE8
    ctx->r11 = ADD32(0, 0XE8);
    // 0x80074DE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074DE4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074DE8: addiu       $t0, $zero, 0xE8
    ctx->r8 = ADD32(0, 0XE8);
    // 0x80074DEC: addiu       $t1, $zero, 0xA0
    ctx->r9 = ADD32(0, 0XA0);
    // 0x80074DF0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x80074DF4: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x80074DF8: jal         0x8007A29C
    // 0x80074DFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007A29C(rdram, ctx);
        goto after_2;
    // 0x80074DFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80074E00: b           L_80074E7C
    // 0x80074E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80074E7C;
    // 0x80074E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80074E08:
    // 0x80074E08: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x80074E0C: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x80074E10: jal         0x8007A29C
    // 0x80074E14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007A29C(rdram, ctx);
        goto after_3;
    // 0x80074E14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80074E18: b           L_80074E7C
    // 0x80074E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80074E7C;
    // 0x80074E1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80074E20:
    // 0x80074E20: lw          $t4, 0xB24($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XB24);
    // 0x80074E24: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074E28: lw          $t5, 0xC8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC8);
    // 0x80074E2C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074E30: lhu         $t6, 0x6($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X6);
    // 0x80074E34: addiu       $t9, $zero, 0xE8
    ctx->r25 = ADD32(0, 0XE8);
    // 0x80074E38: bne         $t6, $zero, L_80074E68
    if (ctx->r14 != 0) {
        // 0x80074E3C: addiu       $t0, $zero, 0xA0
        ctx->r8 = ADD32(0, 0XA0);
            goto L_80074E68;
    }
    // 0x80074E3C: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x80074E40: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80074E44: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x80074E48: addiu       $t7, $zero, 0xA0
    ctx->r15 = ADD32(0, 0XA0);
    // 0x80074E4C: addiu       $t8, $zero, 0xE8
    ctx->r24 = ADD32(0, 0XE8);
    // 0x80074E50: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80074E54: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x80074E58: jal         0x8007A29C
    // 0x80074E5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007A29C(rdram, ctx);
        goto after_4;
    // 0x80074E5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80074E60: b           L_80074E7C
    // 0x80074E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80074E7C;
    // 0x80074E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80074E68:
    // 0x80074E68: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80074E6C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x80074E70: jal         0x8007A29C
    // 0x80074E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007A29C(rdram, ctx);
        goto after_5;
    // 0x80074E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80074E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80074E7C:
    // 0x80074E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80074E80: jr          $ra
    // 0x80074E84: nop

    return;
    // 0x80074E84: nop

;}
RECOMP_FUNC void func_80074E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074E90: addiu       $a0, $zero, 0x4C1
    ctx->r4 = ADD32(0, 0X4C1);
    // 0x80074E94: jal         0x802A14C0
    // 0x80074E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80074E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80074E9C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80074EA0: lb          $v0, -0x309F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X309F);
    // 0x80074EA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80074EA8: beq         $v0, $zero, L_80074ECC
    if (ctx->r2 == 0) {
        // 0x80074EAC: addiu       $a0, $zero, 0x5A6
        ctx->r4 = ADD32(0, 0X5A6);
            goto L_80074ECC;
    }
    // 0x80074EAC: addiu       $a0, $zero, 0x5A6
    ctx->r4 = ADD32(0, 0X5A6);
    // 0x80074EB0: beq         $v0, $at, L_80074EDC
    if (ctx->r2 == ctx->r1) {
        // 0x80074EB4: addiu       $a0, $zero, 0x5A7
        ctx->r4 = ADD32(0, 0X5A7);
            goto L_80074EDC;
    }
    // 0x80074EB4: addiu       $a0, $zero, 0x5A7
    ctx->r4 = ADD32(0, 0X5A7);
    // 0x80074EB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80074EBC: beq         $v0, $at, L_80074EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80074EC0: addiu       $a0, $zero, 0x5A8
        ctx->r4 = ADD32(0, 0X5A8);
            goto L_80074EEC;
    }
    // 0x80074EC0: addiu       $a0, $zero, 0x5A8
    ctx->r4 = ADD32(0, 0X5A8);
    // 0x80074EC4: b           L_80074EF4
    // 0x80074EC8: nop

        goto L_80074EF4;
    // 0x80074EC8: nop

L_80074ECC:
    // 0x80074ECC: jal         0x802A14C0
    // 0x80074ED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80074ED0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80074ED4: b           L_80074EF4
    // 0x80074ED8: nop

        goto L_80074EF4;
    // 0x80074ED8: nop

L_80074EDC:
    // 0x80074EDC: jal         0x802A14C0
    // 0x80074EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80074EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80074EE4: b           L_80074EF4
    // 0x80074EE8: nop

        goto L_80074EF4;
    // 0x80074EE8: nop

L_80074EEC:
    // 0x80074EEC: jal         0x802A14C0
    // 0x80074EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80074EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80074EF4:
    // 0x80074EF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80074EF8: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80074EFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80074F00: bne         $t6, $at, L_80074FE8
    if (ctx->r14 != ctx->r1) {
        // 0x80074F04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80074FE8;
    }
    // 0x80074F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074F08: jal         0x8004974C
    // 0x80074F0C: nop

    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x80074F0C: nop

    after_4:
    // 0x80074F10: jal         0x8004974C
    // 0x80074F14: nop

    func_8004974C(rdram, ctx);
        goto after_5;
    // 0x80074F14: nop

    after_5:
    // 0x80074F18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80074F1C: bne         $v0, $at, L_80074FE4
    if (ctx->r2 != ctx->r1) {
        // 0x80074F20: addiu       $a0, $zero, 0x5A9
        ctx->r4 = ADD32(0, 0X5A9);
            goto L_80074FE4;
    }
    // 0x80074F20: addiu       $a0, $zero, 0x5A9
    ctx->r4 = ADD32(0, 0X5A9);
    // 0x80074F24: jal         0x802A14C0
    // 0x80074F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80074F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80074F2C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80074F30: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x80074F34: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80074F38: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80074F3C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80074F40: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80074F44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80074F48: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80074F4C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80074F50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80074F54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80074F58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80074F5C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80074F60: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80074F64: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80074F68: lb          $v0, -0x2F7F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2F7F);
    // 0x80074F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80074F70: beq         $v0, $zero, L_80074FA0
    if (ctx->r2 == 0) {
        // 0x80074F74: addiu       $a0, $zero, 0x441
        ctx->r4 = ADD32(0, 0X441);
            goto L_80074FA0;
    }
    // 0x80074F74: addiu       $a0, $zero, 0x441
    ctx->r4 = ADD32(0, 0X441);
    // 0x80074F78: beq         $v0, $at, L_80074FB0
    if (ctx->r2 == ctx->r1) {
        // 0x80074F7C: addiu       $a0, $zero, 0x595
        ctx->r4 = ADD32(0, 0X595);
            goto L_80074FB0;
    }
    // 0x80074F7C: addiu       $a0, $zero, 0x595
    ctx->r4 = ADD32(0, 0X595);
    // 0x80074F80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80074F84: beq         $v0, $at, L_80074FC0
    if (ctx->r2 == ctx->r1) {
        // 0x80074F88: addiu       $a0, $zero, 0x4B5
        ctx->r4 = ADD32(0, 0X4B5);
            goto L_80074FC0;
    }
    // 0x80074F88: addiu       $a0, $zero, 0x4B5
    ctx->r4 = ADD32(0, 0X4B5);
    // 0x80074F8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80074F90: beq         $v0, $at, L_80074FD0
    if (ctx->r2 == ctx->r1) {
        // 0x80074F94: addiu       $a0, $zero, 0x4B6
        ctx->r4 = ADD32(0, 0X4B6);
            goto L_80074FD0;
    }
    // 0x80074F94: addiu       $a0, $zero, 0x4B6
    ctx->r4 = ADD32(0, 0X4B6);
    // 0x80074F98: b           L_80074FDC
    // 0x80074F9C: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
        goto L_80074FDC;
    // 0x80074F9C: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
L_80074FA0:
    // 0x80074FA0: jal         0x802A14C0
    // 0x80074FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80074FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80074FA8: b           L_80074FDC
    // 0x80074FAC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
        goto L_80074FDC;
    // 0x80074FAC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
L_80074FB0:
    // 0x80074FB0: jal         0x802A14C0
    // 0x80074FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80074FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80074FB8: b           L_80074FDC
    // 0x80074FBC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
        goto L_80074FDC;
    // 0x80074FBC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
L_80074FC0:
    // 0x80074FC0: jal         0x802A14C0
    // 0x80074FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80074FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80074FC8: b           L_80074FDC
    // 0x80074FCC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
        goto L_80074FDC;
    // 0x80074FCC: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
L_80074FD0:
    // 0x80074FD0: jal         0x802A14C0
    // 0x80074FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80074FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80074FD8: addiu       $a0, $zero, 0x5B1
    ctx->r4 = ADD32(0, 0X5B1);
L_80074FDC:
    // 0x80074FDC: jal         0x802A14C0
    // 0x80074FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x80074FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_80074FE4:
    // 0x80074FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80074FE8:
    // 0x80074FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80074FEC: jr          $ra
    // 0x80074FF0: nop

    return;
    // 0x80074FF0: nop

;}
RECOMP_FUNC void func_80074FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074FF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80074FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074FFC: addiu       $a0, $zero, 0x5AA
    ctx->r4 = ADD32(0, 0X5AA);
    // 0x80075000: jal         0x802A14C0
    // 0x80075004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075008: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007500C: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80075010: jal         0x80079F98
    // 0x80075014: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80075014: nop

    after_1:
    // 0x80075018: addiu       $a0, $zero, 0x4E4
    ctx->r4 = ADD32(0, 0X4E4);
    // 0x8007501C: jal         0x802A14C0
    // 0x80075020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80075020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80075024: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075028: lbu         $a0, -0x225C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X225C);
    // 0x8007502C: jal         0x80079F98
    // 0x80075030: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x80075030: nop

    after_3:
    // 0x80075034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007503C: jr          $ra
    // 0x80075040: nop

    return;
    // 0x80075040: nop

;}
RECOMP_FUNC void func_80075044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075044: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80075048: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8007504C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075050: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80075054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007505C: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x80075060: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80075064: beq         $t7, $at, L_80075078
    if (ctx->r15 == ctx->r1) {
        // 0x80075068: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80075078;
    }
    // 0x80075068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007506C: jal         0x80075084
    // 0x80075070: nop

    func_80075084(rdram, ctx);
        goto after_0;
    // 0x80075070: nop

    after_0:
    // 0x80075074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075078:
    // 0x80075078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007507C: jr          $ra
    // 0x80075080: nop

    return;
    // 0x80075080: nop

;}
RECOMP_FUNC void func_80075084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075084: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80075088: addiu       $v1, $v1, 0x3AA8
    ctx->r3 = ADD32(ctx->r3, 0X3AA8);
    // 0x8007508C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80075090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075094: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x80075098: beq         $t6, $zero, L_80075108
    if (ctx->r14 == 0) {
        // 0x8007509C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075108;
    }
    // 0x8007509C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800750A0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800750A4: lhu         $t7, -0x2CE8($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2CE8);
    // 0x800750A8: nop

    // 0x800750AC: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x800750B0: beq         $t8, $zero, L_800750C8
    if (ctx->r24 == 0) {
        // 0x800750B4: nop
    
            goto L_800750C8;
    }
    // 0x800750B4: nop

    // 0x800750B8: jal         0x8007A5B8
    // 0x800750BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007A5B8(rdram, ctx);
        goto after_0;
    // 0x800750BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800750C0: b           L_800750D0
    // 0x800750C4: nop

        goto L_800750D0;
    // 0x800750C4: nop

L_800750C8:
    // 0x800750C8: jal         0x8007A5B8
    // 0x800750CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007A5B8(rdram, ctx);
        goto after_1;
    // 0x800750CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
L_800750D0:
    // 0x800750D0: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x800750D4: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x800750D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800750DC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800750E0: beq         $t0, $zero, L_800750F8
    if (ctx->r8 == 0) {
        // 0x800750E4: addiu       $a0, $zero, 0x4D0
        ctx->r4 = ADD32(0, 0X4D0);
            goto L_800750F8;
    }
    // 0x800750E4: addiu       $a0, $zero, 0x4D0
    ctx->r4 = ADD32(0, 0X4D0);
    // 0x800750E8: jal         0x802A14C0
    // 0x800750EC: addiu       $a0, $zero, 0x44B
    ctx->r4 = ADD32(0, 0X44B);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800750EC: addiu       $a0, $zero, 0x44B
    ctx->r4 = ADD32(0, 0X44B);
    after_2:
    // 0x800750F0: b           L_800751B4
    // 0x800750F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x800750F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800750F8:
    // 0x800750F8: jal         0x802A14C0
    // 0x800750FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800750FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80075100: b           L_800751B4
    // 0x80075104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x80075104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075108:
    // 0x80075108: ori         $t1, $v0, 0x4
    ctx->r9 = ctx->r2 | 0X4;
    // 0x8007510C: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x80075110: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80075114: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80075118: nop

    // 0x8007511C: lw          $t3, 0x8C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8C);
    // 0x80075120: nop

    // 0x80075124: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x80075128: nop

    // 0x8007512C: lbu         $a0, 0x7($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X7);
    // 0x80075130: jal         0x8007A5B8
    // 0x80075134: nop

    func_8007A5B8(rdram, ctx);
        goto after_4;
    // 0x80075134: nop

    after_4:
    // 0x80075138: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007513C: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80075140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80075144: andi        $t5, $v0, 0x3
    ctx->r13 = ctx->r2 & 0X3;
    // 0x80075148: beq         $t5, $zero, L_80075178
    if (ctx->r13 == 0) {
        // 0x8007514C: addiu       $a0, $zero, 0x4B9
        ctx->r4 = ADD32(0, 0X4B9);
            goto L_80075178;
    }
    // 0x8007514C: addiu       $a0, $zero, 0x4B9
    ctx->r4 = ADD32(0, 0X4B9);
    // 0x80075150: beq         $t5, $at, L_80075188
    if (ctx->r13 == ctx->r1) {
        // 0x80075154: addiu       $a0, $zero, 0x454
        ctx->r4 = ADD32(0, 0X454);
            goto L_80075188;
    }
    // 0x80075154: addiu       $a0, $zero, 0x454
    ctx->r4 = ADD32(0, 0X454);
    // 0x80075158: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007515C: beq         $t5, $at, L_80075198
    if (ctx->r13 == ctx->r1) {
        // 0x80075160: addiu       $a0, $zero, 0x406
        ctx->r4 = ADD32(0, 0X406);
            goto L_80075198;
    }
    // 0x80075160: addiu       $a0, $zero, 0x406
    ctx->r4 = ADD32(0, 0X406);
    // 0x80075164: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80075168: beq         $t5, $at, L_800751A8
    if (ctx->r13 == ctx->r1) {
        // 0x8007516C: addiu       $a0, $zero, 0x407
        ctx->r4 = ADD32(0, 0X407);
            goto L_800751A8;
    }
    // 0x8007516C: addiu       $a0, $zero, 0x407
    ctx->r4 = ADD32(0, 0X407);
    // 0x80075170: b           L_800751B4
    // 0x80075174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x80075174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075178:
    // 0x80075178: jal         0x802A14C0
    // 0x8007517C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x8007517C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80075180: b           L_800751B4
    // 0x80075184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x80075184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075188:
    // 0x80075188: jal         0x802A14C0
    // 0x8007518C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007518C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80075190: b           L_800751B4
    // 0x80075194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x80075194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075198:
    // 0x80075198: jal         0x802A14C0
    // 0x8007519C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x8007519C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800751A0: b           L_800751B4
    // 0x800751A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800751B4;
    // 0x800751A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800751A8:
    // 0x800751A8: jal         0x802A14C0
    // 0x800751AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x800751AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800751B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800751B4:
    // 0x800751B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800751B8: jr          $ra
    // 0x800751BC: nop

    return;
    // 0x800751BC: nop

;}
RECOMP_FUNC void func_800751C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800751C0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800751C4: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x800751C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800751CC: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x800751D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800751D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800751D8: lbu         $t7, -0x7664($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X7664);
    // 0x800751DC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800751E0: beq         $t7, $at, L_800751F8
    if (ctx->r15 == ctx->r1) {
        // 0x800751E4: nop
    
            goto L_800751F8;
    }
    // 0x800751E4: nop

    // 0x800751E8: jal         0x8007A484
    // 0x800751EC: nop

    func_8007A484(rdram, ctx);
        goto after_0;
    // 0x800751EC: nop

    after_0:
    // 0x800751F0: jal         0x80075044
    // 0x800751F4: nop

    func_80075044(rdram, ctx);
        goto after_1;
    // 0x800751F4: nop

    after_1:
L_800751F8:
    // 0x800751F8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800751FC: addiu       $v1, $v1, 0x3AA8
    ctx->r3 = ADD32(ctx->r3, 0X3AA8);
    // 0x80075200: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80075204: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80075208: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x8007520C: bne         $t8, $zero, L_800752D8
    if (ctx->r24 != 0) {
        // 0x80075210: ori         $t9, $v0, 0x1
        ctx->r25 = ctx->r2 | 0X1;
            goto L_800752D8;
    }
    // 0x80075210: ori         $t9, $v0, 0x1
    ctx->r25 = ctx->r2 | 0X1;
    // 0x80075214: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x80075218: lhu         $t0, 0xB74($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB74);
    // 0x8007521C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80075220: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80075224: beq         $t1, $zero, L_800752D0
    if (ctx->r9 == 0) {
        // 0x80075228: nop
    
            goto L_800752D0;
    }
    // 0x80075228: nop

    // 0x8007522C: lhu         $t2, -0x2CE8($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X2CE8);
    // 0x80075230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80075234: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80075238: beq         $t3, $zero, L_80075288
    if (ctx->r11 == 0) {
        // 0x8007523C: addiu       $a0, $zero, 0x459
        ctx->r4 = ADD32(0, 0X459);
            goto L_80075288;
    }
    // 0x8007523C: addiu       $a0, $zero, 0x459
    ctx->r4 = ADD32(0, 0X459);
    // 0x80075240: jal         0x802A14C0
    // 0x80075244: addiu       $a0, $zero, 0x459
    ctx->r4 = ADD32(0, 0X459);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80075244: addiu       $a0, $zero, 0x459
    ctx->r4 = ADD32(0, 0X459);
    after_2:
    // 0x80075248: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8007524C: lbu         $a0, -0x225C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X225C);
    // 0x80075250: jal         0x80079F98
    // 0x80075254: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x80075254: nop

    after_3:
    // 0x80075258: addiu       $a0, $zero, 0x47F
    ctx->r4 = ADD32(0, 0X47F);
    // 0x8007525C: jal         0x802A14C0
    // 0x80075260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80075260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80075264: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075268: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x8007526C: jal         0x80079F98
    // 0x80075270: nop

    func_80079F98(rdram, ctx);
        goto after_5;
    // 0x80075270: nop

    after_5:
    // 0x80075274: addiu       $a0, $zero, 0x428
    ctx->r4 = ADD32(0, 0X428);
    // 0x80075278: jal         0x802A14C0
    // 0x8007527C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x8007527C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80075280: b           L_800752DC
    // 0x80075284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800752DC;
    // 0x80075284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075288:
    // 0x80075288: jal         0x802A14C0
    // 0x8007528C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x8007528C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80075290: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075294: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80075298: jal         0x80079F98
    // 0x8007529C: nop

    func_80079F98(rdram, ctx);
        goto after_8;
    // 0x8007529C: nop

    after_8:
    // 0x800752A0: addiu       $a0, $zero, 0x47F
    ctx->r4 = ADD32(0, 0X47F);
    // 0x800752A4: jal         0x802A14C0
    // 0x800752A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x800752A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800752AC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800752B0: lbu         $a0, -0x225C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X225C);
    // 0x800752B4: jal         0x80079F98
    // 0x800752B8: nop

    func_80079F98(rdram, ctx);
        goto after_10;
    // 0x800752B8: nop

    after_10:
    // 0x800752BC: addiu       $a0, $zero, 0x428
    ctx->r4 = ADD32(0, 0X428);
    // 0x800752C0: jal         0x802A14C0
    // 0x800752C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x800752C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800752C8: b           L_800752DC
    // 0x800752CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800752DC;
    // 0x800752CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800752D0:
    // 0x800752D0: jal         0x800752E8
    // 0x800752D4: nop

    func_800752E8(rdram, ctx);
        goto after_12;
    // 0x800752D4: nop

    after_12:
L_800752D8:
    // 0x800752D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800752DC:
    // 0x800752DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800752E0: jr          $ra
    // 0x800752E4: nop

    return;
    // 0x800752E4: nop

;}
RECOMP_FUNC void func_800752E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800752E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800752EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800752F0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800752F4: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x800752F8: lhu         $t6, 0x8($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X8);
    // 0x800752FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80075300: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075304: beq         $t7, $zero, L_80075344
    if (ctx->r15 == 0) {
        // 0x80075308: nop
    
            goto L_80075344;
    }
    // 0x80075308: nop

    // 0x8007530C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80075310: jal         0x80079F98
    // 0x80075314: nop

    func_80079F98(rdram, ctx);
        goto after_0;
    // 0x80075314: nop

    after_0:
    // 0x80075318: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8007531C: jal         0x80075384
    // 0x80075320: nop

    func_80075384(rdram, ctx);
        goto after_1;
    // 0x80075320: nop

    after_1:
    // 0x80075324: lbu         $a0, 0xA94($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA94);
    // 0x80075328: jal         0x80079F98
    // 0x8007532C: nop

    func_80079F98(rdram, ctx);
        goto after_2;
    // 0x8007532C: nop

    after_2:
    // 0x80075330: lhu         $a0, 0xA9C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA9C);
    // 0x80075334: jal         0x80075384
    // 0x80075338: nop

    func_80075384(rdram, ctx);
        goto after_3;
    // 0x80075338: nop

    after_3:
    // 0x8007533C: b           L_80075378
    // 0x80075340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80075378;
    // 0x80075340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80075344:
    // 0x80075344: lbu         $a0, 0xA94($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA94);
    // 0x80075348: jal         0x80079F98
    // 0x8007534C: nop

    func_80079F98(rdram, ctx);
        goto after_4;
    // 0x8007534C: nop

    after_4:
    // 0x80075350: lhu         $a0, 0xA9C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA9C);
    // 0x80075354: jal         0x80075384
    // 0x80075358: nop

    func_80075384(rdram, ctx);
        goto after_5;
    // 0x80075358: nop

    after_5:
    // 0x8007535C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80075360: jal         0x80079F98
    // 0x80075364: nop

    func_80079F98(rdram, ctx);
        goto after_6;
    // 0x80075364: nop

    after_6:
    // 0x80075368: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8007536C: jal         0x80075384
    // 0x80075370: nop

    func_80075384(rdram, ctx);
        goto after_7;
    // 0x80075370: nop

    after_7:
    // 0x80075374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80075378:
    // 0x80075378: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007537C: jr          $ra
    // 0x80075380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80075380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80075384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007538C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075390: addiu       $a0, $zero, 0x5AB
    ctx->r4 = ADD32(0, 0X5AB);
    // 0x80075394: jal         0x802A14C0
    // 0x80075398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007539C: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x800753A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800753A4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800753A8: beq         $t7, $zero, L_800753C0
    if (ctx->r15 == 0) {
        // 0x800753AC: addiu       $a0, $zero, 0x427
        ctx->r4 = ADD32(0, 0X427);
            goto L_800753C0;
    }
    // 0x800753AC: addiu       $a0, $zero, 0x427
    ctx->r4 = ADD32(0, 0X427);
    // 0x800753B0: jal         0x802A14C0
    // 0x800753B4: addiu       $a0, $zero, 0x47E
    ctx->r4 = ADD32(0, 0X47E);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800753B4: addiu       $a0, $zero, 0x47E
    ctx->r4 = ADD32(0, 0X47E);
    after_1:
    // 0x800753B8: b           L_800753CC
    // 0x800753BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800753CC;
    // 0x800753BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800753C0:
    // 0x800753C0: jal         0x802A14C0
    // 0x800753C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800753C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800753C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800753CC:
    // 0x800753CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800753D0: jr          $ra
    // 0x800753D4: nop

    return;
    // 0x800753D4: nop

;}
RECOMP_FUNC void func_800753D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800753D8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800753DC: addiu       $v0, $v0, 0x3ACF
    ctx->r2 = ADD32(ctx->r2, 0X3ACF);
    // 0x800753E0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800753E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800753E8: bne         $t6, $zero, L_80075534
    if (ctx->r14 != 0) {
        // 0x800753EC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075534;
    }
    // 0x800753EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800753F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800753F4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x800753F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800753FC: jal         0x802A13CC
    // 0x80075400: sb          $zero, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = 0;
    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_0;
    // 0x80075400: sb          $zero, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = 0;
    after_0:
    // 0x80075404: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80075408: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x8007540C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80075410: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80075414: beq         $t8, $zero, L_800754F0
    if (ctx->r24 == 0) {
        // 0x80075418: addiu       $v1, $v1, 0x38C8
        ctx->r3 = ADD32(ctx->r3, 0X38C8);
            goto L_800754F0;
    }
    // 0x80075418: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x8007541C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075420: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80075424: lhu         $v1, 0xA($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA);
    // 0x80075428: lhu         $a3, 0xA9E($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0XA9E);
    // 0x8007542C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80075430: bne         $v1, $a3, L_800754E0
    if (ctx->r3 != ctx->r7) {
        // 0x80075434: andi        $a1, $a3, 0xFF
        ctx->r5 = ctx->r7 & 0XFF;
            goto L_800754E0;
    }
    // 0x80075434: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    // 0x80075438: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007543C: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x80075440: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80075444: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80075448: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x8007544C: bne         $v0, $at, L_800754B8
    if (ctx->r2 != ctx->r1) {
        // 0x80075450: sh          $a0, 0x2($v1)
        MEM_H(0X2, ctx->r3) = ctx->r4;
            goto L_800754B8;
    }
    // 0x80075450: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x80075454: addiu       $a0, $zero, 0x458
    ctx->r4 = ADD32(0, 0X458);
    // 0x80075458: jal         0x802A14C0
    // 0x8007545C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x8007545C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075460: jal         0x800759EC
    // 0x80075464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800759EC(rdram, ctx);
        goto after_2;
    // 0x80075464: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80075468: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007546C: lb          $v0, -0x3093($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3093);
    // 0x80075470: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075474: beq         $v0, $at, L_800754A8
    if (ctx->r2 == ctx->r1) {
        // 0x80075478: addiu       $a0, $zero, 0x5AD
        ctx->r4 = ADD32(0, 0X5AD);
            goto L_800754A8;
    }
    // 0x80075478: addiu       $a0, $zero, 0x5AD
    ctx->r4 = ADD32(0, 0X5AD);
    // 0x8007547C: bne         $v0, $zero, L_80075498
    if (ctx->r2 != 0) {
        // 0x80075480: addiu       $a0, $zero, 0x40A
        ctx->r4 = ADD32(0, 0X40A);
            goto L_80075498;
    }
    // 0x80075480: addiu       $a0, $zero, 0x40A
    ctx->r4 = ADD32(0, 0X40A);
    // 0x80075484: addiu       $a0, $zero, 0x596
    ctx->r4 = ADD32(0, 0X596);
    // 0x80075488: jal         0x802A14C0
    // 0x8007548C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x8007548C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80075490: b           L_8007552C
    // 0x80075494: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_8007552C;
    // 0x80075494: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_80075498:
    // 0x80075498: jal         0x802A14C0
    // 0x8007549C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8007549C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800754A0: b           L_8007552C
    // 0x800754A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_8007552C;
    // 0x800754A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_800754A8:
    // 0x800754A8: jal         0x802A14C0
    // 0x800754AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x800754AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800754B0: b           L_8007552C
    // 0x800754B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_8007552C;
    // 0x800754B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_800754B8:
    // 0x800754B8: addiu       $a0, $zero, 0x409
    ctx->r4 = ADD32(0, 0X409);
    // 0x800754BC: jal         0x802A14C0
    // 0x800754C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x800754C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800754C4: jal         0x800759EC
    // 0x800754C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800759EC(rdram, ctx);
        goto after_7;
    // 0x800754C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x800754CC: addiu       $a0, $zero, 0x597
    ctx->r4 = ADD32(0, 0X597);
    // 0x800754D0: jal         0x802A14C0
    // 0x800754D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x800754D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800754D8: b           L_8007552C
    // 0x800754DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_8007552C;
    // 0x800754DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_800754E0:
    // 0x800754E0: jal         0x80075544
    // 0x800754E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80075544(rdram, ctx);
        goto after_9;
    // 0x800754E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800754E8: b           L_8007552C
    // 0x800754EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_8007552C;
    // 0x800754EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_800754F0:
    // 0x800754F0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800754F4: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x800754F8: bne         $v0, $zero, L_80075514
    if (ctx->r2 != 0) {
        // 0x800754FC: sh          $a0, 0x2($v1)
        MEM_H(0X2, ctx->r3) = ctx->r4;
            goto L_80075514;
    }
    // 0x800754FC: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x80075500: addiu       $a0, $zero, 0x4BA
    ctx->r4 = ADD32(0, 0X4BA);
    // 0x80075504: jal         0x802A14C0
    // 0x80075508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80075508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8007550C: b           L_80075520
    // 0x80075510: nop

        goto L_80075520;
    // 0x80075510: nop

L_80075514:
    // 0x80075514: addiu       $a0, $zero, 0x408
    ctx->r4 = ADD32(0, 0X408);
    // 0x80075518: jal         0x802A14C0
    // 0x8007551C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_11;
    // 0x8007551C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_80075520:
    // 0x80075520: jal         0x800759EC
    // 0x80075524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800759EC(rdram, ctx);
        goto after_12;
    // 0x80075524: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80075528: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_8007552C:
    // 0x8007552C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80075530: sb          $t9, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r25;
L_80075534:
    // 0x80075534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007553C: jr          $ra
    // 0x80075540: nop

    return;
    // 0x80075540: nop

;}
RECOMP_FUNC void func_80075544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075548: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8007554C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075550: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075554: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80075558: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8007555C: bne         $t6, $zero, L_8007557C
    if (ctx->r14 != 0) {
        // 0x80075560: andi        $a3, $a0, 0xFF
        ctx->r7 = ctx->r4 & 0XFF;
            goto L_8007557C;
    }
    // 0x80075560: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80075564: addiu       $a0, $zero, 0x4C2
    ctx->r4 = ADD32(0, 0X4C2);
    // 0x80075568: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8007556C: jal         0x802A14C0
    // 0x80075570: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075570: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x80075574: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x80075578: nop

L_8007557C:
    // 0x8007557C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80075580: lhu         $t7, 0xB72($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB72);
    // 0x80075584: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x80075588: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8007558C: beq         $at, $zero, L_80075698
    if (ctx->r1 == 0) {
        // 0x80075590: nop
    
            goto L_80075698;
    }
    // 0x80075590: nop

    // 0x80075594: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80075598: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8007559C: slt         $at, $a3, $t8
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800755A0: beq         $at, $zero, L_80075688
    if (ctx->r1 == 0) {
        // 0x800755A4: nop
    
            goto L_80075688;
    }
    // 0x800755A4: nop

    // 0x800755A8: jal         0x8007A29C
    // 0x800755AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007A29C(rdram, ctx);
        goto after_1;
    // 0x800755AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800755B0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800755B4: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x800755B8: addiu       $t9, $zero, 0x90
    ctx->r25 = ADD32(0, 0X90);
    // 0x800755BC: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x800755C0: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x800755C4: sh          $t0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r8;
    // 0x800755C8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800755CC: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x800755D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800755D4: andi        $t1, $v0, 0x3
    ctx->r9 = ctx->r2 & 0X3;
    // 0x800755D8: beq         $t1, $zero, L_800755F8
    if (ctx->r9 == 0) {
        // 0x800755DC: addiu       $a0, $zero, 0x598
        ctx->r4 = ADD32(0, 0X598);
            goto L_800755F8;
    }
    // 0x800755DC: addiu       $a0, $zero, 0x598
    ctx->r4 = ADD32(0, 0X598);
    // 0x800755E0: beq         $t1, $at, L_80075618
    if (ctx->r9 == ctx->r1) {
        // 0x800755E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80075618;
    }
    // 0x800755E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800755E8: beq         $t1, $at, L_8007563C
    if (ctx->r9 == ctx->r1) {
        // 0x800755EC: addiu       $a0, $zero, 0x435
        ctx->r4 = ADD32(0, 0X435);
            goto L_8007563C;
    }
    // 0x800755EC: addiu       $a0, $zero, 0x435
    ctx->r4 = ADD32(0, 0X435);
    // 0x800755F0: b           L_80075668
    // 0x800755F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
        goto L_80075668;
    // 0x800755F4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
L_800755F8:
    // 0x800755F8: jal         0x802A14C0
    // 0x800755FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800755FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80075600: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075604: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x80075608: jal         0x80079F98
    // 0x8007560C: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x8007560C: nop

    after_3:
    // 0x80075610: b           L_800756A4
    // 0x80075614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800756A4;
    // 0x80075614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075618:
    // 0x80075618: addiu       $a0, $zero, 0x4B7
    ctx->r4 = ADD32(0, 0X4B7);
L_8007561C:
    // 0x8007561C: jal         0x802A14C0
    // 0x80075620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x80075620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80075624: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075628: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x8007562C: jal         0x80079FFC
    // 0x80075630: nop

    func_80079FFC(rdram, ctx);
        goto after_5;
    // 0x80075630: nop

    after_5:
    // 0x80075634: b           L_800756A4
    // 0x80075638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800756A4;
    // 0x80075638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007563C:
    // 0x8007563C: jal         0x802A14C0
    // 0x80075640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80075640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80075644: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80075648: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x8007564C: jal         0x80079F98
    // 0x80075650: nop

    func_80079F98(rdram, ctx);
        goto after_7;
    // 0x80075650: nop

    after_7:
    // 0x80075654: addiu       $a0, $zero, 0x436
    ctx->r4 = ADD32(0, 0X436);
    // 0x80075658: jal         0x802A14C0
    // 0x8007565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x8007565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80075660: b           L_800756A4
    // 0x80075664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800756A4;
    // 0x80075664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075668:
    // 0x80075668: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x8007566C: jal         0x80079F98
    // 0x80075670: nop

    func_80079F98(rdram, ctx);
        goto after_9;
    // 0x80075670: nop

    after_9:
    // 0x80075674: addiu       $a0, $zero, 0x47C
    ctx->r4 = ADD32(0, 0X47C);
    // 0x80075678: jal         0x802A14C0
    // 0x8007567C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x8007567C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80075680: b           L_8007561C
    // 0x80075684: addiu       $a0, $zero, 0x4B7
    ctx->r4 = ADD32(0, 0X4B7);
        goto L_8007561C;
    // 0x80075684: addiu       $a0, $zero, 0x4B7
    ctx->r4 = ADD32(0, 0X4B7);
L_80075688:
    // 0x80075688: jal         0x800756B0
    // 0x8007568C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_800756B0(rdram, ctx);
        goto after_11;
    // 0x8007568C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_11:
    // 0x80075690: b           L_800756A4
    // 0x80075694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800756A4;
    // 0x80075694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075698:
    // 0x80075698: jal         0x800756B0
    // 0x8007569C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_800756B0(rdram, ctx);
        goto after_12;
    // 0x8007569C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_12:
    // 0x800756A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800756A4:
    // 0x800756A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800756A8: jr          $ra
    // 0x800756AC: nop

    return;
    // 0x800756AC: nop

;}
RECOMP_FUNC void func_800756B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800756B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800756B4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800756B8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x800756BC: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800756C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800756C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800756C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800756CC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800756D0: beq         $at, $zero, L_80075720
    if (ctx->r1 == 0) {
        // 0x800756D4: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80075720;
    }
    // 0x800756D4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800756D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800756DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800756E0: jal         0x8007A29C
    // 0x800756E4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_8007A29C(rdram, ctx);
        goto after_0;
    // 0x800756E4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x800756E8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x800756EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800756F0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800756F4: addiu       $a2, $a2, 0x38C8
    ctx->r6 = ADD32(ctx->r6, 0X38C8);
    // 0x800756F8: addiu       $t8, $zero, 0x90
    ctx->r24 = ADD32(0, 0X90);
    // 0x800756FC: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80075700: sh          $t8, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r24;
    // 0x80075704: sh          $t9, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r25;
    // 0x80075708: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007570C: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80075710: lbu         $a1, -0x225C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X225C);
    // 0x80075714: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x80075718: b           L_80075764
    // 0x8007571C: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
        goto L_80075764;
    // 0x8007571C: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
L_80075720:
    // 0x80075720: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80075724: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80075728: jal         0x8007A29C
    // 0x8007572C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_8007A29C(rdram, ctx);
        goto after_1;
    // 0x8007572C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80075730: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80075734: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80075738: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8007573C: addiu       $a2, $a2, 0x38C8
    ctx->r6 = ADD32(ctx->r6, 0X38C8);
    // 0x80075740: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80075744: addiu       $t3, $zero, 0x90
    ctx->r11 = ADD32(0, 0X90);
    // 0x80075748: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x8007574C: sh          $t3, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r11;
    // 0x80075750: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80075754: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x80075758: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x8007575C: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x80075760: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
L_80075764:
    // 0x80075764: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80075768: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x8007576C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075770: bne         $t6, $at, L_80075878
    if (ctx->r14 != ctx->r1) {
        // 0x80075774: nop
    
            goto L_80075878;
    }
    // 0x80075774: nop

    // 0x80075778: sh          $a0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r4;
    // 0x8007577C: jal         0x8004974C
    // 0x80075780: sb          $a1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_2;
    // 0x80075780: sb          $a1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r5;
    after_2:
    // 0x80075784: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80075788: lbu         $a1, 0x25($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X25);
    // 0x8007578C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80075790: bne         $v0, $at, L_80075878
    if (ctx->r2 != ctx->r1) {
        // 0x80075794: nop
    
            goto L_80075878;
    }
    // 0x80075794: nop

    // 0x80075798: jal         0x80075900
    // 0x8007579C: sb          $a1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r5;
    func_80075900(rdram, ctx);
        goto after_3;
    // 0x8007579C: sb          $a1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r5;
    after_3:
    // 0x800757A0: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x800757A4: jal         0x80079FFC
    // 0x800757A8: nop

    func_80079FFC(rdram, ctx);
        goto after_4;
    // 0x800757A8: nop

    after_4:
    // 0x800757AC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800757B0: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x800757B4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800757B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800757BC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800757C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800757C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800757C8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800757CC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800757D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800757D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800757D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800757DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800757E0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800757E4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800757E8: lb          $v0, -0x2F7F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2F7F);
    // 0x800757EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800757F0: beq         $v0, $zero, L_80075820
    if (ctx->r2 == 0) {
        // 0x800757F4: addiu       $a0, $zero, 0x5ED
        ctx->r4 = ADD32(0, 0X5ED);
            goto L_80075820;
    }
    // 0x800757F4: addiu       $a0, $zero, 0x5ED
    ctx->r4 = ADD32(0, 0X5ED);
    // 0x800757F8: beq         $v0, $at, L_80075830
    if (ctx->r2 == ctx->r1) {
        // 0x800757FC: addiu       $a0, $zero, 0x5C1
        ctx->r4 = ADD32(0, 0X5C1);
            goto L_80075830;
    }
    // 0x800757FC: addiu       $a0, $zero, 0x5C1
    ctx->r4 = ADD32(0, 0X5C1);
    // 0x80075800: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075804: beq         $v0, $at, L_8007584C
    if (ctx->r2 == ctx->r1) {
        // 0x80075808: addiu       $a0, $zero, 0x5C1
        ctx->r4 = ADD32(0, 0X5C1);
            goto L_8007584C;
    }
    // 0x80075808: addiu       $a0, $zero, 0x5C1
    ctx->r4 = ADD32(0, 0X5C1);
    // 0x8007580C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80075810: beq         $v0, $at, L_80075868
    if (ctx->r2 == ctx->r1) {
        // 0x80075814: addiu       $a0, $zero, 0x59B
        ctx->r4 = ADD32(0, 0X59B);
            goto L_80075868;
    }
    // 0x80075814: addiu       $a0, $zero, 0x59B
    ctx->r4 = ADD32(0, 0X59B);
    // 0x80075818: b           L_80075884
    // 0x8007581C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075884;
    // 0x8007581C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075820:
    // 0x80075820: jal         0x802A14C0
    // 0x80075824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80075824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80075828: b           L_80075884
    // 0x8007582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075884;
    // 0x8007582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075830:
    // 0x80075830: jal         0x802A14C0
    // 0x80075834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80075834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80075838: addiu       $a0, $zero, 0x599
    ctx->r4 = ADD32(0, 0X599);
    // 0x8007583C: jal         0x802A14C0
    // 0x80075840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80075840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80075844: b           L_80075884
    // 0x80075848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075884;
    // 0x80075848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007584C:
    // 0x8007584C: jal         0x802A14C0
    // 0x80075850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80075850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80075854: addiu       $a0, $zero, 0x59A
    ctx->r4 = ADD32(0, 0X59A);
    // 0x80075858: jal         0x802A14C0
    // 0x8007585C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x8007585C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80075860: b           L_80075884
    // 0x80075864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075884;
    // 0x80075864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075868:
    // 0x80075868: jal         0x802A14C0
    // 0x8007586C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x8007586C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80075870: b           L_80075884
    // 0x80075874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075884;
    // 0x80075874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075878:
    // 0x80075878: jal         0x80075900
    // 0x8007587C: nop

    func_80075900(rdram, ctx);
        goto after_11;
    // 0x8007587C: nop

    after_11:
    // 0x80075880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075884:
    // 0x80075884: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80075888: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007588C: sb          $t9, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r25;
    // 0x80075890: jr          $ra
    // 0x80075894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80075894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80075898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075898: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8007589C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x800758A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800758A4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800758A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800758AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800758B0: beq         $t7, $zero, L_800758D4
    if (ctx->r15 == 0) {
        // 0x800758B4: andi        $a2, $a0, 0xFF
        ctx->r6 = ctx->r4 & 0XFF;
            goto L_800758D4;
    }
    // 0x800758B4: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x800758B8: jal         0x80079FFC
    // 0x800758BC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_80079FFC(rdram, ctx);
        goto after_0;
    // 0x800758BC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_0:
    // 0x800758C0: addiu       $a0, $zero, 0x4C3
    ctx->r4 = ADD32(0, 0X4C3);
    // 0x800758C4: jal         0x802A14C0
    // 0x800758C8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800758C8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_1:
    // 0x800758CC: b           L_800758F4
    // 0x800758D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800758F4;
    // 0x800758D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800758D4:
    // 0x800758D4: addiu       $a0, $zero, 0x43E
    ctx->r4 = ADD32(0, 0X43E);
    // 0x800758D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800758DC: jal         0x802A14C0
    // 0x800758E0: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800758E0: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_2:
    // 0x800758E4: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x800758E8: jal         0x80079FFC
    // 0x800758EC: nop

    func_80079FFC(rdram, ctx);
        goto after_3;
    // 0x800758EC: nop

    after_3:
    // 0x800758F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800758F4:
    // 0x800758F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800758F8: jr          $ra
    // 0x800758FC: nop

    return;
    // 0x800758FC: nop

;}
RECOMP_FUNC void func_80075900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075900: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80075904: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80075908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007590C: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80075910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075914: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075918: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007591C: bne         $at, $zero, L_800759CC
    if (ctx->r1 != 0) {
        // 0x80075920: andi        $a2, $a1, 0xFF
        ctx->r6 = ctx->r5 & 0XFF;
            goto L_800759CC;
    }
    // 0x80075920: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80075924: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80075928: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x8007592C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075930: bne         $t8, $at, L_800759AC
    if (ctx->r24 != ctx->r1) {
        // 0x80075934: addiu       $a0, $zero, 0x403
        ctx->r4 = ADD32(0, 0X403);
            goto L_800759AC;
    }
    // 0x80075934: addiu       $a0, $zero, 0x403
    ctx->r4 = ADD32(0, 0X403);
    // 0x80075938: jal         0x8004974C
    // 0x8007593C: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8007593C: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    after_0:
    // 0x80075940: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80075944: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x80075948: bne         $v0, $v1, L_800759A8
    if (ctx->r2 != ctx->r3) {
        // 0x8007594C: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_800759A8;
    }
    // 0x8007594C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80075950: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x80075954: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80075958: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007595C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80075960: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80075964: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80075968: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8007596C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80075970: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80075974: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80075978: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8007597C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80075980: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80075984: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80075988: lb          $t1, -0x2F7F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X2F7F);
    // 0x8007598C: nop

    // 0x80075990: bne         $v1, $t1, L_800759AC
    if (ctx->r3 != ctx->r9) {
        // 0x80075994: addiu       $a0, $zero, 0x403
        ctx->r4 = ADD32(0, 0X403);
            goto L_800759AC;
    }
    // 0x80075994: addiu       $a0, $zero, 0x403
    ctx->r4 = ADD32(0, 0X403);
    // 0x80075998: jal         0x80075898
    // 0x8007599C: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_80075898(rdram, ctx);
        goto after_1;
    // 0x8007599C: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
    // 0x800759A0: b           L_800759D8
    // 0x800759A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800759D8;
    // 0x800759A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800759A8:
    // 0x800759A8: addiu       $a0, $zero, 0x403
    ctx->r4 = ADD32(0, 0X403);
L_800759AC:
    // 0x800759AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800759B0: jal         0x802A14C0
    // 0x800759B4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800759B4: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    after_2:
    // 0x800759B8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x800759BC: jal         0x80079FFC
    // 0x800759C0: nop

    func_80079FFC(rdram, ctx);
        goto after_3;
    // 0x800759C0: nop

    after_3:
    // 0x800759C4: b           L_800759D8
    // 0x800759C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800759D8;
    // 0x800759C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800759CC:
    // 0x800759CC: jal         0x80075898
    // 0x800759D0: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_80075898(rdram, ctx);
        goto after_4;
    // 0x800759D0: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_4:
    // 0x800759D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800759D8:
    // 0x800759D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800759DC: jr          $ra
    // 0x800759E0: nop

    return;
    // 0x800759E0: nop

;}
RECOMP_FUNC void func_800759EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800759EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800759F0: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x800759F4: lhu         $v0, 0xA9E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA9E);
    // 0x800759F8: lhu         $v1, 0xA($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XA);
    // 0x800759FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80075A00: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x80075A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075A08: bne         $t6, $zero, L_80075A58
    if (ctx->r14 != 0) {
        // 0x80075A0C: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_80075A58;
    }
    // 0x80075A0C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80075A10: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80075A14: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80075A18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80075A1C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80075A20: beq         $t7, $zero, L_80075A38
    if (ctx->r15 == 0) {
        // 0x80075A24: addiu       $a0, $zero, 0x4AA
        ctx->r4 = ADD32(0, 0X4AA);
            goto L_80075A38;
    }
    // 0x80075A24: addiu       $a0, $zero, 0x4AA
    ctx->r4 = ADD32(0, 0X4AA);
    // 0x80075A28: beq         $t7, $at, L_80075A48
    if (ctx->r15 == ctx->r1) {
        // 0x80075A2C: addiu       $a0, $zero, 0x4AB
        ctx->r4 = ADD32(0, 0X4AB);
            goto L_80075A48;
    }
    // 0x80075A2C: addiu       $a0, $zero, 0x4AB
    ctx->r4 = ADD32(0, 0X4AB);
    // 0x80075A30: b           L_80075B64
    // 0x80075A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075A38:
    // 0x80075A38: jal         0x802A14C0
    // 0x80075A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075A40: b           L_80075B64
    // 0x80075A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075A48:
    // 0x80075A48: jal         0x802A14C0
    // 0x80075A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075A50: b           L_80075B64
    // 0x80075A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075A58:
    // 0x80075A58: bne         $v1, $v0, L_80075A74
    if (ctx->r3 != ctx->r2) {
        // 0x80075A5C: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80075A74;
    }
    // 0x80075A5C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80075A60: addiu       $a0, $zero, 0x55B
    ctx->r4 = ADD32(0, 0X55B);
    // 0x80075A64: jal         0x802A14C0
    // 0x80075A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80075A68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80075A6C: b           L_80075B64
    // 0x80075A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075A74:
    // 0x80075A74: beq         $at, $zero, L_80075A8C
    if (ctx->r1 == 0) {
        // 0x80075A78: subu        $a0, $v1, $v0
        ctx->r4 = SUB32(ctx->r3, ctx->r2);
            goto L_80075A8C;
    }
    // 0x80075A78: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80075A7C: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x80075A80: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x80075A84: b           L_80075A94
    // 0x80075A88: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
        goto L_80075A94;
    // 0x80075A88: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80075A8C:
    // 0x80075A8C: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x80075A90: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_80075A94:
    // 0x80075A94: slti        $at, $a0, 0x6
    ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x80075A98: beq         $at, $zero, L_80075B60
    if (ctx->r1 == 0) {
        // 0x80075A9C: sw          $a0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r4;
            goto L_80075B60;
    }
    // 0x80075A9C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80075AA0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80075AA4: beq         $at, $zero, L_80075AC0
    if (ctx->r1 == 0) {
        // 0x80075AA8: nop
    
            goto L_80075AC0;
    }
    // 0x80075AA8: nop

    // 0x80075AAC: lbu         $a0, 0xA94($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0XA94);
    // 0x80075AB0: jal         0x80079F98
    // 0x80075AB4: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x80075AB4: nop

    after_3:
    // 0x80075AB8: b           L_80075AD0
    // 0x80075ABC: addiu       $a0, $zero, 0x5AC
    ctx->r4 = ADD32(0, 0X5AC);
        goto L_80075AD0;
    // 0x80075ABC: addiu       $a0, $zero, 0x5AC
    ctx->r4 = ADD32(0, 0X5AC);
L_80075AC0:
    // 0x80075AC0: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x80075AC4: jal         0x80079F98
    // 0x80075AC8: nop

    func_80079F98(rdram, ctx);
        goto after_4;
    // 0x80075AC8: nop

    after_4:
    // 0x80075ACC: addiu       $a0, $zero, 0x5AC
    ctx->r4 = ADD32(0, 0X5AC);
L_80075AD0:
    // 0x80075AD0: jal         0x802A14C0
    // 0x80075AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_5;
    // 0x80075AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80075AD8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80075ADC: nop

    // 0x80075AE0: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x80075AE4: beq         $at, $zero, L_80075B60
    if (ctx->r1 == 0) {
        // 0x80075AE8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_80075B60;
    }
    // 0x80075AE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80075AEC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80075AF0: addu        $at, $at, $t1
    gpr jr_addend_80075AFC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80075AF4: lw          $t1, -0x5324($at)
    ctx->r9 = ADD32(ctx->r1, -0X5324);
    // 0x80075AF8: nop

    // 0x80075AFC: jr          $t1
    // 0x80075B00: nop

    switch (jr_addend_80075AFC >> 2) {
        case 0: goto L_80075B60; break;
        case 1: goto L_80075B04; break;
        case 2: goto L_80075B18; break;
        case 3: goto L_80075B2C; break;
        case 4: goto L_80075B40; break;
        case 5: goto L_80075B54; break;
        default: switch_error(__func__, 0x80075AFC, 0x800DACDC);
    }
    // 0x80075B00: nop

L_80075B04:
    // 0x80075B04: addiu       $a0, $zero, 0x47D
    ctx->r4 = ADD32(0, 0X47D);
    // 0x80075B08: jal         0x802A14C0
    // 0x80075B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_6;
    // 0x80075B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80075B10: b           L_80075B64
    // 0x80075B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075B18:
    // 0x80075B18: addiu       $a0, $zero, 0x488
    ctx->r4 = ADD32(0, 0X488);
    // 0x80075B1C: jal         0x802A14C0
    // 0x80075B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_7;
    // 0x80075B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80075B24: b           L_80075B64
    // 0x80075B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075B2C:
    // 0x80075B2C: addiu       $a0, $zero, 0x489
    ctx->r4 = ADD32(0, 0X489);
    // 0x80075B30: jal         0x802A14C0
    // 0x80075B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_8;
    // 0x80075B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80075B38: b           L_80075B64
    // 0x80075B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075B40:
    // 0x80075B40: addiu       $a0, $zero, 0x48A
    ctx->r4 = ADD32(0, 0X48A);
    // 0x80075B44: jal         0x802A14C0
    // 0x80075B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_9;
    // 0x80075B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80075B4C: b           L_80075B64
    // 0x80075B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075B64;
    // 0x80075B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075B54:
    // 0x80075B54: addiu       $a0, $zero, 0x48B
    ctx->r4 = ADD32(0, 0X48B);
    // 0x80075B58: jal         0x802A14C0
    // 0x80075B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_10;
    // 0x80075B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_80075B60:
    // 0x80075B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075B64:
    // 0x80075B64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80075B68: jr          $ra
    // 0x80075B6C: nop

    return;
    // 0x80075B6C: nop

;}
RECOMP_FUNC void func_80075B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075B78: addiu       $a0, $zero, 0x4EB
    ctx->r4 = ADD32(0, 0X4EB);
    // 0x80075B7C: jal         0x802A14C0
    // 0x80075B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075B8C: jr          $ra
    // 0x80075B90: nop

    return;
    // 0x80075B90: nop

;}
RECOMP_FUNC void func_80075B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075B9C: addiu       $a0, $zero, 0x586
    ctx->r4 = ADD32(0, 0X586);
    // 0x80075BA0: jal         0x802A14C0
    // 0x80075BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075BA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075BAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075BB0: jr          $ra
    // 0x80075BB4: nop

    return;
    // 0x80075BB4: nop

;}
RECOMP_FUNC void func_80075BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075BC4: addiu       $a0, $zero, 0x589
    ctx->r4 = ADD32(0, 0X589);
    // 0x80075BC8: jal         0x802A14C0
    // 0x80075BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075BD8: jr          $ra
    // 0x80075BDC: nop

    return;
    // 0x80075BDC: nop

;}
RECOMP_FUNC void func_80075BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075BE0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80075BE4: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80075BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075BEC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075BF4: beq         $t7, $zero, L_80075C10
    if (ctx->r15 == 0) {
        // 0x80075BF8: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80075C10;
    }
    // 0x80075BF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075BFC: addiu       $a0, $zero, 0x4E8
    ctx->r4 = ADD32(0, 0X4E8);
    // 0x80075C00: jal         0x802A14C0
    // 0x80075C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075C08: b           L_80075C20
    // 0x80075C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075C20;
    // 0x80075C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075C10:
    // 0x80075C10: addiu       $a0, $zero, 0x5E0
    ctx->r4 = ADD32(0, 0X5E0);
    // 0x80075C14: jal         0x802A14C0
    // 0x80075C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075C20:
    // 0x80075C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075C24: jr          $ra
    // 0x80075C28: nop

    return;
    // 0x80075C28: nop

;}
RECOMP_FUNC void func_80075C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075C34: addiu       $a0, $zero, 0x4DD
    ctx->r4 = ADD32(0, 0X4DD);
    // 0x80075C38: jal         0x802A14C0
    // 0x80075C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075C40: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80075C44: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80075C48: nop

    // 0x80075C4C: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x80075C50: nop

    // 0x80075C54: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x80075C58: nop

    // 0x80075C5C: lbu         $a0, 0x0($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X0);
    // 0x80075C60: jal         0x80079F98
    // 0x80075C64: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80075C64: nop

    after_1:
    // 0x80075C68: addiu       $a0, $zero, 0x4DE
    ctx->r4 = ADD32(0, 0X4DE);
    // 0x80075C6C: jal         0x802A14C0
    // 0x80075C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80075C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80075C74: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80075C78: addiu       $v0, $v0, 0x3A80
    ctx->r2 = ADD32(ctx->r2, 0X3A80);
    // 0x80075C7C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80075C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075C84: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80075C88: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x80075C8C: jr          $ra
    // 0x80075C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80075C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80075C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075C9C: addiu       $a0, $zero, 0x4A0
    ctx->r4 = ADD32(0, 0X4A0);
    // 0x80075CA0: jal         0x802A14C0
    // 0x80075CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075CA8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80075CAC: addiu       $v0, $v0, 0x3A80
    ctx->r2 = ADD32(ctx->r2, 0X3A80);
    // 0x80075CB0: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80075CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075CB8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x80075CBC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80075CC0: jr          $ra
    // 0x80075CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80075CC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80075CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075CC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075CD0: addiu       $a0, $zero, 0x499
    ctx->r4 = ADD32(0, 0X499);
    // 0x80075CD4: jal         0x802A14C0
    // 0x80075CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075CE4: jr          $ra
    // 0x80075CE8: nop

    return;
    // 0x80075CE8: nop

;}
RECOMP_FUNC void func_80075CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075CF4: jal         0x80079FD0
    // 0x80075CF8: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x80075CF8: nop

    after_0:
    // 0x80075CFC: addiu       $a0, $zero, 0x422
    ctx->r4 = ADD32(0, 0X422);
    // 0x80075D00: jal         0x802A14C0
    // 0x80075D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075D10: jr          $ra
    // 0x80075D14: nop

    return;
    // 0x80075D14: nop

;}
RECOMP_FUNC void func_80075D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075D18: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80075D1C: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80075D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075D24: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075D2C: beq         $t7, $zero, L_80075D48
    if (ctx->r15 == 0) {
        // 0x80075D30: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80075D48;
    }
    // 0x80075D30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80075D34: addiu       $a0, $zero, 0x55D
    ctx->r4 = ADD32(0, 0X55D);
    // 0x80075D38: jal         0x802A14C0
    // 0x80075D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075D40: b           L_80075D58
    // 0x80075D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075D58;
    // 0x80075D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075D48:
    // 0x80075D48: addiu       $a0, $zero, 0x5DA
    ctx->r4 = ADD32(0, 0X5DA);
    // 0x80075D4C: jal         0x802A14C0
    // 0x80075D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075D58:
    // 0x80075D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075D5C: jr          $ra
    // 0x80075D60: nop

    return;
    // 0x80075D60: nop

;}
RECOMP_FUNC void func_80075D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075D64: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80075D68: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80075D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075D70: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075D74: beq         $t7, $zero, L_80075D90
    if (ctx->r15 == 0) {
        // 0x80075D78: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075D90;
    }
    // 0x80075D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075D7C: addiu       $a0, $zero, 0x4D2
    ctx->r4 = ADD32(0, 0X4D2);
    // 0x80075D80: jal         0x802A14C0
    // 0x80075D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075D88: b           L_80075DA0
    // 0x80075D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075DA0;
    // 0x80075D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075D90:
    // 0x80075D90: addiu       $a0, $zero, 0x5F0
    ctx->r4 = ADD32(0, 0X5F0);
    // 0x80075D94: jal         0x802A14C0
    // 0x80075D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075DA0:
    // 0x80075DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075DA4: jr          $ra
    // 0x80075DA8: nop

    return;
    // 0x80075DA8: nop

;}
RECOMP_FUNC void func_80075DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075DB4: addiu       $a0, $zero, 0x4D3
    ctx->r4 = ADD32(0, 0X4D3);
    // 0x80075DB8: jal         0x802A14C0
    // 0x80075DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075DC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075DC8: jr          $ra
    // 0x80075DCC: nop

    return;
    // 0x80075DCC: nop

;}
RECOMP_FUNC void func_80075DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075DD8: addiu       $a0, $zero, 0x55D
    ctx->r4 = ADD32(0, 0X55D);
    // 0x80075DDC: jal         0x802A14C0
    // 0x80075DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075DE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075DEC: jr          $ra
    // 0x80075DF0: nop

    return;
    // 0x80075DF0: nop

;}
RECOMP_FUNC void func_80075DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075DFC: jal         0x802A1744
    // 0x80075E00: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80075E00: nop

    after_0:
    // 0x80075E04: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80075E08: beq         $at, $zero, L_80075E1C
    if (ctx->r1 == 0) {
        // 0x80075E0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80075E1C;
    }
    // 0x80075E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075E10: jal         0x80076108
    // 0x80075E14: nop

    func_80076108(rdram, ctx);
        goto after_1;
    // 0x80075E14: nop

    after_1:
    // 0x80075E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075E1C:
    // 0x80075E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075E20: jr          $ra
    // 0x80075E24: nop

    return;
    // 0x80075E24: nop

;}
RECOMP_FUNC void func_80075E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075E30: jal         0x802A1744
    // 0x80075E34: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80075E34: nop

    after_0:
    // 0x80075E38: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80075E3C: beq         $at, $zero, L_80075E4C
    if (ctx->r1 == 0) {
        // 0x80075E40: addiu       $a0, $zero, 0x58A
        ctx->r4 = ADD32(0, 0X58A);
            goto L_80075E4C;
    }
    // 0x80075E40: addiu       $a0, $zero, 0x58A
    ctx->r4 = ADD32(0, 0X58A);
    // 0x80075E44: jal         0x802A14C0
    // 0x80075E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80075E4C:
    // 0x80075E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075E54: jr          $ra
    // 0x80075E58: nop

    return;
    // 0x80075E58: nop

;}
RECOMP_FUNC void func_80075E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075E64: jal         0x802A1744
    // 0x80075E68: nop

    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80075E68: nop

    after_0:
    // 0x80075E6C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80075E70: beq         $at, $zero, L_80075E80
    if (ctx->r1 == 0) {
        // 0x80075E74: addiu       $a0, $zero, 0x588
        ctx->r4 = ADD32(0, 0X588);
            goto L_80075E80;
    }
    // 0x80075E74: addiu       $a0, $zero, 0x588
    ctx->r4 = ADD32(0, 0X588);
    // 0x80075E78: jal         0x802A14C0
    // 0x80075E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80075E80:
    // 0x80075E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075E88: jr          $ra
    // 0x80075E8C: nop

    return;
    // 0x80075E8C: nop

;}
RECOMP_FUNC void func_80075E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075E90: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80075E94: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80075E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075E9C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075EA0: beq         $t7, $zero, L_80075EBC
    if (ctx->r15 == 0) {
        // 0x80075EA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075EBC;
    }
    // 0x80075EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075EA8: addiu       $a0, $zero, 0x481
    ctx->r4 = ADD32(0, 0X481);
    // 0x80075EAC: jal         0x802A14C0
    // 0x80075EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075EB4: b           L_80075ECC
    // 0x80075EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075ECC;
    // 0x80075EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075EBC:
    // 0x80075EBC: addiu       $a0, $zero, 0x480
    ctx->r4 = ADD32(0, 0X480);
    // 0x80075EC0: jal         0x802A14C0
    // 0x80075EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075ECC:
    // 0x80075ECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075ED0: jr          $ra
    // 0x80075ED4: nop

    return;
    // 0x80075ED4: nop

;}
RECOMP_FUNC void func_80075ED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075ED8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80075EDC: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x80075EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075EE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80075EE8: beq         $t7, $zero, L_80075F04
    if (ctx->r15 == 0) {
        // 0x80075EEC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075F04;
    }
    // 0x80075EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075EF0: addiu       $a0, $zero, 0x42A
    ctx->r4 = ADD32(0, 0X42A);
    // 0x80075EF4: jal         0x802A14C0
    // 0x80075EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075EFC: b           L_80075F14
    // 0x80075F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80075F14;
    // 0x80075F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075F04:
    // 0x80075F04: addiu       $a0, $zero, 0x429
    ctx->r4 = ADD32(0, 0X429);
    // 0x80075F08: jal         0x802A14C0
    // 0x80075F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80075F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80075F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075F14:
    // 0x80075F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075F18: jr          $ra
    // 0x80075F1C: nop

    return;
    // 0x80075F1C: nop

;}
RECOMP_FUNC void func_80075F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075F28: addiu       $a0, $zero, 0x4BB
    ctx->r4 = ADD32(0, 0X4BB);
    // 0x80075F2C: jal         0x802A14C0
    // 0x80075F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075F3C: jr          $ra
    // 0x80075F40: nop

    return;
    // 0x80075F40: nop

;}
RECOMP_FUNC void func_80075F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075F4C: addiu       $a0, $zero, 0x4AD
    ctx->r4 = ADD32(0, 0X4AD);
    // 0x80075F50: jal         0x802A14C0
    // 0x80075F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075F54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80075F60: jr          $ra
    // 0x80075F64: nop

    return;
    // 0x80075F64: nop

;}
RECOMP_FUNC void func_80075F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075F68: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80075F6C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80075F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075F74: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80075F78: beq         $t6, $zero, L_80075F94
    if (ctx->r14 == 0) {
        // 0x80075F7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80075F94;
    }
    // 0x80075F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075F80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80075F84: beq         $t6, $at, L_80075FA8
    if (ctx->r14 == ctx->r1) {
        // 0x80075F88: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80075FA8;
    }
    // 0x80075F88: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80075F8C: b           L_80075FE0
    // 0x80075F90: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
        goto L_80075FE0;
    // 0x80075F90: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
L_80075F94:
    // 0x80075F94: addiu       $a0, $zero, 0x4AD
    ctx->r4 = ADD32(0, 0X4AD);
    // 0x80075F98: jal         0x802A14C0
    // 0x80075F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80075F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80075FA0: b           L_80076014
    // 0x80075FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076014;
    // 0x80075FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075FA8:
    // 0x80075FA8: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80075FAC: nop

    // 0x80075FB0: lw          $t8, 0x8C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8C);
    // 0x80075FB4: nop

    // 0x80075FB8: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x80075FBC: nop

    // 0x80075FC0: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x80075FC4: jal         0x80079F98
    // 0x80075FC8: nop

    func_80079F98(rdram, ctx);
        goto after_1;
    // 0x80075FC8: nop

    after_1:
    // 0x80075FCC: addiu       $a0, $zero, 0x587
    ctx->r4 = ADD32(0, 0X587);
    // 0x80075FD0: jal         0x802A14C0
    // 0x80075FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80075FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80075FD8: b           L_80076014
    // 0x80075FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80076014;
    // 0x80075FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80075FE0:
    // 0x80075FE0: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80075FE4: nop

    // 0x80075FE8: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x80075FEC: nop

    // 0x80075FF0: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x80075FF4: nop

    // 0x80075FF8: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    // 0x80075FFC: jal         0x80079F98
    // 0x80076000: nop

    func_80079F98(rdram, ctx);
        goto after_3;
    // 0x80076000: nop

    after_3:
    // 0x80076004: addiu       $a0, $zero, 0x437
    ctx->r4 = ADD32(0, 0X437);
    // 0x80076008: jal         0x802A14C0
    // 0x8007600C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_4;
    // 0x8007600C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80076010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076014:
    // 0x80076014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076018: jr          $ra
    // 0x8007601C: nop

    return;
    // 0x8007601C: nop

;}
RECOMP_FUNC void func_80076020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076028: addiu       $a0, $zero, 0x415
    ctx->r4 = ADD32(0, 0X415);
    // 0x8007602C: jal         0x802A14C0
    // 0x80076030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076034: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80076038: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x8007603C: nop

    // 0x80076040: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x80076044: jal         0x80079FD0
    // 0x80076048: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x80076048: nop

    after_1:
    // 0x8007604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076054: jr          $ra
    // 0x80076058: nop

    return;
    // 0x80076058: nop

;}
RECOMP_FUNC void func_80076088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076088: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007608C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076094: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80076098: beq         $t6, $zero, L_800760B4
    if (ctx->r14 == 0) {
        // 0x8007609C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800760B4;
    }
    // 0x8007609C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800760A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800760A4: beq         $t6, $at, L_800760E0
    if (ctx->r14 == ctx->r1) {
        // 0x800760A8: addiu       $a0, $zero, 0x55E
        ctx->r4 = ADD32(0, 0X55E);
            goto L_800760E0;
    }
    // 0x800760A8: addiu       $a0, $zero, 0x55E
    ctx->r4 = ADD32(0, 0X55E);
    // 0x800760AC: b           L_800760F0
    // 0x800760B0: addiu       $a0, $zero, 0x5D9
    ctx->r4 = ADD32(0, 0X5D9);
        goto L_800760F0;
    // 0x800760B0: addiu       $a0, $zero, 0x5D9
    ctx->r4 = ADD32(0, 0X5D9);
L_800760B4:
    // 0x800760B4: addiu       $a0, $zero, 0x57B
    ctx->r4 = ADD32(0, 0X57B);
    // 0x800760B8: jal         0x802A14C0
    // 0x800760BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800760BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800760C0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800760C4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x800760C8: nop

    // 0x800760CC: lw          $a0, 0x8C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8C);
    // 0x800760D0: jal         0x80079FD0
    // 0x800760D4: nop

    func_80079FD0(rdram, ctx);
        goto after_1;
    // 0x800760D4: nop

    after_1:
    // 0x800760D8: b           L_800760FC
    // 0x800760DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800760FC;
    // 0x800760DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800760E0:
    // 0x800760E0: jal         0x802A14C0
    // 0x800760E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x800760E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800760E8: b           L_800760FC
    // 0x800760EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800760FC;
    // 0x800760EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800760F0:
    // 0x800760F0: jal         0x802A14C0
    // 0x800760F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x800760F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800760F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800760FC:
    // 0x800760FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076100: jr          $ra
    // 0x80076104: nop

    return;
    // 0x80076104: nop

;}
RECOMP_FUNC void func_80076108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076108: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007610C: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x80076110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076114: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80076118: beq         $t6, $zero, L_8007614C
    if (ctx->r14 == 0) {
        // 0x8007611C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007614C;
    }
    // 0x8007611C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80076124: beq         $t6, $at, L_80076160
    if (ctx->r14 == ctx->r1) {
        // 0x80076128: addiu       $a0, $zero, 0x5B2
        ctx->r4 = ADD32(0, 0X5B2);
            goto L_80076160;
    }
    // 0x80076128: addiu       $a0, $zero, 0x5B2
    ctx->r4 = ADD32(0, 0X5B2);
    // 0x8007612C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80076130: beq         $t6, $at, L_80076170
    if (ctx->r14 == ctx->r1) {
        // 0x80076134: addiu       $a0, $zero, 0x589
        ctx->r4 = ADD32(0, 0X589);
            goto L_80076170;
    }
    // 0x80076134: addiu       $a0, $zero, 0x589
    ctx->r4 = ADD32(0, 0X589);
    // 0x80076138: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007613C: beq         $t6, $at, L_80076180
    if (ctx->r14 == ctx->r1) {
        // 0x80076140: addiu       $a0, $zero, 0x4EA
        ctx->r4 = ADD32(0, 0X4EA);
            goto L_80076180;
    }
    // 0x80076140: addiu       $a0, $zero, 0x4EA
    ctx->r4 = ADD32(0, 0X4EA);
    // 0x80076144: b           L_8007618C
    // 0x80076148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007618C;
    // 0x80076148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007614C:
    // 0x8007614C: addiu       $a0, $zero, 0x464
    ctx->r4 = ADD32(0, 0X464);
    // 0x80076150: jal         0x802A14C0
    // 0x80076154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076158: b           L_8007618C
    // 0x8007615C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007618C;
    // 0x8007615C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076160:
    // 0x80076160: jal         0x802A14C0
    // 0x80076164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076168: b           L_8007618C
    // 0x8007616C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007618C;
    // 0x8007616C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076170:
    // 0x80076170: jal         0x802A14C0
    // 0x80076174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_2;
    // 0x80076174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80076178: b           L_8007618C
    // 0x8007617C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007618C;
    // 0x8007617C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80076180:
    // 0x80076180: jal         0x802A14C0
    // 0x80076184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_3;
    // 0x80076184: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80076188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007618C:
    // 0x8007618C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076190: jr          $ra
    // 0x80076194: nop

    return;
    // 0x80076194: nop

;}
RECOMP_FUNC void func_80076198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007619C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800761A0: addiu       $a0, $zero, 0x4A2
    ctx->r4 = ADD32(0, 0X4A2);
    // 0x800761A4: jal         0x802A1484
    // 0x800761A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A1484)(rdram, ctx);
        goto after_0;
    // 0x800761A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800761AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800761B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800761B4: jr          $ra
    // 0x800761B8: nop

    return;
    // 0x800761B8: nop

;}
RECOMP_FUNC void func_800761BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800761BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800761C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800761C4: addiu       $a0, $zero, 0x4EA
    ctx->r4 = ADD32(0, 0X4EA);
    // 0x800761C8: jal         0x802A14C0
    // 0x800761CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800761CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800761D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800761D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800761D8: jr          $ra
    // 0x800761DC: nop

    return;
    // 0x800761DC: nop

;}
RECOMP_FUNC void func_800761E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800761E0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800761E4: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800761E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800761EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800761F0: lw          $a0, 0x8C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8C);
    // 0x800761F4: jal         0x80079FD0
    // 0x800761F8: nop

    func_80079FD0(rdram, ctx);
        goto after_0;
    // 0x800761F8: nop

    after_0:
    // 0x800761FC: addiu       $a0, $zero, 0x496
    ctx->r4 = ADD32(0, 0X496);
    // 0x80076200: jal         0x802A14C0
    // 0x80076204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80076208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007620C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076210: jr          $ra
    // 0x80076214: nop

    return;
    // 0x80076214: nop

;}
RECOMP_FUNC void func_80076218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007621C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076220: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80076224: addiu       $a0, $zero, 0x4E9
    ctx->r4 = ADD32(0, 0X4E9);
    // 0x80076228: jal         0x802A14C0
    // 0x8007622C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007622C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076238: jr          $ra
    // 0x8007623C: nop

    return;
    // 0x8007623C: nop

;}
RECOMP_FUNC void func_80076240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076248: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007624C: addiu       $a0, $zero, 0x447
    ctx->r4 = ADD32(0, 0X447);
    // 0x80076250: jal         0x802A14C0
    // 0x80076254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007625C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076260: jr          $ra
    // 0x80076264: nop

    return;
    // 0x80076264: nop

;}
RECOMP_FUNC void func_80076268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007626C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076270: jal         0x802A1744
    // 0x80076274: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x80076274: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80076278: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8007627C: beq         $at, $zero, L_8007628C
    if (ctx->r1 == 0) {
        // 0x80076280: addiu       $a0, $zero, 0x40C
        ctx->r4 = ADD32(0, 0X40C);
            goto L_8007628C;
    }
    // 0x80076280: addiu       $a0, $zero, 0x40C
    ctx->r4 = ADD32(0, 0X40C);
    // 0x80076284: jal         0x802A14C0
    // 0x80076288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8007628C:
    // 0x8007628C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076294: jr          $ra
    // 0x80076298: nop

    return;
    // 0x80076298: nop

;}
RECOMP_FUNC void func_8007629C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007629C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800762A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800762A4: addiu       $a0, $zero, 0x44C
    ctx->r4 = ADD32(0, 0X44C);
    // 0x800762A8: jal         0x802A14C0
    // 0x800762AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x800762AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800762B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800762B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800762B8: jr          $ra
    // 0x800762BC: nop

    return;
    // 0x800762BC: nop

;}
RECOMP_FUNC void func_800762C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800762C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800762C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800762C8: jal         0x802A1744
    // 0x800762CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x802A1744)(rdram, ctx);
        goto after_0;
    // 0x800762CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800762D0: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x800762D4: beq         $at, $zero, L_800762E4
    if (ctx->r1 == 0) {
        // 0x800762D8: addiu       $a0, $zero, 0x4E9
        ctx->r4 = ADD32(0, 0X4E9);
            goto L_800762E4;
    }
    // 0x800762D8: addiu       $a0, $zero, 0x4E9
    ctx->r4 = ADD32(0, 0X4E9);
    // 0x800762DC: jal         0x802A14C0
    // 0x800762E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x800762E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800762E4:
    // 0x800762E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800762E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800762EC: jr          $ra
    // 0x800762F0: nop

    return;
    // 0x800762F0: nop

;}
RECOMP_FUNC void func_800762F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800762F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800762F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800762FC: addiu       $a0, $zero, 0x40C
    ctx->r4 = ADD32(0, 0X40C);
    // 0x80076300: jal         0x802A14C0
    // 0x80076304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007630C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076310: jr          $ra
    // 0x80076314: nop

    return;
    // 0x80076314: nop

;}
RECOMP_FUNC void func_80076318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007631C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076320: addiu       $a0, $zero, 0x404
    ctx->r4 = ADD32(0, 0X404);
    // 0x80076324: jal         0x802A14C0
    // 0x80076328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x80076328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007632C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076334: jr          $ra
    // 0x80076338: nop

    return;
    // 0x80076338: nop

;}
RECOMP_FUNC void func_8007633C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007633C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076344: addiu       $a0, $zero, 0x490
    ctx->r4 = ADD32(0, 0X490);
    // 0x80076348: jal         0x802A14C0
    // 0x8007634C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007634C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076358: jr          $ra
    // 0x8007635C: nop

    return;
    // 0x8007635C: nop

;}
RECOMP_FUNC void func_80076360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076360: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80076364: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80076368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007636C: bne         $t6, $zero, L_8007638C
    if (ctx->r14 != 0) {
        // 0x80076370: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007638C;
    }
    // 0x80076370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80076374: addiu       $a0, $zero, 0x453
    ctx->r4 = ADD32(0, 0X453);
    // 0x80076378: jal         0x802A14C0
    // 0x8007637C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_0;
    // 0x8007637C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80076380: addiu       $a0, $zero, 0x426
    ctx->r4 = ADD32(0, 0X426);
    // 0x80076384: jal         0x802A14C0
    // 0x80076388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(0x802A14C0)(rdram, ctx);
        goto after_1;
    // 0x80076388: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8007638C:
    // 0x8007638C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80076394: jr          $ra
    // 0x80076398: nop

    return;
    // 0x80076398: nop

;}
