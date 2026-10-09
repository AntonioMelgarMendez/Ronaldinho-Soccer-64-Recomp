#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803AF0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF0B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AF0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF0B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803AF0BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AF0C0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x803AF0C4: jal         0x80020318
    // 0x803AF0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80020318(rdram, ctx);
        goto after_0;
    // 0x803AF0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803AF0CC: jal         0x8004DF70
    // 0x803AF0D0: nop

    func_8004DF70(rdram, ctx);
        goto after_1;
    // 0x803AF0D0: nop

    after_1:
    // 0x803AF0D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803AF0D8: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x803AF0DC: lb          $v1, 0x44($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X44);
    // 0x803AF0E0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x803AF0E4: beq         $v1, $zero, L_803AF0FC
    if (ctx->r3 == 0) {
        // 0x803AF0E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_803AF0FC;
    }
    // 0x803AF0E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803AF0EC: beq         $v1, $v0, L_803AF10C
    if (ctx->r3 == ctx->r2) {
        // 0x803AF0F0: nop
    
            goto L_803AF10C;
    }
    // 0x803AF0F0: nop

    // 0x803AF0F4: b           L_803AF130
    // 0x803AF0F8: lbu         $t7, 0x3E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3E);
        goto L_803AF130;
    // 0x803AF0F8: lbu         $t7, 0x3E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3E);
L_803AF0FC:
    // 0x803AF0FC: jal         0x80037D6C
    // 0x803AF100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037D6C(rdram, ctx);
        goto after_2;
    // 0x803AF100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803AF104: b           L_803AF228
    // 0x803AF108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF228;
    // 0x803AF108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF10C:
    // 0x803AF10C: lb          $t6, 0x68($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X68);
    // 0x803AF110: nop

    // 0x803AF114: beq         $v0, $t6, L_803AF12C
    if (ctx->r2 == ctx->r14) {
        // 0x803AF118: nop
    
            goto L_803AF12C;
    }
    // 0x803AF118: nop

    // 0x803AF11C: jal         0x80037D6C
    // 0x803AF120: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037D6C(rdram, ctx);
        goto after_3;
    // 0x803AF120: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803AF124: b           L_803AF228
    // 0x803AF128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF228;
    // 0x803AF128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF12C:
    // 0x803AF12C: lbu         $t7, 0x3E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3E);
L_803AF130:
    // 0x803AF130: nop

    // 0x803AF134: bne         $v0, $t7, L_803AF14C
    if (ctx->r2 != ctx->r15) {
        // 0x803AF138: nop
    
            goto L_803AF14C;
    }
    // 0x803AF138: nop

    // 0x803AF13C: jal         0x803AF5A4
    // 0x803AF140: nop

    func_803AF5A4(rdram, ctx);
        goto after_4;
    // 0x803AF140: nop

    after_4:
    // 0x803AF144: b           L_803AF228
    // 0x803AF148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF228;
    // 0x803AF148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF14C:
    // 0x803AF14C: jal         0x80036234
    // 0x803AF150: nop

    func_80036234(rdram, ctx);
        goto after_5;
    // 0x803AF150: nop

    after_5:
    // 0x803AF154: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803AF158: jal         0x80035FF0
    // 0x803AF15C: addiu       $a0, $a0, 0x1E8C
    ctx->r4 = ADD32(ctx->r4, 0X1E8C);
    func_80035FF0(rdram, ctx);
        goto after_6;
    // 0x803AF15C: addiu       $a0, $a0, 0x1E8C
    ctx->r4 = ADD32(ctx->r4, 0X1E8C);
    after_6:
    // 0x803AF160: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803AF164: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803AF168: jal         0x80049E40
    // 0x803AF16C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_7;
    // 0x803AF16C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_7:
    // 0x803AF170: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803AF174: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AF178: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803AF17C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803AF180: sh          $t8, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r24;
    // 0x803AF184: lbu         $t9, 0x754($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X754);
    // 0x803AF188: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x803AF18C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803AF190: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x803AF194: bne         $t1, $at, L_803AF1B0
    if (ctx->r9 != ctx->r1) {
        // 0x803AF198: sb          $t0, 0x754($v0)
        MEM_B(0X754, ctx->r2) = ctx->r8;
            goto L_803AF1B0;
    }
    // 0x803AF198: sb          $t0, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r8;
    // 0x803AF19C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803AF1A0: sb          $zero, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = 0;
    // 0x803AF1A4: sb          $v1, 0x722($v0)
    MEM_B(0X722, ctx->r2) = ctx->r3;
    // 0x803AF1A8: sb          $v1, 0x73A($v0)
    MEM_B(0X73A, ctx->r2) = ctx->r3;
    // 0x803AF1AC: sb          $v1, 0x752($v0)
    MEM_B(0X752, ctx->r2) = ctx->r3;
L_803AF1B0:
    // 0x803AF1B0: jal         0x803AF338
    // 0x803AF1B4: nop

    func_803AF338(rdram, ctx);
        goto after_8;
    // 0x803AF1B4: nop

    after_8:
    // 0x803AF1B8: jal         0x80039D98
    // 0x803AF1BC: nop

    func_80039D98(rdram, ctx);
        goto after_9;
    // 0x803AF1BC: nop

    after_9:
    // 0x803AF1C0: jal         0x8006FB58
    // 0x803AF1C4: nop

    func_8006FB58(rdram, ctx);
        goto after_10;
    // 0x803AF1C4: nop

    after_10:
    // 0x803AF1C8: jal         0x803AF3B4
    // 0x803AF1CC: nop

    func_803AF3B4(rdram, ctx);
        goto after_11;
    // 0x803AF1CC: nop

    after_11:
    // 0x803AF1D0: jal         0x803AF418
    // 0x803AF1D4: nop

    func_803AF418(rdram, ctx);
        goto after_12;
    // 0x803AF1D4: nop

    after_12:
    // 0x803AF1D8: jal         0x803AF47C
    // 0x803AF1DC: nop

    func_803AF47C(rdram, ctx);
        goto after_13;
    // 0x803AF1DC: nop

    after_13:
    // 0x803AF1E0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AF1E4: jal         0x8002AAC0
    // 0x803AF1E8: addiu       $a0, $a0, 0x560
    ctx->r4 = ADD32(ctx->r4, 0X560);
    func_8002AAC0(rdram, ctx);
        goto after_14;
    // 0x803AF1E8: addiu       $a0, $a0, 0x560
    ctx->r4 = ADD32(ctx->r4, 0X560);
    after_14:
    // 0x803AF1EC: jal         0x803AF4E0
    // 0x803AF1F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803AF4E0(rdram, ctx);
        goto after_15;
    // 0x803AF1F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x803AF1F4: jal         0x803AF4E0
    // 0x803AF1F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803AF4E0(rdram, ctx);
        goto after_16;
    // 0x803AF1F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x803AF1FC: jal         0x803AF734
    // 0x803AF200: nop

    func_803AF734(rdram, ctx);
        goto after_17;
    // 0x803AF200: nop

    after_17:
    // 0x803AF204: jal         0x803AF780
    // 0x803AF208: nop

    func_803AF780(rdram, ctx);
        goto after_18;
    // 0x803AF208: nop

    after_18:
    // 0x803AF20C: jal         0x8000AB98
    // 0x803AF210: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8000AB98(rdram, ctx);
        goto after_19;
    // 0x803AF210: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_19:
    // 0x803AF214: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803AF218: addiu       $a0, $a0, -0xDCC
    ctx->r4 = ADD32(ctx->r4, -0XDCC);
    // 0x803AF21C: jal         0x8004AE38
    // 0x803AF220: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_20;
    // 0x803AF220: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_20:
    // 0x803AF224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF228:
    // 0x803AF228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AF22C: jr          $ra
    // 0x803AF230: nop

    return;
    // 0x803AF230: nop

;}
RECOMP_FUNC void func_803AF234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF234: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803AF238: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803AF23C: lhu         $t6, 0x740($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X740);
    // 0x803AF240: lhu         $t7, 0x6F8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6F8);
    // 0x803AF244: lhu         $t9, 0x710($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X710);
    // 0x803AF248: lhu         $t1, 0x728($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X728);
    // 0x803AF24C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF250: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x803AF254: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AF258: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x803AF25C: or          $a0, $t0, $t1
    ctx->r4 = ctx->r8 | ctx->r9;
    // 0x803AF260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF264: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x803AF268: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AF26C: jal         0x80035B2C
    // 0x803AF270: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80035B2C(rdram, ctx);
        goto after_0;
    // 0x803AF270: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_0:
    // 0x803AF274: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x803AF278: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803AF27C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x803AF280: lw          $t9, 0x594($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X594);
    // 0x803AF284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803AF288: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF28C: jalr        $t9
    // 0x803AF290: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803AF290: nop

    after_1:
    // 0x803AF294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF29C: jr          $ra
    // 0x803AF2A0: nop

    return;
    // 0x803AF2A0: nop

;}
RECOMP_FUNC void func_803AF2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF2A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF2AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AF2B0: jal         0x80035770
    // 0x803AF2B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803AF2B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AF2B8: jal         0x803AF5A4
    // 0x803AF2BC: nop

    func_803AF5A4(rdram, ctx);
        goto after_1;
    // 0x803AF2BC: nop

    after_1:
    // 0x803AF2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF2C8: jr          $ra
    // 0x803AF2CC: nop

    return;
    // 0x803AF2CC: nop

;}
RECOMP_FUNC void func_803AF2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF2D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF2D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803AF2DC: jal         0x800372F4
    // 0x803AF2E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800372F4(rdram, ctx);
        goto after_0;
    // 0x803AF2E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803AF2E4: jal         0x800373A4
    // 0x803AF2E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800373A4(rdram, ctx);
        goto after_1;
    // 0x803AF2E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803AF2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF2F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF2F4: jr          $ra
    // 0x803AF2F8: nop

    return;
    // 0x803AF2F8: nop

;}
RECOMP_FUNC void func_803AF2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF2FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AF300: jr          $ra
    // 0x803AF304: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AF304: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AF308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF308: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AF30C: jr          $ra
    // 0x803AF310: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AF310: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AF314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF314: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AF318: jr          $ra
    // 0x803AF31C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AF31C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AF320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF320: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AF324: jr          $ra
    // 0x803AF328: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AF328: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AF32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF32C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803AF330: jr          $ra
    // 0x803AF334: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803AF334: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803AF338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF338: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803AF33C: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x803AF340: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AF344: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803AF348: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x803AF34C: nop

    // 0x803AF350: sb          $t6, 0x38($t7)
    MEM_B(0X38, ctx->r15) = ctx->r14;
    // 0x803AF354: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x803AF358: nop

    // 0x803AF35C: lb          $v0, 0x38($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X38);
    // 0x803AF360: nop

    // 0x803AF364: sltiu       $at, $v0, 0x9
    ctx->r1 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x803AF368: beq         $at, $zero, L_803AF3AC
    if (ctx->r1 == 0) {
        // 0x803AF36C: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_803AF3AC;
    }
    // 0x803AF36C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803AF370: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803AF374: addu        $at, $at, $t9
    gpr jr_addend_803AF380 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803AF378: lw          $t9, 0xC58($at)
    ctx->r25 = ADD32(ctx->r1, 0XC58);
    // 0x803AF37C: nop

    // 0x803AF380: jr          $t9
    // 0x803AF384: nop

    switch (jr_addend_803AF380 >> 2) {
        case 0: goto L_803AF388; break;
        case 1: goto L_803AF394; break;
        case 2: goto L_803AF3A0; break;
        case 3: goto L_803AF3AC; break;
        case 4: goto L_803AF394; break;
        case 5: goto L_803AF3A0; break;
        case 6: goto L_803AF3AC; break;
        case 7: goto L_803AF3AC; break;
        case 8: goto L_803AF388; break;
        default: switch_error(__func__, 0x803AF380, 0x803B0C58);
    }
    // 0x803AF384: nop

