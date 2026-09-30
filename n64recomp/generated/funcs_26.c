#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80055528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055528: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005552C: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055530: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80055534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005553C: lw          $t6, 0xA0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XA0);
    // 0x80055540: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80055544: sw          $t6, 0x3618($at)
    MEM_W(0X3618, ctx->r1) = ctx->r14;
    // 0x80055548: lw          $t7, 0x8C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8C);
    // 0x8005554C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80055550: beq         $a0, $t7, L_80055594
    if (ctx->r4 == ctx->r15) {
        // 0x80055554: addiu       $a2, $a2, 0x361E
        ctx->r6 = ADD32(ctx->r6, 0X361E);
            goto L_80055594;
    }
    // 0x80055554: addiu       $a2, $a2, 0x361E
    ctx->r6 = ADD32(ctx->r6, 0X361E);
    // 0x80055558: lhu         $t8, 0x0($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X0);
    // 0x8005555C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80055560: andi        $t9, $t8, 0xFBFF
    ctx->r25 = ctx->r24 & 0XFBFF;
    // 0x80055564: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x80055568: sw          $zero, 0x98($v1)
    MEM_W(0X98, ctx->r3) = 0;
    // 0x8005556C: sh          $zero, 0x366C($at)
    MEM_H(0X366C, ctx->r1) = 0;
    // 0x80055570: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80055574: sh          $zero, 0x65F4($at)
    MEM_H(0X65F4, ctx->r1) = 0;
    // 0x80055578: jal         0x80278A40
    // 0x8005557C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80278A40)(rdram, ctx);
        goto after_0;
    // 0x8005557C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80055580: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055584: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055588: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8005558C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80055590: nop

L_80055594:
    // 0x80055594: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80055598: sh          $zero, 0x9E8($at)
    MEM_H(0X9E8, ctx->r1) = 0;
    // 0x8005559C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800555A0: sh          $t0, 0xBE($v1)
    MEM_H(0XBE, ctx->r3) = ctx->r8;
    // 0x800555A4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800555A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800555AC: sb          $zero, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = 0;
    // 0x800555B0: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800555B4: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800555B8: sw          $a0, 0x84($t2)
    MEM_W(0X84, ctx->r10) = ctx->r4;
    // 0x800555BC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800555C0: addiu       $a2, $a2, 0x361E
    ctx->r6 = ADD32(ctx->r6, 0X361E);
    // 0x800555C4: sw          $a0, 0x88($t3)
    MEM_W(0X88, ctx->r11) = ctx->r4;
    // 0x800555C8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800555CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800555D0: sw          $a0, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = ctx->r4;
    // 0x800555D4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800555D8: nop

    // 0x800555DC: sw          $zero, 0xA0($t5)
    MEM_W(0XA0, ctx->r13) = 0;
    // 0x800555E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800555E4: nop

    // 0x800555E8: sw          $zero, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = 0;
    // 0x800555EC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800555F0: nop

    // 0x800555F4: sw          $zero, 0x90($t7)
    MEM_W(0X90, ctx->r15) = 0;
    // 0x800555F8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800555FC: nop

    // 0x80055600: sw          $zero, 0x94($t8)
    MEM_W(0X94, ctx->r24) = 0;
    // 0x80055604: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80055608: nop

    // 0x8005560C: sb          $zero, 0xBD($t9)
    MEM_B(0XBD, ctx->r25) = 0;
    // 0x80055610: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80055614: nop

    // 0x80055618: sw          $zero, 0x54($t0)
    MEM_W(0X54, ctx->r8) = 0;
    // 0x8005561C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80055620: lwc1        $f4, -0x6CA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6CA4);
    // 0x80055624: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055628: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x8005562C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80055630: lwc1        $f6, -0x6CA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6CA0);
    // 0x80055634: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80055638: swc1        $f6, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f6.u32l;
    // 0x8005563C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80055640: nop

    // 0x80055644: sh          $zero, 0x6A($t3)
    MEM_H(0X6A, ctx->r11) = 0;
    // 0x80055648: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8005564C: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x80055650: lhu         $t4, 0xC0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XC0);
    // 0x80055654: nop

    // 0x80055658: andi        $t5, $t4, 0xFFFC
    ctx->r13 = ctx->r12 & 0XFFFC;
    // 0x8005565C: sh          $t5, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r13;
    // 0x80055660: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80055664: nop

    // 0x80055668: lhu         $t6, 0xC2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC2);
    // 0x8005566C: nop

    // 0x80055670: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x80055674: sh          $t7, 0xC2($v1)
    MEM_H(0XC2, ctx->r3) = ctx->r15;
    // 0x80055678: lhu         $t8, 0x0($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X0);
    // 0x8005567C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80055680: andi        $t9, $t8, 0xF7FF
    ctx->r25 = ctx->r24 & 0XF7FF;
    // 0x80055684: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    // 0x80055688: swc1        $f8, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f8.u32l;
    // 0x8005568C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80055690: nop

    // 0x80055694: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
    // 0x80055698: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8005569C: nop

    // 0x800556A0: sh          $zero, 0x68($t2)
    MEM_H(0X68, ctx->r10) = 0;
    // 0x800556A4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800556A8: lhu         $t3, 0x522A($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X522A);
    // 0x800556AC: nop

    // 0x800556B0: sh          $t3, 0x6C($t4)
    MEM_H(0X6C, ctx->r12) = ctx->r11;
    // 0x800556B4: sw          $zero, 0x3614($at)
    MEM_W(0X3614, ctx->r1) = 0;
    // 0x800556B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800556BC: sh          $zero, 0x361C($at)
    MEM_H(0X361C, ctx->r1) = 0;
    // 0x800556C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800556C4: sb          $zero, 0x3610($at)
    MEM_B(0X3610, ctx->r1) = 0;
    // 0x800556C8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800556CC: sw          $zero, 0x3680($at)
    MEM_W(0X3680, ctx->r1) = 0;
    // 0x800556D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800556D4: sw          $zero, 0x3684($at)
    MEM_W(0X3684, ctx->r1) = 0;
    // 0x800556D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800556DC: sh          $zero, 0x368A($at)
    MEM_H(0X368A, ctx->r1) = 0;
    // 0x800556E0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800556E4: nop

    // 0x800556E8: lw          $a1, 0xA8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XA8);
    // 0x800556EC: nop

    // 0x800556F0: beq         $a1, $zero, L_80055728
    if (ctx->r5 == 0) {
        // 0x800556F4: nop
    
            goto L_80055728;
    }
    // 0x800556F4: nop

    // 0x800556F8: beq         $a0, $a1, L_80055728
    if (ctx->r4 == ctx->r5) {
        // 0x800556FC: nop
    
            goto L_80055728;
    }
    // 0x800556FC: nop

    // 0x80055700: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x80055704: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80055708: nop

    // 0x8005570C: sw          $zero, 0xA4($t5)
    MEM_W(0XA4, ctx->r13) = 0;
    // 0x80055710: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80055714: nop

    // 0x80055718: lhu         $t6, 0xC0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC0);
    // 0x8005571C: nop

    // 0x80055720: andi        $t7, $t6, 0x2FFF
    ctx->r15 = ctx->r14 & 0X2FFF;
    // 0x80055724: sh          $t7, 0xC0($v1)
    MEM_H(0XC0, ctx->r3) = ctx->r15;
L_80055728:
    // 0x80055728: lhu         $t8, 0x0($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X0);
    // 0x8005572C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80055730: andi        $t9, $t8, 0xBFFF
    ctx->r25 = ctx->r24 & 0XBFFF;
    // 0x80055734: jal         0x800554AC
    // 0x80055738: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    func_800554AC(rdram, ctx);
        goto after_1;
    // 0x80055738: sh          $t9, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r25;
    after_1:
    // 0x8005573C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80055740: jal         0x800656E4
    // 0x80055744: nop

    func_800656E4(rdram, ctx);
        goto after_2;
    // 0x80055744: nop

    after_2:
    // 0x80055748: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005574C: addiu       $v0, $v0, 0x358
    ctx->r2 = ADD32(ctx->r2, 0X358);
    // 0x80055750: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x80055754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055758: sh          $v1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r3;
    // 0x8005575C: sh          $v1, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r3;
    // 0x80055760: sh          $v1, 0xD0($v0)
    MEM_H(0XD0, ctx->r2) = ctx->r3;
    // 0x80055764: sh          $v1, 0x128($v0)
    MEM_H(0X128, ctx->r2) = ctx->r3;
    // 0x80055768: sh          $v1, 0x180($v0)
    MEM_H(0X180, ctx->r2) = ctx->r3;
    // 0x8005576C: jr          $ra
    // 0x80055770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80055770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80055774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055774: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055778: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8005577C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80055780: nop

    // 0x80055784: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
    // 0x80055788: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005578C: nop

    // 0x80055790: sw          $zero, 0x88($t7)
    MEM_W(0X88, ctx->r15) = 0;
    // 0x80055794: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80055798: nop

    // 0x8005579C: sw          $zero, 0x90($t8)
    MEM_W(0X90, ctx->r24) = 0;
    // 0x800557A0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800557A4: jr          $ra
    // 0x800557A8: sw          $zero, 0x74($t9)
    MEM_W(0X74, ctx->r25) = 0;
    return;
    // 0x800557A8: sw          $zero, 0x74($t9)
    MEM_W(0X74, ctx->r25) = 0;
;}
RECOMP_FUNC void func_800557AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800557AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800557B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800557B4: sh          $t6, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r14;
    // 0x800557B8: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    // 0x800557BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800557C0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x800557C4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x800557C8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x800557CC: lwc1        $f4, -0x6C9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6C9C);
    // 0x800557D0: lhu         $t7, 0xC0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XC0);
    // 0x800557D4: lhu         $t9, 0xC2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC2);
    // 0x800557D8: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x800557DC: andi        $t0, $t9, 0xFFFD
    ctx->r8 = ctx->r25 & 0XFFFD;
    // 0x800557E0: sh          $t8, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r24;
    // 0x800557E4: sh          $t0, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r8;
    // 0x800557E8: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    // 0x800557EC: sh          $zero, 0x68($a0)
    MEM_H(0X68, ctx->r4) = 0;
    // 0x800557F0: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x800557F4: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x800557F8: jr          $ra
    // 0x800557FC: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x800557FC: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80055800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055808: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8005580C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80055810: jal         0x80272AEC
    // 0x80055814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80055814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80055818: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005581C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055820: lwc1        $f4, 0x10($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X10);
    // 0x80055824: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055828: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8005582C: lwc1        $f19, -0x6C98($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6C98);
    // 0x80055830: lwc1        $f18, -0x6C94($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6C94);
    // 0x80055834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055838: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8005583C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80055840: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80055844: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80055848: jr          $ra
    // 0x8005584C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8005584C: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
;}
RECOMP_FUNC void func_80055850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055850: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80055854: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80055858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005585C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80055860: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80055864: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80055868: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x8005586C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80055870: beq         $t6, $zero, L_80055888
    if (ctx->r14 == 0) {
        // 0x80055874: lui         $t7, 0x8010
        ctx->r15 = S32(0X8010 << 16);
            goto L_80055888;
    }
    // 0x80055874: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80055878: lbu         $t7, 0x522C($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X522C);
    // 0x8005587C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80055880: bne         $t7, $at, L_80055AC4
    if (ctx->r15 != ctx->r1) {
        // 0x80055884: nop
    
            goto L_80055AC4;
    }
    // 0x80055884: nop

L_80055888:
    // 0x80055888: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8005588C: jal         0x80081040
    // 0x80055890: nop

    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80055890: nop

    after_0:
    // 0x80055894: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80055898: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8005589C: jal         0x80080E80
    // 0x800558A0: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x800558A0: nop

    after_1:
    // 0x800558A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800558A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800558AC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800558B0: lwc1        $f17, -0x6C90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6C90);
    // 0x800558B4: lwc1        $f16, -0x6C8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6C8C);
    // 0x800558B8: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x800558BC: c.lt.d      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.d < ctx->f2.d;
    // 0x800558C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800558C4: bc1f        L_80055934
    if (!c1cs) {
        // 0x800558C8: nop
    
            goto L_80055934;
    }
    // 0x800558C8: nop

    // 0x800558CC: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800558D0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x800558D4: jal         0x80279308
    // 0x800558D8: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_2;
    // 0x800558D8: nop

    after_2:
    // 0x800558DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800558E0: lwc1        $f17, -0x6C88($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6C88);
    // 0x800558E4: lwc1        $f16, -0x6C84($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6C84);
    // 0x800558E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800558EC: lwc1        $f9, -0x6C80($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6C80);
    // 0x800558F0: lwc1        $f8, -0x6C7C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6C7C);
    // 0x800558F4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x800558F8: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x800558FC: nop

    // 0x80055900: bc1f        L_800559B4
    if (!c1cs) {
        // 0x80055904: nop
    
            goto L_800559B4;
    }
    // 0x80055904: nop

    // 0x80055908: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8005590C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80055910: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80055914: sub.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d - ctx->f16.d;
    // 0x80055918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005591C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80055920: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80055924: jal         0x80055800
    // 0x80055928: nop

    func_80055800(rdram, ctx);
        goto after_3;
    // 0x80055928: nop

    after_3:
    // 0x8005592C: b           L_800559B4
    // 0x80055930: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
        goto L_800559B4;
    // 0x80055930: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_80055934:
    // 0x80055934: lwc1        $f17, -0x6C78($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6C78);
    // 0x80055938: lwc1        $f16, -0x6C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6C74);
    // 0x8005593C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055940: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x80055944: nop

    // 0x80055948: bc1f        L_800559B4
    if (!c1cs) {
        // 0x8005594C: nop
    
            goto L_800559B4;
    }
    // 0x8005594C: nop

    // 0x80055950: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80055954: lwc1        $f14, -0x6C70($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6C70);
    // 0x80055958: jal         0x80279308
    // 0x8005595C: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_4;
    // 0x8005595C: nop

    after_4:
    // 0x80055960: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055964: lwc1        $f17, -0x6C68($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6C68);
    // 0x80055968: lwc1        $f16, -0x6C64($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6C64);
    // 0x8005596C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055970: lwc1        $f11, -0x6C60($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6C60);
    // 0x80055974: lwc1        $f10, -0x6C5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6C5C);
    // 0x80055978: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8005597C: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80055980: nop

    // 0x80055984: bc1f        L_800559B4
    if (!c1cs) {
        // 0x80055988: nop
    
            goto L_800559B4;
    }
    // 0x80055988: nop

    // 0x8005598C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80055990: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80055994: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80055998: sub.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d - ctx->f4.d;
    // 0x8005599C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800559A0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800559A4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800559A8: jal         0x80055800
    // 0x800559AC: nop

    func_80055800(rdram, ctx);
        goto after_5;
    // 0x800559AC: nop

    after_5:
    // 0x800559B0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_800559B4:
    // 0x800559B4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800559B8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800559BC: lwc1        $f3, -0x6C58($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6C58);
    // 0x800559C0: lwc1        $f2, -0x6C54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6C54);
    // 0x800559C4: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x800559C8: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x800559CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800559D0: bc1f        L_80055A44
    if (!c1cs) {
        // 0x800559D4: nop
    
            goto L_80055A44;
    }
    // 0x800559D4: nop

    // 0x800559D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800559DC: lwc1        $f14, -0x6C50($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6C50);
    // 0x800559E0: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800559E4: jal         0x80279308
    // 0x800559E8: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_6;
    // 0x800559E8: nop

    after_6:
    // 0x800559EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800559F0: lwc1        $f3, -0x6C48($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6C48);
    // 0x800559F4: lwc1        $f2, -0x6C44($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6C44);
    // 0x800559F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800559FC: lwc1        $f5, -0x6C40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6C40);
    // 0x80055A00: lwc1        $f4, -0x6C3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6C3C);
    // 0x80055A04: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80055A08: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80055A0C: nop

    // 0x80055A10: bc1f        L_80055AC4
    if (!c1cs) {
        // 0x80055A14: nop
    
            goto L_80055AC4;
    }
    // 0x80055A14: nop

    // 0x80055A18: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80055A1C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80055A20: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80055A24: sub.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d - ctx->f2.d;
    // 0x80055A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80055A2C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80055A30: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80055A34: jal         0x80055800
    // 0x80055A38: nop

    func_80055800(rdram, ctx);
        goto after_7;
    // 0x80055A38: nop

    after_7:
    // 0x80055A3C: b           L_80055AC4
    // 0x80055A40: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
        goto L_80055AC4;
    // 0x80055A40: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_80055A44:
    // 0x80055A44: lwc1        $f3, -0x6C38($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6C38);
    // 0x80055A48: lwc1        $f2, -0x6C34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6C34);
    // 0x80055A4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055A50: c.lt.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d < ctx->f2.d;
    // 0x80055A54: nop

    // 0x80055A58: bc1f        L_80055AC4
    if (!c1cs) {
        // 0x80055A5C: nop
    
            goto L_80055AC4;
    }
    // 0x80055A5C: nop

    // 0x80055A60: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80055A64: lwc1        $f14, -0x6C30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6C30);
    // 0x80055A68: jal         0x80279308
    // 0x80055A6C: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_8;
    // 0x80055A6C: nop

    after_8:
    // 0x80055A70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055A74: lwc1        $f3, -0x6C28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6C28);
    // 0x80055A78: lwc1        $f2, -0x6C24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6C24);
    // 0x80055A7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055A80: lwc1        $f7, -0x6C20($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6C20);
    // 0x80055A84: lwc1        $f6, -0x6C1C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6C1C);
    // 0x80055A88: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80055A8C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80055A90: nop

    // 0x80055A94: bc1f        L_80055AC4
    if (!c1cs) {
        // 0x80055A98: nop
    
            goto L_80055AC4;
    }
    // 0x80055A98: nop

    // 0x80055A9C: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80055AA0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80055AA4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80055AA8: sub.d       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f2.d - ctx->f10.d;
    // 0x80055AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80055AB0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80055AB4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80055AB8: jal         0x80055800
    // 0x80055ABC: nop

    func_80055800(rdram, ctx);
        goto after_9;
    // 0x80055ABC: nop

    after_9:
    // 0x80055AC0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_80055AC4:
    // 0x80055AC4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80055AC8: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80055ACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80055AD0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80055AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80055AD8: bc1f        L_80055AE8
    if (!c1cs) {
        // 0x80055ADC: nop
    
            goto L_80055AE8;
    }
    // 0x80055ADC: nop

    // 0x80055AE0: b           L_80055AF0
    // 0x80055AE4: mov.s       $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = ctx->f8.fl;
        goto L_80055AF0;
    // 0x80055AE4: mov.s       $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = ctx->f8.fl;
L_80055AE8:
    // 0x80055AE8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80055AEC: nop

L_80055AF0:
    // 0x80055AF0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80055AF4: jr          $ra
    // 0x80055AF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80055AF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80055AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80055B08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80055B0C: jal         0x80053CA0
    // 0x80055B10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80055B10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80055B14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055B18: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055B1C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80055B20: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80055B24: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80055B28: sw          $t6, 0x88($t7)
    MEM_W(0X88, ctx->r15) = ctx->r14;
    // 0x80055B2C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80055B30: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80055B34: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
    // 0x80055B38: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80055B3C: lui         $a2, 0x3D56
    ctx->r6 = S32(0X3D56 << 16);
    // 0x80055B40: sh          $t0, 0xBE($t1)
    MEM_H(0XBE, ctx->r9) = ctx->r8;
    // 0x80055B44: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055B48: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80055B4C: jal         0x800530D4
    // 0x80055B50: ori         $a2, $a2, 0x7750
    ctx->r6 = ctx->r6 | 0X7750;
    func_800530D4(rdram, ctx);
        goto after_1;
    // 0x80055B50: ori         $a2, $a2, 0x7750
    ctx->r6 = ctx->r6 | 0X7750;
    after_1:
    // 0x80055B54: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055B58: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055B5C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80055B60: addiu       $t2, $zero, 0x7D0
    ctx->r10 = ADD32(0, 0X7D0);
    // 0x80055B64: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80055B68: sh          $t2, 0x66($t3)
    MEM_H(0X66, ctx->r11) = ctx->r10;
    // 0x80055B6C: lbu         $t4, -0x32A4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X32A4);
    // 0x80055B70: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80055B74: bne         $t4, $at, L_80055B94
    if (ctx->r12 != ctx->r1) {
        // 0x80055B78: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_80055B94;
    }
    // 0x80055B78: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80055B7C: jal         0x80059898
    // 0x80055B80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80055B80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x80055B84: addiu       $a0, $v0, 0xB
    ctx->r4 = ADD32(ctx->r2, 0XB);
    // 0x80055B88: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x80055B8C: b           L_80055BE8
    // 0x80055B90: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
        goto L_80055BE8;
    // 0x80055B90: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
L_80055B94:
    // 0x80055B94: lb          $t6, -0x309F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309F);
    // 0x80055B98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80055B9C: beq         $t6, $at, L_80055BCC
    if (ctx->r14 == ctx->r1) {
        // 0x80055BA0: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80055BCC;
    }
    // 0x80055BA0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80055BA4: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80055BA8: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x80055BAC: nop

    // 0x80055BB0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80055BB4: beq         $t8, $zero, L_80055BC4
    if (ctx->r24 == 0) {
        // 0x80055BB8: nop
    
            goto L_80055BC4;
    }
    // 0x80055BB8: nop

    // 0x80055BBC: b           L_80055BE8
    // 0x80055BC0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_80055BE8;
    // 0x80055BC0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_80055BC4:
    // 0x80055BC4: b           L_80055BE8
    // 0x80055BC8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
        goto L_80055BE8;
    // 0x80055BC8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
L_80055BCC:
    // 0x80055BCC: lh          $t9, -0x1B60($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1B60);
    // 0x80055BD0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80055BD4: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80055BD8: beq         $t0, $zero, L_80055BE8
    if (ctx->r8 == 0) {
        // 0x80055BDC: nop
    
            goto L_80055BE8;
    }
    // 0x80055BDC: nop

    // 0x80055BE0: b           L_80055BE8
    // 0x80055BE4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
        goto L_80055BE8;
    // 0x80055BE4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_80055BE8:
    // 0x80055BE8: jal         0x80271980
    // 0x80055BEC: nop

    LOOKUP_FUNC(0x80271980)(rdram, ctx);
        goto after_3;
    // 0x80055BEC: nop

    after_3:
    // 0x80055BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80055BF8: jr          $ra
    // 0x80055BFC: nop

    return;
    // 0x80055BFC: nop

;}
RECOMP_FUNC void func_80055C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055C00: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80055C04: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80055C08: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80055C0C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80055C10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80055C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055C18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80055C1C: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80055C20: nop

    // 0x80055C24: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80055C28: nop

    // 0x80055C2C: bc1t        L_80055C48
    if (c1cs) {
        // 0x80055C30: nop
    
            goto L_80055C48;
    }
    // 0x80055C30: nop

    // 0x80055C34: lw          $a1, 0x8C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8C);
    // 0x80055C38: jal         0x80279050
    // 0x80055C3C: nop

    LOOKUP_FUNC(0x80279050)(rdram, ctx);
        goto after_0;
    // 0x80055C3C: nop

    after_0:
    // 0x80055C40: b           L_80055DA8
    // 0x80055C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80055DA8;
    // 0x80055C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80055C48:
    // 0x80055C48: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80055C4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055C50: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80055C54: lwc1        $f17, -0x6C18($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6C18);
    // 0x80055C58: lwc1        $f16, -0x6C14($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6C14);
    // 0x80055C5C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80055C60: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80055C64: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80055C68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80055C6C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80055C70: mflo        $t7
    ctx->r15 = lo;
    // 0x80055C74: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80055C78: nop

    // 0x80055C7C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80055C80: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80055C84: bgez        $v1, L_80055C9C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80055C88: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_80055C9C;
    }
    // 0x80055C88: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80055C8C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80055C90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80055C94: nop

    // 0x80055C98: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_80055C9C:
    // 0x80055C9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055CA0: add.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d + ctx->f8.d;
    // 0x80055CA4: lwc1        $f11, -0x6C10($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6C10);
    // 0x80055CA8: lwc1        $f10, -0x6C0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6C0C);
    // 0x80055CAC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80055CB0: c.lt.d      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.d < ctx->f4.d;
    // 0x80055CB4: add.d       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f18.d + ctx->f16.d;
    // 0x80055CB8: bc1f        L_80055CD0
    if (!c1cs) {
        // 0x80055CBC: cvt.s.d     $f2, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
            goto L_80055CD0;
    }
    // 0x80055CBC: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x80055CC0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80055CC4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80055CC8: b           L_80055CF4
    // 0x80055CCC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
        goto L_80055CF4;
    // 0x80055CCC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80055CD0:
    // 0x80055CD0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80055CD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80055CD8: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80055CDC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80055CE0: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80055CE4: bc1f        L_80055CF4
    if (!c1cs) {
        // 0x80055CE8: nop
    
            goto L_80055CF4;
    }
    // 0x80055CE8: nop

    // 0x80055CEC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80055CF0: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80055CF4:
    // 0x80055CF4: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80055CF8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80055CFC: nop

    // 0x80055D00: swc1        $f8, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f8.u32l;
    // 0x80055D04: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80055D08: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x80055D0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80055D10: jal         0x80081040
    // 0x80055D14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80055D14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x80055D18: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055D1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80055D20: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80055D24: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80055D28: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80055D2C: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80055D30: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80055D34: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80055D38: swc1        $f6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f6.u32l;
    // 0x80055D3C: lwc1        $f12, 0x8C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80055D40: jal         0x80080E80
    // 0x80055D44: nop

    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x80055D44: nop

    after_2:
    // 0x80055D48: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055D4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80055D50: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80055D54: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80055D58: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80055D5C: addiu       $a2, $a2, 0x3B20
    ctx->r6 = ADD32(ctx->r6, 0X3B20);
    // 0x80055D60: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80055D64: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80055D68: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80055D6C: addiu       $t4, $zero, 0xC80
    ctx->r12 = ADD32(0, 0XC80);
    // 0x80055D70: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x80055D74: lhu         $t2, 0x0($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X0);
    // 0x80055D78: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80055D7C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80055D80: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80055D84: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80055D88: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80055D8C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80055D90: subu        $t5, $t4, $t3
    ctx->r13 = SUB32(ctx->r12, ctx->r11);
    // 0x80055D94: sh          $t5, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r13;
    // 0x80055D98: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80055D9C: nop

    // 0x80055DA0: sh          $zero, 0x68($t7)
    MEM_H(0X68, ctx->r15) = 0;
    // 0x80055DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80055DA8:
    // 0x80055DA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80055DAC: jr          $ra
    // 0x80055DB0: nop

    return;
    // 0x80055DB0: nop

