#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80293148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293148: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029314C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293150: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80293154: sb          $zero, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = 0;
    // 0x80293158: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x8029315C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293160: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x80293164: bne         $t7, $zero, L_80293180
    if (ctx->r15 != 0) {
        // 0x80293168: nop
    
            goto L_80293180;
    }
    // 0x80293168: nop

    // 0x8029316C: lhu         $t8, 0xAA4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XAA4);
    // 0x80293170: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80293174: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80293178: beq         $t9, $zero, L_80293188
    if (ctx->r25 == 0) {
        // 0x8029317C: addiu       $t1, $zero, 0x14
        ctx->r9 = ADD32(0, 0X14);
            goto L_80293188;
    }
    // 0x8029317C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
L_80293180:
    // 0x80293180: jr          $ra
    // 0x80293184: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
    return;
    // 0x80293184: sb          $zero, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = 0;
L_80293188:
    // 0x80293188: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029318C: sb          $t0, 0x3988($at)
    MEM_B(0X3988, ctx->r1) = ctx->r8;
    // 0x80293190: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80293194: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80293198: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029319C: sb          $t1, 0x3989($at)
    MEM_B(0X3989, ctx->r1) = ctx->r9;
    // 0x802931A0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802931A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802931A8: swc1        $f4, 0x397C($at)
    MEM_W(0X397C, ctx->r1) = ctx->f4.u32l;
    // 0x802931AC: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802931B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802931B4: swc1        $f6, 0x3978($at)
    MEM_W(0X3978, ctx->r1) = ctx->f6.u32l;
    // 0x802931B8: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802931BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802931C0: swc1        $f8, 0x3974($at)
    MEM_W(0X3974, ctx->r1) = ctx->f8.u32l;
    // 0x802931C4: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802931C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802931CC: swc1        $f10, 0x3970($at)
    MEM_W(0X3970, ctx->r1) = ctx->f10.u32l;
    // 0x802931D0: jr          $ra
    // 0x802931D4: nop

    return;
    // 0x802931D4: nop

;}
RECOMP_FUNC void func_802931D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802931D8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802931DC: addiu       $a0, $a0, 0x3988
    ctx->r4 = ADD32(ctx->r4, 0X3988);
    // 0x802931E0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802931E4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802931E8: beq         $v1, $zero, L_80293210
    if (ctx->r3 == 0) {
        // 0x802931EC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80293210;
    }
    // 0x802931EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802931F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802931F4: beq         $v0, $at, L_802932D0
    if (ctx->r2 == ctx->r1) {
        // 0x802931F8: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802932D0;
    }
    // 0x802931F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802931FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80293200: beq         $v0, $at, L_802932FC
    if (ctx->r2 == ctx->r1) {
        // 0x80293204: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802932FC;
    }
    // 0x80293204: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80293208: jr          $ra
    // 0x8029320C: nop

    return;
    // 0x8029320C: nop

L_80293210:
    // 0x80293210: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293214: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x80293218: addiu       $a1, $a1, 0x397C
    ctx->r5 = ADD32(ctx->r5, 0X397C);
    // 0x8029321C: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80293220: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80293224: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80293228: lwc1        $f6, 0x4C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x8029322C: addiu       $a2, $a2, 0x3978
    ctx->r6 = ADD32(ctx->r6, 0X3978);
    // 0x80293230: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80293234: lwc1        $f8, 0x70($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X70);
    // 0x80293238: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029323C: swc1        $f8, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f8.u32l;
    // 0x80293240: lwc1        $f10, 0x78($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X78);
    // 0x80293244: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293248: swc1        $f10, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f10.u32l;
    // 0x8029324C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293250: lwc1        $f18, 0x3974($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3974);
    // 0x80293254: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80293258: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8029325C: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80293260: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293264: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80293268: nop

    // 0x8029326C: bc1f        L_80293278
    if (!c1cs) {
        // 0x80293270: nop
    
            goto L_80293278;
    }
    // 0x80293270: nop

    // 0x80293274: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80293278:
    // 0x80293278: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8029327C: lwc1        $f6, 0x3970($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3970);
    // 0x80293280: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80293284: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80293288: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8029328C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80293290: bc1f        L_8029329C
    if (!c1cs) {
        // 0x80293294: nop
    
            goto L_8029329C;
    }
    // 0x80293294: nop

    // 0x80293298: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_8029329C:
    // 0x8029329C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802932A0: nop

    // 0x802932A4: bc1f        L_8029335C
    if (!c1cs) {
        // 0x802932A8: nop
    
            goto L_8029335C;
    }
    // 0x802932A8: nop

    // 0x802932AC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802932B0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802932B4: bc1f        L_8029335C
    if (!c1cs) {
        // 0x802932B8: addiu       $a1, $a1, 0x3989
        ctx->r5 = ADD32(ctx->r5, 0X3989);
            goto L_8029335C;
    }
    // 0x802932B8: addiu       $a1, $a1, 0x3989
    ctx->r5 = ADD32(ctx->r5, 0X3989);
    // 0x802932BC: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x802932C0: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802932C4: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    // 0x802932C8: jr          $ra
    // 0x802932CC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x802932CC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
L_802932D0:
    // 0x802932D0: addiu       $a1, $a1, 0x3989
    ctx->r5 = ADD32(ctx->r5, 0X3989);
    // 0x802932D4: lbu         $t8, 0x0($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X0);
    // 0x802932D8: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x802932DC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x802932E0: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x802932E4: bne         $t0, $zero, L_8029335C
    if (ctx->r8 != 0) {
        // 0x802932E8: sb          $t9, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r25;
            goto L_8029335C;
    }
    // 0x802932E8: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x802932EC: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x802932F0: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x802932F4: jr          $ra
    // 0x802932F8: sb          $t2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r10;
    return;
    // 0x802932F8: sb          $t2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r10;
L_802932FC:
    // 0x802932FC: addiu       $a1, $a1, 0x3989
    ctx->r5 = ADD32(ctx->r5, 0X3989);
    // 0x80293300: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80293304: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80293308: bne         $v0, $zero, L_80293320
    if (ctx->r2 != 0) {
        // 0x8029330C: addiu       $a2, $a2, 0x3978
        ctx->r6 = ADD32(ctx->r6, 0X3978);
            goto L_80293320;
    }
    // 0x8029330C: addiu       $a2, $a2, 0x3978
    ctx->r6 = ADD32(ctx->r6, 0X3978);
    // 0x80293310: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80293314: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293318: b           L_80293328
    // 0x8029331C: sb          $t3, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r11;
        goto L_80293328;
    // 0x8029331C: sb          $t3, 0x3A24($at)
    MEM_B(0X3A24, ctx->r1) = ctx->r11;
L_80293320:
    // 0x80293320: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x80293324: sb          $t4, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r12;
L_80293328:
    // 0x80293328: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8029332C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80293330: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80293334: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80293338: addiu       $a1, $a1, 0x397C
    ctx->r5 = ADD32(ctx->r5, 0X397C);
    // 0x8029333C: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x80293340: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80293344: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80293348: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029334C: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80293350: swc1        $f12, 0x3984($at)
    MEM_W(0X3984, ctx->r1) = ctx->f12.u32l;
    // 0x80293354: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293358: swc1        $f12, 0x3980($at)
    MEM_W(0X3980, ctx->r1) = ctx->f12.u32l;
L_8029335C:
    // 0x8029335C: jr          $ra
    // 0x80293360: nop

    return;
    // 0x80293360: nop

;}
RECOMP_FUNC void func_80293364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293364: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x80293368: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029336C: jr          $ra
    // 0x80293370: sb          $t6, 0x39D8($at)
    MEM_B(0X39D8, ctx->r1) = ctx->r14;
    return;
    // 0x80293370: sb          $t6, 0x39D8($at)
    MEM_B(0X39D8, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80293374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293374: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293378: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x8029337C: lbu         $t6, 0xE($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XE);
    // 0x80293380: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80293384: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80293388: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8029338C: lhu         $t8, -0x3790($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3790);
    // 0x80293390: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80293394: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80293398: bgez        $t8, L_802933AC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8029339C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802933AC;
    }
    // 0x8029339C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802933A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802933A4: nop

    // 0x802933A8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_802933AC:
    // 0x802933AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802933B0: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x802933B4: lbu         $t9, 0xF($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XF);
    // 0x802933B8: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802933BC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x802933C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802933C4: lhu         $t1, -0x3788($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X3788);
    // 0x802933C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802933CC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x802933D0: bgez        $t1, L_802933E4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x802933D4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802933E4;
    }
    // 0x802933D4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802933D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802933DC: nop

    // 0x802933E0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_802933E4:
    // 0x802933E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802933E8: jr          $ra
    // 0x802933EC: swc1        $f16, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x802933EC: swc1        $f16, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_802933F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802933F0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802933F4: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x802933F8: lbu         $t6, 0xE($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XE);
    // 0x802933FC: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80293400: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80293404: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80293408: lhu         $t8, -0x3790($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X3790);
    // 0x8029340C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80293410: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80293414: addiu       $v0, $v0, 0x391C
    ctx->r2 = ADD32(ctx->r2, 0X391C);
    // 0x80293418: bgez        $t8, L_80293430
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8029341C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80293430;
    }
    // 0x8029341C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80293420: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80293424: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80293428: nop

    // 0x8029342C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80293430:
    // 0x80293430: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80293434: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80293438: lbu         $t9, 0x39D8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39D8);
    // 0x8029343C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80293440: beq         $t9, $zero, L_80293484
    if (ctx->r25 == 0) {
        // 0x80293444: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_80293484;
    }
    // 0x80293444: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80293448: lbu         $t0, 0xF($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0XF);
    // 0x8029344C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80293450: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80293454: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80293458: lhu         $t2, -0x3780($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X3780);
    // 0x8029345C: addiu       $a0, $a0, 0x3920
    ctx->r4 = ADD32(ctx->r4, 0X3920);
    // 0x80293460: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80293464: bgez        $t2, L_8029347C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80293468: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8029347C;
    }
    // 0x80293468: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8029346C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80293470: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80293474: nop

    // 0x80293478: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8029347C:
    // 0x8029347C: b           L_802934BC
    // 0x80293480: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
        goto L_802934BC;
    // 0x80293480: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
L_80293484:
    // 0x80293484: lbu         $t3, 0xF($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XF);
    // 0x80293488: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8029348C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80293490: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80293494: lhu         $t5, -0x3788($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X3788);
    // 0x80293498: addiu       $a0, $a0, 0x3920
    ctx->r4 = ADD32(ctx->r4, 0X3920);
    // 0x8029349C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x802934A0: bgez        $t5, L_802934B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802934A4: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_802934B8;
    }
    // 0x802934A4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802934A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802934AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802934B0: nop

    // 0x802934B4: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_802934B8:
    // 0x802934B8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_802934BC:
    // 0x802934BC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802934C0: addiu       $v1, $v1, 0x3910
    ctx->r3 = ADD32(ctx->r3, 0X3910);
    // 0x802934C4: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802934C8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802934CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802934D0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x802934D4: nop

    // 0x802934D8: bc1t        L_80293550
    if (c1cs) {
        // 0x802934DC: nop
    
            goto L_80293550;
    }
    // 0x802934DC: nop

    // 0x802934E0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802934E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802934E8: bc1f        L_80293524
    if (!c1cs) {
        // 0x802934EC: nop
    
            goto L_80293524;
    }
    // 0x802934EC: nop

    // 0x802934F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802934F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802934F8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802934FC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80293500: nop

    // 0x80293504: bc1f        L_80293518
    if (!c1cs) {
        // 0x80293508: nop
    
            goto L_80293518;
    }
    // 0x80293508: nop

    // 0x8029350C: add.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80293510: b           L_80293550
    // 0x80293514: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
        goto L_80293550;
    // 0x80293514: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
L_80293518:
    // 0x80293518: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8029351C: b           L_80293550
    // 0x80293520: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
        goto L_80293550;
    // 0x80293520: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
L_80293524:
    // 0x80293524: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80293528: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8029352C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80293530: nop

    // 0x80293534: bc1f        L_80293548
    if (!c1cs) {
        // 0x80293538: nop
    
            goto L_80293548;
    }
    // 0x80293538: nop

    // 0x8029353C: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80293540: b           L_80293550
    // 0x80293544: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
        goto L_80293550;
    // 0x80293544: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
L_80293548:
    // 0x80293548: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8029354C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80293550:
    // 0x80293550: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x80293554: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80293558: lbu         $t6, 0xBC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBC);
    // 0x8029355C: nop

    // 0x80293560: bne         $t6, $at, L_802935B0
    if (ctx->r14 != ctx->r1) {
        // 0x80293564: nop
    
            goto L_802935B0;
    }
    // 0x80293564: nop

    // 0x80293568: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8029356C: lui         $at, 0x4044
    ctx->r1 = S32(0X4044 << 16);
    // 0x80293570: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80293574: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80293578: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8029357C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80293580: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80293584: bc1f        L_802935B0
    if (!c1cs) {
        // 0x80293588: nop
    
            goto L_802935B0;
    }
    // 0x80293588: nop

    // 0x8029358C: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x80293590: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80293594: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80293598: lwc1        $f16, 0x0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8029359C: mul.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802935A0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x802935A4: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x802935A8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802935AC: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_802935B0:
    // 0x802935B0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802935B4: addiu       $v0, $v0, 0x3918
    ctx->r2 = ADD32(ctx->r2, 0X3918);
    // 0x802935B8: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802935BC: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x802935C0: nop

    // 0x802935C4: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x802935C8: nop

    // 0x802935CC: bc1t        L_80293644
    if (c1cs) {
        // 0x802935D0: nop
    
            goto L_80293644;
    }
    // 0x802935D0: nop

    // 0x802935D4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802935D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802935DC: bc1f        L_80293618
    if (!c1cs) {
        // 0x802935E0: nop
    
            goto L_80293618;
    }
    // 0x802935E0: nop

    // 0x802935E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802935E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802935EC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802935F0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802935F4: nop

    // 0x802935F8: bc1f        L_8029360C
    if (!c1cs) {
        // 0x802935FC: nop
    
            goto L_8029360C;
    }
    // 0x802935FC: nop

    // 0x80293600: add.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80293604: jr          $ra
    // 0x80293608: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x80293608: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8029360C:
    // 0x8029360C: add.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80293610: jr          $ra
    // 0x80293614: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    return;
    // 0x80293614: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_80293618:
    // 0x80293618: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8029361C: sub.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80293620: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80293624: nop

    // 0x80293628: bc1f        L_8029363C
    if (!c1cs) {
        // 0x8029362C: nop
    
            goto L_8029363C;
    }
    // 0x8029362C: nop

    // 0x80293630: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80293634: jr          $ra
    // 0x80293638: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x80293638: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8029363C:
    // 0x8029363C: sub.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80293640: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_80293644:
    // 0x80293644: jr          $ra
    // 0x80293648: nop

    return;
    // 0x80293648: nop

    // 0x8029364C: nop

;}
RECOMP_FUNC void func_80293650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80293654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80293658: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8029365C: jal         0x8002F1F0
    // 0x80293660: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    func_8002F1F0(rdram, ctx);
        goto after_0;
    // 0x80293660: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_0:
    // 0x80293664: jal         0x8002F2AC
    // 0x80293668: nop

    func_8002F2AC(rdram, ctx);
        goto after_1;
    // 0x80293668: nop

    after_1:
    // 0x8029366C: jal         0x80021004
    // 0x80293670: nop

    func_80021004(rdram, ctx);
        goto after_2;
    // 0x80293670: nop

    after_2:
    // 0x80293674: jal         0x80298AB0
    // 0x80293678: nop

    func_80298AB0(rdram, ctx);
        goto after_3;
    // 0x80293678: nop

    after_3:
    // 0x8029367C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80293680: jal         0x8007AAE0
    // 0x80293684: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_4;
    // 0x80293684: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_4:
    // 0x80293688: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8029368C: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x80293690: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80293694: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80293698: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8029369C: sb          $t6, -0x32B3($at)
    MEM_B(-0X32B3, ctx->r1) = ctx->r14;
    // 0x802936A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802936A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802936A8: jr          $ra
    // 0x802936AC: nop

    return;
    // 0x802936AC: nop

;}
RECOMP_FUNC void func_802936B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802936B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802936B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802936B8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802936BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802936C0: jal         0x8002F1F0
    // 0x802936C4: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    func_8002F1F0(rdram, ctx);
        goto after_0;
    // 0x802936C4: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    after_0:
    // 0x802936C8: jal         0x8002F2AC
    // 0x802936CC: nop

    func_8002F2AC(rdram, ctx);
        goto after_1;
    // 0x802936CC: nop

    after_1:
    // 0x802936D0: jal         0x80021004
    // 0x802936D4: nop

    func_80021004(rdram, ctx);
        goto after_2;
    // 0x802936D4: nop

    after_2:
    // 0x802936D8: jal         0x80298AB0
    // 0x802936DC: nop

    func_80298AB0(rdram, ctx);
        goto after_3;
    // 0x802936DC: nop

    after_3:
    // 0x802936E0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x802936E4: jal         0x8007AAE0
    // 0x802936E8: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    func_8007AAE0(rdram, ctx);
        goto after_4;
    // 0x802936E8: addiu       $a0, $a0, -0xA30
    ctx->r4 = ADD32(ctx->r4, -0XA30);
    after_4:
    // 0x802936EC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802936F0: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802936F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802936F8: bne         $t6, $at, L_80293710
    if (ctx->r14 != ctx->r1) {
        // 0x802936FC: lui         $t8, 0x8010
        ctx->r24 = S32(0X8010 << 16);
            goto L_80293710;
    }
    // 0x802936FC: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80293700: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x80293704: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293708: b           L_80293718
    // 0x8029370C: sb          $t7, 0x3A19($at)
    MEM_B(0X3A19, ctx->r1) = ctx->r15;
        goto L_80293718;
    // 0x8029370C: sb          $t7, 0x3A19($at)
    MEM_B(0X3A19, ctx->r1) = ctx->r15;
L_80293710:
    // 0x80293710: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293714: sb          $zero, 0x3A19($at)
    MEM_B(0X3A19, ctx->r1) = 0;
L_80293718:
    // 0x80293718: lbu         $t8, 0x522C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X522C);
    // 0x8029371C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80293720: bne         $t8, $at, L_80293744
    if (ctx->r24 != ctx->r1) {
        // 0x80293724: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80293744;
    }
    // 0x80293724: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80293728: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8029372C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80293730: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x80293734: jal         0x800201A8
    // 0x80293738: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    func_800201A8(rdram, ctx);
        goto after_5;
    // 0x80293738: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    after_5:
    // 0x8029373C: b           L_80293754
    // 0x80293740: nop

        goto L_80293754;
    // 0x80293740: nop

L_80293744:
    // 0x80293744: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80293748: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x8029374C: jal         0x800201A8
    // 0x80293750: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_6;
    // 0x80293750: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_6:
L_80293754:
    // 0x80293754: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293758: sb          $zero, 0x38DA($at)
    MEM_B(0X38DA, ctx->r1) = 0;
    // 0x8029375C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293760: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x80293764: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293768: jal         0x80297DB0
    // 0x8029376C: sh          $zero, 0x39DA($at)
    MEM_H(0X39DA, ctx->r1) = 0;
    func_80297DB0(rdram, ctx);
        goto after_7;
    // 0x8029376C: sh          $zero, 0x39DA($at)
    MEM_H(0X39DA, ctx->r1) = 0;
    after_7:
    // 0x80293770: lbu         $t9, 0x1B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1B);
    // 0x80293774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80293778: bne         $t9, $at, L_80293798
    if (ctx->r25 != ctx->r1) {
        // 0x8029377C: lui         $t0, 0x8010
        ctx->r8 = S32(0X8010 << 16);
            goto L_80293798;
    }
    // 0x8029377C: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80293780: lbu         $t0, 0x522C($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X522C);
    // 0x80293784: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80293788: beq         $t0, $at, L_80293798
    if (ctx->r8 == ctx->r1) {
        // 0x8029378C: nop
    
            goto L_80293798;
    }
    // 0x8029378C: nop

    // 0x80293790: jal         0x802937C0
    // 0x80293794: nop

    func_802937C0(rdram, ctx);
        goto after_8;
    // 0x80293794: nop

    after_8:
L_80293798:
    // 0x80293798: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8029379C: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x802937A0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802937A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802937A8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x802937AC: sb          $t1, -0x32B3($at)
    MEM_B(-0X32B3, ctx->r1) = ctx->r9;
    // 0x802937B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802937B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802937B8: jr          $ra
    // 0x802937BC: nop

    return;
    // 0x802937BC: nop

;}
RECOMP_FUNC void func_802937C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802937C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802937C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802937C8: jal         0x80293CFC
    // 0x802937CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80293CFC(rdram, ctx);
        goto after_0;
    // 0x802937CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802937D0: jal         0x80293E24
    // 0x802937D4: nop

    func_80293E24(rdram, ctx);
        goto after_1;
    // 0x802937D4: nop

    after_1:
    // 0x802937D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802937DC: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x802937E0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802937E4: beq         $v0, $at, L_80293988
    if (ctx->r2 == ctx->r1) {
        // 0x802937E8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80293988;
    }
    // 0x802937E8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802937EC: bne         $v0, $at, L_802937FC
    if (ctx->r2 != ctx->r1) {
        // 0x802937F0: nop
    
            goto L_802937FC;
    }
    // 0x802937F0: nop

    // 0x802937F4: jal         0x80294090
    // 0x802937F8: nop

    func_80294090(rdram, ctx);
        goto after_2;
    // 0x802937F8: nop

    after_2:
L_802937FC:
    // 0x802937FC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80293800: lhu         $t6, 0x38D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X38D0);
    // 0x80293804: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80293808: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x8029380C: bne         $at, $zero, L_80293978
    if (ctx->r1 != 0) {
        // 0x80293810: addiu       $s0, $s0, 0x4890
        ctx->r16 = ADD32(ctx->r16, 0X4890);
            goto L_80293978;
    }
    // 0x80293810: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80293814: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80293818: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029381C: sb          $t7, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r15;
    // 0x80293820: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x80293824: jal         0x8007AAF8
    // 0x80293828: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8007AAF8(rdram, ctx);
        goto after_3;
    // 0x80293828: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x8029382C: lbu         $t8, 0x2200($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2200);
    // 0x80293830: lbu         $t1, 0x2201($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2201);
    // 0x80293834: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80293838: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x8029383C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80293840: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80293844: addiu       $t5, $zero, 0x110
    ctx->r13 = ADD32(0, 0X110);
    // 0x80293848: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8029384C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293850: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x80293854: sb          $t0, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r8;
    // 0x80293858: sb          $t2, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r10;
    // 0x8029385C: sb          $t3, 0x2209($s0)
    MEM_B(0X2209, ctx->r16) = ctx->r11;
    // 0x80293860: sb          $t4, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r12;
    // 0x80293864: sh          $t5, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r13;
    // 0x80293868: sh          $t6, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r14;
    // 0x8029386C: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x80293870: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293874: jal         0x8002135C
    // 0x80293878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x80293878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8029387C: jal         0x80293D84
    // 0x80293880: nop

    func_80293D84(rdram, ctx);
        goto after_5;
    // 0x80293880: nop

    after_5:
    // 0x80293884: lbu         $t8, 0x2279($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2279);
    // 0x80293888: lbu         $t0, 0x2278($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2278);
    // 0x8029388C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80293890: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80293894: addiu       $t3, $zero, 0x110
    ctx->r11 = ADD32(0, 0X110);
    // 0x80293898: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8029389C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802938A0: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x802938A4: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x802938A8: sb          $t7, 0x2274($s0)
    MEM_B(0X2274, ctx->r16) = ctx->r15;
    // 0x802938AC: sb          $t9, 0x2279($s0)
    MEM_B(0X2279, ctx->r16) = ctx->r25;
    // 0x802938B0: sb          $t1, 0x2278($s0)
    MEM_B(0X2278, ctx->r16) = ctx->r9;
    // 0x802938B4: sb          $t2, 0x2275($s0)
    MEM_B(0X2275, ctx->r16) = ctx->r10;
    // 0x802938B8: sh          $t3, 0x2288($s0)
    MEM_H(0X2288, ctx->r16) = ctx->r11;
    // 0x802938BC: sh          $t4, 0x228C($s0)
    MEM_H(0X228C, ctx->r16) = ctx->r12;
    // 0x802938C0: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x802938C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802938C8: jal         0x8002135C
    // 0x802938CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x802938CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x802938D0: lbu         $t6, 0x22B5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X22B5);
    // 0x802938D4: lbu         $t8, 0x22B4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X22B4);
    // 0x802938D8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802938DC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x802938E0: addiu       $t1, $zero, 0x110
    ctx->r9 = ADD32(0, 0X110);
    // 0x802938E4: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x802938E8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802938EC: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x802938F0: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x802938F4: sb          $t5, 0x22B0($s0)
    MEM_B(0X22B0, ctx->r16) = ctx->r13;
    // 0x802938F8: sb          $t7, 0x22B5($s0)
    MEM_B(0X22B5, ctx->r16) = ctx->r15;
    // 0x802938FC: sb          $t9, 0x22B4($s0)
    MEM_B(0X22B4, ctx->r16) = ctx->r25;
    // 0x80293900: sb          $t0, 0x22B1($s0)
    MEM_B(0X22B1, ctx->r16) = ctx->r8;
    // 0x80293904: sh          $t1, 0x22C4($s0)
    MEM_H(0X22C4, ctx->r16) = ctx->r9;
    // 0x80293908: sh          $t2, 0x22C8($s0)
    MEM_H(0X22C8, ctx->r16) = ctx->r10;
    // 0x8029390C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80293910: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293914: jal         0x8002135C
    // 0x80293918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80293918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8029391C: lbu         $t4, 0x22F1($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X22F1);
    // 0x80293920: lbu         $t6, 0x22F0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X22F0);
    // 0x80293924: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80293928: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8029392C: addiu       $t9, $zero, 0x110
    ctx->r25 = ADD32(0, 0X110);
    // 0x80293930: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80293934: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293938: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x8029393C: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x80293940: sb          $t3, 0x22EC($s0)
    MEM_B(0X22EC, ctx->r16) = ctx->r11;
    // 0x80293944: sb          $t5, 0x22F1($s0)
    MEM_B(0X22F1, ctx->r16) = ctx->r13;
    // 0x80293948: sb          $t7, 0x22F0($s0)
    MEM_B(0X22F0, ctx->r16) = ctx->r15;
    // 0x8029394C: sb          $t8, 0x22ED($s0)
    MEM_B(0X22ED, ctx->r16) = ctx->r24;
    // 0x80293950: sh          $t9, 0x2300($s0)
    MEM_H(0X2300, ctx->r16) = ctx->r25;
    // 0x80293954: sh          $t0, 0x2304($s0)
    MEM_H(0X2304, ctx->r16) = ctx->r8;
    // 0x80293958: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029395C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293960: jal         0x8002135C
    // 0x80293964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80293964: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80293968: jal         0x80294468
    // 0x8029396C: nop

    func_80294468(rdram, ctx);
        goto after_9;
    // 0x8029396C: nop

    after_9:
    // 0x80293970: b           L_80293980
    // 0x80293974: nop

        goto L_80293980;
    // 0x80293974: nop

L_80293978:
    // 0x80293978: jal         0x80294540
    // 0x8029397C: nop

    func_80294540(rdram, ctx);
        goto after_10;
    // 0x8029397C: nop

    after_10:
L_80293980:
    // 0x80293980: jal         0x80294938
    // 0x80293984: nop

    func_80294938(rdram, ctx);
        goto after_11;
    // 0x80293984: nop

    after_11:
L_80293988:
    // 0x80293988: jal         0x80294FF8
    // 0x8029398C: nop

    func_80294FF8(rdram, ctx);
        goto after_12;
    // 0x8029398C: nop

    after_12:
    // 0x80293990: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80293994: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80293998: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029399C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802939A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802939A4: jr          $ra
    // 0x802939A8: swc1        $f4, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f4.u32l;
    return;
    // 0x802939A8: swc1        $f4, 0x38E8($at)
    MEM_W(0X38E8, ctx->r1) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802939AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802939AC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802939B0: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802939B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802939B8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802939BC: beq         $t6, $at, L_80293A9C
    if (ctx->r14 == ctx->r1) {
        // 0x802939C0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80293A9C;
    }
    // 0x802939C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802939C4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802939C8: addiu       $v1, $v1, 0x39DA
    ctx->r3 = ADD32(ctx->r3, 0X39DA);
    // 0x802939CC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802939D0: nop

    // 0x802939D4: beq         $v0, $zero, L_80293A9C
    if (ctx->r2 == 0) {
        // 0x802939D8: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_80293A9C;
    }
    // 0x802939D8: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802939DC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x802939E0: bne         $t8, $zero, L_80293A9C
    if (ctx->r24 != 0) {
        // 0x802939E4: sh          $t7, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r15;
            goto L_80293A9C;
    }
    // 0x802939E4: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x802939E8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802939EC: lbu         $t9, 0xB65($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0XB65);
    // 0x802939F0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802939F4: bne         $t9, $zero, L_80293A7C
    if (ctx->r25 != 0) {
        // 0x802939F8: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_80293A7C;
    }
    // 0x802939F8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802939FC: lbu         $t0, 0x3AD0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3AD0);
    // 0x80293A00: nop

    // 0x80293A04: bne         $t0, $zero, L_80293A14
    if (ctx->r8 != 0) {
        // 0x80293A08: nop
    
            goto L_80293A14;
    }
    // 0x80293A08: nop

    // 0x80293A0C: jal         0x800793DC
    // 0x80293A10: nop

    func_800793DC(rdram, ctx);
        goto after_0;
    // 0x80293A10: nop

    after_0:
L_80293A14:
    // 0x80293A14: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x80293A18: lbu         $t1, 0x39F0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39F0);
    // 0x80293A1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293A20: bne         $t1, $zero, L_80293A64
    if (ctx->r9 != 0) {
        // 0x80293A24: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_80293A64;
    }
    // 0x80293A24: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80293A28: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80293A2C: lbu         $t2, 0x3AD0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3AD0);
    // 0x80293A30: nop

    // 0x80293A34: bne         $t2, $zero, L_80293A44
    if (ctx->r10 != 0) {
        // 0x80293A38: nop
    
            goto L_80293A44;
    }
    // 0x80293A38: nop

    // 0x80293A3C: jal         0x8007968C
    // 0x80293A40: nop

    func_8007968C(rdram, ctx);
        goto after_1;
    // 0x80293A40: nop

    after_1:
L_80293A44:
    // 0x80293A44: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80293A48: lw          $t3, 0xB24($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XB24);
    // 0x80293A4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293A50: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x80293A54: nop

    // 0x80293A58: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x80293A5C: b           L_80293A9C
    // 0x80293A60: sb          $t5, 0x3A20($at)
    MEM_B(0X3A20, ctx->r1) = ctx->r13;
        goto L_80293A9C;
    // 0x80293A60: sb          $t5, 0x3A20($at)
    MEM_B(0X3A20, ctx->r1) = ctx->r13;
L_80293A64:
    // 0x80293A64: lbu         $a0, 0xB($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XB);
    // 0x80293A68: lbu         $a1, 0xA9F($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA9F);
    // 0x80293A6C: jal         0x80075544
    // 0x80293A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80075544(rdram, ctx);
        goto after_2;
    // 0x80293A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80293A74: b           L_80293A9C
    // 0x80293A78: nop

        goto L_80293A9C;
    // 0x80293A78: nop

L_80293A7C:
    // 0x80293A7C: lbu         $t6, 0x39F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39F0);
    // 0x80293A80: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293A84: beq         $t6, $zero, L_80293A9C
    if (ctx->r14 == 0) {
        // 0x80293A88: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_80293A9C;
    }
    // 0x80293A88: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80293A8C: lbu         $a0, 0xB($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XB);
    // 0x80293A90: lbu         $a1, 0xA9F($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA9F);
    // 0x80293A94: jal         0x80075544
    // 0x80293A98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80075544(rdram, ctx);
        goto after_3;
    // 0x80293A98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80293A9C:
    // 0x80293A9C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80293AA0: lbu         $t7, 0x38DF($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X38DF);
    // 0x80293AA4: nop

    // 0x80293AA8: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x80293AAC: beq         $at, $zero, L_80293CD4
    if (ctx->r1 == 0) {
        // 0x80293AB0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80293CD4;
    }
    // 0x80293AB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80293AB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293AB8: addu        $at, $at, $t7
    gpr jr_addend_80293AC4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80293ABC: lw          $t7, 0x7F0($at)
    ctx->r15 = ADD32(ctx->r1, 0X7F0);
    // 0x80293AC0: nop

    // 0x80293AC4: jr          $t7
    // 0x80293AC8: nop

    switch (jr_addend_80293AC4 >> 2) {
        case 0: goto L_80293ACC; break;
        case 1: goto L_80293C30; break;
        case 2: goto L_80293C84; break;
        case 3: goto L_80293C9C; break;
        case 4: goto L_80293CAC; break;
        case 5: goto L_80293CC4; break;
        default: switch_error(__func__, 0x80293AC4, 0x802C07F0);
    }
    // 0x80293AC8: nop

L_80293ACC:
    // 0x80293ACC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293AD0: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80293AD4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80293AD8: beq         $v0, $at, L_80293B08
    if (ctx->r2 == ctx->r1) {
        // 0x80293ADC: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80293B08;
    }
    // 0x80293ADC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80293AE0: beq         $v0, $at, L_80293B08
    if (ctx->r2 == ctx->r1) {
        // 0x80293AE4: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80293B08;
    }
    // 0x80293AE4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80293AE8: beq         $v0, $at, L_80293B08
    if (ctx->r2 == ctx->r1) {
        // 0x80293AEC: nop
    
            goto L_80293B08;
    }
    // 0x80293AEC: nop

    // 0x80293AF0: jal         0x8029566C
    // 0x80293AF4: nop

    func_8029566C(rdram, ctx);
        goto after_4;
    // 0x80293AF4: nop

    after_4:
    // 0x80293AF8: jal         0x80296278
    // 0x80293AFC: nop

    func_80296278(rdram, ctx);
        goto after_5;
    // 0x80293AFC: nop

    after_5:
    // 0x80293B00: jal         0x80294EF4
    // 0x80293B04: nop

    func_80294EF4(rdram, ctx);
        goto after_6;
    // 0x80293B04: nop

    after_6:
L_80293B08:
    // 0x80293B08: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80293B0C: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80293B10: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80293B14: beq         $t8, $at, L_80293CD8
    if (ctx->r24 == ctx->r1) {
        // 0x80293B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80293CD8;
    }
    // 0x80293B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293B1C: jal         0x80294104
    // 0x80293B20: nop

    func_80294104(rdram, ctx);
        goto after_7;
    // 0x80293B20: nop

    after_7:
    // 0x80293B24: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80293B28: lhu         $t9, 0xB7E($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB7E);
    // 0x80293B2C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293B30: andi        $t0, $t9, 0x2000
    ctx->r8 = ctx->r25 & 0X2000;
    // 0x80293B34: beq         $t0, $zero, L_80293CD8
    if (ctx->r8 == 0) {
        // 0x80293B38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80293CD8;
    }
    // 0x80293B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293B3C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80293B40: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80293B44: bne         $v0, $at, L_80293B64
    if (ctx->r2 != ctx->r1) {
        // 0x80293B48: lui         $t2, 0x8009
        ctx->r10 = S32(0X8009 << 16);
            goto L_80293B64;
    }
    // 0x80293B48: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80293B4C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80293B50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293B54: jal         0x80062B40
    // 0x80293B58: sb          $t1, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r9;
    func_80062B40(rdram, ctx);
        goto after_8;
    // 0x80293B58: sb          $t1, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r9;
    after_8:
    // 0x80293B5C: b           L_80293CD8
    // 0x80293B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293B64:
    // 0x80293B64: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x80293B68: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293B6C: lhu         $t3, 0xDC($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0XDC);
    // 0x80293B70: nop

    // 0x80293B74: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80293B78: beq         $t4, $zero, L_80293B90
    if (ctx->r12 == 0) {
        // 0x80293B7C: nop
    
            goto L_80293B90;
    }
    // 0x80293B7C: nop

    // 0x80293B80: jal         0x80062B40
    // 0x80293B84: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    func_80062B40(rdram, ctx);
        goto after_9;
    // 0x80293B84: sb          $zero, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = 0;
    after_9:
    // 0x80293B88: b           L_80293CD8
    // 0x80293B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293B90:
    // 0x80293B90: beq         $v0, $zero, L_80293BC4
    if (ctx->r2 == 0) {
        // 0x80293B94: nop
    
            goto L_80293BC4;
    }
    // 0x80293B94: nop

    // 0x80293B98: jal         0x8029804C
    // 0x80293B9C: nop

    func_8029804C(rdram, ctx);
        goto after_10;
    // 0x80293B9C: nop

    after_10:
    // 0x80293BA0: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x80293BA4: lbu         $t5, 0x38E3($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X38E3);
    // 0x80293BA8: nop

    // 0x80293BAC: beq         $t5, $zero, L_80293CD8
    if (ctx->r13 == 0) {
        // 0x80293BB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80293CD8;
    }
    // 0x80293BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293BB4: jal         0x80062B40
    // 0x80293BB8: nop

    func_80062B40(rdram, ctx);
        goto after_11;
    // 0x80293BB8: nop

    after_11:
    // 0x80293BBC: b           L_80293CD8
    // 0x80293BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293BC4:
    // 0x80293BC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80293BC8: lhu         $v0, 0x38D4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38D4);
    // 0x80293BCC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80293BD0: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80293BD4: bne         $t6, $zero, L_80293BF0
    if (ctx->r14 != 0) {
        // 0x80293BD8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80293BF0;
    }
    // 0x80293BD8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80293BDC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80293BE0: lhu         $v0, 0x38D6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38D6);
    // 0x80293BE4: nop

    // 0x80293BE8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80293BEC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80293BF0:
    // 0x80293BF0: bne         $v0, $zero, L_80293CD8
    if (ctx->r2 != 0) {
        // 0x80293BF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80293CD8;
    }
    // 0x80293BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293BF8: lhu         $t8, 0xB74($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB74);
    // 0x80293BFC: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80293C00: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80293C04: beq         $t9, $zero, L_80293C1C
    if (ctx->r25 == 0) {
        // 0x80293C08: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80293C1C;
    }
    // 0x80293C08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293C0C: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x80293C10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293C14: b           L_80293C20
    // 0x80293C18: sb          $t0, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r8;
        goto L_80293C20;
    // 0x80293C18: sb          $t0, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r8;
L_80293C1C:
    // 0x80293C1C: sb          $t1, 0x38E3($at)
    MEM_B(0X38E3, ctx->r1) = ctx->r9;
L_80293C20:
    // 0x80293C20: jal         0x80062B40
    // 0x80293C24: nop

    func_80062B40(rdram, ctx);
        goto after_12;
    // 0x80293C24: nop

    after_12:
    // 0x80293C28: b           L_80293CD8
    // 0x80293C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293C30:
    // 0x80293C30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293C34: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80293C38: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80293C3C: beq         $v0, $at, L_80293C6C
    if (ctx->r2 == ctx->r1) {
        // 0x80293C40: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80293C6C;
    }
    // 0x80293C40: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80293C44: beq         $v0, $at, L_80293C6C
    if (ctx->r2 == ctx->r1) {
        // 0x80293C48: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80293C6C;
    }
    // 0x80293C48: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80293C4C: beq         $v0, $at, L_80293C6C
    if (ctx->r2 == ctx->r1) {
        // 0x80293C50: nop
    
            goto L_80293C6C;
    }
    // 0x80293C50: nop

    // 0x80293C54: jal         0x80294EF4
    // 0x80293C58: nop

    func_80294EF4(rdram, ctx);
        goto after_13;
    // 0x80293C58: nop

    after_13:
    // 0x80293C5C: jal         0x8029566C
    // 0x80293C60: nop

    func_8029566C(rdram, ctx);
        goto after_14;
    // 0x80293C60: nop

    after_14:
    // 0x80293C64: jal         0x80296278
    // 0x80293C68: nop

    func_80296278(rdram, ctx);
        goto after_15;
    // 0x80293C68: nop

    after_15:
L_80293C6C:
    // 0x80293C6C: jal         0x80294104
    // 0x80293C70: nop

    func_80294104(rdram, ctx);
        goto after_16;
    // 0x80293C70: nop

    after_16:
    // 0x80293C74: jal         0x80062E48
    // 0x80293C78: nop

    func_80062E48(rdram, ctx);
        goto after_17;
    // 0x80293C78: nop

    after_17:
    // 0x80293C7C: b           L_80293CD8
    // 0x80293C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293C84:
    // 0x80293C84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80293C88: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80293C8C: jal         0x802999C4
    // 0x80293C90: sb          $t2, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r10;
    func_802999C4(rdram, ctx);
        goto after_18;
    // 0x80293C90: sb          $t2, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r10;
    after_18:
    // 0x80293C94: b           L_80293CD8
    // 0x80293C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293C9C:
    // 0x80293C9C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80293CA0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80293CA4: b           L_80293CD4
    // 0x80293CA8: sb          $t3, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r11;
        goto L_80293CD4;
    // 0x80293CA8: sb          $t3, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r11;
L_80293CAC:
    // 0x80293CAC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80293CB0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80293CB4: jal         0x8029BF90
    // 0x80293CB8: sb          $t4, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r12;
    func_8029BF90(rdram, ctx);
        goto after_19;
    // 0x80293CB8: sb          $t4, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r12;
    after_19:
    // 0x80293CBC: b           L_80293CD8
    // 0x80293CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80293CD8;
    // 0x80293CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293CC4:
    // 0x80293CC4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80293CC8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80293CCC: jal         0x8029B04C
    // 0x80293CD0: sb          $t5, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r13;
    func_8029B04C(rdram, ctx);
        goto after_20;
    // 0x80293CD0: sb          $t5, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r13;
    after_20:
L_80293CD4:
    // 0x80293CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80293CD8:
    // 0x80293CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80293CDC: jr          $ra
    // 0x80293CE0: nop

    return;
    // 0x80293CE0: nop

;}
RECOMP_FUNC void func_80293CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293CE4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293CE8: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x80293CEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80293CF0: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80293CF4: jr          $ra
    // 0x80293CF8: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    return;
    // 0x80293CF8: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_80293CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80293D00: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80293D04: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80293D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80293D0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80293D10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293D14: sb          $t6, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r14;
    // 0x80293D18: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x80293D1C: jal         0x8007AAF8
    // 0x80293D20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80293D20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80293D24: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80293D28: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80293D2C: lbu         $t7, 0x214C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X214C);
    // 0x80293D30: lbu         $t0, 0x214D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X214D);
    // 0x80293D34: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x80293D38: ori         $t9, $t8, 0x6
    ctx->r25 = ctx->r24 | 0X6;
    // 0x80293D3C: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80293D40: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x80293D44: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293D48: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80293D4C: sb          $t9, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r25;
    // 0x80293D50: sb          $t1, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r9;
    // 0x80293D54: sb          $t2, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r10;
    // 0x80293D58: sb          $t3, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r11;
    // 0x80293D5C: sh          $zero, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = 0;
    // 0x80293D60: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80293D64: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x80293D68: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293D6C: jal         0x8002135C
    // 0x80293D70: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80293D70: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80293D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80293D7C: jr          $ra
    // 0x80293D80: nop

    return;
    // 0x80293D80: nop

;}
RECOMP_FUNC void func_80293D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293D84: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80293D88: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80293D8C: lbu         $t7, 0x223C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X223C);
    // 0x80293D90: lbu         $t0, 0x223D($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X223D);
    // 0x80293D94: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80293D98: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x80293D9C: sb          $t6, 0x2238($v0)
    MEM_B(0X2238, ctx->r2) = ctx->r14;
    // 0x80293DA0: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80293DA4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80293DA8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x80293DAC: addiu       $t4, $zero, 0x118
    ctx->r12 = ADD32(0, 0X118);
    // 0x80293DB0: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x80293DB4: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80293DB8: sb          $t9, 0x223C($v0)
    MEM_B(0X223C, ctx->r2) = ctx->r25;
    // 0x80293DBC: sb          $t1, 0x223D($v0)
    MEM_B(0X223D, ctx->r2) = ctx->r9;
    // 0x80293DC0: sb          $t2, 0x2245($v0)
    MEM_B(0X2245, ctx->r2) = ctx->r10;
    // 0x80293DC4: sb          $t3, 0x2239($v0)
    MEM_B(0X2239, ctx->r2) = ctx->r11;
    // 0x80293DC8: sh          $t4, 0x224C($v0)
    MEM_H(0X224C, ctx->r2) = ctx->r12;
    // 0x80293DCC: sh          $t5, 0x2250($v0)
    MEM_H(0X2250, ctx->r2) = ctx->r13;
    // 0x80293DD0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80293DD4: lhu         $t6, 0xB74($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB74);
    // 0x80293DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80293DDC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80293DE0: beq         $t7, $zero, L_80293DF0
    if (ctx->r15 == 0) {
        // 0x80293DE4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80293DF0;
    }
    // 0x80293DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80293DE8: b           L_80293DF4
    // 0x80293DEC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
        goto L_80293DF4;
    // 0x80293DEC: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
L_80293DF0:
    // 0x80293DF0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80293DF4:
    // 0x80293DF4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293DF8: jal         0x8007AAF8
    // 0x80293DFC: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80293DFC: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    after_0:
    // 0x80293E00: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293E04: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x80293E08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293E0C: jal         0x8002135C
    // 0x80293E10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80293E10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80293E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80293E1C: jr          $ra
    // 0x80293E20: nop

    return;
    // 0x80293E20: nop

;}
RECOMP_FUNC void func_80293E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80293E28: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80293E2C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80293E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80293E34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80293E38: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293E3C: sb          $t6, 0x21C0($v0)
    MEM_B(0X21C0, ctx->r2) = ctx->r14;
    // 0x80293E40: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x80293E44: jal         0x8007AAF8
    // 0x80293E48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80293E48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80293E4C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80293E50: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80293E54: lbu         $t7, 0x21C4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X21C4);
    // 0x80293E58: lbu         $t0, 0x21C5($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X21C5);
    // 0x80293E5C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x80293E60: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80293E64: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x80293E68: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x80293E6C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80293E70: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80293E74: sb          $t9, 0x21C4($v0)
    MEM_B(0X21C4, ctx->r2) = ctx->r25;
    // 0x80293E78: sb          $t1, 0x21C5($v0)
    MEM_B(0X21C5, ctx->r2) = ctx->r9;
    // 0x80293E7C: sb          $t2, 0x21CD($v0)
    MEM_B(0X21CD, ctx->r2) = ctx->r10;
    // 0x80293E80: sb          $t3, 0x21C1($v0)
    MEM_B(0X21C1, ctx->r2) = ctx->r11;
    // 0x80293E84: sh          $zero, 0x21D4($v0)
    MEM_H(0X21D4, ctx->r2) = 0;
    // 0x80293E88: sh          $zero, 0x21D8($v0)
    MEM_H(0X21D8, ctx->r2) = 0;
    // 0x80293E8C: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x80293E90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80293E94: jal         0x8002135C
    // 0x80293E98: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80293E98: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x80293E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80293EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80293EA4: jr          $ra
    // 0x80293EA8: nop

    return;
    // 0x80293EA8: nop

;}
RECOMP_FUNC void func_80293EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293EAC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293EB0: lhu         $v0, 0xB74($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB74);
    // 0x80293EB4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80293EB8: bne         $v0, $zero, L_80293EC8
    if (ctx->r2 != 0) {
        // 0x80293EBC: addiu       $v1, $v1, 0x38C8
        ctx->r3 = ADD32(ctx->r3, 0X38C8);
            goto L_80293EC8;
    }
    // 0x80293EBC: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x80293EC0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293EC4: sb          $zero, 0x3A3E($at)
    MEM_B(0X3A3E, ctx->r1) = 0;
L_80293EC8:
    // 0x80293EC8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80293ECC: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80293ED0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80293ED4: lbu         $t7, 0xA94($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XA94);
    // 0x80293ED8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80293EDC: sh          $t6, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r14;
    // 0x80293EE0: sh          $t7, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r15;
    // 0x80293EE4: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x80293EE8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80293EEC: beq         $t8, $at, L_80293FA0
    if (ctx->r24 == ctx->r1) {
        // 0x80293EF0: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_80293FA0;
    }
    // 0x80293EF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80293EF4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80293EF8: beq         $at, $zero, L_80293F10
    if (ctx->r1 == 0) {
        // 0x80293EFC: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_80293F10;
    }
    // 0x80293EFC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80293F00: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293F04: lbu         $v0, -0x309D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X309D);
    // 0x80293F08: b           L_80293F2C
    // 0x80293F0C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
        goto L_80293F2C;
    // 0x80293F0C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
L_80293F10:
    // 0x80293F10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80293F14: lb          $v0, -0x309D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X309D);
    // 0x80293F18: nop

    // 0x80293F1C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80293F20: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80293F24: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80293F28: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
L_80293F2C:
    // 0x80293F2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F30: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80293F34: lhu         $v1, -0x35C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X35C4);
    // 0x80293F38: sh          $a0, 0x38D2($at)
    MEM_H(0X38D2, ctx->r1) = ctx->r4;
    // 0x80293F3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F40: sh          $v1, 0x38D0($at)
    MEM_H(0X38D0, ctx->r1) = ctx->r3;
    // 0x80293F44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F48: sh          $zero, 0x3944($at)
    MEM_H(0X3944, ctx->r1) = 0;
    // 0x80293F4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F50: sh          $v1, 0x38D4($at)
    MEM_H(0X38D4, ctx->r1) = ctx->r3;
    // 0x80293F54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F58: sh          $a0, 0x38D6($at)
    MEM_H(0X38D6, ctx->r1) = ctx->r4;
    // 0x80293F5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F60: sh          $zero, 0x3946($at)
    MEM_H(0X3946, ctx->r1) = 0;
    // 0x80293F64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F68: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80293F6C: sb          $t1, 0x38D8($at)
    MEM_B(0X38D8, ctx->r1) = ctx->r9;
    // 0x80293F70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F74: sb          $zero, 0x38D9($at)
    MEM_B(0X38D9, ctx->r1) = 0;
    // 0x80293F78: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F7C: sh          $zero, 0x3AA4($at)
    MEM_H(0X3AA4, ctx->r1) = 0;
    // 0x80293F80: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F84: sh          $zero, 0x3AA6($at)
    MEM_H(0X3AA6, ctx->r1) = 0;
    // 0x80293F88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F8C: sb          $zero, 0x3AA8($at)
    MEM_B(0X3AA8, ctx->r1) = 0;
    // 0x80293F90: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F94: sb          $zero, 0x39FE($at)
    MEM_B(0X39FE, ctx->r1) = 0;
    // 0x80293F98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293F9C: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
L_80293FA0:
    // 0x80293FA0: jr          $ra
    // 0x80293FA4: nop

    return;
    // 0x80293FA4: nop

;}
RECOMP_FUNC void func_80293FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80293FA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80293FAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293FB0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80293FB4: sb          $t8, 0x3A3E($at)
    MEM_B(0X3A3E, ctx->r1) = ctx->r24;
    // 0x80293FB8: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x80293FBC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80293FC0: lbu         $t9, 0x0($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X0);
    // 0x80293FC4: lbu         $t1, 0xA94($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XA94);
    // 0x80293FC8: addiu       $v1, $v1, 0x38C8
    ctx->r3 = ADD32(ctx->r3, 0X38C8);
    // 0x80293FCC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80293FD0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293FD4: sh          $t9, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r25;
    // 0x80293FD8: sh          $t1, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r9;
    // 0x80293FDC: sh          $a3, 0x38D2($at)
    MEM_H(0X38D2, ctx->r1) = ctx->r7;
    // 0x80293FE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293FE4: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x80293FE8: sh          $a0, 0x38D0($at)
    MEM_H(0X38D0, ctx->r1) = ctx->r4;
    // 0x80293FEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293FF0: subu        $t2, $t0, $a0
    ctx->r10 = SUB32(ctx->r8, ctx->r4);
    // 0x80293FF4: sh          $t2, 0x3944($at)
    MEM_H(0X3944, ctx->r1) = ctx->r10;
    // 0x80293FF8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80293FFC: sh          $a1, 0x38D4($at)
    MEM_H(0X38D4, ctx->r1) = ctx->r5;
    // 0x80294000: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294004: sh          $a3, 0x38D6($at)
    MEM_H(0X38D6, ctx->r1) = ctx->r7;
    // 0x80294008: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029400C: subu        $t3, $t0, $a1
    ctx->r11 = SUB32(ctx->r8, ctx->r5);
    // 0x80294010: sh          $t3, 0x3946($at)
    MEM_H(0X3946, ctx->r1) = ctx->r11;
    // 0x80294014: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294018: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x8029401C: sb          $t4, 0x38D8($at)
    MEM_B(0X38D8, ctx->r1) = ctx->r12;
    // 0x80294020: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294024: sb          $zero, 0x38D9($at)
    MEM_B(0X38D9, ctx->r1) = 0;
    // 0x80294028: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029402C: sh          $zero, 0x3AA4($at)
    MEM_H(0X3AA4, ctx->r1) = 0;
    // 0x80294030: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80294034: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294038: addiu       $v0, $v0, 0x3AA8
    ctx->r2 = ADD32(ctx->r2, 0X3AA8);
    // 0x8029403C: sh          $zero, 0x3AA6($at)
    MEM_H(0X3AA6, ctx->r1) = 0;
    // 0x80294040: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80294044: ori         $t6, $zero, 0x1
    ctx->r14 = 0 | 0X1;
    // 0x80294048: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x8029404C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294050: sb          $zero, 0x39FE($at)
    MEM_B(0X39FE, ctx->r1) = 0;
    // 0x80294054: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294058: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
    // 0x8029405C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294060: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80294064: sb          $t7, 0x3A20($at)
    MEM_B(0X3A20, ctx->r1) = ctx->r15;
    // 0x80294068: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029406C: sb          $zero, 0x3AA9($at)
    MEM_B(0X3AA9, ctx->r1) = 0;
    // 0x80294070: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294074: sb          $zero, 0x3AAA($at)
    MEM_B(0X3AAA, ctx->r1) = 0;
    // 0x80294078: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8029407C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80294080: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80294084: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80294088: jr          $ra
    // 0x8029408C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x8029408C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80294090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294090: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80294094: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294098: addiu       $a0, $a0, 0x38D9
    ctx->r4 = ADD32(ctx->r4, 0X38D9);
    // 0x8029409C: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x802940A0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x802940A4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802940A8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802940AC: lhu         $v1, 0x38D0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X38D0);
    // 0x802940B0: addiu       $a1, $a1, -0x3730
    ctx->r5 = ADD32(ctx->r5, -0X3730);
    // 0x802940B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802940B8:
    // 0x802940B8: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802940BC: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x802940C0: lhu         $t8, 0x5A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X5A);
    // 0x802940C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802940C8: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802940CC: beq         $at, $zero, L_802940E4
    if (ctx->r1 == 0) {
        // 0x802940D0: andi        $t1, $v0, 0xFF
        ctx->r9 = ctx->r2 & 0XFF;
            goto L_802940E4;
    }
    // 0x802940D0: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x802940D4: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x802940D8: nop

    // 0x802940DC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802940E0: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
L_802940E4:
    // 0x802940E4: slti        $at, $t1, 0x2E
    ctx->r1 = SIGNED(ctx->r9) < 0X2E ? 1 : 0;
    // 0x802940E8: bne         $at, $zero, L_802940B8
    if (ctx->r1 != 0) {
        // 0x802940EC: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802940B8;
    }
    // 0x802940EC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802940F0: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x802940F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802940F8: addiu       $t3, $t2, 0x6
    ctx->r11 = ADD32(ctx->r10, 0X6);
    // 0x802940FC: jr          $ra
    // 0x80294100: sb          $t3, 0x38D8($at)
    MEM_B(0X38D8, ctx->r1) = ctx->r11;
    return;
    // 0x80294100: sb          $t3, 0x38D8($at)
    MEM_B(0X38D8, ctx->r1) = ctx->r11;
;}
RECOMP_FUNC void func_80294104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294104: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80294108: addiu       $t0, $t0, 0x3944
    ctx->r8 = ADD32(ctx->r8, 0X3944);
    // 0x8029410C: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x80294110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294114: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x80294118: bne         $at, $zero, L_80294194
    if (ctx->r1 != 0) {
        // 0x8029411C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80294194;
    }
    // 0x8029411C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294120: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80294124: lbu         $t7, 0x38DF($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X38DF);
    // 0x80294128: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8029412C: beq         $t7, $at, L_80294194
    if (ctx->r15 == ctx->r1) {
        // 0x80294130: lui         $t8, 0x8011
        ctx->r24 = S32(0X8011 << 16);
            goto L_80294194;
    }
    // 0x80294130: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80294134: lh          $t8, -0x2FAE($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2FAE);
    // 0x80294138: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029413C: bne         $t8, $zero, L_80294194
    if (ctx->r24 != 0) {
        // 0x80294140: addiu       $v0, $v0, 0x39FE
        ctx->r2 = ADD32(ctx->r2, 0X39FE);
            goto L_80294194;
    }
    // 0x80294140: addiu       $v0, $v0, 0x39FE
    ctx->r2 = ADD32(ctx->r2, 0X39FE);
    // 0x80294144: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80294148: lbu         $t2, 0x39FF($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X39FF);
    // 0x8029414C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80294150: sltiu       $t3, $t2, 0x1
    ctx->r11 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x80294154: sltiu       $t1, $t9, 0x1
    ctx->r9 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80294158: and         $t4, $t1, $t3
    ctx->r12 = ctx->r9 & ctx->r11;
    // 0x8029415C: beq         $t4, $zero, L_80294194
    if (ctx->r12 == 0) {
        // 0x80294160: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_80294194;
    }
    // 0x80294160: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80294164: lhu         $t5, 0xB78($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB78);
    // 0x80294168: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8029416C: beq         $t5, $at, L_80294194
    if (ctx->r13 == ctx->r1) {
        // 0x80294170: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80294194;
    }
    // 0x80294170: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80294174: jal         0x80074D64
    // 0x80294178: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    func_80074D64(rdram, ctx);
        goto after_0;
    // 0x80294178: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    after_0:
    // 0x8029417C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80294180: sb          $zero, 0x39FF($at)
    MEM_B(0X39FF, ctx->r1) = 0;
    // 0x80294184: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80294188: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029418C: addiu       $t0, $t0, 0x3944
    ctx->r8 = ADD32(ctx->r8, 0X3944);
    // 0x80294190: sb          $zero, 0x3A00($at)
    MEM_B(0X3A00, ctx->r1) = 0;
L_80294194:
    // 0x80294194: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80294198: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x8029419C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802941A0: bne         $t7, $zero, L_80294270
    if (ctx->r15 != 0) {
        // 0x802941A4: nop
    
            goto L_80294270;
    }
    // 0x802941A4: nop

    // 0x802941A8: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802941AC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802941B0: lhu         $t9, 0xC2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XC2);
    // 0x802941B4: addiu       $a0, $a0, 0x38D6
    ctx->r4 = ADD32(ctx->r4, 0X38D6);
    // 0x802941B8: andi        $t2, $t9, 0x40
    ctx->r10 = ctx->r25 & 0X40;
    // 0x802941BC: bne         $t2, $zero, L_80294270
    if (ctx->r10 != 0) {
        // 0x802941C0: nop
    
            goto L_80294270;
    }
    // 0x802941C0: nop

    // 0x802941C4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802941C8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802941CC: bne         $v0, $zero, L_80294268
    if (ctx->r2 != 0) {
        // 0x802941D0: addiu       $a2, $a2, 0x38D4
        ctx->r6 = ADD32(ctx->r6, 0X38D4);
            goto L_80294268;
    }
    // 0x802941D0: addiu       $a2, $a2, 0x38D4
    ctx->r6 = ADD32(ctx->r6, 0X38D4);
    // 0x802941D4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802941D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802941DC: beq         $v0, $zero, L_80294260
    if (ctx->r2 == 0) {
        // 0x802941E0: addiu       $a1, $a1, 0x3946
        ctx->r5 = ADD32(ctx->r5, 0X3946);
            goto L_80294260;
    }
    // 0x802941E0: addiu       $a1, $a1, 0x3946
    ctx->r5 = ADD32(ctx->r5, 0X3946);
    // 0x802941E4: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x802941E8: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x802941EC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x802941F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802941F4: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
    // 0x802941F8: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x802941FC: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x80294200: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80294204: lhu         $v1, 0x3AAE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3AAE);
    // 0x80294208: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8029420C: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x80294210: bne         $at, $zero, L_80294260
    if (ctx->r1 != 0) {
        // 0x80294214: nop
    
            goto L_80294260;
    }
    // 0x80294214: nop

    // 0x80294218: bne         $v1, $t6, L_80294244
    if (ctx->r3 != ctx->r14) {
        // 0x8029421C: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_80294244;
    }
    // 0x8029421C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80294220: addiu       $a3, $a3, 0x3AA4
    ctx->r7 = ADD32(ctx->r7, 0X3AA4);
    // 0x80294224: lhu         $t7, 0x0($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X0);
    // 0x80294228: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8029422C: addiu       $v1, $v1, 0x3AB1
    ctx->r3 = ADD32(ctx->r3, 0X3AB1);
    // 0x80294230: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80294234: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80294238: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
    // 0x8029423C: b           L_80294270
    // 0x80294240: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_80294270;
    // 0x80294240: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_80294244:
    // 0x80294244: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80294248: addiu       $v1, $v1, 0x3AB1
    ctx->r3 = ADD32(ctx->r3, 0X3AB1);
    // 0x8029424C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80294250: nop

    // 0x80294254: beq         $v0, $zero, L_80294260
    if (ctx->r2 == 0) {
        // 0x80294258: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_80294260;
    }
    // 0x80294258: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x8029425C: sb          $t2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r10;
L_80294260:
    // 0x80294260: b           L_80294270
    // 0x80294264: nop

        goto L_80294270;
    // 0x80294264: nop

L_80294268:
    // 0x80294268: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x8029426C: sh          $t1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r9;
L_80294270:
    // 0x80294270: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80294274: addiu       $v1, $v1, 0x38D2
    ctx->r3 = ADD32(ctx->r3, 0X38D2);
    // 0x80294278: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8029427C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80294280: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x80294284: addiu       $a3, $a3, 0x3AA4
    ctx->r7 = ADD32(ctx->r7, 0X3AA4);
    // 0x80294288: bne         $v0, $zero, L_80294330
    if (ctx->r2 != 0) {
        // 0x8029428C: addiu       $a2, $a2, 0x38D4
        ctx->r6 = ADD32(ctx->r6, 0X38D4);
            goto L_80294330;
    }
    // 0x8029428C: addiu       $a2, $a2, 0x38D4
    ctx->r6 = ADD32(ctx->r6, 0X38D4);
    // 0x80294290: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80294294: addiu       $a1, $a1, 0x38D0
    ctx->r5 = ADD32(ctx->r5, 0X38D0);
    // 0x80294298: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8029429C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802942A0: beq         $v0, $zero, L_80294314
    if (ctx->r2 == 0) {
        // 0x802942A4: addiu       $a0, $a0, 0x3AB0
        ctx->r4 = ADD32(ctx->r4, 0X3AB0);
            goto L_80294314;
    }
    // 0x802942A4: addiu       $a0, $a0, 0x3AB0
    ctx->r4 = ADD32(ctx->r4, 0X3AB0);
    // 0x802942A8: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x802942AC: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x802942B0: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x802942B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802942B8: sh          $t4, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r12;
    // 0x802942BC: bne         $t6, $zero, L_80294308
    if (ctx->r14 != 0) {
        // 0x802942C0: sh          $t5, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r13;
            goto L_80294308;
    }
    // 0x802942C0: sh          $t5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r13;
    // 0x802942C4: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x802942C8: lhu         $t8, 0x0($a3)
    ctx->r24 = MEM_HU(ctx->r7, 0X0);
    // 0x802942CC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802942D0: addiu       $a0, $a0, 0x3AB0
    ctx->r4 = ADD32(ctx->r4, 0X3AB0);
    // 0x802942D4: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802942D8: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x802942DC: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    // 0x802942E0: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x802942E4: bgez        $t2, L_802942F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802942E8: sra         $t1, $t2, 1
        ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
            goto L_802942F4;
    }
    // 0x802942E8: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x802942EC: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x802942F0: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_802942F4:
    // 0x802942F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802942F8: jal         0x80294758
    // 0x802942FC: sh          $t1, 0x3AAE($at)
    MEM_H(0X3AAE, ctx->r1) = ctx->r9;
    func_80294758(rdram, ctx);
        goto after_1;
    // 0x802942FC: sh          $t1, 0x3AAE($at)
    MEM_H(0X3AAE, ctx->r1) = ctx->r9;
    after_1:
    // 0x80294300: b           L_8029442C
    // 0x80294304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029442C;
    // 0x80294304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294308:
    // 0x80294308: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x8029430C: b           L_80294428
    // 0x80294310: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
        goto L_80294428;
    // 0x80294310: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
L_80294314:
    // 0x80294314: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80294318: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x8029431C: beq         $v0, $zero, L_80294428
    if (ctx->r2 == 0) {
        // 0x80294320: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_80294428;
    }
    // 0x80294320: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x80294324: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    // 0x80294328: b           L_80294428
    // 0x8029432C: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
        goto L_80294428;
    // 0x8029432C: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_80294330:
    // 0x80294330: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80294334: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x80294338: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029433C: lbu         $a0, 0x38D9($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X38D9);
    // 0x80294340: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80294344: slti        $at, $a0, 0x2E
    ctx->r1 = SIGNED(ctx->r4) < 0X2E ? 1 : 0;
    // 0x80294348: beq         $at, $zero, L_80294428
    if (ctx->r1 == 0) {
        // 0x8029434C: addiu       $a1, $a1, 0x38D0
        ctx->r5 = ADD32(ctx->r5, 0X38D0);
            goto L_80294428;
    }
    // 0x8029434C: addiu       $a1, $a1, 0x38D0
    ctx->r5 = ADD32(ctx->r5, 0X38D0);
    // 0x80294350: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80294354: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80294358: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x8029435C: bne         $at, $zero, L_802943F0
    if (ctx->r1 != 0) {
        // 0x80294360: sll         $t2, $a0, 1
        ctx->r10 = S32(ctx->r4 << 1);
            goto L_802943F0;
    }
    // 0x80294360: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x80294364: lhu         $t7, 0xB74($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB74);
    // 0x80294368: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8029436C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x80294370: beq         $at, $zero, L_80294388
    if (ctx->r1 == 0) {
        // 0x80294374: lui         $t3, 0x802C
        ctx->r11 = S32(0X802C << 16);
            goto L_80294388;
    }
    // 0x80294374: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80294378: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8029437C: lbu         $v1, -0x309D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X309D);
    // 0x80294380: b           L_802943A0
    // 0x80294384: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
        goto L_802943A0;
    // 0x80294384: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
L_80294388:
    // 0x80294388: lb          $t8, -0x309D($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X309D);
    // 0x8029438C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80294390: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80294394: lbu         $v1, -0x35C8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35C8);
    // 0x80294398: nop

    // 0x8029439C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
L_802943A0:
    // 0x802943A0: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x802943A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802943A8: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x802943AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802943B0: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x802943B4: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x802943B8: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x802943BC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x802943C0: lhu         $t3, -0x3730($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X3730);
    // 0x802943C4: nop

    // 0x802943C8: bne         $v0, $t3, L_80294428
    if (ctx->r2 != ctx->r11) {
        // 0x802943CC: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80294428;
    }
    // 0x802943CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802943D0: addiu       $v0, $v0, 0x38D8
    ctx->r2 = ADD32(ctx->r2, 0X38D8);
    // 0x802943D4: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x802943D8: nop

    // 0x802943DC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802943E0: jal         0x80294438
    // 0x802943E4: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    func_80294438(rdram, ctx);
        goto after_2;
    // 0x802943E4: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    after_2:
    // 0x802943E8: b           L_8029442C
    // 0x802943EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029442C;
    // 0x802943EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802943F0:
    // 0x802943F0: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x802943F4: bne         $v0, $at, L_80294420
    if (ctx->r2 != ctx->r1) {
        // 0x802943F8: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80294420;
    }
    // 0x802943F8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802943FC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80294400: sb          $zero, 0x21FC($v0)
    MEM_B(0X21FC, ctx->r2) = 0;
    // 0x80294404: sb          $zero, 0x2238($v0)
    MEM_B(0X2238, ctx->r2) = 0;
    // 0x80294408: sb          $zero, 0x2274($v0)
    MEM_B(0X2274, ctx->r2) = 0;
    // 0x8029440C: sb          $zero, 0x22B0($v0)
    MEM_B(0X22B0, ctx->r2) = 0;
    // 0x80294410: jal         0x80294540
    // 0x80294414: sb          $zero, 0x22EC($v0)
    MEM_B(0X22EC, ctx->r2) = 0;
    func_80294540(rdram, ctx);
        goto after_3;
    // 0x80294414: sb          $zero, 0x22EC($v0)
    MEM_B(0X22EC, ctx->r2) = 0;
    after_3:
    // 0x80294418: b           L_8029442C
    // 0x8029441C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8029442C;
    // 0x8029441C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294420:
    // 0x80294420: jal         0x80294758
    // 0x80294424: nop

    func_80294758(rdram, ctx);
        goto after_4;
    // 0x80294424: nop

    after_4:
L_80294428:
    // 0x80294428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029442C:
    // 0x8029442C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294430: jr          $ra
    // 0x80294434: nop

    return;
    // 0x80294434: nop

;}
RECOMP_FUNC void func_80294438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029443C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294440: jal         0x80294468
    // 0x80294444: nop

    func_80294468(rdram, ctx);
        goto after_0;
    // 0x80294444: nop

    after_0:
    // 0x80294448: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029444C: addiu       $v0, $v0, 0x38D9
    ctx->r2 = ADD32(ctx->r2, 0X38D9);
    // 0x80294450: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80294454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80294458: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8029445C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80294460: jr          $ra
    // 0x80294464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80294464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80294468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294468: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029446C: lbu         $a1, 0x38D8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38D8);
    // 0x80294470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294474: slti        $at, $a1, 0x15
    ctx->r1 = SIGNED(ctx->r5) < 0X15 ? 1 : 0;
    // 0x80294478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029447C: beq         $at, $zero, L_802944C8
    if (ctx->r1 == 0) {
        // 0x80294480: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_802944C8;
    }
    // 0x80294480: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80294484: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294488: jal         0x8007AAF8
    // 0x8029448C: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x8029448C: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    after_0:
    // 0x80294490: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294494: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80294498: jal         0x8007AAF8
    // 0x8029449C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8029449C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_1:
    // 0x802944A0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802944A4: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x802944A8: jal         0x8007AAF8
    // 0x802944AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x802944AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_2:
    // 0x802944B0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802944B4: lbu         $a1, 0x38D8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38D8);
    // 0x802944B8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802944BC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x802944C0: b           L_802944D4
    // 0x802944C4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_802944D4;
    // 0x802944C4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_802944C8:
    // 0x802944C8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802944CC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x802944D0: sb          $zero, 0x2274($v1)
    MEM_B(0X2274, ctx->r3) = 0;
L_802944D4:
    // 0x802944D4: slti        $at, $v0, 0x25
    ctx->r1 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x802944D8: bne         $at, $zero, L_80294508
    if (ctx->r1 != 0) {
        // 0x802944DC: slti        $at, $v0, 0x33
        ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
            goto L_80294508;
    }
    // 0x802944DC: slti        $at, $v0, 0x33
    ctx->r1 = SIGNED(ctx->r2) < 0X33 ? 1 : 0;
    // 0x802944E0: sb          $zero, 0x2274($v1)
    MEM_B(0X2274, ctx->r3) = 0;
    // 0x802944E4: beq         $at, $zero, L_80294500
    if (ctx->r1 == 0) {
        // 0x802944E8: sb          $zero, 0x22B0($v1)
        MEM_B(0X22B0, ctx->r3) = 0;
            goto L_80294500;
    }
    // 0x802944E8: sb          $zero, 0x22B0($v1)
    MEM_B(0X22B0, ctx->r3) = 0;
    // 0x802944EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802944F0: jal         0x8007AAF8
    // 0x802944F4: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    func_8007AAF8(rdram, ctx);
        goto after_3;
    // 0x802944F4: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    after_3:
    // 0x802944F8: b           L_80294534
    // 0x802944FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80294534;
    // 0x802944FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294500:
    // 0x80294500: b           L_80294530
    // 0x80294504: sb          $zero, 0x22EC($v1)
    MEM_B(0X22EC, ctx->r3) = 0;
        goto L_80294530;
    // 0x80294504: sb          $zero, 0x22EC($v1)
    MEM_B(0X22EC, ctx->r3) = 0;
L_80294508:
    // 0x80294508: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8029450C: bne         $at, $zero, L_80294530
    if (ctx->r1 != 0) {
        // 0x80294510: lui         $a0, 0x8010
        ctx->r4 = S32(0X8010 << 16);
            goto L_80294530;
    }
    // 0x80294510: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294514: sb          $zero, 0x2274($v1)
    MEM_B(0X2274, ctx->r3) = 0;
    // 0x80294518: jal         0x8007AAF8
    // 0x8029451C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8029451C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    after_4:
    // 0x80294520: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294524: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x80294528: jal         0x8007AAF8
    // 0x8029452C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_8007AAF8(rdram, ctx);
        goto after_5;
    // 0x8029452C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_5:
L_80294530:
    // 0x80294530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294534:
    // 0x80294534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294538: jr          $ra
    // 0x8029453C: nop

    return;
    // 0x8029453C: nop

;}
RECOMP_FUNC void func_80294540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294540: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80294544: lhu         $t6, 0xB74($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB74);
    // 0x80294548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029454C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80294550: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294554: beq         $t7, $zero, L_80294564
    if (ctx->r15 == 0) {
        // 0x80294558: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80294564;
    }
    // 0x80294558: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8029455C: b           L_80294568
    // 0x80294560: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
        goto L_80294568;
    // 0x80294560: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
L_80294564:
    // 0x80294564: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80294568:
    // 0x80294568: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8029456C: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294570: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80294574: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294578: sb          $t8, 0x2238($s0)
    MEM_B(0X2238, ctx->r16) = ctx->r24;
    // 0x8029457C: jal         0x8007AAF8
    // 0x80294580: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80294580: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    after_0:
    // 0x80294584: lbu         $t9, 0x223D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X223D);
    // 0x80294588: lbu         $t1, 0x223C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X223C);
    // 0x8029458C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80294590: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80294594: addiu       $t5, $zero, 0x100
    ctx->r13 = ADD32(0, 0X100);
    // 0x80294598: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8029459C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802945A0: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x802945A4: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x802945A8: sb          $t0, 0x223D($s0)
    MEM_B(0X223D, ctx->r16) = ctx->r8;
    // 0x802945AC: sb          $t2, 0x223C($s0)
    MEM_B(0X223C, ctx->r16) = ctx->r10;
    // 0x802945B0: sb          $t3, 0x2245($s0)
    MEM_B(0X2245, ctx->r16) = ctx->r11;
    // 0x802945B4: sb          $t4, 0x2239($s0)
    MEM_B(0X2239, ctx->r16) = ctx->r12;
    // 0x802945B8: sh          $t5, 0x224C($s0)
    MEM_H(0X224C, ctx->r16) = ctx->r13;
    // 0x802945BC: sh          $t6, 0x2250($s0)
    MEM_H(0X2250, ctx->r16) = ctx->r14;
    // 0x802945C0: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x802945C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802945C8: jal         0x8002135C
    // 0x802945CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x802945CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802945D0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802945D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802945D8: sb          $t7, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r15;
    // 0x802945DC: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x802945E0: jal         0x8007AAF8
    // 0x802945E4: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x802945E4: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    after_2:
    // 0x802945E8: lbu         $t8, 0x2201($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2201);
    // 0x802945EC: lbu         $t0, 0x2200($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2200);
    // 0x802945F0: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802945F4: addiu       $t3, $zero, 0xF8
    ctx->r11 = ADD32(0, 0XF8);
    // 0x802945F8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x802945FC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294600: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x80294604: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x80294608: sb          $t9, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r25;
    // 0x8029460C: sb          $t1, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r9;
    // 0x80294610: sb          $t2, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r10;
    // 0x80294614: sh          $t3, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r11;
    // 0x80294618: sh          $t4, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r12;
    // 0x8029461C: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x80294620: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294624: jal         0x8002135C
    // 0x80294628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80294628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8029462C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80294630: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294634: sb          $t5, 0x22EC($s0)
    MEM_B(0X22EC, ctx->r16) = ctx->r13;
    // 0x80294638: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029463C: jal         0x8007AAF8
    // 0x80294640: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80294640: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_4:
    // 0x80294644: lbu         $t6, 0x22F1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X22F1);
    // 0x80294648: lbu         $t8, 0x22F0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X22F0);
    // 0x8029464C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x80294650: addiu       $t1, $zero, 0x110
    ctx->r9 = ADD32(0, 0X110);
    // 0x80294654: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80294658: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029465C: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x80294660: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80294664: sb          $t7, 0x22F1($s0)
    MEM_B(0X22F1, ctx->r16) = ctx->r15;
    // 0x80294668: sb          $t9, 0x22F0($s0)
    MEM_B(0X22F0, ctx->r16) = ctx->r25;
    // 0x8029466C: sb          $t0, 0x22ED($s0)
    MEM_B(0X22ED, ctx->r16) = ctx->r8;
    // 0x80294670: sh          $t1, 0x2300($s0)
    MEM_H(0X2300, ctx->r16) = ctx->r9;
    // 0x80294674: sh          $t2, 0x2304($s0)
    MEM_H(0X2304, ctx->r16) = ctx->r10;
    // 0x80294678: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8029467C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294680: jal         0x8002135C
    // 0x80294684: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80294684: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80294688: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8029468C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294690: sb          $t3, 0x2328($s0)
    MEM_B(0X2328, ctx->r16) = ctx->r11;
    // 0x80294694: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x80294698: jal         0x8007AAF8
    // 0x8029469C: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8029469C: addiu       $a1, $zero, 0x45
    ctx->r5 = ADD32(0, 0X45);
    after_6:
    // 0x802946A0: lbu         $t4, 0x232D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X232D);
    // 0x802946A4: lbu         $t6, 0x232C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X232C);
    // 0x802946A8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802946AC: addiu       $t9, $zero, 0x108
    ctx->r25 = ADD32(0, 0X108);
    // 0x802946B0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x802946B4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802946B8: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x802946BC: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x802946C0: sb          $t5, 0x232D($s0)
    MEM_B(0X232D, ctx->r16) = ctx->r13;
    // 0x802946C4: sb          $t7, 0x232C($s0)
    MEM_B(0X232C, ctx->r16) = ctx->r15;
    // 0x802946C8: sb          $t8, 0x2329($s0)
    MEM_B(0X2329, ctx->r16) = ctx->r24;
    // 0x802946CC: sh          $t9, 0x233C($s0)
    MEM_H(0X233C, ctx->r16) = ctx->r25;
    // 0x802946D0: sh          $t0, 0x2340($s0)
    MEM_H(0X2340, ctx->r16) = ctx->r8;
    // 0x802946D4: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x802946D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802946DC: jal         0x8002135C
    // 0x802946E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x802946E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x802946E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802946E8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802946EC: sb          $t1, 0x2364($s0)
    MEM_B(0X2364, ctx->r16) = ctx->r9;
    // 0x802946F0: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x802946F4: jal         0x8007AAF8
    // 0x802946F8: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_8007AAF8(rdram, ctx);
        goto after_8;
    // 0x802946F8: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_8:
    // 0x802946FC: lbu         $t2, 0x2369($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2369);
    // 0x80294700: lbu         $t4, 0x2368($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X2368);
    // 0x80294704: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80294708: addiu       $t7, $zero, 0x118
    ctx->r15 = ADD32(0, 0X118);
    // 0x8029470C: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80294710: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294714: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x80294718: andi        $t5, $t4, 0xFF01
    ctx->r13 = ctx->r12 & 0XFF01;
    // 0x8029471C: sb          $t3, 0x2369($s0)
    MEM_B(0X2369, ctx->r16) = ctx->r11;
    // 0x80294720: sb          $t5, 0x2368($s0)
    MEM_B(0X2368, ctx->r16) = ctx->r13;
    // 0x80294724: sb          $t6, 0x2365($s0)
    MEM_B(0X2365, ctx->r16) = ctx->r14;
    // 0x80294728: sh          $t7, 0x2378($s0)
    MEM_H(0X2378, ctx->r16) = ctx->r15;
    // 0x8029472C: sh          $t8, 0x237C($s0)
    MEM_H(0X237C, ctx->r16) = ctx->r24;
    // 0x80294730: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x80294734: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294738: jal         0x8002135C
    // 0x8029473C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8029473C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80294740: jal         0x80294758
    // 0x80294744: nop

    func_80294758(rdram, ctx);
        goto after_10;
    // 0x80294744: nop

    after_10:
    // 0x80294748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029474C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80294750: jr          $ra
    // 0x80294754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80294754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80294758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294758: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029475C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80294760: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80294764: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80294768: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8029476C: beq         $v1, $v0, L_80294928
    if (ctx->r3 == ctx->r2) {
        // 0x80294770: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80294928;
    }
    // 0x80294770: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80294774: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80294778: beq         $v0, $at, L_80294928
    if (ctx->r2 == ctx->r1) {
        // 0x8029477C: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80294928;
    }
    // 0x8029477C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80294780: beq         $v0, $at, L_80294928
    if (ctx->r2 == ctx->r1) {
        // 0x80294784: lui         $t6, 0x802C
        ctx->r14 = S32(0X802C << 16);
            goto L_80294928;
    }
    // 0x80294784: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80294788: lhu         $t6, 0x38D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X38D0);
    // 0x8029478C: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294790: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x80294794: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294798: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8029479C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802947A0: bne         $v1, $zero, L_802947AC
    if (ctx->r3 != 0) {
        // 0x802947A4: nop
    
            goto L_802947AC;
    }
    // 0x802947A4: nop

    // 0x802947A8: break       7
    do_break(2150188968);
L_802947AC:
    // 0x802947AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802947B0: bne         $v1, $at, L_802947C4
    if (ctx->r3 != ctx->r1) {
        // 0x802947B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802947C4;
    }
    // 0x802947B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802947B8: bne         $t6, $at, L_802947C4
    if (ctx->r14 != ctx->r1) {
        // 0x802947BC: nop
    
            goto L_802947C4;
    }
    // 0x802947BC: nop

    // 0x802947C0: break       6
    do_break(2150188992);
L_802947C4:
    // 0x802947C4: sb          $t8, 0x2274($s0)
    MEM_B(0X2274, ctx->r16) = ctx->r24;
    // 0x802947C8: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x802947CC: mflo        $t7
    ctx->r15 = lo;
    // 0x802947D0: addiu       $a1, $t7, 0x45
    ctx->r5 = ADD32(ctx->r15, 0X45);
    // 0x802947D4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x802947D8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802947DC: jal         0x8007AAF8
    // 0x802947E0: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x802947E0: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    after_0:
    // 0x802947E4: lbu         $t0, 0x2279($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2279);
    // 0x802947E8: lbu         $t2, 0x2278($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2278);
    // 0x802947EC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x802947F0: addiu       $t5, $zero, 0x120
    ctx->r13 = ADD32(0, 0X120);
    // 0x802947F4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802947F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802947FC: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80294800: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x80294804: sb          $t1, 0x2279($s0)
    MEM_B(0X2279, ctx->r16) = ctx->r9;
    // 0x80294808: sb          $t3, 0x2278($s0)
    MEM_B(0X2278, ctx->r16) = ctx->r11;
    // 0x8029480C: sb          $t4, 0x2275($s0)
    MEM_B(0X2275, ctx->r16) = ctx->r12;
    // 0x80294810: sh          $t5, 0x2288($s0)
    MEM_H(0X2288, ctx->r16) = ctx->r13;
    // 0x80294814: sh          $t6, 0x228C($s0)
    MEM_H(0X228C, ctx->r16) = ctx->r14;
    // 0x80294818: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8029481C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294820: jal         0x8002135C
    // 0x80294824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80294824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80294828: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8029482C: lhu         $v0, 0x38D0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38D0);
    // 0x80294830: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294834: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80294838: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029483C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294840: sb          $t9, 0x22B0($s0)
    MEM_B(0X22B0, ctx->r16) = ctx->r25;
    // 0x80294844: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80294848: mfhi        $t8
    ctx->r24 = hi;
    // 0x8029484C: addiu       $a1, $t8, 0x45
    ctx->r5 = ADD32(ctx->r24, 0X45);
    // 0x80294850: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80294854: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80294858: jal         0x8007AAF8
    // 0x8029485C: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8029485C: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    after_2:
    // 0x80294860: lbu         $t1, 0x22B5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X22B5);
    // 0x80294864: lbu         $t3, 0x22B4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X22B4);
    // 0x80294868: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8029486C: addiu       $t6, $zero, 0x128
    ctx->r14 = ADD32(0, 0X128);
    // 0x80294870: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80294874: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294878: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x8029487C: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80294880: sb          $t2, 0x22B5($s0)
    MEM_B(0X22B5, ctx->r16) = ctx->r10;
    // 0x80294884: sb          $t4, 0x22B4($s0)
    MEM_B(0X22B4, ctx->r16) = ctx->r12;
    // 0x80294888: sb          $t5, 0x22B1($s0)
    MEM_B(0X22B1, ctx->r16) = ctx->r13;
    // 0x8029488C: sh          $t6, 0x22C4($s0)
    MEM_H(0X22C4, ctx->r16) = ctx->r14;
    // 0x80294890: sh          $t7, 0x22C8($s0)
    MEM_H(0X22C8, ctx->r16) = ctx->r15;
    // 0x80294894: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x80294898: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029489C: jal         0x8002135C
    // 0x802948A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x802948A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802948A4: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x802948A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802948AC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x802948B0: bne         $v1, $zero, L_802948C8
    if (ctx->r3 != 0) {
        // 0x802948B4: addiu       $a0, $a0, 0x6B00
        ctx->r4 = ADD32(ctx->r4, 0X6B00);
            goto L_802948C8;
    }
    // 0x802948B4: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x802948B8: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x802948BC: nop

    // 0x802948C0: sltu        $t9, $zero, $v1
    ctx->r25 = 0 < ctx->r3 ? 1 : 0;
    // 0x802948C4: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_802948C8:
    // 0x802948C8: bne         $v1, $zero, L_80294928
    if (ctx->r3 != 0) {
        // 0x802948CC: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80294928;
    }
    // 0x802948CC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802948D0: jal         0x8002135C
    // 0x802948D4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x802948D4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_4:
    // 0x802948D8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802948DC: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x802948E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802948E4: jal         0x8002135C
    // 0x802948E8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x802948E8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_5:
    // 0x802948EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802948F0: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x802948F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802948F8: jal         0x8002135C
    // 0x802948FC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x802948FC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x80294900: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294904: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x80294908: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029490C: jal         0x8002135C
    // 0x80294910: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80294910: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_7:
    // 0x80294914: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294918: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8029491C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294920: jal         0x8002135C
    // 0x80294924: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80294924: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_8:
L_80294928:
    // 0x80294928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8029492C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80294930: jr          $ra
    // 0x80294934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80294934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80294938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029493C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80294940: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80294944: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294948: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x8029494C: addiu       $s1, $s1, 0x7334
    ctx->r17 = ADD32(ctx->r17, 0X7334);
    // 0x80294950: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294954: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294958: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8029495C: sb          $t6, 0x2AA8($s0)
    MEM_B(0X2AA8, ctx->r16) = ctx->r14;
    // 0x80294960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80294964: jal         0x8007AAF8
    // 0x80294968: addiu       $a1, $zero, 0x1E4
    ctx->r5 = ADD32(0, 0X1E4);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80294968: addiu       $a1, $zero, 0x1E4
    ctx->r5 = ADD32(0, 0X1E4);
    after_0:
    // 0x8029496C: lbu         $t9, 0x2AAC($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2AAC);
    // 0x80294970: lbu         $t7, 0x2AAD($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2AAD);
    // 0x80294974: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80294978: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x8029497C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80294980: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x80294984: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80294988: sb          $t8, 0x2AAD($s0)
    MEM_B(0X2AAD, ctx->r16) = ctx->r24;
    // 0x8029498C: sb          $t1, 0x2AAC($s0)
    MEM_B(0X2AAC, ctx->r16) = ctx->r9;
    // 0x80294990: sb          $t2, 0x2AB5($s0)
    MEM_B(0X2AB5, ctx->r16) = ctx->r10;
    // 0x80294994: sb          $t3, 0x2AA9($s0)
    MEM_B(0X2AA9, ctx->r16) = ctx->r11;
    // 0x80294998: sh          $zero, 0x2ABC($s0)
    MEM_H(0X2ABC, ctx->r16) = 0;
    // 0x8029499C: sh          $zero, 0x2AC0($s0)
    MEM_H(0X2AC0, ctx->r16) = 0;
    // 0x802949A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802949A4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802949A8: jal         0x8002135C
    // 0x802949AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x802949AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802949B0: jal         0x80294EF4
    // 0x802949B4: nop

    func_80294EF4(rdram, ctx);
        goto after_2;
    // 0x802949B4: nop

    after_2:
    // 0x802949B8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802949BC: addiu       $s1, $s1, -0x2CF0
    ctx->r17 = ADD32(ctx->r17, -0X2CF0);
    // 0x802949C0: lhu         $t4, 0x8($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8);
    // 0x802949C4: nop

    // 0x802949C8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802949CC: beq         $t5, $zero, L_80294A0C
    if (ctx->r13 == 0) {
        // 0x802949D0: nop
    
            goto L_80294A0C;
    }
    // 0x802949D0: nop

    // 0x802949D4: lbu         $a1, 0xA94($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA94);
    // 0x802949D8: jal         0x80294F80
    // 0x802949DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80294F80(rdram, ctx);
        goto after_3;
    // 0x802949DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802949E0: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    // 0x802949E4: jal         0x80294BE8
    // 0x802949E8: nop

    func_80294BE8(rdram, ctx);
        goto after_4;
    // 0x802949E8: nop

    after_4:
    // 0x802949EC: lhu         $a0, 0xA9E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA9E);
    // 0x802949F0: jal         0x80294AB0
    // 0x802949F4: nop

    func_80294AB0(rdram, ctx);
        goto after_5;
    // 0x802949F4: nop

    after_5:
    // 0x802949F8: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x802949FC: jal         0x80294F80
    // 0x80294A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80294F80(rdram, ctx);
        goto after_6;
    // 0x80294A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x80294A04: b           L_80294A3C
    // 0x80294A08: nop

        goto L_80294A3C;
    // 0x80294A08: nop

L_80294A0C:
    // 0x80294A0C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x80294A10: jal         0x80294F80
    // 0x80294A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80294F80(rdram, ctx);
        goto after_7;
    // 0x80294A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80294A18: lhu         $a0, 0xA9E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA9E);
    // 0x80294A1C: jal         0x80294BE8
    // 0x80294A20: nop

    func_80294BE8(rdram, ctx);
        goto after_8;
    // 0x80294A20: nop

    after_8:
    // 0x80294A24: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    // 0x80294A28: jal         0x80294AB0
    // 0x80294A2C: nop

    func_80294AB0(rdram, ctx);
        goto after_9;
    // 0x80294A2C: nop

    after_9:
    // 0x80294A30: lbu         $a1, 0xA94($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA94);
    // 0x80294A34: jal         0x80294F80
    // 0x80294A38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80294F80(rdram, ctx);
        goto after_10;
    // 0x80294A38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
L_80294A3C:
    // 0x80294A3C: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x80294A40: addiu       $s1, $s1, 0x74D8
    ctx->r17 = ADD32(ctx->r17, 0X74D8);
    // 0x80294A44: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80294A48: sb          $t6, 0x2C4C($s0)
    MEM_B(0X2C4C, ctx->r16) = ctx->r14;
    // 0x80294A4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80294A50: jal         0x8007AAF8
    // 0x80294A54: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8007AAF8(rdram, ctx);
        goto after_11;
    // 0x80294A54: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_11:
    // 0x80294A58: lbu         $t7, 0x2C51($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2C51);
    // 0x80294A5C: lbu         $t9, 0x2C50($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2C50);
    // 0x80294A60: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80294A64: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80294A68: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x80294A6C: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80294A70: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80294A74: sb          $t8, 0x2C51($s0)
    MEM_B(0X2C51, ctx->r16) = ctx->r24;
    // 0x80294A78: sb          $t0, 0x2C50($s0)
    MEM_B(0X2C50, ctx->r16) = ctx->r8;
    // 0x80294A7C: sb          $t1, 0x2C59($s0)
    MEM_B(0X2C59, ctx->r16) = ctx->r9;
    // 0x80294A80: sb          $t2, 0x2C4D($s0)
    MEM_B(0X2C4D, ctx->r16) = ctx->r10;
    // 0x80294A84: sh          $zero, 0x2C60($s0)
    MEM_H(0X2C60, ctx->r16) = 0;
    // 0x80294A88: sh          $t3, 0x2C64($s0)
    MEM_H(0X2C64, ctx->r16) = ctx->r11;
    // 0x80294A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80294A90: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294A94: jal         0x8002135C
    // 0x80294A98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x80294A98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80294A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80294AA0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80294AA4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80294AA8: jr          $ra
    // 0x80294AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80294AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80294AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294AB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80294AB4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80294AB8: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80294ABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294AC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80294AC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80294AC8: bne         $at, $zero, L_80294B5C
    if (ctx->r1 != 0) {
        // 0x80294ACC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80294B5C;
    }
    // 0x80294ACC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80294AD0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294AD4: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x80294AD8: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294ADC: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294AE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80294AE4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294AE8: sb          $t7, 0x2B20($s0)
    MEM_B(0X2B20, ctx->r16) = ctx->r15;
    // 0x80294AEC: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    // 0x80294AF0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80294AF4: mflo        $t8
    ctx->r24 = lo;
    // 0x80294AF8: addiu       $a1, $t8, 0x50
    ctx->r5 = ADD32(ctx->r24, 0X50);
    // 0x80294AFC: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80294B00: jal         0x8007AAF8
    // 0x80294B04: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80294B04: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x80294B08: lbu         $t0, 0x2B25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2B25);
    // 0x80294B0C: lbu         $t2, 0x2B24($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2B24);
    // 0x80294B10: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80294B14: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80294B18: addiu       $t6, $zero, -0x8
    ctx->r14 = ADD32(0, -0X8);
    // 0x80294B1C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80294B20: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294B24: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80294B28: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x80294B2C: sb          $t1, 0x2B25($s0)
    MEM_B(0X2B25, ctx->r16) = ctx->r9;
    // 0x80294B30: sb          $t3, 0x2B24($s0)
    MEM_B(0X2B24, ctx->r16) = ctx->r11;
    // 0x80294B34: sb          $t4, 0x2B2D($s0)
    MEM_B(0X2B2D, ctx->r16) = ctx->r12;
    // 0x80294B38: sb          $t5, 0x2B21($s0)
    MEM_B(0X2B21, ctx->r16) = ctx->r13;
    // 0x80294B3C: sh          $t6, 0x2B34($s0)
    MEM_H(0X2B34, ctx->r16) = ctx->r14;
    // 0x80294B40: sh          $t7, 0x2B38($s0)
    MEM_H(0X2B38, ctx->r16) = ctx->r15;
    // 0x80294B44: addiu       $a0, $a0, 0x73AC
    ctx->r4 = ADD32(ctx->r4, 0X73AC);
    // 0x80294B48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294B4C: jal         0x8002135C
    // 0x80294B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80294B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80294B54: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80294B58: nop

L_80294B5C:
    // 0x80294B5C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294B60: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80294B64: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294B68: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294B6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80294B70: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294B74: sb          $t8, 0x2B5C($s0)
    MEM_B(0X2B5C, ctx->r16) = ctx->r24;
    // 0x80294B78: addiu       $a0, $a0, 0x73E8
    ctx->r4 = ADD32(ctx->r4, 0X73E8);
    // 0x80294B7C: mfhi        $t9
    ctx->r25 = hi;
    // 0x80294B80: addiu       $a1, $t9, 0x50
    ctx->r5 = ADD32(ctx->r25, 0X50);
    // 0x80294B84: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80294B88: jal         0x8007AAF8
    // 0x80294B8C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x80294B8C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_2:
    // 0x80294B90: lbu         $t1, 0x2B61($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2B61);
    // 0x80294B94: lbu         $t3, 0x2B60($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2B60);
    // 0x80294B98: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80294B9C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80294BA0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80294BA4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294BA8: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x80294BAC: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80294BB0: sb          $t2, 0x2B61($s0)
    MEM_B(0X2B61, ctx->r16) = ctx->r10;
    // 0x80294BB4: sb          $t4, 0x2B60($s0)
    MEM_B(0X2B60, ctx->r16) = ctx->r12;
    // 0x80294BB8: sb          $t5, 0x2B69($s0)
    MEM_B(0X2B69, ctx->r16) = ctx->r13;
    // 0x80294BBC: sb          $t6, 0x2B5D($s0)
    MEM_B(0X2B5D, ctx->r16) = ctx->r14;
    // 0x80294BC0: sh          $zero, 0x2B70($s0)
    MEM_H(0X2B70, ctx->r16) = 0;
    // 0x80294BC4: sh          $t7, 0x2B74($s0)
    MEM_H(0X2B74, ctx->r16) = ctx->r15;
    // 0x80294BC8: addiu       $a0, $a0, 0x73E8
    ctx->r4 = ADD32(ctx->r4, 0X73E8);
    // 0x80294BCC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294BD0: jal         0x8002135C
    // 0x80294BD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80294BD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80294BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80294BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80294BE0: jr          $ra
    // 0x80294BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80294BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80294BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294BE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80294BEC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80294BF0: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80294BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294BF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80294BFC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80294C00: beq         $at, $zero, L_80294C84
    if (ctx->r1 == 0) {
        // 0x80294C04: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80294C84;
    }
    // 0x80294C04: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80294C08: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294C0C: addiu       $a1, $t6, 0x50
    ctx->r5 = ADD32(ctx->r14, 0X50);
    // 0x80294C10: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294C14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80294C18: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80294C1C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294C20: sb          $t7, 0x2B98($s0)
    MEM_B(0X2B98, ctx->r16) = ctx->r15;
    // 0x80294C24: addiu       $a0, $a0, 0x7424
    ctx->r4 = ADD32(ctx->r4, 0X7424);
    // 0x80294C28: jal         0x8007AAF8
    // 0x80294C2C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80294C2C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x80294C30: lbu         $t9, 0x2B9D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2B9D);
    // 0x80294C34: lbu         $t1, 0x2B9C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2B9C);
    // 0x80294C38: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80294C3C: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x80294C40: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80294C44: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80294C48: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294C4C: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x80294C50: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x80294C54: sb          $t0, 0x2B9D($s0)
    MEM_B(0X2B9D, ctx->r16) = ctx->r8;
    // 0x80294C58: sb          $t2, 0x2B9C($s0)
    MEM_B(0X2B9C, ctx->r16) = ctx->r10;
    // 0x80294C5C: sb          $t3, 0x2BA5($s0)
    MEM_B(0X2BA5, ctx->r16) = ctx->r11;
    // 0x80294C60: sb          $t4, 0x2B99($s0)
    MEM_B(0X2B99, ctx->r16) = ctx->r12;
    // 0x80294C64: sh          $t5, 0x2BAC($s0)
    MEM_H(0X2BAC, ctx->r16) = ctx->r13;
    // 0x80294C68: sh          $t6, 0x2BB0($s0)
    MEM_H(0X2BB0, ctx->r16) = ctx->r14;
    // 0x80294C6C: addiu       $a0, $a0, 0x7424
    ctx->r4 = ADD32(ctx->r4, 0X7424);
    // 0x80294C70: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294C74: jal         0x8002135C
    // 0x80294C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80294C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80294C7C: b           L_80294D88
    // 0x80294C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80294D88;
    // 0x80294C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80294C84:
    // 0x80294C84: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294C88: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80294C8C: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80294C90: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x80294C94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80294C98: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294C9C: sb          $t7, 0x2B98($s0)
    MEM_B(0X2B98, ctx->r16) = ctx->r15;
    // 0x80294CA0: addiu       $a0, $a0, 0x7424
    ctx->r4 = ADD32(ctx->r4, 0X7424);
    // 0x80294CA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80294CA8: mflo        $t8
    ctx->r24 = lo;
    // 0x80294CAC: addiu       $a1, $t8, 0x50
    ctx->r5 = ADD32(ctx->r24, 0X50);
    // 0x80294CB0: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80294CB4: jal         0x8007AAF8
    // 0x80294CB8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x80294CB8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
    // 0x80294CBC: lbu         $t0, 0x2B9D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2B9D);
    // 0x80294CC0: lbu         $t2, 0x2B9C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2B9C);
    // 0x80294CC4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80294CC8: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80294CCC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80294CD0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80294CD4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294CD8: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x80294CDC: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x80294CE0: sb          $t1, 0x2B9D($s0)
    MEM_B(0X2B9D, ctx->r16) = ctx->r9;
    // 0x80294CE4: sb          $t3, 0x2B9C($s0)
    MEM_B(0X2B9C, ctx->r16) = ctx->r11;
    // 0x80294CE8: sb          $t4, 0x2BA5($s0)
    MEM_B(0X2BA5, ctx->r16) = ctx->r12;
    // 0x80294CEC: sb          $t5, 0x2B99($s0)
    MEM_B(0X2B99, ctx->r16) = ctx->r13;
    // 0x80294CF0: sh          $t6, 0x2BAC($s0)
    MEM_H(0X2BAC, ctx->r16) = ctx->r14;
    // 0x80294CF4: sh          $t7, 0x2BB0($s0)
    MEM_H(0X2BB0, ctx->r16) = ctx->r15;
    // 0x80294CF8: addiu       $a0, $a0, 0x7424
    ctx->r4 = ADD32(ctx->r4, 0X7424);
    // 0x80294CFC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294D00: jal         0x8002135C
    // 0x80294D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80294D04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80294D08: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80294D0C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80294D10: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80294D14: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80294D18: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294D1C: sb          $t8, 0x2BD4($s0)
    MEM_B(0X2BD4, ctx->r16) = ctx->r24;
    // 0x80294D20: addiu       $a0, $a0, 0x7460
    ctx->r4 = ADD32(ctx->r4, 0X7460);
    // 0x80294D24: mfhi        $t9
    ctx->r25 = hi;
    // 0x80294D28: addiu       $a1, $t9, 0x50
    ctx->r5 = ADD32(ctx->r25, 0X50);
    // 0x80294D2C: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80294D30: jal         0x8007AAF8
    // 0x80294D34: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80294D34: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_4:
    // 0x80294D38: lbu         $t1, 0x2BD9($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2BD9);
    // 0x80294D3C: lbu         $t3, 0x2BD8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2BD8);
    // 0x80294D40: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80294D44: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80294D48: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80294D4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80294D50: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294D54: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x80294D58: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80294D5C: sb          $t2, 0x2BD9($s0)
    MEM_B(0X2BD9, ctx->r16) = ctx->r10;
    // 0x80294D60: sb          $t4, 0x2BD8($s0)
    MEM_B(0X2BD8, ctx->r16) = ctx->r12;
    // 0x80294D64: sb          $t5, 0x2BE1($s0)
    MEM_B(0X2BE1, ctx->r16) = ctx->r13;
    // 0x80294D68: sb          $t6, 0x2BD5($s0)
    MEM_B(0X2BD5, ctx->r16) = ctx->r14;
    // 0x80294D6C: sh          $t7, 0x2BE8($s0)
    MEM_H(0X2BE8, ctx->r16) = ctx->r15;
    // 0x80294D70: sh          $t8, 0x2BEC($s0)
    MEM_H(0X2BEC, ctx->r16) = ctx->r24;
    // 0x80294D74: addiu       $a0, $a0, 0x7460
    ctx->r4 = ADD32(ctx->r4, 0X7460);
    // 0x80294D78: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294D7C: jal         0x8002135C
    // 0x80294D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80294D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80294D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80294D88:
    // 0x80294D88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80294D8C: jr          $ra
    // 0x80294D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80294D90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80294D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80294D98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80294D9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80294DA0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80294DA4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80294DA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294DAC: lhu         $a3, 0x2E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X2E);
    // 0x80294DB0: lhu         $a2, 0x2A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X2A);
    // 0x80294DB4: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x80294DB8: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80294DBC: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80294DC0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80294DC4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80294DC8: jal         0x8000E0A8
    // 0x80294DCC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x80294DCC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80294DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80294DD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80294DD8: jr          $ra
    // 0x80294DDC: nop

    return;
    // 0x80294DDC: nop

