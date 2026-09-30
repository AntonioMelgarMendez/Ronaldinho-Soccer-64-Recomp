#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80013968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001396C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80013970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013974: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80013978: jal         0x800139E0
    // 0x8001397C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800139E0(rdram, ctx);
        goto after_0;
    // 0x8001397C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x80013980: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80013984: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x80013988: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8001398C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80013990: beq         $at, $zero, L_800139A4
    if (ctx->r1 == 0) {
        // 0x80013994: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800139A4;
    }
    // 0x80013994: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80013998: lui         $v0, 0x803C
    ctx->r2 = S32(0X803C << 16);
    // 0x8001399C: b           L_800139AC
    // 0x800139A0: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
        goto L_800139AC;
    // 0x800139A0: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
L_800139A4:
    // 0x800139A4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x800139A8: addiu       $v0, $v0, -0x4800
    ctx->r2 = ADD32(ctx->r2, -0X4800);
L_800139AC:
    // 0x800139AC: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800139B0: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800139B4: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    // 0x800139B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x800139BC: jal         0x80081670
    // 0x800139C0: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_80081670(rdram, ctx);
        goto after_1;
    // 0x800139C0: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_1:
    // 0x800139C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800139C8: jal         0x80081980
    // 0x800139CC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80081980(rdram, ctx);
        goto after_2;
    // 0x800139CC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_2:
    // 0x800139D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800139D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800139D8: jr          $ra
    // 0x800139DC: nop

    return;
    // 0x800139DC: nop

;}
RECOMP_FUNC void func_800139E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800139E0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x800139E4: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800139E8: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x800139EC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800139F0: lw          $v1, -0x1D28($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1D28);
    // 0x800139F4: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x800139F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800139FC: jr          $ra
    // 0x80013A00: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    return;
    // 0x80013A00: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
;}
RECOMP_FUNC void func_80013A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013A04: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80013A08: addiu       $t1, $t1, -0x5530
    ctx->r9 = ADD32(ctx->r9, -0X5530);
    // 0x80013A0C: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013A10: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80013A14: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80013A18: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80013A1C: addiu       $t8, $t8, 0x4CA0
    ctx->r24 = ADD32(ctx->r24, 0X4CA0);
    // 0x80013A20: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80013A24: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80013A28: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80013A2C: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013A30: lui         $t2, 0xE700
    ctx->r10 = S32(0XE700 << 16);
    // 0x80013A34: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80013A38: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80013A3C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013A40: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80013A44: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013A48: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x80013A4C: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80013A50: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x80013A54: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x80013A58: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x80013A5C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80013A60: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80013A64: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013A68: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80013A6C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80013A70: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80013A74: ori         $t7, $t7, 0x1102
    ctx->r15 = ctx->r15 | 0X1102;
    // 0x80013A78: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80013A7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013A80: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013A84: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80013A88: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80013A8C: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80013A90: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x80013A94: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80013A98: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013A9C: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80013AA0: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x80013AA4: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x80013AA8: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x80013AAC: ori         $t3, $t3, 0xC02
    ctx->r11 = ctx->r11 | 0XC02;
    // 0x80013AB0: addiu       $t4, $zero, 0x2000
    ctx->r12 = ADD32(0, 0X2000);
    // 0x80013AB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80013AB8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80013ABC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80013AC0: jr          $ra
    // 0x80013AC4: sw          $zero, 0x4730($at)
    MEM_W(0X4730, ctx->r1) = 0;
    return;
    // 0x80013AC4: sw          $zero, 0x4730($at)
    MEM_W(0X4730, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80013AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013AD0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80013AD4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80013AD8: jal         0x80013FFC
    // 0x80013ADC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80013FFC(rdram, ctx);
        goto after_0;
    // 0x80013ADC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80013AE0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80013AE4: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80013AE8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013AEC: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x80013AF0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80013AF4: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80013AF8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013AFC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80013B00: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B04: lui         $t3, 0x709
    ctx->r11 = S32(0X709 << 16);
    // 0x80013B08: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80013B0C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80013B10: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80013B14: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80013B18: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B1C: ori         $t3, $t3, 0x8260
    ctx->r11 = ctx->r11 | 0X8260;
    // 0x80013B20: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80013B24: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80013B28: lui         $t2, 0xF550
    ctx->r10 = S32(0XF550 << 16);
    // 0x80013B2C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80013B30: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x80013B34: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B38: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x80013B3C: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x80013B40: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x80013B44: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013B48: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80013B4C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B50: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x80013B54: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80013B58: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80013B5C: ori         $t8, $t8, 0xF200
    ctx->r24 = ctx->r24 | 0XF200;
    // 0x80013B60: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x80013B64: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80013B68: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80013B6C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B70: lui         $t4, 0x39
    ctx->r12 = S32(0X39 << 16);
    // 0x80013B74: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80013B78: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80013B7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013B80: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80013B84: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013B88: lui         $t3, 0xF540
    ctx->r11 = S32(0XF540 << 16);
    // 0x80013B8C: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x80013B90: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80013B94: ori         $t3, $t3, 0x800
    ctx->r11 = ctx->r11 | 0X800;
    // 0x80013B98: ori         $t4, $t4, 0x8260
    ctx->r12 = ctx->r12 | 0X8260;
    // 0x80013B9C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x80013BA0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80013BA4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013BA8: lui         $t7, 0xF
    ctx->r15 = S32(0XF << 16);
    // 0x80013BAC: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80013BB0: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x80013BB4: ori         $t7, $t7, 0xC0FC
    ctx->r15 = ctx->r15 | 0XC0FC;
    // 0x80013BB8: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x80013BBC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80013BC0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80013BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013BCC: jr          $ra
    // 0x80013BD0: nop

    return;
    // 0x80013BD0: nop

;}
RECOMP_FUNC void func_80013BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013BDC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80013BE0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80013BE4: jal         0x80014074
    // 0x80013BE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80014074(rdram, ctx);
        goto after_0;
    // 0x80013BE8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80013BEC: lhu         $a0, 0x50($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X50);
    // 0x80013BF0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80013BF4: andi        $t2, $a0, 0x7C0
    ctx->r10 = ctx->r4 & 0X7C0;
    // 0x80013BF8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013BFC: sra         $t8, $t2, 3
    ctx->r24 = S32(SIGNED(ctx->r10) >> 3);
    // 0x80013C00: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
    // 0x80013C04: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80013C08: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80013C0C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80013C10: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80013C14: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013C18: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013C1C: andi        $t3, $a0, 0x3E
    ctx->r11 = ctx->r4 & 0X3E;
    // 0x80013C20: sll         $t6, $t3, 1
    ctx->r14 = S32(ctx->r11 << 1);
    // 0x80013C24: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80013C28: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
    // 0x80013C2C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80013C30: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x80013C34: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x80013C38: andi        $t1, $a0, 0xF800
    ctx->r9 = ctx->r4 & 0XF800;
    // 0x80013C3C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80013C40: sra         $t7, $t1, 8
    ctx->r15 = S32(SIGNED(ctx->r9) >> 8);
    // 0x80013C44: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80013C48: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x80013C4C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80013C50: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x80013C54: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x80013C58: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80013C5C: ori         $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 | 0XFF;
    // 0x80013C60: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80013C64: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013C68: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x80013C6C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80013C70: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80013C74: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80013C78: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80013C7C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013C80: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x80013C84: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80013C88: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80013C8C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013C90: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80013C94: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013C98: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x80013C9C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80013CA0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80013CA4: ori         $t8, $t8, 0x100
    ctx->r24 = ctx->r24 | 0X100;
    // 0x80013CA8: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80013CAC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80013CB0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80013CB4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013CB8: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80013CBC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80013CC0: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80013CC4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013CC8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80013CCC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013CD0: lui         $t9, 0x73F
    ctx->r25 = S32(0X73F << 16);
    // 0x80013CD4: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80013CD8: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80013CDC: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x80013CE0: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x80013CE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80013CE8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80013CEC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80013CF0: nop

    // 0x80013CF4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80013CF8: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80013CFC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80013D00: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80013D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80013D0C: jr          $ra
    // 0x80013D10: nop

    return;
    // 0x80013D10: nop

;}
RECOMP_FUNC void func_80013D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013D14: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80013D18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80013D1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80013D20: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80013D24: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80013D28: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x80013D2C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80013D30: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80013D34: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80013D38: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80013D3C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013D40: lw          $s0, 0x0($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X0);
    // 0x80013D44: lui         $t9, 0xFD50
    ctx->r25 = S32(0XFD50 << 16);
    // 0x80013D48: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80013D4C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80013D50: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80013D54: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80013D58: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80013D5C: jal         0x800140D4
    // 0x80013D60: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    func_800140D4(rdram, ctx);
        goto after_0;
    // 0x80013D60: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    after_0:
    // 0x80013D64: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x80013D68: lui         $t2, 0x709
    ctx->r10 = S32(0X709 << 16);
    // 0x80013D6C: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80013D70: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013D74: ori         $t2, $t2, 0x4260
    ctx->r10 = ctx->r10 | 0X4260;
    // 0x80013D78: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x80013D7C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80013D80: lui         $t1, 0xF550
    ctx->r9 = S32(0XF550 << 16);
    // 0x80013D84: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80013D88: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x80013D8C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013D90: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x80013D94: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x80013D98: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x80013D9C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80013DA0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013DA4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013DA8: lui         $t7, 0x71F
    ctx->r15 = S32(0X71F << 16);
    // 0x80013DAC: addiu       $t5, $s0, 0x8
    ctx->r13 = ADD32(ctx->r16, 0X8);
    // 0x80013DB0: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x80013DB4: ori         $t7, $t7, 0xF200
    ctx->r15 = ctx->r15 | 0XF200;
    // 0x80013DB8: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x80013DBC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80013DC0: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x80013DC4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013DC8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80013DCC: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80013DD0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80013DD4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80013DD8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013DDC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013DE0: lui         $t2, 0x9
    ctx->r10 = S32(0X9 << 16);
    // 0x80013DE4: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x80013DE8: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80013DEC: lui         $t1, 0xF540
    ctx->r9 = S32(0XF540 << 16);
    // 0x80013DF0: ori         $t1, $t1, 0x800
    ctx->r9 = ctx->r9 | 0X800;
    // 0x80013DF4: ori         $t2, $t2, 0x4260
    ctx->r10 = ctx->r10 | 0X4260;
    // 0x80013DF8: sw          $t2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r10;
    // 0x80013DFC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80013E00: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013E04: lui         $t5, 0xF
    ctx->r13 = S32(0XF << 16);
    // 0x80013E08: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x80013E0C: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x80013E10: ori         $t5, $t5, 0xC07C
    ctx->r13 = ctx->r13 | 0XC07C;
    // 0x80013E14: lui         $t4, 0xF200
    ctx->r12 = S32(0XF200 << 16);
    // 0x80013E18: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80013E1C: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80013E20: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013E24: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x80013E28: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80013E2C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80013E30: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80013E34: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80013E38: jal         0x80014144
    // 0x80013E3C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    func_80014144(rdram, ctx);
        goto after_1;
    // 0x80013E3C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    after_1:
    // 0x80013E40: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80013E44: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x80013E48: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80013E4C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013E50: lui         $t0, 0x709
    ctx->r8 = S32(0X709 << 16);
    // 0x80013E54: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80013E58: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80013E5C: ori         $t0, $t0, 0x4260
    ctx->r8 = ctx->r8 | 0X4260;
    // 0x80013E60: ori         $t9, $t9, 0x80
    ctx->r25 = ctx->r25 | 0X80;
    // 0x80013E64: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80013E68: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x80013E6C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013E70: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x80013E74: addiu       $t1, $s0, 0x8
    ctx->r9 = ADD32(ctx->r16, 0X8);
    // 0x80013E78: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80013E7C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80013E80: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013E84: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013E88: lui         $t5, 0x713
    ctx->r13 = S32(0X713 << 16);
    // 0x80013E8C: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x80013E90: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x80013E94: ori         $t5, $t5, 0xF200
    ctx->r13 = ctx->r13 | 0XF200;
    // 0x80013E98: lui         $t4, 0xF300
    ctx->r12 = S32(0XF300 << 16);
    // 0x80013E9C: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80013EA0: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80013EA4: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013EA8: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80013EAC: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80013EB0: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80013EB4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80013EB8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013EBC: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013EC0: lui         $t0, 0x9
    ctx->r8 = S32(0X9 << 16);
    // 0x80013EC4: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x80013EC8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80013ECC: lui         $t9, 0xF540
    ctx->r25 = S32(0XF540 << 16);
    // 0x80013ED0: ori         $t9, $t9, 0x880
    ctx->r25 = ctx->r25 | 0X880;
    // 0x80013ED4: ori         $t0, $t0, 0x4260
    ctx->r8 = ctx->r8 | 0X4260;
    // 0x80013ED8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x80013EDC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80013EE0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013EE4: lui         $t3, 0xF
    ctx->r11 = S32(0XF << 16);
    // 0x80013EE8: addiu       $t1, $s0, 0x8
    ctx->r9 = ADD32(ctx->r16, 0X8);
    // 0x80013EEC: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80013EF0: ori         $t3, $t3, 0xC04C
    ctx->r11 = ctx->r11 | 0XC04C;
    // 0x80013EF4: lui         $t2, 0xF200
    ctx->r10 = S32(0XF200 << 16);
    // 0x80013EF8: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80013EFC: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80013F00: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013F04: lui         $t5, 0xFD50
    ctx->r13 = S32(0XFD50 << 16);
    // 0x80013F08: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x80013F0C: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80013F10: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80013F14: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80013F18: jal         0x800141BC
    // 0x80013F1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_800141BC(rdram, ctx);
        goto after_2;
    // 0x80013F1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_2:
    // 0x80013F20: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80013F24: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x80013F28: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80013F2C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013F30: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x80013F34: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80013F38: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80013F3C: ori         $t8, $t8, 0x240
    ctx->r24 = ctx->r24 | 0X240;
    // 0x80013F40: ori         $t7, $t7, 0xF0
    ctx->r15 = ctx->r15 | 0XF0;
    // 0x80013F44: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80013F48: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80013F4C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013F50: lui         $t0, 0xE600
    ctx->r8 = S32(0XE600 << 16);
    // 0x80013F54: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x80013F58: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x80013F5C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013F60: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80013F64: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013F68: lui         $t3, 0x703
    ctx->r11 = S32(0X703 << 16);
    // 0x80013F6C: addiu       $t1, $s0, 0x8
    ctx->r9 = ADD32(ctx->r16, 0X8);
    // 0x80013F70: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x80013F74: ori         $t3, $t3, 0xF800
    ctx->r11 = ctx->r11 | 0XF800;
    // 0x80013F78: lui         $t2, 0xF300
    ctx->r10 = S32(0XF300 << 16);
    // 0x80013F7C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80013F80: sw          $t3, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r11;
    // 0x80013F84: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013F88: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80013F8C: addiu       $t4, $s0, 0x8
    ctx->r12 = ADD32(ctx->r16, 0X8);
    // 0x80013F90: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80013F94: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80013F98: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80013F9C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013FA0: lui         $t8, 0x459
    ctx->r24 = S32(0X459 << 16);
    // 0x80013FA4: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x80013FA8: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80013FAC: lui         $t7, 0xF540
    ctx->r15 = S32(0XF540 << 16);
    // 0x80013FB0: ori         $t7, $t7, 0x2F0
    ctx->r15 = ctx->r15 | 0X2F0;
    // 0x80013FB4: ori         $t8, $t8, 0x240
    ctx->r24 = ctx->r24 | 0X240;
    // 0x80013FB8: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x80013FBC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80013FC0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80013FC4: lui         $t1, 0x403
    ctx->r9 = S32(0X403 << 16);
    // 0x80013FC8: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x80013FCC: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x80013FD0: ori         $t1, $t1, 0xC03C
    ctx->r9 = ctx->r9 | 0XC03C;
    // 0x80013FD4: lui         $t0, 0xF200
    ctx->r8 = S32(0XF200 << 16);
    // 0x80013FD8: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x80013FDC: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x80013FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80013FE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80013FE8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80013FEC: jr          $ra
    // 0x80013FF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80013FF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80013FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013FFC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80014000: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80014004: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x80014008: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x8001400C: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x80014010: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80014014: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x80014018: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8001401C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80014020: lw          $t8, 0x30($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X30);
    // 0x80014024: lui         $t2, 0x802F
    ctx->r10 = S32(0X802F << 16);
    // 0x80014028: lhu         $a2, 0x2($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X2);
    // 0x8001402C: addiu       $t2, $t2, -0x28E8
    ctx->r10 = ADD32(ctx->r10, -0X28E8);
    // 0x80014030: andi        $t9, $a2, 0xA00
    ctx->r25 = ctx->r6 & 0XA00;
    // 0x80014034: andi        $t0, $a2, 0x400
    ctx->r8 = ctx->r6 & 0X400;
    // 0x80014038: mflo        $t7
    ctx->r15 = lo;
    // 0x8001403C: nop

    // 0x80014040: nop

    // 0x80014044: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80014048: mflo        $a1
    ctx->r5 = lo;
    // 0x8001404C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80014050: beq         $t9, $zero, L_8001405C
    if (ctx->r25 == 0) {
        // 0x80014054: nop
    
            goto L_8001405C;
    }
    // 0x80014054: nop

    // 0x80014058: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
L_8001405C:
    // 0x8001405C: beq         $t0, $zero, L_8001406C
    if (ctx->r8 == 0) {
        // 0x80014060: sll         $t1, $v1, 11
        ctx->r9 = S32(ctx->r3 << 11);
            goto L_8001406C;
    }
    // 0x80014060: sll         $t1, $v1, 11
    ctx->r9 = S32(ctx->r3 << 11);
    // 0x80014064: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80014068: sll         $t1, $v1, 11
    ctx->r9 = S32(ctx->r3 << 11);
L_8001406C:
    // 0x8001406C: jr          $ra
    // 0x80014070: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    return;
    // 0x80014070: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
;}
RECOMP_FUNC void func_80014074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014074: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80014078: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8001407C: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x80014080: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x80014084: subu        $v1, $a0, $t6
    ctx->r3 = SUB32(ctx->r4, ctx->r14);
    // 0x80014088: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8001408C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x80014090: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80014094: lui         $t9, 0x801D
    ctx->r25 = S32(0X801D << 16);
    // 0x80014098: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x8001409C: addiu       $t9, $t9, 0x7800
    ctx->r25 = ADD32(ctx->r25, 0X7800);
    // 0x800140A0: addiu       $t2, $t2, 0x7800
    ctx->r10 = ADD32(ctx->r10, 0X7800);
    // 0x800140A4: mflo        $t7
    ctx->r15 = lo;
    // 0x800140A8: slti        $at, $t7, 0x1C
    ctx->r1 = SIGNED(ctx->r15) < 0X1C ? 1 : 0;
    // 0x800140AC: beq         $at, $zero, L_800140C0
    if (ctx->r1 == 0) {
        // 0x800140B0: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_800140C0;
    }
    // 0x800140B0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x800140B4: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x800140B8: jr          $ra
    // 0x800140BC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    return;
    // 0x800140BC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_800140C0:
    // 0x800140C0: sll         $t0, $v1, 8
    ctx->r8 = S32(ctx->r3 << 8);
    // 0x800140C4: addiu       $t1, $t0, -0xD00
    ctx->r9 = ADD32(ctx->r8, -0XD00);
    // 0x800140C8: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x800140CC: jr          $ra
    // 0x800140D0: nop

    return;
    // 0x800140D0: nop

;}
RECOMP_FUNC void func_800140D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800140D4: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800140D8: lui         $t2, 0x801E
    ctx->r10 = S32(0X801E << 16);
    // 0x800140DC: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x800140E0: beq         $v0, $zero, L_80014128
    if (ctx->r2 == 0) {
        // 0x800140E4: addiu       $t2, $t2, -0x6900
        ctx->r10 = ADD32(ctx->r10, -0X6900);
            goto L_80014128;
    }
    // 0x800140E4: addiu       $t2, $t2, -0x6900
    ctx->r10 = ADD32(ctx->r10, -0X6900);
    // 0x800140E8: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x800140EC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x800140F0: andi        $t6, $v1, 0xF8
    ctx->r14 = ctx->r3 & 0XF8;
    // 0x800140F4: sra         $v1, $t6, 3
    ctx->r3 = S32(SIGNED(ctx->r14) >> 3);
    // 0x800140F8: slti        $at, $v1, 0x19
    ctx->r1 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x800140FC: bne         $at, $zero, L_80014108
    if (ctx->r1 != 0) {
        // 0x80014100: lui         $t1, 0x801E
        ctx->r9 = S32(0X801E << 16);
            goto L_80014108;
    }
    // 0x80014100: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80014104: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80014108:
    // 0x80014108: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x8001410C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80014110: lw          $t9, -0x1D18($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D18);
    // 0x80014114: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x80014118: addiu       $t1, $t1, -0x6900
    ctx->r9 = ADD32(ctx->r9, -0X6900);
    // 0x8001411C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80014120: jr          $ra
    // 0x80014124: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    return;
    // 0x80014124: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
L_80014128:
    // 0x80014128: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001412C: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x80014130: addiu       $t4, $t4, 0x0
    ctx->r12 = ADD32(ctx->r12, 0X0);
    // 0x80014134: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x80014138: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8001413C: jr          $ra
    // 0x80014140: nop

    return;
    // 0x80014140: nop

;}
RECOMP_FUNC void func_80014144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014144: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80014148: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x8001414C: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x80014150: beq         $v0, $zero, L_800141A0
    if (ctx->r2 == 0) {
        // 0x80014154: addiu       $t1, $t1, -0x6900
        ctx->r9 = ADD32(ctx->r9, -0X6900);
            goto L_800141A0;
    }
    // 0x80014154: addiu       $t1, $t1, -0x6900
    ctx->r9 = ADD32(ctx->r9, -0X6900);
    // 0x80014158: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8001415C: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80014160: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x80014164: bltz        $t6, L_80014178
    if (SIGNED(ctx->r14) < 0) {
        // 0x80014168: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80014178;
    }
    // 0x80014168: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8001416C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x80014170: bne         $at, $zero, L_80014180
    if (ctx->r1 != 0) {
        // 0x80014174: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_80014180;
    }
    // 0x80014174: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
L_80014178:
    // 0x80014178: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001417C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
L_80014180:
    // 0x80014180: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80014184: lw          $t8, -0x1CB4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1CB4);
    // 0x80014188: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001418C: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80014190: addiu       $t0, $t0, -0x6900
    ctx->r8 = ADD32(ctx->r8, -0X6900);
    // 0x80014194: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80014198: jr          $ra
    // 0x8001419C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    return;
    // 0x8001419C: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
L_800141A0:
    // 0x800141A0: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800141A4: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x800141A8: addiu       $t3, $t3, 0x6000
    ctx->r11 = ADD32(ctx->r11, 0X6000);
    // 0x800141AC: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x800141B0: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x800141B4: jr          $ra
    // 0x800141B8: nop

    return;
    // 0x800141B8: nop

;}
RECOMP_FUNC void func_800141BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800141BC: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800141C0: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x800141C4: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x800141C8: beq         $v0, $zero, L_800141E4
    if (ctx->r2 == 0) {
        // 0x800141CC: addiu       $t9, $t9, -0x6900
        ctx->r25 = ADD32(ctx->r25, -0X6900);
            goto L_800141E4;
    }
    // 0x800141CC: addiu       $t9, $t9, -0x6900
    ctx->r25 = ADD32(ctx->r25, -0X6900);
    // 0x800141D0: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x800141D4: nop

    // 0x800141D8: andi        $t6, $v1, 0xF0
    ctx->r14 = ctx->r3 & 0XF0;
    // 0x800141DC: b           L_800141E8
    // 0x800141E0: sra         $v1, $t6, 4
    ctx->r3 = S32(SIGNED(ctx->r14) >> 4);
        goto L_800141E8;
    // 0x800141E0: sra         $v1, $t6, 4
    ctx->r3 = S32(SIGNED(ctx->r14) >> 4);
L_800141E4:
    // 0x800141E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800141E8:
    // 0x800141E8: sll         $t8, $v1, 7
    ctx->r24 = S32(ctx->r3 << 7);
    // 0x800141EC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800141F0: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800141F4: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x800141F8: addiu       $t2, $t2, 0x6A00
    ctx->r10 = ADD32(ctx->r10, 0X6A00);
    // 0x800141FC: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80014200: jr          $ra
    // 0x80014204: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    return;
    // 0x80014204: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
;}
RECOMP_FUNC void func_80014208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014208: addiu       $t1, $zero, 0xE
    ctx->r9 = ADD32(0, 0XE);
    // 0x8001420C: div         $zero, $a1, $t1
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r9)));
    // 0x80014210: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80014214: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80014218: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8001421C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80014220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014228: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001422C: bne         $t1, $zero, L_80014238
    if (ctx->r9 != 0) {
        // 0x80014230: nop
    
            goto L_80014238;
    }
    // 0x80014230: nop

    // 0x80014234: break       7
    do_break(2147566132);
L_80014238:
    // 0x80014238: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001423C: bne         $t1, $at, L_80014250
    if (ctx->r9 != ctx->r1) {
        // 0x80014240: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80014250;
    }
    // 0x80014240: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014244: bne         $a2, $at, L_80014250
    if (ctx->r6 != ctx->r1) {
        // 0x80014248: nop
    
            goto L_80014250;
    }
    // 0x80014248: nop

    // 0x8001424C: break       6
    do_break(2147566156);
L_80014250:
    // 0x80014250: mflo        $a3
    ctx->r7 = lo;
    // 0x80014254: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80014258: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8001425C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014260: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80014264: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80014268: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x8001426C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014270: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80014274: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014278: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x8001427C: lhu         $t8, 0x8($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X8);
    // 0x80014280: nop

    // 0x80014284: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x80014288: beq         $t9, $zero, L_8001429C
    if (ctx->r25 == 0) {
        // 0x8001428C: nop
    
            goto L_8001429C;
    }
    // 0x8001428C: nop

    // 0x80014290: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80014294: b           L_800142A4
    // 0x80014298: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
        goto L_800142A4;
    // 0x80014298: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
L_8001429C:
    // 0x8001429C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800142A0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800142A4:
    // 0x800142A4: div         $zero, $a2, $t1
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r9)));
    // 0x800142A8: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x800142AC: subu        $t4, $t4, $a2
    ctx->r12 = SUB32(ctx->r12, ctx->r6);
    // 0x800142B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800142B4: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800142B8: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x800142BC: addu        $t4, $t4, $a2
    ctx->r12 = ADD32(ctx->r12, ctx->r6);
    // 0x800142C0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800142C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800142C8: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x800142CC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x800142D0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x800142D4: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x800142D8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800142DC: addiu       $t5, $v0, 0x2C
    ctx->r13 = ADD32(ctx->r2, 0X2C);
    // 0x800142E0: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800142E4: sw          $a2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r6;
    // 0x800142E8: bne         $t1, $zero, L_800142F4
    if (ctx->r9 != 0) {
        // 0x800142EC: nop
    
            goto L_800142F4;
    }
    // 0x800142EC: nop

    // 0x800142F0: break       7
    do_break(2147566320);