;}
RECOMP_FUNC void func_80055DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055DBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80055DC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80055DC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80055DC8: jal         0x80053CA0
    // 0x80055DCC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80055DCC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80055DD0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055DD4: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055DD8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80055DDC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80055DE0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80055DE4: sw          $t6, 0xB0($t7)
    MEM_W(0XB0, ctx->r15) = ctx->r14;
    // 0x80055DE8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80055DEC: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
    // 0x80055DF0: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
    // 0x80055DF4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80055DF8: nop

    // 0x80055DFC: sb          $t0, 0xBC($t1)
    MEM_B(0XBC, ctx->r9) = ctx->r8;
    // 0x80055E00: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80055E04: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80055E08: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055E0C: jal         0x800530D4
    // 0x80055E10: nop

    func_800530D4(rdram, ctx);
        goto after_1;
    // 0x80055E10: nop

    after_1:
    // 0x80055E14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80055E18: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80055E1C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80055E20: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80055E24: sh          $t2, 0x66($t3)
    MEM_H(0X66, ctx->r11) = ctx->r10;
    // 0x80055E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055E2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80055E30: jr          $ra
    // 0x80055E34: nop

    return;
    // 0x80055E34: nop

;}
RECOMP_FUNC void func_80055E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055E38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80055E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80055E40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80055E44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80055E48: jal         0x80053CA0
    // 0x80055E4C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80055E4C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80055E50: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80055E54: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80055E58: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80055E5C: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x80055E60: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80055E64: lhu         $t1, 0x22($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X22);
    // 0x80055E68: lhu         $t9, 0x16($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X16);
    // 0x80055E6C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80055E70: andi        $t0, $t9, 0x10
    ctx->r8 = ctx->r25 & 0X10;
    // 0x80055E74: beq         $t0, $zero, L_80055E90
    if (ctx->r8 == 0) {
        // 0x80055E78: lui         $a2, 0x3DB2
        ctx->r6 = S32(0X3DB2 << 16);
            goto L_80055E90;
    }
    // 0x80055E78: lui         $a2, 0x3DB2
    ctx->r6 = S32(0X3DB2 << 16);
    // 0x80055E7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055E80: lwc1        $f1, -0x6C08($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6C08);
    // 0x80055E84: lwc1        $f0, -0x6C04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6C04);
    // 0x80055E88: b           L_80055EA0
    // 0x80055E8C: nop

        goto L_80055EA0;
    // 0x80055E8C: nop

L_80055E90:
    // 0x80055E90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055E94: lwc1        $f1, -0x6C00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6C00);
    // 0x80055E98: lwc1        $f0, -0x6BFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6BFC);
    // 0x80055E9C: nop

L_80055EA0:
    // 0x80055EA0: bgez        $t1, L_80055EBC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80055EA4: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80055EBC;
    }
    // 0x80055EA4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80055EA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80055EAC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80055EB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80055EB4: nop

    // 0x80055EB8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80055EBC:
    // 0x80055EBC: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80055EC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80055EC4: lwc1        $f17, -0x6BF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6BF8);
    // 0x80055EC8: lwc1        $f16, -0x6BF4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6BF4);
    // 0x80055ECC: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80055ED0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80055ED4: ori         $a2, $a2, 0xB8C2
    ctx->r6 = ctx->r6 | 0XB8C2;
    // 0x80055ED8: jal         0x800530D4
    // 0x80055EDC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_800530D4(rdram, ctx);
        goto after_1;
    // 0x80055EDC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_1:
    // 0x80055EE0: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x80055EE4: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x80055EE8: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x80055EEC: sh          $t2, 0x66($t3)
    MEM_H(0X66, ctx->r11) = ctx->r10;
    // 0x80055EF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80055EF4: jal         0x80056F14
    // 0x80055EF8: nop

    func_80056F14(rdram, ctx);
        goto after_2;
    // 0x80055EF8: nop

    after_2:
    // 0x80055EFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80055F00: jal         0x802634B8
    // 0x80055F04: nop

    LOOKUP_FUNC(0x802634B8)(rdram, ctx);
        goto after_3;
    // 0x80055F04: nop

    after_3:
    // 0x80055F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80055F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80055F10: jr          $ra
    // 0x80055F14: nop

    return;
    // 0x80055F14: nop

;}
RECOMP_FUNC void func_80055F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80055F18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80055F1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80055F20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80055F24: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80055F28: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80055F2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80055F30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80055F34: bne         $a1, $zero, L_80055F50
    if (ctx->r5 != 0) {
        // 0x80055F38: sw          $a2, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r6;
            goto L_80055F50;
    }
    // 0x80055F38: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80055F3C: lw          $a1, 0xBC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XBC);
    // 0x80055F40: jal         0x80055E38
    // 0x80055F44: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80055E38(rdram, ctx);
        goto after_0;
    // 0x80055F44: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x80055F48: b           L_80056154
    // 0x80055F4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80056154;
    // 0x80055F4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80055F50:
    // 0x80055F50: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80055F54: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x80055F58: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80055F5C: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80055F60: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80055F64: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80055F68: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80055F6C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80055F70: jal         0x8001C5D0
    // 0x80055F74: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x80055F74: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x80055F78: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80055F7C: jal         0x80053CA0
    // 0x80055F80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80053CA0(rdram, ctx);
        goto after_2;
    // 0x80055F80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80055F84: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80055F88: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80055F8C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80055F90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80055F94: sw          $s0, 0x90($t6)
    MEM_W(0X90, ctx->r14) = ctx->r16;
    // 0x80055F98: sw          $s0, 0x3680($at)
    MEM_W(0X3680, ctx->r1) = ctx->r16;
    // 0x80055F9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80055FA0: sw          $s0, 0x3684($at)
    MEM_W(0X3684, ctx->r1) = ctx->r16;
    // 0x80055FA4: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x80055FA8: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80055FAC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80055FB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80055FB4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80055FB8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80055FBC: nop

    // 0x80055FC0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80055FC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80055FC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80055FCC: nop

    // 0x80055FD0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80055FD4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80055FD8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80055FDC: sh          $t8, 0xDE($t9)
    MEM_H(0XDE, ctx->r25) = ctx->r24;
    // 0x80055FE0: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80055FE4: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80055FE8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80055FEC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80055FF0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80055FF4: nop

    // 0x80055FF8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80055FFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056000: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80056004: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056008: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8005600C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x80056010: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80056014: sh          $t1, 0xE0($t2)
    MEM_H(0XE0, ctx->r10) = ctx->r9;
    // 0x80056018: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8005601C: nop

    // 0x80056020: sh          $t3, 0xBE($t4)
    MEM_H(0XBE, ctx->r12) = ctx->r11;
    // 0x80056024: lwc1        $f0, 0x84($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80056028: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005602C: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80056030: nop

    // 0x80056034: bc1f        L_80056044
    if (!c1cs) {
        // 0x80056038: nop
    
            goto L_80056044;
    }
    // 0x80056038: nop

    // 0x8005603C: b           L_80056048
    // 0x80056040: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80056048;
    // 0x80056040: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_80056044:
    // 0x80056044: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80056048:
    // 0x80056048: lwc1        $f7, -0x6BF0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6BF0);
    // 0x8005604C: lwc1        $f6, -0x6BEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6BEC);
    // 0x80056050: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80056054: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80056058: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005605C: lwc1        $f11, -0x6BE8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6BE8);
    // 0x80056060: lwc1        $f10, -0x6BE4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6BE4);
    // 0x80056064: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80056068: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8005606C: jal         0x800530D4
    // 0x80056070: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    func_800530D4(rdram, ctx);
        goto after_3;
    // 0x80056070: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_3:
    // 0x80056074: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80056078: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x8005607C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80056080: jal         0x802634B8
    // 0x80056084: sh          $t5, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r13;
    LOOKUP_FUNC(0x802634B8)(rdram, ctx);
        goto after_4;
    // 0x80056084: sh          $t5, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r13;
    after_4:
    // 0x80056088: lhu         $t7, 0x36($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X36);
    // 0x8005608C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056090: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80056094: beq         $t8, $zero, L_800560E8
    if (ctx->r24 == 0) {
        // 0x80056098: nop
    
            goto L_800560E8;
    }
    // 0x80056098: nop

    // 0x8005609C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800560A0: nop

    // 0x800560A4: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x800560A8: nop

    // 0x800560AC: ori         $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 | 0X1000;
    // 0x800560B0: sh          $t0, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r8;
    // 0x800560B4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800560B8: nop

    // 0x800560BC: lhu         $t1, 0xC0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XC0);
    // 0x800560C0: nop

    // 0x800560C4: andi        $t2, $t1, 0xDFFF
    ctx->r10 = ctx->r9 & 0XDFFF;
    // 0x800560C8: sh          $t2, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r10;
    // 0x800560CC: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x800560D0: lw          $t3, 0xC4($s2)
    ctx->r11 = MEM_W(ctx->r18, 0XC4);
    // 0x800560D4: nop

    // 0x800560D8: sw          $t3, 0xA4($t4)
    MEM_W(0XA4, ctx->r12) = ctx->r11;
    // 0x800560DC: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x800560E0: nop

    // 0x800560E4: sw          $s0, 0xA8($t5)
    MEM_W(0XA8, ctx->r13) = ctx->r16;
L_800560E8:
    // 0x800560E8: lw          $t6, 0xC8($s2)
    ctx->r14 = MEM_W(ctx->r18, 0XC8);
    // 0x800560EC: lwc1        $f7, -0x6BE0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6BE0);
    // 0x800560F0: lwc1        $f18, 0x8C0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x800560F4: lwc1        $f6, -0x6BDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6BDC);
    // 0x800560F8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800560FC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80056100: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80056104: jal         0x80279308
    // 0x80056108: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_5;
    // 0x80056108: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_5:
    // 0x8005610C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056110: lwc1        $f17, -0x6BD8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6BD8);
    // 0x80056114: lwc1        $f16, -0x6BD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6BD4);
    // 0x80056118: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8005611C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80056120: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80056124: bc1f        L_80056140
    if (!c1cs) {
        // 0x80056128: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80056140;
    }
    // 0x80056128: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8005612C: addiu       $v0, $v0, 0x950
    ctx->r2 = ADD32(ctx->r2, 0X950);
    // 0x80056130: lhu         $t7, 0x6($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X6);
    // 0x80056134: nop

    // 0x80056138: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8005613C: sh          $t8, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r24;
L_80056140:
    // 0x80056140: lw          $a2, 0x88($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X88);
    // 0x80056144: lw          $a3, 0x84($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X84);
    // 0x80056148: jal         0x80065784
    // 0x8005614C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80065784(rdram, ctx);
        goto after_6;
    // 0x8005614C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80056150: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80056154:
    // 0x80056154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80056158: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005615C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80056160: jr          $ra
    // 0x80056164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80056164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80056168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056168: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005616C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80056170: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x80056174: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x80056178: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8005617C: lwc1        $f12, 0x7C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X7C);
    // 0x80056180: jal         0x80081040
    // 0x80056184: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80056184: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_0:
    // 0x80056188: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8005618C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80056190: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80056194: bgez        $t6, L_800561AC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80056198: cvt.s.w     $f16, $f4
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800561AC;
    }
    // 0x80056198: cvt.s.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005619C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800561A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800561A4: nop

    // 0x800561A8: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_800561AC:
    // 0x800561AC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800561B0: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800561B4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800561B8: nop

    // 0x800561BC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800561C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800561C4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x800561C8: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x800561CC: jal         0x80080E80
    // 0x800561D0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x800561D0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x800561D4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800561D8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800561DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800561E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800561E4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800561E8: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800561EC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800561F0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800561F4: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800561F8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800561FC: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80056200: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80056204: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80056208: jal         0x80272B1C
    // 0x8005620C: nop

    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_2;
    // 0x8005620C: nop

    after_2:
    // 0x80056210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80056214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80056218: jr          $ra
    // 0x8005621C: nop

    return;
    // 0x8005621C: nop

;}
RECOMP_FUNC void func_80056220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056220: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80056224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80056228: lhu         $t6, 0x36($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X36);
    // 0x8005622C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80056230: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80056234: beq         $t7, $zero, L_8005677C
    if (ctx->r15 == 0) {
        // 0x80056238: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_8005677C;
    }
    // 0x80056238: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8005623C: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x80056240: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80056244: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80056248: sw          $a1, 0xA0($t8)
    MEM_W(0XA0, ctx->r24) = ctx->r5;
    // 0x8005624C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80056250: jal         0x8026AB2C
    // 0x80056254: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x8026AB2C)(rdram, ctx);
        goto after_0;
    // 0x80056254: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x80056258: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8005625C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80056260: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80056264: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056268: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005626C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80056270: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80056274: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x80056278: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x8005627C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80056280: sh          $a0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r4;
    // 0x80056284: lw          $v0, 0xC8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC8);
    // 0x80056288: addiu       $t3, $zero, -0x50
    ctx->r11 = ADD32(0, -0X50);
    // 0x8005628C: lh          $v1, 0x8B0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8B0);
    // 0x80056290: nop

    // 0x80056294: slti        $at, $v1, 0x159
    ctx->r1 = SIGNED(ctx->r3) < 0X159 ? 1 : 0;
    // 0x80056298: bne         $at, $zero, L_80056344
    if (ctx->r1 != 0) {
        // 0x8005629C: slti        $at, $v1, 0x1C7
        ctx->r1 = SIGNED(ctx->r3) < 0X1C7 ? 1 : 0;
            goto L_80056344;
    }
    // 0x8005629C: slti        $at, $v1, 0x1C7
    ctx->r1 = SIGNED(ctx->r3) < 0X1C7 ? 1 : 0;
    // 0x800562A0: bne         $at, $zero, L_800562B8
    if (ctx->r1 != 0) {
        // 0x800562A4: sll         $v1, $a0, 16
        ctx->r3 = S32(ctx->r4 << 16);
            goto L_800562B8;
    }
    // 0x800562A4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x800562A8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x800562AC: addiu       $t2, $zero, 0x1C1
    ctx->r10 = ADD32(0, 0X1C1);
    // 0x800562B0: b           L_800562C4
    // 0x800562B4: sh          $t2, 0xDE($t3)
    MEM_H(0XDE, ctx->r11) = ctx->r10;
        goto L_800562C4;
    // 0x800562B4: sh          $t2, 0xDE($t3)
    MEM_H(0XDE, ctx->r11) = ctx->r10;
L_800562B8:
    // 0x800562B8: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x800562BC: addiu       $t4, $zero, 0x1CB
    ctx->r12 = ADD32(0, 0X1CB);
    // 0x800562C0: sh          $t4, 0xDE($t5)
    MEM_H(0XDE, ctx->r13) = ctx->r12;
L_800562C4:
    // 0x800562C4: sra         $t6, $v1, 16
    ctx->r14 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800562C8: slti        $at, $t6, 0x1C7
    ctx->r1 = SIGNED(ctx->r14) < 0X1C7 ? 1 : 0;
    // 0x800562CC: bne         $at, $zero, L_800562E0
    if (ctx->r1 != 0) {
        // 0x800562D0: nop
    
            goto L_800562E0;
    }
    // 0x800562D0: nop

    // 0x800562D4: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x800562D8: nop

    // 0x800562DC: sh          $t6, 0xDE($t7)
    MEM_H(0XDE, ctx->r15) = ctx->r14;
L_800562E0:
    // 0x800562E0: lw          $t8, 0xC8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XC8);
    // 0x800562E4: nop

    // 0x800562E8: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x800562EC: nop

    // 0x800562F0: andi        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 & 0X1;
    // 0x800562F4: bne         $t2, $zero, L_80056314
    if (ctx->r10 != 0) {
        // 0x800562F8: nop
    
            goto L_80056314;
    }
    // 0x800562F8: nop

    // 0x800562FC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80056300: nop

    // 0x80056304: lh          $t3, 0xDE($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XDE);
    // 0x80056308: nop

    // 0x8005630C: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x80056310: sh          $t4, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r12;
L_80056314:
    // 0x80056314: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80056318: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x8005631C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80056320: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056324: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80056328: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x8005632C: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80056330: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80056334: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80056338: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8005633C: b           L_8005677C
    // 0x80056340: sh          $t7, 0xE0($t8)
    MEM_H(0XE0, ctx->r24) = ctx->r15;
        goto L_8005677C;
    // 0x80056340: sh          $t7, 0xE0($t8)
    MEM_H(0XE0, ctx->r24) = ctx->r15;
L_80056344:
    // 0x80056344: lw          $t0, 0x24($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X24);
    // 0x80056348: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8005634C: lh          $t2, 0x8CC($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X8CC);
    // 0x80056350: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80056354: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x80056358: slt         $at, $t4, $t9
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8005635C: beq         $at, $zero, L_800565FC
    if (ctx->r1 == 0) {
        // 0x80056360: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_800565FC;
    }
    // 0x80056360: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80056364: slti        $at, $t9, 0x159
    ctx->r1 = SIGNED(ctx->r25) < 0X159 ? 1 : 0;
    // 0x80056368: bne         $at, $zero, L_80056488
    if (ctx->r1 != 0) {
        // 0x8005636C: addiu       $t6, $zero, 0x158
        ctx->r14 = ADD32(0, 0X158);
            goto L_80056488;
    }
    // 0x8005636C: addiu       $t6, $zero, 0x158
    ctx->r14 = ADD32(0, 0X158);
    // 0x80056370: lh          $t5, 0x8B8($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X8B8);
    // 0x80056374: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80056378: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8005637C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80056380: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80056384: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x80056388: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8005638C: jal         0x80272B98
    // 0x80056390: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_1;
    // 0x80056390: nop

    after_1:
    // 0x80056394: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80056398: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8005639C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800563A0: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800563A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800563A8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800563AC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x800563B0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800563B4: bc1f        L_800563C8
    if (!c1cs) {
        // 0x800563B8: nop
    
            goto L_800563C8;
    }
    // 0x800563B8: nop

    // 0x800563BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800563C0: nop

    // 0x800563C4: sub.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f18.fl;
L_800563C8:
    // 0x800563C8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x800563CC: nop

    // 0x800563D0: bc1f        L_800563DC
    if (!c1cs) {
        // 0x800563D4: nop
    
            goto L_800563DC;
    }
    // 0x800563D4: nop

    // 0x800563D8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_800563DC:
    // 0x800563DC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800563E0: jal         0x80081040
    // 0x800563E4: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x800563E4: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x800563E8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800563EC: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x800563F0: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800563F4: lwc1        $f6, 0x4C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x800563F8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800563FC: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x80056400: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80056404: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x80056408: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8005640C: nop

    // 0x80056410: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80056414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005641C: nop

    // 0x80056420: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80056424: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80056428: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8005642C: sh          $t8, 0xDE($t9)
    MEM_H(0XDE, ctx->r25) = ctx->r24;
    // 0x80056430: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80056434: jal         0x80080E80
    // 0x80056438: nop

    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x80056438: nop

    after_3:
    // 0x8005643C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80056440: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80056444: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80056448: lwc1        $f18, 0x44($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X44);
    // 0x8005644C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80056450: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x80056454: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80056458: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x8005645C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80056460: nop

    // 0x80056464: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80056468: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005646C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80056470: nop

    // 0x80056474: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80056478: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8005647C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80056480: b           L_8005677C
    // 0x80056484: sh          $t4, 0xE0($t5)
    MEM_H(0XE0, ctx->r13) = ctx->r12;
        goto L_8005677C;
    // 0x80056484: sh          $t4, 0xE0($t5)
    MEM_H(0XE0, ctx->r13) = ctx->r12;
L_80056488:
    // 0x80056488: subu        $a1, $t6, $v1
    ctx->r5 = SUB32(ctx->r14, ctx->r3);
    // 0x8005648C: slti        $at, $a1, 0x79
    ctx->r1 = SIGNED(ctx->r5) < 0X79 ? 1 : 0;
    // 0x80056490: bne         $at, $zero, L_800564A0
    if (ctx->r1 != 0) {
        // 0x80056494: lw          $t8, 0x54($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X54);
            goto L_800564A0;
    }
    // 0x80056494: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80056498: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8005649C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
L_800564A0:
    // 0x800564A0: lwc1        $f10, 0x44($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X44);
    // 0x800564A4: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x800564A8: bgez        $a1, L_800564B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800564AC: sra         $t7, $a1, 1
        ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
            goto L_800564B8;
    }
    // 0x800564AC: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800564B0: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x800564B4: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_800564B8:
    // 0x800564B8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800564BC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x800564C0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800564C4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x800564C8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800564CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800564D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800564D4: nop

    // 0x800564D8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800564DC: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x800564E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800564E4: jal         0x80272AD4
    // 0x800564E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_4;
    // 0x800564E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_4:
    // 0x800564EC: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x800564F0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x800564F4: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x800564F8: slti        $at, $a0, 0x51
    ctx->r1 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x800564FC: bne         $at, $zero, L_80056508
    if (ctx->r1 != 0) {
        // 0x80056500: nop
    
            goto L_80056508;
    }
    // 0x80056500: nop

    // 0x80056504: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
L_80056508:
    // 0x80056508: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005650C: jal         0x80059898
    // 0x80056510: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    func_80059898(rdram, ctx);
        goto after_5;
    // 0x80056510: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_5:
    // 0x80056514: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80056518: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8005651C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80056520: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80056524: blez        $t3, L_80056534
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80056528: addiu       $t1, $t1, 0x3B20
        ctx->r9 = ADD32(ctx->r9, 0X3B20);
            goto L_80056534;
    }
    // 0x80056528: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x8005652C: b           L_80056538
    // 0x80056530: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_80056538;
    // 0x80056530: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_80056534:
    // 0x80056534: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80056538:
    // 0x80056538: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8005653C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80056540: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80056544: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056548: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005654C: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80056550: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x80056554: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80056558: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8005655C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80056560: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80056564: sh          $t6, 0xE0($t7)
    MEM_H(0XE0, ctx->r15) = ctx->r14;
    // 0x80056568: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8005656C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80056570: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80056574: addiu       $t3, $t9, 0x28
    ctx->r11 = ADD32(ctx->r25, 0X28);
    // 0x80056578: sh          $t3, 0xDE($t2)
    MEM_H(0XDE, ctx->r10) = ctx->r11;
    // 0x8005657C: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x80056580: nop

    // 0x80056584: lh          $a0, 0xE0($t4)
    ctx->r4 = MEM_H(ctx->r12, 0XE0);
    // 0x80056588: jal         0x80272AD4
    // 0x8005658C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x80272AD4)(rdram, ctx);
        goto after_6;
    // 0x8005658C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_6:
    // 0x80056590: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80056594: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80056598: sltiu       $at, $v0, 0x96
    ctx->r1 = ctx->r2 < 0X96 ? 1 : 0;
    // 0x8005659C: beq         $at, $zero, L_800565C4
    if (ctx->r1 == 0) {
        // 0x800565A0: addiu       $t1, $t1, 0x3B20
        ctx->r9 = ADD32(ctx->r9, 0X3B20);
            goto L_800565C4;
    }
    // 0x800565A0: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x800565A4: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x800565A8: addiu       $t6, $zero, 0x199
    ctx->r14 = ADD32(0, 0X199);
    // 0x800565AC: lh          $t5, 0xDE($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XDE);
    // 0x800565B0: nop

    // 0x800565B4: slti        $at, $t5, 0x19A
    ctx->r1 = SIGNED(ctx->r13) < 0X19A ? 1 : 0;
    // 0x800565B8: bne         $at, $zero, L_800565C4
    if (ctx->r1 != 0) {
        // 0x800565BC: nop
    
            goto L_800565C4;
    }
    // 0x800565BC: nop

    // 0x800565C0: sh          $t6, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r14;
L_800565C4:
    // 0x800565C4: lw          $t7, 0xC8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0XC8);
    // 0x800565C8: nop

    // 0x800565CC: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x800565D0: nop

    // 0x800565D4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800565D8: bne         $t9, $zero, L_80056780
    if (ctx->r25 != 0) {
        // 0x800565DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80056780;
    }
    // 0x800565DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800565E0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x800565E4: nop

    // 0x800565E8: lh          $t3, 0xDE($v0)
    ctx->r11 = MEM_H(ctx->r2, 0XDE);
    // 0x800565EC: nop

    // 0x800565F0: negu        $t2, $t3
    ctx->r10 = SUB32(0, ctx->r11);
    // 0x800565F4: b           L_8005677C
    // 0x800565F8: sh          $t2, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r10;
        goto L_8005677C;
    // 0x800565F8: sh          $t2, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r10;
L_800565FC:
    // 0x800565FC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80056600: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80056604: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x80056608: addiu       $t4, $v1, 0x50
    ctx->r12 = ADD32(ctx->r3, 0X50);
    // 0x8005660C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80056610: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056614: sh          $t4, 0xDE($t5)
    MEM_H(0XDE, ctx->r13) = ctx->r12;
    // 0x80056618: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005661C: lwc1        $f8, 0x44($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80056620: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x80056624: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80056628: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8005662C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80056630: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80056634: sh          $t7, 0xE0($t8)
    MEM_H(0XE0, ctx->r24) = ctx->r15;
    // 0x80056638: lwc1        $f0, 0x44($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X44);
    // 0x8005663C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80056640: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80056644: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80056648: nop

    // 0x8005664C: bc1t        L_80056668
    if (c1cs) {
        // 0x80056650: nop
    
            goto L_80056668;
    }
    // 0x80056650: nop

    // 0x80056654: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80056658: nop

    // 0x8005665C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80056660: nop

    // 0x80056664: bc1f        L_80056748
    if (!c1cs) {
        // 0x80056668: lui         $at, 0x438C
        ctx->r1 = S32(0X438C << 16);
            goto L_80056748;
    }