L_803AF388:
    // 0x803AF388: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803AF38C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AF390: sb          $t0, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r8;
L_803AF394:
    // 0x803AF394: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803AF398: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AF39C: sb          $t1, -0x3036($at)
    MEM_B(-0X3036, ctx->r1) = ctx->r9;
L_803AF3A0:
    // 0x803AF3A0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803AF3A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AF3A8: sb          $t2, -0x301E($at)
    MEM_B(-0X301E, ctx->r1) = ctx->r10;
L_803AF3AC:
    // 0x803AF3AC: jr          $ra
    // 0x803AF3B0: nop

    return;
    // 0x803AF3B0: nop

;}
RECOMP_FUNC void func_803AF3B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF3B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AF3B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF3BC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AF3C0: jal         0x80029354
    // 0x803AF3C4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AF3C4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803AF3C8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803AF3CC: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803AF3D0: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803AF3D4: lb          $t7, 0x38($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X38);
    // 0x803AF3D8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AF3DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803AF3E0: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803AF3E4: lw          $a3, 0x4B0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4B0);
    // 0x803AF3E8: addiu       $a1, $zero, 0x291
    ctx->r5 = ADD32(0, 0X291);
    // 0x803AF3EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803AF3F0: jal         0x8004CD24
    // 0x803AF3F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803AF3F4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AF3F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AF400: jal         0x8002135C
    // 0x803AF404: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AF404: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803AF408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AF410: jr          $ra
    // 0x803AF414: nop

    return;
    // 0x803AF414: nop

;}
RECOMP_FUNC void func_803AF418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AF41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF420: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AF424: jal         0x80029354
    // 0x803AF428: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AF428: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803AF42C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803AF430: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803AF434: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803AF438: lb          $t7, 0x38($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X38);
    // 0x803AF43C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AF440: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803AF444: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803AF448: lw          $a3, 0x4D4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4D4);
    // 0x803AF44C: addiu       $a1, $zero, 0x3FC
    ctx->r5 = ADD32(0, 0X3FC);
    // 0x803AF450: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803AF454: jal         0x8004CD24
    // 0x803AF458: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803AF458: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AF45C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF460: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803AF464: jal         0x8002135C
    // 0x803AF468: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AF468: addiu       $a2, $zero, 0xE8
    ctx->r6 = ADD32(0, 0XE8);
    after_2:
    // 0x803AF46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AF474: jr          $ra
    // 0x803AF478: nop

    return;
    // 0x803AF478: nop

;}
RECOMP_FUNC void func_803AF47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF47C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AF480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF484: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803AF488: jal         0x80029354
    // 0x803AF48C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803AF48C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x803AF490: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803AF494: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803AF498: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803AF49C: lb          $t7, 0x38($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X38);
    // 0x803AF4A0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803AF4A4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803AF4A8: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x803AF4AC: lw          $a3, 0x4F8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F8);
    // 0x803AF4B0: addiu       $a1, $zero, 0x293
    ctx->r5 = ADD32(0, 0X293);
    // 0x803AF4B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x803AF4B8: jal         0x8004CD24
    // 0x803AF4BC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x803AF4BC: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803AF4C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF4C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803AF4C8: jal         0x8002135C
    // 0x803AF4CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803AF4CC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x803AF4D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF4D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AF4D8: jr          $ra
    // 0x803AF4DC: nop

    return;
    // 0x803AF4DC: nop

;}
RECOMP_FUNC void func_803AF4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF4E0: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x803AF4E4: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x803AF4E8: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x803AF4EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF4F0: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x803AF4F4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803AF4F8: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x803AF4FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AF500: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF504: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803AF508: addiu       $t8, $t8, 0x5B0
    ctx->r24 = ADD32(ctx->r24, 0X5B0);
    // 0x803AF50C: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x803AF510: sll         $t0, $a3, 2
    ctx->r8 = S32(ctx->r7 << 2);
    // 0x803AF514: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AF518: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x803AF51C: addu        $v0, $t0, $t8
    ctx->r2 = ADD32(ctx->r8, ctx->r24);
    // 0x803AF520: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF524: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803AF528: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x803AF52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF530: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x803AF534: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AF538: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AF53C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x803AF540: sb          $a3, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r7;
    // 0x803AF544: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x803AF548: jal         0x8004BA70
    // 0x803AF54C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_8004BA70(rdram, ctx);
        goto after_0;
    // 0x803AF54C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x803AF550: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803AF554: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x803AF558: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AF55C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AF560: jal         0x8004BB64
    // 0x803AF564: nop

    func_8004BB64(rdram, ctx);
        goto after_1;
    // 0x803AF564: nop

    after_1:
    // 0x803AF568: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF56C: lui         $t2, 0x803B
    ctx->r10 = S32(0X803B << 16);
    // 0x803AF570: addiu       $t2, $t2, 0x5B8
    ctx->r10 = ADD32(ctx->r10, 0X5B8);
    // 0x803AF574: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x803AF578: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x803AF57C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AF580: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AF584: lbu         $a3, 0x2B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2B);
    // 0x803AF588: lbu         $a0, 0x0($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X0);
    // 0x803AF58C: jal         0x80039F88
    // 0x803AF590: nop

    func_80039F88(rdram, ctx);
        goto after_2;
    // 0x803AF590: nop

    after_2:
    // 0x803AF594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803AF59C: jr          $ra
    // 0x803AF5A0: nop

    return;
    // 0x803AF5A0: nop

;}
RECOMP_FUNC void func_803AF5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF5A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AF5A8: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x803AF5AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF5B0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803AF5B4: bne         $t6, $at, L_803AF5D8
    if (ctx->r14 != ctx->r1) {
        // 0x803AF5B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_803AF5D8;
    }
    // 0x803AF5B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF5BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AF5C0: lbu         $t7, -0x3272($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3272);
    // 0x803AF5C4: nop

    // 0x803AF5C8: bne         $t7, $zero, L_803AF5D8
    if (ctx->r15 != 0) {
        // 0x803AF5CC: nop
    
            goto L_803AF5D8;
    }
    // 0x803AF5CC: nop

    // 0x803AF5D0: jal         0x803B14E4
    // 0x803AF5D4: nop

    LOOKUP_FUNC(0x803B14E4)(rdram, ctx);
        goto after_0;
    // 0x803AF5D4: nop

    after_0:
L_803AF5D8:
    // 0x803AF5D8: jal         0x803AF854
    // 0x803AF5DC: nop

    func_803AF854(rdram, ctx);
        goto after_1;
    // 0x803AF5DC: nop

    after_1:
    // 0x803AF5E0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803AF5E4: lbu         $t8, -0x3272($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3272);
    // 0x803AF5E8: nop

    // 0x803AF5EC: beq         $t8, $zero, L_803AF5FC
    if (ctx->r24 == 0) {
        // 0x803AF5F0: nop
    
            goto L_803AF5FC;
    }
    // 0x803AF5F0: nop

    // 0x803AF5F4: jal         0x803AF8E8
    // 0x803AF5F8: nop

    func_803AF8E8(rdram, ctx);
        goto after_2;
    // 0x803AF5F8: nop

    after_2:
L_803AF5FC:
    // 0x803AF5FC: jal         0x80035A3C
    // 0x803AF600: nop

    func_80035A3C(rdram, ctx);
        goto after_3;
    // 0x803AF600: nop

    after_3:
    // 0x803AF604: jal         0x80035AF4
    // 0x803AF608: nop

    func_80035AF4(rdram, ctx);
        goto after_4;
    // 0x803AF608: nop

    after_4:
    // 0x803AF60C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AF610: jal         0x803AF65C
    // 0x803AF614: sb          $zero, -0x2F9A($at)
    MEM_B(-0X2F9A, ctx->r1) = 0;
    func_803AF65C(rdram, ctx);
        goto after_5;
    // 0x803AF614: sb          $zero, -0x2F9A($at)
    MEM_B(-0X2F9A, ctx->r1) = 0;
    after_5:
    // 0x803AF618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF61C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF620: jr          $ra
    // 0x803AF624: nop

    return;
    // 0x803AF624: nop

;}
RECOMP_FUNC void func_803AF628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF630: jal         0x803AF854
    // 0x803AF634: nop

    func_803AF854(rdram, ctx);
        goto after_0;
    // 0x803AF634: nop

    after_0:
    // 0x803AF638: jal         0x80035A3C
    // 0x803AF63C: nop

    func_80035A3C(rdram, ctx);
        goto after_1;
    // 0x803AF63C: nop

    after_1:
    // 0x803AF640: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803AF644: jal         0x803AF65C
    // 0x803AF648: sb          $zero, -0x2F9A($at)
    MEM_B(-0X2F9A, ctx->r1) = 0;
    func_803AF65C(rdram, ctx);
        goto after_2;
    // 0x803AF648: sb          $zero, -0x2F9A($at)
    MEM_B(-0X2F9A, ctx->r1) = 0;
    after_2:
    // 0x803AF64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF654: jr          $ra
    // 0x803AF658: nop

    return;
    // 0x803AF658: nop

;}
RECOMP_FUNC void func_803AF65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF664: jal         0x80039CB4
    // 0x803AF668: nop

    func_80039CB4(rdram, ctx);
        goto after_0;
    // 0x803AF668: nop

    after_0:
    // 0x803AF66C: jal         0x80036C58
    // 0x803AF670: nop

    func_80036C58(rdram, ctx);
        goto after_1;
    // 0x803AF670: nop

    after_1:
    // 0x803AF674: jal         0x8006E0A0
    // 0x803AF678: nop

    func_8006E0A0(rdram, ctx);
        goto after_2;
    // 0x803AF678: nop

    after_2:
    // 0x803AF67C: jal         0x8006E0E8
    // 0x803AF680: nop

    func_8006E0E8(rdram, ctx);
        goto after_3;
    // 0x803AF680: nop

    after_3:
    // 0x803AF684: jal         0x800372F4
    // 0x803AF688: nop

    func_800372F4(rdram, ctx);
        goto after_4;
    // 0x803AF688: nop

    after_4:
    // 0x803AF68C: jal         0x803AFAEC
    // 0x803AF690: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803AFAEC(rdram, ctx);
        goto after_5;
    // 0x803AF690: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x803AF694: jal         0x803AFAEC
    // 0x803AF698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803AFAEC(rdram, ctx);
        goto after_6;
    // 0x803AF698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x803AF69C: jal         0x800375F8
    // 0x803AF6A0: nop

    func_800375F8(rdram, ctx);
        goto after_7;
    // 0x803AF6A0: nop

    after_7:
    // 0x803AF6A4: jal         0x80039DA8
    // 0x803AF6A8: nop

    func_80039DA8(rdram, ctx);
        goto after_8;
    // 0x803AF6A8: nop

    after_8:
    // 0x803AF6AC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AF6B0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803AF6B4: lbu         $t6, 0xC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XC);
    // 0x803AF6B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803AF6BC: bne         $t6, $at, L_803AF6D4
    if (ctx->r14 != ctx->r1) {
        // 0x803AF6C0: nop
    
            goto L_803AF6D4;
    }
    // 0x803AF6C0: nop

    // 0x803AF6C4: jal         0x80037DCC
    // 0x803AF6C8: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    func_80037DCC(rdram, ctx);
        goto after_9;
    // 0x803AF6C8: sb          $zero, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = 0;
    after_9:
    // 0x803AF6CC: b           L_803AF728
    // 0x803AF6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF728;
    // 0x803AF6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF6D4:
    // 0x803AF6D4: lbu         $t7, 0x3E($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X3E);
    // 0x803AF6D8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803AF6DC: bne         $t7, $zero, L_803AF6F4
    if (ctx->r15 != 0) {
        // 0x803AF6E0: lui         $t9, 0x8012
        ctx->r25 = S32(0X8012 << 16);
            goto L_803AF6F4;
    }
    // 0x803AF6E0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803AF6E4: jal         0x80037DCC
    // 0x803AF6E8: sb          $t8, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r24;
    func_80037DCC(rdram, ctx);
        goto after_10;
    // 0x803AF6E8: sb          $t8, 0x3E($v0)
    MEM_B(0X3E, ctx->r2) = ctx->r24;
    after_10:
    // 0x803AF6EC: b           L_803AF728
    // 0x803AF6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF728;
    // 0x803AF6F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF6F4:
    // 0x803AF6F4: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x803AF6F8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803AF6FC: bne         $t9, $at, L_803AF71C
    if (ctx->r25 != ctx->r1) {
        // 0x803AF700: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_803AF71C;
    }
    // 0x803AF700: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803AF704: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x803AF708: sb          $t0, 0x5450($at)
    MEM_B(0X5450, ctx->r1) = ctx->r8;
    // 0x803AF70C: jal         0x803AA63C
    // 0x803AF710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x803AA63C)(rdram, ctx);
        goto after_11;
    // 0x803AF710: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x803AF714: b           L_803AF728
    // 0x803AF718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803AF728;
    // 0x803AF718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF71C:
    // 0x803AF71C: jal         0x80037FA8
    // 0x803AF720: nop

    func_80037FA8(rdram, ctx);
        goto after_12;
    // 0x803AF720: nop

    after_12:
    // 0x803AF724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803AF728:
    // 0x803AF728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF72C: jr          $ra
    // 0x803AF730: nop

    return;
    // 0x803AF730: nop