L_800142F4:
    // 0x800142F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800142F8: bne         $t1, $at, L_8001430C
    if (ctx->r9 != ctx->r1) {
        // 0x800142FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8001430C;
    }
    // 0x800142FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014300: bne         $a2, $at, L_8001430C
    if (ctx->r6 != ctx->r1) {
        // 0x80014304: nop
    
            goto L_8001430C;
    }
    // 0x80014304: nop

    // 0x80014308: break       6
    do_break(2147566344);
L_8001430C:
    // 0x8001430C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80014310: mfhi        $a1
    ctx->r5 = hi;
    // 0x80014314: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80014318: jal         0x80014A94
    // 0x8001431C: nop

    func_80014A94(rdram, ctx);
        goto after_0;
    // 0x8001431C: nop

    after_0:
    // 0x80014320: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80014324: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80014328: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001432C: beq         $v0, $zero, L_8001434C
    if (ctx->r2 == 0) {
        // 0x80014330: nop
    
            goto L_8001434C;
    }
    // 0x80014330: nop

    // 0x80014334: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x80014338: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8001433C: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80014340: nop

    // 0x80014344: ori         $t7, $t6, 0x800
    ctx->r15 = ctx->r14 | 0X800;
    // 0x80014348: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
L_8001434C:
    // 0x8001434C: lbu         $a0, 0x0($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X0);
    // 0x80014350: jal         0x800139E0
    // 0x80014354: nop

    func_800139E0(rdram, ctx);
        goto after_1;
    // 0x80014354: nop

    after_1:
    // 0x80014358: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8001435C: lw          $t8, 0x6980($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6980);
    // 0x80014360: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80014364: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x80014368: beq         $at, $zero, L_8001437C
    if (ctx->r1 == 0) {
        // 0x8001436C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8001437C;
    }
    // 0x8001436C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014370: lui         $v0, 0x803C
    ctx->r2 = S32(0X803C << 16);
    // 0x80014374: b           L_80014384
    // 0x80014378: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
        goto L_80014384;
    // 0x80014378: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
L_8001437C:
    // 0x8001437C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80014380: addiu       $v0, $v0, -0x4800
    ctx->r2 = ADD32(ctx->r2, -0X4800);
L_80014384:
    // 0x80014384: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x80014388: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001438C: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x80014390: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80014394: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80014398: jal         0x80081670
    // 0x8001439C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x8001439C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_2:
    // 0x800143A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800143A4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800143A8: lbu         $a1, 0x0($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X0);
    // 0x800143AC: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x800143B0: jal         0x80014524
    // 0x800143B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014524(rdram, ctx);
        goto after_3;
    // 0x800143B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800143B8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800143BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800143C0: lbu         $a1, 0x2($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X2);
    // 0x800143C4: nop

    // 0x800143C8: andi        $t5, $a1, 0xF
    ctx->r13 = ctx->r5 & 0XF;
    // 0x800143CC: jal         0x80014620
    // 0x800143D0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80014620(rdram, ctx);
        goto after_4;
    // 0x800143D0: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_4:
    // 0x800143D4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800143D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800143DC: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x800143E0: jal         0x800146A4
    // 0x800143E4: nop

    func_800146A4(rdram, ctx);
        goto after_5;
    // 0x800143E4: nop

    after_5:
    // 0x800143E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800143EC: jal         0x80081980
    // 0x800143F0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_80081980(rdram, ctx);
        goto after_6;
    // 0x800143F0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_6:
    // 0x800143F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800143F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800143FC: jr          $ra
    // 0x80014400: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80014400: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80014404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014404: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80014408: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x8001440C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80014410: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80014414: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80014418: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8001441C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80014420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80014424: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80014428: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x8001442C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80014430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014438: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8001443C: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x80014440: addiu       $t9, $a1, 0x1C
    ctx->r25 = ADD32(ctx->r5, 0X1C);
    // 0x80014444: addiu       $t8, $v0, 0x2C
    ctx->r24 = ADD32(ctx->r2, 0X2C);
    // 0x80014448: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8001444C: sw          $t9, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r25;
    // 0x80014450: lw          $v0, 0x30($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X30);
    // 0x80014454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014458: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x8001445C: nop

    // 0x80014460: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x80014464: jal         0x80014960
    // 0x80014468: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    func_80014960(rdram, ctx);
        goto after_0;
    // 0x80014468: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    after_0:
    // 0x8001446C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80014470: jal         0x800139E0
    // 0x80014474: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800139E0(rdram, ctx);
        goto after_1;
    // 0x80014474: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80014478: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8001447C: lw          $t2, 0x6980($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6980);
    // 0x80014480: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80014484: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80014488: beq         $at, $zero, L_8001449C
    if (ctx->r1 == 0) {
        // 0x8001448C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8001449C;
    }
    // 0x8001448C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80014490: lui         $v0, 0x803C
    ctx->r2 = S32(0X803C << 16);
    // 0x80014494: b           L_800144A4
    // 0x80014498: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
        goto L_800144A4;
    // 0x80014498: addiu       $v0, $v0, 0x1A00
    ctx->r2 = ADD32(ctx->r2, 0X1A00);
L_8001449C:
    // 0x8001449C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x800144A0: addiu       $v0, $v0, -0x4800
    ctx->r2 = ADD32(ctx->r2, -0X4800);
L_800144A4:
    // 0x800144A4: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x800144A8: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800144AC: addu        $a0, $v0, $t3
    ctx->r4 = ADD32(ctx->r2, ctx->r11);
    // 0x800144B0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x800144B4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800144B8: jal         0x80081670
    // 0x800144BC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    func_80081670(rdram, ctx);
        goto after_2;
    // 0x800144BC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    after_2:
    // 0x800144C0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800144C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800144C8: lbu         $a1, 0x0($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X0);
    // 0x800144CC: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x800144D0: jal         0x80014524
    // 0x800144D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014524(rdram, ctx);
        goto after_3;
    // 0x800144D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800144D8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800144DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800144E0: lbu         $a1, 0x2($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X2);
    // 0x800144E4: nop

    // 0x800144E8: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x800144EC: jal         0x80014620
    // 0x800144F0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80014620(rdram, ctx);
        goto after_4;
    // 0x800144F0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_4:
    // 0x800144F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800144F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800144FC: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x80014500: jal         0x800146A4
    // 0x80014504: nop

    func_800146A4(rdram, ctx);
        goto after_5;
    // 0x80014504: nop

    after_5:
    // 0x80014508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001450C: jal         0x80081980
    // 0x80014510: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_80081980(rdram, ctx);
        goto after_6;
    // 0x80014510: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_6:
    // 0x80014514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80014518: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001451C: jr          $ra
    // 0x80014520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80014520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80014524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014524: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80014528: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8001452C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80014530: addiu       $t6, $t6, 0x7600
    ctx->r14 = ADD32(ctx->r14, 0X7600);
    // 0x80014534: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80014538: addiu       $t8, $t8, 0x7200
    ctx->r24 = ADD32(ctx->r24, 0X7200);
    // 0x8001453C: sll         $t4, $a1, 4
    ctx->r12 = S32(ctx->r5 << 4);
    // 0x80014540: addiu       $v1, $v1, -0x6900
    ctx->r3 = ADD32(ctx->r3, -0X6900);
    // 0x80014544: subu        $t7, $t6, $t2
    ctx->r15 = SUB32(ctx->r14, ctx->r10);
    // 0x80014548: addiu       $t5, $t4, 0x5
    ctx->r13 = ADD32(ctx->r12, 0X5);
    // 0x8001454C: subu        $t9, $t8, $t2
    ctx->r25 = SUB32(ctx->r24, ctx->r10);
    // 0x80014550: addu        $t3, $t9, $v1
    ctx->r11 = ADD32(ctx->r25, ctx->r3);
    // 0x80014554: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80014558: addu        $a3, $t7, $v1
    ctx->r7 = ADD32(ctx->r15, ctx->r3);
    // 0x8001455C: addiu       $a0, $a0, 0x2A
    ctx->r4 = ADD32(ctx->r4, 0X2A);
    // 0x80014560: addu        $t0, $t3, $t6
    ctx->r8 = ADD32(ctx->r11, ctx->r14);
    // 0x80014564: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80014568:
    // 0x80014568: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x8001456C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80014570: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x80014574: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80014578: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x8001457C: bne         $at, $zero, L_80014568
    if (ctx->r1 != 0) {
        // 0x80014580: sh          $t7, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r15;
            goto L_80014568;
    }
    // 0x80014580: sh          $t7, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r15;
    // 0x80014584: andi        $t8, $a2, 0x10
    ctx->r24 = ctx->r6 & 0X10;
    // 0x80014588: beq         $t8, $zero, L_800145A4
    if (ctx->r24 == 0) {
        // 0x8001458C: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_800145A4;
    }
    // 0x8001458C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80014590: sll         $t4, $a1, 6
    ctx->r12 = S32(ctx->r5 << 6);
    // 0x80014594: addu        $v0, $a3, $t4
    ctx->r2 = ADD32(ctx->r7, ctx->r12);
    // 0x80014598: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x8001459C: b           L_800145B4
    // 0x800145A0: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
        goto L_800145B4;
    // 0x800145A0: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
L_800145A4:
    // 0x800145A4: sll         $t3, $a1, 5
    ctx->r11 = S32(ctx->r5 << 5);
    // 0x800145A8: addiu       $t6, $t3, 0x120
    ctx->r14 = ADD32(ctx->r11, 0X120);
    // 0x800145AC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800145B0: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
L_800145B4:
    // 0x800145B4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800145B8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_800145BC:
    // 0x800145BC: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800145C0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800145C4: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x800145C8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800145CC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800145D0: bne         $at, $zero, L_800145BC
    if (ctx->r1 != 0) {
        // 0x800145D4: sh          $t8, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r24;
            goto L_800145BC;
    }
    // 0x800145D4: sh          $t8, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r24;
    // 0x800145D8: lhu         $t9, 0x10($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X10);
    // 0x800145DC: addiu       $a0, $a0, 0x1A
    ctx->r4 = ADD32(ctx->r4, 0X1A);
    // 0x800145E0: sh          $t9, -0xA($a0)
    MEM_H(-0XA, ctx->r4) = ctx->r25;
    // 0x800145E4: lhu         $t4, 0x12($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X12);
    // 0x800145E8: addiu       $v0, $v0, 0x1A
    ctx->r2 = ADD32(ctx->r2, 0X1A);
    // 0x800145EC: sh          $t4, -0x8($a0)
    MEM_H(-0X8, ctx->r4) = ctx->r12;
    // 0x800145F0: lhu         $t5, -0x6($v0)
    ctx->r13 = MEM_HU(ctx->r2, -0X6);
    // 0x800145F4: nop

    // 0x800145F8: sh          $t5, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r13;
    // 0x800145FC: lhu         $t3, -0x4($v0)
    ctx->r11 = MEM_HU(ctx->r2, -0X4);
    // 0x80014600: nop

    // 0x80014604: sh          $t3, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r11;
    // 0x80014608: lhu         $t6, -0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, -0X2);
    // 0x8001460C: nop

    // 0x80014610: sh          $t6, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r14;
    // 0x80014614: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x80014618: jr          $ra
    // 0x8001461C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8001461C: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80014620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014620: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80014624: bne         $a1, $at, L_80014634
    if (ctx->r5 != ctx->r1) {
        // 0x80014628: lui         $t9, 0x801E
        ctx->r25 = S32(0X801E << 16);
            goto L_80014634;
    }
    // 0x80014628: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x8001462C: b           L_80014644
    // 0x80014630: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_80014644;
    // 0x80014630: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80014634:
    // 0x80014634: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80014638: bne         $a1, $at, L_80014648
    if (ctx->r5 != ctx->r1) {
        // 0x8001463C: sll         $t6, $a1, 4
        ctx->r14 = S32(ctx->r5 << 4);
            goto L_80014648;
    }
    // 0x8001463C: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x80014640: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_80014644:
    // 0x80014644: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
L_80014648:
    // 0x80014648: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001464C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80014650: addiu       $t9, $t9, -0x6900
    ctx->r25 = ADD32(ctx->r25, -0X6900);
    // 0x80014654: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x80014658: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x8001465C: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80014660: addiu       $t2, $t2, 0x7400
    ctx->r10 = ADD32(ctx->r10, 0X7400);
    // 0x80014664: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x80014668: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x8001466C: sh          $zero, 0xA0($a0)
    MEM_H(0XA0, ctx->r4) = 0;
    // 0x80014670: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80014674: lhu         $t3, 0x0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X0);
    // 0x80014678: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8001467C: sh          $t3, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r11;
    // 0x80014680: lhu         $t4, -0x4($v0)
    ctx->r12 = MEM_HU(ctx->r2, -0X4);
    // 0x80014684: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    // 0x80014688: sh          $t4, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r12;
    // 0x8001468C: lhu         $t5, -0x2($v0)
    ctx->r13 = MEM_HU(ctx->r2, -0X2);
    // 0x80014690: nop

    // 0x80014694: sh          $t5, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r13;
    // 0x80014698: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x8001469C: jr          $ra
    // 0x800146A0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x800146A0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_800146A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800146A4: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x800146A8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800146AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800146B0: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x800146B4: addiu       $t1, $t1, -0x6900
    ctx->r9 = ADD32(ctx->r9, -0X6900);
    // 0x800146B8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800146BC: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x800146C0: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800146C4: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x800146C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800146CC: addiu       $t4, $t4, 0x7B00
    ctx->r12 = ADD32(ctx->r12, 0X7B00);
    // 0x800146D0: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x800146D4: sh          $t6, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r14;
    // 0x800146D8: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x800146DC: lhu         $t5, 0x0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X0);
    // 0x800146E0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800146E4: sh          $t5, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r13;
    // 0x800146E8: lhu         $t6, -0x6($v0)
    ctx->r14 = MEM_HU(ctx->r2, -0X6);
    // 0x800146EC: addiu       $a0, $a0, 0xAA
    ctx->r4 = ADD32(ctx->r4, 0XAA);
    // 0x800146F0: sh          $t6, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r14;
    // 0x800146F4: lhu         $t7, -0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, -0X4);
    // 0x800146F8: nop

    // 0x800146FC: sh          $t7, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r15;
    // 0x80014700: lhu         $t8, -0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, -0X2);
    // 0x80014704: nop

    // 0x80014708: sh          $t8, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r24;
    // 0x8001470C: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x80014710: jr          $ra
    // 0x80014714: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    return;
    // 0x80014714: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80014718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014718: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8001471C: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80014720: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x80014724: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x80014728: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x8001472C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80014730: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x80014734: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80014738: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x8001473C: mflo        $t7
    ctx->r15 = lo;
    // 0x80014740: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80014744: nop

    // 0x80014748: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x8001474C: bne         $a2, $zero, L_80014758
    if (ctx->r6 != 0) {
        // 0x80014750: nop
    
            goto L_80014758;
    }
    // 0x80014750: nop

    // 0x80014754: break       7
    do_break(2147567444);
L_80014758:
    // 0x80014758: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001475C: bne         $a2, $at, L_80014770
    if (ctx->r6 != ctx->r1) {
        // 0x80014760: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80014770;
    }
    // 0x80014760: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80014764: bne         $v0, $at, L_80014770
    if (ctx->r2 != ctx->r1) {
        // 0x80014768: nop
    
            goto L_80014770;
    }
    // 0x80014768: nop

    // 0x8001476C: break       6
    do_break(2147567468);
L_80014770:
    // 0x80014770: mflo        $a1
    ctx->r5 = lo;
    // 0x80014774: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80014778: bne         $at, $zero, L_80014788
    if (ctx->r1 != 0) {
        // 0x8001477C: nop
    
            goto L_80014788;
    }
    // 0x8001477C: nop

    // 0x80014780: jr          $ra
    // 0x80014784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80014784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014788:
    // 0x80014788: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8001478C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80014790: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x80014794: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80014798: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x8001479C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800147A0: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800147A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800147A8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800147AC: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x800147B0: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x800147B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800147B8: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x800147BC: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x800147C0: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x800147C4: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800147C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800147CC: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800147D0: bne         $a2, $zero, L_800147DC
    if (ctx->r6 != 0) {
        // 0x800147D4: nop
    
            goto L_800147DC;
    }
    // 0x800147D4: nop

    // 0x800147D8: break       7
    do_break(2147567576);
L_800147DC:
    // 0x800147DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800147E0: bne         $a2, $at, L_800147F4
    if (ctx->r6 != ctx->r1) {
        // 0x800147E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800147F4;
    }
    // 0x800147E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800147E8: bne         $v0, $at, L_800147F4
    if (ctx->r2 != ctx->r1) {
        // 0x800147EC: nop
    
            goto L_800147F4;
    }
    // 0x800147EC: nop

    // 0x800147F0: break       6
    do_break(2147567600);
L_800147F4:
    // 0x800147F4: mfhi        $v1
    ctx->r3 = hi;
    // 0x800147F8: sll         $t1, $v1, 5
    ctx->r9 = S32(ctx->r3 << 5);
    // 0x800147FC: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x80014800: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80014804: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80014808: lw          $a0, 0xD8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XD8);
    // 0x8001480C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80014810: bne         $a0, $zero, L_80014848
    if (ctx->r4 != 0) {
        // 0x80014814: addu        $t3, $t3, $a1
        ctx->r11 = ADD32(ctx->r11, ctx->r5);
            goto L_80014848;
    }
    // 0x80014814: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x80014818: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x8001481C: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x80014820: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80014824: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x80014828: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001482C: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x80014830: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80014834: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x80014838: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001483C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80014840: jr          $ra
    // 0x80014844: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    return;
    // 0x80014844: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_80014848:
    // 0x80014848: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8001484C: jr          $ra
    // 0x80014850: nop

    return;
    // 0x80014850: nop

;}
RECOMP_FUNC void func_80014854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014854: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80014858: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8001485C: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x80014860: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x80014864: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x80014868: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8001486C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x80014870: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80014874: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80014878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001487C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80014880: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80014884: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    // 0x80014888: mflo        $t7
    ctx->r15 = lo;
    // 0x8001488C: slti        $at, $t7, 0x1D
    ctx->r1 = SIGNED(ctx->r15) < 0X1D ? 1 : 0;
    // 0x80014890: bne         $at, $zero, L_800148BC
    if (ctx->r1 != 0) {
        // 0x80014894: nop
    
            goto L_800148BC;
    }
    // 0x80014894: nop

    // 0x80014898: lb          $t8, -0x3099($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X3099);
    // 0x8001489C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800148A0: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x800148A4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x800148A8: addiu       $t1, $t1, -0x1C50
    ctx->r9 = ADD32(ctx->r9, -0X1C50);
    // 0x800148AC: mfhi        $t9
    ctx->r25 = hi;
    // 0x800148B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800148B4: b           L_800148CC
    // 0x800148B8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
        goto L_800148CC;
    // 0x800148B8: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
L_800148BC:
    // 0x800148BC: jal         0x80014718
    // 0x800148C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80014718(rdram, ctx);
        goto after_0;
    // 0x800148C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x800148C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800148C8: addiu       $a0, $v0, 0x15
    ctx->r4 = ADD32(ctx->r2, 0X15);
L_800148CC:
    // 0x800148CC: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x800148D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x800148D4: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
    // 0x800148D8: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x800148DC: nop

    // 0x800148E0: sb          $t3, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r11;
    // 0x800148E4: lbu         $t4, 0x2($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X2);
    // 0x800148E8: nop

    // 0x800148EC: sb          $t4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r12;
    // 0x800148F0: lbu         $t5, 0x3($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X3);
    // 0x800148F4: nop

    // 0x800148F8: sb          $t5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r13;
    // 0x800148FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80014904: jr          $ra
    // 0x80014908: nop

    return;
    // 0x80014908: nop

;}
RECOMP_FUNC void func_8001490C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001490C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80014910: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80014914: lbu         $v0, -0x1CA4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1CA4);
    // 0x80014918: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8001491C: bne         $a0, $at, L_80014944
    if (ctx->r4 != ctx->r1) {
        // 0x80014920: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80014944;
    }
    // 0x80014920: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80014924: beq         $a1, $at, L_80014934
    if (ctx->r5 == ctx->r1) {
        // 0x80014928: nop
    
            goto L_80014934;
    }
    // 0x80014928: nop

    // 0x8001492C: bne         $a1, $zero, L_8001493C
    if (ctx->r5 != 0) {
        // 0x80014930: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001493C;
    }
    // 0x80014930: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80014934:
    // 0x80014934: jr          $ra
    // 0x80014938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80014938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001493C:
    // 0x8001493C: jr          $ra
    // 0x80014940: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80014940: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80014944:
    // 0x80014944: bne         $a1, $v0, L_80014954
    if (ctx->r5 != ctx->r2) {
        // 0x80014948: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80014954;
    }
    // 0x80014948: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001494C: b           L_80014954
    // 0x80014950: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80014954;
    // 0x80014950: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80014954:
    // 0x80014954: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80014958: jr          $ra
    // 0x8001495C: nop

    return;
    // 0x8001495C: nop

;}
RECOMP_FUNC void func_80014960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014960: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80014964: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80014968: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8001496C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80014970: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80014974: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80014978: lbu         $s1, 0x0($v1)
    ctx->r17 = MEM_BU(ctx->r3, 0X0);
    // 0x8001497C: lbu         $s2, 0xA94($v1)
    ctx->r18 = MEM_BU(ctx->r3, 0XA94);
    // 0x80014980: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x80014984: lb          $t7, 0x5($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X5);
    // 0x80014988: lb          $t9, 0x4($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4);
    // 0x8001498C: xor         $t6, $s1, $s2
    ctx->r14 = ctx->r17 ^ ctx->r18;
    // 0x80014990: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014994: xor         $t8, $t6, $t7
    ctx->r24 = ctx->r14 ^ ctx->r15;
    // 0x80014998: xor         $s0, $t8, $t9
    ctx->r16 = ctx->r24 ^ ctx->r25;
    // 0x8001499C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800149A0: lw          $t1, 0x6980($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6980);
    // 0x800149A4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800149A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800149AC: bgez        $s0, L_800149C0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800149B0: andi        $t0, $s0, 0x3
        ctx->r8 = ctx->r16 & 0X3;
            goto L_800149C0;
    }
    // 0x800149B0: andi        $t0, $s0, 0x3
    ctx->r8 = ctx->r16 & 0X3;
    // 0x800149B4: beq         $t0, $zero, L_800149C0
    if (ctx->r8 == 0) {
        // 0x800149B8: nop
    
            goto L_800149C0;
    }
    // 0x800149B8: nop

    // 0x800149BC: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_800149C0:
    // 0x800149C0: bne         $t1, $at, L_800149D0
    if (ctx->r9 != ctx->r1) {
        // 0x800149C4: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_800149D0;
    }
    // 0x800149C4: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800149C8: b           L_80014A7C
    // 0x800149CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80014A7C;
    // 0x800149CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800149D0:
    // 0x800149D0: lhu         $t2, 0x8($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X8);
    // 0x800149D4: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x800149D8: andi        $t3, $t2, 0x200
    ctx->r11 = ctx->r10 & 0X200;
    // 0x800149DC: beq         $t3, $zero, L_800149EC
    if (ctx->r11 == 0) {
        // 0x800149E0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_800149EC;
    }
    // 0x800149E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800149E4: b           L_800149F0
    // 0x800149E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800149F0;
    // 0x800149E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800149EC:
    // 0x800149EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800149F0:
    // 0x800149F0: lhu         $t5, 0xA9C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XA9C);
    // 0x800149F4: sll         $t4, $s1, 1
    ctx->r12 = S32(ctx->r17 << 1);
    // 0x800149F8: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x800149FC: beq         $t6, $zero, L_80014A0C
    if (ctx->r14 == 0) {
        // 0x80014A00: addu        $s1, $v0, $t4
        ctx->r17 = ADD32(ctx->r2, ctx->r12);
            goto L_80014A0C;
    }
    // 0x80014A00: addu        $s1, $v0, $t4
    ctx->r17 = ADD32(ctx->r2, ctx->r12);
    // 0x80014A04: b           L_80014A10
    // 0x80014A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80014A10;
    // 0x80014A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80014A0C:
    // 0x80014A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014A10:
    // 0x80014A10: addu        $s2, $v0, $t7
    ctx->r18 = ADD32(ctx->r2, ctx->r15);
    // 0x80014A14: jal         0x8001490C
    // 0x80014A18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001490C(rdram, ctx);
        goto after_0;
    // 0x80014A18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80014A1C: bne         $v0, $zero, L_80014A34
    if (ctx->r2 != 0) {
        // 0x80014A20: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80014A34;
    }
    // 0x80014A20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80014A24: jal         0x8001490C
    // 0x80014A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001490C(rdram, ctx);
        goto after_1;
    // 0x80014A28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80014A2C: beq         $v0, $zero, L_80014A7C
    if (ctx->r2 == 0) {
        // 0x80014A30: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80014A7C;
    }
    // 0x80014A30: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80014A34:
    // 0x80014A34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80014A38: bgez        $s0, L_80014A4C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80014A3C: andi        $t8, $s0, 0x3
        ctx->r24 = ctx->r16 & 0X3;
            goto L_80014A4C;
    }
    // 0x80014A3C: andi        $t8, $s0, 0x3
    ctx->r24 = ctx->r16 & 0X3;
    // 0x80014A40: beq         $t8, $zero, L_80014A4C
    if (ctx->r24 == 0) {
        // 0x80014A44: nop
    
            goto L_80014A4C;
    }
    // 0x80014A44: nop

    // 0x80014A48: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_80014A4C:
    // 0x80014A4C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80014A50: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80014A54: jal         0x8001490C
    // 0x80014A58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001490C(rdram, ctx);
        goto after_2;
    // 0x80014A58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80014A5C: bne         $v0, $zero, L_80014A34
    if (ctx->r2 != 0) {
        // 0x80014A60: nop
    
            goto L_80014A34;
    }
    // 0x80014A60: nop

    // 0x80014A64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80014A68: jal         0x8001490C
    // 0x80014A6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001490C(rdram, ctx);
        goto after_3;
    // 0x80014A6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80014A70: bne         $v0, $zero, L_80014A34
    if (ctx->r2 != 0) {
        // 0x80014A74: nop
    
            goto L_80014A34;
    }
    // 0x80014A74: nop

    // 0x80014A78: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80014A7C:
    // 0x80014A7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80014A80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80014A84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80014A88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80014A8C: jr          $ra
    // 0x80014A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80014A90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80014A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80014A98: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80014A9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014AA0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80014AA4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80014AA8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80014AAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014AB0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80014AB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80014AB8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80014ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80014AC0: sll         $v1, $a1, 5
    ctx->r3 = S32(ctx->r5 << 5);
    // 0x80014AC4: lw          $t7, -0x2CD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2CD8);
    // 0x80014AC8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80014ACC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80014AD0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80014AD4: lw          $v0, 0xD4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0XD4);
    // 0x80014AD8: nop

    // 0x80014ADC: beq         $v0, $zero, L_80014B04
    if (ctx->r2 == 0) {
        // 0x80014AE0: nop
    
            goto L_80014B04;
    }
    // 0x80014AE0: nop

    // 0x80014AE4: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x80014AE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80014AEC: bne         $t9, $zero, L_80014AFC
    if (ctx->r25 != 0) {
        // 0x80014AF0: nop
    
            goto L_80014AFC;
    }
    // 0x80014AF0: nop

    // 0x80014AF4: jr          $ra
    // 0x80014AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80014AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80014AFC:
    // 0x80014AFC: jr          $ra
    // 0x80014B00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80014B00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80014B04:
    // 0x80014B04: bne         $v1, $zero, L_80014B18
    if (ctx->r3 != 0) {
        // 0x80014B08: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80014B18;
    }
    // 0x80014B08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80014B0C: b           L_80014B18
    // 0x80014B10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80014B18;
    // 0x80014B10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80014B14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80014B18:
    // 0x80014B18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80014B1C: jr          $ra
    // 0x80014B20: nop

    return;
    // 0x80014B20: nop

    // 0x80014B24: nop

    // 0x80014B28: nop

    // 0x80014B2C: nop