L_80056668:
    // 0x80056668: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x8005666C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80056670: lwc1        $f0, 0x44($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80056674: lui         $at, 0xC38C
    ctx->r1 = S32(0XC38C << 16);
    // 0x80056678: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8005667C: nop

    // 0x80056680: bc1f        L_80056748
    if (!c1cs) {
        // 0x80056684: nop
    
            goto L_80056748;
    }
    // 0x80056684: nop

    // 0x80056688: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005668C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80056690: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80056694: nop

    // 0x80056698: bc1f        L_80056748
    if (!c1cs) {
        // 0x8005669C: nop
    
            goto L_80056748;
    }
    // 0x8005669C: nop

    // 0x800566A0: jal         0x80271890
    // 0x800566A4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x80271890)(rdram, ctx);
        goto after_7;
    // 0x800566A4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_7:
    // 0x800566A8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x800566AC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800566B0: slti        $at, $v0, 0x3D
    ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x800566B4: bne         $at, $zero, L_80056748
    if (ctx->r1 != 0) {
        // 0x800566B8: addiu       $t1, $t1, 0x3B20
        ctx->r9 = ADD32(ctx->r9, 0X3B20);
            goto L_80056748;
    }
    // 0x800566B8: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x800566BC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800566C0: lwc1        $f10, 0x44($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X44);
    // 0x800566C4: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800566C8: nop

    // 0x800566CC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800566D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x800566D4: nop

    // 0x800566D8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x800566DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800566E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800566E4: nop

    // 0x800566E8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800566EC: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x800566F0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x800566F4: bgez        $v0, L_80056718
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800566F8: nop
    
            goto L_80056718;
    }
    // 0x800566F8: nop

    // 0x800566FC: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80056700: nop

    // 0x80056704: lh          $t2, 0xE0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XE0);
    // 0x80056708: nop

    // 0x8005670C: addiu       $t4, $t2, 0x32
    ctx->r12 = ADD32(ctx->r10, 0X32);
    // 0x80056710: b           L_80056730
    // 0x80056714: sh          $t4, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = ctx->r12;
        goto L_80056730;
    // 0x80056714: sh          $t4, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = ctx->r12;
L_80056718:
    // 0x80056718: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8005671C: nop

    // 0x80056720: lh          $t5, 0xE0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XE0);
    // 0x80056724: nop

    // 0x80056728: addiu       $t6, $t5, -0x32
    ctx->r14 = ADD32(ctx->r13, -0X32);
    // 0x8005672C: sh          $t6, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = ctx->r14;
L_80056730:
    // 0x80056730: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80056734: nop

    // 0x80056738: lh          $t7, 0xDE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XDE);
    // 0x8005673C: nop

    // 0x80056740: addiu       $t8, $t7, -0x28
    ctx->r24 = ADD32(ctx->r15, -0X28);
    // 0x80056744: sh          $t8, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r24;
L_80056748:
    // 0x80056748: lw          $t9, 0xC8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC8);
    // 0x8005674C: nop

    // 0x80056750: lhu         $t3, 0x8($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X8);
    // 0x80056754: nop

    // 0x80056758: andi        $t2, $t3, 0x1
    ctx->r10 = ctx->r11 & 0X1;
    // 0x8005675C: bne         $t2, $zero, L_80056780
    if (ctx->r10 != 0) {
        // 0x80056760: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80056780;
    }
    // 0x80056760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80056764: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80056768: nop

    // 0x8005676C: lh          $t4, 0xDE($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XDE);
    // 0x80056770: nop

    // 0x80056774: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x80056778: sh          $t5, 0xDE($v0)
    MEM_H(0XDE, ctx->r2) = ctx->r13;
L_8005677C:
    // 0x8005677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80056780:
    // 0x80056780: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80056784: jr          $ra
    // 0x80056788: nop

    return;
    // 0x80056788: nop

;}
RECOMP_FUNC void func_80056820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80056824: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80056828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005682C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80056830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80056834: jal         0x80081040
    // 0x80056838: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80056838: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8005683C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80056840: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80056844: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80056848: lwc1        $f8, 0x4C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4C);
    // 0x8005684C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80056850: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80056854: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80056858: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8005685C: nop

    // 0x80056860: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80056864: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80056868: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005686C: nop

    // 0x80056870: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80056874: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80056878: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8005687C: sh          $t8, 0xDE($t9)
    MEM_H(0XDE, ctx->r25) = ctx->r24;
    // 0x80056880: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80056884: jal         0x80080E80
    // 0x80056888: nop

    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80056888: nop

    after_1:
    // 0x8005688C: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80056890: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80056894: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80056898: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x8005689C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x800568A0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x800568A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800568A8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800568AC: nop

    // 0x800568B0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800568B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800568B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800568BC: nop

    // 0x800568C0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800568C4: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x800568C8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800568CC: sh          $t2, 0xE0($t3)
    MEM_H(0XE0, ctx->r11) = ctx->r10;
    // 0x800568D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800568D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800568D8: jr          $ra
    // 0x800568DC: nop

    return;
    // 0x800568DC: nop

;}
RECOMP_FUNC void func_800568E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800568E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800568E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800568E8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800568EC: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x800568F0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800568F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800568F8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800568FC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80056900: lw          $t7, 0xA4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XA4);
    // 0x80056904: nop

    // 0x80056908: lw          $s1, 0x40($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X40);
    // 0x8005690C: jal         0x80053CA0
    // 0x80056910: nop

    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80056910: nop

    after_0:
    // 0x80056914: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80056918: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005691C: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x80056920: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80056924: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x80056928: beq         $t9, $zero, L_80056BEC
    if (ctx->r25 == 0) {
        // 0x8005692C: addiu       $t1, $sp, 0x44
        ctx->r9 = ADD32(ctx->r29, 0X44);
            goto L_80056BEC;
    }
    // 0x8005692C: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x80056930: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056934: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80056938: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8005693C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80056940: lwc1        $f4, -0x54A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X54A4);
    // 0x80056944: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80056948: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005694C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80056950: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056954: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80056958: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x8005695C: beq         $a3, $zero, L_800569AC
    if (ctx->r7 == 0) {
        // 0x80056960: addiu       $t1, $sp, 0x44
        ctx->r9 = ADD32(ctx->r29, 0X44);
            goto L_800569AC;
    }
    // 0x80056960: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x80056964: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80056968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005696C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80056970: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80056974: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80056978: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x8005697C: nop

    // 0x80056980: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80056984: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056988: nop

    // 0x8005698C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80056990: bne         $a3, $zero, L_800569A4
    if (ctx->r7 != 0) {
        // 0x80056994: nop
    
            goto L_800569A4;
    }
    // 0x80056994: nop

    // 0x80056998: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8005699C: b           L_800569BC
    // 0x800569A0: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_800569BC;
    // 0x800569A0: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_800569A4:
    // 0x800569A4: b           L_800569BC
    // 0x800569A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_800569BC;
    // 0x800569A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_800569AC:
    // 0x800569AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800569B0: nop

    // 0x800569B4: bltz        $a3, L_800569A4
    if (SIGNED(ctx->r7) < 0) {
        // 0x800569B8: nop
    
            goto L_800569A4;
    }
    // 0x800569B8: nop

L_800569BC:
    // 0x800569BC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800569C0: lwc1        $f8, 0x5C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x800569C4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800569C8: jal         0x80056168
    // 0x800569CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80056168(rdram, ctx);
        goto after_1;
    // 0x800569CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800569D0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800569D4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800569D8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x800569DC: jal         0x80056820
    // 0x800569E0: nop

    func_80056820(rdram, ctx);
        goto after_2;
    // 0x800569E0: nop

    after_2:
    // 0x800569E4: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x800569E8: nop

    // 0x800569EC: lh          $t3, 0xDE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XDE);
    // 0x800569F0: nop

    // 0x800569F4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x800569F8: jal         0x80272AEC
    // 0x800569FC: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x800569FC: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x80056A00: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056A04: lwc1        $f18, -0x6BD0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6BD0);
    // 0x80056A08: nop

    // 0x80056A0C: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80056A10: nop

    // 0x80056A14: bc1f        L_80056B5C
    if (!c1cs) {
        // 0x80056A18: nop
    
            goto L_80056B5C;
    }
    // 0x80056A18: nop

    // 0x80056A1C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80056A20: nop

    // 0x80056A24: lh          $t5, 0xE0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE0);
    // 0x80056A28: nop

    // 0x80056A2C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80056A30: jal         0x80272AEC
    // 0x80056A34: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x80056A34: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80056A38: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80056A3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80056A40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056A44: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80056A48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80056A4C: bc1f        L_80056B5C
    if (!c1cs) {
        // 0x80056A50: addiu       $t7, $sp, 0x44
        ctx->r15 = ADD32(ctx->r29, 0X44);
            goto L_80056B5C;
    }
    // 0x80056A50: addiu       $t7, $sp, 0x44
    ctx->r15 = ADD32(ctx->r29, 0X44);
    // 0x80056A54: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80056A58: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80056A5C: lwc1        $f8, -0x549C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X549C);
    // 0x80056A60: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80056A64: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80056A68: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80056A6C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056A70: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80056A74: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80056A78: beq         $a3, $zero, L_80056AC8
    if (ctx->r7 == 0) {
        // 0x80056A7C: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_80056AC8;
    }
    // 0x80056A7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80056A80: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80056A84: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80056A88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80056A8C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80056A90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80056A94: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80056A98: nop

    // 0x80056A9C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80056AA0: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056AA4: nop

    // 0x80056AA8: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80056AAC: bne         $a3, $zero, L_80056AC0
    if (ctx->r7 != 0) {
        // 0x80056AB0: nop
    
            goto L_80056AC0;
    }
    // 0x80056AB0: nop

    // 0x80056AB4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80056AB8: b           L_80056AD8
    // 0x80056ABC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80056AD8;
    // 0x80056ABC: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80056AC0:
    // 0x80056AC0: b           L_80056AD8
    // 0x80056AC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80056AD8;
    // 0x80056AC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_80056AC8:
    // 0x80056AC8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80056ACC: nop

    // 0x80056AD0: bltz        $a3, L_80056AC0
    if (SIGNED(ctx->r7) < 0) {
        // 0x80056AD4: nop
    
            goto L_80056AC0;
    }
    // 0x80056AD4: nop

L_80056AD8:
    // 0x80056AD8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056ADC: lwc1        $f18, -0x6BCC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6BCC);
    // 0x80056AE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80056AE4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80056AE8: jal         0x80056168
    // 0x80056AEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80056168(rdram, ctx);
        goto after_5;
    // 0x80056AEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80056AF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056AF4: lwc1        $f6, -0x5498($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5498);
    // 0x80056AF8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80056AFC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80056B00: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80056B04: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80056B08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056B0C: lwc1        $f4, -0x549C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X549C);
    // 0x80056B10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80056B14: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80056B18: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80056B1C: nop

    // 0x80056B20: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    // 0x80056B24: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x80056B28: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80056B2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80056B30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056B34: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80056B38: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x80056B3C: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80056B40: c.lt.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d < ctx->f0.d;
    // 0x80056B44: nop

    // 0x80056B48: bc1f        L_80056BC8
    if (!c1cs) {
        // 0x80056B4C: nop
    
            goto L_80056BC8;
    }
    // 0x80056B4C: nop

    // 0x80056B50: lwc1        $f12, -0x6BC8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6BC8);
    // 0x80056B54: b           L_80056BC8
    // 0x80056B58: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
        goto L_80056BC8;
    // 0x80056B58: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_80056B5C:
    // 0x80056B5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056B60: lwc1        $f10, -0x54A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X54A0);
    // 0x80056B64: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80056B68: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80056B6C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80056B70: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80056B74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056B78: lwc1        $f6, -0x54A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X54A4);
    // 0x80056B7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80056B80: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80056B84: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80056B88: nop

    // 0x80056B8C: div.d       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f10.d);
    // 0x80056B90: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056B94: lwc1        $f19, -0x6BC0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6BC0);
    // 0x80056B98: lwc1        $f18, -0x6BBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6BBC);
    // 0x80056B9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056BA0: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80056BA4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x80056BA8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80056BAC: c.lt.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d < ctx->f0.d;
    // 0x80056BB0: nop

    // 0x80056BB4: bc1f        L_80056BC8
    if (!c1cs) {
        // 0x80056BB8: nop
    
            goto L_80056BC8;
    }
    // 0x80056BB8: nop

    // 0x80056BBC: lwc1        $f12, -0x6BB8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6BB8);
    // 0x80056BC0: nop

    // 0x80056BC4: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_80056BC8:
    // 0x80056BC8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056BCC: lwc1        $f11, -0x6BB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6BB0);
    // 0x80056BD0: lwc1        $f10, -0x6BAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6BAC);
    // 0x80056BD4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80056BD8: mul.d       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x80056BDC: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x80056BE0: sh          $t8, 0x66($t9)
    MEM_H(0X66, ctx->r25) = ctx->r24;
    // 0x80056BE4: b           L_80056D64
    // 0x80056BE8: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
        goto L_80056D64;
    // 0x80056BE8: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_80056BEC:
    // 0x80056BEC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80056BF0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80056BF4: lwc1        $f8, -0x5494($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5494);
    // 0x80056BF8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80056BFC: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80056C00: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80056C04: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056C08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80056C0C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80056C10: beq         $a3, $zero, L_80056C5C
    if (ctx->r7 == 0) {
        // 0x80056C14: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_80056C5C;
    }
    // 0x80056C14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80056C18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80056C1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80056C20: sub.s       $f6, $f8, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80056C24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80056C28: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80056C2C: nop

    // 0x80056C30: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80056C34: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80056C38: nop

    // 0x80056C3C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80056C40: bne         $a3, $zero, L_80056C54
    if (ctx->r7 != 0) {
        // 0x80056C44: nop
    
            goto L_80056C54;
    }
    // 0x80056C44: nop

    // 0x80056C48: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80056C4C: b           L_80056C6C
    // 0x80056C50: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80056C6C;
    // 0x80056C50: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80056C54:
    // 0x80056C54: b           L_80056C6C
    // 0x80056C58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80056C6C;
    // 0x80056C58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_80056C5C:
    // 0x80056C5C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80056C60: nop

    // 0x80056C64: bltz        $a3, L_80056C54
    if (SIGNED(ctx->r7) < 0) {
        // 0x80056C68: nop
    
            goto L_80056C54;
    }
    // 0x80056C68: nop

L_80056C6C:
    // 0x80056C6C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80056C70: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x80056C74: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80056C78: jal         0x80056168
    // 0x80056C7C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80056168(rdram, ctx);
        goto after_6;
    // 0x80056C7C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80056C80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056C84: lwc1        $f16, -0x5490($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5490);
    // 0x80056C88: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056C8C: lwc1        $f5, -0x6BA8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6BA8);
    // 0x80056C90: lwc1        $f4, -0x6BA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6BA4);
    // 0x80056C94: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80056C98: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80056C9C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80056CA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80056CA4: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x80056CA8: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
    // 0x80056CAC: nop

    // 0x80056CB0: div.d       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x80056CB4: mul.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80056CB8: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80056CBC: add.d       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f2.d + ctx->f8.d;
    // 0x80056CC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80056CC4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80056CC8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80056CCC: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80056CD0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x80056CD4: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x80056CD8: c.lt.d      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.d < ctx->f18.d;
    // 0x80056CDC: nop

    // 0x80056CE0: bc1f        L_80056CF0
    if (!c1cs) {
        // 0x80056CE4: nop
    
            goto L_80056CF0;
    }
    // 0x80056CE4: nop

    // 0x80056CE8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80056CEC: nop

L_80056CF0:
    // 0x80056CF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056CF4: lwc1        $f7, -0x6BA0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6BA0);
    // 0x80056CF8: lwc1        $f6, -0x6B9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B9C);
    // 0x80056CFC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80056D00: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80056D04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80056D08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80056D0C: mul.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f2.d, ctx->f6.d);
    // 0x80056D10: nop

    // 0x80056D14: div.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80056D18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80056D1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80056D20: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80056D24: add.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f10.d + ctx->f4.d;
    // 0x80056D28: lwc1        $f4, -0x6B94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B94);
    // 0x80056D2C: lwc1        $f5, -0x6B98($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6B98);
    // 0x80056D30: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80056D34: addiu       $t2, $zero, -0x1F4
    ctx->r10 = ADD32(0, -0X1F4);
    // 0x80056D38: sh          $t2, 0x66($t3)
    MEM_H(0X66, ctx->r11) = ctx->r10;
    // 0x80056D3C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80056D40: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80056D44: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80056D48: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80056D4C: lhu         $t4, 0xC2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XC2);
    // 0x80056D50: nop

    // 0x80056D54: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x80056D58: mul.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80056D5C: sh          $t5, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r13;
    // 0x80056D60: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
L_80056D64:
    // 0x80056D64: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80056D68: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80056D6C: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x80056D70: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80056D74: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80056D78: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
    // 0x80056D7C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80056D80: jal         0x80052FF0
    // 0x80056D84: nop

    func_80052FF0(rdram, ctx);
        goto after_7;
    // 0x80056D84: nop

    after_7:
    // 0x80056D88: jal         0x800540CC
    // 0x80056D8C: nop

    func_800540CC(rdram, ctx);
        goto after_8;
    // 0x80056D8C: nop

    after_8:
    // 0x80056D90: jal         0x80075E5C
    // 0x80056D94: nop

    func_80075E5C(rdram, ctx);
        goto after_9;
    // 0x80056D94: nop

    after_9:
    // 0x80056D98: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80056D9C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80056DA0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80056DA4: jal         0x80056820
    // 0x80056DA8: nop

    func_80056820(rdram, ctx);
        goto after_10;
    // 0x80056DA8: nop

    after_10:
    // 0x80056DAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80056DB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80056DB4: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x80056DB8: sw          $s1, 0x3614($at)
    MEM_W(0X3614, ctx->r1) = ctx->r17;
    // 0x80056DBC: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x80056DC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80056DC4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80056DC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80056DCC: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x80056DD0: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x80056DD4: jr          $ra
    // 0x80056DD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80056DD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80056DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056DDC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80056DE0: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x80056DE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80056DE8: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80056DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80056DF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80056DF4: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x80056DF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80056DFC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80056E00: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80056E04: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80056E08: jal         0x80271A18
    // 0x80056E0C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    LOOKUP_FUNC(0x80271A18)(rdram, ctx);
        goto after_0;
    // 0x80056E0C: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x80056E10: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x80056E14: nop

    // 0x80056E18: lbu         $t9, 0x7($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X7);
    // 0x80056E1C: nop

    // 0x80056E20: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x80056E24: bgtz        $a0, L_80056E30
    if (SIGNED(ctx->r4) > 0) {
        // 0x80056E28: nop
    
            goto L_80056E30;
    }
    // 0x80056E28: nop

    // 0x80056E2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80056E30:
    // 0x80056E30: jal         0x80059898
    // 0x80056E34: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80056E34: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_1:
    // 0x80056E38: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80056E3C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x80056E40: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
    // 0x80056E44: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80056E48: lw          $t1, 0x24($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X24);
    // 0x80056E4C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80056E50: lbu         $t2, 0x8AC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X8AC);
    // 0x80056E54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80056E58: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80056E5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80056E60: lhu         $t4, -0x5400($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X5400);
    // 0x80056E64: addiu       $a1, $a0, -0x50
    ctx->r5 = ADD32(ctx->r4, -0X50);
    // 0x80056E68: mflo        $t5
    ctx->r13 = lo;
    // 0x80056E6C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80056E70: bgtz        $a1, L_80056E7C
    if (SIGNED(ctx->r5) > 0) {
        // 0x80056E74: sh          $t6, 0x362C($at)
        MEM_H(0X362C, ctx->r1) = ctx->r14;
            goto L_80056E7C;
    }
    // 0x80056E74: sh          $t6, 0x362C($at)
    MEM_H(0X362C, ctx->r1) = ctx->r14;
    // 0x80056E78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80056E7C:
    // 0x80056E7C: jal         0x80059898
    // 0x80056E80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80056E80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x80056E84: sltiu       $at, $v0, 0xB
    ctx->r1 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80056E88: bne         $at, $zero, L_80056EA8
    if (ctx->r1 != 0) {
        // 0x80056E8C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80056EA8;
    }
    // 0x80056E8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80056E90: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80056E94: nop

    // 0x80056E98: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80056E9C: nop

    // 0x80056EA0: ori         $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 | 0X2000;
    // 0x80056EA4: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
L_80056EA8:
    // 0x80056EA8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80056EAC: jal         0x80081040
    // 0x80056EB0: nop

    func_80081040(rdram, ctx);
        goto after_3;
    // 0x80056EB0: nop

    after_3:
    // 0x80056EB4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80056EB8: lwc1        $f8, 0x4C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80056EBC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80056EC0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80056EC4: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x80056EC8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80056ECC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80056ED0: jal         0x80080E80
    // 0x80056ED4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80056ED4: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_4:
    // 0x80056ED8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80056EDC: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80056EE0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80056EE4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80056EE8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80056EEC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80056EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80056EF4: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x80056EF8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80056EFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80056F00: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80056F04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80056F08: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x80056F0C: jr          $ra
    // 0x80056F10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x80056F10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80056F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056F14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80056F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80056F1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80056F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80056F24: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x80056F28: nop

    // 0x80056F2C: lbu         $a1, 0x12($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X12);
    // 0x80056F30: jal         0x802752E8
    // 0x80056F34: nop

    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_0;
    // 0x80056F34: nop

    after_0:
    // 0x80056F38: jal         0x80059898
    // 0x80056F3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80059898(rdram, ctx);
        goto after_1;
    // 0x80056F3C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80056F40: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x80056F44: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80056F48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80056F4C: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80056F50: divu        $zero, $t7, $at
    lo = S32(U32(ctx->r15) / U32(ctx->r1)); hi = S32(U32(ctx->r15) % U32(ctx->r1));
    // 0x80056F54: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x80056F58: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80056F5C: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80056F60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80056F64: lbu         $t1, 0x8AC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8AC);
    // 0x80056F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80056F6C: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80056F70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80056F74: lhu         $t3, -0x53F4($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X53F4);
    // 0x80056F78: mflo        $t8
    ctx->r24 = lo;
    // 0x80056F7C: addu        $t4, $t8, $t3
    ctx->r12 = ADD32(ctx->r24, ctx->r11);
    // 0x80056F80: jal         0x80271A18
    // 0x80056F84: sh          $t4, 0x362A($at)
    MEM_H(0X362A, ctx->r1) = ctx->r12;
    LOOKUP_FUNC(0x80271A18)(rdram, ctx);
        goto after_2;
    // 0x80056F84: sh          $t4, 0x362A($at)
    MEM_H(0X362A, ctx->r1) = ctx->r12;
    after_2:
    // 0x80056F88: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x80056F8C: nop

    // 0x80056F90: lbu         $t6, 0x12($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X12);
    // 0x80056F94: nop

    // 0x80056F98: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x80056F9C: bgtz        $v1, L_80056FAC
    if (SIGNED(ctx->r3) > 0) {
        // 0x80056FA0: addiu       $a0, $v1, -0x50
        ctx->r4 = ADD32(ctx->r3, -0X50);
            goto L_80056FAC;
    }
    // 0x80056FA0: addiu       $a0, $v1, -0x50
    ctx->r4 = ADD32(ctx->r3, -0X50);
    // 0x80056FA4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80056FA8: addiu       $a0, $v1, -0x50
    ctx->r4 = ADD32(ctx->r3, -0X50);
L_80056FAC:
    // 0x80056FAC: bgtz        $a0, L_80056FB8
    if (SIGNED(ctx->r4) > 0) {
        // 0x80056FB0: nop
    
            goto L_80056FB8;
    }
    // 0x80056FB0: nop

    // 0x80056FB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80056FB8:
    // 0x80056FB8: jal         0x80059898
    // 0x80056FBC: nop

    func_80059898(rdram, ctx);
        goto after_3;
    // 0x80056FBC: nop

    after_3:
    // 0x80056FC0: sltiu       $at, $v0, 0xB
    ctx->r1 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80056FC4: bne         $at, $zero, L_80056FE4
    if (ctx->r1 != 0) {
        // 0x80056FC8: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80056FE4;
    }
    // 0x80056FC8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80056FCC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80056FD0: nop

    // 0x80056FD4: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80056FD8: nop

    // 0x80056FDC: ori         $t9, $t7, 0x2000
    ctx->r25 = ctx->r15 | 0X2000;
    // 0x80056FE0: sh          $t9, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r25;