;}
RECOMP_FUNC void func_803AF734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF734: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AF738: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x803AF73C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803AF740: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803AF744: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803AF748: sh          $t6, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = ctx->r14;
    // 0x803AF74C: lbu         $t7, 0x754($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X754);
    // 0x803AF750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AF754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AF758: ori         $t8, $t7, 0x12
    ctx->r24 = ctx->r15 | 0X12;
    // 0x803AF75C: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    // 0x803AF760: jal         0x8005F560
    // 0x803AF764: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005F560(rdram, ctx);
        goto after_0;
    // 0x803AF764: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x803AF768: jal         0x802A2434
    // 0x803AF76C: nop

    LOOKUP_FUNC(0x802A2434)(rdram, ctx);
        goto after_1;
    // 0x803AF76C: nop

    after_1:
    // 0x803AF770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AF774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AF778: jr          $ra
    // 0x803AF77C: nop

    return;
    // 0x803AF77C: nop

;}
RECOMP_FUNC void func_803AF780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF780: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803AF784: lb          $v1, -0x3088($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3088);
    // 0x803AF788: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803AF78C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x803AF790: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x803AF794: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF798: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x803AF79C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF7A0: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x803AF7A4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x803AF7A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF7AC: addiu       $t7, $t7, 0x5C0
    ctx->r15 = ADD32(ctx->r15, 0X5C0);
    // 0x803AF7B0: addiu       $v0, $v0, 0x64F0
    ctx->r2 = ADD32(ctx->r2, 0X64F0);
    // 0x803AF7B4: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x803AF7B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803AF7BC: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
L_803AF7C0:
    // 0x803AF7C0: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803AF7C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803AF7C8: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x803AF7CC: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x803AF7D0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x803AF7D4: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x803AF7D8: mflo        $t8
    ctx->r24 = lo;
    // 0x803AF7DC: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x803AF7E0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x803AF7E4: nop

    // 0x803AF7E8: swc1        $f4, -0x30($v0)
    MEM_W(-0X30, ctx->r2) = ctx->f4.u32l;
    // 0x803AF7EC: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x803AF7F0: nop

    // 0x803AF7F4: swc1        $f6, -0x2C($v0)
    MEM_W(-0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x803AF7F8: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x803AF7FC: nop

    // 0x803AF800: swc1        $f8, -0x28($v0)
    MEM_W(-0X28, ctx->r2) = ctx->f8.u32l;
    // 0x803AF804: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x803AF808: nop

    // 0x803AF80C: swc1        $f10, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = ctx->f10.u32l;
    // 0x803AF810: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x803AF814: nop

    // 0x803AF818: swc1        $f16, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->f16.u32l;
    // 0x803AF81C: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x803AF820: nop

    // 0x803AF824: swc1        $f18, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x803AF828: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x803AF82C: nop

    // 0x803AF830: swc1        $f4, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f4.u32l;
    // 0x803AF834: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x803AF838: nop

    // 0x803AF83C: swc1        $f6, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f6.u32l;
    // 0x803AF840: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803AF844: bne         $at, $zero, L_803AF7C0
    if (ctx->r1 != 0) {
        // 0x803AF848: swc1        $f8, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->f8.u32l;
            goto L_803AF7C0;
    }
    // 0x803AF848: swc1        $f8, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f8.u32l;
    // 0x803AF84C: jr          $ra
    // 0x803AF850: nop

    return;
    // 0x803AF850: nop

;}
RECOMP_FUNC void func_803AF854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AF858: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_803AF85C:
    // 0x803AF85C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803AF860: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x803AF864: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF868: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x803AF86C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803AF870: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x803AF874: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF878: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x803AF87C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AF880: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x803AF884: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803AF888: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x803AF88C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803AF890:
    // 0x803AF890: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x803AF894: addu        $a2, $a1, $t8
    ctx->r6 = ADD32(ctx->r5, ctx->r24);
    // 0x803AF898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803AF89C:
    // 0x803AF89C: addu        $t9, $a2, $a0
    ctx->r25 = ADD32(ctx->r6, ctx->r4);
    // 0x803AF8A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803AF8A4: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x803AF8A8: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x803AF8AC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x803AF8B0: bne         $at, $zero, L_803AF89C
    if (ctx->r1 != 0) {
        // 0x803AF8B4: sb          $a3, 0xA86($t9)
        MEM_B(0XA86, ctx->r25) = ctx->r7;
            goto L_803AF89C;
    }
    // 0x803AF8B4: sb          $a3, 0xA86($t9)
    MEM_B(0XA86, ctx->r25) = ctx->r7;
    // 0x803AF8B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803AF8BC: andi        $t1, $v1, 0xFF
    ctx->r9 = ctx->r3 & 0XFF;
    // 0x803AF8C0: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x803AF8C4: bne         $at, $zero, L_803AF890
    if (ctx->r1 != 0) {
        // 0x803AF8C8: or          $v1, $t1, $zero
        ctx->r3 = ctx->r9 | 0;
            goto L_803AF890;
    }
    // 0x803AF8C8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x803AF8CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803AF8D0: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x803AF8D4: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x803AF8D8: bne         $at, $zero, L_803AF85C
    if (ctx->r1 != 0) {
        // 0x803AF8DC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_803AF85C;
    }
    // 0x803AF8DC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x803AF8E0: jr          $ra
    // 0x803AF8E4: nop

    return;
    // 0x803AF8E4: nop

;}
RECOMP_FUNC void func_803AF8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF8E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AF8EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AF8F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AF8F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803AF8F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803AF8FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803AF900:
    // 0x803AF900: jal         0x803AF940
    // 0x803AF904: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803AF940(rdram, ctx);
        goto after_0;
    // 0x803AF904: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x803AF908: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AF90C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x803AF910: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x803AF914: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803AF918: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x803AF91C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803AF920: bne         $at, $zero, L_803AF900
    if (ctx->r1 != 0) {
        // 0x803AF924: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_803AF900;
    }
    // 0x803AF924: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x803AF928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803AF92C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AF930: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AF934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AF938: jr          $ra
    // 0x803AF93C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x803AF93C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_803AF940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AF940: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803AF944: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803AF948: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803AF94C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803AF950: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803AF954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803AF958: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803AF95C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803AF960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803AF964: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x803AF968: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803AF96C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803AF970: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803AF974: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803AF978: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x803AF97C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803AF980: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803AF984: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AF988: addiu       $t0, $t0, -0x32B0
    ctx->r8 = ADD32(ctx->r8, -0X32B0);
    // 0x803AF98C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803AF990: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803AF994: lui         $s4, 0x803B
    ctx->r20 = S32(0X803B << 16);
    // 0x803AF998: lui         $s6, 0x803B
    ctx->r22 = S32(0X803B << 16);
    // 0x803AF99C: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x803AF9A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803AF9A4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803AF9A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AF9AC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803AF9B0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x803AF9B4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x803AF9B8: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x803AF9BC: addiu       $s6, $s6, 0xC80
    ctx->r22 = ADD32(ctx->r22, 0XC80);
    // 0x803AF9C0: addiu       $s4, $s4, 0xC90
    ctx->r20 = ADD32(ctx->r20, 0XC90);
    // 0x803AF9C4: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x803AF9C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803AF9CC:
    // 0x803AF9CC: addu        $t1, $s3, $s0
    ctx->r9 = ADD32(ctx->r19, ctx->r16);
    // 0x803AF9D0: lbu         $v0, 0x308($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X308);
    // 0x803AF9D4: addu        $t3, $v1, $s0
    ctx->r11 = ADD32(ctx->r3, ctx->r16);
    // 0x803AF9D8: addu        $t2, $s6, $v0
    ctx->r10 = ADD32(ctx->r22, ctx->r2);
    // 0x803AF9DC: sb          $s0, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r16;
    // 0x803AF9E0: lbu         $v0, 0x1E($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X1E);
    // 0x803AF9E4: nop

    // 0x803AF9E8: addu        $t4, $s4, $v0
    ctx->r12 = ADD32(ctx->r20, ctx->r2);
    // 0x803AF9EC: sb          $s0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r16;
    // 0x803AF9F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AF9F4: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x803AF9F8: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803AF9FC: bne         $at, $zero, L_803AF9CC
    if (ctx->r1 != 0) {
        // 0x803AFA00: or          $s0, $t5, $zero
        ctx->r16 = ctx->r13 | 0;
            goto L_803AF9CC;
    }
    // 0x803AFA00: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x803AFA04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803AFA08:
    // 0x803AFA08: addu        $s2, $s6, $s0
    ctx->r18 = ADD32(ctx->r22, ctx->r16);
    // 0x803AFA0C: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x803AFA10: addu        $s1, $s4, $s0
    ctx->r17 = ADD32(ctx->r20, ctx->r16);
    // 0x803AFA14: slti        $at, $a0, 0xB
    ctx->r1 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x803AFA18: beq         $at, $zero, L_803AFA64
    if (ctx->r1 == 0) {
        // 0x803AFA1C: slti        $at, $a0, 0xB
        ctx->r1 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
            goto L_803AFA64;
    }
    // 0x803AFA1C: slti        $at, $a0, 0xB
    ctx->r1 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
    // 0x803AFA20: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x803AFA24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AFA28: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x803AFA2C: bne         $at, $zero, L_803AFA60
    if (ctx->r1 != 0) {
        // 0x803AFA30: addiu       $a2, $zero, 0x2
        ctx->r6 = ADD32(0, 0X2);
            goto L_803AFA60;
    }
    // 0x803AFA30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803AFA34: jal         0x8001D4C0
    // 0x803AFA38: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x803AFA38: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_0:
    // 0x803AFA3C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803AFA40: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x803AFA44: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x803AFA48: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x803AFA4C: addiu       $s7, $v1, 0x1
    ctx->r23 = ADD32(ctx->r3, 0X1);
    // 0x803AFA50: sb          $t7, 0xA87($t9)
    MEM_B(0XA87, ctx->r25) = ctx->r15;
    // 0x803AFA54: andi        $t0, $s7, 0xFF
    ctx->r8 = ctx->r23 & 0XFF;
    // 0x803AFA58: lbu         $a0, 0x0($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X0);
    // 0x803AFA5C: or          $s7, $t0, $zero
    ctx->r23 = ctx->r8 | 0;