;}
RECOMP_FUNC void func_80014B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014B30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80014B34: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80014B38: lui         $t6, 0x8001
    ctx->r14 = S32(0X8001 << 16);
    // 0x80014B3C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80014B40: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80014B44: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80014B48: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80014B4C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80014B50: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80014B54: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80014B58: addiu       $t6, $t6, 0x5334
    ctx->r14 = ADD32(ctx->r14, 0X5334);
    // 0x80014B5C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80014B60: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x80014B64: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80014B68: jal         0x80081A00
    // 0x80014B6C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    osAiSetFrequency_recomp(rdram, ctx);
        goto after_0;
    // 0x80014B6C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    after_0:
    // 0x80014B70: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x80014B74: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x80014B78: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_80014B7C:
    // 0x80014B7C: bne         $s1, $zero, L_80014B7C
    if (ctx->r17 != 0) {
        // 0x80014B80: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_80014B7C;
    }
    // 0x80014B80: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80014B84: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x80014B88: lui         $v1, 0x8014
    ctx->r3 = S32(0X8014 << 16);
    // 0x80014B8C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80014B90: addiu       $v1, $v1, -0x4F5C
    ctx->r3 = ADD32(ctx->r3, -0X4F5C);
    // 0x80014B94: bgez        $t7, L_80014BAC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014B98: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80014BAC;
    }
    // 0x80014B98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80014B9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80014BA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80014BA4: nop

    // 0x80014BA8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80014BAC:
    // 0x80014BAC: lw          $t8, 0x18($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X18);
    // 0x80014BB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80014BB4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80014BB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80014BBC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80014BC0: lui         $s5, 0x8014
    ctx->r21 = S32(0X8014 << 16);
    // 0x80014BC4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80014BC8: mul.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80014BCC: addiu       $s5, $s5, -0x4F58
    ctx->r21 = ADD32(ctx->r21, -0X4F58);
    // 0x80014BD0: addiu       $a0, $a0, 0x4B40
    ctx->r4 = ADD32(ctx->r4, 0X4B40);
    // 0x80014BD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80014BD8: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80014BDC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80014BE0: nop

    // 0x80014BE4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80014BE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80014BEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80014BF0: nop

    // 0x80014BF4: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80014BF8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80014BFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80014C00: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80014C04: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80014C08: bgez        $v0, L_80014C20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80014C0C: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80014C20;
    }
    // 0x80014C0C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80014C10: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80014C14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80014C18: nop

    // 0x80014C1C: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_80014C20:
    // 0x80014C20: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80014C24: nop

    // 0x80014C28: bc1f        L_80014C38
    if (!c1cs) {
        // 0x80014C2C: addiu       $t1, $v0, 0x1
        ctx->r9 = ADD32(ctx->r2, 0X1);
            goto L_80014C38;
    }
    // 0x80014C2C: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x80014C30: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80014C34: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80014C38:
    // 0x80014C38: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x80014C3C: beq         $t2, $zero, L_80014C50
    if (ctx->r10 == 0) {
        // 0x80014C40: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80014C50;
    }
    // 0x80014C40: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80014C44: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x80014C48: addiu       $v0, $t3, 0x10
    ctx->r2 = ADD32(ctx->r11, 0X10);
    // 0x80014C4C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80014C50:
    // 0x80014C50: addiu       $t5, $v0, -0x10
    ctx->r13 = ADD32(ctx->r2, -0X10);
    // 0x80014C54: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x80014C58: sw          $t5, -0x4F60($at)
    MEM_W(-0X4F60, ctx->r1) = ctx->r13;
    // 0x80014C5C: addiu       $t6, $v0, 0x100
    ctx->r14 = ADD32(ctx->r2, 0X100);
    // 0x80014C60: jal         0x80081BEC
    // 0x80014C64: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    func_80081BEC(rdram, ctx);
        goto after_1;
    // 0x80014C64: sw          $t6, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r14;
    after_1:
    // 0x80014C68: lui         $v0, 0x8014
    ctx->r2 = S32(0X8014 << 16);
    // 0x80014C6C: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x80014C70: lui         $s2, 0x8014
    ctx->r18 = S32(0X8014 << 16);
    // 0x80014C74: lui         $s0, 0x8014
    ctx->r16 = S32(0X8014 << 16);
    // 0x80014C78: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80014C7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80014C80: addiu       $s0, $s0, -0x544C
    ctx->r16 = ADD32(ctx->r16, -0X544C);
    // 0x80014C84: addiu       $s2, $s2, -0x5460
    ctx->r18 = ADD32(ctx->r18, -0X5460);
    // 0x80014C88: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80014C8C:
    // 0x80014C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014C90: jal         0x80081B90
    // 0x80014C94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80081B90(rdram, ctx);
        goto after_2;
    // 0x80014C94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80014C98: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80014C9C: addiu       $t7, $zero, 0x800
    ctx->r15 = ADD32(0, 0X800);
    // 0x80014CA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80014CA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014CAC: jal         0x80081C20
    // 0x80014CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_3;
    // 0x80014CB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80014CB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80014CB8: sltiu       $at, $s1, 0x3F
    ctx->r1 = ctx->r17 < 0X3F ? 1 : 0;
    // 0x80014CBC: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80014CC0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80014CC4: bne         $at, $zero, L_80014C8C
    if (ctx->r1 != 0) {
        // 0x80014CC8: sw          $v0, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->r2;
            goto L_80014C8C;
    }
    // 0x80014CC8: sw          $v0, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->r2;
    // 0x80014CCC: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80014CD0: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80014CD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80014CD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014CE0: jal         0x80081C20
    // 0x80014CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_4;
    // 0x80014CE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80014CE8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80014CEC: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x80014CF0: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80014CF4: addiu       $s1, $s1, 0x4748
    ctx->r17 = ADD32(ctx->r17, 0X4748);
    // 0x80014CF8: addiu       $s0, $s0, 0x4740
    ctx->r16 = ADD32(ctx->r16, 0X4740);
L_80014CFC:
    // 0x80014CFC: lw          $t9, 0x8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8);
    // 0x80014D00: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80014D04: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80014D08: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80014D0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014D14: jal         0x80081C20
    // 0x80014D18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_5;
    // 0x80014D18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80014D1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80014D20: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80014D24: bne         $at, $zero, L_80014CFC
    if (ctx->r1 != 0) {
        // 0x80014D28: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80014CFC;
    }
    // 0x80014D28: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80014D2C: lw          $t1, 0x8($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X8);
    // 0x80014D30: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x80014D34: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80014D38: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80014D3C: addiu       $s2, $s2, 0x4758
    ctx->r18 = ADD32(ctx->r18, 0X4758);
    // 0x80014D40: addiu       $s0, $s0, 0x4740
    ctx->r16 = ADD32(ctx->r16, 0X4740);
    // 0x80014D44: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80014D48: sw          $t1, -0x4F54($at)
    MEM_W(-0X4F54, ctx->r1) = ctx->r9;
L_80014D4C:
    // 0x80014D4C: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80014D50: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80014D54: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80014D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014D60: jal         0x80081C20
    // 0x80014D64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_6;
    // 0x80014D64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80014D68: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80014D6C: sh          $s1, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r17;
    // 0x80014D70: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80014D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014D78: sw          $v1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r3;
    // 0x80014D7C: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80014D80: lw          $a2, 0x14($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X14);
    // 0x80014D84: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80014D88: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80014D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80014D90: jal         0x80081C20
    // 0x80014D94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_7;
    // 0x80014D94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x80014D98: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80014D9C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80014DA0: bne         $s0, $s2, L_80014D4C
    if (ctx->r16 != ctx->r18) {
        // 0x80014DA4: sw          $v0, 0x0($t5)
        MEM_W(0X0, ctx->r13) = ctx->r2;
            goto L_80014D4C;
    }
    // 0x80014DA4: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x80014DA8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80014DAC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80014DB0: addiu       $a1, $a1, 0x4A40
    ctx->r5 = ADD32(ctx->r5, 0X4A40);
    // 0x80014DB4: addiu       $a0, $a0, 0x4A28
    ctx->r4 = ADD32(ctx->r4, 0X4A28);
    // 0x80014DB8: jal         0x80081C80
    // 0x80014DBC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_8;
    // 0x80014DBC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_8:
    // 0x80014DC0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80014DC4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80014DC8: addiu       $a1, $a1, 0x4928
    ctx->r5 = ADD32(ctx->r5, 0X4928);
    // 0x80014DCC: addiu       $a0, $a0, 0x4910
    ctx->r4 = ADD32(ctx->r4, 0X4910);
    // 0x80014DD0: jal         0x80081C80
    // 0x80014DD4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_9;
    // 0x80014DD4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_9:
    // 0x80014DD8: lui         $a0, 0x8014
    ctx->r4 = S32(0X8014 << 16);
    // 0x80014DDC: lui         $a1, 0x8014
    ctx->r5 = S32(0X8014 << 16);
    // 0x80014DE0: addiu       $a1, $a1, -0x4938
    ctx->r5 = ADD32(ctx->r5, -0X4938);
    // 0x80014DE4: addiu       $a0, $a0, -0x4950
    ctx->r4 = ADD32(ctx->r4, -0X4950);
    // 0x80014DE8: jal         0x80081C80
    // 0x80014DEC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_10;
    // 0x80014DEC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_10:
    // 0x80014DF0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80014DF4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80014DF8: lui         $t6, 0x8014
    ctx->r14 = S32(0X8014 << 16);
    // 0x80014DFC: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80014E00: addiu       $t6, $t6, -0x5470
    ctx->r14 = ADD32(ctx->r14, -0X5470);
    // 0x80014E04: lui         $a2, 0x8001
    ctx->r6 = S32(0X8001 << 16);
    // 0x80014E08: addiu       $a2, $a2, 0x4E50
    ctx->r6 = ADD32(ctx->r6, 0X4E50);
    // 0x80014E0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80014E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80014E14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80014E18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80014E1C: jal         0x80081CB0
    // 0x80014E20: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osCreateThread_recomp(rdram, ctx);
        goto after_11;
    // 0x80014E20: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_11:
    // 0x80014E24: jal         0x80081E00
    // 0x80014E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osStartThread_recomp(rdram, ctx);
        goto after_12;
    // 0x80014E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80014E2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80014E30: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80014E34: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80014E38: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80014E3C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80014E40: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80014E44: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80014E48: jr          $ra
    // 0x80014E4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80014E4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80014E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014E50: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80014E54: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80014E58: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80014E5C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80014E60: addiu       $s3, $s3, 0x4910
    ctx->r19 = ADD32(ctx->r19, 0X4910);
    // 0x80014E64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80014E68: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80014E6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014E70: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80014E74: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80014E78: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80014E7C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80014E80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80014E84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80014E88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80014E8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80014E90: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80014E94: addiu       $a0, $a0, -0x6728
    ctx->r4 = ADD32(ctx->r4, -0X6728);
    // 0x80014E98: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80014E9C: jal         0x8001BC7C
    // 0x80014EA0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    func_8001BC7C(rdram, ctx);
        goto after_0;
    // 0x80014EA0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x80014EA4: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80014EA8: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x80014EAC: addiu       $s7, $s7, 0x4740
    ctx->r23 = ADD32(ctx->r23, 0X4740);
    // 0x80014EB0: addiu       $fp, $fp, -0x1C20
    ctx->r30 = ADD32(ctx->r30, -0X1C20);
    // 0x80014EB4: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x80014EB8: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80014EBC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80014EC0: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80014EC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80014EC8:
    // 0x80014EC8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80014ECC: jal         0x80081F50
    // 0x80014ED0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80014ED0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x80014ED4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80014ED8: nop

    // 0x80014EDC: lh          $v1, 0x0($t6)
    ctx->r3 = MEM_H(ctx->r14, 0X0);
    // 0x80014EE0: nop

    // 0x80014EE4: beq         $v1, $s4, L_80014F04
    if (ctx->r3 == ctx->r20) {
        // 0x80014EE8: nop
    
            goto L_80014F04;
    }
    // 0x80014EE8: nop

    // 0x80014EEC: beq         $v1, $s5, L_80014F70
    if (ctx->r3 == ctx->r21) {
        // 0x80014EF0: nop
    
            goto L_80014F70;
    }
    // 0x80014EF0: nop

    // 0x80014EF4: beq         $v1, $s6, L_80014F6C
    if (ctx->r3 == ctx->r22) {
        // 0x80014EF8: nop
    
            goto L_80014F6C;
    }
    // 0x80014EF8: nop

    // 0x80014EFC: b           L_80014F70
    // 0x80014F00: nop

        goto L_80014F70;
    // 0x80014F00: nop

L_80014F04:
    // 0x80014F04: lw          $t7, 0x0($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X0);
    // 0x80014F08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80014F0C: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80014F10: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80014F14: mfhi        $t8
    ctx->r24 = hi;
    // 0x80014F18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80014F1C: addu        $t0, $s7, $t9
    ctx->r8 = ADD32(ctx->r23, ctx->r25);
    // 0x80014F20: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80014F24: jal         0x80014FB4
    // 0x80014F28: nop

    func_80014FB4(rdram, ctx);
        goto after_2;
    // 0x80014F28: nop

    after_2:
    // 0x80014F2C: beq         $v0, $zero, L_80014F70
    if (ctx->r2 == 0) {
        // 0x80014F30: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_80014F70;
    }
    // 0x80014F30: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80014F34: addiu       $a0, $a0, 0x4A28
    ctx->r4 = ADD32(ctx->r4, 0X4A28);
    // 0x80014F38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80014F3C: jal         0x80081F50
    // 0x80014F40: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80014F40: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_3:
    // 0x80014F44: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80014F48: nop

    // 0x80014F4C: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x80014F50: jal         0x80015164
    // 0x80014F54: nop

    func_80015164(rdram, ctx);
        goto after_4;
    // 0x80014F54: nop

    after_4:
    // 0x80014F58: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80014F5C: nop

    // 0x80014F60: lw          $s1, 0x4($t2)
    ctx->r17 = MEM_W(ctx->r10, 0X4);
    // 0x80014F64: b           L_80014F70
    // 0x80014F68: nop

        goto L_80014F70;
    // 0x80014F68: nop

L_80014F6C:
    // 0x80014F6C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80014F70:
    // 0x80014F70: beq         $s0, $zero, L_80014EC8
    if (ctx->r16 == 0) {
        // 0x80014F74: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80014EC8;
    }
    // 0x80014F74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80014F78: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80014F7C: jal         0x80081BB4
    // 0x80014F80: addiu       $a0, $a0, 0x4B40
    ctx->r4 = ADD32(ctx->r4, 0X4B40);
    func_80081BB4(rdram, ctx);
        goto after_5;
    // 0x80014F80: addiu       $a0, $a0, 0x4B40
    ctx->r4 = ADD32(ctx->r4, 0X4B40);
    after_5:
    // 0x80014F84: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80014F88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80014F8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80014F90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80014F94: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80014F98: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80014F9C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80014FA0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80014FA4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80014FA8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80014FAC: jr          $ra
    // 0x80014FB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80014FB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80014FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014FB4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80014FB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014FBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014FC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014FC4: jal         0x8001536C
    // 0x80014FC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8001536C(rdram, ctx);
        goto after_0;
    // 0x80014FC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80014FCC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80014FD0: jal         0x80082090
    // 0x80014FD4: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80014FD4: nop

    after_1:
    // 0x80014FD8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80014FDC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80014FE0: beq         $v1, $zero, L_80014FFC
    if (ctx->r3 == 0) {
        // 0x80014FE4: nop
    
            goto L_80014FFC;
    }
    // 0x80014FE4: nop

    // 0x80014FE8: lh          $a1, 0x4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X4);
    // 0x80014FEC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80014FF0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80014FF4: jal         0x80082110
    // 0x80014FF8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x80014FF8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_80014FFC:
    // 0x80014FFC: jal         0x800821C0
    // 0x80015000: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_3;
    // 0x80015000: nop

    after_3:
    // 0x80015004: lui         $t7, 0x8014
    ctx->r15 = S32(0X8014 << 16);
    // 0x80015008: lw          $t7, -0x4F5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4F5C);
    // 0x8001500C: srl         $t8, $v0, 2
    ctx->r24 = S32(U32(ctx->r2) >> 2);
    // 0x80015010: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80015014: addiu       $t2, $t9, 0x100
    ctx->r10 = ADD32(ctx->r25, 0X100);
    // 0x80015018: andi        $t3, $t2, 0xFFF0
    ctx->r11 = ctx->r10 & 0XFFF0;
    // 0x8001501C: sh          $t3, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r11;
    // 0x80015020: lui         $v1, 0x8014
    ctx->r3 = S32(0X8014 << 16);
    // 0x80015024: lw          $v1, -0x4F60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4F60);
    // 0x80015028: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x8001502C: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x80015030: sltu        $at, $a3, $v1
    ctx->r1 = ctx->r7 < ctx->r3 ? 1 : 0;
    // 0x80015034: beq         $at, $zero, L_80015048
    if (ctx->r1 == 0) {
        // 0x80015038: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_80015048;
    }
    // 0x80015038: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8001503C: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80015040: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80015044: nop

L_80015048:
    // 0x80015048: lw          $t4, -0x1C18($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C18);
    // 0x8001504C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80015050: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80015054: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80015058: lw          $a0, 0x4740($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4740);
    // 0x8001505C: jal         0x80082318
    // 0x80015060: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80082318(rdram, ctx);
        goto after_4;
    // 0x80015060: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80015064: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80015068: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8001506C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80015070: addiu       $t1, $t1, 0x4740
    ctx->r9 = ADD32(ctx->r9, 0X4740);
    // 0x80015074: addiu       $v1, $v1, -0x1C18
    ctx->r3 = ADD32(ctx->r3, -0X1C18);
    // 0x80015078: bne         $t6, $zero, L_80015088
    if (ctx->r14 != 0) {
        // 0x8001507C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80015088;
    }
    // 0x8001507C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80015080: b           L_80015154
    // 0x80015084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80015154;
    // 0x80015084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015088:
    // 0x80015088: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8001508C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80015090: addiu       $t7, $t7, 0x4A28
    ctx->r15 = ADD32(ctx->r15, 0X4A28);
    // 0x80015094: addiu       $t8, $s0, 0x60
    ctx->r24 = ADD32(ctx->r16, 0X60);
    // 0x80015098: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8001509C: sw          $t7, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r15;
    // 0x800150A0: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x800150A4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x800150A8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800150AC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800150B0: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800150B4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800150B8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x800150BC: addiu       $t0, $t0, 0x430
    ctx->r8 = ADD32(ctx->r8, 0X430);
    // 0x800150C0: sw          $t4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r12;
    // 0x800150C4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x800150C8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x800150CC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800150D0: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x800150D4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800150D8: addiu       $t4, $t4, 0x500
    ctx->r12 = ADD32(ctx->r12, 0X500);
    // 0x800150DC: subu        $t9, $a3, $t8
    ctx->r25 = SUB32(ctx->r7, ctx->r24);
    // 0x800150E0: sra         $t2, $t9, 3
    ctx->r10 = S32(SIGNED(ctx->r25) >> 3);
    // 0x800150E4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800150E8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x800150EC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800150F0: subu        $t5, $t4, $t0
    ctx->r13 = SUB32(ctx->r12, ctx->r8);
    // 0x800150F4: addiu       $t6, $t6, 0x2D00
    ctx->r14 = ADD32(ctx->r14, 0X2D00);
    // 0x800150F8: addiu       $t7, $t7, -0x3A30
    ctx->r15 = ADD32(ctx->r15, -0X3A30);
    // 0x800150FC: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80015100: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x80015104: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80015108: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x8001510C: sw          $t5, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r13;
    // 0x80015110: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80015114: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    // 0x80015118: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x8001511C: sw          $t8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r24;
    // 0x80015120: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80015124: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80015128: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8001512C: lw          $a0, -0x42E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42E0);
    // 0x80015130: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x80015134: jal         0x800828B0
    // 0x80015138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80015138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8001513C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80015140: addiu       $v1, $v1, -0x1C18
    ctx->r3 = ADD32(ctx->r3, -0X1C18);
    // 0x80015144: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80015148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001514C: xori        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 ^ 0X1;
    // 0x80015150: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_80015154:
    // 0x80015154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80015158: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001515C: jr          $ra
    // 0x80015160: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80015160: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80015164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001516C: jal         0x800821C0
    // 0x80015170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osAiGetLength_recomp(rdram, ctx);
        goto after_0;
    // 0x80015170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80015174: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x80015178: bne         $t6, $zero, L_80015194
    if (ctx->r14 != 0) {
        // 0x8001517C: lui         $t7, 0x800A
        ctx->r15 = S32(0X800A << 16);
            goto L_80015194;
    }
    // 0x8001517C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80015180: lw          $t7, -0x1C14($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1C14);
    // 0x80015184: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80015188: bne         $t7, $zero, L_80015198
    if (ctx->r15 != 0) {
        // 0x8001518C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80015198;
    }
    // 0x8001518C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015190: sw          $zero, -0x1C14($at)
    MEM_W(-0X1C14, ctx->r1) = 0;
L_80015194:
    // 0x80015194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80015198:
    // 0x80015198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001519C: jr          $ra
    // 0x800151A0: nop

    return;
    // 0x800151A0: nop

;}
RECOMP_FUNC void func_800151A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800151A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800151A8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800151AC: lui         $s1, 0x8014
    ctx->r17 = S32(0X8014 << 16);
    // 0x800151B0: addiu       $s1, $s1, -0x5470
    ctx->r17 = ADD32(ctx->r17, -0X5470);
    // 0x800151B4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800151B8: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x800151BC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800151C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800151C4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800151C8: beq         $s0, $zero, L_80015224
    if (ctx->r16 == 0) {
        // 0x800151CC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80015224;
    }
    // 0x800151CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800151D0:
    // 0x800151D0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800151D4: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x800151D8: sltu        $at, $a3, $v0
    ctx->r1 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x800151DC: bne         $at, $zero, L_80015224
    if (ctx->r1 != 0) {
        // 0x800151E0: addiu       $v1, $v0, 0x800
        ctx->r3 = ADD32(ctx->r2, 0X800);
            goto L_80015224;
    }
    // 0x800151E0: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x800151E4: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800151E8: bne         $at, $zero, L_80015214
    if (ctx->r1 != 0) {
        // 0x800151EC: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_80015214;
    }
    // 0x800151EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800151F0: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x800151F4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x800151F8: lw          $t7, -0x1C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1C20);
    // 0x800151FC: addu        $t9, $t8, $a3
    ctx->r25 = ADD32(ctx->r24, ctx->r7);
    // 0x80015200: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    // 0x80015204: jal         0x80082090
    // 0x80015208: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x80015208: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    after_0:
    // 0x8001520C: b           L_80015324
    // 0x80015210: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80015324;
    // 0x80015210: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80015214:
    // 0x80015214: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80015218: nop

    // 0x8001521C: bne         $s0, $zero, L_800151D0
    if (ctx->r16 != 0) {
        // 0x80015220: nop
    
            goto L_800151D0;
    }
    // 0x80015220: nop

L_80015224:
    // 0x80015224: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x80015228: nop

    // 0x8001522C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80015230: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x80015234: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80015238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001523C: jal         0x80081B60
    // 0x80015240: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    func_80081B60(rdram, ctx);
        goto after_1;
    // 0x80015240: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
    after_1:
    // 0x80015244: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80015248: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8001524C: beq         $a2, $zero, L_8001526C
    if (ctx->r6 == 0) {
        // 0x80015250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001526C;
    }
    // 0x80015250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80015254: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80015258: jal         0x80081B90
    // 0x8001525C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_80081B90(rdram, ctx);
        goto after_2;
    // 0x8001525C: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_2:
    // 0x80015260: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80015264: b           L_800152A0
    // 0x80015268: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
        goto L_800152A0;
    // 0x80015268: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
L_8001526C:
    // 0x8001526C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80015270: nop

    // 0x80015274: beq         $v0, $zero, L_80015290
    if (ctx->r2 == 0) {
        // 0x80015278: nop
    
            goto L_80015290;
    }
    // 0x80015278: nop

    // 0x8001527C: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80015280: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80015284: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80015288: b           L_8001529C
    // 0x8001528C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
        goto L_8001529C;
    // 0x8001528C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
L_80015290:
    // 0x80015290: sw          $s0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r16;
    // 0x80015294: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80015298: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_8001529C:
    // 0x8001529C: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
L_800152A0:
    // 0x800152A0: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x800152A4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800152A8: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x800152AC: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x800152B0: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800152B4: lw          $t2, -0x1C20($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1C20);
    // 0x800152B8: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x800152BC: addiu       $t0, $t0, -0x1C1C
    ctx->r8 = ADD32(ctx->r8, -0X1C1C);
    // 0x800152C0: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x800152C4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x800152C8: lui         $t4, 0x8014
    ctx->r12 = S32(0X8014 << 16);
    // 0x800152CC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x800152D0: lui         $t6, 0x8014
    ctx->r14 = S32(0X8014 << 16);
    // 0x800152D4: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x800152D8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800152DC: addiu       $t6, $t6, -0x4950
    ctx->r14 = ADD32(ctx->r14, -0X4950);
    // 0x800152E0: addiu       $t4, $t4, -0x4F50
    ctx->r12 = ADD32(ctx->r12, -0X4F50);
    // 0x800152E4: addiu       $t5, $zero, 0x800
    ctx->r13 = ADD32(0, 0X800);
    // 0x800152E8: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x800152EC: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800152F0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800152F4: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x800152F8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800152FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80015304: jal         0x80082A00
    // 0x80015308: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x80015308: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_3:
    // 0x8001530C: jal         0x80082090
    // 0x80015310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80015310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80015314: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80015318: nop

    // 0x8001531C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80015320: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80015324:
    // 0x80015324: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80015328: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8001532C: jr          $ra
    // 0x80015330: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80015330: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80015334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015334: lui         $v1, 0x8014
    ctx->r3 = S32(0X8014 << 16);
    // 0x80015338: addiu       $v1, $v1, -0x5470
    ctx->r3 = ADD32(ctx->r3, -0X5470);
    // 0x8001533C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80015340: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x80015344: bne         $t6, $zero, L_80015364
    if (ctx->r14 != 0) {
        // 0x80015348: addiu       $v0, $v0, 0x51A4
        ctx->r2 = ADD32(ctx->r2, 0X51A4);
            goto L_80015364;
    }
    // 0x80015348: addiu       $v0, $v0, 0x51A4
    ctx->r2 = ADD32(ctx->r2, 0X51A4);
    // 0x8001534C: lui         $t7, 0x8014
    ctx->r15 = S32(0X8014 << 16);
    // 0x80015350: addiu       $t7, $t7, -0x5460
    ctx->r15 = ADD32(ctx->r15, -0X5460);
    // 0x80015354: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80015358: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8001535C: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x80015360: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