L_80056FE4:
    // 0x80056FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80056FE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80056FEC: jr          $ra
    // 0x80056FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80056FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80056FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80056FF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80056FF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80056FFC: jal         0x80053CA0
    // 0x80057000: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80057000: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x80057004: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057008: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x8005700C: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x80057010: lh          $t6, 0xDE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XDE);
    // 0x80057014: lh          $t7, 0xE0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE0);
    // 0x80057018: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8005701C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80057020: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80057024: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80057028: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8005702C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80057030: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80057034: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80057038: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8005703C: jal         0x80272B1C
    // 0x80057040: nop

    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x80057040: nop

    after_1:
    // 0x80057044: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x80057048: lbu         $t9, 0x522C($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X522C);
    // 0x8005704C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80057050: bne         $t9, $at, L_800570B0
    if (ctx->r25 != ctx->r1) {
        // 0x80057054: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_800570B0;
    }
    // 0x80057054: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057058: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8005705C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80057060: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80057064: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057068: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005706C: lwc1        $f5, -0x6B90($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6B90);
    // 0x80057070: lwc1        $f4, -0x6B8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6B8C);
    // 0x80057074: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80057078: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8005707C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057080: lwc1        $f9, -0x6B88($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6B88);
    // 0x80057084: lwc1        $f8, -0x6B84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B84);
    // 0x80057088: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005708C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x80057090: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80057094: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x80057098: nop

    // 0x8005709C: bc1f        L_80057108
    if (!c1cs) {
        // 0x800570A0: nop
    
            goto L_80057108;
    }
    // 0x800570A0: nop

    // 0x800570A4: lwc1        $f12, -0x6B80($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6B80);
    // 0x800570A8: b           L_80057108
    // 0x800570AC: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
        goto L_80057108;
    // 0x800570AC: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_800570B0:
    // 0x800570B0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800570B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800570B8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800570BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800570C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800570C4: lwc1        $f7, -0x6B78($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6B78);
    // 0x800570C8: lwc1        $f6, -0x6B74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B74);
    // 0x800570CC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800570D0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800570D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800570D8: lwc1        $f11, -0x6B70($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6B70);
    // 0x800570DC: lwc1        $f10, -0x6B6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B6C);
    // 0x800570E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800570E4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x800570E8: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x800570EC: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x800570F0: nop

    // 0x800570F4: bc1f        L_80057108
    if (!c1cs) {
        // 0x800570F8: nop
    
            goto L_80057108;
    }
    // 0x800570F8: nop

    // 0x800570FC: lwc1        $f12, -0x6B68($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6B68);
    // 0x80057100: nop

    // 0x80057104: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_80057108:
    // 0x80057108: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8005710C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80057110: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x80057114: sh          $t0, 0x66($t1)
    MEM_H(0X66, ctx->r9) = ctx->r8;
    // 0x80057118: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x8005711C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80057120: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057124: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x80057128: lwc1        $f16, -0x6B5C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6B5C);
    // 0x8005712C: lwc1        $f17, -0x6B60($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6B60);
    // 0x80057130: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80057134: mul.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80057138: jal         0x80052FF0
    // 0x8005713C: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    func_80052FF0(rdram, ctx);
        goto after_2;
    // 0x8005713C: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80057140: jal         0x800540CC
    // 0x80057144: nop

    func_800540CC(rdram, ctx);
        goto after_3;
    // 0x80057144: nop

    after_3:
    // 0x80057148: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8005714C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80057150: lw          $t5, 0x3B20($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3B20);
    // 0x80057154: lw          $t4, 0xEC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XEC);
    // 0x80057158: jal         0x80066B8C
    // 0x8005715C: sw          $t4, 0xA0($t5)
    MEM_W(0XA0, ctx->r13) = ctx->r12;
    func_80066B8C(rdram, ctx);
        goto after_4;
    // 0x8005715C: sw          $t4, 0xA0($t5)
    MEM_W(0XA0, ctx->r13) = ctx->r12;
    after_4:
    // 0x80057160: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80057164: jal         0x80056F14
    // 0x80057168: nop

    func_80056F14(rdram, ctx);
        goto after_5;
    // 0x80057168: nop

    after_5:
    // 0x8005716C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80057170: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80057174: jr          $ra
    // 0x80057178: nop

    return;
    // 0x80057178: nop

;}
RECOMP_FUNC void func_8005717C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005717C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80057180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057184: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x80057188: lwc1        $f18, 0x4C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x8005718C: lbu         $t7, 0x912($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X912);
    // 0x80057190: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x80057194: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80057198: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8005719C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800571A0: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x800571A4: lh          $t9, 0x30($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X30);
    // 0x800571A8: lh          $t0, 0x2E($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2E);
    // 0x800571AC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800571B0: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800571B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800571B8: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800571BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800571C0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800571C4: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800571C8: jal         0x8001C5D0
    // 0x800571CC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x800571CC: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_0:
    // 0x800571D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800571D4: jal         0x80053CA0
    // 0x800571D8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x800571D8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x800571DC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800571E0: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x800571E4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800571E8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800571EC: sh          $t1, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = ctx->r9;
    // 0x800571F0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800571F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800571F8: lui         $a2, 0x3D8E
    ctx->r6 = S32(0X3D8E << 16);
    // 0x800571FC: jal         0x800530D4
    // 0x80057200: ori         $a2, $a2, 0xFA35
    ctx->r6 = ctx->r6 | 0XFA35;
    func_800530D4(rdram, ctx);
        goto after_2;
    // 0x80057200: ori         $a2, $a2, 0xFA35
    ctx->r6 = ctx->r6 | 0XFA35;
    after_2:
    // 0x80057204: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80057208: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x8005720C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80057210: addiu       $t3, $zero, 0x3E8
    ctx->r11 = ADD32(0, 0X3E8);
    // 0x80057214: sh          $t3, 0x66($t4)
    MEM_H(0X66, ctx->r12) = ctx->r11;
    // 0x80057218: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005721C: nop

    // 0x80057220: lhu         $t5, 0xC0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XC0);
    // 0x80057224: nop

    // 0x80057228: andi        $t7, $t5, 0xFE7F
    ctx->r15 = ctx->r13 & 0XFE7F;
    // 0x8005722C: sh          $t7, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r15;
    // 0x80057230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80057238: jr          $ra
    // 0x8005723C: nop

    return;
    // 0x8005723C: nop

;}
RECOMP_FUNC void func_80057240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057240: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80057244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80057248: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8005724C: lhu         $t6, 0x18($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X18);
    // 0x80057250: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80057254: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80057258: beq         $t7, $zero, L_80057274
    if (ctx->r15 == 0) {
        // 0x8005725C: nop
    
            goto L_80057274;
    }
    // 0x8005725C: nop

    // 0x80057260: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x80057264: nop

    // 0x80057268: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8005726C: beq         $t9, $zero, L_8005727C
    if (ctx->r25 == 0) {
        // 0x80057270: nop
    
            goto L_8005727C;
    }
    // 0x80057270: nop

L_80057274:
    // 0x80057274: b           L_80057430
    // 0x80057278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80057430;
    // 0x80057278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005727C:
    // 0x8005727C: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80057280: jal         0x80272AEC
    // 0x80057284: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x80057284: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x80057288: lui         $at, 0x43E3
    ctx->r1 = S32(0X43E3 << 16);
    // 0x8005728C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80057290: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80057294: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80057298: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8005729C: bc1f        L_800572F4
    if (!c1cs) {
        // 0x800572A0: nop
    
            goto L_800572F4;
    }
    // 0x800572A0: nop

    // 0x800572A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800572A8: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800572AC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800572B0: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x800572B4: nop

    // 0x800572B8: bc1f        L_800572DC
    if (!c1cs) {
        // 0x800572BC: nop
    
            goto L_800572DC;
    }
    // 0x800572BC: nop

    // 0x800572C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800572C4: lwc1        $f7, -0x6B58($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6B58);
    // 0x800572C8: lwc1        $f6, -0x6B54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B54);
    // 0x800572CC: nop

    // 0x800572D0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800572D4: b           L_80057380
    // 0x800572D8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
        goto L_80057380;
    // 0x800572D8: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_800572DC:
    // 0x800572DC: lwc1        $f11, -0x6B50($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6B50);
    // 0x800572E0: lwc1        $f10, -0x6B4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B4C);
    // 0x800572E4: nop

    // 0x800572E8: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x800572EC: b           L_80057380
    // 0x800572F0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
        goto L_80057380;
    // 0x800572F0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
L_800572F4:
    // 0x800572F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800572F8: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800572FC: lui         $at, 0xC3E3
    ctx->r1 = S32(0XC3E3 << 16);
    // 0x80057300: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x80057304: nop

    // 0x80057308: bc1f        L_80057320
    if (!c1cs) {
        // 0x8005730C: nop
    
            goto L_80057320;
    }
    // 0x8005730C: nop

    // 0x80057310: lui         $at, 0x43E3
    ctx->r1 = S32(0X43E3 << 16);
    // 0x80057314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80057318: b           L_8005732C
    // 0x8005731C: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
        goto L_8005732C;
    // 0x8005731C: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
L_80057320:
    // 0x80057320: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80057324: nop

    // 0x80057328: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
L_8005732C:
    // 0x8005732C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80057330: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80057334: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x80057338: bc1f        L_80057350
    if (!c1cs) {
        // 0x8005733C: nop
    
            goto L_80057350;
    }
    // 0x8005733C: nop

    // 0x80057340: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80057344: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80057348: b           L_8005735C
    // 0x8005734C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
        goto L_8005735C;
    // 0x8005734C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
L_80057350:
    // 0x80057350: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80057354: nop

    // 0x80057358: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
L_8005735C:
    // 0x8005735C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80057360: jal         0x80272B1C
    // 0x80057364: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x80057364: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_1:
    // 0x80057368: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8005736C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80057370: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80057374: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80057378: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x8005737C: nop

L_80057380:
    // 0x80057380: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80057384: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80057388: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8005738C: lui         $at, 0xC3AC
    ctx->r1 = S32(0XC3AC << 16);
    // 0x80057390: bc1f        L_800573A8
    if (!c1cs) {
        // 0x80057394: addiu       $t1, $sp, 0x30
        ctx->r9 = ADD32(ctx->r29, 0X30);
            goto L_800573A8;
    }
    // 0x80057394: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x80057398: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x8005739C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800573A0: b           L_800573B4
    // 0x800573A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
        goto L_800573B4;
    // 0x800573A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_800573A8:
    // 0x800573A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800573AC: nop

    // 0x800573B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_800573B4:
    // 0x800573B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800573B8: jal         0x80272B1C
    // 0x800573BC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_2;
    // 0x800573BC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_2:
    // 0x800573C0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800573C4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800573C8: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x800573CC: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800573D0: lwc1        $f8, 0x4C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800573D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800573D8: mul.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800573DC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800573E0: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800573E4: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800573E8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x800573EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800573F0: bc1f        L_80057420
    if (!c1cs) {
        // 0x800573F4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80057420;
    }
    // 0x800573F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800573F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800573FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80057400: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80057404: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80057408: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x8005740C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80057410: jal         0x802A28B0
    // 0x80057414: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_3;
    // 0x80057414: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80057418: b           L_80057430
    // 0x8005741C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80057430;
    // 0x8005741C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80057420:
    // 0x80057420: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80057424: jal         0x802A28B0
    // 0x80057428: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_4;
    // 0x80057428: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8005742C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80057430:
    // 0x80057430: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80057434: jr          $ra
    // 0x80057438: nop

    return;
    // 0x80057438: nop

;}
RECOMP_FUNC void func_8005743C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005743C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80057440: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057444: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80057448: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8005744C: lwc1        $f30, -0x6B44($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X6B44);
    // 0x80057450: lwc1        $f31, -0x6B48($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X6B48);
    // 0x80057454: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057458: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8005745C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80057460: lwc1        $f28, -0x6B3C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X6B3C);
    // 0x80057464: lwc1        $f29, -0x6B40($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, -0X6B40);
    // 0x80057468: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8005746C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80057470: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80057474: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80057478: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8005747C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80057480: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80057484: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80057488: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005748C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80057490: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80057494: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80057498: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x8005749C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800574A0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800574A4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800574A8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800574AC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x800574B0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x800574B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800574B8: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
L_800574BC:
    // 0x800574BC: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x800574C0: nop

    // 0x800574C4: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x800574C8: jal         0x8007FA40
    // 0x800574CC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x800574CC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x800574D0: mul.s       $f24, $f0, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x800574D4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800574D8: jal         0x8001C5D0
    // 0x800574DC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x800574DC: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x800574E0: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x800574E4: c.lt.d      $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f28.d < ctx->f2.d;
    // 0x800574E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x800574EC: bc1f        L_800574FC
    if (!c1cs) {
        // 0x800574F0: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_800574FC;
    }
    // 0x800574F0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800574F4: sub.d       $f8, $f2, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f2.d - ctx->f30.d;
    // 0x800574F8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_800574FC:
    // 0x800574FC: lwc1        $f17, -0x6B38($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6B38);
    // 0x80057500: lwc1        $f16, -0x6B34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6B34);
    // 0x80057504: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80057508: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8005750C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80057510: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80057514: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80057518: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8005751C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80057520: nop

    // 0x80057524: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80057528: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005752C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80057530: nop

    // 0x80057534: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80057538: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8005753C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80057540: nop

    // 0x80057544: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80057548: sh          $t7, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r15;
    // 0x8005754C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80057550: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80057554: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80057558: nop

    // 0x8005755C: cvt.w.s     $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    ctx->f10.u32l = CVT_W_S(ctx->f24.fl);
    // 0x80057560: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80057564: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80057568: sh          $t9, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r25;
    // 0x8005756C: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80057570: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80057574: add.s       $f22, $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f16.fl;
    // 0x80057578: bne         $s1, $s2, L_800574BC
    if (ctx->r17 != ctx->r18) {
        // 0x8005757C: add.s       $f20, $f20, $f18
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
            goto L_800574BC;
    }
    // 0x8005757C: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x80057580: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80057584: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x80057588: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8005758C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80057590: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80057594: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80057598: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005759C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800575A0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800575A4: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800575A8: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800575AC: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800575B0: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800575B4: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800575B8: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800575BC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800575C0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800575C4: jr          $ra
    // 0x800575C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800575C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800575CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800575CC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x800575D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800575D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800575D8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x800575DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800575E0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800575E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800575E8: addu        $a0, $t6, $a3
    ctx->r4 = ADD32(ctx->r14, ctx->r7);
    // 0x800575EC: lui         $a1, 0x3DE3
    ctx->r5 = S32(0X3DE3 << 16);
    // 0x800575F0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800575F4: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x800575F8: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    // 0x800575FC: jal         0x80054388
    // 0x80057600: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_80054388(rdram, ctx);
        goto after_0;
    // 0x80057600: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_0:
    // 0x80057604: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80057608: lui         $a1, 0xBC88
    ctx->r5 = S32(0XBC88 << 16);
    // 0x8005760C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80057610: jal         0x80054524
    // 0x80057614: ori         $a1, $a1, 0x8889
    ctx->r5 = ctx->r5 | 0X8889;
    func_80054524(rdram, ctx);
        goto after_1;
    // 0x80057614: ori         $a1, $a1, 0x8889
    ctx->r5 = ctx->r5 | 0X8889;
    after_1:
    // 0x80057618: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x8005761C: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x80057620: nop

    // 0x80057624: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80057628: bne         $t8, $zero, L_8005778C
    if (ctx->r24 != 0) {
        // 0x8005762C: nop
    
            goto L_8005778C;
    }
    // 0x8005762C: nop

    // 0x80057630: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80057634: jal         0x80057240
    // 0x80057638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80057240(rdram, ctx);
        goto after_2;
    // 0x80057638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8005763C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80057640: jal         0x80081040
    // 0x80057644: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x80057644: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x80057648: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8005764C: jal         0x80080E80
    // 0x80057650: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x80057650: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x80057654: lwc1        $f2, 0xB4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80057658: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8005765C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057660: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80057664: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80057668: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x8005766C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80057670: mul.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80057674: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80057678: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x8005767C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80057680: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80057684: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80057688: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8005768C: jal         0x80279DF8
    // 0x80057690: nop

    LOOKUP_FUNC(0x80279DF8)(rdram, ctx);
        goto after_5;
    // 0x80057690: nop

    after_5:
    // 0x80057694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80057698: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8005769C: jal         0x8005DE74
    // 0x800576A0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_8005DE74(rdram, ctx);
        goto after_6;
    // 0x800576A0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x800576A4: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x800576A8: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x800576AC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800576B0: bne         $v0, $t9, L_800576C8
    if (ctx->r2 != ctx->r25) {
        // 0x800576B4: mov.s       $f12, $f20
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
            goto L_800576C8;
    }
    // 0x800576B4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800576B8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800576BC: lhu         $v0, 0x40($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X40);
    // 0x800576C0: b           L_800576CC
    // 0x800576C4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
        goto L_800576CC;
    // 0x800576C4: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
L_800576C8:
    // 0x800576C8: lw          $t0, 0xC8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC8);
L_800576CC:
    // 0x800576CC: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x800576D0: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x800576D4: subu        $t2, $t2, $v0
    ctx->r10 = SUB32(ctx->r10, ctx->r2);
    // 0x800576D8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800576DC: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x800576E0: lwc1        $f14, 0x88($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X88);
    // 0x800576E4: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x800576E8: jal         0x8027924C
    // 0x800576EC: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_7;
    // 0x800576EC: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    after_7:
    // 0x800576F0: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x800576F4: jal         0x80272AEC
    // 0x800576F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_8;
    // 0x800576F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x800576FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057700: lwc1        $f2, 0x9C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80057704: lwc1        $f6, -0x6B30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B30);
    // 0x80057708: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005770C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x80057710: nop

    // 0x80057714: bc1f        L_8005778C
    if (!c1cs) {
        // 0x80057718: nop
    
            goto L_8005778C;
    }
    // 0x80057718: nop

    // 0x8005771C: lwc1        $f3, -0x6B28($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6B28);
    // 0x80057720: lwc1        $f2, -0x6B24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6B24);
    // 0x80057724: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80057728: c.lt.d      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.d < ctx->f8.d;
    // 0x8005772C: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x80057730: bc1f        L_80057774
    if (!c1cs) {
        // 0x80057734: addiu       $a3, $sp, 0xA0
        ctx->r7 = ADD32(ctx->r29, 0XA0);
            goto L_80057774;
    }
    // 0x80057734: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x80057738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8005773C: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80057740: nop

    // 0x80057744: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80057748: nop

    // 0x8005774C: bc1f        L_80057764
    if (!c1cs) {
        // 0x80057750: nop
    
            goto L_80057764;
    }
    // 0x80057750: nop

    // 0x80057754: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    // 0x80057758: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x8005775C: b           L_8005778C
    // 0x80057760: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
        goto L_8005778C;
    // 0x80057760: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
L_80057764:
    // 0x80057764: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x80057768: sub.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d - ctx->f2.d;
    // 0x8005776C: b           L_8005778C
    // 0x80057770: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
        goto L_8005778C;
    // 0x80057770: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
L_80057774:
    // 0x80057774: lw          $a1, 0x4C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X4C);
    // 0x80057778: lw          $a2, 0x44($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X44);
    // 0x8005777C: jal         0x80272B98
    // 0x80057780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_9;
    // 0x80057780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80057784: lwc1        $f20, 0xA0($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80057788: nop

L_8005778C:
    // 0x8005778C: jal         0x80053CA0
    // 0x80057790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80053CA0(rdram, ctx);
        goto after_10;
    // 0x80057790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80057794: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057798: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8005779C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800577A0: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x800577A4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800577A8: sw          $t4, 0x94($t5)
    MEM_W(0X94, ctx->r13) = ctx->r12;
    // 0x800577AC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800577B0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800577B4: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x800577B8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x800577BC: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x800577C0: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    // 0x800577C4: jal         0x800531BC
    // 0x800577C8: nop

    func_800531BC(rdram, ctx);
        goto after_11;
    // 0x800577C8: nop

    after_11:
    // 0x800577CC: jal         0x800540CC
    // 0x800577D0: nop

    func_800540CC(rdram, ctx);
        goto after_12;
    // 0x800577D0: nop

    after_12:
    // 0x800577D4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800577D8: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x800577DC: addiu       $t8, $zero, -0x3E8
    ctx->r24 = ADD32(0, -0X3E8);
    // 0x800577E0: sh          $t8, 0x66($t9)
    MEM_H(0X66, ctx->r25) = ctx->r24;
    // 0x800577E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800577E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800577EC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800577F0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800577F4: jr          $ra
    // 0x800577F8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x800577F8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_800577FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800577FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80057800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057804: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80057808: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8005780C: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80057810: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80057814: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x80057818: bne         $t7, $zero, L_8005786C
    if (ctx->r15 != 0) {
        // 0x8005781C: addiu       $a1, $sp, 0x1C
        ctx->r5 = ADD32(ctx->r29, 0X1C);
            goto L_8005786C;
    }
    // 0x8005781C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80057820: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x80057824: bgez        $a2, L_8005783C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80057828: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8005783C;
    }
    // 0x80057828: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005782C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80057830: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80057834: nop

    // 0x80057838: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8005783C:
    // 0x8005783C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057840: lwc1        $f17, -0x6B20($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6B20);
    // 0x80057844: lwc1        $f16, -0x6B1C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6B1C);
    // 0x80057848: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8005784C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80057850: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80057854: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80057858: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8005785C: jal         0x80054FD4
    // 0x80057860: nop

    func_80054FD4(rdram, ctx);
        goto after_0;
    // 0x80057860: nop

    after_0:
    // 0x80057864: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80057868: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_8005786C:
    // 0x8005786C: jal         0x80053CA0
    // 0x80057870: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x80057870: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80057874: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80057878: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8005787C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80057880: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80057884: sh          $t9, 0xBE($t0)
    MEM_H(0XBE, ctx->r8) = ctx->r25;
    // 0x80057888: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8005788C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80057890: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80057894: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x80057898: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x8005789C: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x800578A0: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800578A4: jal         0x800531BC
    // 0x800578A8: nop

    func_800531BC(rdram, ctx);
        goto after_2;
    // 0x800578A8: nop

    after_2:
    // 0x800578AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800578B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800578B4: jr          $ra
    // 0x800578B8: nop

    return;
    // 0x800578B8: nop

;}
RECOMP_FUNC void func_800578BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800578BC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800578C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800578C4: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x800578C8: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x800578CC: lwc1        $f28, -0x6B14($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X6B14);
    // 0x800578D0: lwc1        $f29, -0x6B18($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, -0X6B18);
    // 0x800578D4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x800578D8: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x800578DC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x800578E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800578E4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800578E8: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x800578EC: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x800578F0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800578F4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800578F8: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800578FC: lwc1        $f26, -0x6B10($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X6B10);
    // 0x80057900: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80057904: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x80057908: mov.s       $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    ctx->f30.fl = ctx->f12.fl;
    // 0x8005790C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80057910: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80057914: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80057918: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005791C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80057920: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80057924: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80057928: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
L_8005792C:
    // 0x8005792C: jal         0x80080E80
    // 0x80057930: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x80057930: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x80057934: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057938: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8005793C: lwc1        $f12, -0x6B0C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6B0C);
    // 0x80057940: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80057944: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80057948: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8005794C: mul.s       $f14, $f0, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80057950: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80057954: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x80057958: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8005795C: jal         0x800542BC
    // 0x80057960: nop

    func_800542BC(rdram, ctx);
        goto after_1;
    // 0x80057960: nop

    after_1:
    // 0x80057964: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057968: lwc1        $f10, -0x6B08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B08);
    // 0x8005796C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80057970: nop

    // 0x80057974: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80057978: nop

    // 0x8005797C: bc1f        L_8005798C
    if (!c1cs) {
        // 0x80057980: nop
    
            goto L_8005798C;
    }
    // 0x80057980: nop

    // 0x80057984: b           L_80057A0C
    // 0x80057988: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_80057A0C;
    // 0x80057988: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_8005798C:
    // 0x8005798C: jal         0x80081040
    // 0x80057990: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80057990: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x80057994: mul.s       $f14, $f0, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x80057998: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x8005799C: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x800579A0: mov.s       $f22, $f14
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    ctx->f22.fl = ctx->f14.fl;
    // 0x800579A4: jal         0x8005444C
    // 0x800579A8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_8005444C(rdram, ctx);
        goto after_3;
    // 0x800579A8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_3:
    // 0x800579AC: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800579B0: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x800579B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x800579B8: nop

    // 0x800579BC: bc1f        L_800579CC
    if (!c1cs) {
        // 0x800579C0: nop
    
            goto L_800579CC;
    }
    // 0x800579C0: nop

    // 0x800579C4: b           L_80057A0C
    // 0x800579C8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_80057A0C;
    // 0x800579C8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_800579CC:
    // 0x800579CC: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x800579D0: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    // 0x800579D4: jal         0x8005444C
    // 0x800579D8: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_8005444C(rdram, ctx);
        goto after_4;
    // 0x800579D8: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_4:
    // 0x800579DC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800579E0: nop

    // 0x800579E4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800579E8: nop

    // 0x800579EC: bc1f        L_800579FC
    if (!c1cs) {
        // 0x800579F0: nop
    
            goto L_800579FC;
    }
    // 0x800579F0: nop

    // 0x800579F4: b           L_80057A0C
    // 0x800579F8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_80057A0C;
    // 0x800579F8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
L_800579FC:
    // 0x800579FC: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x80057A00: sub.d       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = ctx->f6.d - ctx->f28.d;
    // 0x80057A04: b           L_8005792C
    // 0x80057A08: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
        goto L_8005792C;
    // 0x80057A08: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
L_80057A0C:
    // 0x80057A0C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80057A10: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80057A14: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80057A18: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80057A1C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80057A20: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80057A24: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80057A28: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80057A2C: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80057A30: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80057A34: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80057A38: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80057A3C: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80057A40: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80057A44: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80057A48: jr          $ra
    // 0x80057A4C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80057A4C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80057A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057A50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80057A54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80057A58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80057A5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80057A60: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80057A64: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80057A68: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x80057A6C: nop

    // 0x80057A70: lbu         $a1, 0x1($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X1);
    // 0x80057A74: jal         0x80275318
    // 0x80057A78: nop

    LOOKUP_FUNC(0x80275318)(rdram, ctx);
        goto after_0;
    // 0x80057A78: nop

    after_0:
    // 0x80057A7C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80057A80: lui         $at, 0x4019
    ctx->r1 = S32(0X4019 << 16);
    // 0x80057A84: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80057A88: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80057A8C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80057A90: bgez        $t7, L_80057AAC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80057A94: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80057AAC;
    }
    // 0x80057A94: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80057A98: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80057A9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80057AA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80057AA4: nop

    // 0x80057AA8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80057AAC:
    // 0x80057AAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057AB0: lwc1        $f11, -0x6B00($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6B00);
    // 0x80057AB4: lwc1        $f10, -0x6AFC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6AFC);
    // 0x80057AB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057ABC: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80057AC0: lwc1        $f6, -0x6AF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6AF4);
    // 0x80057AC4: lwc1        $f7, -0x6AF8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6AF8);
    // 0x80057AC8: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80057ACC: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80057AD0: add.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f18.d + ctx->f12.d;
    // 0x80057AD4: add.d       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = ctx->f10.d + ctx->f12.d;
    // 0x80057AD8: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    // 0x80057ADC: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x80057AE0: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80057AE4: nop

    // 0x80057AE8: bc1f        L_80057AF4
    if (!c1cs) {
        // 0x80057AEC: nop
    
            goto L_80057AF4;
    }
    // 0x80057AEC: nop

    // 0x80057AF0: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