L_803AFA60:
    // 0x803AFA60: slti        $at, $a0, 0xB
    ctx->r1 = SIGNED(ctx->r4) < 0XB ? 1 : 0;
L_803AFA64:
    // 0x803AFA64: bne         $at, $zero, L_803AFAA8
    if (ctx->r1 != 0) {
        // 0x803AFA68: addu        $s1, $s4, $s0
        ctx->r17 = ADD32(ctx->r20, ctx->r16);
            goto L_803AFAA8;
    }
    // 0x803AFA68: addu        $s1, $s4, $s0
    ctx->r17 = ADD32(ctx->r20, ctx->r16);
    // 0x803AFA6C: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x803AFA70: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x803AFA74: slti        $at, $t1, 0xB
    ctx->r1 = SIGNED(ctx->r9) < 0XB ? 1 : 0;
    // 0x803AFA78: beq         $at, $zero, L_803AFAA8
    if (ctx->r1 == 0) {
        // 0x803AFA7C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_803AFAA8;
    }
    // 0x803AFA7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803AFA80: jal         0x8001D4C0
    // 0x803AFA84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x803AFA84: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x803AFA88: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803AFA8C: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x803AFA90: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x803AFA94: addiu       $s5, $v1, 0x1
    ctx->r21 = ADD32(ctx->r3, 0X1);
    // 0x803AFA98: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x803AFA9C: andi        $t5, $s5, 0xFF
    ctx->r13 = ctx->r21 & 0XFF;
    // 0x803AFAA0: or          $s5, $t5, $zero
    ctx->r21 = ctx->r13 | 0;
    // 0x803AFAA4: sb          $t2, 0xA86($t4)
    MEM_B(0XA86, ctx->r12) = ctx->r10;
L_803AFAA8:
    // 0x803AFAA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AFAAC: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x803AFAB0: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x803AFAB4: bne         $at, $zero, L_803AFA08
    if (ctx->r1 != 0) {
        // 0x803AFAB8: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_803AFA08;
    }
    // 0x803AFAB8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803AFABC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803AFAC0: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x803AFAC4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x803AFAC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AFACC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AFAD0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803AFAD4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803AFAD8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803AFADC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803AFAE0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x803AFAE4: jr          $ra
    // 0x803AFAE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803AFAE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803AFAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AFAEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803AFAF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803AFAF4: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x803AFAF8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803AFAFC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803AFB00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803AFB04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803AFB08: addiu       $t7, $t7, -0x32B0
    ctx->r15 = ADD32(ctx->r15, -0X32B0);
    // 0x803AFB0C: sll         $t6, $s3, 4
    ctx->r14 = S32(ctx->r19 << 4);
    // 0x803AFB10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803AFB14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803AFB18: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x803AFB1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803AFB20: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x803AFB24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803AFB28:
    // 0x803AFB28: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803AFB2C: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803AFB30: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x803AFB34: jal         0x8006DCB0
    // 0x803AFB38: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_8006DCB0(rdram, ctx);
        goto after_0;
    // 0x803AFB38: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_0:
    // 0x803AFB3C: bne         $s1, $v0, L_803AFB50
    if (ctx->r17 != ctx->r2) {
        // 0x803AFB40: addu        $t0, $s2, $s0
        ctx->r8 = ADD32(ctx->r18, ctx->r16);
            goto L_803AFB50;
    }
    // 0x803AFB40: addu        $t0, $s2, $s0
    ctx->r8 = ADD32(ctx->r18, ctx->r16);
    // 0x803AFB44: addu        $t9, $s2, $s0
    ctx->r25 = ADD32(ctx->r18, ctx->r16);
    // 0x803AFB48: b           L_803AFB54
    // 0x803AFB4C: sb          $s1, 0xC0($t9)
    MEM_B(0XC0, ctx->r25) = ctx->r17;
        goto L_803AFB54;
    // 0x803AFB4C: sb          $s1, 0xC0($t9)
    MEM_B(0XC0, ctx->r25) = ctx->r17;
L_803AFB50:
    // 0x803AFB50: sb          $zero, 0xC0($t0)
    MEM_B(0XC0, ctx->r8) = 0;
L_803AFB54:
    // 0x803AFB54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803AFB58: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x803AFB5C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x803AFB60: bne         $at, $zero, L_803AFB28
    if (ctx->r1 != 0) {
        // 0x803AFB64: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_803AFB28;
    }
    // 0x803AFB64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803AFB68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803AFB6C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803AFB70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803AFB74: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803AFB78: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803AFB7C: jr          $ra
    // 0x803AFB80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803AFB80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803AFB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AFB84: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803AFB88: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x803AFB8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803AFB90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803AFB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AFB98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803AFB9C: bne         $t6, $at, L_803AFBB4
    if (ctx->r14 != ctx->r1) {
        // 0x803AFBA0: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_803AFBB4;
    }
    // 0x803AFBA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803AFBA4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AFBA8: lbu         $v0, -0x3083($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3083);
    // 0x803AFBAC: b           L_803AFBC4
    // 0x803AFBB0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_803AFBC4;
    // 0x803AFBB0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_803AFBB4:
    // 0x803AFBB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803AFBB8: lbu         $v0, -0x309B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X309B);
    // 0x803AFBBC: nop

    // 0x803AFBC0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_803AFBC4:
    // 0x803AFBC4: lui         $a3, 0x803B
    ctx->r7 = S32(0X803B << 16);
    // 0x803AFBC8: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x803AFBCC: lw          $a3, 0x180($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X180);
    // 0x803AFBD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803AFBD4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x803AFBD8: addiu       $a1, $zero, 0x1A5
    ctx->r5 = ADD32(0, 0X1A5);
    // 0x803AFBDC: jal         0x8004CD24
    // 0x803AFBE0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x803AFBE0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x803AFBE4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803AFBE8: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803AFBEC: addiu       $t7, $t7, 0x324
    ctx->r15 = ADD32(ctx->r15, 0X324);
    // 0x803AFBF0: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x803AFBF4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803AFBF8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803AFBFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803AFC00: jal         0x8002AB30
    // 0x803AFC04: nop

    func_8002AB30(rdram, ctx);
        goto after_1;
    // 0x803AFC04: nop

    after_1:
    // 0x803AFC08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AFC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803AFC10: jr          $ra
    // 0x803AFC14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AFC14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AFC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AFC18: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803AFC1C: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x803AFC20: lh          $t8, 0x1C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1C);
    // 0x803AFC24: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x803AFC28: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x803AFC2C: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    // 0x803AFC30: sh          $t9, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r25;
    // 0x803AFC34: jr          $ra
    // 0x803AFC38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AFC38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803AFC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803AFC3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803AFC40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803AFC44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803AFC48: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803AFC4C: addiu       $a1, $a1, 0x176
    ctx->r5 = ADD32(ctx->r5, 0X176);
    // 0x803AFC50: jal         0x8004A298
    // 0x803AFC54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_0;
    // 0x803AFC54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x803AFC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803AFC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803AFC60: jr          $ra
    // 0x803AFC64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803AFC64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803AFC68: nop

    // 0x803AFC6C: nop

;}
RECOMP_FUNC void func_803B0CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0CA0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B0CA4: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x803B0CA8: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803B0CAC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x803B0CB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803B0CB4: lh          $t8, 0x3908($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X3908);
    // 0x803B0CB8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x803B0CBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803B0CC0: jr          $ra
    // 0x803B0CC4: sh          $t8, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r24;
    return;
    // 0x803B0CC4: sh          $t8, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_803B0CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0CC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B0CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B0CD0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803B0CD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B0CD8: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x803B0CDC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803B0CE0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x803B0CE4: lb          $a0, 0x1F($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X1F);
    // 0x803B0CE8: jal         0x803B1464
    // 0x803B0CEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_803B1464(rdram, ctx);
        goto after_0;
    // 0x803B0CEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x803B0CF0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803B0CF4: bne         $v0, $zero, L_803B0D10
    if (ctx->r2 != 0) {
        // 0x803B0CF8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803B0D10;
    }
    // 0x803B0CF8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803B0CFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803B0D00: jal         0x8007AAF8
    // 0x803B0D04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x803B0D04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x803B0D08: b           L_803B0D1C
    // 0x803B0D0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_803B0D1C;
    // 0x803B0D0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_803B0D10:
    // 0x803B0D10: jal         0x8007AAF8
    // 0x803B0D14: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x803B0D14: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x803B0D18: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_803B0D1C:
    // 0x803B0D1C: nop

    // 0x803B0D20: lb          $a0, 0x1F($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X1F);
    // 0x803B0D24: jal         0x803B1490
    // 0x803B0D28: nop

    func_803B1490(rdram, ctx);
        goto after_3;
    // 0x803B0D28: nop

    after_3:
    // 0x803B0D2C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x803B0D30: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x803B0D34: bne         $v0, $zero, L_803B0D54
    if (ctx->r2 != 0) {
        // 0x803B0D38: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803B0D54;
    }
    // 0x803B0D38: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803B0D3C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0D40: addiu       $a0, $a0, 0x36BC
    ctx->r4 = ADD32(ctx->r4, 0X36BC);
    // 0x803B0D44: jal         0x8002C7AC
    // 0x803B0D48: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    func_8002C7AC(rdram, ctx);
        goto after_4;
    // 0x803B0D48: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    after_4:
    // 0x803B0D4C: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x803B0D50: nop

L_803B0D54:
    // 0x803B0D54: bgez        $v1, L_803B0D70
    if (SIGNED(ctx->r3) >= 0) {
        // 0x803B0D58: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_803B0D70;
    }
    // 0x803B0D58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B0D5C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B0D60: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x803B0D64: nop

    // 0x803B0D68: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x803B0D6C: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
L_803B0D70:
    // 0x803B0D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B0D74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B0D78: jr          $ra
    // 0x803B0D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B0D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B0D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B0D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B0D88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B0D8C: jal         0x803B1438
    // 0x803B0D90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803B1438(rdram, ctx);
        goto after_0;
    // 0x803B0D90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B0D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B0D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B0D9C: jr          $ra
    // 0x803B0DA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B0DA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B0DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B0DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B0DAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B0DB0: lb          $a0, 0x1F($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X1F);
    // 0x803B0DB4: jal         0x803B1464
    // 0x803B0DB8: nop

    func_803B1464(rdram, ctx);
        goto after_0;
    // 0x803B0DB8: nop

    after_0:
    // 0x803B0DBC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x803B0DC0: bne         $v0, $zero, L_803B0DD0
    if (ctx->r2 != 0) {
        // 0x803B0DC4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_803B0DD0;
    }
    // 0x803B0DC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B0DC8: b           L_803B0DD4
    // 0x803B0DCC: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
        goto L_803B0DD4;
    // 0x803B0DCC: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_803B0DD0:
    // 0x803B0DD0: sb          $t6, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r14;
L_803B0DD4:
    // 0x803B0DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B0DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B0DDC: jr          $ra
    // 0x803B0DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B0DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803B0DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B0DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B0DEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B0DF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B0DF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803B0DF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803B0DFC: jal         0x80021214
    // 0x803B0E00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803B0E00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803B0E04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803B0E08: jal         0x8004BDA0
    // 0x803B0E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x803B0E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803B0E10: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803B0E14: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x803B0E18: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803B0E1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803B0E20: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803B0E24: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803B0E28: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803B0E2C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803B0E30: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803B0E34: jal         0x8004B078
    // 0x803B0E38: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x803B0E38: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x803B0E3C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0E40: jal         0x800296E0
    // 0x803B0E44: addiu       $a0, $a0, 0xE58
    ctx->r4 = ADD32(ctx->r4, 0XE58);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803B0E44: addiu       $a0, $a0, 0xE58
    ctx->r4 = ADD32(ctx->r4, 0XE58);
    after_3:
    // 0x803B0E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B0E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B0E50: jr          $ra
    // 0x803B0E54: nop

    return;
    // 0x803B0E54: nop