L_80015364:
    // 0x80015364: jr          $ra
    // 0x80015368: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    return;
    // 0x80015368: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8001536C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001536C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80015370: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80015374: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80015378: addiu       $s4, $s4, -0x1C1C
    ctx->r20 = ADD32(ctx->r20, -0X1C1C);
    // 0x8001537C: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80015380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015384: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80015388: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001538C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80015390: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80015394: beq         $t6, $zero, L_800153CC
    if (ctx->r14 == 0) {
        // 0x80015398: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800153CC;
    }
    // 0x80015398: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001539C: lui         $s1, 0x8014
    ctx->r17 = S32(0X8014 << 16);
    // 0x800153A0: addiu       $s1, $s1, -0x4950
    ctx->r17 = ADD32(ctx->r17, -0X4950);
    // 0x800153A4: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x800153A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800153AC:
    // 0x800153AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800153B0: jal         0x80081F50
    // 0x800153B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800153B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800153B8: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x800153BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800153C0: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x800153C4: bne         $at, $zero, L_800153AC
    if (ctx->r1 != 0) {
        // 0x800153C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800153AC;
    }
    // 0x800153C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800153CC:
    // 0x800153CC: lui         $s2, 0x8014
    ctx->r18 = S32(0X8014 << 16);
    // 0x800153D0: addiu       $s2, $s2, -0x5470
    ctx->r18 = ADD32(ctx->r18, -0X5470);
    // 0x800153D4: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x800153D8: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x800153DC: beq         $s0, $zero, L_80015450
    if (ctx->r16 == 0) {
        // 0x800153E0: addiu       $s3, $s3, -0x1C20
        ctx->r19 = ADD32(ctx->r19, -0X1C20);
            goto L_80015450;
    }
    // 0x800153E0: addiu       $s3, $s3, -0x1C20
    ctx->r19 = ADD32(ctx->r19, -0X1C20);
L_800153E4:
    // 0x800153E4: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x800153E8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x800153EC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800153F0: addiu       $t0, $t9, 0xE
    ctx->r8 = ADD32(ctx->r25, 0XE);
    // 0x800153F4: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x800153F8: beq         $at, $zero, L_80015448
    if (ctx->r1 == 0) {
        // 0x800153FC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80015448;
    }
    // 0x800153FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80015400: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80015404: nop

    // 0x80015408: bne         $s0, $t1, L_80015414
    if (ctx->r16 != ctx->r9) {
        // 0x8001540C: nop
    
            goto L_80015414;
    }
    // 0x8001540C: nop

    // 0x80015410: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_80015414:
    // 0x80015414: jal         0x80081B60
    // 0x80015418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80081B60(rdram, ctx);
        goto after_1;
    // 0x80015418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8001541C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80015420: nop

    // 0x80015424: beq         $a1, $zero, L_8001543C
    if (ctx->r5 == 0) {
        // 0x80015428: nop
    
            goto L_8001543C;
    }
    // 0x80015428: nop

    // 0x8001542C: jal         0x80081B90
    // 0x80015430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80081B90(rdram, ctx);
        goto after_2;
    // 0x80015430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80015434: b           L_80015448
    // 0x80015438: nop

        goto L_80015448;
    // 0x80015438: nop

L_8001543C:
    // 0x8001543C: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    // 0x80015440: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80015444: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_80015448:
    // 0x80015448: bne         $s1, $zero, L_800153E4
    if (ctx->r17 != 0) {
        // 0x8001544C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800153E4;
    }
    // 0x8001544C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80015450:
    // 0x80015450: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80015454: addiu       $s3, $s3, -0x1C20
    ctx->r19 = ADD32(ctx->r19, -0X1C20);
    // 0x80015458: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x8001545C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80015460: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80015464: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80015468: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x8001546C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80015470: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80015474: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80015478: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001547C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015480: jr          $ra
    // 0x80015484: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80015484: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80015488: nop

    // 0x8001548C: nop

;}
RECOMP_FUNC void func_80015490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015490: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80015494: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80015498: lui         $s6, 0x801A
    ctx->r22 = S32(0X801A << 16);
    // 0x8001549C: addiu       $s6, $s6, -0x6818
    ctx->r22 = ADD32(ctx->r22, -0X6818);
    // 0x800154A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800154A4: lui         $a1, 0x8014
    ctx->r5 = S32(0X8014 << 16);
    // 0x800154A8: lui         $a2, 0x5
    ctx->r6 = S32(0X5 << 16);
    // 0x800154AC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800154B0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800154B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800154B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800154BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800154C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800154C4: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x800154C8: addiu       $a1, $a1, -0x4818
    ctx->r5 = ADD32(ctx->r5, -0X4818);
    // 0x800154CC: jal         0x80082B10
    // 0x800154D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80082B10(rdram, ctx);
        goto after_0;
    // 0x800154D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x800154D4: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x800154D8: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800154DC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800154E0: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x800154E4: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x800154E8: addiu       $s5, $s5, -0x192C
    ctx->r21 = ADD32(ctx->r21, -0X192C);
    // 0x800154EC: addiu       $s2, $s2, -0x193C
    ctx->r18 = ADD32(ctx->r18, -0X193C);
    // 0x800154F0: addiu       $s1, $s1, -0x6808
    ctx->r17 = ADD32(ctx->r17, -0X6808);
    // 0x800154F4: addiu       $s0, $s0, -0x195C
    ctx->r16 = ADD32(ctx->r16, -0X195C);
    // 0x800154F8: addiu       $s3, $s3, -0x194C
    ctx->r19 = ADD32(ctx->r19, -0X194C);
L_800154FC:
    // 0x800154FC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80015500: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80015504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80015508: subu        $s4, $t6, $t7
    ctx->r20 = SUB32(ctx->r14, ctx->r15);
    // 0x8001550C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80015510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015514: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80015518: jal         0x80081C20
    // 0x8001551C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x8001551C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80015520: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80015524: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80015528: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001552C: jal         0x8001B1B4
    // 0x80015530: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8001B1B4(rdram, ctx);
        goto after_2;
    // 0x80015530: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80015534: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80015538: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8001553C: jal         0x80082C54
    // 0x80015540: nop

    func_80082C54(rdram, ctx);
        goto after_3;
    // 0x80015540: nop

    after_3:
    // 0x80015544: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80015548: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001554C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80015550: bne         $s2, $s5, L_800154FC
    if (ctx->r18 != ctx->r21) {
        // 0x80015554: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800154FC;
    }
    // 0x80015554: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80015558: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8001555C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80015560: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x80015564: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80015568: ori         $t2, $zero, 0xA6DA
    ctx->r10 = 0 | 0XA6DA;
    // 0x8001556C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80015570: addiu       $t4, $zero, 0x1000
    ctx->r12 = ADD32(0, 0X1000);
    // 0x80015574: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x80015578: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8001557C: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80015580: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80015584: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x80015588: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8001558C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80015590: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80015594: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80015598: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x8001559C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x800155A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800155A4: jal         0x80014B30
    // 0x800155A8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_80014B30(rdram, ctx);
        goto after_4;
    // 0x800155A8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x800155AC: lui         $a0, 0x8014
    ctx->r4 = S32(0X8014 << 16);
    // 0x800155B0: jal         0x800155E0
    // 0x800155B4: addiu       $a0, $a0, -0x4830
    ctx->r4 = ADD32(ctx->r4, -0X4830);
    func_800155E0(rdram, ctx);
        goto after_5;
    // 0x800155B4: addiu       $a0, $a0, -0x4830
    ctx->r4 = ADD32(ctx->r4, -0X4830);
    after_5:
    // 0x800155B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800155BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800155C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800155C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800155C8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800155CC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800155D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800155D4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800155D8: jr          $ra
    // 0x800155DC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800155DC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800154B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800154B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800154B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800154BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800154C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800154C4: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x800154C8: addiu       $a1, $a1, -0x4818
    ctx->r5 = ADD32(ctx->r5, -0X4818);
    // 0x800154CC: jal         0x80082B10
    // 0x800154D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80082B10(rdram, ctx);
        goto after_0;
    // 0x800154D0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x800154D4: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x800154D8: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800154DC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800154E0: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x800154E4: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x800154E8: addiu       $s5, $s5, -0x192C
    ctx->r21 = ADD32(ctx->r21, -0X192C);
    // 0x800154EC: addiu       $s2, $s2, -0x193C
    ctx->r18 = ADD32(ctx->r18, -0X193C);
    // 0x800154F0: addiu       $s1, $s1, -0x6808
    ctx->r17 = ADD32(ctx->r17, -0X6808);
    // 0x800154F4: addiu       $s0, $s0, -0x195C
    ctx->r16 = ADD32(ctx->r16, -0X195C);
    // 0x800154F8: addiu       $s3, $s3, -0x194C
    ctx->r19 = ADD32(ctx->r19, -0X194C);
L_800154FC:
    // 0x800154FC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80015500: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80015504: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80015508: subu        $s4, $t6, $t7
    ctx->r20 = SUB32(ctx->r14, ctx->r15);
    // 0x8001550C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80015510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015514: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80015518: jal         0x80081C20
    // 0x8001551C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x8001551C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80015520: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80015524: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80015528: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001552C: jal         0x8001B1B4
    // 0x80015530: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8001B1B4(rdram, ctx);
        goto after_2;
    // 0x80015530: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80015534: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80015538: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8001553C: jal         0x80082C54
    // 0x80015540: nop

    func_80082C54(rdram, ctx);
        goto after_3;
    // 0x80015540: nop

    after_3:
    // 0x80015544: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80015548: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001554C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80015550: bne         $s2, $s5, L_800154FC
    if (ctx->r18 != ctx->r21) {
        // 0x80015554: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800154FC;
    }
    // 0x80015554: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80015558: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x8001555C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80015560: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x80015564: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80015568: ori         $t2, $zero, 0xA6DA
    ctx->r10 = 0 | 0XA6DA;
    // 0x8001556C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80015570: addiu       $t4, $zero, 0x1000
    ctx->r12 = ADD32(0, 0X1000);
    // 0x80015574: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x80015578: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8001557C: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    // 0x80015580: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80015584: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x80015588: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8001558C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80015590: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x80015594: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80015598: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x8001559C: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x800155A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800155A4: jal         0x80014B30
    // 0x800155A8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_80014B30(rdram, ctx);
        goto after_4;
    // 0x800155A8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x800155AC: lui         $a0, 0x8014
    ctx->r4 = S32(0X8014 << 16);
    // 0x800155B0: jal         0x800155E0
    // 0x800155B4: addiu       $a0, $a0, -0x4830
    ctx->r4 = ADD32(ctx->r4, -0X4830);
    func_800155E0(rdram, ctx);
        goto after_5;
    // 0x800155B4: addiu       $a0, $a0, -0x4830
    ctx->r4 = ADD32(ctx->r4, -0X4830);
    after_5:
    // 0x800155B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800155BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800155C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800155C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800155C8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800155CC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800155D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800155D4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800155D8: jr          $ra
    // 0x800155DC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800155DC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800155E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800155E0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800155E4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800155E8: sb          $t6, -0x67F8($at)
    MEM_B(-0X67F8, ctx->r1) = ctx->r14;
    // 0x800155EC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800155F0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800155F4: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x800155F8: lui         $a3, 0x801A
    ctx->r7 = S32(0X801A << 16);
    // 0x800155FC: addiu       $a3, $a3, -0x67D3
    ctx->r7 = ADD32(ctx->r7, -0X67D3);
    // 0x80015600: addiu       $a2, $a2, -0x67F3
    ctx->r6 = ADD32(ctx->r6, -0X67F3);
    // 0x80015604: addiu       $v1, $v1, -0x67F0
    ctx->r3 = ADD32(ctx->r3, -0X67F0);
    // 0x80015608: addiu       $v0, $v0, -0x67D4
    ctx->r2 = ADD32(ctx->r2, -0X67D4);
    // 0x8001560C: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015610: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80015614: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80015618: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x8001561C: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x80015620: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80015624: andi        $t1, $zero, 0xFF
    ctx->r9 = 0 & 0XFF;
    // 0x80015628: addiu       $t0, $t0, -0x67F2
    ctx->r8 = ADD32(ctx->r8, -0X67F2);
    // 0x8001562C: sh          $t1, -0x67F6($at)
    MEM_H(-0X67F6, ctx->r1) = ctx->r9;
    // 0x80015630: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x80015634: lb          $t2, 0x0($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X0);
    // 0x80015638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001563C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80015640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015644: sb          $t2, -0x67F1($at)
    MEM_B(-0X67F1, ctx->r1) = ctx->r10;
    // 0x80015648: lui         $t3, 0x8001
    ctx->r11 = S32(0X8001 << 16);
    // 0x8001564C: addiu       $t3, $t3, 0x5680
    ctx->r11 = ADD32(ctx->r11, 0X5680);
    // 0x80015650: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80015654: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80015658: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x8001565C: sw          $a0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r4;
    // 0x80015660: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80015664: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80015668: jal         0x80082DA0
    // 0x8001566C: nop

    func_80082DA0(rdram, ctx);
        goto after_0;
    // 0x8001566C: nop

    after_0:
    // 0x80015670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015678: jr          $ra
    // 0x8001567C: nop

    return;
    // 0x8001567C: nop

;}
RECOMP_FUNC void func_80015680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015680: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80015684: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80015688: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8001568C: addiu       $s0, $s0, -0x67F8
    ctx->r16 = ADD32(ctx->r16, -0X67F8);
    // 0x80015690: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80015694: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80015698: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001569C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800156A0: beq         $v0, $zero, L_800156D0
    if (ctx->r2 == 0) {
        // 0x800156A4: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_800156D0;
    }
    // 0x800156A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800156A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800156AC: bne         $v0, $at, L_800156C8
    if (ctx->r2 != ctx->r1) {
        // 0x800156B0: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_800156C8;
    }
    // 0x800156B0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800156B4: jal         0x80015780
    // 0x800156B8: nop

    func_80015780(rdram, ctx);
        goto after_0;
    // 0x800156B8: nop

    after_0:
    // 0x800156BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800156C0: nop

    // 0x800156C4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
L_800156C8:
    // 0x800156C8: b           L_80015764
    // 0x800156CC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
        goto L_80015764;
    // 0x800156CC: sb          $t6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r14;
L_800156D0:
    // 0x800156D0: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x800156D4: lhu         $t7, -0x67AC($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X67AC);
    // 0x800156D8: nop

    // 0x800156DC: beq         $t7, $zero, L_800156EC
    if (ctx->r15 == 0) {
        // 0x800156E0: nop
    
            goto L_800156EC;
    }
    // 0x800156E0: nop

    // 0x800156E4: jal         0x80016594
    // 0x800156E8: nop

    func_80016594(rdram, ctx);
        goto after_1;
    // 0x800156E8: nop

    after_1:
L_800156EC:
    // 0x800156EC: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x800156F0: lbu         $t8, -0x67F7($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X67F7);
    // 0x800156F4: nop

    // 0x800156F8: bne         $t8, $zero, L_80015708
    if (ctx->r24 != 0) {
        // 0x800156FC: nop
    
            goto L_80015708;
    }
    // 0x800156FC: nop

    // 0x80015700: jal         0x80015CE4
    // 0x80015704: nop

    func_80015CE4(rdram, ctx);
        goto after_2;
    // 0x80015704: nop

    after_2:
L_80015708:
    // 0x80015708: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x8001570C: addiu       $s1, $s1, -0x3B58
    ctx->r17 = ADD32(ctx->r17, -0X3B58);
    // 0x80015710: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80015714: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80015718:
    // 0x80015718: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x8001571C: nop

    // 0x80015720: beq         $t9, $zero, L_80015730
    if (ctx->r25 == 0) {
        // 0x80015724: nop
    
            goto L_80015730;
    }
    // 0x80015724: nop

    // 0x80015728: jal         0x8001608C
    // 0x8001572C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001608C(rdram, ctx);
        goto after_3;
    // 0x8001572C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80015730:
    // 0x80015730: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80015734: bne         $s0, $s2, L_80015718
    if (ctx->r16 != ctx->r18) {
        // 0x80015738: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80015718;
    }
    // 0x80015738: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x8001573C: jal         0x80015A9C
    // 0x80015740: nop

    func_80015A9C(rdram, ctx);
        goto after_4;
    // 0x80015740: nop

    after_4:
    // 0x80015744: jal         0x80016F70
    // 0x80015748: nop

    func_80016F70(rdram, ctx);
        goto after_5;
    // 0x80015748: nop

    after_5:
    // 0x8001574C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015750: addiu       $v0, $v0, -0x67F6
    ctx->r2 = ADD32(ctx->r2, -0X67F6);
    // 0x80015754: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80015758: nop

    // 0x8001575C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80015760: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
L_80015764:
    // 0x80015764: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80015768: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001576C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80015770: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80015774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80015778: jr          $ra
    // 0x8001577C: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    return;
    // 0x8001577C: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
;}
RECOMP_FUNC void func_80015780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015780: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80015784: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80015788: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8001578C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80015790: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80015794: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80015798: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8001579C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800157A0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800157A4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x800157A8: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x800157AC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800157B0: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x800157B4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x800157B8: lui         $s5, 0x801A
    ctx->r21 = S32(0X801A << 16);
    // 0x800157BC: lui         $s7, 0x801A
    ctx->r23 = S32(0X801A << 16);
    // 0x800157C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800157C4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800157C8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800157CC: addiu       $s7, $s7, -0x5B68
    ctx->r23 = ADD32(ctx->r23, -0X5B68);
    // 0x800157D0: addiu       $s5, $s5, -0x6808
    ctx->r21 = ADD32(ctx->r21, -0X6808);
    // 0x800157D4: addiu       $s3, $s3, 0x1890
    ctx->r19 = ADD32(ctx->r19, 0X1890);
    // 0x800157D8: addiu       $s2, $s2, -0x65A8
    ctx->r18 = ADD32(ctx->r18, -0X65A8);
    // 0x800157DC: addiu       $s1, $s1, -0x6768
    ctx->r17 = ADD32(ctx->r17, -0X6768);
    // 0x800157E0: addiu       $s0, $s0, -0x5B68
    ctx->r16 = ADD32(ctx->r16, -0X5B68);
    // 0x800157E4: addiu       $s4, $sp, 0x70
    ctx->r20 = ADD32(ctx->r29, 0X70);
    // 0x800157E8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_800157EC:
    // 0x800157EC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x800157F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800157F4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800157F8: sh          $t6, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r14;
    // 0x800157FC: sh          $t7, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r15;
    // 0x80015800: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x80015804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80015808: jal         0x80082ED8
    // 0x8001580C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80082ED8(rdram, ctx);
        goto after_0;
    // 0x8001580C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x80015810: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x80015814: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
    // 0x80015818: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8001581C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80015820: lbu         $t9, 0xD($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XD);
    // 0x80015824: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80015828: sb          $t9, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r25;
    // 0x8001582C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80015830: nop

    // 0x80015834: lbu         $t2, 0xC($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XC);
    // 0x80015838: lbu         $t6, 0xD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD);
    // 0x8001583C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80015840: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x80015844: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80015848: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001584C: lw          $v1, 0x4($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X4);
    // 0x80015850: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x80015854: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80015858: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x8001585C: nop

    // 0x80015860: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x80015864: nop

    // 0x80015868: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x8001586C: nop

    // 0x80015870: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x80015874: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80015878: nop

    // 0x8001587C: sb          $s6, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r22;
    // 0x80015880: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80015884: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80015888: lw          $a2, 0x14($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X14);
    // 0x8001588C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80015890: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80015894: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80015898: jal         0x80083020
    // 0x8001589C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80083020(rdram, ctx);
        goto after_1;
    // 0x8001589C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x800158A0: addiu       $s2, $s2, 0xA4
    ctx->r18 = ADD32(ctx->r18, 0XA4);
    // 0x800158A4: bne         $s2, $s7, L_800157EC
    if (ctx->r18 != ctx->r23) {
        // 0x800158A8: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_800157EC;
    }
    // 0x800158A8: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
    // 0x800158AC: jal         0x8001698C
    // 0x800158B0: nop

    func_8001698C(rdram, ctx);
        goto after_2;
    // 0x800158B0: nop

    after_2:
    // 0x800158B4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800158B8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800158BC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800158C0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800158C4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800158C8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800158CC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800158D0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x800158D4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x800158D8: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x800158DC: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x800158E0: jr          $ra
    // 0x800158E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800158E4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800158E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800158E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800158EC: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x800158F0: addiu       $a1, $t7, 0x1
    ctx->r5 = ADD32(ctx->r15, 0X1);
    // 0x800158F4: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x800158F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800158FC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80015900: slti        $at, $v0, 0x101
    ctx->r1 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x80015904: bne         $at, $zero, L_80015910
    if (ctx->r1 != 0) {
        // 0x80015908: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80015910;
    }
    // 0x80015908: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001590C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80015910:
    // 0x80015910: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x80015914: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80015918: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x8001591C: sra         $t9, $a1, 8
    ctx->r25 = S32(SIGNED(ctx->r5) >> 8);
    // 0x80015920: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    // 0x80015924: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80015928: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8001592C: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80015930: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80015934: sh          $t0, -0x3B50($at)
    MEM_H(-0X3B50, ctx->r1) = ctx->r8;
    // 0x80015938: slti        $at, $t0, 0x6F
    ctx->r1 = SIGNED(ctx->r8) < 0X6F ? 1 : 0;
    // 0x8001593C: bne         $at, $zero, L_80015968
    if (ctx->r1 != 0) {
        // 0x80015940: addiu       $t1, $t0, -0x6E
        ctx->r9 = ADD32(ctx->r8, -0X6E);
            goto L_80015968;
    }
    // 0x80015940: addiu       $t1, $t0, -0x6E
    ctx->r9 = ADD32(ctx->r8, -0X6E);
    // 0x80015944: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x80015948: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
    // 0x8001594C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80015950: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80015954: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80015958: mflo        $t3
    ctx->r11 = lo;
    // 0x8001595C: sh          $t3, -0x3B4C($at)
    MEM_H(-0X3B4C, ctx->r1) = ctx->r11;
    // 0x80015960: jr          $ra
    // 0x80015964: nop

    return;
    // 0x80015964: nop

L_80015968:
    // 0x80015968: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8001596C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80015970: sh          $zero, -0x3B4C($at)
    MEM_H(-0X3B4C, ctx->r1) = 0;
    // 0x80015974: jr          $ra
    // 0x80015978: nop

    return;
    // 0x80015978: nop

;}
RECOMP_FUNC void func_8001597C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001597C: lui         $a3, 0x801A
    ctx->r7 = S32(0X801A << 16);
    // 0x80015980: addiu       $a3, $a3, -0x5B68
    ctx->r7 = ADD32(ctx->r7, -0X5B68);
    // 0x80015984: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80015988: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001598C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80015990: lhu         $a2, 0xA2($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0XA2);
    // 0x80015994: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80015998: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x8001599C: beq         $t7, $a2, L_80015A6C
    if (ctx->r15 == ctx->r6) {
        // 0x800159A0: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80015A6C;
    }
    // 0x800159A0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800159A4: slt         $at, $a2, $t7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800159A8: beq         $at, $zero, L_800159DC
    if (ctx->r1 == 0) {
        // 0x800159AC: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_800159DC;
    }
    // 0x800159AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800159B0: lbu         $t8, 0x6($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X6);
    // 0x800159B4: nop

    // 0x800159B8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x800159BC: sb          $t9, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r25;
    // 0x800159C0: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x800159C4: nop

    // 0x800159C8: lhu         $t0, 0xA2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XA2);
    // 0x800159CC: nop

    // 0x800159D0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800159D4: b           L_80015A6C
    // 0x800159D8: sh          $t1, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r9;
        goto L_80015A6C;
    // 0x800159D8: sh          $t1, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r9;
L_800159DC:
    // 0x800159DC: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x800159E0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800159E4: bne         $t2, $at, L_80015A30
    if (ctx->r10 != ctx->r1) {
        // 0x800159E8: lui         $t9, 0x801A
        ctx->r25 = S32(0X801A << 16);
            goto L_80015A30;
    }
    // 0x800159E8: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x800159EC: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x800159F0: lhu         $t3, -0x67F6($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X67F6);
    // 0x800159F4: nop

    // 0x800159F8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x800159FC: bne         $t4, $zero, L_80015A6C
    if (ctx->r12 != 0) {
        // 0x80015A00: nop
    
            goto L_80015A6C;
    }
    // 0x80015A00: nop

    // 0x80015A04: lbu         $t5, 0x6($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X6);
    // 0x80015A08: nop

    // 0x80015A0C: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x80015A10: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
    // 0x80015A14: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80015A18: nop

    // 0x80015A1C: lhu         $t7, 0xA2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XA2);
    // 0x80015A20: nop

    // 0x80015A24: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80015A28: b           L_80015A6C
    // 0x80015A2C: sh          $t8, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r24;
        goto L_80015A6C;
    // 0x80015A2C: sh          $t8, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r24;
L_80015A30:
    // 0x80015A30: lhu         $t9, -0x67F6($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X67F6);
    // 0x80015A34: nop

    // 0x80015A38: andi        $t0, $t9, 0x7
    ctx->r8 = ctx->r25 & 0X7;
    // 0x80015A3C: bne         $t0, $zero, L_80015A6C
    if (ctx->r8 != 0) {
        // 0x80015A40: nop
    
            goto L_80015A6C;
    }
    // 0x80015A40: nop

    // 0x80015A44: lbu         $t1, 0x6($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X6);
    // 0x80015A48: nop

    // 0x80015A4C: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x80015A50: sb          $t2, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r10;
    // 0x80015A54: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80015A58: nop

    // 0x80015A5C: lhu         $t3, 0xA2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA2);
    // 0x80015A60: nop

    // 0x80015A64: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80015A68: sh          $t4, 0xA2($v1)
    MEM_H(0XA2, ctx->r3) = ctx->r12;