L_80057AF4:
    // 0x80057AF4: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x80057AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057AFC: lbu         $a1, 0x2($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X2);
    // 0x80057B00: jal         0x802752E8
    // 0x80057B04: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_1;
    // 0x80057B04: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80057B08: addiu       $t9, $zero, 0x6A
    ctx->r25 = ADD32(0, 0X6A);
    // 0x80057B0C: jal         0x80058120
    // 0x80057B10: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    func_80058120(rdram, ctx);
        goto after_2;
    // 0x80057B10: subu        $a0, $t9, $v0
    ctx->r4 = SUB32(ctx->r25, ctx->r2);
    after_2:
    // 0x80057B14: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057B18: lwc1        $f9, -0x6AF0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6AF0);
    // 0x80057B1C: lwc1        $f8, -0x6AEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6AEC);
    // 0x80057B20: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80057B24: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80057B28: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x80057B2C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80057B30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80057B34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057B38: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x80057B3C: lwc1        $f6, -0x6AE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6AE4);
    // 0x80057B40: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80057B44: lwc1        $f7, -0x6AE8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6AE8);
    // 0x80057B48: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x80057B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057B50: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80057B54: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80057B58: jal         0x80053CA0
    // 0x80057B5C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_80053CA0(rdram, ctx);
        goto after_3;
    // 0x80057B5C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80057B60: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80057B64: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80057B68: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80057B6C: sh          $t0, 0xBE($t1)
    MEM_H(0XBE, ctx->r9) = ctx->r8;
    // 0x80057B70: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80057B74: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80057B78: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80057B7C: jal         0x800530D4
    // 0x80057B80: nop

    func_800530D4(rdram, ctx);
        goto after_4;
    // 0x80057B80: nop

    after_4:
    // 0x80057B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80057B88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80057B8C: jr          $ra
    // 0x80057B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80057B90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80057B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057B94: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80057B98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80057B9C: sltiu       $at, $a2, 0x7
    ctx->r1 = ctx->r6 < 0X7 ? 1 : 0;
    // 0x80057BA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80057BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80057BA8: bne         $at, $zero, L_80057BB4
    if (ctx->r1 != 0) {
        // 0x80057BAC: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_80057BB4;
    }
    // 0x80057BAC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80057BB0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80057BB4:
    // 0x80057BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057BB8: jal         0x802720BC
    // 0x80057BBC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x802720BC)(rdram, ctx);
        goto after_0;
    // 0x80057BBC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    after_0:
    // 0x80057BC0: beq         $v0, $zero, L_80057C60
    if (ctx->r2 == 0) {
        // 0x80057BC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80057C60;
    }
    // 0x80057BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057BC8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80057BCC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80057BD0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80057BD4: bgez        $t6, L_80057BEC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80057BD8: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80057BEC;
    }
    // 0x80057BD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80057BDC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80057BE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80057BE4: nop

    // 0x80057BE8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80057BEC:
    // 0x80057BEC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80057BF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80057BF4: nop

    // 0x80057BF8: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80057BFC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80057C00: jal         0x80054FD4
    // 0x80057C04: nop

    func_80054FD4(rdram, ctx);
        goto after_1;
    // 0x80057C04: nop

    after_1:
    // 0x80057C08: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80057C0C: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x80057C10: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x80057C14: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x80057C18: sh          $t8, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r24;
    // 0x80057C1C: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x80057C20: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80057C24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80057C28: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80057C2C: addiu       $a3, $a3, -0x5288
    ctx->r7 = ADD32(ctx->r7, -0X5288);
    // 0x80057C30: jal         0x800575CC
    // 0x80057C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800575CC(rdram, ctx);
        goto after_2;
    // 0x80057C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80057C38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057C3C: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80057C40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057C44: lwc1        $f18, -0x6AE0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6AE0);
    // 0x80057C48: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80057C4C: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80057C50: swc1        $f18, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f18.u32l;
    // 0x80057C54: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80057C58: b           L_80057E78
    // 0x80057C5C: sb          $t2, 0xBC($t3)
    MEM_B(0XBC, ctx->r11) = ctx->r10;
        goto L_80057E78;
    // 0x80057C5C: sb          $t2, 0xBC($t3)
    MEM_B(0XBC, ctx->r11) = ctx->r10;
L_80057C60:
    // 0x80057C60: lw          $t4, 0xD8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD8);
    // 0x80057C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057C68: lbu         $a1, 0x1($t4)
    ctx->r5 = MEM_BU(ctx->r12, 0X1);
    // 0x80057C6C: jal         0x80275318
    // 0x80057C70: nop

    LOOKUP_FUNC(0x80275318)(rdram, ctx);
        goto after_3;
    // 0x80057C70: nop

    after_3:
    // 0x80057C74: lui         $at, 0x4019
    ctx->r1 = S32(0X4019 << 16);
    // 0x80057C78: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80057C7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057C80: lwc1        $f9, -0x6AD8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6AD8);
    // 0x80057C84: lwc1        $f8, -0x6AD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6AD4);
    // 0x80057C88: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80057C8C: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80057C90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80057C94: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x80057C98: nop

    // 0x80057C9C: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x80057CA0: add.d       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f6.d + ctx->f12.d;
    // 0x80057CA4: bne         $t6, $zero, L_80057D08
    if (ctx->r14 != 0) {
        // 0x80057CA8: cvt.s.d     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
            goto L_80057D08;
    }
    // 0x80057CA8: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80057CAC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80057CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057CB4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80057CB8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80057CBC: bgez        $t7, L_80057CD4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80057CC0: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80057CD4;
    }
    // 0x80057CC0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80057CC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80057CC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80057CCC: nop

    // 0x80057CD0: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80057CD4:
    // 0x80057CD4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80057CD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80057CDC: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x80057CE0: div.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80057CE4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80057CE8: jal         0x80054FD4
    // 0x80057CEC: nop

    func_80054FD4(rdram, ctx);
        goto after_4;
    // 0x80057CEC: nop

    after_4:
    // 0x80057CF0: lui         $at, 0x4019
    ctx->r1 = S32(0X4019 << 16);
    // 0x80057CF4: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80057CF8: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80057CFC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80057D00: b           L_80057D24
    // 0x80057D04: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
        goto L_80057D24;
    // 0x80057D04: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
L_80057D08:
    // 0x80057D08: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x80057D0C: nop

    // 0x80057D10: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x80057D14: nop

    // 0x80057D18: lwc1        $f10, 0x8BC($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8BC);
    // 0x80057D1C: nop

    // 0x80057D20: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
L_80057D24:
    // 0x80057D24: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80057D28: nop

    // 0x80057D2C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80057D30: bgez        $t0, L_80057D4C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80057D34: cvt.d.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
            goto L_80057D4C;
    }
    // 0x80057D34: cvt.d.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.d = CVT_D_W(ctx->f16.u32l);
    // 0x80057D38: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80057D3C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80057D40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80057D44: nop

    // 0x80057D48: add.d       $f4, $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f4.d + ctx->f18.d;
L_80057D4C:
    // 0x80057D4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057D50: lwc1        $f9, -0x6AD0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6AD0);
    // 0x80057D54: lwc1        $f8, -0x6ACC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6ACC);
    // 0x80057D58: nop

    // 0x80057D5C: mul.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80057D60: add.d       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f6.d + ctx->f12.d;
    // 0x80057D64: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x80057D68: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80057D6C: nop

    // 0x80057D70: bc1f        L_80057D7C
    if (!c1cs) {
        // 0x80057D74: nop
    
            goto L_80057D7C;
    }
    // 0x80057D74: nop

    // 0x80057D78: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_80057D7C:
    // 0x80057D7C: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x80057D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80057D84: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    // 0x80057D88: jal         0x802752E8
    // 0x80057D8C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(0x802752E8)(rdram, ctx);
        goto after_5;
    // 0x80057D8C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x80057D90: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80057D94: addiu       $t2, $zero, 0x7D
    ctx->r10 = ADD32(0, 0X7D);
    // 0x80057D98: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x80057D9C: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80057DA0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80057DA4: mflo        $a0
    ctx->r4 = lo;
    // 0x80057DA8: jal         0x80058120
    // 0x80057DAC: nop

    func_80058120(rdram, ctx);
        goto after_6;
    // 0x80057DAC: nop

    after_6:
    // 0x80057DB0: jal         0x80272AEC
    // 0x80057DB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_7;
    // 0x80057DB4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_7:
    // 0x80057DB8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80057DBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80057DC0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057DC4: lwc1        $f16, -0x6AC8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6AC8);
    // 0x80057DC8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80057DCC: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80057DD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80057DD4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057DD8: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x80057DDC: nop

    // 0x80057DE0: bc1f        L_80057DEC
    if (!c1cs) {
        // 0x80057DE4: nop
    
            goto L_80057DEC;
    }
    // 0x80057DE4: nop

    // 0x80057DE8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80057DEC:
    // 0x80057DEC: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x80057DF0: lwc1        $f7, -0x6AC0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6AC0);
    // 0x80057DF4: lwc1        $f6, -0x6ABC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6ABC);
    // 0x80057DF8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x80057DFC: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80057E00: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x80057E04: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x80057E08: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x80057E0C: jal         0x80059898
    // 0x80057E10: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x80057E10: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    after_8:
    // 0x80057E14: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80057E18: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80057E1C: sltu        $at, $v0, $t5
    ctx->r1 = ctx->r2 < ctx->r13 ? 1 : 0;
    // 0x80057E20: beq         $at, $zero, L_80057E48
    if (ctx->r1 == 0) {
        // 0x80057E24: lui         $t6, 0x801B
        ctx->r14 = S32(0X801B << 16);
            goto L_80057E48;
    }
    // 0x80057E24: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80057E28: lbu         $t6, 0x3688($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3688);
    // 0x80057E2C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80057E30: bne         $t6, $zero, L_80057E48
    if (ctx->r14 != 0) {
        // 0x80057E34: nop
    
            goto L_80057E48;
    }
    // 0x80057E34: nop

    // 0x80057E38: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80057E3C: jal         0x800578BC
    // 0x80057E40: nop

    func_800578BC(rdram, ctx);
        goto after_9;
    // 0x80057E40: nop

    after_9:
    // 0x80057E44: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
L_80057E48:
    // 0x80057E48: jal         0x80053CA0
    // 0x80057E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80053CA0(rdram, ctx);
        goto after_10;
    // 0x80057E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80057E50: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057E54: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80057E58: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80057E5C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80057E60: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
    // 0x80057E64: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80057E68: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80057E6C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80057E70: jal         0x800530D4
    // 0x80057E74: nop

    func_800530D4(rdram, ctx);
        goto after_11;
    // 0x80057E74: nop

    after_11:
L_80057E78:
    // 0x80057E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80057E7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80057E80: jr          $ra
    // 0x80057E84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80057E84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80057E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057E90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80057E94: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80057E98: jal         0x80053CA0
    // 0x80057E9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80057E9C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80057EA0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80057EA4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80057EA8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80057EAC: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x80057EB0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057EB4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80057EB8: lwc1        $f9, -0x6AB8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6AB8);
    // 0x80057EBC: lwc1        $f8, -0x6AB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6AB4);
    // 0x80057EC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80057EC4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80057EC8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80057ECC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80057ED0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80057ED4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80057ED8: jal         0x800530D4
    // 0x80057EDC: nop

    func_800530D4(rdram, ctx);
        goto after_1;
    // 0x80057EDC: nop

    after_1:
    // 0x80057EE0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80057EE4: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80057EE8: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x80057EEC: sh          $t8, 0x66($t9)
    MEM_H(0X66, ctx->r25) = ctx->r24;
    // 0x80057EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057EF8: jr          $ra
    // 0x80057EFC: nop

    return;
    // 0x80057EFC: nop

;}
RECOMP_FUNC void func_80057F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057F08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80057F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80057F10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80057F14: jal         0x80059898
    // 0x80057F18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80057F18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80057F1C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80057F20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80057F24: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80057F28: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80057F2C: bgez        $v0, L_80057F48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80057F30: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80057F48;
    }
    // 0x80057F30: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80057F34: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80057F38: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80057F3C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80057F40: nop

    // 0x80057F44: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80057F48:
    // 0x80057F48: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80057F4C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80057F50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80057F54: nop

    // 0x80057F58: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x80057F5C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80057F60: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80057F64: jal         0x80057E88
    // 0x80057F68: nop

    func_80057E88(rdram, ctx);
        goto after_1;
    // 0x80057F68: nop

    after_1:
    // 0x80057F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057F74: jr          $ra
    // 0x80057F78: nop

    return;
    // 0x80057F78: nop

;}
RECOMP_FUNC void func_80057F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057F7C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80057F80: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80057F84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057F88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057F8C: lw          $t6, 0x84($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X84);
    // 0x80057F90: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80057F94: bne         $a0, $t6, L_80058030
    if (ctx->r4 != ctx->r14) {
        // 0x80057F98: nop
    
            goto L_80058030;
    }
    // 0x80057F98: nop

    // 0x80057F9C: lhu         $t7, 0xC2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC2);
    // 0x80057FA0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80057FA4: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80057FA8: sh          $t8, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r24;
    // 0x80057FAC: jal         0x80059898
    // 0x80057FB0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80057FB0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80057FB4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80057FB8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80057FBC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80057FC0: bgez        $v0, L_80057FDC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80057FC4: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_80057FDC;
    }
    // 0x80057FC4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80057FC8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80057FCC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80057FD0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80057FD4: nop

    // 0x80057FD8: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_80057FDC:
    // 0x80057FDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80057FE0: lwc1        $f11, -0x6AB0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6AB0);
    // 0x80057FE4: lwc1        $f10, -0x6AAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6AAC);
    // 0x80057FE8: lwc1        $f18, 0x8C($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8C);
    // 0x80057FEC: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80057FF0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80057FF4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80057FF8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80057FFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80058000: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x80058004: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80058008: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x8005800C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80058010: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80058014: jal         0x80057F00
    // 0x80058018: nop

    func_80057F00(rdram, ctx);
        goto after_1;
    // 0x80058018: nop

    after_1:
    // 0x8005801C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80058020: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80058024: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80058028: b           L_80058044
    // 0x8005802C: sb          $t9, 0xBC($t0)
    MEM_B(0XBC, ctx->r8) = ctx->r25;
        goto L_80058044;
    // 0x8005802C: sb          $t9, 0xBC($t0)
    MEM_B(0XBC, ctx->r8) = ctx->r25;
L_80058030:
    // 0x80058030: lw          $t1, 0x88($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X88);
    // 0x80058034: nop

    // 0x80058038: bne         $a3, $t1, L_80058048
    if (ctx->r7 != ctx->r9) {
        // 0x8005803C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80058048;
    }
    // 0x8005803C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058040: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
L_80058044:
    // 0x80058044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80058048:
    // 0x80058048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005804C: jr          $ra
    // 0x80058050: nop

    return;
    // 0x80058050: nop

;}
RECOMP_FUNC void func_80058054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80058058: bgtz        $a0, L_80058064
    if (SIGNED(ctx->r4) > 0) {
        // 0x8005805C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80058064;
    }
    // 0x8005805C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058060: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80058064:
    // 0x80058064: jal         0x80059898
    // 0x80058068: nop

    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80058068: nop

    after_0:
    // 0x8005806C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80058070: bgez        $v0, L_80058088
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80058074: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80058088;
    }
    // 0x80058074: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80058078: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8005807C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80058080: nop

    // 0x80058084: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80058088:
    // 0x80058088: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005808C: lwc1        $f17, -0x6AA8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6AA8);
    // 0x80058090: lwc1        $f16, -0x6AA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6AA4);
    // 0x80058094: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80058098: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8005809C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800580A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800580A4: jr          $ra
    // 0x800580A8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x800580A8: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
;}
RECOMP_FUNC void func_800580AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800580AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800580B0: bgtz        $a0, L_800580BC
    if (SIGNED(ctx->r4) > 0) {
        // 0x800580B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800580BC;
    }
    // 0x800580B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800580B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800580BC:
    // 0x800580BC: jal         0x80059898
    // 0x800580C0: nop

    func_80059898(rdram, ctx);
        goto after_0;
    // 0x800580C0: nop

    after_0:
    // 0x800580C4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800580C8: bgez        $v0, L_800580E0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800580CC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800580E0;
    }
    // 0x800580CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800580D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800580D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800580D8: nop

    // 0x800580DC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800580E0:
    // 0x800580E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800580E4: lwc1        $f17, -0x6AA0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6AA0);
    // 0x800580E8: lwc1        $f16, -0x6A9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6A9C);
    // 0x800580EC: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x800580F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800580F4: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800580F8: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x800580FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058100: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80058104: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80058108: beq         $t7, $zero, L_80058114
    if (ctx->r15 == 0) {
        // 0x8005810C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80058114;
    }
    // 0x8005810C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80058110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80058114:
    // 0x80058114: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80058118: jr          $ra
    // 0x8005811C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8005811C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80058120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80058124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058128: bne         $a0, $zero, L_80058134
    if (ctx->r4 != 0) {
        // 0x8005812C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80058134;
    }
    // 0x8005812C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80058130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80058134:
    // 0x80058134: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x80058138: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8005813C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80058140: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x80058144: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80058148: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8005814C: jal         0x80059898
    // 0x80058150: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_80059898(rdram, ctx);
        goto after_0;
    // 0x80058150: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_0:
    // 0x80058154: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80058158: bgez        $v0, L_80058170
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005815C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80058170;
    }
    // 0x8005815C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80058160: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80058164: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80058168: nop

    // 0x8005816C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80058170:
    // 0x80058170: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058174: lwc1        $f17, -0x6A98($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6A98);
    // 0x80058178: lwc1        $f16, -0x6A94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6A94);
    // 0x8005817C: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x80058180: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80058184: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80058188: lhu         $t6, 0x522A($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X522A);
    // 0x8005818C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058190: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80058194: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x80058198: beq         $t7, $zero, L_800581A4
    if (ctx->r15 == 0) {
        // 0x8005819C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_800581A4;
    }
    // 0x8005819C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x800581A0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_800581A4:
    // 0x800581A4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800581A8: jr          $ra
    // 0x800581AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800581AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800581B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800581B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800581B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800581B8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800581BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800581C0: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x800581C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800581C8: lhu         $t8, 0x8($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X8);
    // 0x800581CC: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800581D0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800581D4: beq         $t9, $zero, L_800581F4
    if (ctx->r25 == 0) {
        // 0x800581D8: nop
    
            goto L_800581F4;
    }
    // 0x800581D8: nop

    // 0x800581DC: lwc1        $f5, -0x6A90($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6A90);
    // 0x800581E0: lwc1        $f4, -0x6A8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6A8C);
    // 0x800581E4: nop

    // 0x800581E8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800581EC: b           L_80058208
    // 0x800581F0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_80058208;
    // 0x800581F0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_800581F4:
    // 0x800581F4: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x800581F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800581FC: nop

    // 0x80058200: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80058204: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_80058208:
    // 0x80058208: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x8005820C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80058210: lwc1        $f14, 0x20($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80058214: jal         0x8027924C
    // 0x80058218: nop

    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x80058218: nop

    after_0:
    // 0x8005821C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80058220: jal         0x80058054
    // 0x80058224: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80058054(rdram, ctx);
        goto after_1;
    // 0x80058224: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x80058228: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8005822C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x80058230: beq         $t1, $zero, L_80058268
    if (ctx->r9 == 0) {
        // 0x80058234: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_80058268;
    }
    // 0x80058234: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80058238: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8005823C: jal         0x80058054
    // 0x80058240: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_80058054(rdram, ctx);
        goto after_2;
    // 0x80058240: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80058244: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058248: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8005824C: lwc1        $f5, -0x6A88($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6A88);
    // 0x80058250: lwc1        $f4, -0x6A84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X6A84);
    // 0x80058254: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80058258: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8005825C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80058260: b           L_80058290
    // 0x80058264: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
        goto L_80058290;
    // 0x80058264: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
L_80058268:
    // 0x80058268: jal         0x80058054
    // 0x8005826C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_80058054(rdram, ctx);
        goto after_3;
    // 0x8005826C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80058270: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058274: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80058278: lwc1        $f11, -0x6A80($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6A80);
    // 0x8005827C: lwc1        $f10, -0x6A7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6A7C);
    // 0x80058280: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80058284: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x80058288: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8005828C: cvt.s.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f16.fl = CVT_S_D(ctx->f18.d);
L_80058290:
    // 0x80058290: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80058294: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80058298: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8005829C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800582A0: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x800582A4: bc1f        L_800582C0
    if (!c1cs) {
        // 0x800582A8: nop
    
            goto L_800582C0;
    }
    // 0x800582A8: nop

    // 0x800582AC: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x800582B0: nop

    // 0x800582B4: lwc1        $f8, 0x20($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X20);
    // 0x800582B8: b           L_80058354
    // 0x800582BC: sub.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f2.fl;
        goto L_80058354;
    // 0x800582BC: sub.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f2.fl;
L_800582C0:
    // 0x800582C0: lw          $t3, 0x3B20($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3B20);
    // 0x800582C4: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800582C8: lwc1        $f10, 0x20($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X20);
    // 0x800582CC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800582D0: add.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x800582D4: jal         0x8027924C
    // 0x800582D8: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_4;
    // 0x800582D8: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    after_4:
    // 0x800582DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800582E0: jal         0x80272AEC
    // 0x800582E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_5;
    // 0x800582E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x800582E8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800582EC: lwc1        $f3, -0x6A78($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6A78);
    // 0x800582F0: lwc1        $f2, -0x6A74($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6A74);
    // 0x800582F4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x800582F8: c.lt.d      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.d < ctx->f18.d;
    // 0x800582FC: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80058300: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80058304: bc1f        L_80058354
    if (!c1cs) {
        // 0x80058308: lui         $t4, 0x8028
        ctx->r12 = S32(0X8028 << 16);
            goto L_80058354;
    }
    // 0x80058308: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8005830C: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x80058310: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80058314: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x80058318: beq         $t5, $zero, L_80058358
    if (ctx->r13 == 0) {
        // 0x8005831C: lw          $t6, 0x3C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X3C);
            goto L_80058358;
    }
    // 0x8005831C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80058320: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80058324: nop

    // 0x80058328: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8005832C: nop

    // 0x80058330: bc1f        L_80058348
    if (!c1cs) {
        // 0x80058334: nop
    
            goto L_80058348;
    }
    // 0x80058334: nop

    // 0x80058338: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x8005833C: sub.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d - ctx->f2.d;
    // 0x80058340: b           L_80058354
    // 0x80058344: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
        goto L_80058354;
    // 0x80058344: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_80058348:
    // 0x80058348: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x8005834C: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x80058350: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
L_80058354:
    // 0x80058354: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
L_80058358:
    // 0x80058358: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005835C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80058360: beq         $t6, $zero, L_800583B4
    if (ctx->r14 == 0) {
        // 0x80058364: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_800583B4;
    }
    // 0x80058364: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058368: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005836C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80058370: lwc1        $f11, -0x6A70($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6A70);
    // 0x80058374: lwc1        $f10, -0x6A6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6A6C);
    // 0x80058378: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8005837C: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80058380: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x80058384: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80058388: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8005838C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80058390: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x80058394: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80058398: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8005839C: nop

    // 0x800583A0: bc1f        L_800583FC
    if (!c1cs) {
        // 0x800583A4: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800583FC;
    }
    // 0x800583A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800583A8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800583AC: b           L_800583FC
    // 0x800583B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
        goto L_800583FC;
    // 0x800583B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800583B4:
    // 0x800583B4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800583B8: lwc1        $f19, -0x6A68($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6A68);
    // 0x800583BC: lwc1        $f18, -0x6A64($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6A64);
    // 0x800583C0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800583C4: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800583C8: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x800583CC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800583D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800583D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800583D8: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x800583DC: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x800583E0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x800583E4: nop

    // 0x800583E8: bc1f        L_800583FC
    if (!c1cs) {
        // 0x800583EC: lw          $a0, 0x38($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X38);
            goto L_800583FC;
    }
    // 0x800583EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800583F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800583F4: nop

    // 0x800583F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_800583FC:
    // 0x800583FC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x80058400: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x80058404: jal         0x80053CA0
    // 0x80058408: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_80053CA0(rdram, ctx);
        goto after_6;
    // 0x80058408: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x8005840C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80058410: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80058414: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80058418: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8005841C: jal         0x800530D4
    // 0x80058420: nop

    func_800530D4(rdram, ctx);
        goto after_7;
    // 0x80058420: nop

    after_7:
    // 0x80058424: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80058428: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8005842C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80058430: jal         0x800540CC
    // 0x80058434: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
    func_800540CC(rdram, ctx);
        goto after_8;
    // 0x80058434: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
    after_8:
    // 0x80058438: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8005843C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x80058440: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80058444: sh          $t9, 0xC4($t0)
    MEM_H(0XC4, ctx->r8) = ctx->r25;
    // 0x80058448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005844C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80058450: jr          $ra
    // 0x80058454: nop

    return;
    // 0x80058454: nop