;}
RECOMP_FUNC void func_803B0E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0E58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x803B0E5C: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x803B0E60: lh          $t6, 0xA0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA0);
    // 0x803B0E64: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803B0E68: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x803B0E6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B0E70: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x803B0E74: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x803B0E78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B0E7C: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    // 0x803B0E80: lh          $t0, 0xA0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0XA0);
    // 0x803B0E84: nop

    // 0x803B0E88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803B0E8C: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x803B0E90: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x803B0E94: jr          $ra
    // 0x803B0E98: sh          $t3, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r11;
    return;
    // 0x803B0E98: sh          $t3, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void func_803B0E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B0EA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B0EA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803B0EA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803B0EAC: jal         0x80036234
    // 0x803B0EB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803B0EB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B0EB4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0EB8: jal         0x80035FF0
    // 0x803B0EBC: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803B0EBC: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    after_1:
    // 0x803B0EC0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803B0EC4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803B0EC8: jal         0x80049E40
    // 0x803B0ECC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803B0ECC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803B0ED0: jal         0x80035A04
    // 0x803B0ED4: nop

    func_80035A04(rdram, ctx);
        goto after_3;
    // 0x803B0ED4: nop

    after_3:
    // 0x803B0ED8: lui         $t6, 0xFFF1
    ctx->r14 = S32(0XFFF1 << 16);
    // 0x803B0EDC: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x803B0EE0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803B0EE4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0EE8: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    // 0x803B0EEC: jal         0x8002AAC0
    // 0x803B0EF0: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x803B0EF0: addiu       $a0, $a0, 0x373C
    ctx->r4 = ADD32(ctx->r4, 0X373C);
    after_4:
    // 0x803B0EF4: jal         0x80039DF0
    // 0x803B0EF8: nop

    func_80039DF0(rdram, ctx);
        goto after_5;
    // 0x803B0EF8: nop

    after_5:
    // 0x803B0EFC: jal         0x8006FB58
    // 0x803B0F00: nop

    func_8006FB58(rdram, ctx);
        goto after_6;
    // 0x803B0F00: nop

    after_6:
    // 0x803B0F04: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0F08: addiu       $a0, $a0, 0x1310
    ctx->r4 = ADD32(ctx->r4, 0X1310);
    // 0x803B0F0C: jal         0x800293DC
    // 0x803B0F10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800293DC(rdram, ctx);
        goto after_7;
    // 0x803B0F10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x803B0F14: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B0F18: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B0F1C: lb          $v0, 0x134($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X134);
    // 0x803B0F20: nop

    // 0x803B0F24: bltz        $v0, L_803B0FD0
    if (SIGNED(ctx->r2) < 0) {
        // 0x803B0F28: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_803B0FD0;
    }
    // 0x803B0F28: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x803B0F2C: beq         $at, $zero, L_803B0F54
    if (ctx->r1 == 0) {
        // 0x803B0F30: lui         $t9, 0xF
        ctx->r25 = S32(0XF << 16);
            goto L_803B0F54;
    }
    // 0x803B0F30: lui         $t9, 0xF
    ctx->r25 = S32(0XF << 16);
    // 0x803B0F34: lui         $t7, 0xFFF1
    ctx->r15 = S32(0XFFF1 << 16);
    // 0x803B0F38: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    // 0x803B0F3C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803B0F40: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    // 0x803B0F44: lb          $t8, 0x134($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X134);
    // 0x803B0F48: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x803B0F4C: b           L_803B0F78
    // 0x803B0F50: sh          $t8, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r24;
        goto L_803B0F78;
    // 0x803B0F50: sh          $t8, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r24;
L_803B0F54:
    // 0x803B0F54: sw          $t9, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r25;
    // 0x803B0F58: lui         $t0, 0x120
    ctx->r8 = S32(0X120 << 16);
    // 0x803B0F5C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803B0F60: sw          $t0, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r8;
    // 0x803B0F64: lb          $t1, 0x134($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X134);
    // 0x803B0F68: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803B0F6C: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x803B0F70: sh          $t2, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r10;
    // 0x803B0F74: sh          $t3, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r11;
L_803B0F78:
    // 0x803B0F78: lh          $t4, 0x2C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2C);
    // 0x803B0F7C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x803B0F80: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x803B0F84: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x803B0F88: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803B0F8C: jal         0x8001D444
    // 0x803B0F90: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    func_8001D444(rdram, ctx);
        goto after_8;
    // 0x803B0F90: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    after_8:
    // 0x803B0F94: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x803B0F98: lh          $t7, 0x2C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2C);
    // 0x803B0F9C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x803B0FA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803B0FA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803B0FA8: nop

    // 0x803B0FAC: cvt.w.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_D(ctx->f0.d);
    // 0x803B0FB0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x803B0FB4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x803B0FB8: sh          $t6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r14;
    // 0x803B0FBC: bgez        $t7, L_803B0FCC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803B0FC0: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_803B0FCC;
    }
    // 0x803B0FC0: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x803B0FC4: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x803B0FC8: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_803B0FCC:
    // 0x803B0FCC: sh          $t8, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r24;
L_803B0FD0:
    // 0x803B0FD0: jal         0x803B1550
    // 0x803B0FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_803B1550(rdram, ctx);
        goto after_9;
    // 0x803B0FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x803B0FD8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B0FDC: addiu       $a0, $a0, 0xFF8
    ctx->r4 = ADD32(ctx->r4, 0XFF8);
    // 0x803B0FE0: jal         0x8004A9B4
    // 0x803B0FE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_10;
    // 0x803B0FE4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_10:
    // 0x803B0FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B0FEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803B0FF0: jr          $ra
    // 0x803B0FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803B0FF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803B0FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B0FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B0FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B1000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803B1004: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803B1008: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B100C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803B1010: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803B1014: jal         0x800357CC
    // 0x803B1018: sh          $t6, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r14;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x803B1018: sh          $t6, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r14;
    after_0:
    // 0x803B101C: jal         0x803B1884
    // 0x803B1020: nop

    func_803B1884(rdram, ctx);
        goto after_1;
    // 0x803B1020: nop

    after_1:
    // 0x803B1024: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B1028: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B102C: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x803B1030: nop

    // 0x803B1034: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803B1038: bne         $t8, $zero, L_803B1070
    if (ctx->r24 != 0) {
        // 0x803B103C: nop
    
            goto L_803B1070;
    }
    // 0x803B103C: nop

    // 0x803B1040: lw          $t9, 0x60($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X60);
    // 0x803B1044: nop

    // 0x803B1048: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    // 0x803B104C: jal         0x80035D2C
    // 0x803B1050: nop

    func_80035D2C(rdram, ctx);
        goto after_2;
    // 0x803B1050: nop

    after_2:
    // 0x803B1054: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x803B1058: lui         $t9, 0x803B
    ctx->r25 = S32(0X803B << 16);
    // 0x803B105C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803B1060: lw          $t9, 0x37D0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X37D0);
    // 0x803B1064: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803B1068: jalr        $t9
    // 0x803B106C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x803B106C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_803B1070:
    // 0x803B1070: lh          $a0, 0x28($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X28);
    // 0x803B1074: jal         0x8001D6EC
    // 0x803B1078: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001D6EC(rdram, ctx);
        goto after_4;
    // 0x803B1078: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x803B107C: lh          $a0, 0x2A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2A);
    // 0x803B1080: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x803B1084: jal         0x8001D6EC
    // 0x803B1088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_5;
    // 0x803B1088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x803B108C: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x803B1090: lh          $t1, 0x2A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2A);
    // 0x803B1094: lh          $t3, 0x28($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X28);
    // 0x803B1098: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803B109C: lui         $t5, 0x803B
    ctx->r13 = S32(0X803B << 16);
    // 0x803B10A0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803B10A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803B10A8: lb          $t5, 0x3800($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X3800);
    // 0x803B10AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B10B0: jal         0x803B1550
    // 0x803B10B4: sh          $t5, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r13;
    func_803B1550(rdram, ctx);
        goto after_6;
    // 0x803B10B4: sh          $t5, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r13;
    after_6:
    // 0x803B10B8: jal         0x800359B4
    // 0x803B10BC: nop

    func_800359B4(rdram, ctx);
        goto after_7;
    // 0x803B10BC: nop

    after_7:
    // 0x803B10C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B10C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803B10C8: jr          $ra
    // 0x803B10CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803B10CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803B10D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B10D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B10D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B10D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B10DC: jal         0x80035770
    // 0x803B10E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803B10E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B10E4: jal         0x80038CAC
    // 0x803B10E8: nop

    func_80038CAC(rdram, ctx);
        goto after_1;
    // 0x803B10E8: nop

    after_1:
    // 0x803B10EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x803B10F0: nop

    // 0x803B10F4: lh          $t6, 0x26($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X26);
    // 0x803B10F8: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x803B10FC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803B1100: bgez        $t7, L_803B1110
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803B1104: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_803B1110;
    }
    // 0x803B1104: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x803B1108: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x803B110C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_803B1110:
    // 0x803B1110: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x803B1114: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x803B1118: jal         0x803B13FC
    // 0x803B111C: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    func_803B13FC(rdram, ctx);
        goto after_2;
    // 0x803B111C: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    after_2:
    // 0x803B1120: jal         0x80037908
    // 0x803B1124: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803B1124: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803B1128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B112C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1130: jr          $ra
    // 0x803B1134: nop

    return;
    // 0x803B1134: nop

;}
RECOMP_FUNC void func_803B1138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B113C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1144: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B1148: jal         0x80037908
    // 0x803B114C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803B114C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803B1150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1158: jr          $ra
    // 0x803B115C: nop

    return;
    // 0x803B115C: nop

;}
RECOMP_FUNC void func_803B1160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1160: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1164: lh          $t6, 0x2A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2A);
    // 0x803B1168: nop

    // 0x803B116C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803B1170: jr          $ra
    // 0x803B1174: sh          $t7, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r15;
    return;
    // 0x803B1174: sh          $t7, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803B1178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1178: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B117C: lh          $t6, 0x2A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2A);
    // 0x803B1180: nop

    // 0x803B1184: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803B1188: jr          $ra
    // 0x803B118C: sh          $t7, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r15;
    return;
    // 0x803B118C: sh          $t7, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803B1190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1198: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x803B119C: nop

    // 0x803B11A0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803B11A4: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    // 0x803B11A8: lh          $t8, 0x28($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X28);
    // 0x803B11AC: nop

    // 0x803B11B0: bgez        $t8, L_803B11C4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x803B11B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803B11C4;
    }
    // 0x803B11B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B11B8: jal         0x803B1160
    // 0x803B11BC: nop

    func_803B1160(rdram, ctx);
        goto after_0;
    // 0x803B11BC: nop

    after_0:
    // 0x803B11C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B11C4:
    // 0x803B11C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B11C8: jr          $ra
    // 0x803B11CC: nop

    return;
    // 0x803B11CC: nop