L_80015A6C:
    // 0x80015A6C: beq         $a0, $zero, L_80015A94
    if (ctx->r4 == 0) {
        // 0x80015A70: nop
    
            goto L_80015A94;
    }
    // 0x80015A70: nop

    // 0x80015A74: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80015A78: nop

    // 0x80015A7C: lbu         $v0, 0x6($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X6);
    // 0x80015A80: nop

    // 0x80015A84: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x80015A88: beq         $t5, $zero, L_80015A94
    if (ctx->r13 == 0) {
        // 0x80015A8C: ori         $t6, $v0, 0x2
        ctx->r14 = ctx->r2 | 0X2;
            goto L_80015A94;
    }
    // 0x80015A8C: ori         $t6, $v0, 0x2
    ctx->r14 = ctx->r2 | 0X2;
    // 0x80015A90: sb          $t6, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r14;
L_80015A94:
    // 0x80015A94: jr          $ra
    // 0x80015A98: nop

    return;
    // 0x80015A98: nop

;}
RECOMP_FUNC void func_80015A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015AA0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80015AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015AA8: lhu         $a1, 0x38C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X38C8);
    // 0x80015AAC: jal         0x800158E8
    // 0x80015AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800158E8(rdram, ctx);
        goto after_0;
    // 0x80015AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80015AB4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80015AB8: lhu         $a1, 0x38CA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X38CA);
    // 0x80015ABC: jal         0x800158E8
    // 0x80015AC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800158E8(rdram, ctx);
        goto after_1;
    // 0x80015AC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80015AC4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015AC8: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80015ACC: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80015AD0: addiu       $t6, $t6, -0x63BC
    ctx->r14 = ADD32(ctx->r14, -0X63BC);
    // 0x80015AD4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80015AD8: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80015ADC: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x80015AE0: bne         $t8, $at, L_80015AFC
    if (ctx->r24 != ctx->r1) {
        // 0x80015AE4: lui         $a1, 0x801A
        ctx->r5 = S32(0X801A << 16);
            goto L_80015AFC;
    }
    // 0x80015AE4: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80015AE8: lhu         $a1, -0x3B50($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3B50);
    // 0x80015AEC: jal         0x8001597C
    // 0x80015AF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001597C(rdram, ctx);
        goto after_2;
    // 0x80015AF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80015AF4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015AF8: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
L_80015AFC:
    // 0x80015AFC: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x80015B00: addiu       $t9, $t9, -0x6318
    ctx->r25 = ADD32(ctx->r25, -0X6318);
    // 0x80015B04: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80015B08: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80015B0C: addiu       $at, $zero, 0x201
    ctx->r1 = ADD32(0, 0X201);
    // 0x80015B10: bne         $t1, $at, L_80015B2C
    if (ctx->r9 != ctx->r1) {
        // 0x80015B14: lui         $a1, 0x801A
        ctx->r5 = S32(0X801A << 16);
            goto L_80015B2C;
    }
    // 0x80015B14: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80015B18: lhu         $a1, -0x3B4C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3B4C);
    // 0x80015B1C: jal         0x8001597C
    // 0x80015B20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001597C(rdram, ctx);
        goto after_3;
    // 0x80015B20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80015B24: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015B28: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
L_80015B2C:
    // 0x80015B2C: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80015B30: addiu       $t2, $t2, -0x6088
    ctx->r10 = ADD32(ctx->r10, -0X6088);
    // 0x80015B34: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80015B38: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x80015B3C: addiu       $at, $zero, 0x202
    ctx->r1 = ADD32(0, 0X202);
    // 0x80015B40: bne         $t4, $at, L_80015B5C
    if (ctx->r12 != ctx->r1) {
        // 0x80015B44: lui         $a1, 0x801A
        ctx->r5 = S32(0X801A << 16);
            goto L_80015B5C;
    }
    // 0x80015B44: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80015B48: lhu         $a1, -0x3B4E($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3B4E);
    // 0x80015B4C: jal         0x8001597C
    // 0x80015B50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001597C(rdram, ctx);
        goto after_4;
    // 0x80015B50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80015B54: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015B58: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
L_80015B5C:
    // 0x80015B5C: lui         $t5, 0x801A
    ctx->r13 = S32(0X801A << 16);
    // 0x80015B60: addiu       $t5, $t5, -0x5FE4
    ctx->r13 = ADD32(ctx->r13, -0X5FE4);
    // 0x80015B64: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80015B68: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80015B6C: addiu       $at, $zero, 0x203
    ctx->r1 = ADD32(0, 0X203);
    // 0x80015B70: bne         $t7, $at, L_80015B84
    if (ctx->r15 != ctx->r1) {
        // 0x80015B74: lui         $a1, 0x801A
        ctx->r5 = S32(0X801A << 16);
            goto L_80015B84;
    }
    // 0x80015B74: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80015B78: lhu         $a1, -0x3B4A($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3B4A);
    // 0x80015B7C: jal         0x8001597C
    // 0x80015B80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001597C(rdram, ctx);
        goto after_5;
    // 0x80015B80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_80015B84:
    // 0x80015B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015B8C: jr          $ra
    // 0x80015B90: nop

    return;
    // 0x80015B90: nop

;}
RECOMP_FUNC void func_80015B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015B9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80015BA0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80015BA4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80015BA8: jal         0x80015BEC
    // 0x80015BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x80015BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80015BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015BB8: jr          $ra
    // 0x80015BBC: nop

    return;
    // 0x80015BBC: nop

;}
RECOMP_FUNC void func_80015BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015BC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80015BCC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80015BD0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80015BD4: jal         0x80015BEC
    // 0x80015BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x80015BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80015BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80015BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80015BE4: jr          $ra
    // 0x80015BE8: nop

    return;
    // 0x80015BE8: nop

;}
RECOMP_FUNC void func_80015BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015BEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80015BF0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80015BF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80015BF8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80015BFC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80015C00: beq         $t6, $zero, L_80015CDC
    if (ctx->r14 == 0) {
        // 0x80015C04: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80015CDC;
    }
    // 0x80015C04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80015C08: lui         $a3, 0x801A
    ctx->r7 = S32(0X801A << 16);
    // 0x80015C0C: addiu       $a3, $a3, -0x67F7
    ctx->r7 = ADD32(ctx->r7, -0X67F7);
    // 0x80015C10: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80015C14: slti        $at, $t6, 0x400
    ctx->r1 = SIGNED(ctx->r14) < 0X400 ? 1 : 0;
    // 0x80015C18: bne         $at, $zero, L_80015C28
    if (ctx->r1 != 0) {
        // 0x80015C1C: sb          $t8, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r24;
            goto L_80015C28;
    }
    // 0x80015C1C: sb          $t8, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r24;
    // 0x80015C20: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80015C24: sw          $t6, -0x3B48($at)
    MEM_W(-0X3B48, ctx->r1) = ctx->r14;
L_80015C28:
    // 0x80015C28: beq         $a1, $zero, L_80015C3C
    if (ctx->r5 == 0) {
        // 0x80015C2C: lui         $t0, 0x801A
        ctx->r8 = S32(0X801A << 16);
            goto L_80015C3C;
    }
    // 0x80015C2C: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015C30: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x80015C34: bne         $at, $zero, L_80015C44
    if (ctx->r1 != 0) {
        // 0x80015C38: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80015C44;
    }
    // 0x80015C38: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80015C3C:
    // 0x80015C3C: b           L_80015C70
    // 0x80015C40: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_80015C70;
    // 0x80015C40: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80015C44:
    // 0x80015C44: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x80015C48: beq         $at, $zero, L_80015C5C
    if (ctx->r1 == 0) {
        // 0x80015C4C: slti        $at, $v0, 0x6C
        ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
            goto L_80015C5C;
    }
    // 0x80015C4C: slti        $at, $v0, 0x6C
    ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
    // 0x80015C50: b           L_80015C68
    // 0x80015C54: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80015C68;
    // 0x80015C54: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80015C58: slti        $at, $v0, 0x6C
    ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
L_80015C5C:
    // 0x80015C5C: bne         $at, $zero, L_80015C6C
    if (ctx->r1 != 0) {
        // 0x80015C60: sll         $t9, $v0, 16
        ctx->r25 = S32(ctx->r2 << 16);
            goto L_80015C6C;
    }
    // 0x80015C60: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80015C64: addiu       $v0, $zero, 0x6B
    ctx->r2 = ADD32(0, 0X6B);
L_80015C68:
    // 0x80015C68: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
L_80015C6C:
    // 0x80015C6C: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
L_80015C70:
    // 0x80015C70: addiu       $t0, $t0, -0x67D3
    ctx->r8 = ADD32(ctx->r8, -0X67D3);
    // 0x80015C74: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80015C78: nop

    // 0x80015C7C: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80015C80: beq         $at, $zero, L_80015CD8
    if (ctx->r1 == 0) {
        // 0x80015C84: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80015CD8;
    }
    // 0x80015C84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80015C88: beq         $v0, $zero, L_80015CC4
    if (ctx->r2 == 0) {
        // 0x80015C8C: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_80015CC4;
    }
    // 0x80015C8C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80015C90: blez        $a0, L_80015CC0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80015C94: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80015CC0;
    }
    // 0x80015C94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80015C98: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x80015C9C: addiu       $a2, $a2, -0x67D0
    ctx->r6 = ADD32(ctx->r6, -0X67D0);
L_80015CA0:
    // 0x80015CA0: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80015CA4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80015CA8: bne         $v1, $t1, L_80015CB8
    if (ctx->r3 != ctx->r9) {
        // 0x80015CAC: slt         $at, $a1, $a0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80015CB8;
    }
    // 0x80015CAC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80015CB0: jr          $ra
    // 0x80015CB4: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    return;
    // 0x80015CB4: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_80015CB8:
    // 0x80015CB8: bne         $at, $zero, L_80015CA0
    if (ctx->r1 != 0) {
        // 0x80015CBC: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80015CA0;
    }
    // 0x80015CBC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_80015CC0:
    // 0x80015CC0: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
L_80015CC4:
    // 0x80015CC4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80015CC8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80015CCC: sw          $v1, -0x67D0($at)
    MEM_W(-0X67D0, ctx->r1) = ctx->r3;
    // 0x80015CD0: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80015CD4: sb          $t3, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r11;
L_80015CD8:
    // 0x80015CD8: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
L_80015CDC:
    // 0x80015CDC: jr          $ra
    // 0x80015CE0: nop

    return;
    // 0x80015CE0: nop

;}
RECOMP_FUNC void func_80015CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015CE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80015CE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80015CEC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80015CF0: addiu       $s1, $s1, -0x67D3
    ctx->r17 = ADD32(ctx->r17, -0X67D3);
    // 0x80015CF4: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80015CF8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80015CFC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80015D00: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80015D04: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80015D08: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80015D0C: beq         $a0, $zero, L_80015DCC
    if (ctx->r4 == 0) {
        // 0x80015D10: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80015DCC;
    }
    // 0x80015D10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80015D14: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80015D18: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80015D1C: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x80015D20: addiu       $s2, $s2, -0x67B0
    ctx->r18 = ADD32(ctx->r18, -0X67B0);
    // 0x80015D24: addiu       $s3, $s3, -0x18AC
    ctx->r19 = ADD32(ctx->r19, -0X18AC);
    // 0x80015D28: addiu       $s0, $s0, -0x67D0
    ctx->r16 = ADD32(ctx->r16, -0X67D0);
    // 0x80015D2C: addiu       $s5, $zero, 0x20F
    ctx->r21 = ADD32(0, 0X20F);
    // 0x80015D30: ori         $s4, $zero, 0x8000
    ctx->r20 = 0 | 0X8000;
L_80015D34:
    // 0x80015D34: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80015D38: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x80015D3C: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x80015D40: slti        $at, $t8, 0x100
    ctx->r1 = SIGNED(ctx->r24) < 0X100 ? 1 : 0;
    // 0x80015D44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80015D48: sb          $t9, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r25;
    // 0x80015D4C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80015D50: beq         $at, $zero, L_80015D90
    if (ctx->r1 == 0) {
        // 0x80015D54: sw          $t7, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r15;
            goto L_80015D90;
    }
    // 0x80015D54: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x80015D58: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x80015D5C: beq         $at, $zero, L_80015D80
    if (ctx->r1 == 0) {
        // 0x80015D60: sll         $t0, $t8, 2
        ctx->r8 = S32(ctx->r24 << 2);
            goto L_80015D80;
    }
    // 0x80015D60: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80015D64: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x80015D68: lw          $t9, -0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, -0X4);
    // 0x80015D6C: nop

    // 0x80015D70: jalr        $t9
    // 0x80015D74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80015D74: nop

    after_0:
    // 0x80015D78: b           L_80015DC0
    // 0x80015D7C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
        goto L_80015DC0;
    // 0x80015D7C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
L_80015D80:
    // 0x80015D80: jal         0x800164A0
    // 0x80015D84: nop

    func_800164A0(rdram, ctx);
        goto after_1;
    // 0x80015D84: nop

    after_1:
    // 0x80015D88: b           L_80015DC0
    // 0x80015D8C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
        goto L_80015DC0;
    // 0x80015D8C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
L_80015D90:
    // 0x80015D90: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80015D94: beq         $at, $zero, L_80015DB4
    if (ctx->r1 == 0) {
        // 0x80015D98: nop
    
            goto L_80015DB4;
    }
    // 0x80015D98: nop

    // 0x80015D9C: beq         $s5, $v0, L_80015DBC
    if (ctx->r21 == ctx->r2) {
        // 0x80015DA0: nop
    
            goto L_80015DBC;
    }
    // 0x80015DA0: nop

    // 0x80015DA4: jal         0x80015DF0
    // 0x80015DA8: nop

    func_80015DF0(rdram, ctx);
        goto after_2;
    // 0x80015DA8: nop

    after_2:
    // 0x80015DAC: b           L_80015DC0
    // 0x80015DB0: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
        goto L_80015DC0;
    // 0x80015DB0: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
L_80015DB4:
    // 0x80015DB4: jal         0x80016E44
    // 0x80015DB8: nop

    func_80016E44(rdram, ctx);
        goto after_3;
    // 0x80015DB8: nop

    after_3:
L_80015DBC:
    // 0x80015DBC: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
L_80015DC0:
    // 0x80015DC0: nop

    // 0x80015DC4: bne         $a0, $zero, L_80015D34
    if (ctx->r4 != 0) {
        // 0x80015DC8: nop
    
            goto L_80015D34;
    }
    // 0x80015DC8: nop

L_80015DCC:
    // 0x80015DCC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80015DD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80015DD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80015DD8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80015DDC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80015DE0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80015DE4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80015DE8: jr          $ra
    // 0x80015DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80015DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80015DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015DF0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80015DF4: lw          $a0, -0x67B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67B0);
    // 0x80015DF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80015DFC: andi        $t6, $a0, 0x7FFF
    ctx->r14 = ctx->r4 & 0X7FFF;
    // 0x80015E00: slti        $at, $t6, 0x200
    ctx->r1 = SIGNED(ctx->r14) < 0X200 ? 1 : 0;
    // 0x80015E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80015E08: bne         $at, $zero, L_80015F34
    if (ctx->r1 != 0) {
        // 0x80015E0C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80015F34;
    }
    // 0x80015E0C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80015E10: slti        $at, $t6, 0x5F3
    ctx->r1 = SIGNED(ctx->r14) < 0X5F3 ? 1 : 0;
    // 0x80015E14: beq         $at, $zero, L_80016074
    if (ctx->r1 == 0) {
        // 0x80015E18: lui         $t0, 0x801A
        ctx->r8 = S32(0X801A << 16);
            goto L_80016074;
    }
    // 0x80015E18: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015E1C: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80015E20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80015E24: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80015E28: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x80015E2C: lw          $a1, -0x1C14($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C14);
    // 0x80015E30: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x80015E34: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80015E38: addu        $t1, $a1, $t2
    ctx->r9 = ADD32(ctx->r5, ctx->r10);
    // 0x80015E3C: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x80015E40: addiu       $t0, $t0, -0x67E0
    ctx->r8 = ADD32(ctx->r8, -0X67E0);
    // 0x80015E44: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80015E48: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x80015E4C: bne         $v1, $at, L_80015E64
    if (ctx->r3 != ctx->r1) {
        // 0x80015E50: sb          $t3, 0x2($t0)
        MEM_B(0X2, ctx->r8) = ctx->r11;
            goto L_80015E64;
    }
    // 0x80015E50: sb          $t3, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r11;
    // 0x80015E54: jal         0x80016084
    // 0x80015E58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016084(rdram, ctx);
        goto after_0;
    // 0x80015E58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80015E5C: b           L_80016078
    // 0x80015E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80016078;
    // 0x80015E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80015E64:
    // 0x80015E64: andi        $t4, $v1, 0x1F
    ctx->r12 = ctx->r3 & 0X1F;
    // 0x80015E68: sb          $t4, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r12;
    // 0x80015E6C: lbu         $a3, 0x1($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X1);
    // 0x80015E70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80015E74: andi        $t5, $a3, 0xF
    ctx->r13 = ctx->r7 & 0XF;
    // 0x80015E78: sra         $a3, $a3, 4
    ctx->r7 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80015E7C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    // 0x80015E80: sb          $t5, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r13;
    // 0x80015E84: bne         $a2, $zero, L_80015EE0
    if (ctx->r6 != 0) {
        // 0x80015E88: or          $a3, $a2, $zero
        ctx->r7 = ctx->r6 | 0;
            goto L_80015EE0;
    }
    // 0x80015E88: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80015E8C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80015E90: addiu       $v1, $v1, -0x6318
    ctx->r3 = ADD32(ctx->r3, -0X6318);
    // 0x80015E94: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_80015E98:
    // 0x80015E98: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80015E9C: nop

    // 0x80015EA0: bne         $a0, $t7, L_80015EB4
    if (ctx->r4 != ctx->r15) {
        // 0x80015EA4: nop
    
            goto L_80015EB4;
    }
    // 0x80015EA4: nop

    // 0x80015EA8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x80015EAC: b           L_80015EC0
    // 0x80015EB0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
        goto L_80015EC0;
    // 0x80015EB0: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
L_80015EB4:
    // 0x80015EB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80015EB8: bne         $v0, $a1, L_80015E98
    if (ctx->r2 != ctx->r5) {
        // 0x80015EBC: addiu       $v1, $v1, 0xA4
        ctx->r3 = ADD32(ctx->r3, 0XA4);
            goto L_80015E98;
    }
    // 0x80015EBC: addiu       $v1, $v1, 0xA4
    ctx->r3 = ADD32(ctx->r3, 0XA4);
L_80015EC0:
    // 0x80015EC0: bne         $a2, $zero, L_80015EE0
    if (ctx->r6 != 0) {
        // 0x80015EC4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80015EE0;
    }
    // 0x80015EC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80015EC8: jal         0x80016388
    // 0x80015ECC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_80016388(rdram, ctx);
        goto after_1;
    // 0x80015ECC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_1:
    // 0x80015ED0: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015ED4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80015ED8: addiu       $t0, $t0, -0x67E0
    ctx->r8 = ADD32(ctx->r8, -0X67E0);
    // 0x80015EDC: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
L_80015EE0:
    // 0x80015EE0: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80015EE4: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x80015EE8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80015EEC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015EF0: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x80015EF4: addiu       $v0, $v0, -0x65A8
    ctx->r2 = ADD32(ctx->r2, -0X65A8);
    // 0x80015EF8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80015EFC: addu        $t2, $v0, $t9
    ctx->r10 = ADD32(ctx->r2, ctx->r25);
    // 0x80015F00: lbu         $t3, 0x4($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4);
    // 0x80015F04: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x80015F08: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80015F0C: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80015F10: bne         $at, $zero, L_80016074
    if (ctx->r1 != 0) {
        // 0x80015F14: addiu       $v0, $v0, -0x67A8
        ctx->r2 = ADD32(ctx->r2, -0X67A8);
            goto L_80016074;
    }
    // 0x80015F14: addiu       $v0, $v0, -0x67A8
    ctx->r2 = ADD32(ctx->r2, -0X67A8);
    // 0x80015F18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80015F1C: sb          $a3, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r7;
    // 0x80015F20: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x80015F24: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x80015F28: lw          $t5, 0x4($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X4);
    // 0x80015F2C: b           L_80016068
    // 0x80015F30: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_80016068;
    // 0x80015F30: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_80015F34:
    // 0x80015F34: slti        $at, $v0, 0x130
    ctx->r1 = SIGNED(ctx->r2) < 0X130 ? 1 : 0;
    // 0x80015F38: beq         $at, $zero, L_80016074
    if (ctx->r1 == 0) {
        // 0x80015F3C: sra         $t6, $v0, 8
        ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
            goto L_80016074;
    }
    // 0x80015F3C: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80015F40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80015F44: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80015F48: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80015F4C: lw          $v1, -0x1C14($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1C14);
    // 0x80015F50: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80015F54: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80015F58: addu        $t1, $v1, $t2
    ctx->r9 = ADD32(ctx->r3, ctx->r10);
    // 0x80015F5C: lbu         $a3, 0x0($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X0);
    // 0x80015F60: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015F64: addiu       $t0, $t0, -0x67E0
    ctx->r8 = ADD32(ctx->r8, -0X67E0);
    // 0x80015F68: sra         $t3, $a3, 5
    ctx->r11 = S32(SIGNED(ctx->r7) >> 5);
    // 0x80015F6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80015F70: andi        $t8, $a3, 0x1F
    ctx->r24 = ctx->r7 & 0X1F;
    // 0x80015F74: sb          $t8, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r24;
    // 0x80015F78: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x80015F7C: lbu         $a3, 0x1($t1)
    ctx->r7 = MEM_BU(ctx->r9, 0X1);
    // 0x80015F80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80015F84: andi        $t5, $a3, 0xF
    ctx->r13 = ctx->r7 & 0XF;
    // 0x80015F88: sra         $a3, $a3, 4
    ctx->r7 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80015F8C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80015F90: andi        $t7, $t4, 0xFF
    ctx->r15 = ctx->r12 & 0XFF;
    // 0x80015F94: sb          $t5, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r13;
    // 0x80015F98: bne         $a1, $t7, L_80016058
    if (ctx->r5 != ctx->r15) {
        // 0x80015F9C: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_80016058;
    }
    // 0x80015F9C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80015FA0: bne         $t6, $zero, L_80015FFC
    if (ctx->r14 != 0) {
        // 0x80015FA4: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_80015FFC;
    }
    // 0x80015FA4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80015FA8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80015FAC: addiu       $v1, $v1, -0x5CB0
    ctx->r3 = ADD32(ctx->r3, -0X5CB0);
    // 0x80015FB0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80015FB4:
    // 0x80015FB4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80015FB8: nop

    // 0x80015FBC: bne         $a0, $t9, L_80015FD0
    if (ctx->r4 != ctx->r25) {
        // 0x80015FC0: nop
    
            goto L_80015FD0;
    }
    // 0x80015FC0: nop

    // 0x80015FC4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x80015FC8: b           L_80015FDC
    // 0x80015FCC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
        goto L_80015FDC;
    // 0x80015FCC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
L_80015FD0:
    // 0x80015FD0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80015FD4: bne         $v0, $a1, L_80015FB4
    if (ctx->r2 != ctx->r5) {
        // 0x80015FD8: addiu       $v1, $v1, -0x148
        ctx->r3 = ADD32(ctx->r3, -0X148);
            goto L_80015FB4;
    }
    // 0x80015FD8: addiu       $v1, $v1, -0x148
    ctx->r3 = ADD32(ctx->r3, -0X148);
L_80015FDC:
    // 0x80015FDC: bne         $a2, $zero, L_80015FFC
    if (ctx->r6 != 0) {
        // 0x80015FE0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80015FFC;
    }
    // 0x80015FE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80015FE4: jal         0x80016388
    // 0x80015FE8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_80016388(rdram, ctx);
        goto after_2;
    // 0x80015FE8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_2:
    // 0x80015FEC: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80015FF0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80015FF4: addiu       $t0, $t0, -0x67E0
    ctx->r8 = ADD32(ctx->r8, -0X67E0);
    // 0x80015FF8: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
L_80015FFC:
    // 0x80015FFC: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x80016000: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80016004: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80016008: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001600C: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80016010: addiu       $v0, $v0, -0x65A8
    ctx->r2 = ADD32(ctx->r2, -0X65A8);
    // 0x80016014: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80016018: addu        $t8, $v0, $t2
    ctx->r24 = ADD32(ctx->r2, ctx->r10);
    // 0x8001601C: lbu         $t3, 0x4($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X4);
    // 0x80016020: lbu         $v1, 0x2($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X2);
    // 0x80016024: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x80016028: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001602C: bne         $at, $zero, L_80016074
    if (ctx->r1 != 0) {
        // 0x80016030: addu        $t4, $t4, $a3
        ctx->r12 = ADD32(ctx->r12, ctx->r7);
            goto L_80016074;
    }
    // 0x80016030: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x80016034: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80016038: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x8001603C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80016040: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x80016044: lbu         $t6, 0xA8($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XA8);
    // 0x80016048: nop

    // 0x8001604C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80016050: bne         $at, $zero, L_80016078
    if (ctx->r1 != 0) {
        // 0x80016054: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80016078;
    }
    // 0x80016054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80016058:
    // 0x80016058: sb          $a3, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r7;
    // 0x8001605C: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x80016060: nop

    // 0x80016064: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
L_80016068:
    // 0x80016068: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8001606C: jal         0x80016704
    // 0x80016070: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    func_80016704(rdram, ctx);
        goto after_3;
    // 0x80016070: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    after_3:
L_80016074:
    // 0x80016074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80016078:
    // 0x80016078: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001607C: jr          $ra
    // 0x80016080: nop

    return;
    // 0x80016080: nop

;}
RECOMP_FUNC void func_80016084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016084: jr          $ra
    // 0x80016088: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80016088: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8001608C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001608C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80016090: lbu         $t6, -0x2F8C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2F8C);
    // 0x80016094: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80016098: bne         $t6, $zero, L_80016378
    if (ctx->r14 != 0) {
        // 0x8001609C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80016378;
    }
    // 0x8001609C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800160A0: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x800160A4: addiu       $t8, $t8, -0x3B58
    ctx->r24 = ADD32(ctx->r24, -0X3B58);
    // 0x800160A8: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x800160AC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800160B0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x800160B4: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x800160B8: srl         $t3, $v1, 8
    ctx->r11 = S32(U32(ctx->r3) >> 8);
    // 0x800160BC: addiu       $a2, $a2, -0x67B0
    ctx->r6 = ADD32(ctx->r6, -0X67B0);
    // 0x800160C0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800160C4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800160C8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x800160CC: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x800160D0: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x800160D4: lw          $a1, -0x1C14($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C14);
    // 0x800160D8: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x800160DC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x800160E0: addu        $t1, $a1, $t6
    ctx->r9 = ADD32(ctx->r5, ctx->r14);
    // 0x800160E4: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x800160E8: lui         $a3, 0x801A
    ctx->r7 = S32(0X801A << 16);
    // 0x800160EC: addiu       $a3, $a3, -0x67E0
    ctx->r7 = ADD32(ctx->r7, -0X67E0);
    // 0x800160F0: andi        $t8, $t7, 0x1F
    ctx->r24 = ctx->r15 & 0X1F;
    // 0x800160F4: sb          $t8, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r24;
    // 0x800160F8: lbu         $t9, 0x1($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X1);
    // 0x800160FC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80016100: beq         $a0, $zero, L_80016130
    if (ctx->r4 == 0) {
        // 0x80016104: andi        $t2, $t9, 0xF
        ctx->r10 = ctx->r25 & 0XF;
            goto L_80016130;
    }
    // 0x80016104: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x80016108: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001610C: beq         $a0, $at, L_800161F0
    if (ctx->r4 == ctx->r1) {
        // 0x80016110: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800161F0;
    }
    // 0x80016110: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80016114: beq         $a0, $at, L_80016190
    if (ctx->r4 == ctx->r1) {
        // 0x80016118: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80016190;
    }
    // 0x80016118: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8001611C: beq         $a0, $at, L_800161F0
    if (ctx->r4 == ctx->r1) {
        // 0x80016120: lui         $a0, 0x801A
        ctx->r4 = S32(0X801A << 16);
            goto L_800161F0;
    }
    // 0x80016120: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016124: lbu         $v0, 0x26($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X26);
    // 0x80016128: b           L_80016298
    // 0x8001612C: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
        goto L_80016298;
    // 0x8001612C: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