;}
RECOMP_FUNC void func_80294DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294DE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80294DE8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80294DEC: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x80294DF0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80294DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294DF8: bne         $t8, $zero, L_80294E74
    if (ctx->r24 != 0) {
        // 0x80294DFC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80294E74;
    }
    // 0x80294DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80294E00: beq         $t7, $zero, L_80294E6C
    if (ctx->r15 == 0) {
        // 0x80294E04: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80294E6C;
    }
    // 0x80294E04: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80294E08: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80294E0C: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x80294E10: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80294E14: bne         $t9, $at, L_80294E34
    if (ctx->r25 != ctx->r1) {
        // 0x80294E18: addiu       $a0, $zero, 0x30
        ctx->r4 = ADD32(0, 0X30);
            goto L_80294E34;
    }
    // 0x80294E18: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80294E1C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80294E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80294E24: jal         0x8029ACD4
    // 0x80294E28: ori         $a2, $zero, 0xFFF0
    ctx->r6 = 0 | 0XFFF0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80294E28: ori         $a2, $zero, 0xFFF0
    ctx->r6 = 0 | 0XFFF0;
    after_0:
    // 0x80294E2C: b           L_80294E40
    // 0x80294E30: nop

        goto L_80294E40;
    // 0x80294E30: nop

L_80294E34:
    // 0x80294E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80294E38: jal         0x8029ACD4
    // 0x80294E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_1;
    // 0x80294E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80294E40:
    // 0x80294E40: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294E44: addiu       $a0, $a0, 0x7514
    ctx->r4 = ADD32(ctx->r4, 0X7514);
    // 0x80294E48: jal         0x8007AAF8
    // 0x80294E4C: addiu       $a1, $zero, 0x22E
    ctx->r5 = ADD32(0, 0X22E);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x80294E4C: addiu       $a1, $zero, 0x22E
    ctx->r5 = ADD32(0, 0X22E);
    after_2:
    // 0x80294E50: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294E54: addiu       $a0, $a0, 0x7514
    ctx->r4 = ADD32(ctx->r4, 0X7514);
    // 0x80294E58: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294E5C: jal         0x8002135C
    // 0x80294E60: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80294E60: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    after_3:
    // 0x80294E64: b           L_80294EE8
    // 0x80294E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80294EE8;
    // 0x80294E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294E6C:
    // 0x80294E6C: b           L_80294EE4
    // 0x80294E70: sb          $zero, 0x7518($at)
    MEM_B(0X7518, ctx->r1) = 0;
        goto L_80294EE4;
    // 0x80294E70: sb          $zero, 0x7518($at)
    MEM_B(0X7518, ctx->r1) = 0;
L_80294E74:
    // 0x80294E74: beq         $a1, $zero, L_80294EE0
    if (ctx->r5 == 0) {
        // 0x80294E78: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80294EE0;
    }
    // 0x80294E78: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80294E7C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80294E80: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x80294E84: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80294E88: bne         $t0, $at, L_80294EA8
    if (ctx->r8 != ctx->r1) {
        // 0x80294E8C: addiu       $a0, $zero, 0x31
        ctx->r4 = ADD32(0, 0X31);
            goto L_80294EA8;
    }
    // 0x80294E8C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x80294E90: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x80294E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80294E98: jal         0x8029ACD4
    // 0x80294E9C: ori         $a2, $zero, 0xFFF0
    ctx->r6 = 0 | 0XFFF0;
    func_8029ACD4(rdram, ctx);
        goto after_4;
    // 0x80294E9C: ori         $a2, $zero, 0xFFF0
    ctx->r6 = 0 | 0XFFF0;
    after_4:
    // 0x80294EA0: b           L_80294EB4
    // 0x80294EA4: nop

        goto L_80294EB4;
    // 0x80294EA4: nop

L_80294EA8:
    // 0x80294EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80294EAC: jal         0x8029ACD4
    // 0x80294EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_5;
    // 0x80294EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80294EB4:
    // 0x80294EB4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294EB8: addiu       $a0, $a0, 0x7550
    ctx->r4 = ADD32(ctx->r4, 0X7550);
    // 0x80294EBC: jal         0x8007AAF8
    // 0x80294EC0: addiu       $a1, $zero, 0x22F
    ctx->r5 = ADD32(0, 0X22F);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x80294EC0: addiu       $a1, $zero, 0x22F
    ctx->r5 = ADD32(0, 0X22F);
    after_6:
    // 0x80294EC4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80294EC8: addiu       $a0, $a0, 0x7550
    ctx->r4 = ADD32(ctx->r4, 0X7550);
    // 0x80294ECC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80294ED0: jal         0x8002135C
    // 0x80294ED4: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80294ED4: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    after_7:
    // 0x80294ED8: b           L_80294EE8
    // 0x80294EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80294EE8;
    // 0x80294EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294EE0:
    // 0x80294EE0: sb          $zero, 0x7554($at)
    MEM_B(0X7554, ctx->r1) = 0;
L_80294EE4:
    // 0x80294EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294EE8:
    // 0x80294EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294EEC: jr          $ra
    // 0x80294EF0: nop

    return;
    // 0x80294EF0: nop

;}
RECOMP_FUNC void func_80294EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294EF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80294EF8: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80294EFC: lhu         $t6, 0x10($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X10);
    // 0x80294F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294F04: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x80294F08: beq         $t7, $zero, L_80294F28
    if (ctx->r15 == 0) {
        // 0x80294F0C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80294F28;
    }
    // 0x80294F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80294F10: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x80294F14: jal         0x80294DE0
    // 0x80294F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80294DE0(rdram, ctx);
        goto after_0;
    // 0x80294F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80294F1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80294F20: b           L_80294F3C
    // 0x80294F24: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
        goto L_80294F3C;
    // 0x80294F24: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
L_80294F28:
    // 0x80294F28: lhu         $a0, 0x8($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X8);
    // 0x80294F2C: jal         0x80294DE0
    // 0x80294F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80294DE0(rdram, ctx);
        goto after_1;
    // 0x80294F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80294F34: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80294F38: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
L_80294F3C:
    // 0x80294F3C: lhu         $t8, 0xAA4($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XAA4);
    // 0x80294F40: nop

    // 0x80294F44: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x80294F48: beq         $t9, $zero, L_80294F64
    if (ctx->r25 == 0) {
        // 0x80294F4C: nop
    
            goto L_80294F64;
    }
    // 0x80294F4C: nop

    // 0x80294F50: lhu         $a0, 0xA9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80294F54: jal         0x80294DE0
    // 0x80294F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80294DE0(rdram, ctx);
        goto after_2;
    // 0x80294F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80294F5C: b           L_80294F74
    // 0x80294F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80294F74;
    // 0x80294F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294F64:
    // 0x80294F64: lhu         $a0, 0xA9C($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80294F68: jal         0x80294DE0
    // 0x80294F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80294DE0(rdram, ctx);
        goto after_3;
    // 0x80294F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80294F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80294F74:
    // 0x80294F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80294F78: jr          $ra
    // 0x80294F7C: nop

    return;
    // 0x80294F7C: nop

;}
RECOMP_FUNC void func_80294F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294F80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80294F84: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80294F88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80294F8C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80294F90: bne         $t6, $zero, L_80294FC4
    if (ctx->r14 != 0) {
        // 0x80294F94: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80294FC4;
    }
    // 0x80294F94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80294F98: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x80294F9C: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x80294FA0: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80294FA4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80294FA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80294FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80294FB0: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80294FB4: jal         0x8000E0A8
    // 0x80294FB8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x80294FB8: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_0:
    // 0x80294FBC: b           L_80294FEC
    // 0x80294FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80294FEC;
    // 0x80294FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80294FC4:
    // 0x80294FC4: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x80294FC8: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80294FCC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80294FD0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80294FD4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80294FD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80294FDC: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x80294FE0: jal         0x8000E0A8
    // 0x80294FE4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_8000E0A8(rdram, ctx);
        goto after_1;
    // 0x80294FE4: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_1:
    // 0x80294FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80294FEC:
    // 0x80294FEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80294FF0: jr          $ra
    // 0x80294FF4: nop

    return;
    // 0x80294FF4: nop

;}
RECOMP_FUNC void func_80294FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80294FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80294FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295000: jal         0x802951A8
    // 0x80295004: nop

    func_802951A8(rdram, ctx);
        goto after_0;
    // 0x80295004: nop

    after_0:
    // 0x80295008: jal         0x8029551C
    // 0x8029500C: nop

    func_8029551C(rdram, ctx);
        goto after_1;
    // 0x8029500C: nop

    after_1:
    // 0x80295010: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80295014: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x80295018: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029501C: bne         $t6, $at, L_80295058
    if (ctx->r14 != ctx->r1) {
        // 0x80295020: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80295058;
    }
    // 0x80295020: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80295024: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80295028: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8029502C: lbu         $t7, 0x3948($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3948);
    // 0x80295030: lbu         $t0, 0x3949($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3949);
    // 0x80295034: addiu       $a0, $a0, 0xAD8
    ctx->r4 = ADD32(ctx->r4, 0XAD8);
    // 0x80295038: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8029503C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80295040: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80295044: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80295048: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8029504C: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80295050: b           L_8029509C
    // 0x80295054: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
        goto L_8029509C;
    // 0x80295054: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
L_80295058:
    // 0x80295058: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8029505C: lbu         $t3, 0x3948($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3948);
    // 0x80295060: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x80295064: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80295068: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029506C: lbu         $t6, 0x3949($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3949);
    // 0x80295070: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80295074: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x80295078: mflo        $t4
    ctx->r12 = lo;
    // 0x8029507C: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x80295080: lw          $v0, 0x40($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X40);
    // 0x80295084: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80295088: mflo        $t7
    ctx->r15 = lo;
    // 0x8029508C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80295090: lw          $v1, 0x40($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X40);
    // 0x80295094: nop

    // 0x80295098: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
L_8029509C:
    // 0x8029509C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802950A0: lbu         $t0, 0x18($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X18);
    // 0x802950A4: addiu       $a1, $a1, 0x38DB
    ctx->r5 = ADD32(ctx->r5, 0X38DB);
    // 0x802950A8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802950AC: addiu       $a2, $a2, 0x38DC
    ctx->r6 = ADD32(ctx->r6, 0X38DC);
    // 0x802950B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802950B4: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x802950B8: bgez        $t0, L_802950C8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802950BC: sra         $t1, $t0, 4
        ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
            goto L_802950C8;
    }
    // 0x802950BC: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x802950C0: addiu       $at, $t0, 0xF
    ctx->r1 = ADD32(ctx->r8, 0XF);
    // 0x802950C4: sra         $t1, $at, 4
    ctx->r9 = S32(SIGNED(ctx->r1) >> 4);
L_802950C8:
    // 0x802950C8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802950CC: sb          $t2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r10;
    // 0x802950D0: lw          $t3, 0xD8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XD8);
    // 0x802950D4: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x802950D8: lbu         $t4, 0x18($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X18);
    // 0x802950DC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802950E0: bgez        $t4, L_802950F0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802950E4: sra         $t5, $t4, 4
        ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
            goto L_802950F0;
    }
    // 0x802950E4: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x802950E8: addiu       $at, $t4, 0xF
    ctx->r1 = ADD32(ctx->r12, 0XF);
    // 0x802950EC: sra         $t5, $at, 4
    ctx->r13 = S32(SIGNED(ctx->r1) >> 4);
L_802950F0:
    // 0x802950F0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x802950F4: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x802950F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802950FC: sb          $t7, 0x38DD($at)
    MEM_B(0X38DD, ctx->r1) = ctx->r15;
    // 0x80295100: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x80295104: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295108: sb          $t8, 0x38DE($at)
    MEM_B(0X38DE, ctx->r1) = ctx->r24;
    // 0x8029510C: lhu         $a0, 0x8($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X8);
    // 0x80295110: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80295114: andi        $t9, $a0, 0x80
    ctx->r25 = ctx->r4 & 0X80;
    // 0x80295118: bne         $t9, $zero, L_8029513C
    if (ctx->r25 != 0) {
        // 0x8029511C: nop
    
            goto L_8029513C;
    }
    // 0x8029511C: nop

    // 0x80295120: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x80295124: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80295128: bne         $t0, $at, L_8029513C
    if (ctx->r8 != ctx->r1) {
        // 0x8029512C: andi        $t1, $a0, 0x1
        ctx->r9 = ctx->r4 & 0X1;
            goto L_8029513C;
    }
    // 0x8029512C: andi        $t1, $a0, 0x1
    ctx->r9 = ctx->r4 & 0X1;
    // 0x80295130: beq         $t1, $zero, L_8029513C
    if (ctx->r9 == 0) {
        // 0x80295134: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_8029513C;
    }
    // 0x80295134: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80295138: sb          $zero, 0x6C30($at)
    MEM_B(0X6C30, ctx->r1) = 0;
L_8029513C:
    // 0x8029513C: lhu         $v0, 0xA9C($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XA9C);
    // 0x80295140: nop

    // 0x80295144: andi        $t2, $v0, 0x80
    ctx->r10 = ctx->r2 & 0X80;
    // 0x80295148: bne         $t2, $zero, L_8029516C
    if (ctx->r10 != 0) {
        // 0x8029514C: nop
    
            goto L_8029516C;
    }
    // 0x8029514C: nop

    // 0x80295150: lbu         $t3, -0x32A4($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X32A4);
    // 0x80295154: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80295158: bne         $t3, $at, L_8029516C
    if (ctx->r11 != ctx->r1) {
        // 0x8029515C: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_8029516C;
    }
    // 0x8029515C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x80295160: beq         $t4, $zero, L_8029516C
    if (ctx->r12 == 0) {
        // 0x80295164: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_8029516C;
    }
    // 0x80295164: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80295168: sb          $zero, 0x6C6C($at)
    MEM_B(0X6C6C, ctx->r1) = 0;
L_8029516C:
    // 0x8029516C: jal         0x80295938
    // 0x80295170: nop

    func_80295938(rdram, ctx);
        goto after_2;
    // 0x80295170: nop

    after_2:
    // 0x80295174: jal         0x802957AC
    // 0x80295178: nop

    func_802957AC(rdram, ctx);
        goto after_3;
    // 0x80295178: nop

    after_3:
    // 0x8029517C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x80295180: lbu         $t5, 0x38DF($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X38DF);
    // 0x80295184: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80295188: beq         $t5, $at, L_8029519C
    if (ctx->r13 == ctx->r1) {
        // 0x8029518C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029519C;
    }
    // 0x8029518C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295190: jal         0x80296248
    // 0x80295194: nop

    func_80296248(rdram, ctx);
        goto after_4;
    // 0x80295194: nop

    after_4:
    // 0x80295198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029519C:
    // 0x8029519C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802951A0: jr          $ra
    // 0x802951A4: nop

    return;
    // 0x802951A4: nop

;}
RECOMP_FUNC void func_802951A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802951A8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802951AC: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x802951B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802951B4: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x802951B8: beq         $at, $zero, L_8029550C
    if (ctx->r1 == 0) {
        // 0x802951BC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8029550C;
    }
    // 0x802951BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802951C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802951C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802951C8: addu        $at, $at, $t6
    gpr jr_addend_802951D4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802951CC: lw          $t6, 0x808($at)
    ctx->r14 = ADD32(ctx->r1, 0X808);
    // 0x802951D0: nop

    // 0x802951D4: jr          $t6
    // 0x802951D8: nop

    switch (jr_addend_802951D4 >> 2) {
        case 0: goto L_802951DC; break;
        case 1: goto L_802951E8; break;
        case 2: goto L_80295238; break;
        case 3: goto L_802952E0; break;
        case 4: goto L_802951DC; break;
        case 5: goto L_80295418; break;
        case 6: goto L_80295418; break;
        case 7: goto L_80295468; break;
        case 8: goto L_802951DC; break;
        default: switch_error(__func__, 0x802951D4, 0x802C0808);
    }
    // 0x802951D8: nop

L_802951DC:
    // 0x802951DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802951E0: b           L_8029550C
    // 0x802951E4: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x802951E4: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_802951E8:
    // 0x802951E8: jal         0x802955CC
    // 0x802951EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802955CC(rdram, ctx);
        goto after_0;
    // 0x802951EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802951F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802951F4: lwc1        $f4, 0x394C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802951F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802951FC: jal         0x802955CC
    // 0x80295200: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_802955CC(rdram, ctx);
        goto after_1;
    // 0x80295200: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80295204: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295208: lwc1        $f8, 0x394C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x8029520C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80295210: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295214: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80295218: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8029521C: bc1f        L_80295230
    if (!c1cs) {
        // 0x80295220: nop
    
            goto L_80295230;
    }
    // 0x80295220: nop

    // 0x80295224: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295228: b           L_8029550C
    // 0x8029522C: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x8029522C: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_80295230:
    // 0x80295230: b           L_8029550C
    // 0x80295234: sb          $t7, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r15;
        goto L_8029550C;
    // 0x80295234: sb          $t7, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r15;
L_80295238:
    // 0x80295238: jal         0x802955CC
    // 0x8029523C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802955CC(rdram, ctx);
        goto after_2;
    // 0x8029523C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80295240: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295244: lwc1        $f10, 0x394C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8029524C: jal         0x802955CC
    // 0x80295250: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_802955CC(rdram, ctx);
        goto after_3;
    // 0x80295250: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80295254: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295258: lwc1        $f0, 0x394C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x8029525C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80295260: jal         0x802955CC
    // 0x80295264: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_802955CC(rdram, ctx);
        goto after_4;
    // 0x80295264: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80295268: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029526C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80295270: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295274: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80295278: nop

    // 0x8029527C: bc1f        L_802952B4
    if (!c1cs) {
        // 0x80295280: nop
    
            goto L_802952B4;
    }
    // 0x80295280: nop

    // 0x80295284: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295288: lwc1        $f18, 0x394C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x8029528C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295290: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80295294: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80295298: bc1f        L_802952AC
    if (!c1cs) {
        // 0x8029529C: nop
    
            goto L_802952AC;
    }
    // 0x8029529C: nop

    // 0x802952A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802952A4: b           L_8029550C
    // 0x802952A8: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x802952A8: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_802952AC:
    // 0x802952AC: b           L_8029550C
    // 0x802952B0: sb          $t8, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r24;
        goto L_8029550C;
    // 0x802952B0: sb          $t8, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r24;
L_802952B4:
    // 0x802952B4: lwc1        $f4, 0x394C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802952B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802952BC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802952C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802952C4: bc1f        L_802952D8
    if (!c1cs) {
        // 0x802952C8: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_802952D8;
    }
    // 0x802952C8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802952CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802952D0: b           L_8029550C
    // 0x802952D4: sb          $t9, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r25;
        goto L_8029550C;
    // 0x802952D4: sb          $t9, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r25;
L_802952D8:
    // 0x802952D8: b           L_8029550C
    // 0x802952DC: sb          $t0, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r8;
        goto L_8029550C;
    // 0x802952DC: sb          $t0, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r8;
L_802952E0:
    // 0x802952E0: jal         0x802955CC
    // 0x802952E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802955CC(rdram, ctx);
        goto after_5;
    // 0x802952E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802952E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802952EC: lwc1        $f6, 0x394C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802952F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802952F4: jal         0x802955CC
    // 0x802952F8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_802955CC(rdram, ctx);
        goto after_6;
    // 0x802952F8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x802952FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295300: lwc1        $f0, 0x394C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295304: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80295308: jal         0x802955CC
    // 0x8029530C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_802955CC(rdram, ctx);
        goto after_7;
    // 0x8029530C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80295310: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295314: lwc1        $f2, 0x394C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295318: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8029531C: jal         0x802955CC
    // 0x80295320: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_802955CC(rdram, ctx);
        goto after_8;
    // 0x80295320: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80295324: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80295328: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8029532C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80295330: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x80295334: nop

    // 0x80295338: bc1f        L_802953AC
    if (!c1cs) {
        // 0x8029533C: nop
    
            goto L_802953AC;
    }
    // 0x8029533C: nop

    // 0x80295340: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80295344: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295348: bc1f        L_80295380
    if (!c1cs) {
        // 0x8029534C: nop
    
            goto L_80295380;
    }
    // 0x8029534C: nop

    // 0x80295350: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295354: lwc1        $f8, 0x394C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295358: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029535C: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x80295360: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80295364: bc1f        L_80295378
    if (!c1cs) {
        // 0x80295368: nop
    
            goto L_80295378;
    }
    // 0x80295368: nop

    // 0x8029536C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295370: b           L_8029550C
    // 0x80295374: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x80295374: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_80295378:
    // 0x80295378: b           L_8029550C
    // 0x8029537C: sb          $t1, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r9;
        goto L_8029550C;
    // 0x8029537C: sb          $t1, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r9;
L_80295380:
    // 0x80295380: lwc1        $f10, 0x394C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295384: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80295388: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8029538C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295390: bc1f        L_802953A4
    if (!c1cs) {
        // 0x80295394: addiu       $t3, $zero, 0x3
        ctx->r11 = ADD32(0, 0X3);
            goto L_802953A4;
    }
    // 0x80295394: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80295398: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029539C: b           L_8029550C
    // 0x802953A0: sb          $t2, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r10;
        goto L_8029550C;
    // 0x802953A0: sb          $t2, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r10;
L_802953A4:
    // 0x802953A4: b           L_8029550C
    // 0x802953A8: sb          $t3, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r11;
        goto L_8029550C;
    // 0x802953A8: sb          $t3, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r11;
L_802953AC:
    // 0x802953AC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802953B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802953B4: bc1f        L_802953EC
    if (!c1cs) {
        // 0x802953B8: nop
    
            goto L_802953EC;
    }
    // 0x802953B8: nop

    // 0x802953BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802953C0: lwc1        $f16, 0x394C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802953C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802953C8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802953CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802953D0: bc1f        L_802953E4
    if (!c1cs) {
        // 0x802953D4: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_802953E4;
    }
    // 0x802953D4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x802953D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802953DC: b           L_8029550C
    // 0x802953E0: sb          $t4, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r12;
        goto L_8029550C;
    // 0x802953E0: sb          $t4, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r12;
L_802953E4:
    // 0x802953E4: b           L_8029550C
    // 0x802953E8: sb          $t5, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r13;
        goto L_8029550C;
    // 0x802953E8: sb          $t5, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r13;
L_802953EC:
    // 0x802953EC: lwc1        $f18, 0x394C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802953F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802953F4: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802953F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802953FC: bc1f        L_80295410
    if (!c1cs) {
        // 0x80295400: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_80295410;
    }
    // 0x80295400: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80295404: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295408: b           L_8029550C
    // 0x8029540C: sb          $t6, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r14;
        goto L_8029550C;
    // 0x8029540C: sb          $t6, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r14;
L_80295410:
    // 0x80295410: b           L_8029550C
    // 0x80295414: sb          $t7, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r15;
        goto L_8029550C;
    // 0x80295414: sb          $t7, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r15;
L_80295418:
    // 0x80295418: jal         0x802955CC
    // 0x8029541C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802955CC(rdram, ctx);
        goto after_9;
    // 0x8029541C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80295420: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295424: lwc1        $f4, 0x394C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295428: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029542C: jal         0x802955CC
    // 0x80295430: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_802955CC(rdram, ctx);
        goto after_10;
    // 0x80295430: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80295434: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295438: lwc1        $f8, 0x394C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x8029543C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80295440: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295444: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80295448: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8029544C: bc1f        L_80295460
    if (!c1cs) {
        // 0x80295450: nop
    
            goto L_80295460;
    }
    // 0x80295450: nop

    // 0x80295454: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295458: b           L_8029550C
    // 0x8029545C: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x8029545C: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_80295460:
    // 0x80295460: b           L_8029550C
    // 0x80295464: sb          $t8, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r24;
        goto L_8029550C;
    // 0x80295464: sb          $t8, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r24;
L_80295468:
    // 0x80295468: jal         0x802955CC
    // 0x8029546C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802955CC(rdram, ctx);
        goto after_11;
    // 0x8029546C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x80295470: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295474: lwc1        $f10, 0x394C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295478: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8029547C: jal         0x802955CC
    // 0x80295480: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_802955CC(rdram, ctx);
        goto after_12;
    // 0x80295480: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x80295484: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295488: lwc1        $f0, 0x394C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x8029548C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80295490: jal         0x802955CC
    // 0x80295494: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_802955CC(rdram, ctx);
        goto after_13;
    // 0x80295494: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x80295498: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8029549C: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802954A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802954A4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802954A8: nop

    // 0x802954AC: bc1f        L_802954E4
    if (!c1cs) {
        // 0x802954B0: nop
    
            goto L_802954E4;
    }
    // 0x802954B0: nop

    // 0x802954B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802954B8: lwc1        $f16, 0x394C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802954BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802954C0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x802954C4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x802954C8: bc1f        L_802954DC
    if (!c1cs) {
        // 0x802954CC: nop
    
            goto L_802954DC;
    }
    // 0x802954CC: nop

    // 0x802954D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802954D4: b           L_8029550C
    // 0x802954D8: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
        goto L_8029550C;
    // 0x802954D8: sb          $zero, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = 0;
L_802954DC:
    // 0x802954DC: b           L_8029550C
    // 0x802954E0: sb          $t9, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r25;
        goto L_8029550C;
    // 0x802954E0: sb          $t9, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r25;
L_802954E4:
    // 0x802954E4: lwc1        $f18, 0x394C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x802954E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x802954EC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802954F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802954F4: bc1f        L_80295508
    if (!c1cs) {
        // 0x802954F8: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_80295508;
    }
    // 0x802954F8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802954FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295500: b           L_8029550C
    // 0x80295504: sb          $t0, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r8;
        goto L_8029550C;
    // 0x80295504: sb          $t0, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r8;
L_80295508:
    // 0x80295508: sb          $t1, 0x3948($at)
    MEM_B(0X3948, ctx->r1) = ctx->r9;
L_8029550C:
    // 0x8029550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80295514: jr          $ra
    // 0x80295518: nop

    return;
    // 0x80295518: nop

;}
RECOMP_FUNC void func_8029551C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029551C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80295520: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x80295524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295528: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8029552C: beq         $at, $zero, L_802955BC
    if (ctx->r1 == 0) {
        // 0x80295530: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802955BC;
    }
    // 0x80295530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295534: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80295538: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029553C: addu        $at, $at, $t6
    gpr jr_addend_80295548 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80295540: lw          $t6, 0x82C($at)
    ctx->r14 = ADD32(ctx->r1, 0X82C);
    // 0x80295544: nop

    // 0x80295548: jr          $t6
    // 0x8029554C: nop

    switch (jr_addend_80295548 >> 2) {
        case 0: goto L_80295550; break;
        case 1: goto L_80295550; break;
        case 2: goto L_80295550; break;
        case 3: goto L_80295550; break;
        case 4: goto L_80295560; break;
        case 5: goto L_80295560; break;
        case 6: goto L_80295570; break;
        case 7: goto L_80295560; break;
        case 8: goto L_80295550; break;
        default: switch_error(__func__, 0x80295548, 0x802C082C);
    }
    // 0x8029554C: nop

L_80295550:
    // 0x80295550: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80295554: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295558: b           L_802955BC
    // 0x8029555C: sb          $t7, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r15;
        goto L_802955BC;
    // 0x8029555C: sb          $t7, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r15;
L_80295560:
    // 0x80295560: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80295564: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295568: b           L_802955BC
    // 0x8029556C: sb          $t8, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r24;
        goto L_802955BC;
    // 0x8029556C: sb          $t8, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r24;
L_80295570:
    // 0x80295570: jal         0x802955CC
    // 0x80295574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802955CC(rdram, ctx);
        goto after_0;
    // 0x80295574: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80295578: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029557C: lwc1        $f4, 0x394C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295580: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80295584: jal         0x802955CC
    // 0x80295588: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_802955CC(rdram, ctx);
        goto after_1;
    // 0x80295588: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8029558C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295590: lwc1        $f8, 0x394C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X394C);
    // 0x80295594: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80295598: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8029559C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802955A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802955A4: bc1f        L_802955B8
    if (!c1cs) {
        // 0x802955A8: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_802955B8;
    }
    // 0x802955A8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x802955AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802955B0: b           L_802955BC
    // 0x802955B4: sb          $t9, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r25;
        goto L_802955BC;
    // 0x802955B4: sb          $t9, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r25;
L_802955B8:
    // 0x802955B8: sb          $t0, 0x3949($at)
    MEM_B(0X3949, ctx->r1) = ctx->r8;
L_802955BC:
    // 0x802955BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802955C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802955C4: jr          $ra
    // 0x802955C8: nop

    return;
    // 0x802955C8: nop

;}
RECOMP_FUNC void func_802955CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802955CC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802955D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802955D4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802955D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802955DC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802955E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802955E4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802955E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802955EC: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x802955F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802955F4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802955F8: lw          $v1, 0x398($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X398);
    // 0x802955FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80295604: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80295608: lwc1        $f6, 0x44($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X44);
    // 0x8029560C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80295610: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80295614: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80295618: nop

    // 0x8029561C: bc1f        L_80295628
    if (!c1cs) {
        // 0x80295620: nop
    
            goto L_80295628;
    }
    // 0x80295620: nop

    // 0x80295624: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80295628:
    // 0x80295628: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8029562C: lwc1        $f10, 0x4C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4C);
    // 0x80295630: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80295634: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80295638: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8029563C: nop

    // 0x80295640: bc1f        L_8029564C
    if (!c1cs) {
        // 0x80295644: nop
    
            goto L_8029564C;
    }
    // 0x80295644: nop

    // 0x80295648: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_8029564C:
    // 0x8029564C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80295650: jal         0x8007FA40
    // 0x80295654: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80295654: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x80295658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029565C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295660: swc1        $f0, 0x394C($at)
    MEM_W(0X394C, ctx->r1) = ctx->f0.u32l;
    // 0x80295664: jr          $ra
    // 0x80295668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80295668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8029566C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029566C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80295670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295674: jal         0x802951A8
    // 0x80295678: nop

    func_802951A8(rdram, ctx);
        goto after_0;
    // 0x80295678: nop

    after_0:
    // 0x8029567C: jal         0x8029551C
    // 0x80295680: nop

    func_8029551C(rdram, ctx);
        goto after_1;
    // 0x80295680: nop

    after_1:
    // 0x80295684: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80295688: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x8029568C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80295690: bne         $t6, $at, L_802956CC
    if (ctx->r14 != ctx->r1) {
        // 0x80295694: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_802956CC;
    }
    // 0x80295694: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80295698: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8029569C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802956A0: lbu         $t7, 0x3948($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3948);
    // 0x802956A4: lbu         $t0, 0x3949($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3949);
    // 0x802956A8: addiu       $a0, $a0, 0xAD8
    ctx->r4 = ADD32(ctx->r4, 0XAD8);
    // 0x802956AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802956B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802956B4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x802956B8: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x802956BC: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x802956C0: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802956C4: b           L_80295710
    // 0x802956C8: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
        goto L_80295710;
    // 0x802956C8: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
L_802956CC:
    // 0x802956CC: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802956D0: lbu         $t3, 0x3948($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3948);
    // 0x802956D4: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    // 0x802956D8: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802956DC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802956E0: lbu         $t6, 0x3949($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3949);
    // 0x802956E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802956E8: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x802956EC: mflo        $t4
    ctx->r12 = lo;
    // 0x802956F0: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x802956F4: lw          $v0, 0x40($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X40);
    // 0x802956F8: multu       $t6, $a1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802956FC: mflo        $t7
    ctx->r15 = lo;
    // 0x80295700: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80295704: lw          $v1, 0x40($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X40);
    // 0x80295708: nop

    // 0x8029570C: lw          $t9, 0xD8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XD8);
L_80295710:
    // 0x80295710: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80295714: lbu         $t0, 0x18($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X18);
    // 0x80295718: addiu       $a0, $a0, 0x38DB
    ctx->r4 = ADD32(ctx->r4, 0X38DB);
    // 0x8029571C: bgez        $t0, L_8029572C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80295720: sra         $t1, $t0, 4
        ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
            goto L_8029572C;
    }
    // 0x80295720: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x80295724: addiu       $at, $t0, 0xF
    ctx->r1 = ADD32(ctx->r8, 0XF);
    // 0x80295728: sra         $t1, $at, 4
    ctx->r9 = S32(SIGNED(ctx->r1) >> 4);
L_8029572C:
    // 0x8029572C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80295730: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x80295734: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80295738: lbu         $t3, 0x38DD($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X38DD);
    // 0x8029573C: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x80295740: beq         $t3, $t4, L_80295758
    if (ctx->r11 == ctx->r12) {
        // 0x80295744: nop
    
            goto L_80295758;
    }
    // 0x80295744: nop

    // 0x80295748: jal         0x80295938
    // 0x8029574C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80295938(rdram, ctx);
        goto after_2;
    // 0x8029574C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x80295750: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80295754: nop