;}
RECOMP_FUNC void func_803B11D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B11D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B11D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B11D8: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x803B11DC: nop

    // 0x803B11E0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803B11E4: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    // 0x803B11E8: lh          $t8, 0x28($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X28);
    // 0x803B11EC: nop

    // 0x803B11F0: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x803B11F4: bne         $at, $zero, L_803B1208
    if (ctx->r1 != 0) {
        // 0x803B11F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803B1208;
    }
    // 0x803B11F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B11FC: jal         0x803B1178
    // 0x803B1200: nop

    func_803B1178(rdram, ctx);
        goto after_0;
    // 0x803B1200: nop

    after_0:
    // 0x803B1204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B1208:
    // 0x803B1208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B120C: jr          $ra
    // 0x803B1210: nop

    return;
    // 0x803B1210: nop

;}
RECOMP_FUNC void func_803B1214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B121C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1220: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B1224: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803B1228: nop

    // 0x803B122C: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x803B1230: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x803B1234: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1238: jal         0x800296E0
    // 0x803B123C: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B123C: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    after_0:
    // 0x803B1240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1248: jr          $ra
    // 0x803B124C: nop

    return;
    // 0x803B124C: nop

;}
RECOMP_FUNC void func_803B1250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1258: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B125C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B1260: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803B1264: nop

    // 0x803B1268: xori        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 ^ 0X1;
    // 0x803B126C: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    // 0x803B1270: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1274: jal         0x800296E0
    // 0x803B1278: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B1278: addiu       $a0, $a0, 0x128C
    ctx->r4 = ADD32(ctx->r4, 0X128C);
    after_0:
    // 0x803B127C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1284: jr          $ra
    // 0x803B1288: nop

    return;
    // 0x803B1288: nop

;}
RECOMP_FUNC void func_803B128C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B128C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B1298: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803B129C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803B12A0: bne         $t6, $zero, L_803B12B0
    if (ctx->r14 != 0) {
        // 0x803B12A4: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_803B12B0;
    }
    // 0x803B12A4: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x803B12A8: b           L_803B12B4
    // 0x803B12AC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_803B12B4;
    // 0x803B12AC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_803B12B0:
    // 0x803B12B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_803B12B4:
    // 0x803B12B4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x803B12B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x803B12BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x803B12C0: sw          $v0, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r2;
    // 0x803B12C4: lw          $t7, 0x59BC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X59BC);
    // 0x803B12C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B12CC: lui         $a2, 0x120
    ctx->r6 = S32(0X120 << 16);
    // 0x803B12D0: jal         0x8001D4C0
    // 0x803B12D4: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x803B12D4: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    after_0:
    // 0x803B12D8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x803B12DC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x803B12E0: blez        $v0, L_803B12F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x803B12E4: sw          $v0, 0x112C($v1)
        MEM_W(0X112C, ctx->r3) = ctx->r2;
            goto L_803B12F4;
    }
    // 0x803B12E4: sw          $v0, 0x112C($v1)
    MEM_W(0X112C, ctx->r3) = ctx->r2;
    // 0x803B12E8: lui         $at, 0x120
    ctx->r1 = S32(0X120 << 16);
    // 0x803B12EC: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x803B12F0: bne         $at, $zero, L_803B1300
    if (ctx->r1 != 0) {
        // 0x803B12F4: lui         $a0, 0x803B
        ctx->r4 = S32(0X803B << 16);
            goto L_803B1300;
    }
L_803B12F4:
    // 0x803B12F4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B12F8: jal         0x800296E0
    // 0x803B12FC: addiu       $a0, $a0, 0xFF8
    ctx->r4 = ADD32(ctx->r4, 0XFF8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803B12FC: addiu       $a0, $a0, 0xFF8
    ctx->r4 = ADD32(ctx->r4, 0XFF8);
    after_1:
L_803B1300:
    // 0x803B1300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1308: jr          $ra
    // 0x803B130C: nop

    return;
    // 0x803B130C: nop

;}
RECOMP_FUNC void func_803B1310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1310: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803B1314: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x803B1318: lh          $t6, 0x9A($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9A);
    // 0x803B131C: lh          $t0, 0xA0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA0);
    // 0x803B1320: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803B1324: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803B1328: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803B132C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x803B1330: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x803B1334: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803B1338: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803B133C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803B1340: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B1344: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803B1348: addiu       $t3, $zero, 0x25
    ctx->r11 = ADD32(0, 0X25);
    // 0x803B134C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803B1350: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803B1354: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x803B1358: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803B135C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803B1360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x803B1364: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803B1368: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x803B136C: addiu       $a2, $zero, 0x8A
    ctx->r6 = ADD32(0, 0X8A);
    // 0x803B1370: bgez        $t7, L_803B1380
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803B1374: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_803B1380;
    }
    // 0x803B1374: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x803B1378: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x803B137C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_803B1380:
    // 0x803B1380: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803B1384: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x803B1388: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x803B138C: lw          $a3, 0x3A30($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X3A30);
    // 0x803B1390: jal         0x8002F528
    // 0x803B1394: nop

    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x803B1394: nop

    after_0:
    // 0x803B1398: addiu       $t7, $zero, 0x55
    ctx->r15 = ADD32(0, 0X55);
    // 0x803B139C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803B13A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B13A4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x803B13A8: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x803B13AC: jal         0x8004A55C
    // 0x803B13B0: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    func_8004A55C(rdram, ctx);
        goto after_1;
    // 0x803B13B0: addiu       $a3, $zero, 0x109
    ctx->r7 = ADD32(0, 0X109);
    after_1:
    // 0x803B13B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803B13B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B13BC: jal         0x8004C414
    // 0x803B13C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004C414(rdram, ctx);
        goto after_2;
    // 0x803B13C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803B13C4: lui         $t8, 0x803E
    ctx->r24 = S32(0X803E << 16);
    // 0x803B13C8: addiu       $t8, $t8, -0x2980
    ctx->r24 = ADD32(ctx->r24, -0X2980);
    // 0x803B13CC: sw          $t8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r24;
    // 0x803B13D0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x803B13D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803B13D8: jal         0x8004C414
    // 0x803B13DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004C414(rdram, ctx);
        goto after_3;
    // 0x803B13DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803B13E0: lui         $t0, 0x803E
    ctx->r8 = S32(0X803E << 16);
    // 0x803B13E4: addiu       $t0, $t0, -0x2974
    ctx->r8 = ADD32(ctx->r8, -0X2974);
    // 0x803B13E8: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x803B13EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803B13F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803B13F4: jr          $ra
    // 0x803B13F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803B13F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803B13FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B13FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1404: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803B1408: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B140C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B1410: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803B1414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1418: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803B141C: sb          $a0, 0x134($v0)
    MEM_B(0X134, ctx->r2) = ctx->r4;
    // 0x803B1420: jal         0x803B1A00
    // 0x803B1424: sb          $t8, 0x135($v0)
    MEM_B(0X135, ctx->r2) = ctx->r24;
    func_803B1A00(rdram, ctx);
        goto after_0;
    // 0x803B1424: sb          $t8, 0x135($v0)
    MEM_B(0X135, ctx->r2) = ctx->r24;
    after_0:
    // 0x803B1428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B142C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1430: jr          $ra
    // 0x803B1434: nop

    return;
    // 0x803B1434: nop

;}
RECOMP_FUNC void func_803B1438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1438: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B143C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B1440: lb          $t6, 0x134($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X134);
    // 0x803B1444: lhu         $t9, 0x148($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X148);
    // 0x803B1448: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803B144C: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x803B1450: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x803B1454: or          $t0, $t9, $t8
    ctx->r8 = ctx->r25 | ctx->r24;
    // 0x803B1458: sh          $t0, 0x148($v1)
    MEM_H(0X148, ctx->r3) = ctx->r8;
    // 0x803B145C: jr          $ra
    // 0x803B1460: sb          $t1, 0x135($v1)
    MEM_B(0X135, ctx->r3) = ctx->r9;
    return;
    // 0x803B1460: sb          $t1, 0x135($v1)
    MEM_B(0X135, ctx->r3) = ctx->r9;
;}
RECOMP_FUNC void func_803B1464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1464: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803B1468: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B146C: lhu         $t8, -0x3168($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3168);
    // 0x803B1470: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803B1474: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803B1478: sllv        $t1, $t9, $t7
    ctx->r9 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x803B147C: and         $v0, $t8, $t1
    ctx->r2 = ctx->r24 & ctx->r9;
    // 0x803B1480: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x803B1484: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B1488: jr          $ra
    // 0x803B148C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    return;
    // 0x803B148C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
;}
RECOMP_FUNC void func_803B1490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1490: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B1494: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803B1498: lb          $t8, 0x134($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X134);
    // 0x803B149C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803B14A0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803B14A4: bne         $t7, $t8, L_803B14C4
    if (ctx->r15 != ctx->r24) {
        // 0x803B14A8: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_803B14C4;
    }
    // 0x803B14A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B14AC: lb          $t9, 0x135($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X135);
    // 0x803B14B0: nop

    // 0x803B14B4: bne         $t9, $zero, L_803B14C4
    if (ctx->r25 != 0) {
        // 0x803B14B8: nop
    
            goto L_803B14C4;
    }
    // 0x803B14B8: nop

    // 0x803B14BC: jr          $ra
    // 0x803B14C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803B14C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803B14C4:
    // 0x803B14C4: lb          $t0, 0x135($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X135);
    // 0x803B14C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803B14CC: beq         $t0, $zero, L_803B14DC
    if (ctx->r8 == 0) {
        // 0x803B14D0: nop
    
            goto L_803B14DC;
    }
    // 0x803B14D0: nop

    // 0x803B14D4: jr          $ra
    // 0x803B14D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x803B14D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_803B14DC:
    // 0x803B14DC: jr          $ra
    // 0x803B14E0: nop

    return;
    // 0x803B14E0: nop

;}
RECOMP_FUNC void func_803B14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B14E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B14E8: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B14EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B14F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B14F4: lb          $a0, 0x134($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X134);
    // 0x803B14F8: jal         0x803B1464
    // 0x803B14FC: nop

    func_803B1464(rdram, ctx);
        goto after_0;
    // 0x803B14FC: nop

    after_0:
    // 0x803B1500: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B1504: bne         $v0, $zero, L_803B1540
    if (ctx->r2 != 0) {
        // 0x803B1508: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_803B1540;
    }
    // 0x803B1508: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B150C: lb          $t6, 0x134($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X134);
    // 0x803B1510: nop

    // 0x803B1514: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x803B1518: lbu         $t7, 0x137($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X137);
    // 0x803B151C: nop

    // 0x803B1520: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803B1524: sb          $t8, 0x137($v0)
    MEM_B(0X137, ctx->r2) = ctx->r24;
    // 0x803B1528: lb          $t9, 0x134($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X134);
    // 0x803B152C: nop

    // 0x803B1530: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x803B1534: lbu         $t1, 0x137($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X137);
    // 0x803B1538: nop

    // 0x803B153C: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
L_803B1540:
    // 0x803B1540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1544: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x803B1548: jr          $ra
    // 0x803B154C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803B154C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803B1550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1550: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803B1554: lh          $t9, 0x2C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2C);
    // 0x803B1558: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803B155C: bgez        $t7, L_803B156C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803B1560: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_803B156C;
    }
    // 0x803B1560: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x803B1564: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x803B1568: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_803B156C:
    // 0x803B156C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x803B1570: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x803B1574: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x803B1578: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803B157C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803B1580: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x803B1584: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x803B1588: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x803B158C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803B1590: lui         $t3, 0x803B
    ctx->r11 = S32(0X803B << 16);
    // 0x803B1594: lbu         $v1, 0x5688($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5688);
    // 0x803B1598: addiu       $t3, $t3, 0x3A40
    ctx->r11 = ADD32(ctx->r11, 0X3A40);
    // 0x803B159C: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x803B15A0: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x803B15A4: addu        $t4, $a1, $v1
    ctx->r12 = ADD32(ctx->r5, ctx->r3);
    // 0x803B15A8: lbu         $t5, 0xF($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XF);
    // 0x803B15AC: xori        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 ^ 0X1;
    // 0x803B15B0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x803B15B4: sb          $t5, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r13;
    // 0x803B15B8: lbu         $t8, 0xF($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XF);
    // 0x803B15BC: jr          $ra
    // 0x803B15C0: sb          $t8, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r24;
    return;
    // 0x803B15C0: sb          $t8, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_803B15C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B15C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B15C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B15CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B15D0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B15D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B15D8: jal         0x800296E0
    // 0x803B15DC: addiu       $a0, $a0, 0x15F0
    ctx->r4 = ADD32(ctx->r4, 0X15F0);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B15DC: addiu       $a0, $a0, 0x15F0
    ctx->r4 = ADD32(ctx->r4, 0X15F0);
    after_0:
    // 0x803B15E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B15E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B15E8: jr          $ra
    // 0x803B15EC: nop

    return;
    // 0x803B15EC: nop