L_80016130:
    // 0x80016130: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016134: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
    // 0x80016138: lw          $t4, 0x3D8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3D8);
    // 0x8001613C: nop

    // 0x80016140: bne         $v1, $t4, L_80016150
    if (ctx->r3 != ctx->r12) {
        // 0x80016144: nop
    
            goto L_80016150;
    }
    // 0x80016144: nop

    // 0x80016148: b           L_80016298
    // 0x8001614C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80016298;
    // 0x8001614C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80016150:
    // 0x80016150: lw          $t5, 0x47C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X47C);
    // 0x80016154: nop

    // 0x80016158: bne         $v1, $t5, L_80016168
    if (ctx->r3 != ctx->r13) {
        // 0x8001615C: nop
    
            goto L_80016168;
    }
    // 0x8001615C: nop

    // 0x80016160: b           L_80016298
    // 0x80016164: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80016298;
    // 0x80016164: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80016168:
    // 0x80016168: lbu         $t6, 0x3DC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3DC);
    // 0x8001616C: lbu         $t7, 0x480($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X480);
    // 0x80016170: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80016174: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80016178: beq         $at, $zero, L_80016188
    if (ctx->r1 == 0) {
        // 0x8001617C: nop
    
            goto L_80016188;
    }
    // 0x8001617C: nop

    // 0x80016180: b           L_80016298
    // 0x80016184: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80016298;
    // 0x80016184: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80016188:
    // 0x80016188: b           L_80016298
    // 0x8001618C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80016298;
    // 0x8001618C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80016190:
    // 0x80016190: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016194: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
    // 0x80016198: lw          $t8, 0x70C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X70C);
    // 0x8001619C: nop

    // 0x800161A0: bne         $v1, $t8, L_800161B0
    if (ctx->r3 != ctx->r24) {
        // 0x800161A4: nop
    
            goto L_800161B0;
    }
    // 0x800161A4: nop

    // 0x800161A8: b           L_80016298
    // 0x800161AC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80016298;
    // 0x800161AC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_800161B0:
    // 0x800161B0: lw          $t9, 0x7B0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7B0);
    // 0x800161B4: nop

    // 0x800161B8: bne         $v1, $t9, L_800161C8
    if (ctx->r3 != ctx->r25) {
        // 0x800161BC: nop
    
            goto L_800161C8;
    }
    // 0x800161BC: nop

    // 0x800161C0: b           L_80016298
    // 0x800161C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80016298;
    // 0x800161C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_800161C8:
    // 0x800161C8: lbu         $t3, 0x710($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X710);
    // 0x800161CC: lbu         $t4, 0x7B4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X7B4);
    // 0x800161D0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800161D4: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800161D8: beq         $at, $zero, L_800161E8
    if (ctx->r1 == 0) {
        // 0x800161DC: nop
    
            goto L_800161E8;
    }
    // 0x800161DC: nop

    // 0x800161E0: b           L_80016298
    // 0x800161E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_80016298;
    // 0x800161E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_800161E8:
    // 0x800161E8: b           L_80016298
    // 0x800161EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80016298;
    // 0x800161EC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_800161F0:
    // 0x800161F0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800161F4: addiu       $a0, $a0, -0x65A8
    ctx->r4 = ADD32(ctx->r4, -0X65A8);
    // 0x800161F8: lw          $t5, 0x854($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X854);
    // 0x800161FC: nop

    // 0x80016200: bne         $v1, $t5, L_80016210
    if (ctx->r3 != ctx->r13) {
        // 0x80016204: nop
    
            goto L_80016210;
    }
    // 0x80016204: nop

    // 0x80016208: b           L_80016298
    // 0x8001620C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_80016298;
    // 0x8001620C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80016210:
    // 0x80016210: lw          $t6, 0x8F8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8F8);
    // 0x80016214: nop

    // 0x80016218: bne         $v1, $t6, L_80016228
    if (ctx->r3 != ctx->r14) {
        // 0x8001621C: nop
    
            goto L_80016228;
    }
    // 0x8001621C: nop

    // 0x80016220: b           L_80016298
    // 0x80016224: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80016298;
    // 0x80016224: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80016228:
    // 0x80016228: lw          $t7, 0x99C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X99C);
    // 0x8001622C: nop

    // 0x80016230: bne         $v1, $t7, L_80016240
    if (ctx->r3 != ctx->r15) {
        // 0x80016234: nop
    
            goto L_80016240;
    }
    // 0x80016234: nop

    // 0x80016238: b           L_80016298
    // 0x8001623C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80016298;
    // 0x8001623C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80016240:
    // 0x80016240: lbu         $v0, 0x858($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X858);
    // 0x80016244: lbu         $v1, 0x8FC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8FC);
    // 0x80016248: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001624C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80016250: beq         $at, $zero, L_8001627C
    if (ctx->r1 == 0) {
        // 0x80016254: nop
    
            goto L_8001627C;
    }
    // 0x80016254: nop

    // 0x80016258: lbu         $t8, 0x9A0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9A0);
    // 0x8001625C: nop

    // 0x80016260: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80016264: beq         $at, $zero, L_80016274
    if (ctx->r1 == 0) {
        // 0x80016268: nop
    
            goto L_80016274;
    }
    // 0x80016268: nop

    // 0x8001626C: b           L_80016298
    // 0x80016270: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
        goto L_80016298;
    // 0x80016270: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80016274:
    // 0x80016274: b           L_80016298
    // 0x80016278: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80016298;
    // 0x80016278: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_8001627C:
    // 0x8001627C: lbu         $t9, 0x9A0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9A0);
    // 0x80016280: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80016284: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80016288: beq         $at, $zero, L_80016298
    if (ctx->r1 == 0) {
        // 0x8001628C: nop
    
            goto L_80016298;
    }
    // 0x8001628C: nop

    // 0x80016290: b           L_80016298
    // 0x80016294: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80016298;
    // 0x80016294: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80016298:
    // 0x80016298: beq         $t0, $zero, L_800162C8
    if (ctx->r8 == 0) {
        // 0x8001629C: sll         $t3, $v0, 2
        ctx->r11 = S32(ctx->r2 << 2);
            goto L_800162C8;
    }
    // 0x8001629C: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x800162A0: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800162A4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800162A8: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800162AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800162B0: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x800162B4: lbu         $t5, 0x4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4);
    // 0x800162B8: lbu         $t6, 0x2($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X2);
    // 0x800162BC: nop

    // 0x800162C0: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800162C4: beq         $at, $zero, L_80016378
    if (ctx->r1 == 0) {
        // 0x800162C8: lui         $v1, 0x801A
        ctx->r3 = S32(0X801A << 16);
            goto L_80016378;
    }
L_800162C8:
    // 0x800162C8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800162CC: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x800162D0: addiu       $v1, $v1, -0x67A8
    ctx->r3 = ADD32(ctx->r3, -0X67A8);
    // 0x800162D4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800162D8: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800162DC: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
    // 0x800162E0: sb          $t2, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r10;
    // 0x800162E4: sb          $t7, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r15;
    // 0x800162E8: sw          $v1, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r3;
    // 0x800162EC: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800162F0: lw          $t8, 0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X4);
    // 0x800162F4: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x800162F8: lui         $t4, 0x801A
    ctx->r12 = S32(0X801A << 16);
    // 0x800162FC: addiu       $t4, $t4, -0x65A8
    ctx->r12 = ADD32(ctx->r12, -0X65A8);
    // 0x80016300: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80016304: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80016308: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001630C: sb          $t9, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r25;
    // 0x80016310: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80016314: jal         0x80016704
    // 0x80016318: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    func_80016704(rdram, ctx);
        goto after_0;
    // 0x80016318: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    after_0:
    // 0x8001631C: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016320: lhu         $t6, -0x3B60($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3B60);
    // 0x80016324: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80016328: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x8001632C: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80016330: lbu         $v1, -0x1510($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1510);
    // 0x80016334: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80016338: andi        $t8, $v1, 0x3F
    ctx->r24 = ctx->r3 & 0X3F;
    // 0x8001633C: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80016340: andi        $v0, $t9, 0xFFFF
    ctx->r2 = ctx->r25 & 0XFFFF;
    // 0x80016344: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x80016348: beq         $at, $zero, L_8001635C
    if (ctx->r1 == 0) {
        // 0x8001634C: slti        $at, $v0, 0x6C
        ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
            goto L_8001635C;
    }
    // 0x8001634C: slti        $at, $v0, 0x6C
    ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
    // 0x80016350: b           L_80016368
    // 0x80016354: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
        goto L_80016368;
    // 0x80016354: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80016358: slti        $at, $v0, 0x6C
    ctx->r1 = SIGNED(ctx->r2) < 0X6C ? 1 : 0;
L_8001635C:
    // 0x8001635C: bne         $at, $zero, L_8001636C
    if (ctx->r1 != 0) {
        // 0x80016360: sll         $t4, $v0, 8
        ctx->r12 = S32(ctx->r2 << 8);
            goto L_8001636C;
    }
    // 0x80016360: sll         $t4, $v0, 8
    ctx->r12 = S32(ctx->r2 << 8);
    // 0x80016364: addiu       $v0, $zero, 0x6B
    ctx->r2 = ADD32(0, 0X6B);
L_80016368:
    // 0x80016368: sll         $t4, $v0, 8
    ctx->r12 = S32(ctx->r2 << 8);
L_8001636C:
    // 0x8001636C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80016370: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x80016374: sh          $t5, 0x58($t6)
    MEM_H(0X58, ctx->r14) = ctx->r13;
L_80016378:
    // 0x80016378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001637C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80016380: jr          $ra
    // 0x80016384: nop

    return;
    // 0x80016384: nop

;}
RECOMP_FUNC void func_80016388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016388: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8001638C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80016390: bne         $t6, $at, L_800163F8
    if (ctx->r14 != ctx->r1) {
        // 0x80016394: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_800163F8;
    }
    // 0x80016394: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80016398: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001639C: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x800163A0: lbu         $v0, -0x6314($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6314);
    // 0x800163A4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x800163A8: addiu       $t1, $t1, -0x65A8
    ctx->r9 = ADD32(ctx->r9, -0X65A8);
    // 0x800163AC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x800163B0: addiu       $t2, $zero, 0xA4
    ctx->r10 = ADD32(0, 0XA4);
L_800163B4:
    // 0x800163B4: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800163B8: mflo        $t7
    ctx->r15 = lo;
    // 0x800163BC: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x800163C0: lbu         $a1, 0x4($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X4);
    // 0x800163C4: nop

    // 0x800163C8: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800163CC: bne         $at, $zero, L_800163DC
    if (ctx->r1 != 0) {
        // 0x800163D0: nop
    
            goto L_800163DC;
    }
    // 0x800163D0: nop

    // 0x800163D4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x800163D8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_800163DC:
    // 0x800163DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800163E0: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x800163E4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x800163E8: bne         $at, $zero, L_800163B4
    if (ctx->r1 != 0) {
        // 0x800163EC: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_800163B4;
    }
    // 0x800163EC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800163F0: jr          $ra
    // 0x800163F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800163F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800163F8:
    // 0x800163F8: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x800163FC: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x80016400: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80016404: addiu       $t1, $t1, -0x65A8
    ctx->r9 = ADD32(ctx->r9, -0X65A8);
    // 0x80016408: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8001640C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80016410: addiu       $t3, $zero, 0xA4
    ctx->r11 = ADD32(0, 0XA4);
    // 0x80016414: addiu       $t2, $zero, 0xA4
    ctx->r10 = ADD32(0, 0XA4);
L_80016418:
    // 0x80016418: multu       $a0, $t2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001641C: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80016420: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80016424: mflo        $t4
    ctx->r12 = lo;
    // 0x80016428: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8001642C: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x80016430: multu       $a2, $t3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016434: mflo        $t7
    ctx->r15 = lo;
    // 0x80016438: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x8001643C: lbu         $t9, 0xA8($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XA8);
    // 0x80016440: nop

    // 0x80016444: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80016448: beq         $at, $zero, L_8001645C
    if (ctx->r1 == 0) {
        // 0x8001644C: nop
    
            goto L_8001645C;
    }
    // 0x8001644C: nop

    // 0x80016450: addiu       $a3, $a0, 0x1
    ctx->r7 = ADD32(ctx->r4, 0X1);
    // 0x80016454: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x80016458: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
L_8001645C:
    // 0x8001645C: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016460: mflo        $t5
    ctx->r13 = lo;
    // 0x80016464: addu        $t7, $t1, $t5
    ctx->r15 = ADD32(ctx->r9, ctx->r13);
    // 0x80016468: lbu         $t0, 0x4($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X4);
    // 0x8001646C: nop

    // 0x80016470: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80016474: bne         $at, $zero, L_80016484
    if (ctx->r1 != 0) {
        // 0x80016478: nop
    
            goto L_80016484;
    }
    // 0x80016478: nop

    // 0x8001647C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80016480: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_80016484:
    // 0x80016484: addiu       $a0, $a2, -0x2
    ctx->r4 = ADD32(ctx->r6, -0X2);
    // 0x80016488: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8001648C: slti        $at, $a2, 0x4
    ctx->r1 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80016490: beq         $at, $zero, L_80016418
    if (ctx->r1 == 0) {
        // 0x80016494: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80016418;
    }
    // 0x80016494: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80016498: jr          $ra
    // 0x8001649C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001649C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800164A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800164A0: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x800164A4: lbu         $t6, -0x67EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67EA);
    // 0x800164A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800164AC: beq         $t6, $zero, L_800164C4
    if (ctx->r14 == 0) {
        // 0x800164B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800164C4;
    }
    // 0x800164B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800164B4: jal         0x8001698C
    // 0x800164B8: nop

    func_8001698C(rdram, ctx);
        goto after_0;
    // 0x800164B8: nop

    after_0:
    // 0x800164BC: b           L_800164CC
    // 0x800164C0: nop

        goto L_800164CC;
    // 0x800164C0: nop

L_800164C4:
    // 0x800164C4: jal         0x80016A24
    // 0x800164C8: nop

    func_80016A24(rdram, ctx);
        goto after_1;
    // 0x800164C8: nop

    after_1:
L_800164CC:
    // 0x800164CC: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x800164D0: lw          $t7, -0x67B0($a2)
    ctx->r15 = MEM_W(ctx->r6, -0X67B0);
    // 0x800164D4: nop

    // 0x800164D8: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x800164DC: slti        $at, $t8, 0xC0
    ctx->r1 = SIGNED(ctx->r24) < 0XC0 ? 1 : 0;
    // 0x800164E0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800164E4: beq         $at, $zero, L_8001652C
    if (ctx->r1 == 0) {
        // 0x800164E8: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8001652C;
    }
    // 0x800164E8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800164EC: slti        $at, $t8, 0x20
    ctx->r1 = SIGNED(ctx->r24) < 0X20 ? 1 : 0;
    // 0x800164F0: beq         $at, $zero, L_80016584
    if (ctx->r1 == 0) {
        // 0x800164F4: lui         $t9, 0x801A
        ctx->r25 = S32(0X801A << 16);
            goto L_80016584;
    }
    // 0x800164F4: lui         $t9, 0x801A
    ctx->r25 = S32(0X801A << 16);
    // 0x800164F8: lbu         $t9, -0x67D4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X67D4);
    // 0x800164FC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016500: beq         $t9, $t8, L_8001651C
    if (ctx->r25 == ctx->r24) {
        // 0x80016504: andi        $a0, $a2, 0xFFFF
        ctx->r4 = ctx->r6 & 0XFFFF;
            goto L_8001651C;
    }
    // 0x80016504: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    // 0x80016508: sh          $t8, -0x67AC($at)
    MEM_H(-0X67AC, ctx->r1) = ctx->r24;
    // 0x8001650C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016510: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80016514: b           L_80016584
    // 0x80016518: sb          $t0, -0x67AA($at)
    MEM_B(-0X67AA, ctx->r1) = ctx->r8;
        goto L_80016584;
    // 0x80016518: sb          $t0, -0x67AA($at)
    MEM_B(-0X67AA, ctx->r1) = ctx->r8;
L_8001651C:
    // 0x8001651C: jal         0x80016640
    // 0x80016520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80016640(rdram, ctx);
        goto after_2;
    // 0x80016520: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80016524: b           L_80016588
    // 0x80016528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80016588;
    // 0x80016528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001652C:
    // 0x8001652C: slti        $at, $a0, 0xC1
    ctx->r1 = SIGNED(ctx->r4) < 0XC1 ? 1 : 0;
    // 0x80016530: beq         $at, $zero, L_80016584
    if (ctx->r1 == 0) {
        // 0x80016534: lui         $v0, 0x801A
        ctx->r2 = S32(0X801A << 16);
            goto L_80016584;
    }
    // 0x80016534: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016538: addiu       $a2, $a0, -0xC0
    ctx->r6 = ADD32(ctx->r4, -0XC0);
    // 0x8001653C: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x80016540: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x80016544: addiu       $t3, $t3, -0x11A0
    ctx->r11 = ADD32(ctx->r11, -0X11A0);
    // 0x80016548: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001654C: addiu       $v0, $v0, -0x67E0
    ctx->r2 = ADD32(ctx->r2, -0X67E0);
    // 0x80016550: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x80016554: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x80016558: lbu         $t5, 0x1($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X1);
    // 0x8001655C: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80016560: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80016564: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x80016568: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8001656C: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x80016570: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x80016574: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x80016578: sb          $t5, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r13;
    // 0x8001657C: jal         0x80016704
    // 0x80016580: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    func_80016704(rdram, ctx);
        goto after_3;
    // 0x80016580: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    after_3:
L_80016584:
    // 0x80016584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80016588:
    // 0x80016588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001658C: jr          $ra
    // 0x80016590: nop

    return;
    // 0x80016590: nop

;}
RECOMP_FUNC void func_80016594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016594: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016598: addiu       $v0, $v0, -0x67AA
    ctx->r2 = ADD32(ctx->r2, -0X67AA);
    // 0x8001659C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800165A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800165A4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800165A8: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800165AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800165B0: bne         $t8, $zero, L_80016630
    if (ctx->r24 != 0) {
        // 0x800165B4: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_80016630;
    }
    // 0x800165B4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x800165B8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800165BC: lbu         $t9, -0x2F8C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X2F8C);
    // 0x800165C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800165C4: beq         $t9, $zero, L_800165D4
    if (ctx->r25 == 0) {
        // 0x800165C8: nop
    
            goto L_800165D4;
    }
    // 0x800165C8: nop

    // 0x800165CC: b           L_80016630
    // 0x800165D0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
        goto L_80016630;
    // 0x800165D0: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_800165D4:
    // 0x800165D4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800165D8: lhu         $v0, -0x67AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X67AC);
    // 0x800165DC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800165E0: addiu       $a3, $v0, -0x10
    ctx->r7 = ADD32(ctx->r2, -0X10);
    // 0x800165E4: andi        $t1, $a3, 0xFFFF
    ctx->r9 = ctx->r7 & 0XFFFF;
    // 0x800165E8: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x800165EC: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x800165F0: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x800165F4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800165F8: lw          $a0, -0x192C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X192C);
    // 0x800165FC: lw          $t2, -0x18EC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X18EC);
    // 0x80016600: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016604: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80016608: addiu       $a1, $a1, -0x5B60
    ctx->r5 = ADD32(ctx->r5, -0X5B60);
    // 0x8001660C: sb          $v0, -0x67D4($at)
    MEM_B(-0X67D4, ctx->r1) = ctx->r2;
    // 0x80016610: jal         0x80025394
    // 0x80016614: subu        $a2, $t2, $a0
    ctx->r6 = SUB32(ctx->r10, ctx->r4);
    func_80025394(rdram, ctx);
        goto after_0;
    // 0x80016614: subu        $a2, $t2, $a0
    ctx->r6 = SUB32(ctx->r10, ctx->r4);
    after_0:
    // 0x80016618: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001661C: lhu         $a0, -0x67AC($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X67AC);
    // 0x80016620: jal         0x80016640
    // 0x80016624: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80016640(rdram, ctx);
        goto after_1;
    // 0x80016624: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80016628: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8001662C: sh          $zero, -0x67AC($at)
    MEM_H(-0X67AC, ctx->r1) = 0;
L_80016630:
    // 0x80016630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016638: jr          $ra
    // 0x8001663C: nop

    return;
    // 0x8001663C: nop

;}
RECOMP_FUNC void func_80016640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016644: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016648: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x8001664C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80016650: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x80016654: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80016658: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001665C: addiu       $t0, $t0, -0x11C0
    ctx->r8 = ADD32(ctx->r8, -0X11C0);
    // 0x80016660: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x80016664: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80016668: lui         $a2, 0x801A
    ctx->r6 = S32(0X801A << 16);
    // 0x8001666C: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80016670: addiu       $a2, $a2, -0x67E0
    ctx->r6 = ADD32(ctx->r6, -0X67E0);
    // 0x80016674: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x80016678: addiu       $t3, $t3, -0x67A8
    ctx->r11 = ADD32(ctx->r11, -0X67A8);
    // 0x8001667C: andi        $a3, $t1, 0xFF
    ctx->r7 = ctx->r9 & 0XFF;
    // 0x80016680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016684: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80016688: sw          $t3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r11;
    // 0x8001668C: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80016690: blez        $a3, L_800166D0
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80016694: sb          $t2, 0x3($a2)
        MEM_B(0X3, ctx->r6) = ctx->r10;
            goto L_800166D0;
    }
    // 0x80016694: sb          $t2, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r10;
    // 0x80016698: lui         $t4, 0x801A
    ctx->r12 = S32(0X801A << 16);
    // 0x8001669C: addiu       $v0, $t4, -0x5B60
    ctx->r2 = ADD32(ctx->r12, -0X5B60);
    // 0x800166A0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800166A4: sll         $t5, $a3, 1
    ctx->r13 = S32(ctx->r7 << 1);
    // 0x800166A8: addu        $a1, $t5, $v0
    ctx->r5 = ADD32(ctx->r13, ctx->r2);
    // 0x800166AC: addiu       $v1, $v1, -0x67A8
    ctx->r3 = ADD32(ctx->r3, -0X67A8);
    // 0x800166B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800166B4:
    // 0x800166B4: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x800166B8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800166BC: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x800166C0: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800166C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800166C8: bne         $at, $zero, L_800166B4
    if (ctx->r1 != 0) {
        // 0x800166CC: sw          $t7, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r15;
            goto L_800166B4;
    }
    // 0x800166CC: sw          $t7, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r15;
L_800166D0:
    // 0x800166D0: lhu         $t8, 0x1A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1A);
    // 0x800166D4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800166D8: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x800166DC: sw          $t8, -0x67B0($at)
    MEM_W(-0X67B0, ctx->r1) = ctx->r24;
    // 0x800166E0: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x800166E4: sb          $zero, 0x1($a2)
    MEM_B(0X1, ctx->r6) = 0;
    // 0x800166E8: sb          $t9, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r25;
    // 0x800166EC: jal         0x80016704
    // 0x800166F0: sb          $t0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r8;
    func_80016704(rdram, ctx);
        goto after_0;
    // 0x800166F0: sb          $t0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r8;
    after_0:
    // 0x800166F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800166F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800166FC: jr          $ra
    // 0x80016700: nop

    return;
    // 0x80016700: nop

;}
RECOMP_FUNC void func_80016704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016704: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80016708: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001670C: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x80016710: addiu       $s2, $s2, -0x67E0
    ctx->r18 = ADD32(ctx->r18, -0X67E0);
    // 0x80016714: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80016718: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001671C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80016720: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80016724: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80016728: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001672C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80016730: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80016734: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80016738: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001673C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016740: blez        $t6, L_8001691C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80016744: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8001691C;
    }
    // 0x80016744: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80016748: lui         $s7, 0x801A
    ctx->r23 = S32(0X801A << 16);
    // 0x8001674C: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x80016750: lui         $s3, 0x801A
    ctx->r19 = S32(0X801A << 16);
    // 0x80016754: addiu       $s3, $s3, -0x67B0
    ctx->r19 = ADD32(ctx->r19, -0X67B0);
    // 0x80016758: addiu       $s6, $s6, 0x1890
    ctx->r22 = ADD32(ctx->r22, 0X1890);
    // 0x8001675C: addiu       $s7, $s7, -0x6768
    ctx->r23 = ADD32(ctx->r23, -0X6768);
    // 0x80016760: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80016764: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80016768: addiu       $fp, $zero, 0x1C
    ctx->r30 = ADD32(0, 0X1C);
L_8001676C:
    // 0x8001676C: lbu         $t7, 0x1($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1);
    // 0x80016770: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x80016774: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80016778: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001677C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80016780: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80016784: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80016788: addu        $t9, $t8, $s4
    ctx->r25 = ADD32(ctx->r24, ctx->r20);
    // 0x8001678C: addiu       $t0, $t0, -0x65A8
    ctx->r8 = ADD32(ctx->r8, -0X65A8);
    // 0x80016790: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x80016794: lbu         $t1, 0x10($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X10);
    // 0x80016798: nop

    // 0x8001679C: beq         $t1, $zero, L_800167D8
    if (ctx->r9 == 0) {
        // 0x800167A0: nop
    
            goto L_800167D8;
    }
    // 0x800167A0: nop

    // 0x800167A4: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800167A8: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x800167AC: lbu         $t2, 0x1($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X1);
    // 0x800167B0: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x800167B4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x800167B8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800167BC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800167C0: addu        $t4, $s7, $t3
    ctx->r12 = ADD32(ctx->r23, ctx->r11);
    // 0x800167C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800167C8: mflo        $t5
    ctx->r13 = lo;
    // 0x800167CC: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x800167D0: jal         0x80083110
    // 0x800167D4: nop

    func_80083110(rdram, ctx);
        goto after_0;
    // 0x800167D4: nop

    after_0:
L_800167D8:
    // 0x800167D8: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x800167DC: nop

    // 0x800167E0: andi        $t7, $t6, 0x7FFF
    ctx->r15 = ctx->r14 & 0X7FFF;
    // 0x800167E4: sltiu       $at, $t7, 0x100
    ctx->r1 = ctx->r15 < 0X100 ? 1 : 0;
    // 0x800167E8: bne         $at, $zero, L_8001683C
    if (ctx->r1 != 0) {
        // 0x800167EC: nop
    
            goto L_8001683C;
    }
    // 0x800167EC: nop

    // 0x800167F0: lbu         $t8, 0xE($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE);
    // 0x800167F4: nop

    // 0x800167F8: beq         $t8, $zero, L_8001683C
    if (ctx->r24 == 0) {
        // 0x800167FC: nop
    
            goto L_8001683C;
    }
    // 0x800167FC: nop

    // 0x80016800: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016804: lbu         $t9, 0x1($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X1);
    // 0x80016808: lw          $a0, 0x0($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X0);
    // 0x8001680C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80016810: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80016814: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80016818: addu        $t1, $s7, $t0
    ctx->r9 = ADD32(ctx->r23, ctx->r8);
    // 0x8001681C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80016820: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    // 0x80016824: mflo        $t2
    ctx->r10 = lo;
    // 0x80016828: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    // 0x8001682C: jal         0x800831B0
    // 0x80016830: nop

    func_800831B0(rdram, ctx);
        goto after_1;
    // 0x80016830: nop

    after_1:
    // 0x80016834: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80016838: sb          $t3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r11;
L_8001683C:
    // 0x8001683C: lbu         $t4, 0x4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X4);
    // 0x80016840: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80016844: sb          $t4, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r12;
    // 0x80016848: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x8001684C: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80016850: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80016854: lbu         $t6, 0x2($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X2);
    // 0x80016858: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8001685C: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80016860: lbu         $t7, 0x3($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X3);
    // 0x80016864: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80016868: sb          $t7, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r15;
    // 0x8001686C: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x80016870: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x80016874: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x80016878: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    // 0x8001687C: sh          $zero, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = 0;
    // 0x80016880: lh          $t3, 0x30($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X30);
    // 0x80016884: lh          $t4, 0x34($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X34);
    // 0x80016888: lh          $t5, 0x42($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X42);
    // 0x8001688C: lh          $t6, 0x8A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8A);
    // 0x80016890: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x80016894: andi        $t8, $zero, 0xFF
    ctx->r24 = 0 & 0XFF;
    // 0x80016898: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x8001689C: sh          $t0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r8;
    // 0x800168A0: sb          $t2, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r10;
    // 0x800168A4: sb          $t2, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r10;
    // 0x800168A8: sb          $zero, 0x92($s0)
    MEM_B(0X92, ctx->r16) = 0;
    // 0x800168AC: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x800168B0: sh          $t8, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r24;
    // 0x800168B4: sb          $zero, 0x9E($s0)
    MEM_B(0X9E, ctx->r16) = 0;
    // 0x800168B8: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x800168BC: sb          $zero, 0x47($s0)
    MEM_B(0X47, ctx->r16) = 0;
    // 0x800168C0: sb          $zero, 0x5B($s0)
    MEM_B(0X5B, ctx->r16) = 0;
    // 0x800168C4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x800168C8: sh          $t3, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r11;
    // 0x800168CC: sh          $t4, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r12;
    // 0x800168D0: sh          $t5, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r13;
    // 0x800168D4: sb          $t6, 0x7D($s0)
    MEM_B(0X7D, ctx->r16) = ctx->r14;
    // 0x800168D8: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x800168DC: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x800168E0: andi        $t9, $v1, 0x7FFF
    ctx->r25 = ctx->r3 & 0X7FFF;
    // 0x800168E4: sltiu       $at, $t9, 0x200
    ctx->r1 = ctx->r25 < 0X200 ? 1 : 0;
    // 0x800168E8: bne         $at, $zero, L_80016900
    if (ctx->r1 != 0) {
        // 0x800168EC: sltiu       $at, $t9, 0x204
        ctx->r1 = ctx->r25 < 0X204 ? 1 : 0;
            goto L_80016900;
    }
    // 0x800168EC: sltiu       $at, $t9, 0x204
    ctx->r1 = ctx->r25 < 0X204 ? 1 : 0;
    // 0x800168F0: beq         $at, $zero, L_80016900
    if (ctx->r1 == 0) {
        // 0x800168F4: nop
    
            goto L_80016900;
    }
    // 0x800168F4: nop

    // 0x800168F8: b           L_80016904
    // 0x800168FC: sh          $zero, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = 0;
        goto L_80016904;
    // 0x800168FC: sh          $zero, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = 0;
L_80016900:
    // 0x80016900: sh          $t0, 0xA2($s0)
    MEM_H(0XA2, ctx->r16) = ctx->r8;
L_80016904:
    // 0x80016904: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
    // 0x80016908: addiu       $s4, $s4, 0xA4
    ctx->r20 = ADD32(ctx->r20, 0XA4);
    // 0x8001690C: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80016910: bne         $at, $zero, L_8001676C
    if (ctx->r1 != 0) {
        // 0x80016914: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8001676C;
    }
    // 0x80016914: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80016918: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001691C:
    // 0x8001691C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016920: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016924: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80016928: lw          $a0, -0x67B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67B0);
    // 0x8001692C: addiu       $a1, $a1, -0x67E3
    ctx->r5 = ADD32(ctx->r5, -0X67E3);
    // 0x80016930: addiu       $v1, $v1, -0x67E2
    ctx->r3 = ADD32(ctx->r3, -0X67E2);
    // 0x80016934: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80016938:
    // 0x80016938: lhu         $t2, 0x0($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X0);
    // 0x8001693C: addu        $v0, $a1, $s1
    ctx->r2 = ADD32(ctx->r5, ctx->r17);
    // 0x80016940: bne         $a0, $t2, L_80016950
    if (ctx->r4 != ctx->r10) {
        // 0x80016944: andi        $t3, $zero, 0xFF
        ctx->r11 = 0 & 0XFF;
            goto L_80016950;
    }
    // 0x80016944: andi        $t3, $zero, 0xFF
    ctx->r11 = 0 & 0XFF;
    // 0x80016948: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8001694C: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
L_80016950:
    // 0x80016950: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80016954: bne         $s1, $a2, L_80016938
    if (ctx->r17 != ctx->r6) {
        // 0x80016958: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80016938;
    }
    // 0x80016958: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8001695C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80016960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016964: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80016968: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001696C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80016970: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80016974: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80016978: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001697C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80016980: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80016984: jr          $ra
    // 0x80016988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80016988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001698C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001698C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016990: addiu       $a0, $a0, -0x3B58
    ctx->r4 = ADD32(ctx->r4, -0X3B58);
    // 0x80016994: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80016998: sh          $v1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r3;
    // 0x8001699C: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
    // 0x800169A0: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x800169A4: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x800169A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800169AC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800169B0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800169B4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800169B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800169BC: sb          $zero, -0x67EA($at)
    MEM_B(-0X67EA, ctx->r1) = 0;
    // 0x800169C0: addiu       $v0, $v0, -0x65A8
    ctx->r2 = ADD32(ctx->r2, -0X65A8);
    // 0x800169C4: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x800169C8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_800169CC:
    // 0x800169CC: addiu       $v0, $v0, 0xA4
    ctx->r2 = ADD32(ctx->r2, 0XA4);
    // 0x800169D0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800169D4: bne         $at, $zero, L_800169CC
    if (ctx->r1 != 0) {
        // 0x800169D8: sw          $v1, -0xA4($v0)
        MEM_W(-0XA4, ctx->r2) = ctx->r3;
            goto L_800169CC;
    }
    // 0x800169D8: sw          $v1, -0xA4($v0)
    MEM_W(-0XA4, ctx->r2) = ctx->r3;
    // 0x800169DC: jal         0x80016A24
    // 0x800169E0: nop

    func_80016A24(rdram, ctx);
        goto after_0;
    // 0x800169E0: nop

    after_0:
    // 0x800169E4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800169E8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800169EC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800169F0: addiu       $a0, $a0, -0x67E0
    ctx->r4 = ADD32(ctx->r4, -0X67E0);
    // 0x800169F4: addiu       $v1, $v1, -0x67E2
    ctx->r3 = ADD32(ctx->r3, -0X67E2);
    // 0x800169F8: addiu       $v0, $v0, -0x67E3
    ctx->r2 = ADD32(ctx->r2, -0X67E3);
L_800169FC:
    // 0x800169FC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80016A00: andi        $t6, $zero, 0xFF
    ctx->r14 = 0 & 0XFF;
    // 0x80016A04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80016A08: sh          $t6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r14;
    // 0x80016A0C: bne         $v1, $a0, L_800169FC
    if (ctx->r3 != ctx->r4) {
        // 0x80016A10: sb          $zero, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = 0;
            goto L_800169FC;
    }
    // 0x80016A10: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x80016A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016A1C: jr          $ra
    // 0x80016A20: nop

    return;
    // 0x80016A20: nop

;}
RECOMP_FUNC void func_80016A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016A24: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016A28: sh          $zero, -0x67AC($at)
    MEM_H(-0X67AC, ctx->r1) = 0;
    // 0x80016A2C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016A30: sb          $zero, -0x67AA($at)
    MEM_B(-0X67AA, ctx->r1) = 0;
    // 0x80016A34: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016A38: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016A3C: addiu       $v1, $v1, -0x67E6
    ctx->r3 = ADD32(ctx->r3, -0X67E6);
    // 0x80016A40: addiu       $v0, $v0, -0x67E8
    ctx->r2 = ADD32(ctx->r2, -0X67E8);
    // 0x80016A44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016A48: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80016A4C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80016A50: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016A54: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016A58: sb          $zero, -0x67ED($at)
    MEM_B(-0X67ED, ctx->r1) = 0;
    // 0x80016A5C: addiu       $a0, $a0, -0x67E4
    ctx->r4 = ADD32(ctx->r4, -0X67E4);
    // 0x80016A60: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80016A64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80016A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016A6C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80016A70: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016A74: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80016A78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016A7C: sb          $zero, -0x67E5($at)
    MEM_B(-0X67E5, ctx->r1) = 0;
    // 0x80016A80: addiu       $s1, $s1, -0x65A8
    ctx->r17 = ADD32(ctx->r17, -0X65A8);
    // 0x80016A84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80016A88: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
L_80016A8C:
    // 0x80016A8C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80016A90: nop

    // 0x80016A94: andi        $t9, $v0, 0x7FFF
    ctx->r25 = ctx->r2 & 0X7FFF;
    // 0x80016A98: sltiu       $at, $t9, 0x10
    ctx->r1 = ctx->r25 < 0X10 ? 1 : 0;
    // 0x80016A9C: bne         $at, $zero, L_80016AB4
    if (ctx->r1 != 0) {
        // 0x80016AA0: sltiu       $at, $t9, 0x100
        ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
            goto L_80016AB4;
    }
    // 0x80016AA0: sltiu       $at, $t9, 0x100
    ctx->r1 = ctx->r25 < 0X100 ? 1 : 0;
    // 0x80016AA4: beq         $at, $zero, L_80016AB4
    if (ctx->r1 == 0) {
        // 0x80016AA8: nop
    
            goto L_80016AB4;
    }
    // 0x80016AA8: nop

    // 0x80016AAC: jal         0x80016AD8
    // 0x80016AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80016AD8(rdram, ctx);
        goto after_0;
    // 0x80016AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80016AB4:
    // 0x80016AB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016AB8: bne         $s0, $s2, L_80016A8C
    if (ctx->r16 != ctx->r18) {
        // 0x80016ABC: addiu       $s1, $s1, 0xA4
        ctx->r17 = ADD32(ctx->r17, 0XA4);
            goto L_80016A8C;
    }
    // 0x80016ABC: addiu       $s1, $s1, 0xA4
    ctx->r17 = ADD32(ctx->r17, 0XA4);
    // 0x80016AC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80016AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016AC8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80016ACC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80016AD0: jr          $ra
    // 0x80016AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80016AD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80016AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016AD8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80016ADC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80016AE0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80016AE4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80016AE8: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80016AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016AF0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016AF4: addiu       $t8, $t8, -0x65A8
    ctx->r24 = ADD32(ctx->r24, -0X65A8);
    // 0x80016AF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80016AFC: addiu       $v0, $v0, -0x5B68
    ctx->r2 = ADD32(ctx->r2, -0X5B68);
    // 0x80016B00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80016B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016B08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016B0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80016B10: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80016B14: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80016B18: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016B1C: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    // 0x80016B20: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80016B24: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80016B28: lbu         $t2, 0xE($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XE);
    // 0x80016B2C: addiu       $t6, $t6, -0x6768
    ctx->r14 = ADD32(ctx->r14, -0X6768);
    // 0x80016B30: beq         $t2, $zero, L_80016B60
    if (ctx->r10 == 0) {
        // 0x80016B34: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_80016B60;
    }
    // 0x80016B34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80016B38: sb          $t3, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r11;
    // 0x80016B3C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80016B40: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80016B44: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80016B48: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80016B4C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80016B50: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80016B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80016B58: jal         0x800831B0
    // 0x80016B5C: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_800831B0(rdram, ctx);
        goto after_0;
    // 0x80016B5C: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_0:
L_80016B60:
    // 0x80016B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016B68: jr          $ra
    // 0x80016B6C: nop

    return;
    // 0x80016B6C: nop

;}
RECOMP_FUNC void func_80016B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B70: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016B74: lbu         $t6, -0x67F1($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67F1);
    // 0x80016B78: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x80016B7C: beq         $t6, $at, L_80016B8C
    if (ctx->r14 == ctx->r1) {
        // 0x80016B80: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80016B8C;
    }
    // 0x80016B80: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80016B84: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016B88: sb          $t7, -0x67F2($at)
    MEM_B(-0X67F2, ctx->r1) = ctx->r15;
L_80016B8C:
    // 0x80016B8C: jr          $ra
    // 0x80016B90: nop

    return;
    // 0x80016B90: nop

;}
RECOMP_FUNC void func_80016B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016B94: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016B98: lbu         $t6, -0x67F1($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67F1);
    // 0x80016B9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016BA0: beq         $t6, $zero, L_80016BAC
    if (ctx->r14 == 0) {
        // 0x80016BA4: lui         $at, 0x801A
        ctx->r1 = S32(0X801A << 16);
            goto L_80016BAC;
    }
    // 0x80016BA4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016BA8: sb          $t7, -0x67F2($at)
    MEM_B(-0X67F2, ctx->r1) = ctx->r15;
L_80016BAC:
    // 0x80016BAC: jr          $ra
    // 0x80016BB0: nop

    return;
    // 0x80016BB0: nop

;}
RECOMP_FUNC void func_80016BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016BB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80016BB8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016BBC: addiu       $v0, $v0, -0x67F0
    ctx->r2 = ADD32(ctx->r2, -0X67F0);
    // 0x80016BC0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80016BC4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80016BC8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80016BCC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80016BD0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80016BD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80016BD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80016BDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80016BE0: beq         $t6, $zero, L_80016C5C
    if (ctx->r14 == 0) {
        // 0x80016BE4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80016C5C;
    }
    // 0x80016BE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016BE8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80016BEC: lui         $s4, 0x801A
    ctx->r20 = S32(0X801A << 16);
    // 0x80016BF0: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80016BF4: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x80016BF8: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80016BFC: addiu       $s2, $s2, -0x5B68
    ctx->r18 = ADD32(ctx->r18, -0X5B68);
    // 0x80016C00: addiu       $s3, $s3, 0x1890
    ctx->r19 = ADD32(ctx->r19, 0X1890);
    // 0x80016C04: addiu       $s4, $s4, -0x6768
    ctx->r20 = ADD32(ctx->r20, -0X6768);
    // 0x80016C08: addiu       $s1, $s1, -0x65A8
    ctx->r17 = ADD32(ctx->r17, -0X65A8);
    // 0x80016C0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80016C10: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x80016C14: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
L_80016C18:
    // 0x80016C18: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80016C1C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80016C20: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80016C24: beq         $t7, $zero, L_80016C50
    if (ctx->r15 == 0) {
        // 0x80016C28: nop
    
            goto L_80016C50;
    }
    // 0x80016C28: nop

    // 0x80016C2C: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016C30: lhu         $a2, 0x58($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X58);
    // 0x80016C34: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80016C38: sra         $t0, $a2, 8
    ctx->r8 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80016C3C: andi        $a2, $t0, 0x7F
    ctx->r6 = ctx->r8 & 0X7F;
    // 0x80016C40: mflo        $t8
    ctx->r24 = lo;
    // 0x80016C44: addu        $a1, $s4, $t8
    ctx->r5 = ADD32(ctx->r20, ctx->r24);
    // 0x80016C48: jal         0x80083250
    // 0x80016C4C: nop

    func_80083250(rdram, ctx);
        goto after_0;
    // 0x80016C4C: nop

    after_0:
L_80016C50:
    // 0x80016C50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016C54: bne         $s0, $s6, L_80016C18
    if (ctx->r16 != ctx->r22) {
        // 0x80016C58: addiu       $s1, $s1, 0xA4
        ctx->r17 = ADD32(ctx->r17, 0XA4);
            goto L_80016C18;
    }
    // 0x80016C58: addiu       $s1, $s1, 0xA4
    ctx->r17 = ADD32(ctx->r17, 0XA4);
L_80016C5C:
    // 0x80016C5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80016C60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80016C64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80016C68: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80016C6C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80016C70: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80016C74: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80016C78: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80016C7C: jr          $ra
    // 0x80016C80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80016C80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80016C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016C84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80016C88: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016C8C: addiu       $v0, $v0, -0x67F0
    ctx->r2 = ADD32(ctx->r2, -0X67F0);
    // 0x80016C90: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80016C94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80016C98: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80016C9C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80016CA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80016CA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80016CA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80016CAC: bne         $t6, $zero, L_80016D18
    if (ctx->r14 != 0) {
        // 0x80016CB0: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80016D18;
    }
    // 0x80016CB0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80016CB4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016CB8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80016CBC: lui         $s3, 0x801A
    ctx->r19 = S32(0X801A << 16);
    // 0x80016CC0: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80016CC4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80016CC8: addiu       $s2, $s2, 0x1890
    ctx->r18 = ADD32(ctx->r18, 0X1890);
    // 0x80016CCC: addiu       $s3, $s3, -0x6768
    ctx->r19 = ADD32(ctx->r19, -0X6768);
    // 0x80016CD0: addiu       $s1, $s1, -0x65A8
    ctx->r17 = ADD32(ctx->r17, -0X65A8);
    // 0x80016CD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80016CD8: addiu       $s5, $zero, 0x10
    ctx->r21 = ADD32(0, 0X10);
    // 0x80016CDC: addiu       $s4, $zero, 0x1C
    ctx->r20 = ADD32(0, 0X1C);
L_80016CE0:
    // 0x80016CE0: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80016CE4: nop

    // 0x80016CE8: beq         $t8, $zero, L_80016D0C
    if (ctx->r24 == 0) {
        // 0x80016CEC: nop
    
            goto L_80016D0C;
    }
    // 0x80016CEC: nop

    // 0x80016CF0: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80016CF4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80016CF8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80016CFC: mflo        $t9
    ctx->r25 = lo;
    // 0x80016D00: addu        $a1, $s3, $t9
    ctx->r5 = ADD32(ctx->r19, ctx->r25);
    // 0x80016D04: jal         0x80083250
    // 0x80016D08: nop

    func_80083250(rdram, ctx);
        goto after_0;
    // 0x80016D08: nop

    after_0:
L_80016D0C:
    // 0x80016D0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016D10: bne         $s0, $s5, L_80016CE0
    if (ctx->r16 != ctx->r21) {
        // 0x80016D14: addiu       $s1, $s1, 0xA4
        ctx->r17 = ADD32(ctx->r17, 0XA4);
            goto L_80016CE0;
    }
    // 0x80016D14: addiu       $s1, $s1, 0xA4
    ctx->r17 = ADD32(ctx->r17, 0XA4);
L_80016D18:
    // 0x80016D18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80016D1C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80016D20: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80016D24: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80016D28: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80016D2C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80016D30: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80016D34: jr          $ra
    // 0x80016D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80016D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80016D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016D3C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016D40: lw          $v0, -0x67B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X67B0);
    // 0x80016D44: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80016D48: beq         $v0, $at, L_80016D88
    if (ctx->r2 == ctx->r1) {
        // 0x80016D4C: lui         $v1, 0x801A
        ctx->r3 = S32(0X801A << 16);
            goto L_80016D88;
    }
    // 0x80016D4C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016D50: addiu       $v1, $v1, -0x67ED
    ctx->r3 = ADD32(ctx->r3, -0X67ED);
    // 0x80016D54: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x80016D58: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80016D5C: bne         $t6, $zero, L_80016D6C
    if (ctx->r14 != 0) {
        // 0x80016D60: addu        $t8, $t8, $v0
        ctx->r24 = ADD32(ctx->r24, ctx->r2);
            goto L_80016D6C;
    }
    // 0x80016D60: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80016D64: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80016D68: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
L_80016D6C:
    // 0x80016D6C: lbu         $t9, -0x187B($t8)
    ctx->r25 = MEM_BU(ctx->r24, -0X187B);
    // 0x80016D70: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016D74: addiu       $v1, $v1, -0x67EF
    ctx->r3 = ADD32(ctx->r3, -0X67EF);
    // 0x80016D78: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016D7C: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x80016D80: jr          $ra
    // 0x80016D84: sb          $t9, -0x67EE($at)
    MEM_B(-0X67EE, ctx->r1) = ctx->r25;
    return;
    // 0x80016D84: sb          $t9, -0x67EE($at)
    MEM_B(-0X67EE, ctx->r1) = ctx->r25;
L_80016D88:
    // 0x80016D88: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016D8C: addiu       $v1, $v1, -0x67EA
    ctx->r3 = ADD32(ctx->r3, -0X67EA);
    // 0x80016D90: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x80016D94: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80016D98: bne         $t0, $zero, L_80016DA8
    if (ctx->r8 != 0) {
        // 0x80016D9C: addu        $t2, $t2, $v0
        ctx->r10 = ADD32(ctx->r10, ctx->r2);
            goto L_80016DA8;
    }
    // 0x80016D9C: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x80016DA0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80016DA4: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_80016DA8:
    // 0x80016DA8: lbu         $t3, -0x187B($t2)
    ctx->r11 = MEM_BU(ctx->r10, -0X187B);
    // 0x80016DAC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016DB0: addiu       $v1, $v1, -0x67EC
    ctx->r3 = ADD32(ctx->r3, -0X67EC);
    // 0x80016DB4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016DB8: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x80016DBC: sb          $t3, -0x67EB($at)
    MEM_B(-0X67EB, ctx->r1) = ctx->r11;
    // 0x80016DC0: jr          $ra
    // 0x80016DC4: nop

    return;
    // 0x80016DC4: nop

;}
RECOMP_FUNC void func_80016DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DC8: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016DCC: lhu         $t6, -0x67E8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X67E8);
    // 0x80016DD0: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80016DD4: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x80016DD8: beq         $at, $zero, L_80016DE4
    if (ctx->r1 == 0) {
        // 0x80016DDC: lui         $at, 0x801A
        ctx->r1 = S32(0X801A << 16);
            goto L_80016DE4;
    }
    // 0x80016DDC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016DE0: sb          $t7, -0x67E6($at)
    MEM_B(-0X67E6, ctx->r1) = ctx->r15;
L_80016DE4:
    // 0x80016DE4: jr          $ra
    // 0x80016DE8: nop

    return;
    // 0x80016DE8: nop

;}
RECOMP_FUNC void func_80016DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DEC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016DF0: addiu       $v0, $v0, -0x67E8
    ctx->r2 = ADD32(ctx->r2, -0X67E8);
    // 0x80016DF4: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80016DF8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016DFC: jr          $ra
    // 0x80016E00: sb          $zero, -0x67E6($at)
    MEM_B(-0X67E6, ctx->r1) = 0;
    return;
    // 0x80016E00: sb          $zero, -0x67E6($at)
    MEM_B(-0X67E6, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80016E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016E04: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016E08: lbu         $t6, -0x67E4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67E4);
    // 0x80016E0C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80016E10: bne         $t6, $zero, L_80016E1C
    if (ctx->r14 != 0) {
        // 0x80016E14: lui         $at, 0x801A
        ctx->r1 = S32(0X801A << 16);
            goto L_80016E1C;
    }
    // 0x80016E14: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016E18: sb          $t7, -0x67E5($at)
    MEM_B(-0X67E5, ctx->r1) = ctx->r15;
L_80016E1C:
    // 0x80016E1C: jr          $ra
    // 0x80016E20: nop

    return;
    // 0x80016E20: nop

;}
RECOMP_FUNC void func_80016E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016E24: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016E28: lbu         $t6, -0x67E4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67E4);
    // 0x80016E2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80016E30: beq         $t6, $zero, L_80016E3C
    if (ctx->r14 == 0) {
        // 0x80016E34: lui         $at, 0x801A
        ctx->r1 = S32(0X801A << 16);
            goto L_80016E3C;
    }
    // 0x80016E34: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016E38: sb          $t7, -0x67E5($at)
    MEM_B(-0X67E5, ctx->r1) = ctx->r15;
L_80016E3C:
    // 0x80016E3C: jr          $ra
    // 0x80016E40: nop

    return;
    // 0x80016E40: nop

;}
RECOMP_FUNC void func_80016E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016E44: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80016E48: addiu       $a1, $a1, -0x67B0
    ctx->r5 = ADD32(ctx->r5, -0X67B0);
    // 0x80016E4C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80016E50: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016E54: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80016E58: andi        $v0, $t6, 0x7FFF
    ctx->r2 = ctx->r14 & 0X7FFF;
    // 0x80016E5C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80016E60: addiu       $v1, $v1, -0x67E0
    ctx->r3 = ADD32(ctx->r3, -0X67E0);
    // 0x80016E64: addiu       $a0, $a0, -0x67E2
    ctx->r4 = ADD32(ctx->r4, -0X67E2);
L_80016E68:
    // 0x80016E68: lhu         $t8, 0x0($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X0);
    // 0x80016E6C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80016E70: beq         $v0, $t8, L_80016EC0
    if (ctx->r2 == ctx->r24) {
        // 0x80016E74: sltu        $at, $a0, $v1
        ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
            goto L_80016EC0;
    }
    // 0x80016E74: sltu        $at, $a0, $v1
    ctx->r1 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80016E78: bne         $at, $zero, L_80016E68
    if (ctx->r1 != 0) {
        // 0x80016E7C: nop
    
            goto L_80016E68;
    }
    // 0x80016E7C: nop

    // 0x80016E80: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80016E84: addiu       $a0, $a0, -0x67E2
    ctx->r4 = ADD32(ctx->r4, -0X67E2);
    // 0x80016E88: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80016E8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80016E90:
    // 0x80016E90: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x80016E94: nop

    // 0x80016E98: bne         $t9, $zero, L_80016EB4
    if (ctx->r25 != 0) {
        // 0x80016E9C: lui         $at, 0x801A
        ctx->r1 = S32(0X801A << 16);
            goto L_80016EB4;
    }
    // 0x80016E9C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016EA0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80016EA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80016EA8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80016EAC: jr          $ra
    // 0x80016EB0: sb          $t0, -0x67E3($at)
    MEM_B(-0X67E3, ctx->r1) = ctx->r8;
    return;
    // 0x80016EB0: sb          $t0, -0x67E3($at)
    MEM_B(-0X67E3, ctx->r1) = ctx->r8;