;}
RECOMP_FUNC void func_80058458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058458: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005845C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80058460: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80058464: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80058468: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8005846C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80058470: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80058474: lw          $t7, 0xC8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC8);
    // 0x80058478: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005847C: lh          $t8, 0x8B8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X8B8);
    // 0x80058480: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80058484: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80058488: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8005848C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80058490: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x80058494: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80058498: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8005849C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800584A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800584A4: jal         0x80272B1C
    // 0x800584A8: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x800584A8: lui         $a3, 0xC218
    ctx->r7 = S32(0XC218 << 16);
    after_0:
    // 0x800584AC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800584B0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800584B4: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x800584B8: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800584BC: lh          $t2, 0x8B8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8B8);
    // 0x800584C0: addiu       $t3, $sp, 0x30
    ctx->r11 = ADD32(ctx->r29, 0X30);
    // 0x800584C4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800584C8: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800584CC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800584D0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800584D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800584D8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800584DC: jal         0x80272B1C
    // 0x800584E0: lui         $a3, 0x4218
    ctx->r7 = S32(0X4218 << 16);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_1;
    // 0x800584E0: lui         $a3, 0x4218
    ctx->r7 = S32(0X4218 << 16);
    after_1:
    // 0x800584E4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800584E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800584EC: lwc1        $f10, 0x4C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4C);
    // 0x800584F0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800584F4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800584F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800584FC: bc1f        L_8005852C
    if (!c1cs) {
        // 0x80058500: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_8005852C;
    }
    // 0x80058500: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80058504: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80058508: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8005850C: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80058510: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80058514: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80058518: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8005851C: jal         0x802A28B0
    // 0x80058520: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_2;
    // 0x80058520: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80058524: b           L_80058544
    // 0x80058528: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_80058544;
    // 0x80058528: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_8005852C:
    // 0x8005852C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80058530: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80058534: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80058538: jal         0x802A28B0
    // 0x8005853C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    LOOKUP_FUNC(0x802A28B0)(rdram, ctx);
        goto after_3;
    // 0x8005853C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80058540: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_80058544:
    // 0x80058544: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80058548: jal         0x80053CA0
    // 0x8005854C: nop

    func_80053CA0(rdram, ctx);
        goto after_4;
    // 0x8005854C: nop

    after_4:
    // 0x80058550: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80058554: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80058558: jal         0x800530D4
    // 0x8005855C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800530D4(rdram, ctx);
        goto after_5;
    // 0x8005855C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_5:
    // 0x80058560: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80058564: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80058568: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8005856C: jal         0x800540CC
    // 0x80058570: sh          $t5, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r13;
    func_800540CC(rdram, ctx);
        goto after_6;
    // 0x80058570: sh          $t5, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r13;
    after_6:
    // 0x80058574: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80058578: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x8005857C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80058580: sb          $t7, 0xBC($t8)
    MEM_B(0XBC, ctx->r24) = ctx->r15;
    // 0x80058584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80058588: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005858C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80058590: jr          $ra
    // 0x80058594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80058594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80058598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005859C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800585A0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800585A4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x800585A8: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800585AC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800585B0: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x800585B4: lw          $a2, 0x4C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4C);
    // 0x800585B8: lw          $a3, 0x44($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X44);
    // 0x800585BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800585C0: jal         0x8004EE18
    // 0x800585C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8004EE18(rdram, ctx);
        goto after_0;
    // 0x800585C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800585C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800585CC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800585D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800585D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800585D8: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800585DC: lwc1        $f11, -0x6A60($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X6A60);
    // 0x800585E0: lwc1        $f10, -0x6A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6A5C);
    // 0x800585E4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800585E8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800585EC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x800585F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800585F4: jal         0x80058054
    // 0x800585F8: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    func_80058054(rdram, ctx);
        goto after_1;
    // 0x800585F8: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800585FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80058600: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80058604: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80058608: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8005860C: jal         0x80058458
    // 0x80058610: nop

    func_80058458(rdram, ctx);
        goto after_2;
    // 0x80058610: nop

    after_2:
    // 0x80058614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80058618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005861C: jr          $ra
    // 0x80058620: nop

    return;
    // 0x80058620: nop

;}
RECOMP_FUNC void func_80058624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058624: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80058628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005862C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80058630: jal         0x800580AC
    // 0x80058634: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800580AC(rdram, ctx);
        goto after_0;
    // 0x80058634: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x80058638: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005863C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058640: lwc1        $f4, 0x8C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8C);
    // 0x80058644: lwc1        $f9, -0x6A58($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A58);
    // 0x80058648: lwc1        $f8, -0x6A54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A54);
    // 0x8005864C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80058650: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80058654: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x80058658: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8005865C: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80058660: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80058664: jal         0x80058054
    // 0x80058668: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_80058054(rdram, ctx);
        goto after_1;
    // 0x80058668: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8005866C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058670: lwc1        $f9, -0x6A50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A50);
    // 0x80058674: lwc1        $f8, -0x6A4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A4C);
    // 0x80058678: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8005867C: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x80058680: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80058684: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x80058688: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8005868C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80058690: jal         0x80058458
    // 0x80058694: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    func_80058458(rdram, ctx);
        goto after_2;
    // 0x80058694: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    after_2:
    // 0x80058698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005869C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800586A0: jr          $ra
    // 0x800586A4: nop

    return;
    // 0x800586A4: nop

;}
RECOMP_FUNC void func_800586A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800586A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800586AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800586B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800586B4: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x800586B8: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x800586BC: lwc1        $f14, 0x8C0($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X8C0);
    // 0x800586C0: jal         0x8027924C
    // 0x800586C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x800586C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800586C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800586CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800586D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800586D4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x800586D8: bc1f        L_800586F4
    if (!c1cs) {
        // 0x800586DC: nop
    
            goto L_800586F4;
    }
    // 0x800586DC: nop

    // 0x800586E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800586E4: lwc1        $f7, -0x6A48($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6A48);
    // 0x800586E8: lwc1        $f6, -0x6A44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6A44);
    // 0x800586EC: b           L_80058704
    // 0x800586F0: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
        goto L_80058704;
    // 0x800586F0: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
L_800586F4:
    // 0x800586F4: lwc1        $f9, -0x6A40($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A40);
    // 0x800586F8: lwc1        $f8, -0x6A3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A3C);
    // 0x800586FC: nop

    // 0x80058700: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_80058704:
    // 0x80058704: jal         0x800580AC
    // 0x80058708: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_800580AC(rdram, ctx);
        goto after_1;
    // 0x80058708: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x8005870C: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80058710: lwc1        $f10, 0x7C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x80058714: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80058718: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005871C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80058720: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80058724: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80058728: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x8005872C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80058730: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80058734: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80058738: lwc1        $f10, 0x10($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8005873C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80058740: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80058744: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80058748: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8005874C: jal         0x8007FA40
    // 0x80058750: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80058750: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80058754: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80058758: jal         0x80058054
    // 0x8005875C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80058054(rdram, ctx);
        goto after_3;
    // 0x8005875C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_3:
    // 0x80058760: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80058764: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80058768: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8005876C: jal         0x80058458
    // 0x80058770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80058458(rdram, ctx);
        goto after_4;
    // 0x80058770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80058774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80058778: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005877C: jr          $ra
    // 0x80058780: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80058780: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80058784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80058788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005878C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80058790: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80058794: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80058798: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8005879C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800587A0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x800587A4: bc1f        L_800587BC
    if (!c1cs) {
        // 0x800587A8: nop
    
            goto L_800587BC;
    }
    // 0x800587A8: nop

    // 0x800587AC: lwc1        $f9, -0x6A38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A38);
    // 0x800587B0: lwc1        $f8, -0x6A34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A34);
    // 0x800587B4: b           L_800587CC
    // 0x800587B8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
        goto L_800587CC;
    // 0x800587B8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
L_800587BC:
    // 0x800587BC: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x800587C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800587C4: nop

    // 0x800587C8: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
L_800587CC:
    // 0x800587CC: jal         0x800580AC
    // 0x800587D0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_800580AC(rdram, ctx);
        goto after_0;
    // 0x800587D0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x800587D4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800587D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800587DC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x800587E0: jal         0x80058120
    // 0x800587E4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_80058120(rdram, ctx);
        goto after_1;
    // 0x800587E4: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x800587E8: lui         $at, 0x400C
    ctx->r1 = S32(0X400C << 16);
    // 0x800587EC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800587F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800587F4: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x800587F8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800587FC: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80058800: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80058804: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80058808: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8005880C: lui         $a2, 0x3F06
    ctx->r6 = S32(0X3F06 << 16);
    // 0x80058810: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80058814: jal         0x80058458
    // 0x80058818: ori         $a2, $a2, 0xA92
    ctx->r6 = ctx->r6 | 0XA92;
    func_80058458(rdram, ctx);
        goto after_2;
    // 0x80058818: ori         $a2, $a2, 0xA92
    ctx->r6 = ctx->r6 | 0XA92;
    after_2:
    // 0x8005881C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80058824: jr          $ra
    // 0x80058828: nop

    return;
    // 0x80058828: nop

;}
RECOMP_FUNC void func_8005882C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005882C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80058830: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80058834: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80058838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005883C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80058840: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058844: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80058848: lwc1        $f9, -0x6A30($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A30);
    // 0x8005884C: lwc1        $f8, -0x6A2C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A2C);
    // 0x80058850: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80058854: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80058858: jal         0x803F0164
    // 0x8005885C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    LOOKUP_FUNC(0x803F0164)(rdram, ctx);
        goto after_0;
    // 0x8005885C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80058860: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80058864: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80058868: lwc1        $f16, 0x7C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x8005886C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80058870: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80058874: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80058878: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8005887C: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80058880: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80058884: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x80058888: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x8005888C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80058890: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80058894: lwc1        $f10, 0x50($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X50);
    // 0x80058898: lwc1        $f16, 0x10($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X10);
    // 0x8005889C: nop

    // 0x800588A0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800588A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800588A8: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x800588AC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800588B0: jal         0x80058054
    // 0x800588B4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80058054(rdram, ctx);
        goto after_1;
    // 0x800588B4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800588B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800588BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800588C0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x800588C4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800588C8: jal         0x80058458
    // 0x800588CC: nop

    func_80058458(rdram, ctx);
        goto after_2;
    // 0x800588CC: nop

    after_2:
    // 0x800588D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800588D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800588D8: jr          $ra
    // 0x800588DC: nop

    return;
    // 0x800588DC: nop

;}
RECOMP_FUNC void func_800588E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800588E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800588E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800588E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800588EC: jal         0x800580AC
    // 0x800588F0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_800580AC(rdram, ctx);
        goto after_0;
    // 0x800588F0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x800588F4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800588F8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800588FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058900: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80058904: lwc1        $f9, -0x6A28($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A28);
    // 0x80058908: lwc1        $f8, -0x6A24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6A24);
    // 0x8005890C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80058910: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80058914: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80058918: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x8005891C: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x80058920: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80058924: jal         0x80058120
    // 0x80058928: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_80058120(rdram, ctx);
        goto after_1;
    // 0x80058928: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8005892C: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x80058930: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80058934: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80058938: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8005893C: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x80058940: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x80058944: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x80058948: jal         0x800580AC
    // 0x8005894C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_800580AC(rdram, ctx);
        goto after_2;
    // 0x8005894C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80058950: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80058954: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80058958: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8005895C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80058960: jal         0x80058458
    // 0x80058964: nop

    func_80058458(rdram, ctx);
        goto after_3;
    // 0x80058964: nop

    after_3:
    // 0x80058968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005896C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80058970: jr          $ra
    // 0x80058974: nop

    return;
    // 0x80058974: nop

;}
RECOMP_FUNC void func_80058978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005897C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058980: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x80058984: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80058988: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8005898C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80058990: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80058994: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80058998: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8005899C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800589A0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x800589A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800589A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800589AC: jal         0x80058120
    // 0x800589B0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_80058120(rdram, ctx);
        goto after_0;
    // 0x800589B0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800589B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800589B8: nop

    // 0x800589BC: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x800589C0: nop

    // 0x800589C4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x800589C8: jal         0x80053CA0
    // 0x800589CC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x800589CC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800589D0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800589D4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x800589D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800589DC: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x800589E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800589E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800589E8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800589EC: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800589F0: jal         0x80052FF0
    // 0x800589F4: nop

    func_80052FF0(rdram, ctx);
        goto after_2;
    // 0x800589F4: nop

    after_2:
    // 0x800589F8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800589FC: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80058A00: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80058A04: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80058A08: sb          $t8, 0xBC($t9)
    MEM_B(0XBC, ctx->r25) = ctx->r24;
    // 0x80058A0C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80058A10: nop

    // 0x80058A14: sb          $zero, 0xBD($t0)
    MEM_B(0XBD, ctx->r8) = 0;
    // 0x80058A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058A1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80058A20: jr          $ra
    // 0x80058A24: nop

    return;
    // 0x80058A24: nop

;}
RECOMP_FUNC void func_80058A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058A28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80058A2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80058A30: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80058A34: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x80058A38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80058A3C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80058A40: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x80058A44: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80058A48: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x80058A4C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80058A50: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80058A54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80058A58: jal         0x8004EE18
    // 0x80058A5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8004EE18(rdram, ctx);
        goto after_0;
    // 0x80058A5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80058A60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058A64: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80058A68: lwc1        $f3, -0x6A20($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X6A20);
    // 0x80058A6C: lwc1        $f2, -0x6A1C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6A1C);
    // 0x80058A70: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80058A74: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x80058A78: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80058A7C: nop

    // 0x80058A80: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80058A84: nop

    // 0x80058A88: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80058A8C: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x80058A90: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80058A94: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x80058A98: lwc1        $f18, 0x74($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80058A9C: nop

    // 0x80058AA0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80058AA4: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80058AA8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80058AAC: jal         0x80053CA0
    // 0x80058AB0: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    func_80053CA0(rdram, ctx);
        goto after_1;
    // 0x80058AB0: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    after_1:
    // 0x80058AB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80058AB8: jal         0x80052F98
    // 0x80058ABC: nop

    func_80052F98(rdram, ctx);
        goto after_2;
    // 0x80058ABC: nop

    after_2:
    // 0x80058AC0: jal         0x800540CC
    // 0x80058AC4: nop

    func_800540CC(rdram, ctx);
        goto after_3;
    // 0x80058AC4: nop

    after_3:
    // 0x80058AC8: jal         0x80059898
    // 0x80058ACC: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_80059898(rdram, ctx);
        goto after_4;
    // 0x80058ACC: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_4:
    // 0x80058AD0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80058AD4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80058AD8: jal         0x80059898
    // 0x80058ADC: sh          $v0, 0x66($t7)
    MEM_H(0X66, ctx->r15) = ctx->r2;
    func_80059898(rdram, ctx);
        goto after_5;
    // 0x80058ADC: sh          $v0, 0x66($t7)
    MEM_H(0X66, ctx->r15) = ctx->r2;
    after_5:
    // 0x80058AE0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80058AE4: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80058AE8: sh          $v0, 0x68($t8)
    MEM_H(0X68, ctx->r24) = ctx->r2;
    // 0x80058AEC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80058AF0: nop

    // 0x80058AF4: sb          $t9, 0xBC($t0)
    MEM_B(0XBC, ctx->r8) = ctx->r25;
    // 0x80058AF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80058AFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80058B00: jr          $ra
    // 0x80058B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80058B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80058B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058B18: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80058B1C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80058B20: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80058B24: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80058B28: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80058B2C: lh          $t6, 0x8($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X8);
    // 0x80058B30: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80058B34: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80058B38: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x80058B3C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80058B40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80058B44: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80058B48: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80058B4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80058B50: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80058B54: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80058B58: add.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80058B5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058B60: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80058B64: nop

    // 0x80058B68: bc1f        L_80058B74
    if (!c1cs) {
        // 0x80058B6C: nop
    
            goto L_80058B74;
    }
    // 0x80058B6C: nop

    // 0x80058B70: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80058B74:
    // 0x80058B74: lwc1        $f19, -0x6A18($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6A18);
    // 0x80058B78: lwc1        $f18, -0x6A14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6A14);
    // 0x80058B7C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80058B80: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80058B84: jal         0x8007FA40
    // 0x80058B88: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80058B88: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x80058B8C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80058B90: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80058B94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80058B98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80058B9C: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80058BA0: lh          $t8, 0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8);
    // 0x80058BA4: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80058BA8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80058BAC: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80058BB0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80058BB4: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x80058BB8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80058BBC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80058BC0: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x80058BC4: jal         0x800542BC
    // 0x80058BC8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800542BC(rdram, ctx);
        goto after_1;
    // 0x80058BC8: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_1:
    // 0x80058BCC: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x80058BD0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80058BD4: lwc1        $f6, 0x8C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8C);
    // 0x80058BD8: nop

    // 0x80058BDC: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80058BE0: jal         0x80081040
    // 0x80058BE4: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x80058BE4: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x80058BE8: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x80058BEC: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80058BF0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80058BF4: lwc1        $f4, 0x4C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4C);
    // 0x80058BF8: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80058BFC: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80058C00: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80058C04: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80058C08: jal         0x80080E80
    // 0x80058C0C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x80058C0C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80058C10: lh          $t2, 0x4($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X4);
    // 0x80058C14: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80058C18: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80058C1C: lwc1        $f18, 0x44($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80058C20: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80058C24: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80058C28: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80058C2C: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80058C30: addiu       $t4, $sp, 0x48
    ctx->r12 = ADD32(ctx->r29, 0X48);
    // 0x80058C34: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80058C38: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80058C3C: add.s       $f2, $f10, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80058C40: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80058C44: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80058C48: jal         0x80272B1C
    // 0x80058C4C: nop

    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_4;
    // 0x80058C4C: nop

    after_4:
    // 0x80058C50: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80058C54: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80058C58: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80058C5C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80058C60: jal         0x80053CA0
    // 0x80058C64: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_80053CA0(rdram, ctx);
        goto after_5;
    // 0x80058C64: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80058C68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058C6C: lwc1        $f16, -0x6A10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6A10);
    // 0x80058C70: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80058C74: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80058C78: swc1        $f16, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->f16.u32l;
    // 0x80058C7C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80058C80: nop

    // 0x80058C84: lhu         $t6, 0xC0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XC0);
    // 0x80058C88: nop

    // 0x80058C8C: ori         $t7, $t6, 0x800
    ctx->r15 = ctx->r14 | 0X800;
    // 0x80058C90: sh          $t7, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r15;
    // 0x80058C94: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80058C98: nop

    // 0x80058C9C: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
    // 0x80058CA0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80058CA4: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80058CA8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80058CAC: jal         0x80052FF0
    // 0x80058CB0: nop

    func_80052FF0(rdram, ctx);
        goto after_6;
    // 0x80058CB0: nop

    after_6:
    // 0x80058CB4: jal         0x800540CC
    // 0x80058CB8: nop

    func_800540CC(rdram, ctx);
        goto after_7;
    // 0x80058CB8: nop

    after_7:
    // 0x80058CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80058CC0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80058CC4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80058CC8: jr          $ra
    // 0x80058CCC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80058CCC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80058CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80058CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058CD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80058CDC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80058CE0: jal         0x80053CA0
    // 0x80058CE4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80053CA0(rdram, ctx);
        goto after_0;
    // 0x80058CE4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x80058CE8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80058CEC: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x80058CF0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80058CF4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80058CF8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80058CFC: swc1        $f4, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f4.u32l;
    // 0x80058D00: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80058D04: nop

    // 0x80058D08: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
    // 0x80058D0C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80058D10: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80058D14: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80058D18: jal         0x800530D4
    // 0x80058D1C: nop

    func_800530D4(rdram, ctx);
        goto after_1;
    // 0x80058D1C: nop

    after_1:
    // 0x80058D20: jal         0x800540CC
    // 0x80058D24: nop

    func_800540CC(rdram, ctx);
        goto after_2;
    // 0x80058D24: nop

    after_2:
    // 0x80058D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80058D30: jr          $ra
    // 0x80058D34: nop

    return;
    // 0x80058D34: nop

;}
RECOMP_FUNC void func_80058D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058D38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80058D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058D40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80058D44: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80058D48: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80058D4C: lwc1        $f12, 0x7C($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x80058D50: jal         0x80081040
    // 0x80058D54: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80058D54: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80058D58: lhu         $t6, 0x32($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X32);
    // 0x80058D5C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80058D60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80058D64: bgez        $t6, L_80058D7C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80058D68: cvt.s.w     $f14, $f4
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80058D7C;
    }
    // 0x80058D68: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80058D6C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80058D70: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80058D74: nop

    // 0x80058D78: add.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f6.fl;
L_80058D7C:
    // 0x80058D7C: lwc1        $f8, 0x50($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X50);
    // 0x80058D80: lwc1        $f18, 0x4C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x80058D84: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80058D88: nop

    // 0x80058D8C: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80058D90: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80058D94: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80058D98: lwc1        $f12, 0x7C($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x80058D9C: jal         0x80080E80
    // 0x80058DA0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80058DA0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x80058DA4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80058DA8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80058DAC: lwc1        $f6, 0x50($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X50);
    // 0x80058DB0: lwc1        $f16, 0x44($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X44);
    // 0x80058DB4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80058DB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058DBC: lwc1        $f12, -0x6A0C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6A0C);
    // 0x80058DC0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80058DC4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80058DC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80058DCC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80058DD0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058DD4: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80058DD8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80058DDC: nop

    // 0x80058DE0: bc1f        L_80058DEC
    if (!c1cs) {
        // 0x80058DE4: nop
    
            goto L_80058DEC;
    }
    // 0x80058DE4: nop

    // 0x80058DE8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_80058DEC:
    // 0x80058DEC: lwc1        $f0, -0x6A08($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X6A08);
    // 0x80058DF0: nop

    // 0x80058DF4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80058DF8: nop

    // 0x80058DFC: bc1f        L_80058E08
    if (!c1cs) {
        // 0x80058E00: nop
    
            goto L_80058E08;
    }
    // 0x80058E00: nop

    // 0x80058E04: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80058E08:
    // 0x80058E08: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80058E0C: jal         0x80272B98
    // 0x80058E10: nop

    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x80058E10: nop

    after_2:
    // 0x80058E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80058E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80058E1C: jr          $ra
    // 0x80058E20: nop

    return;
    // 0x80058E20: nop

;}
RECOMP_FUNC void func_80058E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058E24: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80058E28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80058E2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80058E30: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80058E34: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80058E38: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x80058E3C: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80058E40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80058E44: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80058E48: bne         $t7, $zero, L_800591FC
    if (ctx->r15 != 0) {
        // 0x80058E4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800591FC;
    }
    // 0x80058E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80058E50: lhu         $t8, 0x18($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X18);
    // 0x80058E54: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80058E58: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x80058E5C: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    // 0x80058E60: lh          $t1, 0xA6($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XA6);
    // 0x80058E64: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80058E68: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80058E6C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80058E70: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80058E74: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80058E78: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80058E7C: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x80058E80: lw          $a1, 0x398($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X398);
    // 0x80058E84: jal         0x80058D38
    // 0x80058E88: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    func_80058D38(rdram, ctx);
        goto after_0;
    // 0x80058E88: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    after_0:
    // 0x80058E8C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x80058E90: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x80058E94: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80058E98: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058E9C: lhu         $t3, 0xC0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC0);
    // 0x80058EA0: nop

    // 0x80058EA4: andi        $t4, $t3, 0xFE7F
    ctx->r12 = ctx->r11 & 0XFE7F;
    // 0x80058EA8: sh          $t4, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r12;
    // 0x80058EAC: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x80058EB0: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x80058EB4: andi        $t6, $t5, 0xF7FF
    ctx->r14 = ctx->r13 & 0XF7FF;
    // 0x80058EB8: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x80058EBC: lhu         $t7, 0x95C($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X95C);
    // 0x80058EC0: nop

    // 0x80058EC4: andi        $t8, $t7, 0xF418
    ctx->r24 = ctx->r15 & 0XF418;
    // 0x80058EC8: sh          $t8, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r24;
    // 0x80058ECC: lhu         $a0, 0xAE($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XAE);
    // 0x80058ED0: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80058ED4: andi        $t9, $a0, 0x4
    ctx->r25 = ctx->r4 & 0X4;
    // 0x80058ED8: beq         $t9, $zero, L_8005900C
    if (ctx->r25 == 0) {
        // 0x80058EDC: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_8005900C;
    }
    // 0x80058EDC: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x80058EE0: lwc1        $f9, -0x6A00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6A00);
    // 0x80058EE4: lwc1        $f8, -0x69FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X69FC);
    // 0x80058EE8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80058EEC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80058EF0: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80058EF4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80058EF8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80058EFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80058F00: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80058F04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80058F08: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    // 0x80058F0C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80058F10: nop

    // 0x80058F14: bc1f        L_80058F20
    if (!c1cs) {
        // 0x80058F18: nop
    
            goto L_80058F20;
    }
    // 0x80058F18: nop

    // 0x80058F1C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_80058F20:
    // 0x80058F20: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80058F24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80058F28: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80058F2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058F30: div.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80058F34: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80058F38: lwc1        $f17, -0x69F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X69F8);
    // 0x80058F3C: lwc1        $f16, -0x69F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X69F4);
    // 0x80058F40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80058F44: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80058F48: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x80058F4C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80058F50: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    // 0x80058F54: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80058F58: jal         0x800542BC
    // 0x80058F5C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_800542BC(rdram, ctx);
        goto after_1;
    // 0x80058F5C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_1:
    // 0x80058F60: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80058F64: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80058F68: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058F6C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80058F70: lwc1        $f11, -0x69F0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X69F0);
    // 0x80058F74: lwc1        $f10, -0x69EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X69EC);
    // 0x80058F78: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80058F7C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80058F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80058F84: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80058F88: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80058F8C: nop

    // 0x80058F90: bc1f        L_80058FA0
    if (!c1cs) {
        // 0x80058F94: nop
    
            goto L_80058FA0;
    }
    // 0x80058F94: nop

    // 0x80058F98: lwc1        $f0, -0x69E8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X69E8);
    // 0x80058F9C: nop