;}
RECOMP_FUNC void func_803B15F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B15F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B15F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B15F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B15FC: jal         0x80036234
    // 0x803B1600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803B1600: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B1604: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1608: jal         0x80035FF0
    // 0x803B160C: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803B160C: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    after_1:
    // 0x803B1610: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803B1614: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803B1618: jal         0x80049E40
    // 0x803B161C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803B161C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803B1620: jal         0x80020270
    // 0x803B1624: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x803B1624: nop

    after_3:
    // 0x803B1628: jal         0x8026E090
    // 0x803B162C: nop

    LOOKUP_FUNC(0x8026E090)(rdram, ctx);
        goto after_4;
    // 0x803B162C: nop

    after_4:
    // 0x803B1630: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1634: jal         0x800296E0
    // 0x803B1638: addiu       $a0, $a0, 0x164C
    ctx->r4 = ADD32(ctx->r4, 0X164C);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x803B1638: addiu       $a0, $a0, 0x164C
    ctx->r4 = ADD32(ctx->r4, 0X164C);
    after_5:
    // 0x803B163C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1640: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1644: jr          $ra
    // 0x803B1648: nop

    return;
    // 0x803B1648: nop

;}
RECOMP_FUNC void func_803B164C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B164C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1658: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B165C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1660: addiu       $a0, $a0, 0x167C
    ctx->r4 = ADD32(ctx->r4, 0X167C);
    // 0x803B1664: jal         0x8002989C
    // 0x803B1668: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x803B1668: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x803B166C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1674: jr          $ra
    // 0x803B1678: nop

    return;
    // 0x803B1678: nop

;}
RECOMP_FUNC void func_803B167C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B167C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1688: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B168C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x803B1690: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x803B1694: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803B1698: jal         0x8026E0B4
    // 0x803B169C: addiu       $a2, $zero, 0x6B
    ctx->r6 = ADD32(0, 0X6B);
    LOOKUP_FUNC(0x8026E0B4)(rdram, ctx);
        goto after_0;
    // 0x803B169C: addiu       $a2, $zero, 0x6B
    ctx->r6 = ADD32(0, 0X6B);
    after_0:
    // 0x803B16A0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803B16A4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B16A8: sb          $zero, 0x69D9($at)
    MEM_B(0X69D9, ctx->r1) = 0;
    // 0x803B16AC: jal         0x80029354
    // 0x803B16B0: addiu       $a0, $a0, 0x1778
    ctx->r4 = ADD32(ctx->r4, 0X1778);
    func_80029354(rdram, ctx);
        goto after_1;
    // 0x803B16B0: addiu       $a0, $a0, 0x1778
    ctx->r4 = ADD32(ctx->r4, 0X1778);
    after_1:
    // 0x803B16B4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B16B8: addiu       $a0, $a0, 0x16D4
    ctx->r4 = ADD32(ctx->r4, 0X16D4);
    // 0x803B16BC: jal         0x8004A9B4
    // 0x803B16C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_2;
    // 0x803B16C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x803B16C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B16C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B16CC: jr          $ra
    // 0x803B16D0: nop

    return;
    // 0x803B16D0: nop

;}
RECOMP_FUNC void func_803B16D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B16D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B16D8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B16DC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B16E0: lw          $t6, 0x60($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X60);
    // 0x803B16E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B16E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B16EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803B16F0: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x803B16F4: nop

    // 0x803B16F8: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x803B16FC: beq         $t8, $zero, L_803B176C
    if (ctx->r24 == 0) {
        // 0x803B1700: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803B176C;
    }
    // 0x803B1700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1704: jal         0x80035770
    // 0x803B1708: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803B1708: nop

    after_0:
    // 0x803B170C: jal         0x80015BC0
    // 0x803B1710: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x803B1710: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x803B1714: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x803B1718: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x803B171C: lb          $t9, 0x134($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X134);
    // 0x803B1720: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803B1724: lhu         $t2, 0x148($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X148);
    // 0x803B1728: sllv        $v0, $t0, $t9
    ctx->r2 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x803B172C: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x803B1730: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x803B1734: or          $t3, $t2, $t1
    ctx->r11 = ctx->r10 | ctx->r9;
    // 0x803B1738: bne         $t3, $at, L_803B1760
    if (ctx->r11 != ctx->r1) {
        // 0x803B173C: nop
    
            goto L_803B1760;
    }
    // 0x803B173C: nop

    // 0x803B1740: lb          $t4, 0x135($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X135);
    // 0x803B1744: nop

    // 0x803B1748: bne         $t4, $zero, L_803B1760
    if (ctx->r12 != 0) {
        // 0x803B174C: nop
    
            goto L_803B1760;
    }
    // 0x803B174C: nop

    // 0x803B1750: jal         0x80037BA8
    // 0x803B1754: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80037BA8(rdram, ctx);
        goto after_2;
    // 0x803B1754: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x803B1758: b           L_803B176C
    // 0x803B175C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B176C;
    // 0x803B175C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B1760:
    // 0x803B1760: jal         0x80037BA8
    // 0x803B1764: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_3;
    // 0x803B1764: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803B1768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B176C:
    // 0x803B176C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1770: jr          $ra
    // 0x803B1774: nop

    return;
    // 0x803B1774: nop

;}
RECOMP_FUNC void func_803B1778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1778: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B177C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803B1780: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803B1784: jal         0x803B1844
    // 0x803B1788: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_803B1844(rdram, ctx);
        goto after_0;
    // 0x803B1788: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B178C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803B1790: bne         $v0, $at, L_803B17B8
    if (ctx->r2 != ctx->r1) {
        // 0x803B1794: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_803B17B8;
    }
    // 0x803B1794: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x803B1798: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B179C: jal         0x80015BC0
    // 0x803B17A0: sb          $zero, -0x317B($at)
    MEM_B(-0X317B, ctx->r1) = 0;
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x803B17A0: sb          $zero, -0x317B($at)
    MEM_B(-0X317B, ctx->r1) = 0;
    after_1:
    // 0x803B17A4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B17A8: jal         0x8002AAC0
    // 0x803B17AC: addiu       $a0, $a0, 0x37AC
    ctx->r4 = ADD32(ctx->r4, 0X37AC);
    func_8002AAC0(rdram, ctx);
        goto after_2;
    // 0x803B17AC: addiu       $a0, $a0, 0x37AC
    ctx->r4 = ADD32(ctx->r4, 0X37AC);
    after_2:
    // 0x803B17B0: b           L_803B17CC
    // 0x803B17B4: nop

        goto L_803B17CC;
    // 0x803B17B4: nop

L_803B17B8:
    // 0x803B17B8: jal         0x80015BC0
    // 0x803B17BC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x803B17BC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_3:
    // 0x803B17C0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B17C4: jal         0x8002AAC0
    // 0x803B17C8: addiu       $a0, $a0, 0x37B8
    ctx->r4 = ADD32(ctx->r4, 0X37B8);
    func_8002AAC0(rdram, ctx);
        goto after_4;
    // 0x803B17C8: addiu       $a0, $a0, 0x37B8
    ctx->r4 = ADD32(ctx->r4, 0X37B8);
    after_4:
L_803B17CC:
    // 0x803B17CC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B17D0: jal         0x8002AAC0
    // 0x803B17D4: addiu       $a0, $a0, 0x37C4
    ctx->r4 = ADD32(ctx->r4, 0X37C4);
    func_8002AAC0(rdram, ctx);
        goto after_5;
    // 0x803B17D4: addiu       $a0, $a0, 0x37C4
    ctx->r4 = ADD32(ctx->r4, 0X37C4);
    after_5:
    // 0x803B17D8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803B17DC: lb          $a3, -0x317C($a3)
    ctx->r7 = MEM_B(ctx->r7, -0X317C);
    // 0x803B17E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803B17E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803B17E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803B17EC: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x803B17F0: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x803B17F4: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x803B17F8: jal         0x8002FCE0
    // 0x803B17FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    func_8002FCE0(rdram, ctx);
        goto after_6;
    // 0x803B17FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    after_6:
    // 0x803B1800: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803B1804: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x803B1808: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803B180C: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x803B1810: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x803B1814: jal         0x8004A55C
    // 0x803B1818: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    func_8004A55C(rdram, ctx);
        goto after_7;
    // 0x803B1818: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    after_7:
    // 0x803B181C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1820: jal         0x800296E0
    // 0x803B1824: addiu       $a0, $a0, 0x1838
    ctx->r4 = ADD32(ctx->r4, 0X1838);
    func_800296E0(rdram, ctx);
        goto after_8;
    // 0x803B1824: addiu       $a0, $a0, 0x1838
    ctx->r4 = ADD32(ctx->r4, 0X1838);
    after_8:
    // 0x803B1828: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803B182C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B1830: jr          $ra
    // 0x803B1834: nop

    return;
    // 0x803B1834: nop

;}
RECOMP_FUNC void func_803B1838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1838: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803B183C: jr          $ra
    // 0x803B1840: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803B1840: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803B1844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1844: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B1848: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x803B184C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1854: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x803B1858: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    // 0x803B185C: lh          $a2, 0xA9E($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA9E);
    // 0x803B1860: lh          $a3, 0xAA0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XAA0);
    // 0x803B1864: jal         0x8003CF0C
    // 0x803B1868: nop

    func_8003CF0C(rdram, ctx);
        goto after_0;
    // 0x803B1868: nop

    after_0:
    // 0x803B186C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1870: slti        $t6, $v0, 0x2
    ctx->r14 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x803B1874: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x803B1878: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x803B187C: jr          $ra
    // 0x803B1880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803B1880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803B1884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1884: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803B1888: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x803B188C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803B1890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1894: lh          $t6, 0x26($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X26);
    // 0x803B1898: lh          $t9, 0x2C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2C);
    // 0x803B189C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803B18A0: bgez        $t7, L_803B18B0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x803B18A4: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_803B18B0;
    }
    // 0x803B18A4: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x803B18A8: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x803B18AC: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_803B18B0:
    // 0x803B18B0: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803B18B4: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x803B18B8: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x803B18BC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803B18C0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803B18C4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803B18C8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803B18CC: lui         $t5, 0x803B
    ctx->r13 = S32(0X803B << 16);
    // 0x803B18D0: addiu       $t5, $t5, 0x3A40
    ctx->r13 = ADD32(ctx->r13, 0X3A40);
    // 0x803B18D4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x803B18D8: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x803B18DC: lbu         $t1, 0xF($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XF);
    // 0x803B18E0: lbu         $t6, 0x10($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X10);
    // 0x803B18E4: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x803B18E8: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803B18EC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x803B18F0: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x803B18F4: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x803B18F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x803B18FC: jal         0x80039F1C
    // 0x803B1900: sb          $t6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r14;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x803B1900: sb          $t6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r14;
    after_0:
    // 0x803B1904: lbu         $a0, 0x1E($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1E);
    // 0x803B1908: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x803B190C: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x803B1910: jal         0x80039F1C
    // 0x803B1914: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80039F1C(rdram, ctx);
        goto after_1;
    // 0x803B1914: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803B1918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B191C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803B1920: jr          $ra
    // 0x803B1924: nop

    return;
    // 0x803B1924: nop