L_80295758:
    // 0x80295758: lw          $t5, 0xD8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XD8);
    // 0x8029575C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80295760: lbu         $t6, 0x18($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X18);
    // 0x80295764: addiu       $v0, $v0, 0x38DC
    ctx->r2 = ADD32(ctx->r2, 0X38DC);
    // 0x80295768: bgez        $t6, L_80295778
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8029576C: sra         $t7, $t6, 4
        ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
            goto L_80295778;
    }
    // 0x8029576C: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80295770: addiu       $at, $t6, 0xF
    ctx->r1 = ADD32(ctx->r14, 0XF);
    // 0x80295774: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_80295778:
    // 0x80295778: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8029577C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80295780: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80295784: lbu         $t9, 0x38DE($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X38DE);
    // 0x80295788: andi        $t0, $t8, 0xFF
    ctx->r8 = ctx->r24 & 0XFF;
    // 0x8029578C: beq         $t9, $t0, L_802957A0
    if (ctx->r25 == ctx->r8) {
        // 0x80295790: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802957A0;
    }
    // 0x80295790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295794: jal         0x802957AC
    // 0x80295798: nop

    func_802957AC(rdram, ctx);
        goto after_3;
    // 0x80295798: nop

    after_3:
    // 0x8029579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802957A0:
    // 0x802957A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802957A4: jr          $ra
    // 0x802957A8: nop

    return;
    // 0x802957A8: nop

;}
RECOMP_FUNC void func_802957AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802957AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802957B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802957B4: jal         0x8029551C
    // 0x802957B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_8029551C(rdram, ctx);
        goto after_0;
    // 0x802957B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802957BC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802957C0: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x802957C4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802957C8: bne         $t6, $at, L_802957F0
    if (ctx->r14 != ctx->r1) {
        // 0x802957CC: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_802957F0;
    }
    // 0x802957CC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802957D0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802957D4: lbu         $t7, 0x3949($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3949);
    // 0x802957D8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802957DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802957E0: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x802957E4: lw          $a2, 0xAD8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XAD8);
    // 0x802957E8: b           L_8029581C
    // 0x802957EC: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
        goto L_8029581C;
    // 0x802957EC: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
L_802957F0:
    // 0x802957F0: lbu         $t9, 0x3949($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3949);
    // 0x802957F4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802957F8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802957FC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80295800: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80295804: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80295808: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8029580C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80295810: lw          $a2, 0x398($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X398);
    // 0x80295814: nop

    // 0x80295818: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
L_8029581C:
    // 0x8029581C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80295820: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x80295824: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80295828: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8029582C: beq         $t3, $zero, L_80295840
    if (ctx->r11 == 0) {
        // 0x80295830: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_80295840;
    }
    // 0x80295830: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80295834: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80295838: b           L_80295840
    // 0x8029583C: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
        goto L_80295840;
    // 0x8029583C: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_80295840:
    // 0x80295840: lhu         $t4, 0x12($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X12);
    // 0x80295844: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80295848: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x8029584C: bne         $t5, $zero, L_802958B8
    if (ctx->r13 != 0) {
        // 0x80295850: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802958B8;
    }
    // 0x80295850: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80295854: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80295858: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8029585C: bne         $t6, $at, L_802958B8
    if (ctx->r14 != ctx->r1) {
        // 0x80295860: sll         $t7, $s0, 5
        ctx->r15 = S32(ctx->r16 << 5);
            goto L_802958B8;
    }
    // 0x80295860: sll         $t7, $s0, 5
    ctx->r15 = S32(ctx->r16 << 5);
    // 0x80295864: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80295868: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8029586C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80295870: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80295874: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80295878: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8029587C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80295880: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80295884: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80295888: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8029588C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80295890: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80295894: addiu       $a3, $a3, -0x5514
    ctx->r7 = ADD32(ctx->r7, -0X5514);
    // 0x80295898: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8029589C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x802958A0: jal         0x8002F3D4
    // 0x802958A4: addiu       $a2, $zero, 0xD5
    ctx->r6 = ADD32(0, 0XD5);
    func_8002F3D4(rdram, ctx);
        goto after_1;
    // 0x802958A4: addiu       $a2, $zero, 0xD5
    ctx->r6 = ADD32(0, 0XD5);
    after_1:
    // 0x802958A8: jal         0x80296144
    // 0x802958AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80296144(rdram, ctx);
        goto after_2;
    // 0x802958AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x802958B0: b           L_8029592C
    // 0x802958B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8029592C;
    // 0x802958B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802958B8:
    // 0x802958B8: lbu         $a1, 0x38DC($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38DC);
    // 0x802958BC: jal         0x80295AC4
    // 0x802958C0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80295AC4(rdram, ctx);
        goto after_3;
    // 0x802958C0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x802958C4: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802958C8: lbu         $t3, 0x38DC($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X38DC);
    // 0x802958CC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802958D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802958D4: sb          $t3, 0x38DE($at)
    MEM_B(0X38DE, ctx->r1) = ctx->r11;
    // 0x802958D8: lw          $t4, 0xD4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XD4);
    // 0x802958DC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x802958E0: lbu         $t5, 0x4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4);
    // 0x802958E4: nop

    // 0x802958E8: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x802958EC: sb          $t6, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r14;
    // 0x802958F0: lw          $t7, 0xD8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD8);
    // 0x802958F4: nop

    // 0x802958F8: lbu         $t8, 0x1B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1B);
    // 0x802958FC: nop

    // 0x80295900: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80295904: jal         0x802964A4
    // 0x80295908: sb          $t9, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r25;
    func_802964A4(rdram, ctx);
        goto after_4;
    // 0x80295908: sb          $t9, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r25;
    after_4:
    // 0x8029590C: lbu         $a1, 0x32($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X32);
    // 0x80295910: jal         0x80295FA0
    // 0x80295914: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80295FA0(rdram, ctx);
        goto after_5;
    // 0x80295914: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x80295918: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8029591C: lbu         $a1, 0x31($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X31);
    // 0x80295920: jal         0x80295C90
    // 0x80295924: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80295C90(rdram, ctx);
        goto after_6;
    // 0x80295924: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_6:
    // 0x80295928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8029592C:
    // 0x8029592C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80295930: jr          $ra
    // 0x80295934: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80295934: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80295938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295938: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8029593C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80295940: jal         0x802951A8
    // 0x80295944: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_802951A8(rdram, ctx);
        goto after_0;
    // 0x80295944: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80295948: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8029594C: lbu         $t6, 0x38DF($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38DF);
    // 0x80295950: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80295954: bne         $t6, $at, L_8029597C
    if (ctx->r14 != ctx->r1) {
        // 0x80295958: lui         $t9, 0x802C
        ctx->r25 = S32(0X802C << 16);
            goto L_8029597C;
    }
    // 0x80295958: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8029595C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80295960: lbu         $t7, 0x3948($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3948);
    // 0x80295964: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80295968: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8029596C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80295970: lw          $a2, 0xAD8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XAD8);
    // 0x80295974: b           L_802959A8
    // 0x80295978: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
        goto L_802959A8;
    // 0x80295978: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
L_8029597C:
    // 0x8029597C: lbu         $t9, 0x3948($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X3948);
    // 0x80295980: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80295984: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80295988: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8029598C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80295990: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80295994: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80295998: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8029599C: lw          $a2, 0x398($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X398);
    // 0x802959A0: nop

    // 0x802959A4: lw          $t1, 0xC8($a2)
    ctx->r9 = MEM_W(ctx->r6, 0XC8);
L_802959A8:
    // 0x802959A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802959AC: lhu         $t2, 0x8($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X8);
    // 0x802959B0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802959B4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802959B8: beq         $t3, $zero, L_802959CC
    if (ctx->r11 == 0) {
        // 0x802959BC: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_802959CC;
    }
    // 0x802959BC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802959C0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802959C4: b           L_802959CC
    // 0x802959C8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
        goto L_802959CC;
    // 0x802959C8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_802959CC:
    // 0x802959CC: lhu         $t4, 0x12($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X12);
    // 0x802959D0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x802959D4: andi        $t5, $t4, 0x40
    ctx->r13 = ctx->r12 & 0X40;
    // 0x802959D8: bne         $t5, $zero, L_80295A44
    if (ctx->r13 != 0) {
        // 0x802959DC: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_80295A44;
    }
    // 0x802959DC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802959E0: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802959E4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802959E8: bne         $t6, $at, L_80295A44
    if (ctx->r14 != ctx->r1) {
        // 0x802959EC: sll         $t7, $s0, 5
        ctx->r15 = S32(ctx->r16 << 5);
            goto L_80295A44;
    }
    // 0x802959EC: sll         $t7, $s0, 5
    ctx->r15 = S32(ctx->r16 << 5);
    // 0x802959F0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802959F4: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802959F8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x802959FC: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80295A00: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80295A04: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80295A08: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80295A0C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80295A10: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80295A14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80295A18: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80295A1C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80295A20: addiu       $a3, $a3, -0x5514
    ctx->r7 = ADD32(ctx->r7, -0X5514);
    // 0x80295A24: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80295A28: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80295A2C: jal         0x8002F3D4
    // 0x80295A30: addiu       $a2, $zero, 0xD5
    ctx->r6 = ADD32(0, 0XD5);
    func_8002F3D4(rdram, ctx);
        goto after_1;
    // 0x80295A30: addiu       $a2, $zero, 0xD5
    ctx->r6 = ADD32(0, 0XD5);
    after_1:
    // 0x80295A34: jal         0x80296144
    // 0x80295A38: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80296144(rdram, ctx);
        goto after_2;
    // 0x80295A38: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x80295A3C: b           L_80295AB8
    // 0x80295A40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80295AB8;
    // 0x80295A40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80295A44:
    // 0x80295A44: lbu         $a1, 0x38DB($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38DB);
    // 0x80295A48: jal         0x80295AC4
    // 0x80295A4C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80295AC4(rdram, ctx);
        goto after_3;
    // 0x80295A4C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_3:
    // 0x80295A50: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80295A54: lbu         $t3, 0x38DB($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X38DB);
    // 0x80295A58: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80295A5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80295A60: sb          $t3, 0x38DD($at)
    MEM_B(0X38DD, ctx->r1) = ctx->r11;
    // 0x80295A64: lw          $t4, 0xD4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0XD4);
    // 0x80295A68: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80295A6C: lbu         $t5, 0x4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X4);
    // 0x80295A70: nop

    // 0x80295A74: andi        $t6, $t5, 0x7F
    ctx->r14 = ctx->r13 & 0X7F;
    // 0x80295A78: sb          $t6, 0x32($sp)
    MEM_B(0X32, ctx->r29) = ctx->r14;
    // 0x80295A7C: lw          $t7, 0xD8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XD8);
    // 0x80295A80: nop

    // 0x80295A84: lbu         $t8, 0x1B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1B);
    // 0x80295A88: nop

    // 0x80295A8C: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80295A90: jal         0x802964A4
    // 0x80295A94: sb          $t9, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r25;
    func_802964A4(rdram, ctx);
        goto after_4;
    // 0x80295A94: sb          $t9, 0x31($sp)
    MEM_B(0X31, ctx->r29) = ctx->r25;
    after_4:
    // 0x80295A98: lbu         $a1, 0x32($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X32);
    // 0x80295A9C: jal         0x80295FA0
    // 0x80295AA0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80295FA0(rdram, ctx);
        goto after_5;
    // 0x80295AA0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x80295AA4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80295AA8: lbu         $a1, 0x31($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X31);
    // 0x80295AAC: jal         0x80295C90
    // 0x80295AB0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80295C90(rdram, ctx);
        goto after_6;
    // 0x80295AB0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_6:
    // 0x80295AB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80295AB8:
    // 0x80295AB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80295ABC: jr          $ra
    // 0x80295AC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80295AC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80295AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295AC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295AC8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80295ACC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80295AD0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80295AD4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80295AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295ADC: bne         $t6, $zero, L_80295B40
    if (ctx->r14 != 0) {
        // 0x80295AE0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80295B40;
    }
    // 0x80295AE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80295AE4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80295AE8: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80295AEC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80295AF0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x80295AF4: ori         $a1, $zero, 0xFF68
    ctx->r5 = 0 | 0XFF68;
    // 0x80295AF8: mflo        $v0
    ctx->r2 = lo;
    // 0x80295AFC: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80295B00: bne         $t8, $zero, L_80295B0C
    if (ctx->r24 != 0) {
        // 0x80295B04: andi        $a2, $v0, 0xFFFF
        ctx->r6 = ctx->r2 & 0XFFFF;
            goto L_80295B0C;
    }
    // 0x80295B04: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80295B08: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80295B0C:
    // 0x80295B0C: jal         0x80295BA4
    // 0x80295B10: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80295BA4(rdram, ctx);
        goto after_0;
    // 0x80295B10: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80295B14: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80295B18: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80295B1C: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80295B20: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80295B24: ori         $a1, $zero, 0xFF70
    ctx->r5 = 0 | 0XFF70;
    // 0x80295B28: mfhi        $a2
    ctx->r6 = hi;
    // 0x80295B2C: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x80295B30: jal         0x80295BA4
    // 0x80295B34: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_80295BA4(rdram, ctx);
        goto after_1;
    // 0x80295B34: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_1:
    // 0x80295B38: b           L_80295B98
    // 0x80295B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295B98;
    // 0x80295B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295B40:
    // 0x80295B40: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80295B44: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80295B48: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80295B4C: ori         $a1, $zero, 0xFFF8
    ctx->r5 = 0 | 0XFFF8;
    // 0x80295B50: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80295B54: mflo        $v0
    ctx->r2 = lo;
    // 0x80295B58: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x80295B5C: bne         $t0, $zero, L_80295B68
    if (ctx->r8 != 0) {
        // 0x80295B60: andi        $a2, $v0, 0xFFFF
        ctx->r6 = ctx->r2 & 0XFFFF;
            goto L_80295B68;
    }
    // 0x80295B60: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x80295B64: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80295B68:
    // 0x80295B68: jal         0x80295BA4
    // 0x80295B6C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80295BA4(rdram, ctx);
        goto after_2;
    // 0x80295B6C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x80295B70: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80295B74: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80295B78: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80295B7C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80295B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80295B84: mfhi        $a2
    ctx->r6 = hi;
    // 0x80295B88: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x80295B8C: jal         0x80295BA4
    // 0x80295B90: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_80295BA4(rdram, ctx);
        goto after_3;
    // 0x80295B90: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_3:
    // 0x80295B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295B98:
    // 0x80295B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80295B9C: jr          $ra
    // 0x80295BA0: nop

    return;
    // 0x80295BA0: nop

;}
RECOMP_FUNC void func_80295BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80295BA8: andi        $a3, $a2, 0xFFFF
    ctx->r7 = ctx->r6 & 0XFFFF;
    // 0x80295BAC: slti        $at, $a3, 0xA
    ctx->r1 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
    // 0x80295BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295BB4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80295BB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80295BBC: bne         $at, $zero, L_80295BE4
    if (ctx->r1 != 0) {
        // 0x80295BC0: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_80295BE4;
    }
    // 0x80295BC0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80295BC4: lbu         $t7, 0x2B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2B);
    // 0x80295BC8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80295BCC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80295BD0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80295BD4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80295BD8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80295BDC: b           L_80295C80
    // 0x80295BE0: sb          $zero, 0x69D8($at)
    MEM_B(0X69D8, ctx->r1) = 0;
        goto L_80295C80;
    // 0x80295BE0: sb          $zero, 0x69D8($at)
    MEM_B(0X69D8, ctx->r1) = 0;
L_80295BE4:
    // 0x80295BE4: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x80295BE8: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80295BEC: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80295BF0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80295BF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80295BF8: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x80295BFC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80295C00: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80295C04: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80295C08: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80295C0C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80295C10: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80295C14: addiu       $a1, $a3, 0x61
    ctx->r5 = ADD32(ctx->r7, 0X61);
    // 0x80295C18: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80295C1C: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x80295C20: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80295C24: sb          $t2, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r10;
    // 0x80295C28: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80295C2C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80295C30: jal         0x8007AAF8
    // 0x80295C34: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80295C34: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x80295C38: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80295C3C: lhu         $t0, 0x2E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2E);
    // 0x80295C40: lbu         $t4, 0x214D($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X214D);
    // 0x80295C44: lbu         $t6, 0x214C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X214C);
    // 0x80295C48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80295C4C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80295C50: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80295C54: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x80295C58: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x80295C5C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80295C60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80295C64: sb          $t5, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r13;
    // 0x80295C68: sb          $t7, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r15;
    // 0x80295C6C: sb          $t8, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r24;
    // 0x80295C70: sb          $t9, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r25;
    // 0x80295C74: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80295C78: jal         0x8002135C
    // 0x80295C7C: sh          $t0, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r8;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80295C7C: sh          $t0, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r8;
    after_1:
L_80295C80:
    // 0x80295C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80295C88: jr          $ra
    // 0x80295C8C: nop

    return;
    // 0x80295C8C: nop

;}
RECOMP_FUNC void func_80295C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80295C94: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80295C98: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x80295C9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80295CA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80295CA4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80295CA8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80295CAC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80295CB0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80295CB4: beq         $v0, $zero, L_80295D94
    if (ctx->r2 == 0) {
        // 0x80295CB8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80295D94;
    }
    // 0x80295CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295CBC: bne         $a2, $v0, L_80295D94
    if (ctx->r6 != ctx->r2) {
        // 0x80295CC0: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80295D94;
    }
    // 0x80295CC0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80295CC4: lhu         $t8, 0xB7E($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB7E);
    // 0x80295CC8: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80295CCC: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x80295CD0: beq         $t9, $zero, L_80295D24
    if (ctx->r25 == 0) {
        // 0x80295CD4: nop
    
            goto L_80295D24;
    }
    // 0x80295CD4: nop

    // 0x80295CD8: lw          $t0, 0xC8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC8);
    // 0x80295CDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80295CE0: lhu         $t1, 0x8($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X8);
    // 0x80295CE4: nop

    // 0x80295CE8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80295CEC: beq         $t2, $zero, L_80295D0C
    if (ctx->r10 == 0) {
        // 0x80295CF0: nop
    
            goto L_80295D0C;
    }
    // 0x80295CF0: nop

    // 0x80295CF4: bne         $t6, $at, L_80295D94
    if (ctx->r14 != ctx->r1) {
        // 0x80295CF8: nop
    
            goto L_80295D94;
    }
    // 0x80295CF8: nop

    // 0x80295CFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80295D00: lbu         $a1, -0x1B5C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1B5C);
    // 0x80295D04: b           L_80295D94
    // 0x80295D08: nop

        goto L_80295D94;
    // 0x80295D08: nop

L_80295D0C:
    // 0x80295D0C: bne         $a0, $zero, L_80295D94
    if (ctx->r4 != 0) {
        // 0x80295D10: nop
    
            goto L_80295D94;
    }
    // 0x80295D10: nop

    // 0x80295D14: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80295D18: lbu         $a1, -0x1B5C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1B5C);
    // 0x80295D1C: b           L_80295D94
    // 0x80295D20: nop

        goto L_80295D94;
    // 0x80295D20: nop

L_80295D24:
    // 0x80295D24: lbu         $t3, 0x38DF($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X38DF);
    // 0x80295D28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80295D2C: bne         $a2, $t3, L_80295D94
    if (ctx->r6 != ctx->r11) {
        // 0x80295D30: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80295D94;
    }
    // 0x80295D30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80295D34: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x80295D38: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80295D3C: beq         $v1, $at, L_80295D4C
    if (ctx->r3 == ctx->r1) {
        // 0x80295D40: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80295D4C;
    }
    // 0x80295D40: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80295D44: bne         $v1, $at, L_80295D94
    if (ctx->r3 != ctx->r1) {
        // 0x80295D48: nop
    
            goto L_80295D94;
    }
    // 0x80295D48: nop

L_80295D4C:
    // 0x80295D4C: lw          $t4, 0xC8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC8);
    // 0x80295D50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80295D54: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x80295D58: nop

    // 0x80295D5C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80295D60: beq         $t6, $zero, L_80295D80
    if (ctx->r14 == 0) {
        // 0x80295D64: nop
    
            goto L_80295D80;
    }
    // 0x80295D64: nop

    // 0x80295D68: bne         $a0, $at, L_80295D94
    if (ctx->r4 != ctx->r1) {
        // 0x80295D6C: nop
    
            goto L_80295D94;
    }
    // 0x80295D6C: nop

    // 0x80295D70: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80295D74: lbu         $a1, -0x1B5C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1B5C);
    // 0x80295D78: b           L_80295D94
    // 0x80295D7C: nop

        goto L_80295D94;
    // 0x80295D7C: nop

L_80295D80:
    // 0x80295D80: bne         $a0, $zero, L_80295D94
    if (ctx->r4 != 0) {
        // 0x80295D84: nop
    
            goto L_80295D94;
    }
    // 0x80295D84: nop

    // 0x80295D88: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80295D8C: lbu         $a1, -0x1B5C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1B5C);
    // 0x80295D90: nop

L_80295D94:
    // 0x80295D94: bne         $a0, $zero, L_80295E38
    if (ctx->r4 != 0) {
        // 0x80295D98: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_80295E38;
    }
    // 0x80295D98: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80295D9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80295DA0: beq         $a1, $at, L_80295DC4
    if (ctx->r5 == ctx->r1) {
        // 0x80295DA4: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80295DC4;
    }
    // 0x80295DA4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80295DA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80295DAC: beq         $a1, $at, L_80295DE4
    if (ctx->r5 == ctx->r1) {
        // 0x80295DB0: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_80295DE4;
    }
    // 0x80295DB0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80295DB4: beq         $a1, $a2, L_80295E08
    if (ctx->r5 == ctx->r6) {
        // 0x80295DB8: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80295E08;
    }
    // 0x80295DB8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80295DBC: b           L_80295E28
    // 0x80295DC0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
        goto L_80295E28;
    // 0x80295DC0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
L_80295DC4:
    // 0x80295DC4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295DC8: sb          $zero, 0x288C($v0)
    MEM_B(0X288C, ctx->r2) = 0;
    // 0x80295DCC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80295DD0: ori         $a1, $zero, 0xFF20
    ctx->r5 = 0 | 0XFF20;
    // 0x80295DD4: jal         0x80295EE0
    // 0x80295DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_0;
    // 0x80295DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80295DDC: b           L_80295ED4
    // 0x80295DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295DE4:
    // 0x80295DE4: ori         $a1, $zero, 0xFF20
    ctx->r5 = 0 | 0XFF20;
    // 0x80295DE8: jal         0x80295EE0
    // 0x80295DEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_1;
    // 0x80295DEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80295DF0: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80295DF4: ori         $a1, $zero, 0xFF28
    ctx->r5 = 0 | 0XFF28;
    // 0x80295DF8: jal         0x80295EE0
    // 0x80295DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_2;
    // 0x80295DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80295E00: b           L_80295ED4
    // 0x80295E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295E08:
    // 0x80295E08: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295E0C: sb          $zero, 0x288C($v0)
    MEM_B(0X288C, ctx->r2) = 0;
    // 0x80295E10: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80295E14: ori         $a1, $zero, 0xFF20
    ctx->r5 = 0 | 0XFF20;
    // 0x80295E18: jal         0x80295EE0
    // 0x80295E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80295EE0(rdram, ctx);
        goto after_3;
    // 0x80295E1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80295E20: b           L_80295ED4
    // 0x80295E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295E28:
    // 0x80295E28: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295E2C: sb          $zero, 0x2850($v0)
    MEM_B(0X2850, ctx->r2) = 0;
    // 0x80295E30: b           L_80295ED0
    // 0x80295E34: sb          $zero, 0x288C($v0)
    MEM_B(0X288C, ctx->r2) = 0;
        goto L_80295ED0;
    // 0x80295E34: sb          $zero, 0x288C($v0)
    MEM_B(0X288C, ctx->r2) = 0;
L_80295E38:
    // 0x80295E38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80295E3C: beq         $a1, $at, L_80295E60
    if (ctx->r5 == ctx->r1) {
        // 0x80295E40: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80295E60;
    }
    // 0x80295E40: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80295E44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80295E48: beq         $a1, $at, L_80295E80
    if (ctx->r5 == ctx->r1) {
        // 0x80295E4C: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_80295E80;
    }
    // 0x80295E4C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80295E50: beq         $a1, $a2, L_80295EA4
    if (ctx->r5 == ctx->r6) {
        // 0x80295E54: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80295EA4;
    }
    // 0x80295E54: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80295E58: b           L_80295EC4
    // 0x80295E5C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
        goto L_80295EC4;
    // 0x80295E5C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
L_80295E60:
    // 0x80295E60: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295E64: sb          $zero, 0x279C($v0)
    MEM_B(0X279C, ctx->r2) = 0;
    // 0x80295E68: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80295E6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80295E70: jal         0x80295EE0
    // 0x80295E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_4;
    // 0x80295E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80295E78: b           L_80295ED4
    // 0x80295E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295E80:
    // 0x80295E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80295E84: jal         0x80295EE0
    // 0x80295E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_5;
    // 0x80295E88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80295E8C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80295E90: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80295E94: jal         0x80295EE0
    // 0x80295E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80295EE0(rdram, ctx);
        goto after_6;
    // 0x80295E98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80295E9C: b           L_80295ED4
    // 0x80295EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295EA4:
    // 0x80295EA4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295EA8: sb          $zero, 0x279C($v0)
    MEM_B(0X279C, ctx->r2) = 0;
    // 0x80295EAC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80295EB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80295EB4: jal         0x80295EE0
    // 0x80295EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80295EE0(rdram, ctx);
        goto after_7;
    // 0x80295EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80295EBC: b           L_80295ED4
    // 0x80295EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80295ED4;
    // 0x80295EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295EC4:
    // 0x80295EC4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80295EC8: sb          $zero, 0x2760($v0)
    MEM_B(0X2760, ctx->r2) = 0;
    // 0x80295ECC: sb          $zero, 0x279C($v0)
    MEM_B(0X279C, ctx->r2) = 0;
L_80295ED0:
    // 0x80295ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80295ED4:
    // 0x80295ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80295ED8: jr          $ra
    // 0x80295EDC: nop

    return;
    // 0x80295EDC: nop

;}
RECOMP_FUNC void func_80295EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295EE0: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80295EE4: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80295EE8: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x80295EEC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80295EF0: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x80295EF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80295EF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80295EFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80295F00: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80295F04: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80295F08: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80295F0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80295F10: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80295F14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80295F18: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80295F1C: addiu       $a1, $a2, 0x73
    ctx->r5 = ADD32(ctx->r6, 0X73);
    // 0x80295F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295F24: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80295F28: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x80295F2C: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80295F30: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80295F34: sb          $t9, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r25;
    // 0x80295F38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80295F3C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80295F40: jal         0x8007AAF8
    // 0x80295F44: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80295F44: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80295F48: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80295F4C: lhu         $t7, 0x26($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X26);
    // 0x80295F50: lbu         $t1, 0x214D($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X214D);
    // 0x80295F54: lbu         $t3, 0x214C($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X214C);
    // 0x80295F58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80295F5C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80295F60: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80295F64: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x80295F68: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80295F6C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80295F70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80295F74: sb          $t2, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r10;
    // 0x80295F78: sb          $t4, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r12;
    // 0x80295F7C: sb          $t5, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r13;
    // 0x80295F80: sb          $t6, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r14;
    // 0x80295F84: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80295F88: jal         0x8002135C
    // 0x80295F8C: sh          $t7, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r15;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80295F8C: sh          $t7, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r15;
    after_1:
    // 0x80295F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80295F94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80295F98: jr          $ra
    // 0x80295F9C: nop

    return;
    // 0x80295F9C: nop

;}
RECOMP_FUNC void func_80295FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80295FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80295FA4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80295FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80295FAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80295FB0: bne         $t6, $zero, L_80295FE8
    if (ctx->r14 != 0) {
        // 0x80295FB4: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80295FE8;
    }
    // 0x80295FB4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80295FB8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80295FBC: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x80295FC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80295FC4: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x80295FC8: sb          $t8, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r24;
    // 0x80295FCC: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x80295FD0: jal         0x8007AAF8
    // 0x80295FD4: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80295FD4: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    after_0:
    // 0x80295FD8: addiu       $t9, $zero, -0x90
    ctx->r25 = ADD32(0, -0X90);
    // 0x80295FDC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80295FE0: b           L_80296010
    // 0x80295FE4: sh          $t9, 0x6E9C($at)
    MEM_H(0X6E9C, ctx->r1) = ctx->r25;
        goto L_80296010;
    // 0x80295FE4: sh          $t9, 0x6E9C($at)
    MEM_H(0X6E9C, ctx->r1) = ctx->r25;
L_80295FE8:
    // 0x80295FE8: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x80295FEC: addiu       $t1, $zero, 0x13
    ctx->r9 = ADD32(0, 0X13);
    // 0x80295FF0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80295FF4: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    // 0x80295FF8: sb          $t1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r9;
    // 0x80295FFC: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x80296000: jal         0x8007AAF8
    // 0x80296004: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80296004: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_1:
    // 0x80296008: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8029600C: sh          $zero, 0x6ED8($at)
    MEM_H(0X6ED8, ctx->r1) = 0;
L_80296010:
    // 0x80296010: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x80296014: lhu         $v0, 0x2E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2E);
    // 0x80296018: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8029601C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80296020: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80296024: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80296028: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x8029602C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80296030: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80296034: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80296038: addiu       $a1, $v0, 0x5D
    ctx->r5 = ADD32(ctx->r2, 0X5D);
    // 0x8029603C: andi        $t5, $a1, 0xFFFF
    ctx->r13 = ctx->r5 & 0XFFFF;
    // 0x80296040: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80296044: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80296048: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8029604C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80296050: jal         0x8007AAF8
    // 0x80296054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x80296054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80296058: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8029605C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80296060: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80296064: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80296068: lbu         $t7, 0x214D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X214D);
    // 0x8029606C: lbu         $t9, 0x214C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X214C);
    // 0x80296070: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80296074: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80296078: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8029607C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80296080: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80296084: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80296088: sb          $t6, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r14;
    // 0x8029608C: sb          $t8, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r24;
    // 0x80296090: sb          $t0, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r8;
    // 0x80296094: sb          $t1, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r9;
    // 0x80296098: sb          $t2, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r10;
    // 0x8029609C: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x802960A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802960A4: jal         0x8002135C
    // 0x802960A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x802960A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x802960AC: lbu         $t3, 0x26($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X26);
    // 0x802960B0: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x802960B4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x802960B8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x802960BC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802960C0: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x802960C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802960C8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802960CC: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x802960D0: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x802960D4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x802960D8: lbu         $t7, 0x214D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X214D);
    // 0x802960DC: lbu         $t9, 0x214C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X214C);
    // 0x802960E0: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x802960E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802960E8: subu        $a2, $t4, $t3
    ctx->r6 = SUB32(ctx->r12, ctx->r11);
    // 0x802960EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802960F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802960F4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802960F8: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x802960FC: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80296100: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80296104: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80296108: sb          $t6, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r14;
    // 0x8029610C: sb          $t8, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r24;
    // 0x80296110: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80296114: sh          $zero, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = 0;
    // 0x80296118: sb          $t0, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r8;
    // 0x8029611C: sb          $t1, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r9;
    // 0x80296120: sb          $t2, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r10;
    // 0x80296124: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80296128: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8029612C: jal         0x8002135C
    // 0x80296130: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x80296130: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80296134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8029613C: jr          $ra
    // 0x80296140: nop

    return;
    // 0x80296140: nop

;}
RECOMP_FUNC void func_80296144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296148: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8029614C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296150: bne         $t6, $zero, L_8029618C
    if (ctx->r14 != 0) {
        // 0x80296154: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8029618C;
    }
    // 0x80296154: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80296158: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8029615C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80296160: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x80296164: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296168: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x8029616C: sb          $zero, 0x25F8($v0)
    MEM_B(0X25F8, ctx->r2) = 0;
    // 0x80296170: sb          $zero, 0x2670($v0)
    MEM_B(0X2670, ctx->r2) = 0;
    // 0x80296174: sb          $zero, 0x26AC($v0)
    MEM_B(0X26AC, ctx->r2) = 0;
    // 0x80296178: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x8029617C: jal         0x8007AAF8
    // 0x80296180: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80296180: addiu       $a1, $zero, 0xA1
    ctx->r5 = ADD32(0, 0XA1);
    after_0:
    // 0x80296184: b           L_802961BC
    // 0x80296188: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
        goto L_802961BC;
    // 0x80296188: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
L_8029618C:
    // 0x8029618C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80296190: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80296194: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x80296198: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029619C: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
    // 0x802961A0: sb          $zero, 0x2634($v0)
    MEM_B(0X2634, ctx->r2) = 0;
    // 0x802961A4: sb          $zero, 0x26E8($v0)
    MEM_B(0X26E8, ctx->r2) = 0;
    // 0x802961A8: sb          $zero, 0x2724($v0)
    MEM_B(0X2724, ctx->r2) = 0;
    // 0x802961AC: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x802961B0: jal         0x8007AAF8
    // 0x802961B4: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x802961B4: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_1:
    // 0x802961B8: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
L_802961BC:
    // 0x802961BC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x802961C0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x802961C4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802961C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802961CC: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x802961D0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802961D4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802961D8: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x802961DC: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x802961E0: lbu         $t3, 0x214D($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X214D);
    // 0x802961E4: lbu         $t5, 0x214C($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X214C);
    // 0x802961E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802961EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802961F0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802961F4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802961F8: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x802961FC: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x80296200: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x80296204: sb          $t2, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r10;
    // 0x80296208: sb          $t4, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r12;
    // 0x8029620C: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80296210: sh          $zero, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = 0;
    // 0x80296214: sb          $t6, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r14;
    // 0x80296218: sb          $t7, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r15;
    // 0x8029621C: sb          $t8, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r24;
    // 0x80296220: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x80296224: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80296228: jal         0x8002135C
    // 0x8029622C: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8029622C: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    after_2:
    // 0x80296230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80296238: jr          $ra
    // 0x8029623C: nop

    return;
    // 0x8029623C: nop

;}
RECOMP_FUNC void func_80296240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296240: jr          $ra
    // 0x80296244: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80296244: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80296248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296248: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8029624C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80296254: sb          $v0, 0x39CC($at)
    MEM_B(0X39CC, ctx->r1) = ctx->r2;
    // 0x80296258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8029625C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296260: jal         0x80296278
    // 0x80296264: sb          $v0, 0x39CD($at)
    MEM_B(0X39CD, ctx->r1) = ctx->r2;
    func_80296278(rdram, ctx);
        goto after_0;
    // 0x80296264: sb          $v0, 0x39CD($at)
    MEM_B(0X39CD, ctx->r1) = ctx->r2;
    after_0:
    // 0x80296268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8029626C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296270: jr          $ra
    // 0x80296274: nop

    return;
    // 0x80296274: nop