L_80058FA0:
    // 0x80058FA0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x80058FA4: jal         0x80053CA0
    // 0x80058FA8: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    func_80053CA0(rdram, ctx);
        goto after_2;
    // 0x80058FA8: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x80058FAC: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80058FB0: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80058FB4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80058FB8: sh          $t1, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = ctx->r9;
    // 0x80058FBC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x80058FC0: jal         0x802793B0
    // 0x80058FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x802793B0)(rdram, ctx);
        goto after_3;
    // 0x80058FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80058FC8: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80058FCC: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80058FD0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80058FD4: jal         0x80052FF0
    // 0x80058FD8: nop

    func_80052FF0(rdram, ctx);
        goto after_4;
    // 0x80058FD8: nop

    after_4:
    // 0x80058FDC: jal         0x800540CC
    // 0x80058FE0: nop

    func_800540CC(rdram, ctx);
        goto after_5;
    // 0x80058FE0: nop

    after_5:
    // 0x80058FE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80058FE8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80058FEC: lhu         $t3, 0x95C($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X95C);
    // 0x80058FF0: lhu         $t5, 0x13F0($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X13F0);
    // 0x80058FF4: ori         $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 | 0X1000;
    // 0x80058FF8: ori         $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 | 0X1000;
    // 0x80058FFC: sh          $t4, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r12;
    // 0x80059000: b           L_800591C8
    // 0x80059004: sh          $t6, 0x13F0($v0)
    MEM_H(0X13F0, ctx->r2) = ctx->r14;
        goto L_800591C8;
    // 0x80059004: sh          $t6, 0x13F0($v0)
    MEM_H(0X13F0, ctx->r2) = ctx->r14;
    // 0x80059008: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_8005900C:
    // 0x8005900C: beq         $t7, $zero, L_8005909C
    if (ctx->r15 == 0) {
        // 0x80059010: nop
    
            goto L_8005909C;
    }
    // 0x80059010: nop

    // 0x80059014: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x80059018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005901C: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x80059020: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x80059024: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x80059028: jal         0x802793B0
    // 0x8005902C: nop

    LOOKUP_FUNC(0x802793B0)(rdram, ctx);
        goto after_6;
    // 0x8005902C: nop

    after_6:
    // 0x80059030: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80059034: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80059038: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x8005903C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80059040: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x80059044: lui         $a3, 0x3C88
    ctx->r7 = S32(0X3C88 << 16);
    // 0x80059048: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x8005904C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80059050: ori         $a3, $a3, 0x8889
    ctx->r7 = ctx->r7 | 0X8889;
    // 0x80059054: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80059058: jal         0x8005743C
    // 0x8005905C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    func_8005743C(rdram, ctx);
        goto after_7;
    // 0x8005905C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80059060: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80059064: lh          $a2, 0xAA($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XAA);
    // 0x80059068: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8005906C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80059070: jal         0x800575CC
    // 0x80059074: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800575CC(rdram, ctx);
        goto after_8;
    // 0x80059074: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x80059078: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8005907C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80059080: lhu         $t2, 0x95C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X95C);
    // 0x80059084: lhu         $t4, 0x13F0($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X13F0);
    // 0x80059088: ori         $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 | 0X1000;
    // 0x8005908C: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x80059090: sh          $t3, 0x95C($v0)
    MEM_H(0X95C, ctx->r2) = ctx->r11;
    // 0x80059094: b           L_800591C8
    // 0x80059098: sh          $t5, 0x13F0($v0)
    MEM_H(0X13F0, ctx->r2) = ctx->r13;
        goto L_800591C8;
    // 0x80059098: sh          $t5, 0x13F0($v0)
    MEM_H(0X13F0, ctx->r2) = ctx->r13;
L_8005909C:
    // 0x8005909C: jal         0x80059898
    // 0x800590A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80059898(rdram, ctx);
        goto after_9;
    // 0x800590A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x800590A4: lh          $t6, 0xAA($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XAA);
    // 0x800590A8: nop

    // 0x800590AC: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800590B0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x800590B4: bgez        $t7, L_800590CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800590B8: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800590CC;
    }
    // 0x800590B8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800590BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800590C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800590C4: nop

    // 0x800590C8: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_800590CC:
    // 0x800590CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800590D0: lwc1        $f11, -0x69E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X69E0);
    // 0x800590D4: lwc1        $f10, -0x69DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X69DC);
    // 0x800590D8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x800590DC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800590E0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800590E4: lwc1        $f19, -0x69D8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X69D8);
    // 0x800590E8: lwc1        $f18, -0x69D4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X69D4);
    // 0x800590EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800590F0: add.d       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f16.d + ctx->f18.d;
    // 0x800590F4: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x800590F8: jal         0x80053CA0
    // 0x800590FC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    func_80053CA0(rdram, ctx);
        goto after_10;
    // 0x800590FC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80059100: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80059104: lw          $t9, 0x3B20($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3B20);
    // 0x80059108: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8005910C: sh          $t8, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r24;
    // 0x80059110: lwc1        $f2, 0x8C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80059114: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80059118: jal         0x80059898
    // 0x8005911C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    func_80059898(rdram, ctx);
        goto after_11;
    // 0x8005911C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x80059120: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80059124: lwc1        $f2, 0x98($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80059128: bgez        $v0, L_80059140
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005912C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80059140;
    }
    // 0x8005912C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80059130: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80059134: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80059138: nop

    // 0x8005913C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80059140:
    // 0x80059140: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059144: lwc1        $f7, -0x69D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X69D0);
    // 0x80059148: lwc1        $f6, -0x69CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X69CC);
    // 0x8005914C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059150: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80059154: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x80059158: lwc1        $f17, -0x69C8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X69C8);
    // 0x8005915C: lwc1        $f16, -0x69C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X69C4);
    // 0x80059160: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x80059164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80059168: sub.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f8.d - ctx->f16.d;
    // 0x8005916C: add.d       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f4.d + ctx->f10.d;
    // 0x80059170: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x80059174: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80059178: jal         0x802793B0
    // 0x8005917C: nop

    LOOKUP_FUNC(0x802793B0)(rdram, ctx);
        goto after_12;
    // 0x8005917C: nop

    after_12:
    // 0x80059180: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059184: lwc1        $f14, -0x69C0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X69C0);
    // 0x80059188: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8005918C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80059190: jal         0x80052FF0
    // 0x80059194: nop

    func_80052FF0(rdram, ctx);
        goto after_13;
    // 0x80059194: nop

    after_13:
    // 0x80059198: jal         0x800540CC
    // 0x8005919C: nop

    func_800540CC(rdram, ctx);
        goto after_14;
    // 0x8005919C: nop

    after_14:
    // 0x800591A0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800591A4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x800591A8: lw          $a1, 0x1C38($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C38);
    // 0x800591AC: lw          $a2, 0x1C30($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X1C30);
    // 0x800591B0: jal         0x8027200C
    // 0x800591B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_15;
    // 0x800591B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x800591B8: bne         $v0, $zero, L_800591C8
    if (ctx->r2 != 0) {
        // 0x800591BC: nop
    
            goto L_800591C8;
    }
    // 0x800591BC: nop

    // 0x800591C0: jal         0x80076F10
    // 0x800591C4: nop

    func_80076F10(rdram, ctx);
        goto after_16;
    // 0x800591C4: nop

    after_16:
L_800591C8:
    // 0x800591C8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x800591CC: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x800591D0: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x800591D4: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x800591D8: sb          $t1, 0xBC($t2)
    MEM_B(0XBC, ctx->r10) = ctx->r9;
    // 0x800591DC: lw          $t4, 0x3B20($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3B20);
    // 0x800591E0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x800591E4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800591E8: sb          $t3, 0xBD($t4)
    MEM_B(0XBD, ctx->r12) = ctx->r11;
    // 0x800591EC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x800591F0: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x800591F4: sh          $t5, 0x66($t6)
    MEM_H(0X66, ctx->r14) = ctx->r13;
    // 0x800591F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800591FC:
    // 0x800591FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80059200: jr          $ra
    // 0x80059204: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80059204: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80059208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059208: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x8005920C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80059210: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80059214: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80059218: sh          $t6, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r14;
    // 0x8005921C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80059220: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80059224: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80059228: swc1        $f0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f0.u32l;
    // 0x8005922C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80059230: nop

    // 0x80059234: swc1        $f0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f0.u32l;
    // 0x80059238: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8005923C: nop

    // 0x80059240: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x80059244: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80059248: nop

    // 0x8005924C: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80059250: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80059254: nop

    // 0x80059258: lhu         $t2, 0xC2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XC2);
    // 0x8005925C: nop

    // 0x80059260: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x80059264: sh          $t3, 0xC2($v0)
    MEM_H(0XC2, ctx->r2) = ctx->r11;
    // 0x80059268: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8005926C: nop

    // 0x80059270: lh          $t4, 0x66($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X66);
    // 0x80059274: nop

    // 0x80059278: div         $zero, $t4, $a0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r4)));
    // 0x8005927C: bne         $a0, $zero, L_80059288
    if (ctx->r4 != 0) {
        // 0x80059280: nop
    
            goto L_80059288;
    }
    // 0x80059280: nop

    // 0x80059284: break       7
    do_break(2147848836);
L_80059288:
    // 0x80059288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005928C: bne         $a0, $at, L_800592A0
    if (ctx->r4 != ctx->r1) {
        // 0x80059290: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800592A0;
    }
    // 0x80059290: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80059294: bne         $t4, $at, L_800592A0
    if (ctx->r12 != ctx->r1) {
        // 0x80059298: nop
    
            goto L_800592A0;
    }
    // 0x80059298: nop

    // 0x8005929C: break       6
    do_break(2147848860);
L_800592A0:
    // 0x800592A0: mflo        $t5
    ctx->r13 = lo;
    // 0x800592A4: sh          $t5, 0x66($v0)
    MEM_H(0X66, ctx->r2) = ctx->r13;
    // 0x800592A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800592AC: nop

    // 0x800592B0: lh          $t6, 0x68($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X68);
    // 0x800592B4: nop

    // 0x800592B8: div         $zero, $t6, $a0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r4)));
    // 0x800592BC: bne         $a0, $zero, L_800592C8
    if (ctx->r4 != 0) {
        // 0x800592C0: nop
    
            goto L_800592C8;
    }
    // 0x800592C0: nop

    // 0x800592C4: break       7
    do_break(2147848900);
L_800592C8:
    // 0x800592C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800592CC: bne         $a0, $at, L_800592E0
    if (ctx->r4 != ctx->r1) {
        // 0x800592D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800592E0;
    }
    // 0x800592D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800592D4: bne         $t6, $at, L_800592E0
    if (ctx->r14 != ctx->r1) {
        // 0x800592D8: nop
    
            goto L_800592E0;
    }
    // 0x800592D8: nop

    // 0x800592DC: break       6
    do_break(2147848924);
L_800592E0:
    // 0x800592E0: mflo        $t7
    ctx->r15 = lo;
    // 0x800592E4: sh          $t7, 0x68($v0)
    MEM_H(0X68, ctx->r2) = ctx->r15;
    // 0x800592E8: jr          $ra
    // 0x800592EC: nop

    return;
    // 0x800592EC: nop

;}
RECOMP_FUNC void func_800592F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800592F0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800592F4: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x800592F8: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x800592FC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80059300: andi        $t7, $t6, 0xDDFF
    ctx->r15 = ctx->r14 & 0XDDFF;
    // 0x80059304: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80059308: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005930C: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x80059310: sb          $zero, 0x3611($at)
    MEM_B(0X3611, ctx->r1) = 0;
    // 0x80059314: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80059318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005931C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059320: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80059324: nop

    // 0x80059328: swc1        $f4, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f4.u32l;
    // 0x8005932C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80059330: nop

    // 0x80059334: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80059338: nop

    // 0x8005933C: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x80059340: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80059344: nop

    // 0x80059348: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8005934C: jal         0x8004E5B4
    // 0x80059350: swc1        $f8, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f8.u32l;
    func_8004E5B4(rdram, ctx);
        goto after_0;
    // 0x80059350: swc1        $f8, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x80059354: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059358: lw          $a0, 0x3B20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B20);
    // 0x8005935C: nop

    // 0x80059360: lw          $t8, 0x88($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X88);
    // 0x80059364: nop

    // 0x80059368: bne         $t8, $zero, L_800593AC
    if (ctx->r24 != 0) {
        // 0x8005936C: nop
    
            goto L_800593AC;
    }
    // 0x8005936C: nop

    // 0x80059370: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80059374: nop

    // 0x80059378: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x8005937C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059380: lw          $a0, 0x3B20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B20);
    // 0x80059384: nop

    // 0x80059388: lhu         $t9, 0x6A($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6A);
    // 0x8005938C: nop

    // 0x80059390: bne         $t9, $zero, L_800593AC
    if (ctx->r25 != 0) {
        // 0x80059394: nop
    
            goto L_800593AC;
    }
    // 0x80059394: nop

    // 0x80059398: jal         0x80278AD4
    // 0x8005939C: nop

    LOOKUP_FUNC(0x80278AD4)(rdram, ctx);
        goto after_1;
    // 0x8005939C: nop

    after_1:
    // 0x800593A0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800593A4: lw          $a0, 0x3B20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B20);
    // 0x800593A8: nop

L_800593AC:
    // 0x800593AC: lhu         $v0, 0xC4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC4);
    // 0x800593B0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800593B4: beq         $v0, $zero, L_800593C4
    if (ctx->r2 == 0) {
        // 0x800593B8: addiu       $v1, $v1, 0x3622
        ctx->r3 = ADD32(ctx->r3, 0X3622);
            goto L_800593C4;
    }
    // 0x800593B8: addiu       $v1, $v1, 0x3622
    ctx->r3 = ADD32(ctx->r3, 0X3622);
    // 0x800593BC: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x800593C0: sh          $t0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r8;
L_800593C4:
    // 0x800593C4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800593C8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800593CC: beq         $v0, $zero, L_800593DC
    if (ctx->r2 == 0) {
        // 0x800593D0: addiu       $a0, $a0, 0x362C
        ctx->r4 = ADD32(ctx->r4, 0X362C);
            goto L_800593DC;
    }
    // 0x800593D0: addiu       $a0, $a0, 0x362C
    ctx->r4 = ADD32(ctx->r4, 0X362C);
    // 0x800593D4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x800593D8: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
L_800593DC:
    // 0x800593DC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800593E0: addiu       $v1, $v1, 0x3624
    ctx->r3 = ADD32(ctx->r3, 0X3624);
    // 0x800593E4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800593E8: nop

    // 0x800593EC: beq         $v0, $zero, L_800593F8
    if (ctx->r2 == 0) {
        // 0x800593F0: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_800593F8;
    }
    // 0x800593F0: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x800593F4: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
L_800593F8:
    // 0x800593F8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800593FC: addiu       $v1, $v1, 0x362A
    ctx->r3 = ADD32(ctx->r3, 0X362A);
    // 0x80059400: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80059404: nop

    // 0x80059408: beq         $v0, $zero, L_80059414
    if (ctx->r2 == 0) {
        // 0x8005940C: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_80059414;
    }
    // 0x8005940C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80059410: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
L_80059414:
    // 0x80059414: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80059418: addiu       $v1, $v1, 0x362E
    ctx->r3 = ADD32(ctx->r3, 0X362E);
    // 0x8005941C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80059420: nop

    // 0x80059424: beq         $v0, $zero, L_80059430
    if (ctx->r2 == 0) {
        // 0x80059428: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_80059430;
    }
    // 0x80059428: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8005942C: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
L_80059430:
    // 0x80059430: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80059434: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80059438: beq         $v1, $zero, L_80059490
    if (ctx->r3 == 0) {
        // 0x8005943C: addiu       $v0, $v0, 0x3638
        ctx->r2 = ADD32(ctx->r2, 0X3638);
            goto L_80059490;
    }
    // 0x8005943C: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x80059440: addiu       $t5, $v1, -0x1
    ctx->r13 = ADD32(ctx->r3, -0X1);
    // 0x80059444: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80059448: jal         0x80081040
    // 0x8005944C: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x8005944C: sh          $t5, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r13;
    after_2:
    // 0x80059450: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80059454: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x80059458: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8005945C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80059460: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80059464: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80059468: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8005946C: jal         0x80080E80
    // 0x80059470: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    func_80080E80(rdram, ctx);
        goto after_3;
    // 0x80059470: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    after_3:
    // 0x80059474: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80059478: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x8005947C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80059480: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80059484: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80059488: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8005948C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
L_80059490:
    // 0x80059490: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80059494: addiu       $v1, $v1, 0x3674
    ctx->r3 = ADD32(ctx->r3, 0X3674);
    // 0x80059498: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005949C: nop

    // 0x800594A0: beq         $v0, $zero, L_800594AC
    if (ctx->r2 == 0) {
        // 0x800594A4: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_800594AC;
    }
    // 0x800594A4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x800594A8: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_800594AC:
    // 0x800594AC: jal         0x8027892C
    // 0x800594B0: nop

    LOOKUP_FUNC(0x8027892C)(rdram, ctx);
        goto after_4;
    // 0x800594B0: nop

    after_4:
    // 0x800594B4: jal         0x80052A8C
    // 0x800594B8: nop

    func_80052A8C(rdram, ctx);
        goto after_5;
    // 0x800594B8: nop

    after_5:
    // 0x800594BC: jal         0x80052CD8
    // 0x800594C0: nop

    func_80052CD8(rdram, ctx);
        goto after_6;
    // 0x800594C0: nop

    after_6:
    // 0x800594C4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800594C8: lw          $a0, 0x3B20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B20);
    // 0x800594CC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800594D0: lhu         $t7, 0xBE($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XBE);
    // 0x800594D4: nop

    // 0x800594D8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800594DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800594E0: lw          $t9, -0x54D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X54D8);
    // 0x800594E4: nop

    // 0x800594E8: jalr        $t9
    // 0x800594EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x800594EC: nop

    after_7:
    // 0x800594F0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800594F4: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x800594F8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800594FC: beq         $t0, $zero, L_80059528
    if (ctx->r8 == 0) {
        // 0x80059500: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80059528;
    }
    // 0x80059500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059504: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x80059508: nop

    // 0x8005950C: lw          $t2, 0x88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X88);
    // 0x80059510: nop

    // 0x80059514: bne         $t2, $zero, L_80059528
    if (ctx->r10 != 0) {
        // 0x80059518: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80059528;
    }
    // 0x80059518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005951C: jal         0x8004E180
    // 0x80059520: nop

    func_8004E180(rdram, ctx);
        goto after_8;
    // 0x80059520: nop

    after_8:
    // 0x80059524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80059528:
    // 0x80059528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005952C: jr          $ra
    // 0x80059530: nop

    return;
    // 0x80059530: nop

;}
RECOMP_FUNC void func_80059534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059534: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005953C: sh          $zero, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = 0;
    // 0x80059540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059544: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059548: jal         0x800557AC
    // 0x8005954C: sh          $zero, 0x3620($at)
    MEM_H(0X3620, ctx->r1) = 0;
    func_800557AC(rdram, ctx);
        goto after_0;
    // 0x8005954C: sh          $zero, 0x3620($at)
    MEM_H(0X3620, ctx->r1) = 0;
    after_0:
    // 0x80059550: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059554: sh          $zero, 0x3622($at)
    MEM_H(0X3622, ctx->r1) = 0;
    // 0x80059558: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005955C: sh          $zero, 0x3624($at)
    MEM_H(0X3624, ctx->r1) = 0;
    // 0x80059560: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059564: sh          $zero, 0x362A($at)
    MEM_H(0X362A, ctx->r1) = 0;
    // 0x80059568: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005956C: sh          $zero, 0x362C($at)
    MEM_H(0X362C, ctx->r1) = 0;
    // 0x80059570: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059574: sh          $zero, 0x362E($at)
    MEM_H(0X362E, ctx->r1) = 0;
    // 0x80059578: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005957C: sb          $zero, 0x3611($at)
    MEM_B(0X3611, ctx->r1) = 0;
    // 0x80059580: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059584: sw          $zero, 0x3680($at)
    MEM_W(0X3680, ctx->r1) = 0;
    // 0x80059588: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005958C: sw          $zero, 0x3684($at)
    MEM_W(0X3684, ctx->r1) = 0;
    // 0x80059590: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059598: sb          $zero, 0x3689($at)
    MEM_B(0X3689, ctx->r1) = 0;
    // 0x8005959C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800595A0: sh          $zero, 0x368A($at)
    MEM_H(0X368A, ctx->r1) = 0;
    // 0x800595A4: jr          $ra
    // 0x800595A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800595A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800595AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800595AC: jr          $ra
    // 0x800595B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800595B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800595B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800595B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800595B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800595BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800595C0: jal         0x80053238
    // 0x800595C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80053238(rdram, ctx);
        goto after_0;
    // 0x800595C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800595C8: jal         0x80053650
    // 0x800595CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80053650(rdram, ctx);
        goto after_1;
    // 0x800595CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800595D0: beq         $v0, $zero, L_800595FC
    if (ctx->r2 == 0) {
        // 0x800595D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800595FC;
    }
    // 0x800595D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800595D8: jal         0x80059898
    // 0x800595DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x800595DC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x800595E0: lhu         $t6, 0xBE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XBE);
    // 0x800595E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800595E8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800595EC: sh          $v0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r2;
    // 0x800595F0: sh          $t7, 0xBE($s0)
    MEM_H(0XBE, ctx->r16) = ctx->r15;
    // 0x800595F4: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x800595F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800595FC:
    // 0x800595FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80059600: jr          $ra
    // 0x80059604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80059604: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80059608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005960C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059610: jal         0x80053528
    // 0x80059614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80053528(rdram, ctx);
        goto after_0;
    // 0x80059614: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80059618: beq         $v0, $zero, L_80059630
    if (ctx->r2 == 0) {
        // 0x8005961C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80059630;
    }
    // 0x8005961C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80059620: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80059624: jal         0x800557AC
    // 0x80059628: nop

    func_800557AC(rdram, ctx);
        goto after_1;
    // 0x80059628: nop

    after_1:
    // 0x8005962C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_80059630:
    // 0x80059630: jal         0x80053398
    // 0x80059634: nop

    func_80053398(rdram, ctx);
        goto after_2;
    // 0x80059634: nop

    after_2:
    // 0x80059638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005963C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059640: jr          $ra
    // 0x80059644: nop

    return;
    // 0x80059644: nop

;}
RECOMP_FUNC void func_80059648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005964C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80059650: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80059654: jal         0x80053238
    // 0x80059658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80053238(rdram, ctx);
        goto after_0;
    // 0x80059658: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8005965C: jal         0x80053650
    // 0x80059660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80053650(rdram, ctx);
        goto after_1;
    // 0x80059660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80059664: beq         $v0, $zero, L_8005968C
    if (ctx->r2 == 0) {
        // 0x80059668: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005968C;
    }
    // 0x80059668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005966C: jal         0x80059898
    // 0x80059670: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80059898(rdram, ctx);
        goto after_2;
    // 0x80059670: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x80059674: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80059678: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8005967C: sh          $v0, 0xC6($s0)
    MEM_H(0XC6, ctx->r16) = ctx->r2;
    // 0x80059680: sh          $t6, 0xBE($s0)
    MEM_H(0XBE, ctx->r16) = ctx->r14;
    // 0x80059684: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x80059688: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005968C:
    // 0x8005968C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80059690: jr          $ra
    // 0x80059694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80059694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80059698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059698: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005969C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800596A0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800596A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800596A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800596AC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800596B0: addiu       $v0, $v0, -0x54EC
    ctx->r2 = ADD32(ctx->r2, -0X54EC);
    // 0x800596B4: bc1f        L_800596C8
    if (!c1cs) {
        // 0x800596B8: nop
    
            goto L_800596C8;
    }
    // 0x800596B8: nop

    // 0x800596BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800596C0: b           L_800596C8
    // 0x800596C4: addiu       $v0, $v0, -0x5500
    ctx->r2 = ADD32(ctx->r2, -0X5500);
        goto L_800596C8;
    // 0x800596C4: addiu       $v0, $v0, -0x5500
    ctx->r2 = ADD32(ctx->r2, -0X5500);
L_800596C8:
    // 0x800596C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800596CC: jal         0x80053238
    // 0x800596D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80053238(rdram, ctx);
        goto after_0;
    // 0x800596D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800596D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800596D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800596DC: lwc1        $f2, 0x18($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800596E0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800596E4: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x800596E8: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x800596EC: bc1f        L_80059800
    if (!c1cs) {
        // 0x800596F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80059800;
    }
    // 0x800596F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800596F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800596F8: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800596FC: nop

    // 0x80059700: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80059704: nop

    // 0x80059708: bc1f        L_80059800
    if (!c1cs) {
        // 0x8005970C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80059800;
    }
    // 0x8005970C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059710: lh          $t6, 0xE($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XE);
    // 0x80059714: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80059718: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8005971C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80059720: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80059724: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x80059728: nop

    // 0x8005972C: bc1f        L_800597F8
    if (!c1cs) {
        // 0x80059730: nop
    
            goto L_800597F8;
    }
    // 0x80059730: nop

    // 0x80059734: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x80059738: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x8005973C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80059740: nop

    // 0x80059744: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80059748: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8005974C: nop

    // 0x80059750: bc1f        L_800597F8
    if (!c1cs) {
        // 0x80059754: nop
    
            goto L_800597F8;
    }
    // 0x80059754: nop

    // 0x80059758: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8005975C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80059760: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80059764: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80059768: nop

    // 0x8005976C: bc1f        L_800597F8
    if (!c1cs) {
        // 0x80059770: nop
    
            goto L_800597F8;
    }
    // 0x80059770: nop

    // 0x80059774: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80059778: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x8005977C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x80059780: nop

    // 0x80059784: bc1f        L_800597F8
    if (!c1cs) {
        // 0x80059788: nop
    
            goto L_800597F8;
    }
    // 0x80059788: nop

    // 0x8005978C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80059790: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80059794: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80059798: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8005979C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800597A0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800597A4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800597A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800597AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800597B0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800597B4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800597B8: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x800597BC: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x800597C0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800597C4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800597C8: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x800597CC: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x800597D0: nop

    // 0x800597D4: bne         $a0, $t8, L_80059800
    if (ctx->r4 != ctx->r24) {
        // 0x800597D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80059800;
    }
    // 0x800597D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800597DC: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800597E0: lwc1        $f14, 0x18($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X18);
    // 0x800597E4: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x800597E8: jal         0x80052FF0
    // 0x800597EC: nop

    func_80052FF0(rdram, ctx);
        goto after_1;
    // 0x800597EC: nop

    after_1:
    // 0x800597F0: b           L_80059800
    // 0x800597F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80059800;
    // 0x800597F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800597F8:
    // 0x800597F8: sh          $t9, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r25;
    // 0x800597FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80059800:
    // 0x80059800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80059804: jr          $ra
    // 0x80059808: nop

    return;
    // 0x80059808: nop

    // 0x8005980C: nop