L_80016EB4:
    // 0x80016EB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80016EB8: bne         $v1, $a1, L_80016E90
    if (ctx->r3 != ctx->r5) {
        // 0x80016EBC: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80016E90;
    }
    // 0x80016EBC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80016EC0:
    // 0x80016EC0: jr          $ra
    // 0x80016EC4: nop

    return;
    // 0x80016EC4: nop

;}
RECOMP_FUNC void func_80016EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016EC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016ECC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80016ED0: lhu         $t6, 0x2A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2A);
    // 0x80016ED4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80016ED8: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80016EDC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80016EE0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80016EE4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80016EE8: addiu       $t8, $t8, -0x67E2
    ctx->r24 = ADD32(ctx->r24, -0X67E2);
    // 0x80016EEC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80016EF0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80016EF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016EF8: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x80016EFC: addiu       $s1, $s1, -0x65A8
    ctx->r17 = ADD32(ctx->r17, -0X65A8);
    // 0x80016F00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80016F04: addiu       $s2, $zero, 0x10
    ctx->r18 = ADD32(0, 0X10);
L_80016F08:
    // 0x80016F08: lhu         $t9, 0x0($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X0);
    // 0x80016F0C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x80016F10: nop

    // 0x80016F14: bne         $t9, $t0, L_80016F24
    if (ctx->r25 != ctx->r8) {
        // 0x80016F18: nop
    
            goto L_80016F24;
    }
    // 0x80016F18: nop

    // 0x80016F1C: jal         0x80016AD8
    // 0x80016F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80016AD8(rdram, ctx);
        goto after_0;
    // 0x80016F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80016F24:
    // 0x80016F24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80016F28: bne         $s0, $s2, L_80016F08
    if (ctx->r16 != ctx->r18) {
        // 0x80016F2C: addiu       $s1, $s1, 0xA4
        ctx->r17 = ADD32(ctx->r17, 0XA4);
            goto L_80016F08;
    }
    // 0x80016F2C: addiu       $s1, $s1, 0xA4
    ctx->r17 = ADD32(ctx->r17, 0XA4);
    // 0x80016F30: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x80016F34: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80016F38: andi        $t3, $zero, 0xFF
    ctx->r11 = 0 & 0XFF;
    // 0x80016F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80016F40: sh          $t3, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r11;
    // 0x80016F44: addiu       $t2, $t2, -0x67E3
    ctx->r10 = ADD32(ctx->r10, -0X67E3);
    // 0x80016F48: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80016F4C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80016F50: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80016F54: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80016F58: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80016F5C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80016F60: jr          $ra
    // 0x80016F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80016F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80016F68: nop

    // 0x80016F6C: nop

;}
RECOMP_FUNC void func_80016F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016F70: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016F74: lw          $v0, -0x5C0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5C0C);
    // 0x80016F78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80016F7C: sltiu       $at, $v0, 0x400
    ctx->r1 = ctx->r2 < 0X400 ? 1 : 0;
    // 0x80016F80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80016F84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80016F88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80016F8C: bne         $at, $zero, L_80016FA0
    if (ctx->r1 != 0) {
        // 0x80016F90: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80016FA0;
    }
    // 0x80016F90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80016F94: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016F98: b           L_80016FB8
    // 0x80016F9C: sw          $v0, -0x3B48($at)
    MEM_W(-0X3B48, ctx->r1) = ctx->r2;
        goto L_80016FB8;
    // 0x80016F9C: sw          $v0, -0x3B48($at)
    MEM_W(-0X3B48, ctx->r1) = ctx->r2;
L_80016FA0:
    // 0x80016FA0: lui         $t6, 0x801A
    ctx->r14 = S32(0X801A << 16);
    // 0x80016FA4: lbu         $t6, -0x67F7($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X67F7);
    // 0x80016FA8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80016FAC: bne         $t6, $zero, L_80016FB8
    if (ctx->r14 != 0) {
        // 0x80016FB0: nop
    
            goto L_80016FB8;
    }
    // 0x80016FB0: nop

    // 0x80016FB4: sw          $zero, -0x3B48($at)
    MEM_W(-0X3B48, ctx->r1) = 0;
L_80016FB8:
    // 0x80016FB8: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80016FBC: addiu       $a1, $a1, -0x67F2
    ctx->r5 = ADD32(ctx->r5, -0X67F2);
    // 0x80016FC0: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x80016FC4: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x80016FC8: beq         $v1, $zero, L_80017008
    if (ctx->r3 == 0) {
        // 0x80016FCC: lui         $t1, 0x801A
        ctx->r9 = S32(0X801A << 16);
            goto L_80017008;
    }
    // 0x80016FCC: lui         $t1, 0x801A
    ctx->r9 = S32(0X801A << 16);
    // 0x80016FD0: lhu         $t7, -0x67F6($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X67F6);
    // 0x80016FD4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80016FD8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80016FDC: bne         $t8, $zero, L_80017008
    if (ctx->r24 != 0) {
        // 0x80016FE0: addiu       $v0, $v0, -0x67F1
        ctx->r2 = ADD32(ctx->r2, -0X67F1);
            goto L_80017008;
    }
    // 0x80016FE0: addiu       $v0, $v0, -0x67F1
    ctx->r2 = ADD32(ctx->r2, -0X67F1);
    // 0x80016FE4: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80016FE8: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x80016FEC: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80016FF0: andi        $a0, $t0, 0xFF
    ctx->r4 = ctx->r8 & 0XFF;
    // 0x80016FF4: beq         $a0, $at, L_80017004
    if (ctx->r4 == ctx->r1) {
        // 0x80016FF8: sb          $t0, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r8;
            goto L_80017004;
    }
    // 0x80016FF8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x80016FFC: bne         $a0, $zero, L_80017008
    if (ctx->r4 != 0) {
        // 0x80017000: nop
    
            goto L_80017008;
    }
    // 0x80017000: nop

L_80017004:
    // 0x80017004: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80017008:
    // 0x80017008: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8001700C: addiu       $a0, $a0, -0x67EA
    ctx->r4 = ADD32(ctx->r4, -0X67EA);
    // 0x80017010: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80017014: nop

    // 0x80017018: beq         $v0, $zero, L_80017080
    if (ctx->r2 == 0) {
        // 0x8001701C: nop
    
            goto L_80017080;
    }
    // 0x8001701C: nop

    // 0x80017020: lbu         $t1, -0x67F3($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X67F3);
    // 0x80017024: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80017028: bne         $t1, $zero, L_80017080
    if (ctx->r9 != 0) {
        // 0x8001702C: nop
    
            goto L_80017080;
    }
    // 0x8001702C: nop

    // 0x80017030: lhu         $t2, -0x67F6($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X67F6);
    // 0x80017034: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017038: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x8001703C: bne         $t3, $zero, L_80017080
    if (ctx->r11 != 0) {
        // 0x80017040: addiu       $v1, $v1, -0x67EB
        ctx->r3 = ADD32(ctx->r3, -0X67EB);
            goto L_80017080;
    }
    // 0x80017040: addiu       $v1, $v1, -0x67EB
    ctx->r3 = ADD32(ctx->r3, -0X67EB);
    // 0x80017044: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x80017048: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x8001704C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80017050: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x80017054: bne         $t6, $zero, L_80017080
    if (ctx->r14 != 0) {
        // 0x80017058: sb          $t5, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r13;
            goto L_80017080;
    }
    // 0x80017058: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x8001705C: addiu       $t8, $v0, -0x4
    ctx->r24 = ADD32(ctx->r2, -0X4);
    // 0x80017060: lbu         $t7, -0x67EC($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X67EC);
    // 0x80017064: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80017068: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x8001706C: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x80017070: beq         $at, $zero, L_80017080
    if (ctx->r1 == 0) {
        // 0x80017074: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_80017080;
    }
    // 0x80017074: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x80017078: jal         0x8001698C
    // 0x8001707C: nop

    func_8001698C(rdram, ctx);
        goto after_0;
    // 0x8001707C: nop

    after_0:
L_80017080:
    // 0x80017080: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017084: addiu       $a1, $a1, -0x67ED
    ctx->r5 = ADD32(ctx->r5, -0X67ED);
    // 0x80017088: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8001708C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80017090: lbu         $a0, -0x67F3($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X67F3);
    // 0x80017094: beq         $v0, $zero, L_80017100
    if (ctx->r2 == 0) {
        // 0x80017098: nop
    
            goto L_80017100;
    }
    // 0x80017098: nop

    // 0x8001709C: bne         $a0, $zero, L_80017100
    if (ctx->r4 != 0) {
        // 0x800170A0: lui         $t0, 0x801A
        ctx->r8 = S32(0X801A << 16);
            goto L_80017100;
    }
    // 0x800170A0: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x800170A4: lhu         $t0, -0x67F6($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X67F6);
    // 0x800170A8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800170AC: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x800170B0: bne         $t1, $zero, L_80017100
    if (ctx->r9 != 0) {
        // 0x800170B4: addiu       $v1, $v1, -0x67EE
        ctx->r3 = ADD32(ctx->r3, -0X67EE);
            goto L_80017100;
    }
    // 0x800170B4: addiu       $v1, $v1, -0x67EE
    ctx->r3 = ADD32(ctx->r3, -0X67EE);
    // 0x800170B8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x800170BC: lui         $t5, 0x801A
    ctx->r13 = S32(0X801A << 16);
    // 0x800170C0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800170C4: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x800170C8: bne         $t4, $zero, L_80017100
    if (ctx->r12 != 0) {
        // 0x800170CC: sb          $t3, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r11;
            goto L_80017100;
    }
    // 0x800170CC: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x800170D0: addiu       $t6, $v0, -0x4
    ctx->r14 = ADD32(ctx->r2, -0X4);
    // 0x800170D4: lbu         $t5, -0x67EF($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X67EF);
    // 0x800170D8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x800170DC: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x800170E0: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    // 0x800170E4: beq         $at, $zero, L_80017100
    if (ctx->r1 == 0) {
        // 0x800170E8: sb          $t5, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r13;
            goto L_80017100;
    }
    // 0x800170E8: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x800170EC: jal         0x80016A24
    // 0x800170F0: nop

    func_80016A24(rdram, ctx);
        goto after_1;
    // 0x800170F0: nop

    after_1:
    // 0x800170F4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800170F8: lbu         $a0, -0x67F3($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X67F3);
    // 0x800170FC: nop

L_80017100:
    // 0x80017100: bne         $a0, $zero, L_80017170
    if (ctx->r4 != 0) {
        // 0x80017104: lui         $t8, 0x801A
        ctx->r24 = S32(0X801A << 16);
            goto L_80017170;
    }
    // 0x80017104: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x80017108: lhu         $t8, -0x67F6($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X67F6);
    // 0x8001710C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80017110: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80017114: bne         $t9, $zero, L_80017170
    if (ctx->r25 != 0) {
        // 0x80017118: lui         $v1, 0x801A
        ctx->r3 = S32(0X801A << 16);
            goto L_80017170;
    }
    // 0x80017118: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8001711C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80017120: addiu       $s1, $s1, -0x67E3
    ctx->r17 = ADD32(ctx->r17, -0X67E3);
    // 0x80017124: addiu       $v1, $v1, -0x67E2
    ctx->r3 = ADD32(ctx->r3, -0X67E2);
    // 0x80017128: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8001712C:
    // 0x8001712C: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x80017130: addu        $v0, $s1, $s0
    ctx->r2 = ADD32(ctx->r17, ctx->r16);
    // 0x80017134: beq         $t0, $zero, L_80017164
    if (ctx->r8 == 0) {
        // 0x80017138: nop
    
            goto L_80017164;
    }
    // 0x80017138: nop

    // 0x8001713C: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80017140: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x80017144: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80017148: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x8001714C: bne         $t3, $zero, L_80017164
    if (ctx->r11 != 0) {
        // 0x80017150: sb          $t2, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r10;
            goto L_80017164;
    }
    // 0x80017150: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x80017154: jal         0x80016EC8
    // 0x80017158: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_80016EC8(rdram, ctx);
        goto after_2;
    // 0x80017158: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x8001715C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80017160: nop

L_80017164:
    // 0x80017164: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80017168: bne         $s0, $s2, L_8001712C
    if (ctx->r16 != ctx->r18) {
        // 0x8001716C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8001712C;
    }
    // 0x8001716C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80017170:
    // 0x80017170: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80017174: addiu       $v1, $v1, -0x67E6
    ctx->r3 = ADD32(ctx->r3, -0X67E6);
    // 0x80017178: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8001717C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80017180: beq         $v0, $zero, L_800171C4
    if (ctx->r2 == 0) {
        // 0x80017184: addiu       $a1, $a1, -0x67E5
        ctx->r5 = ADD32(ctx->r5, -0X67E5);
            goto L_800171C4;
    }
    // 0x80017184: addiu       $a1, $a1, -0x67E5
    ctx->r5 = ADD32(ctx->r5, -0X67E5);
    // 0x80017188: lui         $t4, 0x801A
    ctx->r12 = S32(0X801A << 16);
    // 0x8001718C: lbu         $t4, -0x67F3($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X67F3);
    // 0x80017190: lui         $t5, 0x801A
    ctx->r13 = S32(0X801A << 16);
    // 0x80017194: bne         $t4, $zero, L_800171C4
    if (ctx->r12 != 0) {
        // 0x80017198: nop
    
            goto L_800171C4;
    }
    // 0x80017198: nop

    // 0x8001719C: lhu         $t5, -0x67F6($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X67F6);
    // 0x800171A0: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x800171A4: andi        $t6, $t5, 0x7
    ctx->r14 = ctx->r13 & 0X7;
    // 0x800171A8: bne         $t6, $zero, L_800171C4
    if (ctx->r14 != 0) {
        // 0x800171AC: lui         $t8, 0x801A
        ctx->r24 = S32(0X801A << 16);
            goto L_800171C4;
    }
    // 0x800171AC: lui         $t8, 0x801A
    ctx->r24 = S32(0X801A << 16);
    // 0x800171B0: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x800171B4: lhu         $t8, -0x67E8($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X67E8);
    // 0x800171B8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800171BC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800171C0: sh          $t9, -0x67E8($at)
    MEM_H(-0X67E8, ctx->r1) = ctx->r25;
L_800171C4:
    // 0x800171C4: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x800171C8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800171CC: beq         $v1, $zero, L_80017210
    if (ctx->r3 == 0) {
        // 0x800171D0: addiu       $s1, $s1, -0x67F4
        ctx->r17 = ADD32(ctx->r17, -0X67F4);
            goto L_80017210;
    }
    // 0x800171D0: addiu       $s1, $s1, -0x67F4
    ctx->r17 = ADD32(ctx->r17, -0X67F4);
    // 0x800171D4: lui         $t0, 0x801A
    ctx->r8 = S32(0X801A << 16);
    // 0x800171D8: lhu         $t0, -0x67F6($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X67F6);
    // 0x800171DC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800171E0: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800171E4: bne         $t1, $zero, L_80017210
    if (ctx->r9 != 0) {
        // 0x800171E8: addiu       $v0, $v0, -0x67E4
        ctx->r2 = ADD32(ctx->r2, -0X67E4);
            goto L_80017210;
    }
    // 0x800171E8: addiu       $v0, $v0, -0x67E4
    ctx->r2 = ADD32(ctx->r2, -0X67E4);
    // 0x800171EC: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x800171F0: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x800171F4: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x800171F8: andi        $a0, $t3, 0xFF
    ctx->r4 = ctx->r11 & 0XFF;
    // 0x800171FC: beq         $a0, $at, L_8001720C
    if (ctx->r4 == ctx->r1) {
        // 0x80017200: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_8001720C;
    }
    // 0x80017200: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x80017204: bne         $a0, $zero, L_80017214
    if (ctx->r4 != 0) {
        // 0x80017208: andi        $v0, $zero, 0xFF
        ctx->r2 = 0 & 0XFF;
            goto L_80017214;
    }
    // 0x80017208: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_8001720C:
    // 0x8001720C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_80017210:
    // 0x80017210: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_80017214:
    // 0x80017214: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80017218: beq         $at, $zero, L_8001733C
    if (ctx->r1 == 0) {
        // 0x8001721C: sb          $zero, 0x0($s1)
        MEM_B(0X0, ctx->r17) = 0;
            goto L_8001733C;
    }
    // 0x8001721C: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80017220: lui         $s2, 0x801A
    ctx->r18 = S32(0X801A << 16);
    // 0x80017224: addiu       $s2, $s2, -0x5B68
    ctx->r18 = ADD32(ctx->r18, -0X5B68);
L_80017228:
    // 0x80017228: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x8001722C: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x80017230: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80017234: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x80017238: lui         $t5, 0x801A
    ctx->r13 = S32(0X801A << 16);
    // 0x8001723C: addiu       $t5, $t5, -0x65A8
    ctx->r13 = ADD32(ctx->r13, -0X65A8);
    // 0x80017240: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80017244: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80017248: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8001724C: lbu         $v1, 0xF($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0XF);
    // 0x80017250: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80017254: beq         $v1, $zero, L_800172B4
    if (ctx->r3 == 0) {
        // 0x80017258: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_800172B4;
    }
    // 0x80017258: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8001725C: sb          $t7, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r15;
    // 0x80017260: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80017264: nop

    // 0x80017268: lbu         $t8, 0xF($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XF);
    // 0x8001726C: nop

    // 0x80017270: bne         $t8, $zero, L_800172B4
    if (ctx->r24 != 0) {
        // 0x80017274: nop
    
            goto L_800172B4;
    }
    // 0x80017274: nop

    // 0x80017278: lbu         $t9, 0xE($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE);
    // 0x8001727C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80017280: beq         $t9, $zero, L_800172B4
    if (ctx->r25 == 0) {
        // 0x80017284: lui         $t2, 0x801A
        ctx->r10 = S32(0X801A << 16);
            goto L_800172B4;
    }
    // 0x80017284: lui         $t2, 0x801A
    ctx->r10 = S32(0X801A << 16);
    // 0x80017288: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8001728C: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x80017290: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x80017294: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80017298: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001729C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800172A0: addiu       $t2, $t2, -0x6768
    ctx->r10 = ADD32(ctx->r10, -0X6768);
    // 0x800172A4: jal         0x800832E0
    // 0x800172A8: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    func_800832E0(rdram, ctx);
        goto after_3;
    // 0x800172A8: addu        $a1, $t1, $t2
    ctx->r5 = ADD32(ctx->r9, ctx->r10);
    after_3:
    // 0x800172AC: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x800172B0: nop

L_800172B4:
    // 0x800172B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800172B8: nop

    // 0x800172BC: beq         $v0, $zero, L_80017320
    if (ctx->r2 == 0) {
        // 0x800172C0: nop
    
            goto L_80017320;
    }
    // 0x800172C0: nop

    // 0x800172C4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x800172C8: andi        $t4, $v0, 0x7FFF
    ctx->r12 = ctx->r2 & 0X7FFF;
    // 0x800172CC: beq         $v1, $zero, L_800172E0
    if (ctx->r3 == 0) {
        // 0x800172D0: sltiu       $at, $t4, 0x100
        ctx->r1 = ctx->r12 < 0X100 ? 1 : 0;
            goto L_800172E0;
    }
    // 0x800172D0: sltiu       $at, $t4, 0x100
    ctx->r1 = ctx->r12 < 0X100 ? 1 : 0;
    // 0x800172D4: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x800172D8: b           L_80017320
    // 0x800172DC: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
        goto L_80017320;
    // 0x800172DC: sb          $t3, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r11;
L_800172E0:
    // 0x800172E0: beq         $at, $zero, L_80017318
    if (ctx->r1 == 0) {
        // 0x800172E4: lui         $t5, 0x801A
        ctx->r13 = S32(0X801A << 16);
            goto L_80017318;
    }
    // 0x800172E4: lui         $t5, 0x801A
    ctx->r13 = S32(0X801A << 16);
    // 0x800172E8: lbu         $t5, -0x67F3($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X67F3);
    // 0x800172EC: lui         $t7, 0x801A
    ctx->r15 = S32(0X801A << 16);
    // 0x800172F0: bne         $t5, $zero, L_80017320
    if (ctx->r13 != 0) {
        // 0x800172F4: nop
    
            goto L_80017320;
    }
    // 0x800172F4: nop

    // 0x800172F8: lhu         $t6, 0x1A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X1A);
    // 0x800172FC: lhu         $t7, -0x67E8($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X67E8);
    // 0x80017300: nop

    // 0x80017304: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80017308: jal         0x80017354
    // 0x8001730C: sh          $t8, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r24;
    func_80017354(rdram, ctx);
        goto after_4;
    // 0x8001730C: sh          $t8, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r24;
    after_4:
    // 0x80017310: b           L_80017324
    // 0x80017314: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
        goto L_80017324;
    // 0x80017314: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
L_80017318:
    // 0x80017318: jal         0x80017354
    // 0x8001731C: nop

    func_80017354(rdram, ctx);
        goto after_5;
    // 0x8001731C: nop

    after_5:
L_80017320:
    // 0x80017320: lbu         $t9, 0x0($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X0);
L_80017324:
    // 0x80017324: nop

    // 0x80017328: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8001732C: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x80017330: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80017334: bne         $at, $zero, L_80017228
    if (ctx->r1 != 0) {
        // 0x80017338: sb          $t0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r8;
            goto L_80017228;
    }
    // 0x80017338: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
L_8001733C:
    // 0x8001733C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80017340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80017344: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80017348: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001734C: jr          $ra
    // 0x80017350: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80017350: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80017354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017354: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80017358: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
    // 0x8001735C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80017360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017368: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x8001736C: lhu         $t6, 0x1A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X1A);
    // 0x80017370: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80017374: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80017378: sh          $t9, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r25;
    // 0x8001737C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80017380: nop

    // 0x80017384: lhu         $v1, 0x1A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1A);
    // 0x80017388: nop

    // 0x8001738C: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x80017390: bne         $at, $zero, L_80017470
    if (ctx->r1 != 0) {
        // 0x80017394: andi        $t0, $v1, 0xFF
        ctx->r8 = ctx->r3 & 0XFF;
            goto L_80017470;
    }
    // 0x80017394: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x80017398: sh          $t0, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r8;
    // 0x8001739C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800173A0: nop

    // 0x800173A4: lbu         $t1, 0x21($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X21);
    // 0x800173A8: nop

    // 0x800173AC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800173B0: sb          $t2, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r10;
    // 0x800173B4: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x800173B8: nop

    // 0x800173BC: lbu         $t4, 0x21($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X21);
    // 0x800173C0: nop

    // 0x800173C4: bne         $t4, $zero, L_800173E8
    if (ctx->r12 != 0) {
        // 0x800173C8: nop
    
            goto L_800173E8;
    }
    // 0x800173C8: nop

    // 0x800173CC: jal         0x800174AC
    // 0x800173D0: nop

    func_800174AC(rdram, ctx);
        goto after_0;
    // 0x800173D0: nop

    after_0:
    // 0x800173D4: jal         0x80019350
    // 0x800173D8: nop

    func_80019350(rdram, ctx);
        goto after_1;
    // 0x800173D8: nop

    after_1:
    // 0x800173DC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800173E0: b           L_800173F8
    // 0x800173E4: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
        goto L_800173F8;
    // 0x800173E4: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
L_800173E8:
    // 0x800173E8: jal         0x80017920
    // 0x800173EC: nop

    func_80017920(rdram, ctx);
        goto after_2;
    // 0x800173EC: nop

    after_2:
    // 0x800173F0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800173F4: addiu       $a0, $a0, -0x5B68
    ctx->r4 = ADD32(ctx->r4, -0X5B68);
L_800173F8:
    // 0x800173F8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800173FC: nop

    // 0x80017400: lbu         $t5, 0x1D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1D);
    // 0x80017404: nop

    // 0x80017408: beq         $t5, $zero, L_80017424
    if (ctx->r13 == 0) {
        // 0x8001740C: nop
    
            goto L_80017424;
    }
    // 0x8001740C: nop

    // 0x80017410: jal         0x800182AC
    // 0x80017414: nop

    func_800182AC(rdram, ctx);
        goto after_3;
    // 0x80017414: nop

    after_3:
    // 0x80017418: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001741C: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017420: nop

L_80017424:
    // 0x80017424: lbu         $t7, 0x47($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X47);
    // 0x80017428: nop

    // 0x8001742C: beq         $t7, $zero, L_80017448
    if (ctx->r15 == 0) {
        // 0x80017430: nop
    
            goto L_80017448;
    }
    // 0x80017430: nop

    // 0x80017434: jal         0x800186F8
    // 0x80017438: nop

    func_800186F8(rdram, ctx);
        goto after_4;
    // 0x80017438: nop

    after_4:
    // 0x8001743C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017440: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017444: nop

L_80017448:
    // 0x80017448: lbu         $t6, 0x5B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5B);
    // 0x8001744C: nop

    // 0x80017450: beq         $t6, $zero, L_80017484
    if (ctx->r14 == 0) {
        // 0x80017454: nop
    
            goto L_80017484;
    }
    // 0x80017454: nop

    // 0x80017458: jal         0x80018B0C
    // 0x8001745C: nop

    func_80018B0C(rdram, ctx);
        goto after_5;
    // 0x8001745C: nop

    after_5:
    // 0x80017460: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80017464: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017468: b           L_80017488
    // 0x8001746C: lbu         $t8, 0x92($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X92);
        goto L_80017488;
    // 0x8001746C: lbu         $t8, 0x92($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X92);
L_80017470:
    // 0x80017470: jal         0x80017B48
    // 0x80017474: nop

    func_80017B48(rdram, ctx);
        goto after_6;
    // 0x80017474: nop

    after_6:
    // 0x80017478: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8001747C: lw          $v0, -0x5B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5B68);
    // 0x80017480: nop

L_80017484:
    // 0x80017484: lbu         $t8, 0x92($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X92);
L_80017488:
    // 0x80017488: nop

    // 0x8001748C: beq         $t8, $zero, L_800174A0
    if (ctx->r24 == 0) {
        // 0x80017490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800174A0;
    }
    // 0x80017490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017494: jal         0x80019188
    // 0x80017498: nop

    func_80019188(rdram, ctx);
        goto after_7;
    // 0x80017498: nop

    after_7:
    // 0x8001749C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800174A0:
    // 0x800174A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800174A4: jr          $ra
    // 0x800174A8: nop

    return;
    // 0x800174A8: nop

;}