;}
RECOMP_FUNC void func_80296278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296278: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029627C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80296280: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80296284: lbu         $t6, 0x39CC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39CC);
    // 0x80296288: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8029628C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80296290: beq         $t6, $a1, L_802962D4
    if (ctx->r14 == ctx->r5) {
        // 0x80296294: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802962D4;
    }
    // 0x80296294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296298: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x8029629C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802962A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802962A4: beq         $t8, $zero, L_802962B4
    if (ctx->r24 == 0) {
        // 0x802962A8: nop
    
            goto L_802962B4;
    }
    // 0x802962A8: nop

    // 0x802962AC: b           L_802962B4
    // 0x802962B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_802962B4;
    // 0x802962B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802962B4:
    // 0x802962B4: lbu         $a2, 0x869($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X869);
    // 0x802962B8: jal         0x80296338
    // 0x802962BC: nop

    func_80296338(rdram, ctx);
        goto after_0;
    // 0x802962BC: nop

    after_0:
    // 0x802962C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802962C4: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x802962C8: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x802962CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802962D0: sb          $t9, 0x39CC($at)
    MEM_B(0X39CC, ctx->r1) = ctx->r25;
L_802962D4:
    // 0x802962D4: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802962D8: lbu         $t0, 0x39CD($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X39CD);
    // 0x802962DC: lbu         $a1, 0xA96($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XA96);
    // 0x802962E0: nop

    // 0x802962E4: beq         $t0, $a1, L_8029632C
    if (ctx->r8 == ctx->r5) {
        // 0x802962E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8029632C;
    }
    // 0x802962E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802962EC: lhu         $t1, 0xA9C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA9C);
    // 0x802962F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802962F4: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x802962F8: beq         $t2, $zero, L_80296308
    if (ctx->r10 == 0) {
        // 0x802962FC: nop
    
            goto L_80296308;
    }
    // 0x802962FC: nop

    // 0x80296300: b           L_80296308
    // 0x80296304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80296308;
    // 0x80296304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80296308:
    // 0x80296308: lbu         $a2, 0x12FD($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X12FD);
    // 0x8029630C: jal         0x80296338
    // 0x80296310: nop

    func_80296338(rdram, ctx);
        goto after_1;
    // 0x80296310: nop

    after_1:
    // 0x80296314: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80296318: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8029631C: lbu         $t3, 0xA96($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XA96);
    // 0x80296320: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296324: sb          $t3, 0x39CD($at)
    MEM_B(0X39CD, ctx->r1) = ctx->r11;
    // 0x80296328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029632C:
    // 0x8029632C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296330: jr          $ra
    // 0x80296334: nop

    return;
    // 0x80296334: nop

;}
RECOMP_FUNC void func_80296338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296338: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8029633C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80296340: addiu       $a3, $t7, -0x1
    ctx->r7 = ADD32(ctx->r15, -0X1);
    // 0x80296344: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80296348: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8029634C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80296350: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x80296354: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80296358: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8029635C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296360: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80296364: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80296368: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8029636C: beq         $v1, $at, L_8029637C
    if (ctx->r3 == ctx->r1) {
        // 0x80296370: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_8029637C;
    }
    // 0x80296370: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80296374: bne         $t7, $zero, L_80296398
    if (ctx->r15 != 0) {
        // 0x80296378: nop
    
            goto L_80296398;
    }
    // 0x80296378: nop

L_8029637C:
    // 0x8029637C: bne         $a0, $zero, L_80296390
    if (ctx->r4 != 0) {
        // 0x80296380: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80296390;
    }
    // 0x80296380: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80296384: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80296388: b           L_80296494
    // 0x8029638C: sb          $zero, 0x7068($at)
    MEM_B(0X7068, ctx->r1) = 0;
        goto L_80296494;
    // 0x8029638C: sb          $zero, 0x7068($at)
    MEM_B(0X7068, ctx->r1) = 0;
L_80296390:
    // 0x80296390: b           L_80296494
    // 0x80296394: sb          $zero, 0x70A4($at)
    MEM_B(0X70A4, ctx->r1) = 0;
        goto L_80296494;
    // 0x80296394: sb          $zero, 0x70A4($at)
    MEM_B(0X70A4, ctx->r1) = 0;
L_80296398:
    // 0x80296398: bne         $a0, $zero, L_802963E4
    if (ctx->r4 != 0) {
        // 0x8029639C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802963E4;
    }
    // 0x8029639C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802963A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802963A4: bne         $v1, $at, L_802963B4
    if (ctx->r3 != ctx->r1) {
        // 0x802963A8: addiu       $t0, $zero, 0x1C
        ctx->r8 = ADD32(0, 0X1C);
            goto L_802963B4;
    }
    // 0x802963A8: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x802963AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802963B0: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
L_802963B4:
    // 0x802963B4: addiu       $a1, $v0, 0x98
    ctx->r5 = ADD32(ctx->r2, 0X98);
    // 0x802963B8: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x802963BC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802963C0: addiu       $a0, $a0, 0x7064
    ctx->r4 = ADD32(ctx->r4, 0X7064);
    // 0x802963C4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802963C8: sh          $a3, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r7;
    // 0x802963CC: jal         0x8007AAF8
    // 0x802963D0: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x802963D0: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    after_0:
    // 0x802963D4: lhu         $a3, 0x1C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1C);
    // 0x802963D8: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x802963DC: b           L_80296424
    // 0x802963E0: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
        goto L_80296424;
    // 0x802963E0: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
L_802963E4:
    // 0x802963E4: bne         $v1, $at, L_802963F4
    if (ctx->r3 != ctx->r1) {
        // 0x802963E8: addiu       $t0, $zero, 0x1D
        ctx->r8 = ADD32(0, 0X1D);
            goto L_802963F4;
    }
    // 0x802963E8: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x802963EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802963F0: addiu       $v0, $zero, 0x131
    ctx->r2 = ADD32(0, 0X131);
L_802963F4:
    // 0x802963F4: addiu       $a1, $v0, 0x6A
    ctx->r5 = ADD32(ctx->r2, 0X6A);
    // 0x802963F8: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x802963FC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296400: addiu       $a0, $a0, 0x70A0
    ctx->r4 = ADD32(ctx->r4, 0X70A0);
    // 0x80296404: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80296408: sh          $a3, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r7;
    // 0x8029640C: jal         0x8007AAF8
    // 0x80296410: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80296410: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    after_1:
    // 0x80296414: lhu         $a3, 0x1C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1C);
    // 0x80296418: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8029641C: nop

    // 0x80296420: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
L_80296424:
    // 0x80296424: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x80296428: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8029642C: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x80296430: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80296434: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80296438: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8029643C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80296440: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80296444: lbu         $t6, 0x214D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X214D);
    // 0x80296448: lbu         $t8, 0x214C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X214C);
    // 0x8029644C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80296450: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80296454: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80296458: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x8029645C: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80296460: sb          $t5, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r13;
    // 0x80296464: sh          $zero, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = 0;
    // 0x80296468: sb          $t7, 0x214D($v0)
    MEM_B(0X214D, ctx->r2) = ctx->r15;
    // 0x8029646C: sb          $t9, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r25;
    // 0x80296470: sb          $t1, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r9;
    // 0x80296474: sh          $zero, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = 0;
    // 0x80296478: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8029647C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80296480: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80296484: lbu         $a2, -0x35B4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X35B4);
    // 0x80296488: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8029648C: jal         0x8002135C
    // 0x80296490: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80296490: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_2:
L_80296494:
    // 0x80296494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029649C: jr          $ra
    // 0x802964A0: nop

    return;
    // 0x802964A0: nop

;}
RECOMP_FUNC void func_802964A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802964A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802964A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802964AC: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x802964B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802964B4: bne         $t6, $zero, L_802964C4
    if (ctx->r14 != 0) {
        // 0x802964B8: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_802964C4;
    }
    // 0x802964B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802964BC: b           L_802964C8
    // 0x802964C0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
        goto L_802964C8;
    // 0x802964C0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_802964C4:
    // 0x802964C4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
L_802964C8:
    // 0x802964C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x802964CC: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x802964D0: lw          $a1, 0xC8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XC8);
    // 0x802964D4: lhu         $t2, 0x1A($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X1A);
    // 0x802964D8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802964DC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x802964E0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x802964E4: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x802964E8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x802964EC: addu        $t3, $a1, $t2
    ctx->r11 = ADD32(ctx->r5, ctx->r10);
    // 0x802964F0: lbu         $a2, 0x308($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X308);
    // 0x802964F4: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x802964F8: sra         $t4, $a3, 16
    ctx->r12 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802964FC: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80296500: addiu       $t5, $zero, 0xD5
    ctx->r13 = ADD32(0, 0XD5);
    // 0x80296504: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80296508: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x8029650C: jal         0x8006ED60
    // 0x80296510: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    func_8006ED60(rdram, ctx);
        goto after_0;
    // 0x80296510: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    after_0:
    // 0x80296514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80296518: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8029651C: jr          $ra
    // 0x80296520: nop

    return;
    // 0x80296520: nop

;}
RECOMP_FUNC void func_80296524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296524: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80296528: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8029652C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296530: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80296534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296538: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8029653C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80296540: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x80296544: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296548: sh          $zero, 0x3ACA($at)
    MEM_H(0X3ACA, ctx->r1) = 0;
    // 0x8029654C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x80296550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296554: jal         0x8029ACD4
    // 0x80296558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80296558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8029655C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296560: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296564: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296568: addiu       $a1, $a1, 0x11F
    ctx->r5 = ADD32(ctx->r5, 0X11F);
    // 0x8029656C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80296570: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80296574: jal         0x8007AAF8
    // 0x80296578: addiu       $a0, $a0, 0x77E4
    ctx->r4 = ADD32(ctx->r4, 0X77E4);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80296578: addiu       $a0, $a0, 0x77E4
    ctx->r4 = ADD32(ctx->r4, 0X77E4);
    after_1:
    // 0x8029657C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80296580: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80296584: lbu         $t7, 0x2F5C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2F5C);
    // 0x80296588: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029658C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x80296590: sb          $t8, 0x2F5C($v0)
    MEM_B(0X2F5C, ctx->r2) = ctx->r24;
    // 0x80296594: addiu       $a0, $a0, 0x77E4
    ctx->r4 = ADD32(ctx->r4, 0X77E4);
    // 0x80296598: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029659C: jal         0x8002135C
    // 0x802965A0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802965A0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_2:
    // 0x802965A4: addiu       $a0, $zero, 0x3D
    ctx->r4 = ADD32(0, 0X3D);
    // 0x802965A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802965AC: jal         0x8029ACD4
    // 0x802965B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x802965B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802965B4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802965B8: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x802965BC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802965C0: addiu       $a1, $a1, 0x120
    ctx->r5 = ADD32(ctx->r5, 0X120);
    // 0x802965C4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x802965C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802965CC: jal         0x8007AAF8
    // 0x802965D0: addiu       $a0, $a0, 0x7820
    ctx->r4 = ADD32(ctx->r4, 0X7820);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x802965D0: addiu       $a0, $a0, 0x7820
    ctx->r4 = ADD32(ctx->r4, 0X7820);
    after_4:
    // 0x802965D4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802965D8: addiu       $a0, $a0, 0x7820
    ctx->r4 = ADD32(ctx->r4, 0X7820);
    // 0x802965DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802965E0: jal         0x8002135C
    // 0x802965E4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x802965E4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_5:
    // 0x802965E8: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    // 0x802965EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802965F0: jal         0x8029ACD4
    // 0x802965F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x802965F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x802965F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802965FC: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296600: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296604: addiu       $a1, $a1, 0x121
    ctx->r5 = ADD32(ctx->r5, 0X121);
    // 0x80296608: andi        $t0, $a1, 0xFFFF
    ctx->r8 = ctx->r5 & 0XFFFF;
    // 0x8029660C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80296610: jal         0x8007AAF8
    // 0x80296614: addiu       $a0, $a0, 0x785C
    ctx->r4 = ADD32(ctx->r4, 0X785C);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x80296614: addiu       $a0, $a0, 0x785C
    ctx->r4 = ADD32(ctx->r4, 0X785C);
    after_7:
    // 0x80296618: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029661C: addiu       $a0, $a0, 0x785C
    ctx->r4 = ADD32(ctx->r4, 0X785C);
    // 0x80296620: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296624: jal         0x8002135C
    // 0x80296628: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80296628: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_8:
    // 0x8029662C: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    // 0x80296630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296634: jal         0x8029ACD4
    // 0x80296638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x80296638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8029663C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x80296640: lbu         $t1, 0x3A19($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3A19);
    // 0x80296644: lbu         $v0, 0x23($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X23);
    // 0x80296648: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029664C: addu        $a1, $v0, $t1
    ctx->r5 = ADD32(ctx->r2, ctx->r9);
    // 0x80296650: addiu       $a1, $a1, 0x122
    ctx->r5 = ADD32(ctx->r5, 0X122);
    // 0x80296654: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x80296658: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8029665C: addiu       $a0, $a0, 0x7898
    ctx->r4 = ADD32(ctx->r4, 0X7898);
    // 0x80296660: jal         0x8007AAF8
    // 0x80296664: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x80296664: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_10:
    // 0x80296668: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8029666C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296670: addiu       $a2, $v0, 0x2E
    ctx->r6 = ADD32(ctx->r2, 0X2E);
    // 0x80296674: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x80296678: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8029667C: addiu       $a0, $a0, 0x7898
    ctx->r4 = ADD32(ctx->r4, 0X7898);
    // 0x80296680: jal         0x8002135C
    // 0x80296684: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80296684: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_11:
    // 0x80296688: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8029668C: lbu         $t4, -0x32A4($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X32A4);
    // 0x80296690: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80296694: bne         $t4, $at, L_80296734
    if (ctx->r12 != ctx->r1) {
        // 0x80296698: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_80296734;
    }
    // 0x80296698: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8029669C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802966A0: jal         0x8029ACD4
    // 0x802966A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_12;
    // 0x802966A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x802966A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802966AC: addiu       $a0, $a0, 0x78D4
    ctx->r4 = ADD32(ctx->r4, 0X78D4);
    // 0x802966B0: jal         0x8007AAF8
    // 0x802966B4: addiu       $a1, $zero, 0x134
    ctx->r5 = ADD32(0, 0X134);
    func_8007AAF8(rdram, ctx);
        goto after_13;
    // 0x802966B4: addiu       $a1, $zero, 0x134
    ctx->r5 = ADD32(0, 0X134);
    after_13:
    // 0x802966B8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802966BC: addiu       $a0, $a0, 0x78D4
    ctx->r4 = ADD32(ctx->r4, 0X78D4);
    // 0x802966C0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802966C4: jal         0x8002135C
    // 0x802966C8: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x802966C8: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_14:
    // 0x802966CC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x802966D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802966D4: jal         0x8029ACD4
    // 0x802966D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_15;
    // 0x802966D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x802966DC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802966E0: addiu       $a0, $a0, 0x7910
    ctx->r4 = ADD32(ctx->r4, 0X7910);
    // 0x802966E4: jal         0x8007AAF8
    // 0x802966E8: addiu       $a1, $zero, 0x135
    ctx->r5 = ADD32(0, 0X135);
    func_8007AAF8(rdram, ctx);
        goto after_16;
    // 0x802966E8: addiu       $a1, $zero, 0x135
    ctx->r5 = ADD32(0, 0X135);
    after_16:
    // 0x802966EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802966F0: addiu       $a0, $a0, 0x7910
    ctx->r4 = ADD32(ctx->r4, 0X7910);
    // 0x802966F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802966F8: jal         0x8002135C
    // 0x802966FC: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_17;
    // 0x802966FC: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_17:
    // 0x80296700: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    // 0x80296704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296708: jal         0x8029ACD4
    // 0x8029670C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_18;
    // 0x8029670C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x80296710: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296714: addiu       $a0, $a0, 0x794C
    ctx->r4 = ADD32(ctx->r4, 0X794C);
    // 0x80296718: jal         0x8007AAF8
    // 0x8029671C: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    func_8007AAF8(rdram, ctx);
        goto after_19;
    // 0x8029671C: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    after_19:
    // 0x80296720: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296724: addiu       $a0, $a0, 0x794C
    ctx->r4 = ADD32(ctx->r4, 0X794C);
    // 0x80296728: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029672C: jal         0x8002135C
    // 0x80296730: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    func_8002135C(rdram, ctx);
        goto after_20;
    // 0x80296730: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_20:
L_80296734:
    // 0x80296734: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296738: sb          $zero, 0x392A($at)
    MEM_B(0X392A, ctx->r1) = 0;
    // 0x8029673C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296740: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80296744: sb          $zero, 0x392B($at)
    MEM_B(0X392B, ctx->r1) = 0;
    // 0x80296748: addiu       $v0, $v0, 0x3929
    ctx->r2 = ADD32(ctx->r2, 0X3929);
    // 0x8029674C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80296750: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296754: sb          $zero, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = 0;
    // 0x80296758: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029675C: sh          $zero, 0x392E($at)
    MEM_H(0X392E, ctx->r1) = 0;
    // 0x80296760: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296764: sh          $zero, 0x3930($at)
    MEM_H(0X3930, ctx->r1) = 0;
    // 0x80296768: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8029676C: sh          $zero, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = 0;
    // 0x80296770: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296774: sh          $zero, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = 0;
    // 0x80296778: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8029677C: jal         0x8029772C
    // 0x80296780: nop

    func_8029772C(rdram, ctx);
        goto after_21;
    // 0x80296780: nop

    after_21:
    // 0x80296784: jal         0x8029766C
    // 0x80296788: nop

    func_8029766C(rdram, ctx);
        goto after_22;
    // 0x80296788: nop

    after_22:
    // 0x8029678C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80296794: jr          $ra
    // 0x80296798: nop

    return;
    // 0x80296798: nop

;}
RECOMP_FUNC void func_8029679C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029679C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802967A0: addiu       $v0, $v0, 0x3ACA
    ctx->r2 = ADD32(ctx->r2, 0X3ACA);
    // 0x802967A4: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x802967A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802967AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802967B0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802967B4: jal         0x802988A0
    // 0x802967B8: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    func_802988A0(rdram, ctx);
        goto after_0;
    // 0x802967B8: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x802967BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802967C0: lbu         $v0, 0x392C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X392C);
    // 0x802967C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802967C8: beq         $v0, $zero, L_802967F4
    if (ctx->r2 == 0) {
        // 0x802967CC: nop
    
            goto L_802967F4;
    }
    // 0x802967CC: nop

    // 0x802967D0: beq         $v0, $at, L_80296804
    if (ctx->r2 == ctx->r1) {
        // 0x802967D4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80296804;
    }
    // 0x802967D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802967D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802967DC: beq         $v0, $at, L_80296818
    if (ctx->r2 == ctx->r1) {
        // 0x802967E0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80296818;
    }
    // 0x802967E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802967E4: beq         $v0, $at, L_80296828
    if (ctx->r2 == ctx->r1) {
        // 0x802967E8: nop
    
            goto L_80296828;
    }
    // 0x802967E8: nop

    // 0x802967EC: b           L_80296834
    // 0x802967F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296834;
    // 0x802967F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802967F4:
    // 0x802967F4: jal         0x80296840
    // 0x802967F8: nop

    func_80296840(rdram, ctx);
        goto after_1;
    // 0x802967F8: nop

    after_1:
    // 0x802967FC: b           L_80296834
    // 0x80296800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296834;
    // 0x80296800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296804:
    // 0x80296804: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80296808: jal         0x80296B10
    // 0x8029680C: sb          $t8, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r24;
    func_80296B10(rdram, ctx);
        goto after_2;
    // 0x8029680C: sb          $t8, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r24;
    after_2:
    // 0x80296810: b           L_80296834
    // 0x80296814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296834;
    // 0x80296814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296818:
    // 0x80296818: jal         0x80296DF8
    // 0x8029681C: nop

    func_80296DF8(rdram, ctx);
        goto after_3;
    // 0x8029681C: nop

    after_3:
    // 0x80296820: b           L_80296834
    // 0x80296824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296834;
    // 0x80296824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296828:
    // 0x80296828: jal         0x80297180
    // 0x8029682C: nop

    func_80297180(rdram, ctx);
        goto after_4;
    // 0x8029682C: nop

    after_4:
    // 0x80296830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296834:
    // 0x80296834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296838: jr          $ra
    // 0x8029683C: nop

    return;
    // 0x8029683C: nop

;}
RECOMP_FUNC void func_80296840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296840: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80296844: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80296848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029684C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80296850: beq         $t6, $at, L_80296860
    if (ctx->r14 == ctx->r1) {
        // 0x80296854: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80296860;
    }
    // 0x80296854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296858: b           L_80296864
    // 0x8029685C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80296864;
    // 0x8029685C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80296860:
    // 0x80296860: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80296864:
    // 0x80296864: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80296868: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8029686C: lh          $a2, 0x3930($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X3930);
    // 0x80296870: lbu         $a0, 0x3929($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3929);
    // 0x80296874: jal         0x80297A84
    // 0x80296878: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80297A84(rdram, ctx);
        goto after_0;
    // 0x80296878: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8029687C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296880: addiu       $a1, $a1, 0x3929
    ctx->r5 = ADD32(ctx->r5, 0X3929);
    // 0x80296884: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80296888: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8029688C: lh          $v1, 0x3930($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X3930);
    // 0x80296890: nop

    // 0x80296894: slti        $at, $v1, 0x28
    ctx->r1 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x80296898: beq         $at, $zero, L_802968C0
    if (ctx->r1 == 0) {
        // 0x8029689C: slti        $at, $v1, -0x27
        ctx->r1 = SIGNED(ctx->r3) < -0X27 ? 1 : 0;
            goto L_802968C0;
    }
    // 0x8029689C: slti        $at, $v1, -0x27
    ctx->r1 = SIGNED(ctx->r3) < -0X27 ? 1 : 0;
    // 0x802968A0: bne         $at, $zero, L_802968C0
    if (ctx->r1 != 0) {
        // 0x802968A4: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802968C0;
    }
    // 0x802968A4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802968A8: lhu         $t7, 0x3934($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3934);
    // 0x802968AC: nop

    // 0x802968B0: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x802968B4: beq         $t8, $zero, L_802968C0
    if (ctx->r24 == 0) {
        // 0x802968B8: nop
    
            goto L_802968C0;
    }
    // 0x802968B8: nop

    // 0x802968BC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_802968C0:
    // 0x802968C0: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x802968C4: jal         0x8029772C
    // 0x802968C8: nop

    func_8029772C(rdram, ctx);
        goto after_1;
    // 0x802968C8: nop

    after_1:
    // 0x802968CC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802968D0: lhu         $t9, 0x3934($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X3934);
    // 0x802968D4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802968D8: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x802968DC: beq         $t0, $zero, L_80296B00
    if (ctx->r8 == 0) {
        // 0x802968E0: addiu       $a1, $a1, 0x3929
        ctx->r5 = ADD32(ctx->r5, 0X3929);
            goto L_80296B00;
    }
    // 0x802968E0: addiu       $a1, $a1, 0x3929
    ctx->r5 = ADD32(ctx->r5, 0X3929);
    // 0x802968E4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802968E8: lbu         $t1, -0x32A4($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X32A4);
    // 0x802968EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802968F0: bne         $t1, $at, L_802969F4
    if (ctx->r9 != ctx->r1) {
        // 0x802968F4: nop
    
            goto L_802969F4;
    }
    // 0x802968F4: nop

    // 0x802968F8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802968FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80296900: beq         $v0, $zero, L_8029692C
    if (ctx->r2 == 0) {
        // 0x80296904: nop
    
            goto L_8029692C;
    }
    // 0x80296904: nop

    // 0x80296908: beq         $v0, $at, L_80296970
    if (ctx->r2 == ctx->r1) {
        // 0x8029690C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80296970;
    }
    // 0x8029690C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80296910: beq         $v0, $at, L_80296990
    if (ctx->r2 == ctx->r1) {
        // 0x80296914: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80296990;
    }
    // 0x80296914: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80296918: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8029691C: beq         $v0, $at, L_802969D4
    if (ctx->r2 == ctx->r1) {
        // 0x80296920: nop
    
            goto L_802969D4;
    }
    // 0x80296920: nop

    // 0x80296924: b           L_80296B04
    // 0x80296928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x80296928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8029692C:
    // 0x8029692C: jal         0x80015BC0
    // 0x80296930: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80296930: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_2:
    // 0x80296934: jal         0x80297370
    // 0x80296938: nop

    func_80297370(rdram, ctx);
        goto after_3;
    // 0x80296938: nop

    after_3:
    // 0x8029693C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80296940: sb          $zero, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = 0;
    // 0x80296944: jal         0x80015BC0
    // 0x80296948: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x80296948: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8029694C: jal         0x802937C0
    // 0x80296950: nop

    func_802937C0(rdram, ctx);
        goto after_5;
    // 0x80296950: nop

    after_5:
    // 0x80296954: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80296958: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8029695C: lbu         $t2, 0x754($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X754);
    // 0x80296960: nop

    // 0x80296964: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x80296968: b           L_80296B00
    // 0x8029696C: sb          $t3, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r11;
        goto L_80296B00;
    // 0x8029696C: sb          $t3, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r11;
L_80296970:
    // 0x80296970: jal         0x80015BC0
    // 0x80296974: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_6;
    // 0x80296974: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_6:
    // 0x80296978: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8029697C: lbu         $a0, 0x39CA($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39CA);
    // 0x80296980: jal         0x802975E4
    // 0x80296984: nop

    func_802975E4(rdram, ctx);
        goto after_7;
    // 0x80296984: nop

    after_7:
    // 0x80296988: b           L_80296B04
    // 0x8029698C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x8029698C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296990:
    // 0x80296990: lhu         $t4, 0xB78($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XB78);
    // 0x80296994: nop

    // 0x80296998: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8029699C: beq         $at, $zero, L_802969C4
    if (ctx->r1 == 0) {
        // 0x802969A0: nop
    
            goto L_802969C4;
    }
    // 0x802969A0: nop

    // 0x802969A4: jal         0x80015BC0
    // 0x802969A8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_8;
    // 0x802969A8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_8:
    // 0x802969AC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x802969B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802969B4: jal         0x80296B68
    // 0x802969B8: sb          $t5, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r13;
    func_80296B68(rdram, ctx);
        goto after_9;
    // 0x802969B8: sb          $t5, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r13;
    after_9:
    // 0x802969BC: b           L_80296B04
    // 0x802969C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x802969C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802969C4:
    // 0x802969C4: jal         0x80015BC0
    // 0x802969C8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    func_80015BC0(rdram, ctx);
        goto after_10;
    // 0x802969C8: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    after_10:
    // 0x802969CC: b           L_80296B04
    // 0x802969D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x802969D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802969D4:
    // 0x802969D4: jal         0x80015BC0
    // 0x802969D8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_11;
    // 0x802969D8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_11:
    // 0x802969DC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802969E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802969E4: jal         0x80296FC0
    // 0x802969E8: sb          $t6, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r14;
    func_80296FC0(rdram, ctx);
        goto after_12;
    // 0x802969E8: sb          $t6, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r14;
    after_12:
    // 0x802969EC: b           L_80296B04
    // 0x802969F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x802969F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802969F4:
    // 0x802969F4: jal         0x80015BC0
    // 0x802969F8: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_13;
    // 0x802969F8: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_13:
    // 0x802969FC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296A00: addiu       $a1, $a1, 0x3929
    ctx->r5 = ADD32(ctx->r5, 0X3929);
    // 0x80296A04: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x80296A08: nop

    // 0x80296A0C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80296A10: beq         $at, $zero, L_80296B00
    if (ctx->r1 == 0) {
        // 0x80296A14: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80296B00;
    }
    // 0x80296A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80296A18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296A1C: addu        $at, $at, $t7
    gpr jr_addend_80296A28 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80296A20: lw          $t7, 0x850($at)
    ctx->r15 = ADD32(ctx->r1, 0X850);
    // 0x80296A24: nop

    // 0x80296A28: jr          $t7
    // 0x80296A2C: nop

    switch (jr_addend_80296A28 >> 2) {
        case 0: goto L_80296A30; break;
        case 1: goto L_80296A70; break;
        case 2: goto L_80296A88; break;
        case 3: goto L_80296AB8; break;
        case 4: goto L_80296AF0; break;
        default: switch_error(__func__, 0x80296A28, 0x802C0850);
    }
    // 0x80296A2C: nop

L_80296A30:
    // 0x80296A30: jal         0x80297370
    // 0x80296A34: nop

    func_80297370(rdram, ctx);
        goto after_14;
    // 0x80296A34: nop

    after_14:
    // 0x80296A38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80296A3C: sb          $zero, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = 0;
    // 0x80296A40: jal         0x80015BC0
    // 0x80296A44: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80015BC0(rdram, ctx);
        goto after_15;
    // 0x80296A44: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_15:
    // 0x80296A48: jal         0x802937C0
    // 0x80296A4C: nop

    func_802937C0(rdram, ctx);
        goto after_16;
    // 0x80296A4C: nop

    after_16:
    // 0x80296A50: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80296A54: lbu         $t8, -0x301C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X301C);
    // 0x80296A58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80296A5C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80296A60: jal         0x80077E24
    // 0x80296A64: sb          $t9, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r25;
    func_80077E24(rdram, ctx);
        goto after_17;
    // 0x80296A64: sb          $t9, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r25;
    after_17:
    // 0x80296A68: b           L_80296B04
    // 0x80296A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x80296A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296A70:
    // 0x80296A70: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80296A74: lbu         $a0, 0x39CA($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39CA);
    // 0x80296A78: jal         0x802975E4
    // 0x80296A7C: nop

    func_802975E4(rdram, ctx);
        goto after_18;
    // 0x80296A7C: nop

    after_18:
    // 0x80296A80: b           L_80296B04
    // 0x80296A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x80296A84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296A88:
    // 0x80296A88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80296A8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296A90: sb          $t0, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r8;
    // 0x80296A94: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296A98: jal         0x80297370
    // 0x80296A9C: sb          $zero, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = 0;
    func_80297370(rdram, ctx);
        goto after_19;
    // 0x80296A9C: sb          $zero, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = 0;
    after_19:
    // 0x80296AA0: jal         0x8002198C
    // 0x80296AA4: nop

    func_8002198C(rdram, ctx);
        goto after_20;
    // 0x80296AA4: nop

    after_20:
    // 0x80296AA8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80296AAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296AB0: b           L_80296B00
    // 0x80296AB4: sb          $t1, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r9;
        goto L_80296B00;
    // 0x80296AB4: sb          $t1, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r9;
L_80296AB8:
    // 0x80296AB8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80296ABC: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x80296AC0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80296AC4: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x80296AC8: beq         $at, $zero, L_80296AE0
    if (ctx->r1 == 0) {
        // 0x80296ACC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80296AE0;
    }
    // 0x80296ACC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296AD0: jal         0x80296B68
    // 0x80296AD4: sb          $t3, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r11;
    func_80296B68(rdram, ctx);
        goto after_21;
    // 0x80296AD4: sb          $t3, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r11;
    after_21:
    // 0x80296AD8: b           L_80296B04
    // 0x80296ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x80296ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296AE0:
    // 0x80296AE0: jal         0x80015BC0
    // 0x80296AE4: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    func_80015BC0(rdram, ctx);
        goto after_22;
    // 0x80296AE4: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    after_22:
    // 0x80296AE8: b           L_80296B04
    // 0x80296AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B04;
    // 0x80296AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296AF0:
    // 0x80296AF0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80296AF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296AF8: jal         0x80296FC0
    // 0x80296AFC: sb          $t4, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r12;
    func_80296FC0(rdram, ctx);
        goto after_23;
    // 0x80296AFC: sb          $t4, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = ctx->r12;
    after_23:
L_80296B00:
    // 0x80296B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296B04:
    // 0x80296B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296B08: jr          $ra
    // 0x80296B0C: nop

    return;
    // 0x80296B0C: nop

;}
RECOMP_FUNC void func_80296B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296B10: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80296B14: lbu         $v0, 0x39C9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39C9);
    // 0x80296B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80296B1C: beq         $v0, $zero, L_80296B38
    if (ctx->r2 == 0) {
        // 0x80296B20: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80296B38;
    }
    // 0x80296B20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296B24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80296B28: beq         $v0, $at, L_80296B50
    if (ctx->r2 == ctx->r1) {
        // 0x80296B2C: nop
    
            goto L_80296B50;
    }
    // 0x80296B2C: nop

    // 0x80296B30: b           L_80296B5C
    // 0x80296B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80296B5C;
    // 0x80296B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296B38:
    // 0x80296B38: jal         0x8007AB30
    // 0x80296B3C: nop

    func_8007AB30(rdram, ctx);
        goto after_0;
    // 0x80296B3C: nop

    after_0:
    // 0x80296B40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80296B44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296B48: b           L_80296B58
    // 0x80296B4C: sb          $t6, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = ctx->r14;
        goto L_80296B58;
    // 0x80296B4C: sb          $t6, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = ctx->r14;
L_80296B50:
    // 0x80296B50: jal         0x8007AE68
    // 0x80296B54: nop

    func_8007AE68(rdram, ctx);
        goto after_1;
    // 0x80296B54: nop

    after_1:
L_80296B58:
    // 0x80296B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80296B5C:
    // 0x80296B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80296B60: jr          $ra
    // 0x80296B64: nop

    return;
    // 0x80296B64: nop