;}
RECOMP_FUNC void func_803B1928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B192C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B1934: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x803B1938: nop

    // 0x803B193C: lb          $a0, 0x1F($t6)
    ctx->r4 = MEM_B(ctx->r14, 0X1F);
    // 0x803B1940: jal         0x803B1490
    // 0x803B1944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803B1490(rdram, ctx);
        goto after_0;
    // 0x803B1944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803B1948: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803B194C: bne         $v0, $zero, L_803B196C
    if (ctx->r2 != 0) {
        // 0x803B1950: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_803B196C;
    }
    // 0x803B1950: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803B1954: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803B1958: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x803B195C: jal         0x800296E0
    // 0x803B1960: addiu       $a0, $a0, 0x19C4
    ctx->r4 = ADD32(ctx->r4, 0X19C4);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803B1960: addiu       $a0, $a0, 0x19C4
    ctx->r4 = ADD32(ctx->r4, 0X19C4);
    after_1:
    // 0x803B1964: b           L_803B19B8
    // 0x803B1968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B19B8;
    // 0x803B1968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B196C:
    // 0x803B196C: lw          $t8, 0x38($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X38);
    // 0x803B1970: nop

    // 0x803B1974: lb          $a0, 0x1F($t8)
    ctx->r4 = MEM_B(ctx->r24, 0X1F);
    // 0x803B1978: jal         0x803B1464
    // 0x803B197C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803B1464(rdram, ctx);
        goto after_2;
    // 0x803B197C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_2:
    // 0x803B1980: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803B1984: beq         $v0, $zero, L_803B19A4
    if (ctx->r2 == 0) {
        // 0x803B1988: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_803B19A4;
    }
    // 0x803B1988: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803B198C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x803B1990: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803B1994: jal         0x800296E0
    // 0x803B1998: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x803B1998: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    after_3:
    // 0x803B199C: b           L_803B19B8
    // 0x803B19A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803B19B8;
    // 0x803B19A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B19A4:
    // 0x803B19A4: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x803B19A8: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
    // 0x803B19AC: jal         0x800296E0
    // 0x803B19B0: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x803B19B0: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    after_4:
    // 0x803B19B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803B19B8:
    // 0x803B19B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B19BC: jr          $ra
    // 0x803B19C0: nop

    return;
    // 0x803B19C0: nop

;}
RECOMP_FUNC void func_803B19C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B19C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803B19C8: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x803B19CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B19D0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803B19D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B19D8: bne         $t7, $zero, L_803B19F0
    if (ctx->r15 != 0) {
        // 0x803B19DC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_803B19F0;
    }
    // 0x803B19DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803B19E0: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x803B19E4: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x803B19E8: jal         0x800296E0
    // 0x803B19EC: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803B19EC: addiu       $a0, $a0, -0x6610
    ctx->r4 = ADD32(ctx->r4, -0X6610);
    after_0:
L_803B19F0:
    // 0x803B19F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B19F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B19F8: jr          $ra
    // 0x803B19FC: nop

    return;
    // 0x803B19FC: nop

;}
RECOMP_FUNC void func_803B1A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1A00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803B1A04: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803B1A08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803B1A0C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803B1A10: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803B1A14: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x803B1A18: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x803B1A1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803B1A20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803B1A24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803B1A28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803B1A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803B1A30: jal         0x8001D4C0
    // 0x803B1A34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x803B1A34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x803B1A38: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x803B1A3C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803B1A40: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803B1A44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803B1A48: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803B1A4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803B1A50: lui         $t1, 0x803B
    ctx->r9 = S32(0X803B << 16);
    // 0x803B1A54: addiu       $t1, $t1, 0x3A40
    ctx->r9 = ADD32(ctx->r9, 0X3A40);
    // 0x803B1A58: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803B1A5C: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x803B1A60: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x803B1A64: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B1A68: sh          $t2, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r10;
    // 0x803B1A6C: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x803B1A70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803B1A74: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x803B1A78: jal         0x803B1B9C
    // 0x803B1A7C: sh          $t3, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r11;
    func_803B1B9C(rdram, ctx);
        goto after_1;
    // 0x803B1A7C: sh          $t3, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r11;
    after_1:
    // 0x803B1A80: jal         0x803B1FF8
    // 0x803B1A84: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_803B1FF8(rdram, ctx);
        goto after_2;
    // 0x803B1A84: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x803B1A88: jal         0x803B2034
    // 0x803B1A8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_803B2034(rdram, ctx);
        goto after_3;
    // 0x803B1A8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x803B1A90: jal         0x803B1ED8
    // 0x803B1A94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_803B1ED8(rdram, ctx);
        goto after_4;
    // 0x803B1A94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x803B1A98: jal         0x803B1F24
    // 0x803B1A9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_803B1F24(rdram, ctx);
        goto after_5;
    // 0x803B1A9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x803B1AA0: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x803B1AA4: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x803B1AA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803B1AAC: addiu       $s5, $zero, 0xA94
    ctx->r21 = ADD32(0, 0XA94);
L_803B1AB0:
    // 0x803B1AB0: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803B1AB4: addu        $s2, $s3, $s0
    ctx->r18 = ADD32(ctx->r19, ctx->r16);
    // 0x803B1AB8: lbu         $t5, 0xF($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0XF);
    // 0x803B1ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803B1AC0: mflo        $t4
    ctx->r12 = lo;
    // 0x803B1AC4: addu        $s1, $s4, $t4
    ctx->r17 = ADD32(ctx->r20, ctx->r12);
    // 0x803B1AC8: sb          $t5, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r13;
    // 0x803B1ACC: lbu         $t6, 0x11($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X11);
    // 0x803B1AD0: jal         0x8005CED4
    // 0x803B1AD4: sh          $t6, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r14;
    func_8005CED4(rdram, ctx);
        goto after_6;
    // 0x803B1AD4: sh          $t6, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r14;
    after_6:
    // 0x803B1AD8: jal         0x8005CC40
    // 0x803B1ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CC40(rdram, ctx);
        goto after_7;
    // 0x803B1ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803B1AE0: lbu         $t7, 0x13($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X13);
    // 0x803B1AE4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803B1AE8: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x803B1AEC: jal         0x803B1C18
    // 0x803B1AF0: sb          $t7, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r15;
    func_803B1C18(rdram, ctx);
        goto after_8;
    // 0x803B1AF0: sb          $t7, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r15;
    after_8:
    // 0x803B1AF4: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803B1AF8: jal         0x8005B2C8
    // 0x803B1AFC: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    func_8005B2C8(rdram, ctx);
        goto after_9;
    // 0x803B1AFC: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    after_9:
    // 0x803B1B00: jal         0x803F1354
    // 0x803B1B04: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    LOOKUP_FUNC(0x803F1354)(rdram, ctx);
        goto after_10;
    // 0x803B1B04: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_10:
    // 0x803B1B08: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803B1B0C: jal         0x80039B28
    // 0x803B1B10: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039B28(rdram, ctx);
        goto after_11;
    // 0x803B1B10: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_11:
    // 0x803B1B14: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803B1B18: jal         0x803B1C78
    // 0x803B1B1C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803B1C78(rdram, ctx);
        goto after_12;
    // 0x803B1B1C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_12:
    // 0x803B1B20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803B1B24: jal         0x803B1DA8
    // 0x803B1B28: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803B1DA8(rdram, ctx);
        goto after_13;
    // 0x803B1B28: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_13:
    // 0x803B1B2C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803B1B30: jal         0x803B1E68
    // 0x803B1B34: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803B1E68(rdram, ctx);
        goto after_14;
    // 0x803B1B34: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_14:
    // 0x803B1B38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x803B1B3C: jal         0x803B1E74
    // 0x803B1B40: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803B1E74(rdram, ctx);
        goto after_15;
    // 0x803B1B40: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_15:
    // 0x803B1B44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803B1B48: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803B1B4C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803B1B50: bne         $at, $zero, L_803B1AB0
    if (ctx->r1 != 0) {
        // 0x803B1B54: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_803B1AB0;
    }
    // 0x803B1B54: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803B1B58: jal         0x8006DFEC
    // 0x803B1B5C: nop

    func_8006DFEC(rdram, ctx);
        goto after_16;
    // 0x803B1B5C: nop

    after_16:
    // 0x803B1B60: jal         0x80038EF8
    // 0x803B1B64: nop

    func_80038EF8(rdram, ctx);
        goto after_17;
    // 0x803B1B64: nop

    after_17:
    // 0x803B1B68: jal         0x800372F4
    // 0x803B1B6C: nop

    func_800372F4(rdram, ctx);
        goto after_18;
    // 0x803B1B6C: nop

    after_18:
    // 0x803B1B70: jal         0x803B2078
    // 0x803B1B74: nop

    func_803B2078(rdram, ctx);
        goto after_19;
    // 0x803B1B74: nop

    after_19:
    // 0x803B1B78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803B1B7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803B1B80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803B1B84: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803B1B88: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803B1B8C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x803B1B90: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x803B1B94: jr          $ra
    // 0x803B1B98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803B1B98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803B1B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803B1BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803B1BA4: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x803B1BA8: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x803B1BAC: lhu         $t9, 0x4($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X4);
    // 0x803B1BB0: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x803B1BB4: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x803B1BB8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803B1BBC: lbu         $v0, -0x317A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X317A);
    // 0x803B1BC0: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x803B1BC4: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x803B1BC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803B1BCC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x803B1BD0: bne         $v0, $at, L_803B1BE8
    if (ctx->r2 != ctx->r1) {
        // 0x803B1BD4: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_803B1BE8;
    }
    // 0x803B1BD4: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x803B1BD8: addiu       $a1, $t0, 0x7
    ctx->r5 = ADD32(ctx->r8, 0X7);
    // 0x803B1BDC: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x803B1BE0: b           L_803B1C00
    // 0x803B1BE4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
        goto L_803B1C00;
    // 0x803B1BE4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
L_803B1BE8:
    // 0x803B1BE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803B1BEC: bne         $v0, $at, L_803B1C00
    if (ctx->r2 != ctx->r1) {
        // 0x803B1BF0: nop
    
            goto L_803B1C00;
    }
    // 0x803B1BF0: nop

    // 0x803B1BF4: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    // 0x803B1BF8: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x803B1BFC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_803B1C00:
    // 0x803B1C00: jal         0x80293FA8
    // 0x803B1C04: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    LOOKUP_FUNC(0x80293FA8)(rdram, ctx);
        goto after_0;
    // 0x803B1C04: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    after_0:
    // 0x803B1C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803B1C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803B1C10: jr          $ra
    // 0x803B1C14: nop

    return;
    // 0x803B1C14: nop

;}
RECOMP_FUNC void func_803B1C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803B1C18: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803B1C1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803B1C20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C2C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803B1C30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803B1C3C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803B1C40: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803B1C44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803B1C48: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803B1C4C: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x803B1C50: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x803B1C54: andi        $t1, $t9, 0xFDF4
    ctx->r9 = ctx->r25 & 0XFDF4;
    // 0x803B1C58: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803B1C5C: sh          $t1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r9;
    // 0x803B1C60: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x803B1C64: lhu         $t4, 0x16($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X16);
    // 0x803B1C68: nop

    // 0x803B1C6C: or          $t5, $t1, $t4
    ctx->r13 = ctx->r9 | ctx->r12;
    // 0x803B1C70: jr          $ra
    // 0x803B1C74: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    return;
    // 0x803B1C74: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
;}