;}
RECOMP_FUNC void func_80059810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059810: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80059814: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80059818: addiu       $a2, $a2, 0x36C0
    ctx->r6 = ADD32(ctx->r6, 0X36C0);
    // 0x8005981C: addiu       $v1, $v1, 0x36A0
    ctx->r3 = ADD32(ctx->r3, 0X36A0);
    // 0x80059820: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80059824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80059828:
    // 0x80059828: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_8005982C:
    // 0x8005982C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80059830: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x80059834: sb          $zero, 0x2($a0)
    MEM_B(0X2, ctx->r4) = 0;
    // 0x80059838: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x8005983C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80059840: bne         $v0, $a1, L_8005982C
    if (ctx->r2 != ctx->r5) {
        // 0x80059844: sb          $zero, -0x4($a0)
        MEM_B(-0X4, ctx->r4) = 0;
            goto L_8005982C;
    }
    // 0x80059844: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x80059848: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8005984C: bne         $v1, $a2, L_80059828
    if (ctx->r3 != ctx->r6) {
        // 0x80059850: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80059828;
    }
    // 0x80059850: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80059854: jr          $ra
    // 0x80059858: nop

    return;
    // 0x80059858: nop

;}
RECOMP_FUNC void func_8005985C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005985C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80059860: jr          $ra
    // 0x80059864: sw          $a0, 0x36C4($at)
    MEM_W(0X36C4, ctx->r1) = ctx->r4;
    return;
    // 0x80059864: sw          $a0, 0x36C4($at)
    MEM_W(0X36C4, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80059868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059868: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005986C: addiu       $v1, $v1, 0x36C4
    ctx->r3 = ADD32(ctx->r3, 0X36C4);
    // 0x80059870: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80059874: lui         $at, 0x19
    ctx->r1 = S32(0X19 << 16);
    // 0x80059878: ori         $at, $at, 0x660D
    ctx->r1 = ctx->r1 | 0X660D;
    // 0x8005987C: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059880: lui         $at, 0x3C6E
    ctx->r1 = S32(0X3C6E << 16);
    // 0x80059884: ori         $at, $at, 0xF35F
    ctx->r1 = ctx->r1 | 0XF35F;
    // 0x80059888: mflo        $t7
    ctx->r15 = lo;
    // 0x8005988C: addu        $v0, $t7, $at
    ctx->r2 = ADD32(ctx->r15, ctx->r1);
    // 0x80059890: jr          $ra
    // 0x80059894: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    return;
    // 0x80059894: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_80059898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005989C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800598A0: jal         0x80059868
    // 0x800598A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80059868(rdram, ctx);
        goto after_0;
    // 0x800598A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800598A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800598AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800598B0: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x800598B4: bne         $t6, $zero, L_800598C0
    if (ctx->r14 != 0) {
        // 0x800598B8: nop
    
            goto L_800598C0;
    }
    // 0x800598B8: nop

    // 0x800598BC: break       7
    do_break(2147850428);
L_800598C0:
    // 0x800598C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800598C4: mfhi        $v0
    ctx->r2 = hi;
    // 0x800598C8: jr          $ra
    // 0x800598CC: nop

    return;
    // 0x800598CC: nop

;}
RECOMP_FUNC void func_800598D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800598D0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800598D4: addiu       $a0, $a0, 0x950
    ctx->r4 = ADD32(ctx->r4, 0X950);
    // 0x800598D8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800598DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800598E0: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
L_800598E4:
    // 0x800598E4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800598E8: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x800598EC: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x800598F0: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x800598F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800598F8: bne         $v1, $a1, L_800598E4
    if (ctx->r3 != ctx->r5) {
        // 0x800598FC: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_800598E4;
    }
    // 0x800598FC: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x80059900: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80059904: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80059908: addiu       $t6, $zero, 0x384
    ctx->r14 = ADD32(0, 0X384);
    // 0x8005990C: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x80059910: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80059914: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
    // 0x80059918: sh          $v1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r3;
    // 0x8005991C: sh          $v1, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r3;
    // 0x80059920: jr          $ra
    // 0x80059924: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    return;
    // 0x80059924: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80059928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005992C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059930: jal         0x8005AC60
    // 0x80059934: nop

    func_8005AC60(rdram, ctx);
        goto after_0;
    // 0x80059934: nop

    after_0:
    // 0x80059938: jal         0x8005ACAC
    // 0x8005993C: nop

    func_8005ACAC(rdram, ctx);
        goto after_1;
    // 0x8005993C: nop

    after_1:
    // 0x80059940: jal         0x8005AB08
    // 0x80059944: nop

    func_8005AB08(rdram, ctx);
        goto after_2;
    // 0x80059944: nop

    after_2:
    // 0x80059948: jal         0x8005A8BC
    // 0x8005994C: nop

    func_8005A8BC(rdram, ctx);
        goto after_3;
    // 0x8005994C: nop

    after_3:
    // 0x80059950: jal         0x8005B4C0
    // 0x80059954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_4;
    // 0x80059954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80059958: jal         0x8005B4C0
    // 0x8005995C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_5;
    // 0x8005995C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80059960: jal         0x8005C930
    // 0x80059964: nop

    func_8005C930(rdram, ctx);
        goto after_6;
    // 0x80059964: nop

    after_6:
    // 0x80059968: jal         0x8005B004
    // 0x8005996C: nop

    func_8005B004(rdram, ctx);
        goto after_7;
    // 0x8005996C: nop

    after_7:
    // 0x80059970: jal         0x8005CFC8
    // 0x80059974: nop

    func_8005CFC8(rdram, ctx);
        goto after_8;
    // 0x80059974: nop

    after_8:
    // 0x80059978: jal         0x8005CC40
    // 0x8005997C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005CC40(rdram, ctx);
        goto after_9;
    // 0x8005997C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80059980: jal         0x8005CC40
    // 0x80059984: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005CC40(rdram, ctx);
        goto after_10;
    // 0x80059984: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80059988: jal         0x8005C9BC
    // 0x8005998C: nop

    func_8005C9BC(rdram, ctx);
        goto after_11;
    // 0x8005998C: nop

    after_11:
    // 0x80059990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059998: jr          $ra
    // 0x8005999C: nop

    return;
    // 0x8005999C: nop

;}
RECOMP_FUNC void func_800599A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800599A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800599A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800599A8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800599AC: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x800599B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800599B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800599B8: sb          $v0, 0xA86($s0)
    MEM_B(0XA86, ctx->r16) = ctx->r2;
    // 0x800599BC: sb          $v0, 0xA88($s0)
    MEM_B(0XA88, ctx->r16) = ctx->r2;
    // 0x800599C0: sb          $v0, 0xA8A($s0)
    MEM_B(0XA8A, ctx->r16) = ctx->r2;
    // 0x800599C4: sb          $v0, 0x151A($s0)
    MEM_B(0X151A, ctx->r16) = ctx->r2;
    // 0x800599C8: sb          $v0, 0x151C($s0)
    MEM_B(0X151C, ctx->r16) = ctx->r2;
    // 0x800599CC: jal         0x800598D0
    // 0x800599D0: sb          $v0, 0x151E($s0)
    MEM_B(0X151E, ctx->r16) = ctx->r2;
    func_800598D0(rdram, ctx);
        goto after_0;
    // 0x800599D0: sb          $v0, 0x151E($s0)
    MEM_B(0X151E, ctx->r16) = ctx->r2;
    after_0:
    // 0x800599D4: jal         0x8005AC60
    // 0x800599D8: nop

    func_8005AC60(rdram, ctx);
        goto after_1;
    // 0x800599D8: nop

    after_1:
    // 0x800599DC: jal         0x8005ACAC
    // 0x800599E0: nop

    func_8005ACAC(rdram, ctx);
        goto after_2;
    // 0x800599E0: nop

    after_2:
    // 0x800599E4: jal         0x8005AB08
    // 0x800599E8: nop

    func_8005AB08(rdram, ctx);
        goto after_3;
    // 0x800599E8: nop

    after_3:
    // 0x800599EC: jal         0x8005A8BC
    // 0x800599F0: nop

    func_8005A8BC(rdram, ctx);
        goto after_4;
    // 0x800599F0: nop

    after_4:
    // 0x800599F4: jal         0x8005AB78
    // 0x800599F8: nop

    func_8005AB78(rdram, ctx);
        goto after_5;
    // 0x800599F8: nop

    after_5:
    // 0x800599FC: jal         0x8005B4C0
    // 0x80059A00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_6;
    // 0x80059A00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80059A04: jal         0x8005B4C0
    // 0x80059A08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_7;
    // 0x80059A08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x80059A0C: jal         0x8005C930
    // 0x80059A10: nop

    func_8005C930(rdram, ctx);
        goto after_8;
    // 0x80059A10: nop

    after_8:
    // 0x80059A14: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80059A18: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80059A1C: jal         0x8005B2C8
    // 0x80059A20: addiu       $a0, $a0, -0x2A08
    ctx->r4 = ADD32(ctx->r4, -0X2A08);
    func_8005B2C8(rdram, ctx);
        goto after_9;
    // 0x80059A20: addiu       $a0, $a0, -0x2A08
    ctx->r4 = ADD32(ctx->r4, -0X2A08);
    after_9:
    // 0x80059A24: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80059A28: lbu         $a1, 0xA94($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA94);
    // 0x80059A2C: jal         0x8005B2C8
    // 0x80059A30: addiu       $a0, $a0, -0x1F74
    ctx->r4 = ADD32(ctx->r4, -0X1F74);
    func_8005B2C8(rdram, ctx);
        goto after_10;
    // 0x80059A30: addiu       $a0, $a0, -0x1F74
    ctx->r4 = ADD32(ctx->r4, -0X1F74);
    after_10:
    // 0x80059A34: jal         0x8005ADA0
    // 0x80059A38: nop

    func_8005ADA0(rdram, ctx);
        goto after_11;
    // 0x80059A38: nop

    after_11:
    // 0x80059A3C: jal         0x8005B43C
    // 0x80059A40: nop

    func_8005B43C(rdram, ctx);
        goto after_12;
    // 0x80059A40: nop

    after_12:
    // 0x80059A44: jal         0x8005B004
    // 0x80059A48: nop

    func_8005B004(rdram, ctx);
        goto after_13;
    // 0x80059A48: nop

    after_13:
    // 0x80059A4C: jal         0x8005CFC8
    // 0x80059A50: nop

    func_8005CFC8(rdram, ctx);
        goto after_14;
    // 0x80059A50: nop

    after_14:
    // 0x80059A54: jal         0x8005CC40
    // 0x80059A58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005CC40(rdram, ctx);
        goto after_15;
    // 0x80059A58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x80059A5C: jal         0x8005CC40
    // 0x80059A60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005CC40(rdram, ctx);
        goto after_16;
    // 0x80059A60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x80059A64: jal         0x8005C9BC
    // 0x80059A68: nop

    func_8005C9BC(rdram, ctx);
        goto after_17;
    // 0x80059A68: nop

    after_17:
    // 0x80059A6C: jal         0x8005D170
    // 0x80059A70: nop

    func_8005D170(rdram, ctx);
        goto after_18;
    // 0x80059A70: nop

    after_18:
    // 0x80059A74: jal         0x8005D498
    // 0x80059A78: nop

    func_8005D498(rdram, ctx);
        goto after_19;
    // 0x80059A78: nop

    after_19:
    // 0x80059A7C: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80059A80: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x80059A84: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80059A88: bne         $t6, $at, L_80059AB8
    if (ctx->r14 != ctx->r1) {
        // 0x80059A8C: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_80059AB8;
    }
    // 0x80059A8C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80059A90: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80059A94: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80059A98: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80059A9C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80059AA0: lbu         $t7, 0x754($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X754);
    // 0x80059AA4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80059AA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059AAC: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80059AB0: b           L_80059AD8
    // 0x80059AB4: sb          $t8, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r24;
        goto L_80059AD8;
    // 0x80059AB4: sb          $t8, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r24;
L_80059AB8:
    // 0x80059AB8: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80059ABC: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x80059AC0: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80059AC4: lbu         $t9, 0x754($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X754);
    // 0x80059AC8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80059ACC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059AD0: ori         $t0, $t9, 0x3
    ctx->r8 = ctx->r25 | 0X3;
    // 0x80059AD4: sb          $t0, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r8;
L_80059AD8:
    // 0x80059AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80059ADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80059AE0: jr          $ra
    // 0x80059AE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80059AE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80059AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059AF0: jal         0x800598D0
    // 0x80059AF4: nop

    func_800598D0(rdram, ctx);
        goto after_0;
    // 0x80059AF4: nop

    after_0:
    // 0x80059AF8: jal         0x8005AC60
    // 0x80059AFC: nop

    func_8005AC60(rdram, ctx);
        goto after_1;
    // 0x80059AFC: nop

    after_1:
    // 0x80059B00: jal         0x8005ACAC
    // 0x80059B04: nop

    func_8005ACAC(rdram, ctx);
        goto after_2;
    // 0x80059B04: nop

    after_2:
    // 0x80059B08: jal         0x8005AB08
    // 0x80059B0C: nop

    func_8005AB08(rdram, ctx);
        goto after_3;
    // 0x80059B0C: nop

    after_3:
    // 0x80059B10: jal         0x8005A8BC
    // 0x80059B14: nop

    func_8005A8BC(rdram, ctx);
        goto after_4;
    // 0x80059B14: nop

    after_4:
    // 0x80059B18: jal         0x8005AB78
    // 0x80059B1C: nop

    func_8005AB78(rdram, ctx);
        goto after_5;
    // 0x80059B1C: nop

    after_5:
    // 0x80059B20: jal         0x8005C930
    // 0x80059B24: nop

    func_8005C930(rdram, ctx);
        goto after_6;
    // 0x80059B24: nop

    after_6:
    // 0x80059B28: jal         0x8005ADA0
    // 0x80059B2C: nop

    func_8005ADA0(rdram, ctx);
        goto after_7;
    // 0x80059B2C: nop

    after_7:
    // 0x80059B30: jal         0x8005F058
    // 0x80059B34: nop

    func_8005F058(rdram, ctx);
        goto after_8;
    // 0x80059B34: nop

    after_8:
    // 0x80059B38: jal         0x8005B004
    // 0x80059B3C: nop

    func_8005B004(rdram, ctx);
        goto after_9;
    // 0x80059B3C: nop

    after_9:
    // 0x80059B40: jal         0x8005C9BC
    // 0x80059B44: nop

    func_8005C9BC(rdram, ctx);
        goto after_10;
    // 0x80059B44: nop

    after_10:
    // 0x80059B48: jal         0x8005D170
    // 0x80059B4C: nop

    func_8005D170(rdram, ctx);
        goto after_11;
    // 0x80059B4C: nop

    after_11:
    // 0x80059B50: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80059B54: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80059B58: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80059B5C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80059B60: lbu         $t6, 0x754($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X754);
    // 0x80059B64: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80059B68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059B6C: ori         $t7, $t6, 0x3
    ctx->r15 = ctx->r14 | 0X3;
    // 0x80059B70: sb          $t7, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r15;
    // 0x80059B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059B7C: jr          $ra
    // 0x80059B80: nop

    return;
    // 0x80059B80: nop

;}
RECOMP_FUNC void func_80059B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059B84: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x80059B88: nop

    // 0x80059B8C: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x80059B90: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x80059B94: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x80059B98: beq         $t8, $zero, L_80059BA8
    if (ctx->r24 == 0) {
        // 0x80059B9C: sh          $t7, 0x8($a0)
        MEM_H(0X8, ctx->r4) = ctx->r15;
            goto L_80059BA8;
    }
    // 0x80059B9C: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x80059BA0: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x80059BA4: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
L_80059BA8:
    // 0x80059BA8: jr          $ra
    // 0x80059BAC: nop

    return;
    // 0x80059BAC: nop

;}
RECOMP_FUNC void func_80059BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059BB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80059BB4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80059BB8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80059BBC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80059BC0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80059BC4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80059BC8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80059BCC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80059BD0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80059BD4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80059BD8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80059BDC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80059BE0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80059BE4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80059BE8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80059BEC: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x80059BF0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80059BF4: andi        $t7, $t6, 0xFEFF
    ctx->r15 = ctx->r14 & 0XFEFF;
    // 0x80059BF8: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x80059BFC: lwc1        $f22, -0x6864($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6864);
    // 0x80059C00: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x80059C04: lui         $at, 0x43B2
    ctx->r1 = S32(0X43B2 << 16);
    // 0x80059C08: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x80059C0C: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x80059C10: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80059C14: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80059C18: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x80059C1C: addiu       $s7, $s7, 0xB7E
    ctx->r23 = ADD32(ctx->r23, 0XB7E);
    // 0x80059C20: addiu       $s6, $s6, 0xB69
    ctx->r22 = ADD32(ctx->r22, 0XB69);
    // 0x80059C24: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80059C28: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80059C2C: addiu       $fp, $zero, 0xF8
    ctx->r30 = ADD32(0, 0XF8);
    // 0x80059C30: addiu       $s1, $s1, 0xAA8
    ctx->r17 = ADD32(ctx->r17, 0XAA8);
L_80059C34:
    // 0x80059C34: lb          $v1, 0xA86($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XA86);
    // 0x80059C38: nop

    // 0x80059C3C: bltz        $v1, L_80059D88
    if (SIGNED(ctx->r3) < 0) {
        // 0x80059C40: nop
    
            goto L_80059D88;
    }
    // 0x80059C40: nop

    // 0x80059C44: lhu         $t8, 0x14($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X14);
    // 0x80059C48: multu       $v1, $fp
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059C4C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80059C50: sh          $t9, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r25;
    // 0x80059C54: lbu         $t0, 0x0($s6)
    ctx->r8 = MEM_BU(ctx->r22, 0X0);
    // 0x80059C58: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80059C5C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80059C60: sb          $t1, 0x0($s6)
    MEM_B(0X0, ctx->r22) = ctx->r9;
    // 0x80059C64: lhu         $t2, 0x8($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X8);
    // 0x80059C68: addiu       $a1, $a1, -0x3480
    ctx->r5 = ADD32(ctx->r5, -0X3480);
    // 0x80059C6C: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x80059C70: sh          $t3, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r11;
    // 0x80059C74: lhu         $t4, 0x0($s7)
    ctx->r12 = MEM_HU(ctx->r23, 0X0);
    // 0x80059C78: mflo        $t7
    ctx->r15 = lo;
    // 0x80059C7C: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x80059C80: sh          $t5, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r13;
    // 0x80059C84: lw          $t6, 0x18($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X18);
    // 0x80059C88: lb          $v0, 0xA87($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XA87);
    // 0x80059C8C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80059C90: lw          $t8, 0xD4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD4);
    // 0x80059C94: addu        $t9, $s2, $v0
    ctx->r25 = ADD32(ctx->r18, ctx->r2);
    // 0x80059C98: sw          $t8, 0xD4($s1)
    MEM_W(0XD4, ctx->r17) = ctx->r24;
    // 0x80059C9C: lbu         $t0, 0x308($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X308);
    // 0x80059CA0: lw          $t6, 0xCC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XCC);
    // 0x80059CA4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80059CA8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80059CAC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80059CB0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80059CB4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80059CB8: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x80059CBC: addiu       $t3, $t2, 0x28
    ctx->r11 = ADD32(ctx->r10, 0X28);
    // 0x80059CC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80059CC4: sw          $t3, 0xD8($s1)
    MEM_W(0XD8, ctx->r17) = ctx->r11;
    // 0x80059CC8: sh          $t4, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r12;
    // 0x80059CCC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80059CD0: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80059CD4: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80059CD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80059CDC: swc1        $f4, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f4.u32l;
    // 0x80059CE0: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80059CE4: nop

    // 0x80059CE8: swc1        $f6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f6.u32l;
    // 0x80059CEC: lhu         $t7, 0x1A($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1A);
    // 0x80059CF0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80059CF4: jal         0x8026F2EC
    // 0x80059CF8: sh          $t7, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r15;
    LOOKUP_FUNC(0x8026F2EC)(rdram, ctx);
        goto after_0;
    // 0x80059CF8: sh          $t7, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r15;
    after_0:
    // 0x80059CFC: mtc1        $s4, $f8
    ctx->f8.u32l = ctx->r20;
    // 0x80059D00: bgez        $s4, L_80059D18
    if (SIGNED(ctx->r20) >= 0) {
        // 0x80059D04: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80059D18;
    }
    // 0x80059D04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80059D08: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80059D0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80059D10: nop

    // 0x80059D14: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80059D18:
    // 0x80059D18: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x80059D1C: swc1        $f20, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f20.u32l;
    // 0x80059D20: swc1        $f22, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f22.u32l;
    // 0x80059D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80059D28: jal         0x8024BC08
    // 0x80059D2C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x80059D2C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_1:
    // 0x80059D30: sw          $s1, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r17;
    // 0x80059D34: lhu         $t8, 0x8($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X8);
    // 0x80059D38: nop

    // 0x80059D3C: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80059D40: beq         $t9, $zero, L_80059D58
    if (ctx->r25 == 0) {
        // 0x80059D44: nop
    
            goto L_80059D58;
    }
    // 0x80059D44: nop

    // 0x80059D48: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x80059D4C: nop

    // 0x80059D50: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80059D54: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
L_80059D58:
    // 0x80059D58: lw          $t0, 0xD8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XD8);
    // 0x80059D5C: addiu       $s4, $s4, 0xF
    ctx->r20 = ADD32(ctx->r20, 0XF);
    // 0x80059D60: lbu         $t1, 0x1D($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1D);
    // 0x80059D64: nop

    // 0x80059D68: andi        $t2, $t1, 0xE0
    ctx->r10 = ctx->r9 & 0XE0;
    // 0x80059D6C: slti        $at, $t2, 0x60
    ctx->r1 = SIGNED(ctx->r10) < 0X60 ? 1 : 0;
    // 0x80059D70: bne         $at, $zero, L_80059D84
    if (ctx->r1 != 0) {
        // 0x80059D74: nop
    
            goto L_80059D84;
    }
    // 0x80059D74: nop

    // 0x80059D78: lw          $t3, 0xCC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XCC);
    // 0x80059D7C: sh          $zero, 0xC($s1)
    MEM_H(0XC, ctx->r17) = 0;
    // 0x80059D80: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
L_80059D84:
    // 0x80059D84: addiu       $s1, $s1, 0xF8
    ctx->r17 = ADD32(ctx->r17, 0XF8);
L_80059D88:
    // 0x80059D88: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x80059D8C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80059D90: bne         $s5, $at, L_80059C34
    if (ctx->r21 != ctx->r1) {
        // 0x80059D94: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_80059C34;
    }
    // 0x80059D94: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x80059D98: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80059D9C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80059DA0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80059DA4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80059DA8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80059DAC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80059DB0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80059DB4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80059DB8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80059DBC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80059DC0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80059DC4: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80059DC8: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80059DCC: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80059DD0: jr          $ra
    // 0x80059DD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80059DD4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80059DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059DD8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80059DDC: addiu       $v0, $v0, -0x17C8
    ctx->r2 = ADD32(ctx->r2, -0X17C8);
    // 0x80059DE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80059DE4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
L_80059DE8:
    // 0x80059DE8: lhu         $t8, 0x10A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X10A);
    // 0x80059DEC: lhu         $t0, 0x202($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X202);
    // 0x80059DF0: lhu         $t2, 0x2FA($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2FA);
    // 0x80059DF4: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x80059DF8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80059DFC: andi        $t9, $t8, 0xFCFF
    ctx->r25 = ctx->r24 & 0XFCFF;
    // 0x80059E00: andi        $t1, $t0, 0xFCFF
    ctx->r9 = ctx->r8 & 0XFCFF;
    // 0x80059E04: andi        $t3, $t2, 0xFCFF
    ctx->r11 = ctx->r10 & 0XFCFF;
    // 0x80059E08: andi        $t7, $t6, 0xFCFF
    ctx->r15 = ctx->r14 & 0XFCFF;
    // 0x80059E0C: sh          $t3, 0x2FA($v0)
    MEM_H(0X2FA, ctx->r2) = ctx->r11;
    // 0x80059E10: sh          $t1, 0x202($v0)
    MEM_H(0X202, ctx->r2) = ctx->r9;
    // 0x80059E14: sh          $t9, 0x10A($v0)
    MEM_H(0X10A, ctx->r2) = ctx->r25;
    // 0x80059E18: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x80059E1C: bne         $v1, $a0, L_80059DE8
    if (ctx->r3 != ctx->r4) {
        // 0x80059E20: sh          $t7, -0x3CE($v0)
        MEM_H(-0X3CE, ctx->r2) = ctx->r15;
            goto L_80059DE8;
    }
    // 0x80059E20: sh          $t7, -0x3CE($v0)
    MEM_H(-0X3CE, ctx->r2) = ctx->r15;
    // 0x80059E24: jr          $ra
    // 0x80059E28: nop

    return;
    // 0x80059E28: nop

;}