;}
RECOMP_FUNC void func_80296B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296B70: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    // 0x80296B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296B78: jal         0x8029ACD4
    // 0x80296B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80296B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80296B80: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296B84: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296B88: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296B8C: addiu       $a1, $a1, 0x125
    ctx->r5 = ADD32(ctx->r5, 0X125);
    // 0x80296B90: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80296B94: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80296B98: jal         0x8007AAF8
    // 0x80296B9C: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80296B9C: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    after_1:
    // 0x80296BA0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296BA4: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    // 0x80296BA8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296BAC: jal         0x8002135C
    // 0x80296BB0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80296BB0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_2:
    // 0x80296BB4: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x80296BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296BBC: jal         0x8029ACD4
    // 0x80296BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x80296BC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80296BC4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296BC8: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296BCC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296BD0: addiu       $a1, $a1, 0x126
    ctx->r5 = ADD32(ctx->r5, 0X126);
    // 0x80296BD4: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80296BD8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80296BDC: jal         0x8007AAF8
    // 0x80296BE0: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80296BE0: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    after_4:
    // 0x80296BE4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296BE8: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    // 0x80296BEC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296BF0: jal         0x8002135C
    // 0x80296BF4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80296BF4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_5:
    // 0x80296BF8: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x80296BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296C00: jal         0x8029ACD4
    // 0x80296C04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x80296C04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80296C08: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296C0C: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296C10: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296C14: addiu       $a1, $a1, 0x127
    ctx->r5 = ADD32(ctx->r5, 0X127);
    // 0x80296C18: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80296C1C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80296C20: jal         0x8007AAF8
    // 0x80296C24: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x80296C24: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    after_7:
    // 0x80296C28: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296C2C: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    // 0x80296C30: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296C34: jal         0x8002135C
    // 0x80296C38: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80296C38: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_8:
    // 0x80296C3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296C40: sb          $zero, 0x3937($at)
    MEM_B(0X3937, ctx->r1) = 0;
    // 0x80296C44: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x80296C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296C4C: jal         0x8029ACD4
    // 0x80296C50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x80296C50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80296C54: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80296C58: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80296C5C: lbu         $t0, 0x3A19($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3A19);
    // 0x80296C60: lbu         $t9, -0x3092($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3092);
    // 0x80296C64: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296C68: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x80296C6C: addiu       $a1, $a1, 0x128
    ctx->r5 = ADD32(ctx->r5, 0X128);
    // 0x80296C70: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x80296C74: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80296C78: jal         0x8007AAF8
    // 0x80296C7C: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x80296C7C: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    after_10:
    // 0x80296C80: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296C84: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    // 0x80296C88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296C8C: jal         0x8002135C
    // 0x80296C90: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80296C90: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    after_11:
    // 0x80296C94: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x80296C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296C9C: jal         0x8029ACD4
    // 0x80296CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_12;
    // 0x80296CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80296CA4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80296CA8: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80296CAC: lbu         $t3, 0x3A19($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3A19);
    // 0x80296CB0: lbu         $t2, -0x3091($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3091);
    // 0x80296CB4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296CB8: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x80296CBC: addiu       $a1, $a1, 0x12B
    ctx->r5 = ADD32(ctx->r5, 0X12B);
    // 0x80296CC0: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x80296CC4: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80296CC8: jal         0x8007AAF8
    // 0x80296CCC: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    func_8007AAF8(rdram, ctx);
        goto after_13;
    // 0x80296CCC: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    after_13:
    // 0x80296CD0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296CD4: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    // 0x80296CD8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296CDC: jal         0x8002135C
    // 0x80296CE0: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x80296CE0: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    after_14:
    // 0x80296CE4: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x80296CE8: lbu         $t5, 0x3937($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X3937);
    // 0x80296CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80296CF0: bne         $t5, $zero, L_80296D04
    if (ctx->r13 != 0) {
        // 0x80296CF4: addiu       $a0, $zero, 0x53
        ctx->r4 = ADD32(0, 0X53);
            goto L_80296D04;
    }
    // 0x80296CF4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    // 0x80296CF8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80296CFC: b           L_80296D0C
    // 0x80296D00: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
        goto L_80296D0C;
    // 0x80296D00: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
L_80296D04:
    // 0x80296D04: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80296D08: sb          $t6, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r14;
L_80296D0C:
    // 0x80296D0C: jal         0x8029ACD4
    // 0x80296D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_15;
    // 0x80296D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80296D14: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296D18: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296D1C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296D20: addiu       $a1, $a1, 0x133
    ctx->r5 = ADD32(ctx->r5, 0X133);
    // 0x80296D24: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80296D28: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80296D2C: jal         0x8007AAF8
    // 0x80296D30: addiu       $a0, $a0, 0x7D48
    ctx->r4 = ADD32(ctx->r4, 0X7D48);
    func_8007AAF8(rdram, ctx);
        goto after_16;
    // 0x80296D30: addiu       $a0, $a0, 0x7D48
    ctx->r4 = ADD32(ctx->r4, 0X7D48);
    after_16:
    // 0x80296D34: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80296D38: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80296D3C: lbu         $t8, 0x34C0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X34C0);
    // 0x80296D40: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
    // 0x80296D44: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x80296D48: ori         $t0, $t9, 0x6
    ctx->r8 = ctx->r25 | 0X6;
    // 0x80296D4C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296D50: sb          $t0, 0x34C0($v0)
    MEM_B(0X34C0, ctx->r2) = ctx->r8;
    // 0x80296D54: sb          $t1, 0x34C9($v0)
    MEM_B(0X34C9, ctx->r2) = ctx->r9;
    // 0x80296D58: addiu       $a0, $a0, 0x7D48
    ctx->r4 = ADD32(ctx->r4, 0X7D48);
    // 0x80296D5C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296D60: jal         0x8002135C
    // 0x80296D64: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_17;
    // 0x80296D64: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_17:
    // 0x80296D68: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    // 0x80296D6C: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x80296D70: jal         0x8029ACD4
    // 0x80296D74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_18;
    // 0x80296D74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80296D78: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80296D7C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80296D80: lbu         $t3, 0x3A19($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3A19);
    // 0x80296D84: lbu         $t2, 0x3937($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3937);
    // 0x80296D88: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296D8C: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x80296D90: addiu       $a1, $a1, 0x131
    ctx->r5 = ADD32(ctx->r5, 0X131);
    // 0x80296D94: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x80296D98: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80296D9C: jal         0x8007AAF8
    // 0x80296DA0: addiu       $a0, $a0, 0x7C1C
    ctx->r4 = ADD32(ctx->r4, 0X7C1C);
    func_8007AAF8(rdram, ctx);
        goto after_19;
    // 0x80296DA0: addiu       $a0, $a0, 0x7C1C
    ctx->r4 = ADD32(ctx->r4, 0X7C1C);
    after_19:
    // 0x80296DA4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296DA8: addiu       $a0, $a0, 0x7C1C
    ctx->r4 = ADD32(ctx->r4, 0X7C1C);
    // 0x80296DAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80296DB0: jal         0x8002135C
    // 0x80296DB4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_20;
    // 0x80296DB4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_20:
    // 0x80296DB8: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80296DBC: lbu         $a2, -0x3092($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3092);
    // 0x80296DC0: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x80296DC4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80296DC8: jal         0x802973B8
    // 0x80296DCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_802973B8(rdram, ctx);
        goto after_21;
    // 0x80296DCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x80296DD0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80296DD4: lbu         $a2, -0x3091($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3091);
    // 0x80296DD8: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x80296DDC: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x80296DE0: jal         0x802973B8
    // 0x80296DE4: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    func_802973B8(rdram, ctx);
        goto after_22;
    // 0x80296DE4: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    after_22:
    // 0x80296DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80296DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80296DF0: jr          $ra
    // 0x80296DF4: nop

    return;
    // 0x80296DF4: nop

;}
RECOMP_FUNC void func_80296DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296DF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80296E00: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x80296E04: addiu       $s0, $s0, 0x3937
    ctx->r16 = ADD32(ctx->r16, 0X3937);
    // 0x80296E08: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80296E0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80296E10: lh          $a2, 0x3930($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X3930);
    // 0x80296E14: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80296E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80296E1C: jal         0x80297A84
    // 0x80296E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80297A84(rdram, ctx);
        goto after_0;
    // 0x80296E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80296E24: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80296E28: bne         $v1, $zero, L_80296E3C
    if (ctx->r3 != 0) {
        // 0x80296E2C: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80296E3C;
    }
    // 0x80296E2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80296E30: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80296E34: b           L_80296E44
    // 0x80296E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80296E44;
    // 0x80296E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80296E3C:
    // 0x80296E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80296E40: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
L_80296E44:
    // 0x80296E44: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x80296E48: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x80296E4C: sh          $v0, 0x34D4($a2)
    MEM_H(0X34D4, ctx->r6) = ctx->r2;
    // 0x80296E50: beq         $v1, $zero, L_80296E78
    if (ctx->r3 == 0) {
        // 0x80296E54: sh          $a0, 0x33A8($a2)
        MEM_H(0X33A8, ctx->r6) = ctx->r4;
            goto L_80296E78;
    }
    // 0x80296E54: sh          $a0, 0x33A8($a2)
    MEM_H(0X33A8, ctx->r6) = ctx->r4;
    // 0x80296E58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80296E5C: beq         $v1, $at, L_80296EAC
    if (ctx->r3 == ctx->r1) {
        // 0x80296E60: lui         $s0, 0x8012
        ctx->r16 = S32(0X8012 << 16);
            goto L_80296EAC;
    }
    // 0x80296E60: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80296E64: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80296E68: lbu         $a2, -0x3092($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3092);
    // 0x80296E6C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80296E70: b           L_80296EDC
    // 0x80296E74: addiu       $s0, $s0, -0x30A0
    ctx->r16 = ADD32(ctx->r16, -0X30A0);
        goto L_80296EDC;
    // 0x80296E74: addiu       $s0, $s0, -0x30A0
    ctx->r16 = ADD32(ctx->r16, -0X30A0);
L_80296E78:
    // 0x80296E78: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80296E7C: addiu       $s0, $s0, -0x30A0
    ctx->r16 = ADD32(ctx->r16, -0X30A0);
    // 0x80296E80: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80296E84: lh          $a2, 0x392E($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X392E);
    // 0x80296E88: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80296E8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80296E90: jal         0x80297A84
    // 0x80296E94: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80297A84(rdram, ctx);
        goto after_1;
    // 0x80296E94: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_1:
    // 0x80296E98: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80296E9C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80296EA0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80296EA4: b           L_80296EDC
    // 0x80296EA8: sb          $a2, -0x307A($at)
    MEM_B(-0X307A, ctx->r1) = ctx->r6;
        goto L_80296EDC;
    // 0x80296EA8: sb          $a2, -0x307A($at)
    MEM_B(-0X307A, ctx->r1) = ctx->r6;
L_80296EAC:
    // 0x80296EAC: addiu       $s0, $s0, -0x30A0
    ctx->r16 = ADD32(ctx->r16, -0X30A0);
    // 0x80296EB0: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80296EB4: lh          $a2, 0x392E($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X392E);
    // 0x80296EB8: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x80296EBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80296EC0: jal         0x80297A84
    // 0x80296EC4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_80297A84(rdram, ctx);
        goto after_2;
    // 0x80296EC4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_2:
    // 0x80296EC8: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80296ECC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80296ED0: sb          $v0, -0x3079($at)
    MEM_B(-0X3079, ctx->r1) = ctx->r2;
    // 0x80296ED4: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x80296ED8: nop

L_80296EDC:
    // 0x80296EDC: addiu       $a0, $zero, 0x4F
    ctx->r4 = ADD32(0, 0X4F);
    // 0x80296EE0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80296EE4: jal         0x802973B8
    // 0x80296EE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_802973B8(rdram, ctx);
        goto after_3;
    // 0x80296EE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80296EEC: lbu         $a2, 0xF($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XF);
    // 0x80296EF0: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x80296EF4: addiu       $a1, $zero, 0x52
    ctx->r5 = ADD32(0, 0X52);
    // 0x80296EF8: jal         0x802973B8
    // 0x80296EFC: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    func_802973B8(rdram, ctx);
        goto after_4;
    // 0x80296EFC: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    after_4:
    // 0x80296F00: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80296F04: lbu         $t8, 0x3A19($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3A19);
    // 0x80296F08: lbu         $t7, 0xE($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XE);
    // 0x80296F0C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296F10: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80296F14: addiu       $a1, $a1, 0x128
    ctx->r5 = ADD32(ctx->r5, 0X128);
    // 0x80296F18: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80296F1C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80296F20: jal         0x8007AAF8
    // 0x80296F24: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    func_8007AAF8(rdram, ctx);
        goto after_5;
    // 0x80296F24: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    after_5:
    // 0x80296F28: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x80296F2C: lbu         $t1, 0x3A19($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3A19);
    // 0x80296F30: lbu         $t0, 0xF($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XF);
    // 0x80296F34: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296F38: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x80296F3C: addiu       $a1, $a1, 0x12B
    ctx->r5 = ADD32(ctx->r5, 0X12B);
    // 0x80296F40: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x80296F44: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80296F48: jal         0x8007AAF8
    // 0x80296F4C: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x80296F4C: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    after_6:
    // 0x80296F50: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x80296F54: lhu         $t3, 0x3934($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X3934);
    // 0x80296F58: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80296F5C: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x80296F60: beq         $t4, $zero, L_80296FA8
    if (ctx->r12 == 0) {
        // 0x80296F64: lui         $a1, 0x2
        ctx->r5 = S32(0X2 << 16);
            goto L_80296FA8;
    }
    // 0x80296F64: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80296F68: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80296F6C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80296F70: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80296F74: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_80296F78:
    // 0x80296F78: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80296F7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80296F80: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80296F84: slti        $at, $t8, 0x55
    ctx->r1 = SIGNED(ctx->r24) < 0X55 ? 1 : 0;
    // 0x80296F88: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80296F8C: mflo        $t5
    ctx->r13 = lo;
    // 0x80296F90: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80296F94: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80296F98: bne         $at, $zero, L_80296F78
    if (ctx->r1 != 0) {
        // 0x80296F9C: sb          $zero, 0x2148($t7)
        MEM_B(0X2148, ctx->r15) = 0;
            goto L_80296F78;
    }
    // 0x80296F9C: sb          $zero, 0x2148($t7)
    MEM_B(0X2148, ctx->r15) = 0;
    // 0x80296FA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80296FA4: sb          $zero, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = 0;
L_80296FA8:
    // 0x80296FA8: jal         0x802933F0
    // 0x80296FAC: nop

    func_802933F0(rdram, ctx);
        goto after_7;
    // 0x80296FAC: nop

    after_7:
    // 0x80296FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80296FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80296FB8: jr          $ra
    // 0x80296FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80296FBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80296FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80296FC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80296FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80296FC8: addiu       $a0, $zero, 0x49
    ctx->r4 = ADD32(0, 0X49);
    // 0x80296FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80296FD0: jal         0x8029ACD4
    // 0x80296FD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80296FD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80296FD8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80296FDC: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80296FE0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296FE4: addiu       $a1, $a1, 0x137
    ctx->r5 = ADD32(ctx->r5, 0X137);
    // 0x80296FE8: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80296FEC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80296FF0: jal         0x8007AAF8
    // 0x80296FF4: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80296FF4: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    after_1:
    // 0x80296FF8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80296FFC: addiu       $a0, $a0, 0x7AF0
    ctx->r4 = ADD32(ctx->r4, 0X7AF0);
    // 0x80297000: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297004: jal         0x8002135C
    // 0x80297008: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80297008: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_2:
    // 0x8029700C: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x80297010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297014: jal         0x8029ACD4
    // 0x80297018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x80297018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8029701C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297020: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297024: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297028: addiu       $a1, $a1, 0x138
    ctx->r5 = ADD32(ctx->r5, 0X138);
    // 0x8029702C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80297030: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80297034: jal         0x8007AAF8
    // 0x80297038: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80297038: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    after_4:
    // 0x8029703C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297040: addiu       $a0, $a0, 0x7B2C
    ctx->r4 = ADD32(ctx->r4, 0X7B2C);
    // 0x80297044: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297048: jal         0x8002135C
    // 0x8029704C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8029704C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_5:
    // 0x80297050: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x80297054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297058: jal         0x8029ACD4
    // 0x8029705C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x8029705C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80297060: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297064: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297068: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8029706C: addiu       $a1, $a1, 0x139
    ctx->r5 = ADD32(ctx->r5, 0X139);
    // 0x80297070: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80297074: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80297078: jal         0x8007AAF8
    // 0x8029707C: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x8029707C: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    after_7:
    // 0x80297080: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297084: addiu       $a0, $a0, 0x7B68
    ctx->r4 = ADD32(ctx->r4, 0X7B68);
    // 0x80297088: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8029708C: jal         0x8002135C
    // 0x80297090: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80297090: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    after_8:
    // 0x80297094: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80297098: addiu       $v0, $v0, 0x3938
    ctx->r2 = ADD32(ctx->r2, 0X3938);
    // 0x8029709C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802970A0: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x802970A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802970A8: sb          $zero, 0x39C9($at)
    MEM_B(0X39C9, ctx->r1) = 0;
    // 0x802970AC: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x802970B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802970B4: bne         $t0, $zero, L_802970C8
    if (ctx->r8 != 0) {
        // 0x802970B8: addiu       $a0, $zero, 0x4C
        ctx->r4 = ADD32(0, 0X4C);
            goto L_802970C8;
    }
    // 0x802970B8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x802970BC: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x802970C0: b           L_802970D0
    // 0x802970C4: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
        goto L_802970D0;
    // 0x802970C4: sb          $zero, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = 0;
L_802970C8:
    // 0x802970C8: addiu       $t1, $zero, 0x22
    ctx->r9 = ADD32(0, 0X22);
    // 0x802970CC: sb          $t1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r9;
L_802970D0:
    // 0x802970D0: jal         0x8029ACD4
    // 0x802970D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x802970D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x802970D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802970DC: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x802970E0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802970E4: addiu       $a1, $a1, 0x13B
    ctx->r5 = ADD32(ctx->r5, 0X13B);
    // 0x802970E8: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x802970EC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x802970F0: jal         0x8007AAF8
    // 0x802970F4: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x802970F4: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    after_10:
    // 0x802970F8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802970FC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80297100: lbu         $t3, 0x331C($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X331C);
    // 0x80297104: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x80297108: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8029710C: ori         $t5, $t4, 0x6
    ctx->r13 = ctx->r12 | 0X6;
    // 0x80297110: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297114: sb          $t5, 0x331C($v0)
    MEM_B(0X331C, ctx->r2) = ctx->r13;
    // 0x80297118: sb          $t6, 0x3325($v0)
    MEM_B(0X3325, ctx->r2) = ctx->r14;
    // 0x8029711C: addiu       $a0, $a0, 0x7BA4
    ctx->r4 = ADD32(ctx->r4, 0X7BA4);
    // 0x80297120: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297124: jal         0x8002135C
    // 0x80297128: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80297128: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_11:
    // 0x8029712C: lbu         $a1, 0x1E($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1E);
    // 0x80297130: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x80297134: jal         0x8029ACD4
    // 0x80297138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_12;
    // 0x80297138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x8029713C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297140: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297144: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297148: addiu       $a1, $a1, 0x13A
    ctx->r5 = ADD32(ctx->r5, 0X13A);
    // 0x8029714C: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80297150: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80297154: jal         0x8007AAF8
    // 0x80297158: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    func_8007AAF8(rdram, ctx);
        goto after_13;
    // 0x80297158: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    after_13:
    // 0x8029715C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297160: addiu       $a0, $a0, 0x7BE0
    ctx->r4 = ADD32(ctx->r4, 0X7BE0);
    // 0x80297164: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297168: jal         0x8002135C
    // 0x8029716C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x8029716C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_14:
    // 0x80297170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80297178: jr          $ra
    // 0x8029717C: nop

    return;
    // 0x8029717C: nop

;}
RECOMP_FUNC void func_80297180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297180: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80297184: lbu         $v0, 0x39C9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39C9);
    // 0x80297188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8029718C: beq         $v0, $zero, L_802971A8
    if (ctx->r2 == 0) {
        // 0x80297190: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802971A8;
    }
    // 0x80297190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297194: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80297198: beq         $v0, $v1, L_802972D0
    if (ctx->r2 == ctx->r3) {
        // 0x8029719C: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802972D0;
    }
    // 0x8029719C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802971A0: b           L_80297364
    // 0x802971A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80297364;
    // 0x802971A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802971A8:
    // 0x802971A8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802971AC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802971B0: lh          $a2, 0x392E($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X392E);
    // 0x802971B4: lbu         $a0, 0x3938($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3938);
    // 0x802971B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802971BC: jal         0x80297A84
    // 0x802971C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80297A84(rdram, ctx);
        goto after_0;
    // 0x802971C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802971C4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802971C8: addiu       $a1, $a1, 0x3938
    ctx->r5 = ADD32(ctx->r5, 0X3938);
    // 0x802971CC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x802971D0: bne         $t6, $zero, L_802971E4
    if (ctx->r14 != 0) {
        // 0x802971D4: sb          $v0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r2;
            goto L_802971E4;
    }
    // 0x802971D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802971D8: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x802971DC: b           L_802971EC
    // 0x802971E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_802971EC;
    // 0x802971E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802971E4:
    // 0x802971E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802971E8: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
L_802971EC:
    // 0x802971EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802971F0: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x802971F4: sh          $v0, 0x332C($a0)
    MEM_H(0X332C, ctx->r4) = ctx->r2;
    // 0x802971F8: sh          $v1, 0x3368($a0)
    MEM_H(0X3368, ctx->r4) = ctx->r3;
    // 0x802971FC: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80297200: lhu         $t7, 0x3934($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3934);
    // 0x80297204: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80297208: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8029720C: beq         $t8, $zero, L_80297364
    if (ctx->r24 == 0) {
        // 0x80297210: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80297364;
    }
    // 0x80297210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297214: lbu         $t9, -0x32A4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X32A4);
    // 0x80297218: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8029721C: beq         $t9, $at, L_80297234
    if (ctx->r25 == ctx->r1) {
        // 0x80297220: nop
    
            goto L_80297234;
    }
    // 0x80297220: nop

    // 0x80297224: jal         0x80015BC0
    // 0x80297228: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80297228: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_1:
    // 0x8029722C: b           L_8029723C
    // 0x80297230: nop

        goto L_8029723C;
    // 0x80297230: nop

L_80297234:
    // 0x80297234: jal         0x80015BC0
    // 0x80297238: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80297238: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_2:
L_8029723C:
    // 0x8029723C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80297240: lbu         $t0, 0x3938($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X3938);
    // 0x80297244: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80297248: bne         $v1, $t0, L_8029729C
    if (ctx->r3 != ctx->r8) {
        // 0x8029724C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8029729C;
    }
    // 0x8029724C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80297250: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80297254: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80297258: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8029725C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80297260: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80297264: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_80297268:
    // 0x80297268: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029726C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80297270: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x80297274: slti        $at, $t4, 0x55
    ctx->r1 = SIGNED(ctx->r12) < 0X55 ? 1 : 0;
    // 0x80297278: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8029727C: mflo        $t1
    ctx->r9 = lo;
    // 0x80297280: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80297284: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80297288: bne         $at, $zero, L_80297268
    if (ctx->r1 != 0) {
        // 0x8029728C: sb          $zero, 0x2148($t3)
        MEM_B(0X2148, ctx->r11) = 0;
            goto L_80297268;
    }
    // 0x8029728C: sb          $zero, 0x2148($t3)
    MEM_B(0X2148, ctx->r11) = 0;
    // 0x80297290: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297294: b           L_80297360
    // 0x80297298: sb          $zero, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = 0;
        goto L_80297360;
    // 0x80297298: sb          $zero, 0x392C($at)
    MEM_B(0X392C, ctx->r1) = 0;
L_8029729C:
    // 0x8029729C: addiu       $v0, $v0, 0x39C9
    ctx->r2 = ADD32(ctx->r2, 0X39C9);
    // 0x802972A0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x802972A4: nop

    // 0x802972A8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x802972AC: jal         0x80021960
    // 0x802972B0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    func_80021960(rdram, ctx);
        goto after_3;
    // 0x802972B0: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    after_3:
    // 0x802972B4: jal         0x80015BC0
    // 0x802972B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x802972B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x802972BC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802972C0: addiu       $a0, $a0, 0x3A4C
    ctx->r4 = ADD32(ctx->r4, 0X3A4C);
    // 0x802972C4: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x802972C8: b           L_80297360
    // 0x802972CC: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_80297360;
    // 0x802972CC: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_802972D0:
    // 0x802972D0: addiu       $a0, $a0, 0x3A4C
    ctx->r4 = ADD32(ctx->r4, 0X3A4C);
    // 0x802972D4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802972D8: nop

    // 0x802972DC: beq         $v0, $zero, L_802972EC
    if (ctx->r2 == 0) {
        // 0x802972E0: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_802972EC;
    }
    // 0x802972E0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x802972E4: b           L_80297360
    // 0x802972E8: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
        goto L_80297360;
    // 0x802972E8: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_802972EC:
    // 0x802972EC: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802972F0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802972F4: lh          $t9, 0x7CA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X7CA);
    // 0x802972F8: nop

    // 0x802972FC: bne         $v1, $t9, L_80297360
    if (ctx->r3 != ctx->r25) {
        // 0x80297300: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80297360;
    }
    // 0x80297300: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80297304: sb          $zero, -0x3272($at)
    MEM_B(-0X3272, ctx->r1) = 0;
    // 0x80297308: lbu         $t0, 0x754($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X754);
    // 0x8029730C: nop

    // 0x80297310: andi        $t1, $t0, 0xFC
    ctx->r9 = ctx->r8 & 0XFC;
    // 0x80297314: jal         0x8005ACAC
    // 0x80297318: sb          $t1, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r9;
    func_8005ACAC(rdram, ctx);
        goto after_5;
    // 0x80297318: sb          $t1, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r9;
    after_5:
    // 0x8029731C: jal         0x800603F0
    // 0x80297320: nop

    func_800603F0(rdram, ctx);
        goto after_6;
    // 0x80297320: nop

    after_6:
    // 0x80297324: jal         0x8001B854
    // 0x80297328: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_7;
    // 0x80297328: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x8029732C: jal         0x80015BC0
    // 0x80297330: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80015BC0(rdram, ctx);
        goto after_8;
    // 0x80297330: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x80297334: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80297338: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x8029733C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80297340: bne         $t2, $at, L_80297358
    if (ctx->r10 != ctx->r1) {
        // 0x80297344: nop
    
            goto L_80297358;
    }
    // 0x80297344: nop

    // 0x80297348: jal         0x80036C78
    // 0x8029734C: nop

    func_80036C78(rdram, ctx);
        goto after_9;
    // 0x8029734C: nop

    after_9:
    // 0x80297350: b           L_80297364
    // 0x80297354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80297364;
    // 0x80297354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80297358:
    // 0x80297358: jal         0x80036D58
    // 0x8029735C: nop

    func_80036D58(rdram, ctx);
        goto after_10;
    // 0x8029735C: nop

    after_10:
L_80297360:
    // 0x80297360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80297364:
    // 0x80297364: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80297368: jr          $ra
    // 0x8029736C: nop

    return;
    // 0x8029736C: nop

;}
RECOMP_FUNC void func_80297370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297370: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80297374: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80297378: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8029737C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80297380: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80297384: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_80297388:
    // 0x80297388: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8029738C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80297390: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80297394: slti        $at, $t9, 0x5A
    ctx->r1 = SIGNED(ctx->r25) < 0X5A ? 1 : 0;
    // 0x80297398: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8029739C: mflo        $t6
    ctx->r14 = lo;
    // 0x802973A0: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x802973A4: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x802973A8: bne         $at, $zero, L_80297388
    if (ctx->r1 != 0) {
        // 0x802973AC: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_80297388;
    }
    // 0x802973AC: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x802973B0: jr          $ra
    // 0x802973B4: nop

    return;
    // 0x802973B4: nop

;}
RECOMP_FUNC void func_802973B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802973B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802973BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802973C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802973C4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x802973C8: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x802973CC: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x802973D0: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x802973D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802973D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802973DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802973E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802973E4: beq         $t6, $zero, L_8029740C
    if (ctx->r14 == 0) {
        // 0x802973E8: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_8029740C;
    }
    // 0x802973E8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802973EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802973F0: beq         $t6, $at, L_8029748C
    if (ctx->r14 == ctx->r1) {
        // 0x802973F4: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_8029748C;
    }
    // 0x802973F4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x802973F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802973FC: beq         $t6, $at, L_80297558
    if (ctx->r14 == ctx->r1) {
        // 0x80297400: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_80297558;
    }
    // 0x80297400: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80297404: b           L_802975D4
    // 0x80297408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802975D4;
    // 0x80297408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8029740C:
    // 0x8029740C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80297410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297414: jal         0x8029ACD4
    // 0x80297418: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80297418: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    after_0:
    // 0x8029741C: sll         $t8, $s1, 4
    ctx->r24 = S32(ctx->r17 << 4);
    // 0x80297420: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297424: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297428: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x8029742C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80297430: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x80297434: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80297438: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x8029743C: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x80297440: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80297444: addiu       $a1, $a1, 0x12F
    ctx->r5 = ADD32(ctx->r5, 0X12F);
    // 0x80297448: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x8029744C: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x80297450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297454: jal         0x8007AAF8
    // 0x80297458: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x80297458: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x8029745C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297460: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297464: jal         0x8002135C
    // 0x80297468: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80297468: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_2:
    // 0x8029746C: lbu         $t2, 0x27($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X27);
    // 0x80297470: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80297474: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80297478: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8029747C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80297480: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80297484: b           L_802975D0
    // 0x80297488: sb          $zero, 0x69D8($at)
    MEM_B(0X69D8, ctx->r1) = 0;
        goto L_802975D0;
    // 0x80297488: sb          $zero, 0x69D8($at)
    MEM_B(0X69D8, ctx->r1) = 0;
L_8029748C:
    // 0x8029748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297490: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    // 0x80297494: jal         0x8029ACD4
    // 0x80297498: sb          $a3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r7;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x80297498: sb          $a3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r7;
    after_3:
    // 0x8029749C: sll         $t4, $s1, 4
    ctx->r12 = S32(ctx->r17 << 4);
    // 0x802974A0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802974A4: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x802974A8: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x802974AC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802974B0: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x802974B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802974B8: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x802974BC: addiu       $t6, $t6, -0x3770
    ctx->r14 = ADD32(ctx->r14, -0X3770);
    // 0x802974C0: addu        $t5, $t4, $at
    ctx->r13 = ADD32(ctx->r12, ctx->r1);
    // 0x802974C4: addiu       $a1, $a1, 0x12E
    ctx->r5 = ADD32(ctx->r5, 0X12E);
    // 0x802974C8: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x802974CC: addu        $s0, $t5, $t6
    ctx->r16 = ADD32(ctx->r13, ctx->r14);
    // 0x802974D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802974D4: jal         0x8007AAF8
    // 0x802974D8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x802974D8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_4:
    // 0x802974DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802974E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802974E4: jal         0x8002135C
    // 0x802974E8: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x802974E8: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_5:
    // 0x802974EC: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x802974F0: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x802974F4: jal         0x8029ACD4
    // 0x802974F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x802974F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x802974FC: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x80297500: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297504: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x80297508: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x8029750C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80297510: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80297514: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80297518: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029751C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x80297520: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x80297524: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80297528: addiu       $a1, $a1, 0x12F
    ctx->r5 = ADD32(ctx->r5, 0X12F);
    // 0x8029752C: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x80297530: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x80297534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297538: jal         0x8007AAF8
    // 0x8029753C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x8029753C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_7:
    // 0x80297540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80297544: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297548: jal         0x8002135C
    // 0x8029754C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8029754C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_8:
    // 0x80297550: b           L_802975D4
    // 0x80297554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802975D4;
    // 0x80297554: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80297558:
    // 0x80297558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029755C: jal         0x8029ACD4
    // 0x80297560: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x80297560: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    after_9:
    // 0x80297564: sll         $t3, $s1, 4
    ctx->r11 = S32(ctx->r17 << 4);
    // 0x80297568: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8029756C: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297570: subu        $t3, $t3, $s1
    ctx->r11 = SUB32(ctx->r11, ctx->r17);
    // 0x80297574: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80297578: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x8029757C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80297580: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x80297584: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x80297588: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8029758C: addiu       $a1, $a1, 0x12E
    ctx->r5 = ADD32(ctx->r5, 0X12E);
    // 0x80297590: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80297594: addu        $s0, $t4, $t5
    ctx->r16 = ADD32(ctx->r12, ctx->r13);
    // 0x80297598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8029759C: jal         0x8007AAF8
    // 0x802975A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x802975A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_10:
    // 0x802975A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802975A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802975AC: jal         0x8002135C
    // 0x802975B0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x802975B0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_11:
    // 0x802975B4: lbu         $t7, 0x27($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X27);
    // 0x802975B8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802975BC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x802975C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802975C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802975C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802975CC: sb          $zero, 0x69D8($at)
    MEM_B(0X69D8, ctx->r1) = 0;
L_802975D0:
    // 0x802975D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802975D4:
    // 0x802975D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802975D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802975DC: jr          $ra
    // 0x802975E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802975E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802975E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802975E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802975E8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802975EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802975F0: bne         $t6, $zero, L_80297628
    if (ctx->r14 != 0) {
        // 0x802975F4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80297628;
    }
    // 0x802975F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802975F8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802975FC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80297600: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x80297604: nop

    // 0x80297608: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x8029760C: beq         $t8, $zero, L_80297654
    if (ctx->r24 == 0) {
        // 0x80297610: nop
    
            goto L_80297654;
    }
    // 0x80297610: nop

    // 0x80297614: lhu         $t9, 0x10($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X10);
    // 0x80297618: nop

    // 0x8029761C: xori        $t0, $t9, 0x40
    ctx->r8 = ctx->r25 ^ 0X40;
    // 0x80297620: b           L_80297654
    // 0x80297624: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
        goto L_80297654;
    // 0x80297624: sh          $t0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r8;
L_80297628:
    // 0x80297628: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8029762C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80297630: lhu         $t1, 0xA9C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80297634: nop

    // 0x80297638: andi        $t2, $t1, 0x80
    ctx->r10 = ctx->r9 & 0X80;
    // 0x8029763C: beq         $t2, $zero, L_80297654
    if (ctx->r10 == 0) {
        // 0x80297640: nop
    
            goto L_80297654;
    }
    // 0x80297640: nop

    // 0x80297644: lhu         $t3, 0xAA4($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XAA4);
    // 0x80297648: nop

    // 0x8029764C: xori        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 ^ 0X40;
    // 0x80297650: sh          $t4, 0xAA4($v0)
    MEM_H(0XAA4, ctx->r2) = ctx->r12;
L_80297654:
    // 0x80297654: jal         0x8029766C
    // 0x80297658: nop

    func_8029766C(rdram, ctx);
        goto after_0;
    // 0x80297658: nop

    after_0:
    // 0x8029765C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80297664: jr          $ra
    // 0x80297668: nop

    return;
    // 0x80297668: nop

;}
RECOMP_FUNC void func_8029766C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029766C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80297670: lhu         $t6, -0x2CE0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2CE0);
    // 0x80297674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80297678: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x8029767C: beq         $t7, $zero, L_802976C0
    if (ctx->r15 == 0) {
        // 0x80297680: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802976C0;
    }
    // 0x80297680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297684: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x80297688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029768C: jal         0x8029ACD4
    // 0x80297690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x80297690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80297694: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297698: addiu       $a0, $a0, 0x7AB4
    ctx->r4 = ADD32(ctx->r4, 0X7AB4);
    // 0x8029769C: jal         0x8007AAF8
    // 0x802976A0: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x802976A0: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    after_1:
    // 0x802976A4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802976A8: addiu       $a0, $a0, 0x7AB4
    ctx->r4 = ADD32(ctx->r4, 0X7AB4);
    // 0x802976AC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802976B0: jal         0x8002135C
    // 0x802976B4: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802976B4: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    after_2:
    // 0x802976B8: b           L_802976C8
    // 0x802976BC: nop

        goto L_802976C8;
    // 0x802976BC: nop

L_802976C0:
    // 0x802976C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802976C4: sb          $zero, 0x7AB8($at)
    MEM_B(0X7AB8, ctx->r1) = 0;
L_802976C8:
    // 0x802976C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802976CC: lhu         $t8, -0x224C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X224C);
    // 0x802976D0: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    // 0x802976D4: andi        $t9, $t8, 0x40
    ctx->r25 = ctx->r24 & 0X40;
    // 0x802976D8: beq         $t9, $zero, L_80297718
    if (ctx->r25 == 0) {
        // 0x802976DC: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_80297718;
    }
    // 0x802976DC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802976E0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x802976E4: jal         0x8029ACD4
    // 0x802976E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x802976E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802976EC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802976F0: addiu       $a0, $a0, 0x7D84
    ctx->r4 = ADD32(ctx->r4, 0X7D84);
    // 0x802976F4: jal         0x8007AAF8
    // 0x802976F8: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x802976F8: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    after_4:
    // 0x802976FC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80297700: addiu       $a0, $a0, 0x7D84
    ctx->r4 = ADD32(ctx->r4, 0X7D84);
    // 0x80297704: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297708: jal         0x8002135C
    // 0x8029770C: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8029770C: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    after_5:
    // 0x80297710: b           L_80297720
    // 0x80297714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80297720;
    // 0x80297714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80297718:
    // 0x80297718: sb          $zero, 0x7D88($at)
    MEM_B(0X7D88, ctx->r1) = 0;
    // 0x8029771C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80297720:
    // 0x80297720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80297724: jr          $ra
    // 0x80297728: nop

    return;
    // 0x80297728: nop

;}
RECOMP_FUNC void func_8029772C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8029772C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80297730: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80297734: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80297738: addiu       $s4, $s4, -0x32B0
    ctx->r20 = ADD32(ctx->r20, -0X32B0);
    // 0x8029773C: lbu         $t6, 0xC($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XC);
    // 0x80297740: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80297744: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80297748: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8029774C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80297750: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80297754: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80297758: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8029775C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80297760: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80297764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80297768: bne         $t6, $at, L_802978AC
    if (ctx->r14 != ctx->r1) {
        // 0x8029776C: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_802978AC;
    }
    // 0x8029776C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80297770: lui         $fp, 0x2
    ctx->r30 = S32(0X2 << 16);
    // 0x80297774: lui         $s5, 0x8010
    ctx->r21 = S32(0X8010 << 16);
    // 0x80297778: lui         $s4, 0x8010
    ctx->r20 = S32(0X8010 << 16);
    // 0x8029777C: addiu       $s4, $s4, 0x4890
    ctx->r20 = ADD32(ctx->r20, 0X4890);
    // 0x80297780: addiu       $s5, $s5, 0x7A3C
    ctx->r21 = ADD32(ctx->r21, 0X7A3C);
    // 0x80297784: ori         $fp, $fp, 0xA144
    ctx->r30 = ctx->r30 | 0XA144;
    // 0x80297788: addiu       $s2, $zero, 0x43
    ctx->r18 = ADD32(0, 0X43);
    // 0x8029778C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80297790: addiu       $s7, $zero, 0x3C
    ctx->r23 = ADD32(0, 0X3C);
    // 0x80297794: addiu       $s6, $zero, 0xC0
    ctx->r22 = ADD32(0, 0XC0);
L_80297798:
    // 0x80297798: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8029779C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802977A0: jal         0x8029ACD4
    // 0x802977A4: andi        $a2, $s3, 0xFFFF
    ctx->r6 = ctx->r19 & 0XFFFF;
    func_8029ACD4(rdram, ctx);
        goto after_0;
    // 0x802977A4: andi        $a2, $s3, 0xFFFF
    ctx->r6 = ctx->r19 & 0XFFFF;
    after_0:
    // 0x802977A8: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802977AC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802977B0: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x802977B4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x802977B8: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x802977BC: addiu       $a1, $a1, 0x132
    ctx->r5 = ADD32(ctx->r5, 0X132);
    // 0x802977C0: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x802977C4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802977C8: mflo        $t7
    ctx->r15 = lo;
    // 0x802977CC: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x802977D0: addu        $s1, $s0, $fp
    ctx->r17 = ADD32(ctx->r16, ctx->r30);
    // 0x802977D4: jal         0x8007AAF8
    // 0x802977D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x802977D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802977DC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802977E0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802977E4: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x802977E8: lbu         $t0, 0x214C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X214C);
    // 0x802977EC: sb          $s6, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r22;
    // 0x802977F0: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x802977F4: ori         $t2, $t1, 0x6
    ctx->r10 = ctx->r9 | 0X6;
    // 0x802977F8: sb          $t2, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r10;
    // 0x802977FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80297800: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297804: jal         0x8002135C
    // 0x80297808: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80297808: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_2:
    // 0x8029780C: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    // 0x80297810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80297814: jal         0x8029ACD4
    // 0x80297818: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    func_8029ACD4(rdram, ctx);
        goto after_3;
    // 0x80297818: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_3:
    // 0x8029781C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297820: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297824: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80297828: addiu       $a1, $a1, 0x132
    ctx->r5 = ADD32(ctx->r5, 0X132);
    // 0x8029782C: andi        $t3, $a1, 0xFFFF
    ctx->r11 = ctx->r5 & 0XFFFF;
    // 0x80297830: jal         0x8007AAF8
    // 0x80297834: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x80297834: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_4:
    // 0x80297838: lbu         $t4, 0x31B4($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X31B4);
    // 0x8029783C: sb          $s6, 0x31BD($s4)
    MEM_B(0X31BD, ctx->r20) = ctx->r22;
    // 0x80297840: andi        $t5, $t4, 0xFF01
    ctx->r13 = ctx->r12 & 0XFF01;
    // 0x80297844: ori         $t6, $t5, 0x6
    ctx->r14 = ctx->r13 | 0X6;
    // 0x80297848: sb          $t6, 0x31B4($s4)
    MEM_B(0X31B4, ctx->r20) = ctx->r14;
    // 0x8029784C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80297850: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297854: jal         0x8002135C
    // 0x80297858: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x80297858: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_5:
    // 0x8029785C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80297860: andi        $t7, $s2, 0xFF
    ctx->r15 = ctx->r18 & 0XFF;
    // 0x80297864: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x80297868: andi        $t8, $s3, 0xFF
    ctx->r24 = ctx->r19 & 0XFF;
    // 0x8029786C: slti        $at, $t7, 0x46
    ctx->r1 = SIGNED(ctx->r15) < 0X46 ? 1 : 0;
    // 0x80297870: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80297874: bne         $at, $zero, L_80297798
    if (ctx->r1 != 0) {
        // 0x80297878: or          $s2, $t7, $zero
        ctx->r18 = ctx->r15 | 0;
            goto L_80297798;
    }
    // 0x80297878: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8029787C: lbu         $s0, 0x43($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X43);
    // 0x80297880: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80297884: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80297888: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8029788C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80297890: bne         $s0, $at, L_802979F0
    if (ctx->r16 != ctx->r1) {
        // 0x80297894: andi        $a2, $v0, 0xFF
        ctx->r6 = ctx->r2 & 0XFF;
            goto L_802979F0;
    }
    // 0x80297894: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80297898: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8029789C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802978A0: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x802978A4: b           L_802979F0
    // 0x802978A8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
        goto L_802979F0;
    // 0x802978A8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
L_802978AC:
    // 0x802978AC: lui         $fp, 0x2
    ctx->r30 = S32(0X2 << 16);
    // 0x802978B0: ori         $fp, $fp, 0xA144
    ctx->r30 = ctx->r30 | 0XA144;
    // 0x802978B4: addiu       $s2, $zero, 0x43
    ctx->r18 = ADD32(0, 0X43);
    // 0x802978B8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802978BC: addiu       $s7, $zero, 0x3C
    ctx->r23 = ADD32(0, 0X3C);
    // 0x802978C0: addiu       $s6, $zero, 0xC0
    ctx->r22 = ADD32(0, 0XC0);
L_802978C4:
    // 0x802978C4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x802978C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802978CC: jal         0x8029ACD4
    // 0x802978D0: andi        $a2, $s3, 0xFFFF
    ctx->r6 = ctx->r19 & 0XFFFF;
    func_8029ACD4(rdram, ctx);
        goto after_6;
    // 0x802978D0: andi        $a2, $s3, 0xFFFF
    ctx->r6 = ctx->r19 & 0XFFFF;
    after_6:
    // 0x802978D4: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802978D8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802978DC: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x802978E0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x802978E4: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x802978E8: addiu       $a1, $a1, 0x132
    ctx->r5 = ADD32(ctx->r5, 0X132);
    // 0x802978EC: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x802978F0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x802978F4: mflo        $t0
    ctx->r8 = lo;
    // 0x802978F8: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x802978FC: addu        $s1, $s0, $fp
    ctx->r17 = ADD32(ctx->r16, ctx->r30);
    // 0x80297900: jal         0x8007AAF8
    // 0x80297904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x80297904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80297908: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8029790C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80297910: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x80297914: lbu         $t3, 0x214C($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X214C);
    // 0x80297918: sb          $s6, 0x2155($v0)
    MEM_B(0X2155, ctx->r2) = ctx->r22;
    // 0x8029791C: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x80297920: ori         $t5, $t4, 0x6
    ctx->r13 = ctx->r12 | 0X6;
    // 0x80297924: sb          $t5, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r13;
    // 0x80297928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8029792C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297930: jal         0x8002135C
    // 0x80297934: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x80297934: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_8:
    // 0x80297938: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8029793C: andi        $t6, $s2, 0xFF
    ctx->r14 = ctx->r18 & 0XFF;
    // 0x80297940: addiu       $s3, $s3, 0x14
    ctx->r19 = ADD32(ctx->r19, 0X14);
    // 0x80297944: andi        $t7, $s3, 0xFF
    ctx->r15 = ctx->r19 & 0XFF;
    // 0x80297948: slti        $at, $t6, 0x47
    ctx->r1 = SIGNED(ctx->r14) < 0X47 ? 1 : 0;
    // 0x8029794C: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80297950: bne         $at, $zero, L_802978C4
    if (ctx->r1 != 0) {
        // 0x80297954: or          $s2, $t6, $zero
        ctx->r18 = ctx->r14 | 0;
            goto L_802978C4;
    }
    // 0x80297954: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80297958: lbu         $t8, 0xC($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0XC);
    // 0x8029795C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80297960: bne         $t8, $at, L_802979C4
    if (ctx->r24 != ctx->r1) {
        // 0x80297964: addiu       $a0, $zero, 0x47
        ctx->r4 = ADD32(0, 0X47);
            goto L_802979C4;
    }
    // 0x80297964: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    // 0x80297968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8029796C: jal         0x8029ACD4
    // 0x80297970: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    func_8029ACD4(rdram, ctx);
        goto after_9;
    // 0x80297970: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_9:
    // 0x80297974: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297978: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x8029797C: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x80297980: addiu       $a1, $a1, 0x132
    ctx->r5 = ADD32(ctx->r5, 0X132);
    // 0x80297984: addiu       $s0, $s0, 0x7A78
    ctx->r16 = ADD32(ctx->r16, 0X7A78);
    // 0x80297988: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8029798C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80297990: jal         0x8007AAF8
    // 0x80297994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x80297994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80297998: lui         $s4, 0x8010
    ctx->r20 = S32(0X8010 << 16);
    // 0x8029799C: addiu       $s4, $s4, 0x4890
    ctx->r20 = ADD32(ctx->r20, 0X4890);
    // 0x802979A0: lbu         $t0, 0x31F0($s4)
    ctx->r8 = MEM_BU(ctx->r20, 0X31F0);
    // 0x802979A4: sb          $s6, 0x31F9($s4)
    MEM_B(0X31F9, ctx->r20) = ctx->r22;
    // 0x802979A8: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x802979AC: ori         $t2, $t1, 0x6
    ctx->r10 = ctx->r9 | 0X6;
    // 0x802979B0: sb          $t2, 0x31F0($s4)
    MEM_B(0X31F0, ctx->r20) = ctx->r10;
    // 0x802979B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802979B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802979BC: jal         0x8002135C
    // 0x802979C0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x802979C0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_11:
L_802979C4:
    // 0x802979C4: lbu         $s0, 0x43($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X43);
    // 0x802979C8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802979CC: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x802979D0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802979D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802979D8: bne         $s0, $at, L_802979F0
    if (ctx->r16 != ctx->r1) {
        // 0x802979DC: andi        $a2, $v0, 0xFF
        ctx->r6 = ctx->r2 & 0XFF;
            goto L_802979F0;
    }
    // 0x802979DC: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x802979E0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802979E4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802979E8: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x802979EC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
L_802979F0:
    // 0x802979F0: addiu       $a0, $s0, 0x43
    ctx->r4 = ADD32(ctx->r16, 0X43);
    // 0x802979F4: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x802979F8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x802979FC: jal         0x8029ACD4
    // 0x80297A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8029ACD4(rdram, ctx);
        goto after_12;
    // 0x80297A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80297A04: sll         $t5, $s0, 4
    ctx->r13 = S32(ctx->r16 << 4);
    // 0x80297A08: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80297A0C: lbu         $a1, 0x3A19($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3A19);
    // 0x80297A10: subu        $t5, $t5, $s0
    ctx->r13 = SUB32(ctx->r13, ctx->r16);
    // 0x80297A14: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80297A18: ori         $at, $at, 0xB0F8
    ctx->r1 = ctx->r1 | 0XB0F8;
    // 0x80297A1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80297A20: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80297A24: addiu       $t7, $t7, -0x3770
    ctx->r15 = ADD32(ctx->r15, -0X3770);
    // 0x80297A28: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x80297A2C: addiu       $a1, $a1, 0x130
    ctx->r5 = ADD32(ctx->r5, 0X130);
    // 0x80297A30: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x80297A34: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80297A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80297A3C: jal         0x8007AAF8
    // 0x80297A40: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_13;
    // 0x80297A40: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_13:
    // 0x80297A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80297A48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80297A4C: jal         0x8002135C
    // 0x80297A50: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    func_8002135C(rdram, ctx);
        goto after_14;
    // 0x80297A50: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    after_14:
    // 0x80297A54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80297A58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80297A5C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80297A60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80297A64: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80297A68: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80297A6C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80297A70: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80297A74: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80297A78: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80297A7C: jr          $ra
    // 0x80297A80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80297A80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80297A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297A84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80297A88: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x80297A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80297A90: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80297A94: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80297A98: andi        $t9, $v1, 0x4
    ctx->r25 = ctx->r3 & 0X4;
    // 0x80297A9C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80297AA0: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x80297AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80297AA8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80297AAC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80297AB0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80297AB4: beq         $t9, $zero, L_80297ACC
    if (ctx->r25 == 0) {
        // 0x80297AB8: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_80297ACC;
    }
    // 0x80297AB8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80297ABC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80297AC0: lbu         $a0, 0x392B($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X392B);
    // 0x80297AC4: b           L_80297ADC
    // 0x80297AC8: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
        goto L_80297ADC;
    // 0x80297AC8: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
L_80297ACC:
    // 0x80297ACC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x80297AD0: lbu         $a0, 0x392A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X392A);
    // 0x80297AD4: nop

    // 0x80297AD8: andi        $t1, $v1, 0x1
    ctx->r9 = ctx->r3 & 0X1;
L_80297ADC:
    // 0x80297ADC: beq         $t1, $zero, L_80297B18
    if (ctx->r9 == 0) {
        // 0x80297AE0: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_80297B18;
    }
    // 0x80297AE0: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x80297AE4: slti        $at, $a2, 0x29
    ctx->r1 = SIGNED(ctx->r6) < 0X29 ? 1 : 0;
    // 0x80297AE8: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80297AEC: bne         $at, $zero, L_80297AFC
    if (ctx->r1 != 0) {
        // 0x80297AF0: addiu       $a3, $zero, 0x100
        ctx->r7 = ADD32(0, 0X100);
            goto L_80297AFC;
    }
    // 0x80297AF0: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80297AF4: b           L_80297B40
    // 0x80297AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80297B40;
    // 0x80297AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80297AFC:
    // 0x80297AFC: slti        $at, $a2, -0x28
    ctx->r1 = SIGNED(ctx->r6) < -0X28 ? 1 : 0;
    // 0x80297B00: beq         $at, $zero, L_80297B10
    if (ctx->r1 == 0) {
        // 0x80297B04: nop
    
            goto L_80297B10;
    }
    // 0x80297B04: nop

    // 0x80297B08: b           L_80297B40
    // 0x80297B0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80297B40;
    // 0x80297B0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80297B10:
    // 0x80297B10: b           L_80297B40
    // 0x80297B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80297B40;
    // 0x80297B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80297B18:
    // 0x80297B18: slti        $at, $a2, -0x28
    ctx->r1 = SIGNED(ctx->r6) < -0X28 ? 1 : 0;
    // 0x80297B1C: beq         $at, $zero, L_80297B2C
    if (ctx->r1 == 0) {
        // 0x80297B20: addiu       $a3, $zero, 0x400
        ctx->r7 = ADD32(0, 0X400);
            goto L_80297B2C;
    }
    // 0x80297B20: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
    // 0x80297B24: b           L_80297B40
    // 0x80297B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80297B40;
    // 0x80297B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80297B2C:
    // 0x80297B2C: slti        $at, $a2, 0x29
    ctx->r1 = SIGNED(ctx->r6) < 0X29 ? 1 : 0;
    // 0x80297B30: bne         $at, $zero, L_80297B40
    if (ctx->r1 != 0) {
        // 0x80297B34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80297B40;
    }
    // 0x80297B34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80297B38: b           L_80297B40
    // 0x80297B3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80297B40;
    // 0x80297B3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80297B40:
    // 0x80297B40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80297B44: bne         $v0, $at, L_80297BC8
    if (ctx->r2 != ctx->r1) {
        // 0x80297B48: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_80297BC8;
    }
    // 0x80297B48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80297B4C: beq         $a0, $zero, L_80297B68
    if (ctx->r4 == 0) {
        // 0x80297B50: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80297B68;
    }
    // 0x80297B50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80297B54: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80297B58: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x80297B5C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80297B60: b           L_80297D50
    // 0x80297B64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
        goto L_80297D50;
    // 0x80297B64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80297B68:
    // 0x80297B68: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x80297B6C: beq         $t3, $zero, L_80297BA8
    if (ctx->r11 == 0) {
        // 0x80297B70: nop
    
            goto L_80297BA8;
    }
    // 0x80297B70: nop

    // 0x80297B74: lbu         $t4, 0x37($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X37);
    // 0x80297B78: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80297B7C: beq         $t4, $s0, L_80297D54
    if (ctx->r12 == ctx->r16) {
        // 0x80297B80: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_80297D54;
    }
    // 0x80297B80: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80297B84: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x80297B88: jal         0x80015BC0
    // 0x80297B8C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x80297B8C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x80297B90: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80297B94: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297B98: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x80297B9C: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297BA0: b           L_80297D50
    // 0x80297BA4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_80297D50;
    // 0x80297BA4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80297BA8:
    // 0x80297BA8: jal         0x80015BC0
    // 0x80297BAC: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x80297BAC: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_1:
    // 0x80297BB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80297BB4: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297BB8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80297BBC: b           L_80297D50
    // 0x80297BC0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_80297D50;
    // 0x80297BC0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297BC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_80297BC8:
    // 0x80297BC8: bne         $v0, $at, L_80297C40
    if (ctx->r2 != ctx->r1) {
        // 0x80297BCC: nop
    
            goto L_80297C40;
    }
    // 0x80297BCC: nop

    // 0x80297BD0: beq         $a0, $zero, L_80297BEC
    if (ctx->r4 == 0) {
        // 0x80297BD4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80297BEC;
    }
    // 0x80297BD4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80297BD8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80297BDC: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80297BE0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80297BE4: b           L_80297D50
    // 0x80297BE8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
        goto L_80297D50;
    // 0x80297BE8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80297BEC:
    // 0x80297BEC: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x80297BF0: beq         $t8, $zero, L_80297C24
    if (ctx->r24 == 0) {
        // 0x80297BF4: nop
    
            goto L_80297C24;
    }
    // 0x80297BF4: nop

    // 0x80297BF8: beq         $s0, $zero, L_80297D50
    if (ctx->r16 == 0) {
        // 0x80297BFC: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80297D50;
    }
    // 0x80297BFC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80297C00: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x80297C04: jal         0x80015BC0
    // 0x80297C08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x80297C08: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x80297C0C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80297C10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297C14: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
    // 0x80297C18: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297C1C: b           L_80297D50
    // 0x80297C20: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_80297D50;
    // 0x80297C20: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80297C24:
    // 0x80297C24: jal         0x80015BC0
    // 0x80297C28: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x80297C28: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_3:
    // 0x80297C2C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80297C30: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297C34: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297C38: b           L_80297D50
    // 0x80297C3C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_80297D50;
    // 0x80297C3C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80297C40:
    // 0x80297C40: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80297C44: lhu         $v0, 0x3932($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3932);
    // 0x80297C48: nop

    // 0x80297C4C: and         $t1, $v0, $a1
    ctx->r9 = ctx->r2 & ctx->r5;
    // 0x80297C50: beq         $t1, $zero, L_80297CC8
    if (ctx->r9 == 0) {
        // 0x80297C54: and         $t6, $v0, $a3
        ctx->r14 = ctx->r2 & ctx->r7;
            goto L_80297CC8;
    }
    // 0x80297C54: and         $t6, $v0, $a3
    ctx->r14 = ctx->r2 & ctx->r7;
    // 0x80297C58: beq         $a0, $zero, L_80297C74
    if (ctx->r4 == 0) {
        // 0x80297C5C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80297C74;
    }
    // 0x80297C5C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80297C60: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80297C64: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x80297C68: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80297C6C: b           L_80297D50
    // 0x80297C70: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
        goto L_80297D50;
    // 0x80297C70: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80297C74:
    // 0x80297C74: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x80297C78: beq         $t3, $zero, L_80297CAC
    if (ctx->r11 == 0) {
        // 0x80297C7C: nop
    
            goto L_80297CAC;
    }
    // 0x80297C7C: nop

    // 0x80297C80: beq         $s0, $zero, L_80297D50
    if (ctx->r16 == 0) {
        // 0x80297C84: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80297D50;
    }
    // 0x80297C84: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80297C88: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x80297C8C: jal         0x80015BC0
    // 0x80297C90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x80297C90: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x80297C94: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80297C98: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297C9C: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
    // 0x80297CA0: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297CA4: b           L_80297D50
    // 0x80297CA8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_80297D50;
    // 0x80297CA8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80297CAC:
    // 0x80297CAC: jal         0x80015BC0
    // 0x80297CB0: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_5;
    // 0x80297CB0: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_5:
    // 0x80297CB4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80297CB8: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297CBC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80297CC0: b           L_80297D50
    // 0x80297CC4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_80297D50;
    // 0x80297CC4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
L_80297CC8:
    // 0x80297CC8: beq         $t6, $zero, L_80297D48
    if (ctx->r14 == 0) {
        // 0x80297CCC: nop
    
            goto L_80297D48;
    }
    // 0x80297CCC: nop

    // 0x80297CD0: beq         $a0, $zero, L_80297CEC
    if (ctx->r4 == 0) {
        // 0x80297CD4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80297CEC;
    }
    // 0x80297CD4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80297CD8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80297CDC: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80297CE0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80297CE4: b           L_80297D50
    // 0x80297CE8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
        goto L_80297D50;
    // 0x80297CE8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80297CEC:
    // 0x80297CEC: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x80297CF0: beq         $t8, $zero, L_80297D2C
    if (ctx->r24 == 0) {
        // 0x80297CF4: nop
    
            goto L_80297D2C;
    }
    // 0x80297CF4: nop

    // 0x80297CF8: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x80297CFC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80297D00: beq         $t9, $s0, L_80297D54
    if (ctx->r25 == ctx->r16) {
        // 0x80297D04: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_80297D54;
    }
    // 0x80297D04: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80297D08: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x80297D0C: jal         0x80015BC0
    // 0x80297D10: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_80015BC0(rdram, ctx);
        goto after_6;
    // 0x80297D10: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x80297D14: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80297D18: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80297D1C: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
    // 0x80297D20: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297D24: b           L_80297D50
    // 0x80297D28: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
        goto L_80297D50;
    // 0x80297D28: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_80297D2C:
    // 0x80297D2C: jal         0x80015BC0
    // 0x80297D30: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_7;
    // 0x80297D30: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_7:
    // 0x80297D34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80297D38: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80297D3C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80297D40: b           L_80297D50
    // 0x80297D44: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
        goto L_80297D50;
    // 0x80297D44: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
L_80297D48:
    // 0x80297D48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80297D4C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80297D50:
    // 0x80297D50: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_80297D54:
    // 0x80297D54: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80297D58: bne         $v1, $at, L_80297D70
    if (ctx->r3 != ctx->r1) {
        // 0x80297D5C: lbu         $t2, 0x37($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X37);
            goto L_80297D70;
    }
    // 0x80297D5C: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x80297D60: lbu         $s0, 0x37($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X37);
    // 0x80297D64: b           L_80297D84
    // 0x80297D68: nop

        goto L_80297D84;
    // 0x80297D68: nop

    // 0x80297D6C: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
L_80297D70:
    // 0x80297D70: nop

    // 0x80297D74: slt         $at, $t2, $v1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80297D78: beq         $at, $zero, L_80297D84
    if (ctx->r1 == 0) {
        // 0x80297D7C: nop
    
            goto L_80297D84;
    }
    // 0x80297D7C: nop

    // 0x80297D80: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80297D84:
    // 0x80297D84: beq         $t3, $zero, L_80297D98
    if (ctx->r11 == 0) {
        // 0x80297D88: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80297D98;
    }
    // 0x80297D88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80297D8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297D90: b           L_80297DA0
    // 0x80297D94: sb          $a0, 0x392B($at)
    MEM_B(0X392B, ctx->r1) = ctx->r4;
        goto L_80297DA0;
    // 0x80297D94: sb          $a0, 0x392B($at)
    MEM_B(0X392B, ctx->r1) = ctx->r4;
L_80297D98:
    // 0x80297D98: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297D9C: sb          $a0, 0x392A($at)
    MEM_B(0X392A, ctx->r1) = ctx->r4;
L_80297DA0:
    // 0x80297DA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80297DA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80297DA8: jr          $ra
    // 0x80297DAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80297DAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80297DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297DB0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80297DB4: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80297DB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80297DBC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80297DC0: bne         $t6, $at, L_80297DD0
    if (ctx->r14 != ctx->r1) {
        // 0x80297DC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80297DD0;
    }
    // 0x80297DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297DC8: b           L_80297DF0
    // 0x80297DCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_80297DF0;
    // 0x80297DCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80297DD0:
    // 0x80297DD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80297DD4: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x80297DD8: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x80297DDC: lb          $t9, 0x4($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4);
    // 0x80297DE0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80297DE4: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x80297DE8: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x80297DEC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
L_80297DF0:
    // 0x80297DF0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80297DF4: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80297DF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80297DFC: beq         $v0, $at, L_80297E10
    if (ctx->r2 == ctx->r1) {
        // 0x80297E00: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80297E10;
    }
    // 0x80297E00: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80297E04: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80297E08: bne         $v0, $at, L_80297E18
    if (ctx->r2 != ctx->r1) {
        // 0x80297E0C: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_80297E18;
    }
    // 0x80297E0C: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
L_80297E10:
    // 0x80297E10: b           L_80297E18
    // 0x80297E14: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
        goto L_80297E18;
    // 0x80297E14: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
L_80297E18:
    // 0x80297E18: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80297E1C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80297E20: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80297E24: sb          $t1, 0x38F4($v0)
    MEM_B(0X38F4, ctx->r2) = ctx->r9;
    // 0x80297E28: addiu       $a0, $a0, -0x7E80
    ctx->r4 = ADD32(ctx->r4, -0X7E80);
    // 0x80297E2C: addiu       $a1, $zero, 0x15A
    ctx->r5 = ADD32(0, 0X15A);
    // 0x80297E30: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x80297E34: jal         0x8007AAF8
    // 0x80297E38: sb          $a3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r7;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80297E38: sb          $a3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r7;
    after_0:
    // 0x80297E3C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80297E40: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80297E44: lbu         $t2, 0x38F8($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X38F8);
    // 0x80297E48: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80297E4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80297E50: lbu         $t6, 0x38F9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38F9);
    // 0x80297E54: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x80297E58: lbu         $a3, 0x27($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X27);
    // 0x80297E5C: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x80297E60: ori         $t4, $t3, 0xA
    ctx->r12 = ctx->r11 | 0XA;
    // 0x80297E64: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80297E68: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80297E6C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x80297E70: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x80297E74: sb          $t4, 0x38F8($v0)
    MEM_B(0X38F8, ctx->r2) = ctx->r12;
    // 0x80297E78: sb          $t7, 0x38F9($v0)
    MEM_B(0X38F9, ctx->r2) = ctx->r15;
    // 0x80297E7C: sb          $t8, 0x3901($v0)
    MEM_B(0X3901, ctx->r2) = ctx->r24;
    // 0x80297E80: sb          $t9, 0x38F5($v0)
    MEM_B(0X38F5, ctx->r2) = ctx->r25;
    // 0x80297E84: sh          $zero, 0x3908($v0)
    MEM_H(0X3908, ctx->r2) = 0;
    // 0x80297E88: swc1        $f0, 0x3918($v0)
    MEM_W(0X3918, ctx->r2) = ctx->f0.u32l;
    // 0x80297E8C: swc1        $f0, 0x391C($v0)
    MEM_W(0X391C, ctx->r2) = ctx->f0.u32l;
    // 0x80297E90: sh          $v1, 0x390C($v0)
    MEM_H(0X390C, ctx->r2) = ctx->r3;
    // 0x80297E94: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80297E98: lbu         $a2, -0x3598($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3598);
    // 0x80297E9C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80297EA0: addiu       $a0, $a0, -0x7E80
    ctx->r4 = ADD32(ctx->r4, -0X7E80);
    // 0x80297EA4: jal         0x8002135C
    // 0x80297EA8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80297EA8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x80297EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80297EB4: jr          $ra
    // 0x80297EB8: nop

    return;
    // 0x80297EB8: nop

;}
RECOMP_FUNC void func_80297EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297EBC: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80297EC0: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x80297EC4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80297EC8: beq         $t6, $at, L_80297EEC
    if (ctx->r14 == ctx->r1) {
        // 0x80297ECC: lui         $t7, 0x8012
        ctx->r15 = S32(0X8012 << 16);
            goto L_80297EEC;
    }
    // 0x80297ECC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80297ED0: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x80297ED4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80297ED8: beq         $t7, $at, L_80297EEC
    if (ctx->r15 == ctx->r1) {
        // 0x80297EDC: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80297EEC;
    }
    // 0x80297EDC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80297EE0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80297EE4: sb          $zero, 0x38F4($v0)
    MEM_B(0X38F4, ctx->r2) = 0;
    // 0x80297EE8: sb          $zero, 0x38B8($v0)
    MEM_B(0X38B8, ctx->r2) = 0;
L_80297EEC:
    // 0x80297EEC: jr          $ra
    // 0x80297EF0: nop

    return;
    // 0x80297EF0: nop

;}
RECOMP_FUNC void func_80297EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80297EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297EFC: jal         0x80297DB0
    // 0x80297F00: nop

    func_80297DB0(rdram, ctx);
        goto after_0;
    // 0x80297F00: nop

    after_0:
    // 0x80297F04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80297F08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297F10: swc1        $f4, 0x39E4($at)
    MEM_W(0X39E4, ctx->r1) = ctx->f4.u32l;
    // 0x80297F14: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80297F18: sb          $zero, -0x7E7C($at)
    MEM_B(-0X7E7C, ctx->r1) = 0;
    // 0x80297F1C: jr          $ra
    // 0x80297F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80297F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80297F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80297F24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F28: lwc1        $f4, 0x3958($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3958);
    // 0x80297F2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F30: lwc1        $f6, 0x3964($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3964);
    // 0x80297F34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F38: lwc1        $f8, 0x3950($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3950);
    // 0x80297F3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F40: lwc1        $f10, 0x395C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X395C);
    // 0x80297F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80297F48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80297F4C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80297F50: jal         0x8001C5D0
    // 0x80297F54: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8001C5D0(rdram, ctx);
        goto after_0;
    // 0x80297F54: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80297F58: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x80297F5C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80297F60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80297F64: lwc1        $f19, 0x868($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X868);
    // 0x80297F68: lwc1        $f18, 0x86C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X86C);
    // 0x80297F6C: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80297F70: nop

    // 0x80297F74: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x80297F78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80297F7C: lui         $at, 0x4070
    ctx->r1 = S32(0X4070 << 16);
    // 0x80297F80: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80297F84: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80297F88: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x80297F8C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80297F90: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x80297F94: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80297F98: bc1f        L_80297FC0
    if (!c1cs) {
        // 0x80297F9C: nop
    
            goto L_80297FC0;
    }
    // 0x80297F9C: nop

    // 0x80297FA0: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
L_80297FA4:
    // 0x80297FA4: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x80297FA8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x80297FAC: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x80297FB0: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80297FB4: nop

    // 0x80297FB8: bc1t        L_80297FA4
    if (c1cs) {
        // 0x80297FBC: nop
    
            goto L_80297FA4;
    }
    // 0x80297FBC: nop

L_80297FC0:
    // 0x80297FC0: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    // 0x80297FC4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80297FC8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80297FCC: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x80297FD0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80297FD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80297FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80297FDC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80297FE0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80297FE4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80297FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80297FEC: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80297FF0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80297FF4: nop

    // 0x80297FF8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80297FFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80298000: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80298004: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80298008: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8029800C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80298010: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80298014: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80298018: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8029801C: sh          $t7, 0x38CC($v0)
    MEM_H(0X38CC, ctx->r2) = ctx->r15;
    // 0x80298020: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80298024: nop

    // 0x80298028: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8029802C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80298030: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80298034: nop

    // 0x80298038: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8029803C: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80298040: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80298044: jr          $ra
    // 0x80298048: sh          $t9, 0x3944($v0)
    MEM_H(0X3944, ctx->r2) = ctx->r25;
    return;
    // 0x80298048: sh          $t9, 0x3944($v0)
    MEM_H(0X3944, ctx->r2) = ctx->r25;
;}
