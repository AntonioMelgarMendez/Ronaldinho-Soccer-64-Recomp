#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802AD050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AD050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AD054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AD058: jal         0x80087D40
    // 0x802AD05C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802AD05C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802AD060: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802AD064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AD068: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x802AD06C: div         $zero, $v0, $t6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r14)));
    // 0x802AD070: bne         $t6, $zero, L_802AD07C
    if (ctx->r14 != 0) {
        // 0x802AD074: nop
    
            goto L_802AD07C;
    }
    // 0x802AD074: nop

    // 0x802AD078: break       7
    do_break(2150289528);
L_802AD07C:
    // 0x802AD07C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802AD080: bne         $t6, $at, L_802AD094
    if (ctx->r14 != ctx->r1) {
        // 0x802AD084: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802AD094;
    }
    // 0x802AD084: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AD088: bne         $v0, $at, L_802AD094
    if (ctx->r2 != ctx->r1) {
        // 0x802AD08C: nop
    
            goto L_802AD094;
    }
    // 0x802AD08C: nop

    // 0x802AD090: break       6
    do_break(2150289552);
L_802AD094:
    // 0x802AD094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AD098: mfhi        $t7
    ctx->r15 = hi;
    // 0x802AD09C: subu        $v0, $t7, $v1
    ctx->r2 = SUB32(ctx->r15, ctx->r3);
    // 0x802AD0A0: jr          $ra
    // 0x802AD0A4: nop

    return;
    // 0x802AD0A4: nop

;}
RECOMP_FUNC void func_802AD0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AD0A8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD0AC: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD0B0: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x802AD0B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802AD0B8: bne         $t6, $zero, L_802AD0D0
    if (ctx->r14 != 0) {
        // 0x802AD0BC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802AD0D0;
    }
    // 0x802AD0BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AD0C0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AD0C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AD0C8: b           L_802AD0E0
    // 0x802AD0CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
        goto L_802AD0E0;
    // 0x802AD0CC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_802AD0D0:
    // 0x802AD0D0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AD0D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AD0D8: nop

    // 0x802AD0DC: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_802AD0E0:
    // 0x802AD0E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AD0E4: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802AD0E8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AD0EC: beq         $v0, $at, L_802AE0D8
    if (ctx->r2 == ctx->r1) {
        // 0x802AD0F0: lui         $t0, 0x802C
        ctx->r8 = S32(0X802C << 16);
            goto L_802AE0D8;
    }
    // 0x802AD0F0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AD0F4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AD0F8: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
    // 0x802AD0FC: lw          $t7, 0x4C($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4C);
    // 0x802AD100: lw          $t8, 0x48($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X48);
    // 0x802AD104: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802AD108: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    // 0x802AD10C: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x802AD110: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x802AD114: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x802AD118: lw          $a1, 0x30($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X30);
    // 0x802AD11C: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x802AD120: beq         $a2, $zero, L_802AD130
    if (ctx->r6 == 0) {
        // 0x802AD124: sw          $t9, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r25;
            goto L_802AD130;
    }
    // 0x802AD124: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x802AD128: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD12C: bne         $a2, $at, L_802AD434
    if (ctx->r6 != ctx->r1) {
        // 0x802AD130: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802AD434;
    }
L_802AD130:
    // 0x802AD130: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802AD134: beq         $v0, $at, L_802AE0D8
    if (ctx->r2 == ctx->r1) {
        // 0x802AD138: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802AE0D8;
    }
    // 0x802AD138: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AD13C: beq         $v0, $at, L_802AE0DC
    if (ctx->r2 == ctx->r1) {
        // 0x802AD140: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802AD140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AD144: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x802AD148: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AD14C: beq         $v1, $zero, L_802AD170
    if (ctx->r3 == 0) {
        // 0x802AD150: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802AD170;
    }
    // 0x802AD150: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802AD154: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AD158: beq         $v1, $at, L_802AD2D0
    if (ctx->r3 == ctx->r1) {
        // 0x802AD15C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AD2D0;
    }
    // 0x802AD15C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AD160: beq         $v0, $at, L_802AD2D0
    if (ctx->r2 == ctx->r1) {
        // 0x802AD164: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802AD2D0;
    }
    // 0x802AD164: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AD168: b           L_802AD318
    // 0x802AD16C: addiu       $a0, $a0, 0x5130
    ctx->r4 = ADD32(ctx->r4, 0X5130);
        goto L_802AD318;
    // 0x802AD16C: addiu       $a0, $a0, 0x5130
    ctx->r4 = ADD32(ctx->r4, 0X5130);
L_802AD170:
    // 0x802AD170: addiu       $a0, $a0, 0x5130
    ctx->r4 = ADD32(ctx->r4, 0X5130);
    // 0x802AD174: lh          $t2, 0x24($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X24);
    // 0x802AD178: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802AD17C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802AD180: sh          $t3, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r11;
    // 0x802AD184: lh          $t4, 0x24($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X24);
    // 0x802AD188: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802AD18C: bgtz        $t4, L_802AD2BC
    if (SIGNED(ctx->r12) > 0) {
        // 0x802AD190: nop
    
            goto L_802AD2BC;
    }
    // 0x802AD190: nop

    // 0x802AD194: lhu         $v0, 0xB80($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB80);
    // 0x802AD198: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AD19C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802AD1A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AD1A4: bgez        $v0, L_802AD1C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802AD1A8: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_802AD1C0;
    }
    // 0x802AD1A8: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x802AD1AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802AD1B0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802AD1B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802AD1B8: nop

    // 0x802AD1BC: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_802AD1C0:
    // 0x802AD1C0: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x802AD1C4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AD1C8: sub.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f8.d - ctx->f16.d;
    // 0x802AD1CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AD1D0: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x802AD1D4: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802AD1D8: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x802AD1DC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802AD1E0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802AD1E4: beq         $at, $zero, L_802AD1F8
    if (ctx->r1 == 0) {
        // 0x802AD1E8: cvt.s.d     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
            goto L_802AD1F8;
    }
    // 0x802AD1E8: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x802AD1EC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802AD1F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AD1F4: nop

L_802AD1F8:
    // 0x802AD1F8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802AD1FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AD200: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802AD204: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802AD208: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802AD20C: nop

    // 0x802AD210: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802AD214: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AD218: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AD21C: nop

    // 0x802AD220: cvt.w.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802AD224: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x802AD228: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802AD22C: jal         0x80087D40
    // 0x802AD230: sh          $t6, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r14;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802AD230: sh          $t6, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r14;
    after_0:
    // 0x802AD234: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x802AD238: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x802AD23C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AD240: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802AD244: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD248: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD24C: addiu       $a0, $a0, 0x5130
    ctx->r4 = ADD32(ctx->r4, 0X5130);
    // 0x802AD250: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802AD254: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802AD258: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AD25C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AD260: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AD264: mfhi        $t7
    ctx->r15 = hi;
    // 0x802AD268: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x802AD26C: bgez        $t7, L_802AD280
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802AD270: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802AD280;
    }
    // 0x802AD270: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802AD274: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AD278: nop

    // 0x802AD27C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802AD280:
    // 0x802AD280: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x802AD284: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AD288: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x802AD28C: nop

    // 0x802AD290: mul.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AD294: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x802AD298: nop

    // 0x802AD29C: bc1f        L_802AD2AC
    if (!c1cs) {
        // 0x802AD2A0: nop
    
            goto L_802AD2AC;
    }
    // 0x802AD2A0: nop

    // 0x802AD2A4: b           L_802AD2B0
    // 0x802AD2A8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
        goto L_802AD2B0;
    // 0x802AD2A8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_802AD2AC:
    // 0x802AD2AC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_802AD2B0:
    // 0x802AD2B0: lw          $v1, 0x55C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55C0);
    // 0x802AD2B4: b           L_802AD318
    // 0x802AD2B8: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
        goto L_802AD318;
    // 0x802AD2B8: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
L_802AD2BC:
    // 0x802AD2BC: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x802AD2C0: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x802AD2C4: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x802AD2C8: b           L_802AD318
    // 0x802AD2CC: nop

        goto L_802AD318;
    // 0x802AD2CC: nop

L_802AD2D0:
    // 0x802AD2D0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AD2D4: addiu       $a0, $a0, 0x5130
    ctx->r4 = ADD32(ctx->r4, 0X5130);
    // 0x802AD2D8: lh          $t2, 0x24($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X24);
    // 0x802AD2DC: nop

    // 0x802AD2E0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802AD2E4: sh          $t3, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r11;
    // 0x802AD2E8: lh          $t4, 0x24($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X24);
    // 0x802AD2EC: nop

    // 0x802AD2F0: bgtz        $t4, L_802AD318
    if (SIGNED(ctx->r12) > 0) {
        // 0x802AD2F4: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802AD318;
    }
    // 0x802AD2F4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AD2F8: lw          $v0, 0x50C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50C0);
    // 0x802AD2FC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802AD300: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802AD304: nop

    // 0x802AD308: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x802AD30C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802AD310: lw          $v1, 0x8($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X8);
    // 0x802AD314: nop

L_802AD318:
    // 0x802AD318: beq         $v1, $zero, L_802AD330
    if (ctx->r3 == 0) {
        // 0x802AD31C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802AD330;
    }
    // 0x802AD31C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AD320: beq         $v1, $at, L_802AD330
    if (ctx->r3 == ctx->r1) {
        // 0x802AD324: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AD330;
    }
    // 0x802AD324: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AD328: bne         $v1, $at, L_802AD65C
    if (ctx->r3 != ctx->r1) {
        // 0x802AD32C: nop
    
            goto L_802AD65C;
    }
    // 0x802AD32C: nop

L_802AD330:
    // 0x802AD330: jal         0x802ACC38
    // 0x802AD334: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    func_802ACC38(rdram, ctx);
        goto after_1;
    // 0x802AD334: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    after_1:
    // 0x802AD338: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD33C: lwc1        $f16, 0x5150($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5150);
    // 0x802AD340: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AD344: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802AD348: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x802AD34C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD350: bc1t        L_802AD3D4
    if (c1cs) {
        // 0x802AD354: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802AD3D4;
    }
    // 0x802AD354: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD358: jal         0x80087D40
    // 0x802AD35C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    func_80087D40(rdram, ctx);
        goto after_2;
    // 0x802AD35C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    after_2:
    // 0x802AD360: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x802AD364: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802AD368: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD36C: lwc1        $f11, 0x15D8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X15D8);
    // 0x802AD370: lwc1        $f10, 0x15DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X15DC);
    // 0x802AD374: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD378: mfhi        $t7
    ctx->r15 = hi;
    // 0x802AD37C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802AD380: nop

    // 0x802AD384: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802AD388: sub.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d - ctx->f10.d;
    // 0x802AD38C: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x802AD390: jal         0x80087D40
    // 0x802AD394: swc1        $f8, 0x5148($at)
    MEM_W(0X5148, ctx->r1) = ctx->f8.u32l;
    func_80087D40(rdram, ctx);
        goto after_3;
    // 0x802AD394: swc1        $f8, 0x5148($at)
    MEM_W(0X5148, ctx->r1) = ctx->f8.u32l;
    after_3:
    // 0x802AD398: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x802AD39C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802AD3A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD3A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AD3A8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD3AC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802AD3B0: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD3B4: mfhi        $t8
    ctx->r24 = hi;
    // 0x802AD3B8: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x802AD3BC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802AD3C0: nop

    // 0x802AD3C4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AD3C8: swc1        $f4, 0x514C($at)
    MEM_W(0X514C, ctx->r1) = ctx->f4.u32l;
    // 0x802AD3CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD3D0: swc1        $f6, 0x5150($at)
    MEM_W(0X5150, ctx->r1) = ctx->f6.u32l;
L_802AD3D4:
    // 0x802AD3D4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802AD3D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD3DC: lwc1        $f10, 0x5140($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5140);
    // 0x802AD3E0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802AD3E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AD3E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AD3EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD3F0: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802AD3F4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AD3F8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802AD3FC: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x802AD400: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
    // 0x802AD404: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AD408: sh          $t3, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r11;
    // 0x802AD40C: lwc1        $f8, 0x5144($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5144);
    // 0x802AD410: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802AD414: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AD418: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AD41C: nop

    // 0x802AD420: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802AD424: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x802AD428: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AD42C: b           L_802AD65C
    // 0x802AD430: sh          $t5, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r13;
        goto L_802AD65C;
    // 0x802AD430: sh          $t5, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r13;
L_802AD434:
    // 0x802AD434: lhu         $t6, 0x4($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X4);
    // 0x802AD438: nop

    // 0x802AD43C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802AD440: lw          $t7, 0x28($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X28);
    // 0x802AD444: nop

    // 0x802AD448: lhu         $t8, 0x6($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6);
    // 0x802AD44C: nop

    // 0x802AD450: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x802AD454: lh          $t9, 0x50($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X50);
    // 0x802AD458: nop

    // 0x802AD45C: beq         $t9, $zero, L_802AD584
    if (ctx->r25 == 0) {
        // 0x802AD460: nop
    
            goto L_802AD584;
    }
    // 0x802AD460: nop

    // 0x802AD464: lh          $t2, 0x6($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X6);
    // 0x802AD468: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    // 0x802AD46C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802AD470: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x802AD474: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802AD478: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802AD47C: jal         0x802A6890
    // 0x802AD480: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    func_802A6890(rdram, ctx);
        goto after_4;
    // 0x802AD480: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_4:
    // 0x802AD484: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802AD488: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD48C: beq         $v0, $zero, L_802AD498
    if (ctx->r2 == 0) {
        // 0x802AD490: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802AD498;
    }
    // 0x802AD490: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD494: sh          $zero, 0x50($a3)
    MEM_H(0X50, ctx->r7) = 0;
L_802AD498:
    // 0x802AD498: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802AD49C: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AD4A0: andi        $t4, $v0, 0x200
    ctx->r12 = ctx->r2 & 0X200;
    // 0x802AD4A4: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x802AD4A8: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x802AD4AC: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x802AD4B0: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x802AD4B4: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x802AD4B8: or          $t2, $t8, $t9
    ctx->r10 = ctx->r24 | ctx->r25;
    // 0x802AD4BC: beq         $t2, $zero, L_802AD4F0
    if (ctx->r10 == 0) {
        // 0x802AD4C0: nop
    
            goto L_802AD4F0;
    }
    // 0x802AD4C0: nop

    // 0x802AD4C4: lh          $t3, 0x54($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X54);
    // 0x802AD4C8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802AD4CC: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x802AD4D0: sh          $t4, 0x54($a3)
    MEM_H(0X54, ctx->r7) = ctx->r12;
    // 0x802AD4D4: lh          $t5, 0x54($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X54);
    // 0x802AD4D8: nop

    // 0x802AD4DC: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x802AD4E0: bne         $at, $zero, L_802AD4F4
    if (ctx->r1 != 0) {
        // 0x802AD4E4: nop
    
            goto L_802AD4F4;
    }
    // 0x802AD4E4: nop

    // 0x802AD4E8: b           L_802AD4F4
    // 0x802AD4EC: sh          $t6, 0x54($a3)
    MEM_H(0X54, ctx->r7) = ctx->r14;
        goto L_802AD4F4;
    // 0x802AD4EC: sh          $t6, 0x54($a3)
    MEM_H(0X54, ctx->r7) = ctx->r14;
L_802AD4F0:
    // 0x802AD4F0: sh          $zero, 0x54($a3)
    MEM_H(0X54, ctx->r7) = 0;
L_802AD4F4:
    // 0x802AD4F4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802AD4F8: nop

    // 0x802AD4FC: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x802AD500: beq         $t7, $zero, L_802AD520
    if (ctx->r15 == 0) {
        // 0x802AD504: andi        $t3, $v0, 0x100
        ctx->r11 = ctx->r2 & 0X100;
            goto L_802AD520;
    }
    // 0x802AD504: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x802AD508: lh          $t8, 0x8($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X8);
    // 0x802AD50C: lh          $t9, 0x54($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X54);
    // 0x802AD510: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802AD514: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x802AD518: sh          $t2, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r10;
    // 0x802AD51C: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
L_802AD520:
    // 0x802AD520: beq         $t3, $zero, L_802AD540
    if (ctx->r11 == 0) {
        // 0x802AD524: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_802AD540;
    }
    // 0x802AD524: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x802AD528: lh          $t4, 0x8($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X8);
    // 0x802AD52C: lh          $t5, 0x54($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X54);
    // 0x802AD530: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802AD534: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802AD538: sh          $t6, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r14;
    // 0x802AD53C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
L_802AD540:
    // 0x802AD540: beq         $t7, $zero, L_802AD560
    if (ctx->r15 == 0) {
        // 0x802AD544: andi        $t3, $v0, 0x400
        ctx->r11 = ctx->r2 & 0X400;
            goto L_802AD560;
    }
    // 0x802AD544: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x802AD548: lh          $t8, 0xA($a1)
    ctx->r24 = MEM_H(ctx->r5, 0XA);
    // 0x802AD54C: lh          $t9, 0x54($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X54);
    // 0x802AD550: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802AD554: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x802AD558: sh          $t2, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r10;
    // 0x802AD55C: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
L_802AD560:
    // 0x802AD560: beq         $t3, $zero, L_802AD57C
    if (ctx->r11 == 0) {
        // 0x802AD564: nop
    
            goto L_802AD57C;
    }
    // 0x802AD564: nop

    // 0x802AD568: lh          $t4, 0xA($a1)
    ctx->r12 = MEM_H(ctx->r5, 0XA);
    // 0x802AD56C: lh          $t5, 0x54($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X54);
    // 0x802AD570: nop

    // 0x802AD574: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x802AD578: sh          $t6, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r14;
L_802AD57C:
    // 0x802AD57C: b           L_802AD65C
    // 0x802AD580: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
        goto L_802AD65C;
    // 0x802AD580: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
L_802AD584:
    // 0x802AD584: lw          $t7, 0x28($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X28);
    // 0x802AD588: nop

    // 0x802AD58C: lhu         $a0, 0x6($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X6);
    // 0x802AD590: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x802AD594: jal         0x802A68D0
    // 0x802AD598: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_802A68D0(rdram, ctx);
        goto after_5;
    // 0x802AD598: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_5:
    // 0x802AD59C: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x802AD5A0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802AD5A4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AD5A8: beq         $v0, $zero, L_802AD5B8
    if (ctx->r2 == 0) {
        // 0x802AD5AC: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802AD5B8;
    }
    // 0x802AD5AC: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802AD5B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AD5B4: sh          $t8, 0x50($a3)
    MEM_H(0X50, ctx->r7) = ctx->r24;
L_802AD5B8:
    // 0x802AD5B8: lh          $t9, 0x6($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X6);
    // 0x802AD5BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD5C0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x802AD5C4: lwc1        $f9, 0x15E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X15E0);
    // 0x802AD5C8: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x802AD5CC: lwc1        $f8, 0x15E4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X15E4);
    // 0x802AD5D0: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802AD5D4: mul.d       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x802AD5D8: addiu       $t1, $t1, 0x54B8
    ctx->r9 = ADD32(ctx->r9, 0X54B8);
    // 0x802AD5DC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802AD5E0: nop

    // 0x802AD5E4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802AD5E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AD5EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AD5F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD5F4: cvt.w.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_D(ctx->f16.d);
    // 0x802AD5F8: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x802AD5FC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802AD600: sh          $t3, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r11;
    // 0x802AD604: lh          $t4, 0x8($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X8);
    // 0x802AD608: lwc1        $f18, 0x15EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X15EC);
    // 0x802AD60C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x802AD610: lwc1        $f19, 0x15E8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X15E8);
    // 0x802AD614: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x802AD618: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD61C: lwc1        $f17, 0x15F0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X15F0);
    // 0x802AD620: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x802AD624: lwc1        $f16, 0x15F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X15F4);
    // 0x802AD628: nop

    // 0x802AD62C: add.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f8.d + ctx->f16.d;
    // 0x802AD630: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802AD634: nop

    // 0x802AD638: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802AD63C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AD640: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AD644: nop

    // 0x802AD648: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x802AD64C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x802AD650: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802AD654: sh          $t6, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r14;
    // 0x802AD658: nop

L_802AD65C:
    // 0x802AD65C: lw          $v0, 0x4($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X4);
    // 0x802AD660: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD664: beq         $v0, $zero, L_802AD670
    if (ctx->r2 == 0) {
        // 0x802AD668: nop
    
            goto L_802AD670;
    }
    // 0x802AD668: nop

    // 0x802AD66C: bne         $v0, $at, L_802ADE64
    if (ctx->r2 != ctx->r1) {
        // 0x802AD670: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802ADE64;
    }
L_802AD670:
    // 0x802AD670: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AD674: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802AD678: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802AD67C: beq         $v0, $at, L_802AE0D8
    if (ctx->r2 == ctx->r1) {
        // 0x802AD680: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802AE0D8;
    }
    // 0x802AD680: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802AD684: beq         $v0, $at, L_802AE0D8
    if (ctx->r2 == ctx->r1) {
        // 0x802AD688: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802AE0D8;
    }
    // 0x802AD688: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802AD68C: lhu         $t7, 0x5104($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X5104);
    // 0x802AD690: nop

    // 0x802AD694: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x802AD698: beq         $at, $zero, L_802AE0D8
    if (ctx->r1 == 0) {
        // 0x802AD69C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_802AE0D8;
    }
    // 0x802AD69C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802AD6A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD6A4: addu        $at, $at, $t7
    gpr jr_addend_802AD6B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802AD6A8: lw          $t7, 0x15F8($at)
    ctx->r15 = ADD32(ctx->r1, 0X15F8);
    // 0x802AD6AC: nop

    // 0x802AD6B0: jr          $t7
    // 0x802AD6B4: nop

    switch (jr_addend_802AD6B0 >> 2) {
        case 0: goto L_802AD6B8; break;
        case 1: goto L_802AD800; break;
        case 2: goto L_802ADDC0; break;
        case 3: goto L_802ADCB8; break;
        case 4: goto L_802AE0D8; break;
        default: switch_error(__func__, 0x802AD6B0, 0x802C15F8);
    }
    // 0x802AD6B4: nop

L_802AD6B8:
    // 0x802AD6B8: jal         0x802ACE5C
    // 0x802AD6BC: nop

    func_802ACE5C(rdram, ctx);
        goto after_6;
    // 0x802AD6BC: nop

    after_6:
    // 0x802AD6C0: jal         0x802ACFD0
    // 0x802AD6C4: nop

    func_802ACFD0(rdram, ctx);
        goto after_7;
    // 0x802AD6C4: nop

    after_7:
    // 0x802AD6C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD6CC: lwc1        $f18, 0x5100($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5100);
    // 0x802AD6D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AD6D4: nop

    // 0x802AD6D8: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x802AD6DC: nop

    // 0x802AD6E0: bc1t        L_802AD7C0
    if (c1cs) {
        // 0x802AD6E4: nop
    
            goto L_802AD7C0;
    }
    // 0x802AD6E4: nop

    // 0x802AD6E8: jal         0x80087D40
    // 0x802AD6EC: nop

    func_80087D40(rdram, ctx);
        goto after_8;
    // 0x802AD6EC: nop

    after_8:
    // 0x802AD6F0: jal         0x802A909C
    // 0x802AD6F4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_802A909C(rdram, ctx);
        goto after_9;
    // 0x802AD6F4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_9:
    // 0x802AD6F8: jal         0x80087D40
    // 0x802AD6FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80087D40(rdram, ctx);
        goto after_10;
    // 0x802AD6FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_10:
    // 0x802AD700: jal         0x802A909C
    // 0x802AD704: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_802A909C(rdram, ctx);
        goto after_11;
    // 0x802AD704: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_11:
    // 0x802AD708: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AD70C: lh          $v1, 0x50BA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X50BA);
    // 0x802AD710: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x802AD714: addiu       $t2, $zero, 0xAC
    ctx->r10 = ADD32(0, 0XAC);
    // 0x802AD718: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x802AD71C: subu        $t3, $t2, $t9
    ctx->r11 = SUB32(ctx->r10, ctx->r25);
    // 0x802AD720: div         $zero, $t8, $t3
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r11)));
    // 0x802AD724: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x802AD728: bne         $t3, $zero, L_802AD734
    if (ctx->r11 != 0) {
        // 0x802AD72C: nop
    
            goto L_802AD734;
    }
    // 0x802AD72C: nop

    // 0x802AD730: break       7
    do_break(2150291248);
L_802AD734:
    // 0x802AD734: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802AD738: bne         $t3, $at, L_802AD74C
    if (ctx->r11 != ctx->r1) {
        // 0x802AD73C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802AD74C;
    }
    // 0x802AD73C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AD740: bne         $t8, $at, L_802AD74C
    if (ctx->r24 != ctx->r1) {
        // 0x802AD744: nop
    
            goto L_802AD74C;
    }
    // 0x802AD744: nop

    // 0x802AD748: break       6
    do_break(2150291272);
L_802AD74C:
    // 0x802AD74C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x802AD750: addiu       $t8, $zero, 0x3B
    ctx->r24 = ADD32(0, 0X3B);
    // 0x802AD754: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x802AD758: subu        $t3, $t8, $t9
    ctx->r11 = SUB32(ctx->r24, ctx->r25);
    // 0x802AD75C: mfhi        $t4
    ctx->r12 = hi;
    // 0x802AD760: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x802AD764: addiu       $t6, $t5, -0x56
    ctx->r14 = ADD32(ctx->r13, -0X56);
    // 0x802AD768: div         $zero, $t7, $t3
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r11)));
    // 0x802AD76C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x802AD770: nop

    // 0x802AD774: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802AD778: bne         $t3, $zero, L_802AD784
    if (ctx->r11 != 0) {
        // 0x802AD77C: nop
    
            goto L_802AD784;
    }
    // 0x802AD77C: nop

    // 0x802AD780: break       7
    do_break(2150291328);
L_802AD784:
    // 0x802AD784: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802AD788: bne         $t3, $at, L_802AD79C
    if (ctx->r11 != ctx->r1) {
        // 0x802AD78C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802AD79C;
    }
    // 0x802AD78C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AD790: bne         $t7, $at, L_802AD79C
    if (ctx->r15 != ctx->r1) {
        // 0x802AD794: nop
    
            goto L_802AD79C;
    }
    // 0x802AD794: nop

    // 0x802AD798: break       6
    do_break(2150291352);
L_802AD79C:
    // 0x802AD79C: mfhi        $t4
    ctx->r12 = hi;
    // 0x802AD7A0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x802AD7A4: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x802AD7A8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x802AD7AC: jal         0x802ACE40
    // 0x802AD7B0: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    func_802ACE40(rdram, ctx);
        goto after_12;
    // 0x802AD7B0: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_12:
    // 0x802AD7B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AD7B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD7BC: swc1        $f4, 0x5100($at)
    MEM_W(0X5100, ctx->r1) = ctx->f4.u32l;
L_802AD7C0:
    // 0x802AD7C0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AD7C4: lw          $v1, 0x55C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55C0);
    // 0x802AD7C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AD7CC: beq         $v1, $at, L_802AD7DC
    if (ctx->r3 == ctx->r1) {
        // 0x802AD7D0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_802AD7DC;
    }
    // 0x802AD7D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802AD7D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AD7D8: bne         $v1, $at, L_802AE0D8
    if (ctx->r3 != ctx->r1) {
        // 0x802AD7DC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802AE0D8;
    }
L_802AD7DC:
    // 0x802AD7DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD7E0: sh          $t2, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r10;
    // 0x802AD7E4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x802AD7E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802AD7EC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802AD7F0: jal         0x802ACE40
    // 0x802AD7F4: nop

    func_802ACE40(rdram, ctx);
        goto after_13;
    // 0x802AD7F4: nop

    after_13:
    // 0x802AD7F8: b           L_802AE0DC
    // 0x802AD7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AE0DC;
    // 0x802AD7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AD800:
    // 0x802AD800: jal         0x802ACE5C
    // 0x802AD804: nop

    func_802ACE5C(rdram, ctx);
        goto after_14;
    // 0x802AD804: nop

    after_14:
    // 0x802AD808: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AD80C: lw          $t8, 0x567C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X567C);
    // 0x802AD810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AD814: bne         $t8, $at, L_802ADCA8
    if (ctx->r24 != ctx->r1) {
        // 0x802AD818: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802ADCA8;
    }
    // 0x802AD818: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AD81C: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802AD820: lh          $t9, 0x26($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X26);
    // 0x802AD824: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x802AD828: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x802AD82C: sh          $t7, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r15;
    // 0x802AD830: lh          $t3, 0x26($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X26);
    // 0x802AD834: nop

    // 0x802AD838: bgtz        $t3, L_802AE0DC
    if (SIGNED(ctx->r11) > 0) {
        // 0x802AD83C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802AD83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AD840: jal         0x80087D40
    // 0x802AD844: sh          $t4, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r12;
    func_80087D40(rdram, ctx);
        goto after_15;
    // 0x802AD844: sh          $t4, 0x24($v0)
    MEM_H(0X24, ctx->r2) = ctx->r12;
    after_15:
    // 0x802AD848: addiu       $at, $zero, 0x7D0
    ctx->r1 = ADD32(0, 0X7D0);
    // 0x802AD84C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802AD850: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD854: lwc1        $f18, 0x5108($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5108);
    // 0x802AD858: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD85C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802AD860: div.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802AD864: lhu         $t6, 0xB80($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB80);
    // 0x802AD868: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802AD86C: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x802AD870: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x802AD874: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AD878: sll         $t2, $t2, 6
    ctx->r10 = S32(ctx->r10 << 6);
    // 0x802AD87C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x802AD880: nop

    // 0x802AD884: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802AD888: mfhi        $t5
    ctx->r13 = hi;
    // 0x802AD88C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x802AD890: nop

    // 0x802AD894: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AD898: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802AD89C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802AD8A0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802AD8A4: nop

    // 0x802AD8A8: bc1f        L_802AD8D8
    if (!c1cs) {
        // 0x802AD8AC: nop
    
            goto L_802AD8D8;
    }
    // 0x802AD8AC: nop

    // 0x802AD8B0: jal         0x802AD050
    // 0x802AD8B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_802AD050(rdram, ctx);
        goto after_16;
    // 0x802AD8B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_16:
    // 0x802AD8B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802AD8BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD8C0: lwc1        $f8, 0x511C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X511C);
    // 0x802AD8C4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802AD8C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD8CC: lwc1        $f14, 0x5120($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5120);
    // 0x802AD8D0: b           L_802ADB10
    // 0x802AD8D4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
        goto L_802ADB10;
    // 0x802AD8D4: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
L_802AD8D8:
    // 0x802AD8D8: jal         0x80087D40
    // 0x802AD8DC: nop

    func_80087D40(rdram, ctx);
        goto after_17;
    // 0x802AD8DC: nop

    after_17:
    // 0x802AD8E0: addiu       $at, $zero, 0x7D0
    ctx->r1 = ADD32(0, 0X7D0);
    // 0x802AD8E4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802AD8E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD8EC: lwc1        $f16, 0x5108($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5108);
    // 0x802AD8F0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD8F4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802AD8F8: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802AD8FC: lhu         $t9, 0xB80($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB80);
    // 0x802AD900: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802AD904: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x802AD908: subu        $t7, $t7, $t9
    ctx->r15 = SUB32(ctx->r15, ctx->r25);
    // 0x802AD90C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802AD910: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x802AD914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AD918: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802AD91C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x802AD920: nop

    // 0x802AD924: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AD928: mfhi        $t8
    ctx->r24 = hi;
    // 0x802AD92C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x802AD930: nop

    // 0x802AD934: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AD938: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x802AD93C: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802AD940: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x802AD944: nop

    // 0x802AD948: bc1f        L_802AD99C
    if (!c1cs) {
        // 0x802AD94C: nop
    
            goto L_802AD99C;
    }
    // 0x802AD94C: nop

    // 0x802AD950: jal         0x802AD050
    // 0x802AD954: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_802AD050(rdram, ctx);
        goto after_18;
    // 0x802AD954: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_18:
    // 0x802AD958: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802AD95C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AD960: lw          $t3, 0x50D4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X50D4);
    // 0x802AD964: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802AD968: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x802AD96C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802AD970: add.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x802AD974: jal         0x802AD050
    // 0x802AD978: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_802AD050(rdram, ctx);
        goto after_19;
    // 0x802AD978: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_19:
    // 0x802AD97C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AD980: lw          $t4, 0x50D4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X50D4);
    // 0x802AD984: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802AD988: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x802AD98C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AD990: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802AD994: b           L_802ADB10
    // 0x802AD998: add.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f18.fl;
        goto L_802ADB10;
    // 0x802AD998: add.s       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f18.fl;
L_802AD99C:
    // 0x802AD99C: jal         0x80087D40
    // 0x802AD9A0: nop

    func_80087D40(rdram, ctx);
        goto after_20;
    // 0x802AD9A0: nop

    after_20:
    // 0x802AD9A4: addiu       $at, $zero, 0x7D0
    ctx->r1 = ADD32(0, 0X7D0);
    // 0x802AD9A8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802AD9AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD9B0: lwc1        $f4, 0x5108($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5108);
    // 0x802AD9B4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802AD9B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802AD9BC: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AD9C0: lhu         $t6, 0xB80($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB80);
    // 0x802AD9C4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AD9C8: negu        $t2, $t6
    ctx->r10 = SUB32(0, ctx->r14);
    // 0x802AD9CC: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x802AD9D0: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x802AD9D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802AD9D8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AD9DC: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x802AD9E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802AD9E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AD9E8: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x802AD9EC: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x802AD9F0: lwc1        $f7, 0x1610($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1610);
    // 0x802AD9F4: lwc1        $f6, 0x1614($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1614);
    // 0x802AD9F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802AD9FC: addiu       $t9, $t8, 0x4B0
    ctx->r25 = ADD32(ctx->r24, 0X4B0);
    // 0x802ADA00: mfhi        $t5
    ctx->r13 = hi;
    // 0x802ADA04: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802ADA08: nop

    // 0x802ADA0C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x802ADA10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ADA14: nop

    // 0x802ADA18: sub.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d - ctx->f18.d;
    // 0x802ADA1C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802ADA20: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802ADA24: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x802ADA28: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x802ADA2C: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802ADA30: nop

    // 0x802ADA34: bc1f        L_802ADAE8
    if (!c1cs) {
        // 0x802ADA38: nop
    
            goto L_802ADAE8;
    }
    // 0x802ADA38: nop

    // 0x802ADA3C: jal         0x802AD050
    // 0x802ADA40: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_802AD050(rdram, ctx);
        goto after_21;
    // 0x802ADA40: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_21:
    // 0x802ADA44: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802ADA48: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802ADA4C: lw          $t7, 0x50D4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X50D4);
    // 0x802ADA50: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802ADA54: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x802ADA58: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802ADA5C: sub.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x802ADA60: jal         0x802AD050
    // 0x802ADA64: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_802AD050(rdram, ctx);
        goto after_22;
    // 0x802ADA64: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_22:
    // 0x802ADA68: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802ADA6C: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x802ADA70: lw          $t3, 0x50D4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X50D4);
    // 0x802ADA74: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802ADA78: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802ADA7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802ADA80: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802ADA84: lwc1        $f4, 0x10($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X10);
    // 0x802ADA88: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802ADA8C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x802ADA90: sub.s       $f14, $f16, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802ADA94: bc1f        L_802ADB10
    if (!c1cs) {
        // 0x802ADA98: nop
    
            goto L_802ADB10;
    }
    // 0x802ADA98: nop

    // 0x802ADA9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802ADAA0: nop

    // 0x802ADAA4: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x802ADAA8: nop

    // 0x802ADAAC: bc1f        L_802ADB10
    if (!c1cs) {
        // 0x802ADAB0: nop
    
            goto L_802ADB10;
    }
    // 0x802ADAB0: nop

    // 0x802ADAB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802ADAB8: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x802ADABC: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x802ADAC0: nop

    // 0x802ADAC4: bc1f        L_802ADADC
    if (!c1cs) {
        // 0x802ADAC8: nop
    
            goto L_802ADADC;
    }
    // 0x802ADAC8: nop

    // 0x802ADACC: lui         $at, 0xC204
    ctx->r1 = S32(0XC204 << 16);
    // 0x802ADAD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802ADAD4: b           L_802ADB10
    // 0x802ADAD8: nop

        goto L_802ADB10;
    // 0x802ADAD8: nop

L_802ADADC:
    // 0x802ADADC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802ADAE0: b           L_802ADB10
    // 0x802ADAE4: nop

        goto L_802ADB10;
    // 0x802ADAE4: nop

L_802ADAE8:
    // 0x802ADAE8: jal         0x802AD050
    // 0x802ADAEC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_802AD050(rdram, ctx);
        goto after_23;
    // 0x802ADAEC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_23:
    // 0x802ADAF0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x802ADAF4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802ADAF8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802ADAFC: jal         0x802AD050
    // 0x802ADB00: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    func_802AD050(rdram, ctx);
        goto after_24;
    // 0x802ADB00: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    after_24:
    // 0x802ADB04: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x802ADB08: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802ADB0C: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
L_802ADB10:
    // 0x802ADB10: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802ADB14: lh          $v1, 0x50BA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X50BA);
    // 0x802ADB18: addiu       $t5, $zero, 0x56
    ctx->r13 = ADD32(0, 0X56);
    // 0x802ADB1C: addiu       $t4, $v1, -0x56
    ctx->r12 = ADD32(ctx->r3, -0X56);
    // 0x802ADB20: subu        $t6, $t5, $v1
    ctx->r14 = SUB32(ctx->r13, ctx->r3);
    // 0x802ADB24: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802ADB28: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x802ADB2C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802ADB30: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x802ADB34: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x802ADB38: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802ADB3C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x802ADB40: jal         0x802A909C
    // 0x802ADB44: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_802A909C(rdram, ctx);
        goto after_25;
    // 0x802ADB44: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_25:
    // 0x802ADB48: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x802ADB4C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x802ADB50: nop

    // 0x802ADB54: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802ADB58: jal         0x802A909C
    // 0x802ADB5C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_802A909C(rdram, ctx);
        goto after_26;
    // 0x802ADB5C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_26:
    // 0x802ADB60: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802ADB64: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802ADB68: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802ADB6C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802ADB70: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802ADB74: bc1f        L_802ADB80
    if (!c1cs) {
        // 0x802ADB78: addiu       $t8, $zero, 0x3D
        ctx->r24 = ADD32(0, 0X3D);
            goto L_802ADB80;
    }
    // 0x802ADB78: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x802ADB7C: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_802ADB80:
    // 0x802ADB80: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802ADB84: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x802ADB88: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802ADB8C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x802ADB90: bc1f        L_802ADB9C
    if (!c1cs) {
        // 0x802ADB94: nop
    
            goto L_802ADB9C;
    }
    // 0x802ADB94: nop

    // 0x802ADB98: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_802ADB9C:
    // 0x802ADB9C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802ADBA0: nop

    // 0x802ADBA4: bc1f        L_802ADBB0
    if (!c1cs) {
        // 0x802ADBA8: nop
    
            goto L_802ADBB0;
    }
    // 0x802ADBA8: nop

    // 0x802ADBAC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802ADBB0:
    // 0x802ADBB0: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802ADBB4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802ADBB8: nop

    // 0x802ADBBC: bc1f        L_802ADBC8
    if (!c1cs) {
        // 0x802ADBC0: nop
    
            goto L_802ADBC8;
    }
    // 0x802ADBC0: nop

    // 0x802ADBC4: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_802ADBC8:
    // 0x802ADBC8: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x802ADBCC: jal         0x802ACE40
    // 0x802ADBD0: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    func_802ACE40(rdram, ctx);
        goto after_27;
    // 0x802ADBD0: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    after_27:
    // 0x802ADBD4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802ADBD8: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802ADBDC: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802ADBE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADBE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADBE8: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802ADBEC: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802ADBF0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802ADBF4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802ADBF8: nop

    // 0x802ADBFC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802ADC00: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x802ADC04: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802ADC08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADC0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADC10: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802ADC14: cvt.w.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    ctx->f6.u32l = CVT_W_S(ctx->f14.fl);
    // 0x802ADC18: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802ADC1C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802ADC20: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802ADC24: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x802ADC28: sra         $t5, $a1, 16
    ctx->r13 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802ADC2C: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x802ADC30: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802ADC34: jal         0x802ACEE0
    // 0x802ADC38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_802ACEE0(rdram, ctx);
        goto after_28;
    // 0x802ADC38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_28:
    // 0x802ADC3C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802ADC40: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802ADC44: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802ADC48: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802ADC4C: beq         $v0, $zero, L_802ADCA0
    if (ctx->r2 == 0) {
        // 0x802ADC50: ori         $t6, $zero, 0x8000
        ctx->r14 = 0 | 0X8000;
            goto L_802ADCA0;
    }
    // 0x802ADC50: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x802ADC54: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x802ADC58: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ADC5C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802ADC60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADC64: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x802ADC68: addiu       $v0, $v0, 0x50A8
    ctx->r2 = ADD32(ctx->r2, 0X50A8);
    // 0x802ADC6C: sh          $t8, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r24;
    // 0x802ADC70: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802ADC74: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802ADC78: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x802ADC7C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802ADC80: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802ADC84: swc1        $f14, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f14.u32l;
    // 0x802ADC88: lw          $t3, 0x5504($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5504);
    // 0x802ADC8C: nop

    // 0x802ADC90: sh          $v1, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r3;
    // 0x802ADC94: lw          $t4, 0x5504($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5504);
    // 0x802ADC98: b           L_802AE0D8
    // 0x802ADC9C: sh          $a2, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r6;
        goto L_802AE0D8;
    // 0x802ADC9C: sh          $a2, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r6;
L_802ADCA0:
    // 0x802ADCA0: jal         0x802ABF98
    // 0x802ADCA4: nop

    func_802ABF98(rdram, ctx);
        goto after_29;
    // 0x802ADCA4: nop

    after_29:
L_802ADCA8:
    // 0x802ADCA8: jal         0x802ACFD0
    // 0x802ADCAC: nop

    func_802ACFD0(rdram, ctx);
        goto after_30;
    // 0x802ADCAC: nop

    after_30:
    // 0x802ADCB0: b           L_802AE0DC
    // 0x802ADCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802AE0DC;
    // 0x802ADCB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802ADCB8:
    // 0x802ADCB8: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802ADCBC: lw          $t5, 0x567C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X567C);
    // 0x802ADCC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802ADCC4: bne         $t5, $at, L_802AE0DC
    if (ctx->r13 != ctx->r1) {
        // 0x802ADCC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802ADCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ADCCC: jal         0x802ACE5C
    // 0x802ADCD0: nop

    func_802ACE5C(rdram, ctx);
        goto after_31;
    // 0x802ADCD0: nop

    after_31:
    // 0x802ADCD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADCD8: lwc1        $f18, 0x5100($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5100);
    // 0x802ADCDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ADCE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ADCE4: c.eq.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl == ctx->f18.fl;
    // 0x802ADCE8: nop

    // 0x802ADCEC: bc1t        L_802AE0DC
    if (c1cs) {
        // 0x802ADCF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802ADCF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ADCF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802ADCF8: lw          $v0, 0x50D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D4);
    // 0x802ADCFC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802ADD00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADD04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADD08: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802ADD0C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802ADD10: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802ADD14: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802ADD18: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x802ADD1C: nop

    // 0x802ADD20: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802ADD24: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x802ADD28: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802ADD2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADD30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADD34: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802ADD38: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802ADD3C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802ADD40: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802ADD44: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x802ADD48: jal         0x802A90BC
    // 0x802ADD4C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_802A90BC(rdram, ctx);
        goto after_32;
    // 0x802ADD4C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_32:
    // 0x802ADD50: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x802ADD54: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802ADD58: beq         $t5, $zero, L_802ADD7C
    if (ctx->r13 == 0) {
        // 0x802ADD5C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802ADD7C;
    }
    // 0x802ADD5C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ADD60: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x802ADD64: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x802ADD68: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802ADD6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADD70: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x802ADD74: b           L_802AE0D8
    // 0x802ADD78: sh          $t8, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r24;
        goto L_802AE0D8;
    // 0x802ADD78: sh          $t8, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r24;
L_802ADD7C:
    // 0x802ADD7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802ADD80: addiu       $v0, $v0, 0x50E0
    ctx->r2 = ADD32(ctx->r2, 0X50E0);
    // 0x802ADD84: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x802ADD88: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802ADD8C: jal         0x802ABF40
    // 0x802ADD90: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    func_802ABF40(rdram, ctx);
        goto after_33;
    // 0x802ADD90: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_33:
    // 0x802ADD94: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ADD98: lw          $v0, 0x50D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D4);
    // 0x802ADD9C: nop

    // 0x802ADDA0: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802ADDA4: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802ADDA8: jal         0x802ACE40
    // 0x802ADDAC: nop

    func_802ACE40(rdram, ctx);
        goto after_34;
    // 0x802ADDAC: nop

    after_34:
    // 0x802ADDB0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802ADDB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADDB8: b           L_802AE0D8
    // 0x802ADDBC: sh          $t9, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r25;
        goto L_802AE0D8;
    // 0x802ADDBC: sh          $t9, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r25;
L_802ADDC0:
    // 0x802ADDC0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802ADDC4: lw          $t7, 0x567C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X567C);
    // 0x802ADDC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802ADDCC: bne         $t7, $at, L_802AE0DC
    if (ctx->r15 != ctx->r1) {
        // 0x802ADDD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802ADDD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ADDD4: jal         0x802ACE5C
    // 0x802ADDD8: nop

    func_802ACE5C(rdram, ctx);
        goto after_35;
    // 0x802ADDD8: nop

    after_35:
    // 0x802ADDDC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802ADDE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802ADDE4: lw          $v0, 0x50D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D4);
    // 0x802ADDE8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802ADDEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADDF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADDF4: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802ADDF8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802ADDFC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802ADE00: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802ADE04: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x802ADE08: nop

    // 0x802ADE0C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802ADE10: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x802ADE14: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802ADE18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802ADE1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802ADE20: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802ADE24: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802ADE28: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x802ADE2C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802ADE30: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x802ADE34: jal         0x802A90BC
    // 0x802ADE38: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    func_802A90BC(rdram, ctx);
        goto after_36;
    // 0x802ADE38: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    after_36:
    // 0x802ADE3C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802ADE40: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802ADE44: beq         $t7, $zero, L_802AE0D8
    if (ctx->r15 == 0) {
        // 0x802ADE48: ori         $t3, $zero, 0x8000
        ctx->r11 = 0 | 0X8000;
            goto L_802AE0D8;
    }
    // 0x802ADE48: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x802ADE4C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x802ADE50: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802ADE54: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADE58: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x802ADE5C: b           L_802AE0D8
    // 0x802ADE60: sh          $t5, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r13;
        goto L_802AE0D8;
    // 0x802ADE60: sh          $t5, 0x5104($at)
    MEM_H(0X5104, ctx->r1) = ctx->r13;
L_802ADE64:
    // 0x802ADE64: lw          $t6, 0x48($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X48);
    // 0x802ADE68: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x802ADE6C: lhu         $t2, 0x4($t6)
    ctx->r10 = MEM_HU(ctx->r14, 0X4);
    // 0x802ADE70: nop

    // 0x802ADE74: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x802ADE78: lw          $t9, 0x48($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X48);
    // 0x802ADE7C: nop

    // 0x802ADE80: lhu         $t7, 0x6($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X6);
    // 0x802ADE84: nop

    // 0x802ADE88: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x802ADE8C: lh          $t3, 0x52($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X52);
    // 0x802ADE90: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x802ADE94: beq         $t3, $zero, L_802ADFB8
    if (ctx->r11 == 0) {
        // 0x802ADE98: nop
    
            goto L_802ADFB8;
    }
    // 0x802ADE98: nop

    // 0x802ADE9C: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x802ADEA0: lh          $t6, 0x8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X8);
    // 0x802ADEA4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802ADEA8: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x802ADEAC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802ADEB0: jal         0x802A6890
    // 0x802ADEB4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    func_802A6890(rdram, ctx);
        goto after_37;
    // 0x802ADEB4: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_37:
    // 0x802ADEB8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802ADEBC: beq         $v0, $zero, L_802ADEC8
    if (ctx->r2 == 0) {
        // 0x802ADEC0: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802ADEC8;
    }
    // 0x802ADEC0: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802ADEC4: sh          $zero, 0x52($a3)
    MEM_H(0X52, ctx->r7) = 0;
L_802ADEC8:
    // 0x802ADEC8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x802ADECC: nop

    // 0x802ADED0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802ADED4: nop

    // 0x802ADED8: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x802ADEDC: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x802ADEE0: or          $t7, $t2, $t9
    ctx->r15 = ctx->r10 | ctx->r25;
    // 0x802ADEE4: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x802ADEE8: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x802ADEEC: andi        $t5, $v0, 0x400
    ctx->r13 = ctx->r2 & 0X400;
    // 0x802ADEF0: or          $t4, $t3, $t5
    ctx->r12 = ctx->r11 | ctx->r13;
    // 0x802ADEF4: beq         $t4, $zero, L_802ADF28
    if (ctx->r12 == 0) {
        // 0x802ADEF8: nop
    
            goto L_802ADF28;
    }
    // 0x802ADEF8: nop

    // 0x802ADEFC: lh          $t6, 0x56($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X56);
    // 0x802ADF00: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802ADF04: addiu       $t2, $t6, 0x3
    ctx->r10 = ADD32(ctx->r14, 0X3);
    // 0x802ADF08: sh          $t2, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r10;
    // 0x802ADF0C: lh          $t9, 0x56($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X56);
    // 0x802ADF10: nop

    // 0x802ADF14: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x802ADF18: bne         $at, $zero, L_802ADF2C
    if (ctx->r1 != 0) {
        // 0x802ADF1C: nop
    
            goto L_802ADF2C;
    }
    // 0x802ADF1C: nop

    // 0x802ADF20: b           L_802ADF2C
    // 0x802ADF24: sh          $t7, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r15;
        goto L_802ADF2C;
    // 0x802ADF24: sh          $t7, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r15;
L_802ADF28:
    // 0x802ADF28: sh          $zero, 0x56($a3)
    MEM_H(0X56, ctx->r7) = 0;
L_802ADF2C:
    // 0x802ADF2C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802ADF30: nop

    // 0x802ADF34: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x802ADF38: beq         $t8, $zero, L_802ADF58
    if (ctx->r24 == 0) {
        // 0x802ADF3C: andi        $t6, $v0, 0x100
        ctx->r14 = ctx->r2 & 0X100;
            goto L_802ADF58;
    }
    // 0x802ADF3C: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x802ADF40: lh          $t3, 0x8($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8);
    // 0x802ADF44: lh          $t5, 0x56($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X56);
    // 0x802ADF48: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802ADF4C: subu        $t4, $t3, $t5
    ctx->r12 = SUB32(ctx->r11, ctx->r13);
    // 0x802ADF50: sh          $t4, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r12;
    // 0x802ADF54: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
L_802ADF58:
    // 0x802ADF58: beq         $t6, $zero, L_802ADF78
    if (ctx->r14 == 0) {
        // 0x802ADF5C: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_802ADF78;
    }
    // 0x802ADF5C: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x802ADF60: lh          $t2, 0x8($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X8);
    // 0x802ADF64: lh          $t9, 0x56($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X56);
    // 0x802ADF68: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802ADF6C: addu        $t7, $t2, $t9
    ctx->r15 = ADD32(ctx->r10, ctx->r25);
    // 0x802ADF70: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
    // 0x802ADF74: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
L_802ADF78:
    // 0x802ADF78: beq         $t8, $zero, L_802ADF98
    if (ctx->r24 == 0) {
        // 0x802ADF7C: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_802ADF98;
    }
    // 0x802ADF7C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x802ADF80: lh          $t3, 0xA($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XA);
    // 0x802ADF84: lh          $t5, 0x56($a3)
    ctx->r13 = MEM_H(ctx->r7, 0X56);
    // 0x802ADF88: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802ADF8C: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x802ADF90: sh          $t4, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r12;
    // 0x802ADF94: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_802ADF98:
    // 0x802ADF98: beq         $t6, $zero, L_802AE0DC
    if (ctx->r14 == 0) {
        // 0x802ADF9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802AE0DC;
    }
    // 0x802ADF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802ADFA0: lh          $t2, 0xA($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XA);
    // 0x802ADFA4: lh          $t9, 0x56($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X56);
    // 0x802ADFA8: nop

    // 0x802ADFAC: subu        $t7, $t2, $t9
    ctx->r15 = SUB32(ctx->r10, ctx->r25);
    // 0x802ADFB0: b           L_802AE0D8
    // 0x802ADFB4: sh          $t7, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r15;
        goto L_802AE0D8;
    // 0x802ADFB4: sh          $t7, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r15;
L_802ADFB8:
    // 0x802ADFB8: lw          $t8, 0x48($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X48);
    // 0x802ADFBC: nop

    // 0x802ADFC0: lhu         $a0, 0x6($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X6);
    // 0x802ADFC4: jal         0x802A68D0
    // 0x802ADFC8: nop

    func_802A68D0(rdram, ctx);
        goto after_38;
    // 0x802ADFC8: nop

    after_38:
    // 0x802ADFCC: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802ADFD0: beq         $v0, $zero, L_802ADFE0
    if (ctx->r2 == 0) {
        // 0x802ADFD4: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802ADFE0;
    }
    // 0x802ADFD4: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802ADFD8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802ADFDC: sh          $t3, 0x52($a3)
    MEM_H(0X52, ctx->r7) = ctx->r11;
L_802ADFE0:
    // 0x802ADFE0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x802ADFE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802ADFE8: lh          $t4, 0x6($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X6);
    // 0x802ADFEC: lwc1        $f5, 0x1618($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1618);
    // 0x802ADFF0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x802ADFF4: lwc1        $f4, 0x161C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X161C);
    // 0x802ADFF8: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x802ADFFC: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x802AE000: mul.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x802AE004: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802AE008: nop

    // 0x802AE00C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802AE010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AE014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AE018: nop

    // 0x802AE01C: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x802AE020: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x802AE024: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802AE028: jal         0x802A909C
    // 0x802AE02C: sh          $t2, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r10;
    func_802A909C(rdram, ctx);
        goto after_39;
    // 0x802AE02C: sh          $t2, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r10;
    after_39:
    // 0x802AE030: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x802AE034: addiu       $t8, $zero, 0x3B
    ctx->r24 = ADD32(0, 0X3B);
    // 0x802AE038: subu        $t3, $t8, $t7
    ctx->r11 = SUB32(ctx->r24, ctx->r15);
    // 0x802AE03C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x802AE040: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x802AE044: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802AE048: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE04C: lui         $at, 0x400C
    ctx->r1 = S32(0X400C << 16);
    // 0x802AE050: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802AE054: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AE058: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AE05C: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x802AE060: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE064: lh          $t4, 0x8($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X8);
    // 0x802AE068: lwc1        $f5, 0x1620($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1620);
    // 0x802AE06C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x802AE070: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802AE074: nop

    // 0x802AE078: div.d       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802AE07C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x802AE080: lwc1        $f4, 0x1624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1624);
    // 0x802AE084: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AE088: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x802AE08C: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x802AE090: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802AE094: add.d       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f16.d + ctx->f4.d;
    // 0x802AE098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AE09C: mul.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x802AE0A0: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802AE0A4: nop

    // 0x802AE0A8: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x802AE0AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802AE0B0: nop

    // 0x802AE0B4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802AE0B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AE0BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AE0C0: nop

    // 0x802AE0C4: cvt.w.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_D(ctx->f4.d);
    // 0x802AE0C8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x802AE0CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802AE0D0: sh          $t2, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r10;
    // 0x802AE0D4: nop

L_802AE0D8:
    // 0x802AE0D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802AE0DC:
    // 0x802AE0DC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x802AE0E0: jr          $ra
    // 0x802AE0E4: nop

    return;
    // 0x802AE0E4: nop

;}
RECOMP_FUNC void func_802AE0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE0E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AE0EC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AE0F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AE0F4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x802AE0F8: sub.d       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f4.d - ctx->f6.d;
    // 0x802AE0FC: add.d       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f0.d + ctx->f0.d;
    // 0x802AE100: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x802AE104: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AE108: neg.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = -ctx->f14.fl;
    // 0x802AE10C: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802AE110: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x802AE114: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802AE118: add.s       $f2, $f4, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802AE11C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802AE120: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802AE124: nop

    // 0x802AE128: bc1f        L_802AE138
    if (!c1cs) {
        // 0x802AE12C: nop
    
            goto L_802AE138;
    }
    // 0x802AE12C: nop

    // 0x802AE130: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AE134: nop

L_802AE138:
    // 0x802AE138: jr          $ra
    // 0x802AE13C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x802AE13C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_802AE140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE140: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AE144: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AE148: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x802AE14C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802AE150: bne         $t6, $zero, L_802AE15C
    if (ctx->r14 != 0) {
        // 0x802AE154: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_802AE15C;
    }
    // 0x802AE154: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x802AE158: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_802AE15C:
    // 0x802AE15C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x802AE160: nop

    // 0x802AE164: bc1f        L_802AE1BC
    if (!c1cs) {
        // 0x802AE168: nop
    
            goto L_802AE1BC;
    }
    // 0x802AE168: nop

    // 0x802AE16C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE170: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802AE174: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x802AE178: nop

    // 0x802AE17C: bc1f        L_802AE1BC
    if (!c1cs) {
        // 0x802AE180: nop
    
            goto L_802AE1BC;
    }
    // 0x802AE180: nop

    // 0x802AE184: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802AE188: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802AE18C: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x802AE190: nop

    // 0x802AE194: bc1f        L_802AE1BC
    if (!c1cs) {
        // 0x802AE198: nop
    
            goto L_802AE1BC;
    }
    // 0x802AE198: nop

    // 0x802AE19C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE1A0: nop

    // 0x802AE1A4: c.le.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl <= ctx->f16.fl;
    // 0x802AE1A8: nop

    // 0x802AE1AC: bc1f        L_802AE1C0
    if (!c1cs) {
        // 0x802AE1B0: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802AE1C0;
    }
    // 0x802AE1B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802AE1B4: jr          $ra
    // 0x802AE1B8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x802AE1B8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802AE1BC:
    // 0x802AE1BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_802AE1C0:
    // 0x802AE1C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802AE1C4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x802AE1C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE1CC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x802AE1D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE1D4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802AE1D8: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x802AE1DC: nop

    // 0x802AE1E0: bc1f        L_802AE228
    if (!c1cs) {
        // 0x802AE1E4: nop
    
            goto L_802AE228;
    }
    // 0x802AE1E4: nop

    // 0x802AE1E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE1EC: nop

    // 0x802AE1F0: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x802AE1F4: nop

    // 0x802AE1F8: bc1f        L_802AE22C
    if (!c1cs) {
        // 0x802AE1FC: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_802AE22C;
    }
    // 0x802AE1FC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x802AE200: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x802AE204: nop

    // 0x802AE208: bc1f        L_802AE22C
    if (!c1cs) {
        // 0x802AE20C: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_802AE22C;
    }
    // 0x802AE20C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x802AE210: c.le.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl <= ctx->f16.fl;
    // 0x802AE214: nop

    // 0x802AE218: bc1f        L_802AE22C
    if (!c1cs) {
        // 0x802AE21C: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_802AE22C;
    }
    // 0x802AE21C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x802AE220: jr          $ra
    // 0x802AE224: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x802AE224: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802AE228:
    // 0x802AE228: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_802AE22C:
    // 0x802AE22C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE230: nop

    // 0x802AE234: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x802AE238: nop

    // 0x802AE23C: bc1f        L_802AE27C
    if (!c1cs) {
        // 0x802AE240: nop
    
            goto L_802AE27C;
    }
    // 0x802AE240: nop

    // 0x802AE244: c.le.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl <= ctx->f18.fl;
    // 0x802AE248: nop

    // 0x802AE24C: bc1f        L_802AE27C
    if (!c1cs) {
        // 0x802AE250: nop
    
            goto L_802AE27C;
    }
    // 0x802AE250: nop

    // 0x802AE254: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x802AE258: nop

    // 0x802AE25C: bc1f        L_802AE27C
    if (!c1cs) {
        // 0x802AE260: nop
    
            goto L_802AE27C;
    }
    // 0x802AE260: nop

    // 0x802AE264: c.le.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl <= ctx->f16.fl;
    // 0x802AE268: nop

    // 0x802AE26C: bc1f        L_802AE27C
    if (!c1cs) {
        // 0x802AE270: nop
    
            goto L_802AE27C;
    }
    // 0x802AE270: nop

    // 0x802AE274: jr          $ra
    // 0x802AE278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802AE278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AE27C:
    // 0x802AE27C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x802AE280: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x802AE284: bc1f        L_802AE2D4
    if (!c1cs) {
        // 0x802AE288: nop
    
            goto L_802AE2D4;
    }
    // 0x802AE288: nop

    // 0x802AE28C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AE290: nop

    // 0x802AE294: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x802AE298: nop

    // 0x802AE29C: bc1f        L_802AE2D8
    if (!c1cs) {
        // 0x802AE2A0: lui         $at, 0xC120
        ctx->r1 = S32(0XC120 << 16);
            goto L_802AE2D8;
    }
    // 0x802AE2A0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802AE2A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AE2A8: nop

    // 0x802AE2AC: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802AE2B0: nop

    // 0x802AE2B4: bc1f        L_802AE2D8
    if (!c1cs) {
        // 0x802AE2B8: lui         $at, 0xC120
        ctx->r1 = S32(0XC120 << 16);
            goto L_802AE2D8;
    }
    // 0x802AE2B8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802AE2BC: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802AE2C0: nop

    // 0x802AE2C4: bc1f        L_802AE2D8
    if (!c1cs) {
        // 0x802AE2C8: lui         $at, 0xC120
        ctx->r1 = S32(0XC120 << 16);
            goto L_802AE2D8;
    }
    // 0x802AE2C8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802AE2CC: jr          $ra
    // 0x802AE2D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x802AE2D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802AE2D4:
    // 0x802AE2D4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
L_802AE2D8:
    // 0x802AE2D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE2DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AE2E0: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x802AE2E4: nop

    // 0x802AE2E8: bc1f        L_802AE334
    if (!c1cs) {
        // 0x802AE2EC: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_802AE334;
    }
    // 0x802AE2EC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802AE2F0: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x802AE2F4: nop

    // 0x802AE2F8: bc1f        L_802AE334
    if (!c1cs) {
        // 0x802AE2FC: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_802AE334;
    }
    // 0x802AE2FC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802AE300: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    // 0x802AE304: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802AE308: bc1f        L_802AE330
    if (!c1cs) {
        // 0x802AE30C: nop
    
            goto L_802AE330;
    }
    // 0x802AE30C: nop

    // 0x802AE310: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802AE314: nop

    // 0x802AE318: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802AE31C: nop

    // 0x802AE320: bc1f        L_802AE334
    if (!c1cs) {
        // 0x802AE324: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_802AE334;
    }
    // 0x802AE324: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802AE328: jr          $ra
    // 0x802AE32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802AE32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802AE330:
    // 0x802AE330: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
L_802AE334:
    // 0x802AE334: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802AE338: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x802AE33C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE340: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802AE344: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x802AE348: nop

    // 0x802AE34C: bc1f        L_802AE39C
    if (!c1cs) {
        // 0x802AE350: nop
    
            goto L_802AE39C;
    }
    // 0x802AE350: nop

    // 0x802AE354: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AE358: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802AE35C: c.le.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl <= ctx->f6.fl;
    // 0x802AE360: nop

    // 0x802AE364: bc1f        L_802AE39C
    if (!c1cs) {
        // 0x802AE368: nop
    
            goto L_802AE39C;
    }
    // 0x802AE368: nop

    // 0x802AE36C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE370: nop

    // 0x802AE374: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x802AE378: nop

    // 0x802AE37C: bc1f        L_802AE39C
    if (!c1cs) {
        // 0x802AE380: nop
    
            goto L_802AE39C;
    }
    // 0x802AE380: nop

    // 0x802AE384: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802AE388: nop

    // 0x802AE38C: bc1f        L_802AE39C
    if (!c1cs) {
        // 0x802AE390: nop
    
            goto L_802AE39C;
    }
    // 0x802AE390: nop

    // 0x802AE394: jr          $ra
    // 0x802AE398: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x802AE398: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802AE39C:
    // 0x802AE39C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x802AE3A0: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x802AE3A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802AE3A8: bc1f        L_802AE3F0
    if (!c1cs) {
        // 0x802AE3AC: lui         $at, 0x4218
        ctx->r1 = S32(0X4218 << 16);
            goto L_802AE3F0;
    }
    // 0x802AE3AC: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802AE3B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802AE3B4: nop

    // 0x802AE3B8: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x802AE3BC: nop

    // 0x802AE3C0: bc1f        L_802AE3F4
    if (!c1cs) {
        // 0x802AE3C4: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_802AE3F4;
    }
    // 0x802AE3C4: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802AE3C8: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802AE3CC: nop

    // 0x802AE3D0: bc1f        L_802AE3F4
    if (!c1cs) {
        // 0x802AE3D4: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_802AE3F4;
    }
    // 0x802AE3D4: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802AE3D8: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x802AE3DC: nop

    // 0x802AE3E0: bc1f        L_802AE3F4
    if (!c1cs) {
        // 0x802AE3E4: lui         $at, 0xC218
        ctx->r1 = S32(0XC218 << 16);
            goto L_802AE3F4;
    }
    // 0x802AE3E4: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802AE3E8: jr          $ra
    // 0x802AE3EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x802AE3EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802AE3F0:
    // 0x802AE3F0: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
L_802AE3F4:
    // 0x802AE3F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AE3F8: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x802AE3FC: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x802AE400: nop

    // 0x802AE404: bc1f        L_802AE44C
    if (!c1cs) {
        // 0x802AE408: nop
    
            goto L_802AE44C;
    }
    // 0x802AE408: nop

    // 0x802AE40C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AE410: nop

    // 0x802AE414: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x802AE418: nop

    // 0x802AE41C: bc1f        L_802AE44C
    if (!c1cs) {
        // 0x802AE420: nop
    
            goto L_802AE44C;
    }
    // 0x802AE420: nop

    // 0x802AE424: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802AE428: nop

    // 0x802AE42C: bc1f        L_802AE44C
    if (!c1cs) {
        // 0x802AE430: nop
    
            goto L_802AE44C;
    }
    // 0x802AE430: nop

    // 0x802AE434: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x802AE438: nop

    // 0x802AE43C: bc1f        L_802AE44C
    if (!c1cs) {
        // 0x802AE440: nop
    
            goto L_802AE44C;
    }
    // 0x802AE440: nop

    // 0x802AE444: jr          $ra
    // 0x802AE448: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802AE448: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802AE44C:
    // 0x802AE44C: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x802AE450: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x802AE454: bc1f        L_802AE49C
    if (!c1cs) {
        // 0x802AE458: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802AE49C;
    }
    // 0x802AE458: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802AE45C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AE460: nop

    // 0x802AE464: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x802AE468: nop

    // 0x802AE46C: bc1f        L_802AE49C
    if (!c1cs) {
        // 0x802AE470: nop
    
            goto L_802AE49C;
    }
    // 0x802AE470: nop

    // 0x802AE474: c.le.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl <= ctx->f14.fl;
    // 0x802AE478: nop

    // 0x802AE47C: bc1f        L_802AE49C
    if (!c1cs) {
        // 0x802AE480: nop
    
            goto L_802AE49C;
    }
    // 0x802AE480: nop

    // 0x802AE484: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x802AE488: nop

    // 0x802AE48C: bc1f        L_802AE49C
    if (!c1cs) {
        // 0x802AE490: nop
    
            goto L_802AE49C;
    }
    // 0x802AE490: nop

    // 0x802AE494: jr          $ra
    // 0x802AE498: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x802AE498: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802AE49C:
    // 0x802AE49C: jr          $ra
    // 0x802AE4A0: nop

    return;
    // 0x802AE4A0: nop

;}
RECOMP_FUNC void func_802AE4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE4A4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802AE4A8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AE4AC: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x802AE4B0: bne         $v0, $zero, L_802AE4E0
    if (ctx->r2 != 0) {
        // 0x802AE4B4: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_802AE4E0;
    }
    // 0x802AE4B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802AE4B8: xori        $v0, $t7, 0x7
    ctx->r2 = ctx->r15 ^ 0X7;
    // 0x802AE4BC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AE4C0: bne         $v0, $zero, L_802AE4E0
    if (ctx->r2 != 0) {
        // 0x802AE4C4: nop
    
            goto L_802AE4E0;
    }
    // 0x802AE4C4: nop

    // 0x802AE4C8: xori        $v0, $t7, 0x8
    ctx->r2 = ctx->r15 ^ 0X8;
    // 0x802AE4CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802AE4D0: bne         $v0, $zero, L_802AE4E0
    if (ctx->r2 != 0) {
        // 0x802AE4D4: nop
    
            goto L_802AE4E0;
    }
    // 0x802AE4D4: nop

    // 0x802AE4D8: xori        $v0, $t7, 0x6
    ctx->r2 = ctx->r15 ^ 0X6;
    // 0x802AE4DC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_802AE4E0:
    // 0x802AE4E0: jr          $ra
    // 0x802AE4E4: nop

    return;
    // 0x802AE4E4: nop

;}
RECOMP_FUNC void func_802AE4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE4E8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AE4EC: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AE4F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AE4F4: bne         $t6, $at, L_802AE540
    if (ctx->r14 != ctx->r1) {
        // 0x802AE4F8: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_802AE540;
    }
    // 0x802AE4F8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE4FC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE500: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE504: lh          $t7, 0x70($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X70);
    // 0x802AE508: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AE50C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802AE510: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802AE514: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x802AE518: addiu       $t9, $t9, -0x1D78
    ctx->r25 = ADD32(ctx->r25, -0X1D78);
    // 0x802AE51C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x802AE520: lh          $t0, 0xA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA);
    // 0x802AE524: lwc1        $f4, 0x54($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AE528: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802AE52C: nop

    // 0x802AE530: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AE534: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802AE538: b           L_802AE57C
    // 0x802AE53C: swc1        $f10, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f10.u32l;
        goto L_802AE57C;
    // 0x802AE53C: swc1        $f10, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f10.u32l;
L_802AE540:
    // 0x802AE540: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE544: lh          $t1, 0x70($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X70);
    // 0x802AE548: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AE54C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x802AE550: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x802AE554: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x802AE558: addiu       $t3, $t3, -0x1D78
    ctx->r11 = ADD32(ctx->r11, -0X1D78);
    // 0x802AE55C: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x802AE560: lh          $t4, 0xA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XA);
    // 0x802AE564: lwc1        $f16, 0x54($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AE568: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x802AE56C: nop

    // 0x802AE570: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802AE574: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x802AE578: swc1        $f4, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f4.u32l;
L_802AE57C:
    // 0x802AE57C: lh          $t5, 0xC($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XC);
    // 0x802AE580: lwc1        $f8, 0x58($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802AE584: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802AE588: nop

    // 0x802AE58C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802AE590: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802AE594: jr          $ra
    // 0x802AE598: swc1        $f16, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f16.u32l;
    return;
    // 0x802AE598: swc1        $f16, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_802AE59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE59C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AE5A0: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AE5A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AE5A8: bne         $t6, $at, L_802AE5F4
    if (ctx->r14 != ctx->r1) {
        // 0x802AE5AC: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_802AE5F4;
    }
    // 0x802AE5AC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE5B0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE5B4: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE5B8: lh          $t7, 0x70($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X70);
    // 0x802AE5BC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802AE5C0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802AE5C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x802AE5C8: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x802AE5CC: addiu       $t9, $t9, -0x1DF8
    ctx->r25 = ADD32(ctx->r25, -0X1DF8);
    // 0x802AE5D0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x802AE5D4: lh          $t0, 0xA($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XA);
    // 0x802AE5D8: lwc1        $f4, 0x54($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AE5DC: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802AE5E0: nop

    // 0x802AE5E4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AE5E8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802AE5EC: b           L_802AE630
    // 0x802AE5F0: swc1        $f10, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f10.u32l;
        goto L_802AE630;
    // 0x802AE5F0: swc1        $f10, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f10.u32l;
L_802AE5F4:
    // 0x802AE5F4: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE5F8: lh          $t1, 0x70($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X70);
    // 0x802AE5FC: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802AE600: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x802AE604: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x802AE608: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x802AE60C: addiu       $t3, $t3, -0x1DF8
    ctx->r11 = ADD32(ctx->r11, -0X1DF8);
    // 0x802AE610: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x802AE614: lh          $t4, 0xA($v0)
    ctx->r12 = MEM_H(ctx->r2, 0XA);
    // 0x802AE618: lwc1        $f16, 0x54($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AE61C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x802AE620: nop

    // 0x802AE624: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802AE628: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x802AE62C: swc1        $f4, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f4.u32l;
L_802AE630:
    // 0x802AE630: lh          $t5, 0xC($v0)
    ctx->r13 = MEM_H(ctx->r2, 0XC);
    // 0x802AE634: lwc1        $f8, 0x58($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802AE638: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x802AE63C: nop

    // 0x802AE640: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802AE644: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x802AE648: jr          $ra
    // 0x802AE64C: swc1        $f16, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f16.u32l;
    return;
    // 0x802AE64C: swc1        $f16, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_802AE650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE650: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE654: lwc1        $f4, 0x5518($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5518);
    // 0x802AE658: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x802AE65C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802AE660: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AE664: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802AE668: nop

    // 0x802AE66C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802AE670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AE674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AE678: jal         0x802AE0E8
    // 0x802AE67C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    func_802AE0E8(rdram, ctx);
        goto after_0;
    // 0x802AE67C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x802AE680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AE684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AE688: jr          $ra
    // 0x802AE68C: nop

    return;
    // 0x802AE68C: nop

;}
RECOMP_FUNC void func_802AE690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE690: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE694: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE698: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802AE69C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AE6A0: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802AE6A4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AE6A8: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x802AE6AC: addiu       $a0, $a0, -0x1DF8
    ctx->r4 = ADD32(ctx->r4, -0X1DF8);
    // 0x802AE6B0: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE6B4: nop

    // 0x802AE6B8: ori         $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 | 0X2000;
    // 0x802AE6BC: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x802AE6C0: lh          $t0, 0x70($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X70);
    // 0x802AE6C4: nop

    // 0x802AE6C8: multu       $t0, $a1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE6CC: mflo        $t1
    ctx->r9 = lo;
    // 0x802AE6D0: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x802AE6D4: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x802AE6D8: nop

    // 0x802AE6DC: sh          $t3, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r11;
    // 0x802AE6E0: lh          $t4, 0x70($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X70);
    // 0x802AE6E4: nop

    // 0x802AE6E8: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE6EC: mflo        $t5
    ctx->r13 = lo;
    // 0x802AE6F0: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x802AE6F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x802AE6F8: nop

    // 0x802AE6FC: sh          $t7, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r15;
    // 0x802AE700: lh          $t8, 0x70($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X70);
    // 0x802AE704: nop

    // 0x802AE708: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE70C: mflo        $t9
    ctx->r25 = lo;
    // 0x802AE710: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x802AE714: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x802AE718: nop

    // 0x802AE71C: beq         $t1, $zero, L_802AE738
    if (ctx->r9 == 0) {
        // 0x802AE720: nop
    
            goto L_802AE738;
    }
    // 0x802AE720: nop

    // 0x802AE724: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE728: nop

    // 0x802AE72C: andi        $t3, $t2, 0x7FFF
    ctx->r11 = ctx->r10 & 0X7FFF;
    // 0x802AE730: jr          $ra
    // 0x802AE734: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    return;
    // 0x802AE734: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_802AE738:
    // 0x802AE738: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE73C: nop

    // 0x802AE740: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x802AE744: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    // 0x802AE748: jr          $ra
    // 0x802AE74C: nop

    return;
    // 0x802AE74C: nop

;}
RECOMP_FUNC void func_802AE750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE750: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE754: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE758: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802AE75C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x802AE760: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802AE764: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AE768: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x802AE76C: addiu       $a0, $a0, -0x1D78
    ctx->r4 = ADD32(ctx->r4, -0X1D78);
    // 0x802AE770: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE774: nop

    // 0x802AE778: ori         $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 | 0X2000;
    // 0x802AE77C: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x802AE780: lh          $t0, 0x70($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X70);
    // 0x802AE784: nop

    // 0x802AE788: multu       $t0, $a1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE78C: mflo        $t1
    ctx->r9 = lo;
    // 0x802AE790: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x802AE794: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x802AE798: nop

    // 0x802AE79C: sh          $t3, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r11;
    // 0x802AE7A0: lh          $t4, 0x70($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X70);
    // 0x802AE7A4: nop

    // 0x802AE7A8: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE7AC: mflo        $t5
    ctx->r13 = lo;
    // 0x802AE7B0: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x802AE7B4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x802AE7B8: nop

    // 0x802AE7BC: sh          $t7, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r15;
    // 0x802AE7C0: lh          $t8, 0x70($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X70);
    // 0x802AE7C4: nop

    // 0x802AE7C8: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AE7CC: mflo        $t9
    ctx->r25 = lo;
    // 0x802AE7D0: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x802AE7D4: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x802AE7D8: nop

    // 0x802AE7DC: beq         $t1, $zero, L_802AE7F8
    if (ctx->r9 == 0) {
        // 0x802AE7E0: nop
    
            goto L_802AE7F8;
    }
    // 0x802AE7E0: nop

    // 0x802AE7E4: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE7E8: nop

    // 0x802AE7EC: andi        $t3, $t2, 0x7FFF
    ctx->r11 = ctx->r10 & 0X7FFF;
    // 0x802AE7F0: jr          $ra
    // 0x802AE7F4: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    return;
    // 0x802AE7F4: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
L_802AE7F8:
    // 0x802AE7F8: lhu         $t4, 0x2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X2);
    // 0x802AE7FC: nop

    // 0x802AE800: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x802AE804: sh          $t5, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r13;
    // 0x802AE808: jr          $ra
    // 0x802AE80C: nop

    return;
    // 0x802AE80C: nop

;}
RECOMP_FUNC void func_802AE810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE810: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AE814: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802AE818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AE81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AE820: bne         $t6, $zero, L_802AE82C
    if (ctx->r14 != 0) {
        // 0x802AE824: swc1        $f14, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
            goto L_802AE82C;
    }
    // 0x802AE824: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x802AE828: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_802AE82C:
    // 0x802AE82C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802AE830: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AE834: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AE838: addiu       $a3, $a3, 0x5510
    ctx->r7 = ADD32(ctx->r7, 0X5510);
    // 0x802AE83C: addiu       $a2, $a2, 0x550C
    ctx->r6 = ADD32(ctx->r6, 0X550C);
    // 0x802AE840: jal         0x802A9704
    // 0x802AE844: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_802A9704(rdram, ctx);
        goto after_0;
    // 0x802AE844: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x802AE848: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802AE84C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802AE850: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AE854: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AE858: addiu       $a3, $a3, 0x5518
    ctx->r7 = ADD32(ctx->r7, 0X5518);
    // 0x802AE85C: jal         0x802A9704
    // 0x802AE860: addiu       $a2, $a2, 0x5514
    ctx->r6 = ADD32(ctx->r6, 0X5514);
    func_802A9704(rdram, ctx);
        goto after_1;
    // 0x802AE860: addiu       $a2, $a2, 0x5514
    ctx->r6 = ADD32(ctx->r6, 0X5514);
    after_1:
    // 0x802AE864: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE868: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE86C: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802AE870: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802AE874: lwc1        $f12, 0x54($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AE878: lwc1        $f14, 0x58($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802AE87C: swc1        $f4, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f4.u32l;
    // 0x802AE880: jal         0x802AE140
    // 0x802AE884: swc1        $f6, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f6.u32l;
    func_802AE140(rdram, ctx);
        goto after_2;
    // 0x802AE884: swc1        $f6, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f6.u32l;
    after_2:
    // 0x802AE888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AE88C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AE890: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AE894: sh          $v0, 0x70($v1)
    MEM_H(0X70, ctx->r3) = ctx->r2;
    // 0x802AE898: jr          $ra
    // 0x802AE89C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802AE89C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802AE8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AE8A0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AE8A4: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AE8A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802AE8AC: sh          $t6, 0x42($a1)
    MEM_H(0X42, ctx->r5) = ctx->r14;
    // 0x802AE8B0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AE8B4: lw          $v0, 0x50A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50A8);
    // 0x802AE8B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802AE8BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AE8C0: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802AE8C4: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AE8C8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x802AE8CC: jal         0x802A9704
    // 0x802AE8D0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_802A9704(rdram, ctx);
        goto after_0;
    // 0x802AE8D0: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x802AE8D4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AE8D8: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AE8DC: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x802AE8E0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AE8E4: bne         $t7, $zero, L_802AE8FC
    if (ctx->r15 != 0) {
        // 0x802AE8E8: addiu       $a0, $a0, 0x54B8
        ctx->r4 = ADD32(ctx->r4, 0X54B8);
            goto L_802AE8FC;
    }
    // 0x802AE8E8: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802AE8EC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802AE8F0: nop

    // 0x802AE8F4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x802AE8F8: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
L_802AE8FC:
    // 0x802AE8FC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802AE900: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802AE904: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x802AE908: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x802AE90C: swc1        $f12, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f12.u32l;
    // 0x802AE910: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    // 0x802AE914: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x802AE918: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x802AE91C: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x802AE920: jal         0x802AE140
    // 0x802AE924: swc1        $f6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f6.u32l;
    func_802AE140(rdram, ctx);
        goto after_1;
    // 0x802AE924: swc1        $f6, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f6.u32l;
    after_1:
    // 0x802AE928: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AE92C: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802AE930: sh          $v0, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r2;
    // 0x802AE934: lh          $v1, 0x70($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X70);
    // 0x802AE938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AE93C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AE940: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802AE944: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AE948: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AE94C: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x802AE950: beq         $v1, $at, L_802AE964
    if (ctx->r3 == ctx->r1) {
        // 0x802AE954: swc1        $f0, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
            goto L_802AE964;
    }
    // 0x802AE954: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x802AE958: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AE95C: bne         $v1, $at, L_802AE9BC
    if (ctx->r3 != ctx->r1) {
        // 0x802AE960: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802AE9BC;
    }
    // 0x802AE960: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_802AE964:
    // 0x802AE964: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x802AE968: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE96C: beq         $t8, $zero, L_802AE998
    if (ctx->r24 == 0) {
        // 0x802AE970: nop
    
            goto L_802AE998;
    }
    // 0x802AE970: nop

    // 0x802AE974: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE978: lwc1        $f8, 0x5664($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AE97C: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x802AE980: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802AE984: nop

    // 0x802AE988: bc1f        L_802AEB28
    if (!c1cs) {
        // 0x802AE98C: nop
    
            goto L_802AEB28;
    }
    // 0x802AE98C: nop

    // 0x802AE990: b           L_802AEB28
    // 0x802AE994: sh          $t9, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r25;
        goto L_802AEB28;
    // 0x802AE994: sh          $t9, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r25;
L_802AE998:
    // 0x802AE998: lwc1        $f10, 0x5664($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AE99C: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x802AE9A0: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x802AE9A4: nop

    // 0x802AE9A8: bc1f        L_802AEB28
    if (!c1cs) {
        // 0x802AE9AC: nop
    
            goto L_802AEB28;
    }
    // 0x802AE9AC: nop

    // 0x802AE9B0: b           L_802AEB28
    // 0x802AE9B4: sh          $t0, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r8;
        goto L_802AEB28;
    // 0x802AE9B4: sh          $t0, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r8;
    // 0x802AE9B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_802AE9BC:
    // 0x802AE9BC: beq         $v1, $at, L_802AE9CC
    if (ctx->r3 == ctx->r1) {
        // 0x802AE9C0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AE9CC;
    }
    // 0x802AE9C0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AE9C4: bne         $v1, $at, L_802AEA20
    if (ctx->r3 != ctx->r1) {
        // 0x802AE9C8: nop
    
            goto L_802AEA20;
    }
    // 0x802AE9C8: nop

L_802AE9CC:
    // 0x802AE9CC: lw          $t1, 0x10($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X10);
    // 0x802AE9D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE9D4: beq         $t1, $zero, L_802AEA00
    if (ctx->r9 == 0) {
        // 0x802AE9D8: nop
    
            goto L_802AEA00;
    }
    // 0x802AE9D8: nop

    // 0x802AE9DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AE9E0: lwc1        $f16, 0x5664($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AE9E4: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802AE9E8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802AE9EC: nop

    // 0x802AE9F0: bc1f        L_802AEB28
    if (!c1cs) {
        // 0x802AE9F4: nop
    
            goto L_802AEB28;
    }
    // 0x802AE9F4: nop

    // 0x802AE9F8: b           L_802AEB28
    // 0x802AE9FC: sh          $t2, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r10;
        goto L_802AEB28;
    // 0x802AE9FC: sh          $t2, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r10;
L_802AEA00:
    // 0x802AEA00: lwc1        $f18, 0x5664($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AEA04: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x802AEA08: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802AEA0C: nop

    // 0x802AEA10: bc1f        L_802AEB28
    if (!c1cs) {
        // 0x802AEA14: nop
    
            goto L_802AEB28;
    }
    // 0x802AEA14: nop

    // 0x802AEA18: b           L_802AEB28
    // 0x802AEA1C: sh          $t3, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r11;
        goto L_802AEB28;
    // 0x802AEA1C: sh          $t3, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r11;
L_802AEA20:
    // 0x802AEA20: beq         $v1, $zero, L_802AEA30
    if (ctx->r3 == 0) {
        // 0x802AEA24: nop
    
            goto L_802AEA30;
    }
    // 0x802AEA24: nop

    // 0x802AEA28: bne         $v1, $a2, L_802AEAB4
    if (ctx->r3 != ctx->r6) {
        // 0x802AEA2C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802AEAB4;
    }
    // 0x802AEA2C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_802AEA30:
    // 0x802AEA30: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x802AEA34: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x802AEA38: beq         $t5, $zero, L_802AEA64
    if (ctx->r13 == 0) {
        // 0x802AEA3C: sh          $t4, 0x70($a0)
        MEM_H(0X70, ctx->r4) = ctx->r12;
            goto L_802AEA64;
    }
    // 0x802AEA3C: sh          $t4, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r12;
    // 0x802AEA40: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AEA44: lwc1        $f4, 0x5664($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AEA48: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x802AEA4C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802AEA50: nop

    // 0x802AEA54: bc1f        L_802AEA84
    if (!c1cs) {
        // 0x802AEA58: nop
    
            goto L_802AEA84;
    }
    // 0x802AEA58: nop

    // 0x802AEA5C: b           L_802AEA84
    // 0x802AEA60: sh          $t6, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r14;
        goto L_802AEA84;
    // 0x802AEA60: sh          $t6, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r14;
L_802AEA64:
    // 0x802AEA64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AEA68: lwc1        $f6, 0x5664($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x802AEA6C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x802AEA70: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802AEA74: nop

    // 0x802AEA78: bc1f        L_802AEA84
    if (!c1cs) {
        // 0x802AEA7C: nop
    
            goto L_802AEA84;
    }
    // 0x802AEA7C: nop

    // 0x802AEA80: sh          $t7, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r15;
L_802AEA84:
    // 0x802AEA84: jal         0x802AE750
    // 0x802AEA88: nop

    func_802AE750(rdram, ctx);
        goto after_2;
    // 0x802AEA88: nop

    after_2:
    // 0x802AEA8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AEA90: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AEA94: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802AEA98: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x802AEA9C: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802AEAA0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AEAA4: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AEAA8: sh          $zero, 0x42($a1)
    MEM_H(0X42, ctx->r5) = 0;
    // 0x802AEAAC: b           L_802AEB38
    // 0x802AEAB0: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
        goto L_802AEB38;
    // 0x802AEAB0: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
L_802AEAB4:
    // 0x802AEAB4: bne         $v1, $at, L_802AEAEC
    if (ctx->r3 != ctx->r1) {
        // 0x802AEAB8: addiu       $t8, $zero, 0x9
        ctx->r24 = ADD32(0, 0X9);
            goto L_802AEAEC;
    }
    // 0x802AEAB8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x802AEABC: jal         0x802AE750
    // 0x802AEAC0: sh          $t8, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r24;
    func_802AE750(rdram, ctx);
        goto after_3;
    // 0x802AEAC0: sh          $t8, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r24;
    after_3:
    // 0x802AEAC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AEAC8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AEACC: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802AEAD0: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x802AEAD4: lwc1        $f10, 0x58($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802AEAD8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AEADC: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AEAE0: sh          $zero, 0x42($a1)
    MEM_H(0X42, ctx->r5) = 0;
    // 0x802AEAE4: b           L_802AEB38
    // 0x802AEAE8: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
        goto L_802AEB38;
    // 0x802AEAE8: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
L_802AEAEC:
    // 0x802AEAEC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802AEAF0: bne         $v1, $at, L_802AEB28
    if (ctx->r3 != ctx->r1) {
        // 0x802AEAF4: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_802AEB28;
    }
    // 0x802AEAF4: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802AEAF8: jal         0x802AE750
    // 0x802AEAFC: sh          $t9, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r25;
    func_802AE750(rdram, ctx);
        goto after_4;
    // 0x802AEAFC: sh          $t9, 0x70($a0)
    MEM_H(0X70, ctx->r4) = ctx->r25;
    after_4:
    // 0x802AEB00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802AEB04: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802AEB08: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802AEB0C: swc1        $f0, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f0.u32l;
    // 0x802AEB10: lwc1        $f16, 0x58($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X58);
    // 0x802AEB14: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AEB18: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802AEB1C: sh          $zero, 0x42($a1)
    MEM_H(0X42, ctx->r5) = 0;
    // 0x802AEB20: b           L_802AEB38
    // 0x802AEB24: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
        goto L_802AEB38;
    // 0x802AEB24: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
L_802AEB28:
    // 0x802AEB28: jal         0x802AE750
    // 0x802AEB2C: nop

    func_802AE750(rdram, ctx);
        goto after_5;
    // 0x802AEB2C: nop

    after_5:
    // 0x802AEB30: jal         0x802AE4E8
    // 0x802AEB34: nop

    func_802AE4E8(rdram, ctx);
        goto after_6;
    // 0x802AEB34: nop

    after_6:
L_802AEB38:
    // 0x802AEB38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AEB3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802AEB40: jr          $ra
    // 0x802AEB44: nop

    return;
    // 0x802AEB44: nop

;}
RECOMP_FUNC void func_802AEB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AEB48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AEB4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AEB50: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AEB54: addiu       $s0, $s0, 0x54B8
    ctx->r16 = ADD32(ctx->r16, 0X54B8);
    // 0x802AEB58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AEB5C: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AEB60: lwc1        $f9, 0x1628($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1628);
    // 0x802AEB64: lwc1        $f8, 0x162C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X162C);
    // 0x802AEB68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802AEB6C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802AEB70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AEB74: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802AEB78: jal         0x802A6D30
    // 0x802AEB7C: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    func_802A6D30(rdram, ctx);
        goto after_0;
    // 0x802AEB7C: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    after_0:
    // 0x802AEB80: beq         $v0, $zero, L_802AEC28
    if (ctx->r2 == 0) {
        // 0x802AEB84: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_802AEC28;
    }
    // 0x802AEB84: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AEB88: lwc1        $f18, 0x6C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AEB8C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AEB90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AEB94: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802AEB98: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x802AEB9C: nop

    // 0x802AEBA0: bc1f        L_802AEC28
    if (!c1cs) {
        // 0x802AEBA4: nop
    
            goto L_802AEC28;
    }
    // 0x802AEBA4: nop

    // 0x802AEBA8: lh          $t6, 0x70($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X70);
    // 0x802AEBAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802AEBB0: bne         $v1, $t6, L_802AEC24
    if (ctx->r3 != ctx->r14) {
        // 0x802AEBB4: addiu       $t3, $zero, 0xB
        ctx->r11 = ADD32(0, 0XB);
            goto L_802AEC24;
    }
    // 0x802AEBB4: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x802AEBB8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x802AEBBC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802AEBC0: bne         $t7, $at, L_802AEC24
    if (ctx->r15 != ctx->r1) {
        // 0x802AEBC4: addiu       $t3, $zero, 0xB
        ctx->r11 = ADD32(0, 0XB);
            goto L_802AEC24;
    }
    // 0x802AEBC4: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x802AEBC8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x802AEBCC: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AEBD0: lw          $t9, 0xCC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XCC);
    // 0x802AEBD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AEBD8: lw          $v0, 0x30($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X30);
    // 0x802AEBDC: addiu       $a1, $zero, 0x223
    ctx->r5 = ADD32(0, 0X223);
    // 0x802AEBE0: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x802AEBE4: nop

    // 0x802AEBE8: andi        $t1, $t0, 0x9FFF
    ctx->r9 = ctx->r8 & 0X9FFF;
    // 0x802AEBEC: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x802AEBF0: lw          $t2, 0x56A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X56A4);
    // 0x802AEBF4: nop

    // 0x802AEBF8: bne         $v1, $t2, L_802AEC14
    if (ctx->r3 != ctx->r10) {
        // 0x802AEBFC: nop
    
            goto L_802AEC14;
    }
    // 0x802AEBFC: nop

    // 0x802AEC00: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AEC04: jal         0x80272D3C
    // 0x802AEC08: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_1;
    // 0x802AEC08: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
    after_1:
    // 0x802AEC0C: b           L_802AEC24
    // 0x802AEC10: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
        goto L_802AEC24;
    // 0x802AEC10: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
L_802AEC14:
    // 0x802AEC14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AEC18: jal         0x80272D3C
    // 0x802AEC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x802AEC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802AEC20: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
L_802AEC24:
    // 0x802AEC24: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
L_802AEC28:
    // 0x802AEC28: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AEC2C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AEC30: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802AEC34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AEC38: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x802AEC3C: c.le.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d <= ctx->f8.d;
    // 0x802AEC40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802AEC44: bc1f        L_802AEC60
    if (!c1cs) {
        // 0x802AEC48: nop
    
            goto L_802AEC60;
    }
    // 0x802AEC48: nop

    // 0x802AEC4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AEC50: nop

    // 0x802AEC54: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    // 0x802AEC58: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AEC5C: nop

L_802AEC60:
    // 0x802AEC60: lwc1        $f0, 0x64($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802AEC64: lwc1        $f18, 0x54($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802AEC68: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    // 0x802AEC6C: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802AEC70: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x802AEC74: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x802AEC78: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802AEC7C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802AEC80: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802AEC84: nop

    // 0x802AEC88: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x802AEC8C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x802AEC90: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x802AEC94: jal         0x802AE0E8
    // 0x802AEC98: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    func_802AE0E8(rdram, ctx);
        goto after_3;
    // 0x802AEC98: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x802AEC9C: lwc1        $f2, 0x68($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X68);
    // 0x802AECA0: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802AECA4: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AECA8: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x802AECAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AECB0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AECB4: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x802AECB8: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802AECBC: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x802AECC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AECC4: jr          $ra
    // 0x802AECC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AECC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AECCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AECCC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AECD0: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AECD4: lh          $t8, 0x70($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X70);
    // 0x802AECD8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AECDC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x802AECE0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802AECE4: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x802AECE8: addiu       $t0, $t0, -0x1DF8
    ctx->r8 = ADD32(ctx->r8, -0X1DF8);
    // 0x802AECEC: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x802AECF0: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x802AECF4: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x802AECF8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AECFC: subu        $t2, $t1, $a1
    ctx->r10 = SUB32(ctx->r9, ctx->r5);
    // 0x802AED00: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802AED04: addiu       $a3, $a3, 0x5648
    ctx->r7 = ADD32(ctx->r7, 0X5648);
    // 0x802AED08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802AED0C: lwc1        $f8, 0x44($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X44);
    // 0x802AED10: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x802AED14: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802AED18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AED1C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802AED20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AED24: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AED28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AED2C: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802AED30: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802AED34: lw          $a2, 0x30($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X30);
    // 0x802AED38: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802AED3C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AED40: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802AED44: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802AED48: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AED4C: nop

    // 0x802AED50: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AED54: beq         $t4, $zero, L_802AEDA0
    if (ctx->r12 == 0) {
        // 0x802AED58: nop
    
            goto L_802AEDA0;
    }
    // 0x802AED58: nop

    // 0x802AED5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AED60: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AED64: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AED68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AED6C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AED70: nop

    // 0x802AED74: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802AED78: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AED7C: nop

    // 0x802AED80: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AED84: bne         $t4, $zero, L_802AED98
    if (ctx->r12 != 0) {
        // 0x802AED88: nop
    
            goto L_802AED98;
    }
    // 0x802AED88: nop

    // 0x802AED8C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802AED90: b           L_802AEDB0
    // 0x802AED94: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802AEDB0;
    // 0x802AED94: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802AED98:
    // 0x802AED98: b           L_802AEDB0
    // 0x802AED9C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802AEDB0;
    // 0x802AED9C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_802AEDA0:
    // 0x802AEDA0: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802AEDA4: nop

    // 0x802AEDA8: bltz        $t4, L_802AED98
    if (SIGNED(ctx->r12) < 0) {
        // 0x802AEDAC: nop
    
            goto L_802AED98;
    }
    // 0x802AEDAC: nop

L_802AEDB0:
    // 0x802AEDB0: sh          $t4, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r12;
    // 0x802AEDB4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802AEDB8: lwc1        $f8, 0x54($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AEDBC: lwc1        $f2, 0x64($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X64);
    // 0x802AEDC0: lwc1        $f0, 0x44($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X44);
    // 0x802AEDC4: sub.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802AEDC8: lwc1        $f4, 0x58($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802AEDCC: lwc1        $f12, 0x68($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X68);
    // 0x802AEDD0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802AEDD4: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x802AEDD8: lh          $a0, 0x70($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X70);
    // 0x802AEDDC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802AEDE0: add.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802AEDE4: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x802AEDE8: add.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x802AEDEC: jal         0x802AE4A4
    // 0x802AEDF0: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    func_802AE4A4(rdram, ctx);
        goto after_0;
    // 0x802AEDF0: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    after_0:
    // 0x802AEDF4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEDF8: bne         $v0, $zero, L_802AEE44
    if (ctx->r2 != 0) {
        // 0x802AEDFC: addiu       $v1, $v1, 0x54B8
        ctx->r3 = ADD32(ctx->r3, 0X54B8);
            goto L_802AEE44;
    }
    // 0x802AEDFC: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEE00: lwc1        $f12, 0x6C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X6C);
    // 0x802AEE04: jal         0x802AE650
    // 0x802AEE08: nop

    func_802AE650(rdram, ctx);
        goto after_1;
    // 0x802AEE08: nop

    after_1:
    // 0x802AEE0C: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x802AEE10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AEE14: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802AEE18: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x802AEE1C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEE20: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEE24: bc1f        L_802AEE34
    if (!c1cs) {
        // 0x802AEE28: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802AEE34;
    }
    // 0x802AEE28: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AEE2C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AEE30: nop

L_802AEE34:
    // 0x802AEE34: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802AEE38: nop

    // 0x802AEE3C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802AEE40: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
L_802AEE44:
    // 0x802AEE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AEE48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AEE4C: jr          $ra
    // 0x802AEE50: nop

    return;
    // 0x802AEE50: nop

;}
RECOMP_FUNC void func_802AEE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AEE54: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEE58: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEE5C: lh          $t8, 0x70($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X70);
    // 0x802AEE60: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AEE64: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x802AEE68: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802AEE6C: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x802AEE70: addiu       $t0, $t0, -0x1D78
    ctx->r8 = ADD32(ctx->r8, -0X1D78);
    // 0x802AEE74: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x802AEE78: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x802AEE7C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x802AEE80: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AEE84: subu        $t2, $t1, $a1
    ctx->r10 = SUB32(ctx->r9, ctx->r5);
    // 0x802AEE88: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802AEE8C: addiu       $a3, $a3, 0x5648
    ctx->r7 = ADD32(ctx->r7, 0X5648);
    // 0x802AEE90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802AEE94: lwc1        $f8, 0x44($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X44);
    // 0x802AEE98: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x802AEE9C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802AEEA0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AEEA4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x802AEEA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AEEAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AEEB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AEEB4: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802AEEB8: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x802AEEBC: lw          $a2, 0x30($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X30);
    // 0x802AEEC0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802AEEC4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AEEC8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802AEECC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802AEED0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AEED4: nop

    // 0x802AEED8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AEEDC: beq         $t4, $zero, L_802AEF28
    if (ctx->r12 == 0) {
        // 0x802AEEE0: nop
    
            goto L_802AEF28;
    }
    // 0x802AEEE0: nop

    // 0x802AEEE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AEEE8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AEEEC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AEEF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AEEF4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AEEF8: nop

    // 0x802AEEFC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802AEF00: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AEF04: nop

    // 0x802AEF08: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AEF0C: bne         $t4, $zero, L_802AEF20
    if (ctx->r12 != 0) {
        // 0x802AEF10: nop
    
            goto L_802AEF20;
    }
    // 0x802AEF10: nop

    // 0x802AEF14: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802AEF18: b           L_802AEF38
    // 0x802AEF1C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802AEF38;
    // 0x802AEF1C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802AEF20:
    // 0x802AEF20: b           L_802AEF38
    // 0x802AEF24: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802AEF38;
    // 0x802AEF24: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_802AEF28:
    // 0x802AEF28: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802AEF2C: nop

    // 0x802AEF30: bltz        $t4, L_802AEF20
    if (SIGNED(ctx->r12) < 0) {
        // 0x802AEF34: nop
    
            goto L_802AEF20;
    }
    // 0x802AEF34: nop

L_802AEF38:
    // 0x802AEF38: sh          $t4, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r12;
    // 0x802AEF3C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802AEF40: lwc1        $f8, 0x54($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AEF44: lwc1        $f2, 0x64($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X64);
    // 0x802AEF48: lwc1        $f0, 0x44($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X44);
    // 0x802AEF4C: sub.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802AEF50: lwc1        $f4, 0x58($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X58);
    // 0x802AEF54: lwc1        $f12, 0x68($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X68);
    // 0x802AEF58: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802AEF5C: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x802AEF60: lh          $a0, 0x70($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X70);
    // 0x802AEF64: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802AEF68: add.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802AEF6C: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x802AEF70: add.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x802AEF74: jal         0x802AE4A4
    // 0x802AEF78: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    func_802AE4A4(rdram, ctx);
        goto after_0;
    // 0x802AEF78: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    after_0:
    // 0x802AEF7C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEF80: bne         $v0, $zero, L_802AEFCC
    if (ctx->r2 != 0) {
        // 0x802AEF84: addiu       $v1, $v1, 0x54B8
        ctx->r3 = ADD32(ctx->r3, 0X54B8);
            goto L_802AEFCC;
    }
    // 0x802AEF84: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEF88: lwc1        $f12, 0x6C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X6C);
    // 0x802AEF8C: jal         0x802AE650
    // 0x802AEF90: nop

    func_802AE650(rdram, ctx);
        goto after_1;
    // 0x802AEF90: nop

    after_1:
    // 0x802AEF94: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x802AEF98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AEF9C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802AEFA0: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x802AEFA4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEFA8: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEFAC: bc1f        L_802AEFBC
    if (!c1cs) {
        // 0x802AEFB0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802AEFBC;
    }
    // 0x802AEFB0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802AEFB4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AEFB8: nop

L_802AEFBC:
    // 0x802AEFBC: lwc1        $f4, 0x2C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802AEFC0: nop

    // 0x802AEFC4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802AEFC8: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
L_802AEFCC:
    // 0x802AEFCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AEFD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AEFD4: jr          $ra
    // 0x802AEFD8: nop

    return;
    // 0x802AEFD8: nop

;}
RECOMP_FUNC void func_802AEFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AEFDC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEFE0: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AEFE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802AEFE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AEFEC: lh          $a0, 0x70($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X70);
    // 0x802AEFF0: jal         0x802AE4A4
    // 0x802AEFF4: nop

    func_802AE4A4(rdram, ctx);
        goto after_0;
    // 0x802AEFF4: nop

    after_0:
    // 0x802AEFF8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AEFFC: beq         $v0, $zero, L_802AF018
    if (ctx->r2 == 0) {
        // 0x802AF000: addiu       $v1, $v1, 0x54B8
        ctx->r3 = ADD32(ctx->r3, 0X54B8);
            goto L_802AF018;
    }
    // 0x802AF000: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802AF004: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AF008: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802AF00C: swc1        $f2, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f2.u32l;
    // 0x802AF010: b           L_802AF050
    // 0x802AF014: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
        goto L_802AF050;
    // 0x802AF014: swc1        $f0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f0.u32l;
L_802AF018:
    // 0x802AF018: lwc1        $f4, 0x54($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X54);
    // 0x802AF01C: lwc1        $f6, 0x64($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X64);
    // 0x802AF020: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AF024: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802AF028: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802AF02C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AF030: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802AF034: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x802AF038: lwc1        $f0, 0x28($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802AF03C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802AF040: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802AF044: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x802AF048: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802AF04C: swc1        $f8, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->f8.u32l;
L_802AF050:
    // 0x802AF050: lwc1        $f10, 0x2C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802AF054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AF058: swc1        $f2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->f2.u32l;
    // 0x802AF05C: swc1        $f0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f0.u32l;
    // 0x802AF060: swc1        $f2, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f2.u32l;
    // 0x802AF064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802AF068: jr          $ra
    // 0x802AF06C: swc1        $f10, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f10.u32l;
    return;
    // 0x802AF06C: swc1        $f10, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_802AF070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AF070: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AF074: lw          $t6, 0x5504($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5504);
    // 0x802AF078: nop

    // 0x802AF07C: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x802AF080: nop

    // 0x802AF084: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x802AF088: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF08C: bne         $t7, $zero, L_802AF0E0
    if (ctx->r15 != 0) {
        // 0x802AF090: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_802AF0E0;
    }
    // 0x802AF090: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x802AF094: andi        $v0, $v1, 0x4000
    ctx->r2 = ctx->r3 & 0X4000;
    // 0x802AF098: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF09C: bne         $t8, $zero, L_802AF0E0
    if (ctx->r24 != 0) {
        // 0x802AF0A0: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_802AF0E0;
    }
    // 0x802AF0A0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x802AF0A4: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x802AF0A8: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF0AC: bne         $t9, $zero, L_802AF0E0
    if (ctx->r25 != 0) {
        // 0x802AF0B0: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_802AF0E0;
    }
    // 0x802AF0B0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x802AF0B4: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802AF0B8: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF0BC: bne         $t0, $zero, L_802AF0E0
    if (ctx->r8 != 0) {
        // 0x802AF0C0: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_802AF0E0;
    }
    // 0x802AF0C0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802AF0C4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x802AF0C8: sltu        $t1, $zero, $v0
    ctx->r9 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF0CC: bne         $t1, $zero, L_802AF0E0
    if (ctx->r9 != 0) {
        // 0x802AF0D0: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_802AF0E0;
    }
    // 0x802AF0D0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x802AF0D4: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802AF0D8: sltu        $t2, $zero, $v0
    ctx->r10 = 0 < ctx->r2 ? 1 : 0;
    // 0x802AF0DC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_802AF0E0:
    // 0x802AF0E0: jr          $ra
    // 0x802AF0E4: nop

    return;
    // 0x802AF0E4: nop

;}
RECOMP_FUNC void func_802AF0E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AF0E8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802AF0EC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AF0F0: lw          $t6, 0x50A8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X50A8);
    // 0x802AF0F4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802AF0F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF0FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF100: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x802AF104: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x802AF108: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802AF10C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802AF110: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x802AF114: addiu       $a3, $a3, 0x54B8
    ctx->r7 = ADD32(ctx->r7, 0X54B8);
    // 0x802AF118: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x802AF11C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802AF120: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x802AF124: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x802AF128: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x802AF12C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x802AF130: lh          $a2, 0xC($a3)
    ctx->r6 = MEM_H(ctx->r7, 0XC);
    // 0x802AF134: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802AF138: mflo        $t1
    ctx->r9 = lo;
    // 0x802AF13C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x802AF140: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802AF144: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x802AF148: mfhi        $t4
    ctx->r12 = hi;
    // 0x802AF14C: sh          $t4, 0xE($a3)
    MEM_H(0XE, ctx->r7) = ctx->r12;
    // 0x802AF150: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x802AF154: nop

    // 0x802AF158: subu        $v1, $a1, $a2
    ctx->r3 = SUB32(ctx->r5, ctx->r6);
    // 0x802AF15C: sra         $t5, $v1, 2
    ctx->r13 = S32(SIGNED(ctx->r3) >> 2);
    // 0x802AF160: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x802AF164: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802AF168: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x802AF16C: bne         $t7, $zero, L_802AF1A4
    if (ctx->r15 != 0) {
        // 0x802AF170: sh          $t8, 0xC($a3)
        MEM_H(0XC, ctx->r7) = ctx->r24;
            goto L_802AF1A4;
    }
    // 0x802AF170: sh          $t8, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r24;
    // 0x802AF174: lh          $a2, 0xC($a3)
    ctx->r6 = MEM_H(ctx->r7, 0XC);
    // 0x802AF178: nop

    // 0x802AF17C: beq         $a2, $a1, L_802AF1A4
    if (ctx->r6 == ctx->r5) {
        // 0x802AF180: slt         $at, $a2, $a1
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_802AF1A4;
    }
    // 0x802AF180: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802AF184: beq         $at, $zero, L_802AF194
    if (ctx->r1 == 0) {
        // 0x802AF188: addiu       $t9, $a2, 0x1
        ctx->r25 = ADD32(ctx->r6, 0X1);
            goto L_802AF194;
    }
    // 0x802AF188: addiu       $t9, $a2, 0x1
    ctx->r25 = ADD32(ctx->r6, 0X1);
    // 0x802AF18C: b           L_802AF1A4
    // 0x802AF190: sh          $t9, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r25;
        goto L_802AF1A4;
    // 0x802AF190: sh          $t9, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r25;
L_802AF194:
    // 0x802AF194: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x802AF198: beq         $at, $zero, L_802AF1A4
    if (ctx->r1 == 0) {
        // 0x802AF19C: addiu       $t0, $a2, -0x1
        ctx->r8 = ADD32(ctx->r6, -0X1);
            goto L_802AF1A4;
    }
    // 0x802AF19C: addiu       $t0, $a2, -0x1
    ctx->r8 = ADD32(ctx->r6, -0X1);
    // 0x802AF1A0: sh          $t0, 0xC($a3)
    MEM_H(0XC, ctx->r7) = ctx->r8;
L_802AF1A4:
    // 0x802AF1A4: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x802AF1A8: nop

    // 0x802AF1AC: bgez        $v0, L_802AF1C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802AF1B0: nop
    
            goto L_802AF1C8;
    }
    // 0x802AF1B0: nop

    // 0x802AF1B4: lhu         $t1, 0x2($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X2);
    // 0x802AF1B8: nop

    // 0x802AF1BC: andi        $t2, $t1, 0x7FFF
    ctx->r10 = ctx->r9 & 0X7FFF;
    // 0x802AF1C0: b           L_802AF1D8
    // 0x802AF1C4: sh          $t2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r10;
        goto L_802AF1D8;
    // 0x802AF1C4: sh          $t2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r10;
L_802AF1C8:
    // 0x802AF1C8: lhu         $t3, 0x2($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X2);
    // 0x802AF1CC: nop

    // 0x802AF1D0: ori         $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 | 0X8000;
    // 0x802AF1D4: sh          $t4, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r12;
L_802AF1D8:
    // 0x802AF1D8: bgez        $v0, L_802AF1EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802AF1DC: nop
    
            goto L_802AF1EC;
    }
    // 0x802AF1DC: nop

    // 0x802AF1E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802AF1E4: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x802AF1E8: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
L_802AF1EC:
    // 0x802AF1EC: jr          $ra
    // 0x802AF1F0: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    return;
    // 0x802AF1F0: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802AF1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AF1F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AF1F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AF1FC: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AF200: addiu       $s0, $s0, 0x54B8
    ctx->r16 = ADD32(ctx->r16, 0X54B8);
    // 0x802AF204: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF208: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AF20C: lw          $t6, 0xCC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XCC);
    // 0x802AF210: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x802AF214: lw          $a1, 0x30($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X30);
    // 0x802AF218: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x802AF21C: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x802AF220: beq         $at, $zero, L_802AFABC
    if (ctx->r1 == 0) {
        // 0x802AF224: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_802AFABC;
    }
    // 0x802AF224: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802AF228: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF22C: addu        $at, $at, $t7
    gpr jr_addend_802AF238 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802AF230: lw          $t7, 0x1630($at)
    ctx->r15 = ADD32(ctx->r1, 0X1630);
    // 0x802AF234: nop

    // 0x802AF238: jr          $t7
    // 0x802AF23C: nop

    switch (jr_addend_802AF238 >> 2) {
        case 0: goto L_802AF240; break;
        case 1: goto L_802AF2B0; break;
        case 2: goto L_802AFABC; break;
        case 3: goto L_802AF2D4; break;
        case 4: goto L_802AF68C; break;
        case 5: goto L_802AF748; break;
        case 6: goto L_802AF7EC; break;
        case 7: goto L_802AFA00; break;
        case 8: goto L_802AFA10; break;
        case 9: goto L_802AFA20; break;
        case 10: goto L_802AFA80; break;
        case 11: goto L_802AFABC; break;
        default: switch_error(__func__, 0x802AF238, 0x802C1630);
    }
    // 0x802AF23C: nop

L_802AF240:
    // 0x802AF240: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AF244: beq         $v1, $at, L_802AF264
    if (ctx->r3 == ctx->r1) {
        // 0x802AF248: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_802AF264;
    }
    // 0x802AF248: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AF24C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AF250: lw          $v0, 0x55C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55C0);
    // 0x802AF254: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AF258: beq         $v0, $at, L_802AF264
    if (ctx->r2 == ctx->r1) {
        // 0x802AF25C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AF264;
    }
    // 0x802AF25C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AF260: bne         $v0, $at, L_802AF284
    if (ctx->r2 != ctx->r1) {
        // 0x802AF264: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_802AF284;
    }
L_802AF264:
    // 0x802AF264: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802AF268: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x802AF26C: lhu         $t0, 0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2);
    // 0x802AF270: addiu       $t9, $zero, 0xED
    ctx->r25 = ADD32(0, 0XED);
    // 0x802AF274: ori         $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 | 0X2000;
    // 0x802AF278: sh          $t9, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r25;
    // 0x802AF27C: sh          $zero, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = 0;
    // 0x802AF280: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
L_802AF284:
    // 0x802AF284: lh          $t2, 0x5434($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X5434);
    // 0x802AF288: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF28C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802AF290: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x802AF294: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802AF298: bne         $t5, $zero, L_802AFABC
    if (ctx->r13 != 0) {
        // 0x802AF29C: sh          $t3, 0x5434($at)
        MEM_H(0X5434, ctx->r1) = ctx->r11;
            goto L_802AFABC;
    }
    // 0x802AF29C: sh          $t3, 0x5434($at)
    MEM_H(0X5434, ctx->r1) = ctx->r11;
    // 0x802AF2A0: jal         0x802AB47C
    // 0x802AF2A4: nop

    func_802AB47C(rdram, ctx);
        goto after_0;
    // 0x802AF2A4: nop

    after_0:
    // 0x802AF2A8: b           L_802AFAC0
    // 0x802AF2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AFAC0;
    // 0x802AF2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AF2B0:
    // 0x802AF2B0: jal         0x802AF0E8
    // 0x802AF2B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_802AF0E8(rdram, ctx);
        goto after_1;
    // 0x802AF2B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x802AF2B8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AF2BC: lw          $t6, 0x55C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X55C0);
    // 0x802AF2C0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF2C4: bne         $t6, $at, L_802AFABC
    if (ctx->r14 != ctx->r1) {
        // 0x802AF2C8: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_802AFABC;
    }
    // 0x802AF2C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802AF2CC: b           L_802AFABC
    // 0x802AF2D0: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
        goto L_802AFABC;
    // 0x802AF2D0: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
L_802AF2D4:
    // 0x802AF2D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802AF2D8: jal         0x802AF0E8
    // 0x802AF2DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_802AF0E8(rdram, ctx);
        goto after_2;
    // 0x802AF2DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_2:
    // 0x802AF2E0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AF2E4: lh          $t8, 0x5436($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X5436);
    // 0x802AF2E8: nop

    // 0x802AF2EC: bne         $t8, $zero, L_802AF300
    if (ctx->r24 != 0) {
        // 0x802AF2F0: nop
    
            goto L_802AF300;
    }
    // 0x802AF2F0: nop

    // 0x802AF2F4: jal         0x802AF070
    // 0x802AF2F8: nop

    func_802AF070(rdram, ctx);
        goto after_3;
    // 0x802AF2F8: nop

    after_3:
    // 0x802AF2FC: beq         $v0, $zero, L_802AF564
    if (ctx->r2 == 0) {
        // 0x802AF300: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_802AF564;
    }
L_802AF300:
    // 0x802AF300: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AF304: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802AF308: lw          $t9, 0x34($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X34);
    // 0x802AF30C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AF310: bne         $t9, $at, L_802AF564
    if (ctx->r25 != ctx->r1) {
        // 0x802AF314: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802AF564;
    }
    // 0x802AF314: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AF318: addiu       $a1, $a1, 0x50A8
    ctx->r5 = ADD32(ctx->r5, 0X50A8);
    // 0x802AF31C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x802AF320: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802AF324: sw          $zero, 0x68($t0)
    MEM_W(0X68, ctx->r8) = 0;
    // 0x802AF328: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802AF32C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802AF330: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802AF334: nop

    // 0x802AF338: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x802AF33C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x802AF340: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802AF344: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802AF348: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF34C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF350: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AF354: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802AF358: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802AF35C: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802AF360: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802AF364: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x802AF368: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802AF36C: multu       $t5, $t5
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AF370: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802AF374: nop

    // 0x802AF378: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802AF37C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF380: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF384: nop

    // 0x802AF388: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802AF38C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x802AF390: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802AF394: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x802AF398: mflo        $t9
    ctx->r25 = lo;
    // 0x802AF39C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802AF3A0: nop

    // 0x802AF3A4: multu       $t8, $t8
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802AF3A8: mflo        $t0
    ctx->r8 = lo;
    // 0x802AF3AC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x802AF3B0: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x802AF3B4: jal         0x8007FA40
    // 0x802AF3B8: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_8007FA40(rdram, ctx);
        goto after_4;
    // 0x802AF3B8: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_4:
    // 0x802AF3BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF3C0: lwc1        $f12, 0x1660($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1660);
    // 0x802AF3C4: jal         0x8007FA40
    // 0x802AF3C8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_8007FA40(rdram, ctx);
        goto after_5;
    // 0x802AF3C8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x802AF3CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF3D0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802AF3D4: lwc1        $f7, 0x1668($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1668);
    // 0x802AF3D8: lwc1        $f6, 0x166C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X166C);
    // 0x802AF3DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802AF3E0: nop

    // 0x802AF3E4: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x802AF3E8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802AF3EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF3F0: lwc1        $f19, 0x1670($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1670);
    // 0x802AF3F4: lwc1        $f18, 0x1674($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1674);
    // 0x802AF3F8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AF3FC: lw          $v0, 0x50C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50C0);
    // 0x802AF400: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x802AF404: sub.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f18.d - ctx->f16.d;
    // 0x802AF408: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802AF40C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802AF410: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x802AF414: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802AF418: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF41C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF420: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802AF424: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802AF428: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802AF42C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x802AF430: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802AF434: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x802AF438: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x802AF43C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802AF440: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x802AF444: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802AF448: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF44C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF450: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x802AF454: cvt.w.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.u32l = CVT_W_S(ctx->f14.fl);
    // 0x802AF458: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x802AF45C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802AF460: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x802AF464: jal         0x802A90BC
    // 0x802AF468: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    func_802A90BC(rdram, ctx);
        goto after_6;
    // 0x802AF468: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_6:
    // 0x802AF46C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF470: lwc1        $f16, 0x568C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X568C);
    // 0x802AF474: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802AF478: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802AF47C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x802AF480: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802AF484: bc1f        L_802AF544
    if (!c1cs) {
        // 0x802AF488: sll         $v1, $v0, 16
        ctx->r3 = S32(ctx->r2 << 16);
            goto L_802AF544;
    }
    // 0x802AF488: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802AF48C: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802AF490: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AF494: bne         $t8, $at, L_802AF4E4
    if (ctx->r24 != ctx->r1) {
        // 0x802AF498: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_802AF4E4;
    }
    // 0x802AF498: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x802AF49C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802AF4A0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF4A4: jal         0x802AE810
    // 0x802AF4A8: sh          $t9, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = ctx->r25;
    func_802AE810(rdram, ctx);
        goto after_7;
    // 0x802AF4A8: sh          $t9, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = ctx->r25;
    after_7:
    // 0x802AF4AC: jal         0x802AE59C
    // 0x802AF4B0: nop

    func_802AE59C(rdram, ctx);
        goto after_8;
    // 0x802AF4B0: nop

    after_8:
    // 0x802AF4B4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x802AF4B8: jal         0x802AE690
    // 0x802AF4BC: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    func_802AE690(rdram, ctx);
        goto after_9;
    // 0x802AF4BC: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    after_9:
    // 0x802AF4C0: lh          $a0, 0x70($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X70);
    // 0x802AF4C4: jal         0x802AE4A4
    // 0x802AF4C8: nop

    func_802AE4A4(rdram, ctx);
        goto after_10;
    // 0x802AF4C8: nop

    after_10:
    // 0x802AF4CC: beq         $v0, $zero, L_802AF544
    if (ctx->r2 == 0) {
        // 0x802AF4D0: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802AF544;
    }
    // 0x802AF4D0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF4D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AF4D8: sh          $zero, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = 0;
    // 0x802AF4DC: b           L_802AF544
    // 0x802AF4E0: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
        goto L_802AF544;
    // 0x802AF4E0: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
L_802AF4E4:
    // 0x802AF4E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AF4E8: bne         $v1, $at, L_802AF544
    if (ctx->r3 != ctx->r1) {
        // 0x802AF4EC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_802AF544;
    }
    // 0x802AF4EC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802AF4F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF4F4: jal         0x802AE810
    // 0x802AF4F8: sh          $t1, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = ctx->r9;
    func_802AE810(rdram, ctx);
        goto after_11;
    // 0x802AF4F8: sh          $t1, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = ctx->r9;
    after_11:
    // 0x802AF4FC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x802AF500: lh          $a0, 0x70($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X70);
    // 0x802AF504: jal         0x802AE4A4
    // 0x802AF508: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    func_802AE4A4(rdram, ctx);
        goto after_12;
    // 0x802AF508: sw          $t2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r10;
    after_12:
    // 0x802AF50C: beq         $v0, $zero, L_802AF534
    if (ctx->r2 == 0) {
        // 0x802AF510: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802AF534;
    }
    // 0x802AF510: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF514: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AF518: sh          $zero, 0x543A($at)
    MEM_H(0X543A, ctx->r1) = 0;
    // 0x802AF51C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x802AF520: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x802AF524: jal         0x802AE690
    // 0x802AF528: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    func_802AE690(rdram, ctx);
        goto after_13;
    // 0x802AF528: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
    after_13:
    // 0x802AF52C: b           L_802AF548
    // 0x802AF530: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
        goto L_802AF548;
    // 0x802AF530: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_802AF534:
    // 0x802AF534: jal         0x802AE4E8
    // 0x802AF538: nop

    func_802AE4E8(rdram, ctx);
        goto after_14;
    // 0x802AF538: nop

    after_14:
    // 0x802AF53C: jal         0x802AE750
    // 0x802AF540: nop

    func_802AE750(rdram, ctx);
        goto after_15;
    // 0x802AF540: nop

    after_15:
L_802AF544:
    // 0x802AF544: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
L_802AF548:
    // 0x802AF548: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AF54C: beq         $v0, $at, L_802AF564
    if (ctx->r2 == ctx->r1) {
        // 0x802AF550: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802AF564;
    }
    // 0x802AF550: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802AF554: beq         $v0, $at, L_802AF564
    if (ctx->r2 == ctx->r1) {
        // 0x802AF558: nop
    
            goto L_802AF564;
    }
    // 0x802AF558: nop

    // 0x802AF55C: jal         0x802AE8A0
    // 0x802AF560: nop

    func_802AE8A0(rdram, ctx);
        goto after_16;
    // 0x802AF560: nop

    after_16:
L_802AF564:
    // 0x802AF564: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802AF568: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802AF56C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF570: lwc1        $f8, 0x44($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X44);
    // 0x802AF574: lwc1        $f19, 0x1678($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1678);
    // 0x802AF578: lwc1        $f18, 0x167C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X167C);
    // 0x802AF57C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802AF580: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x802AF584: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802AF588: bc1f        L_802AFABC
    if (!c1cs) {
        // 0x802AF58C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802AFABC;
    }
    // 0x802AF58C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AF590: lw          $t4, 0x50A8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X50A8);
    // 0x802AF594: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802AF598: sw          $zero, 0x68($t4)
    MEM_W(0X68, ctx->r12) = 0;
    // 0x802AF59C: lw          $v0, 0x50A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50A8);
    // 0x802AF5A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AF5A4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802AF5A8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AF5AC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x802AF5B0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802AF5B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802AF5B8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x802AF5BC: lhu         $t8, 0x2($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2);
    // 0x802AF5C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AF5C4: andi        $t9, $t8, 0x1FFF
    ctx->r25 = ctx->r24 & 0X1FFF;
    // 0x802AF5C8: sh          $t9, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r25;
    // 0x802AF5CC: swc1        $f16, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f16.u32l;
    // 0x802AF5D0: swc1        $f4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f4.u32l;
    // 0x802AF5D4: lw          $t0, 0x5408($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5408);
    // 0x802AF5D8: nop

    // 0x802AF5DC: beq         $t0, $zero, L_802AF634
    if (ctx->r8 == 0) {
        // 0x802AF5E0: nop
    
            goto L_802AF634;
    }
    // 0x802AF5E0: nop

    // 0x802AF5E4: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802AF5E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802AF5EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AF5F0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802AF5F4: addiu       $a1, $zero, 0x22A
    ctx->r5 = ADD32(0, 0X22A);
    // 0x802AF5F8: bc1f        L_802AF618
    if (!c1cs) {
        // 0x802AF5FC: nop
    
            goto L_802AF618;
    }
    // 0x802AF5FC: nop

    // 0x802AF600: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF604: jal         0x80272D3C
    // 0x802AF608: addiu       $a1, $zero, 0x229
    ctx->r5 = ADD32(0, 0X229);
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_17;
    // 0x802AF608: addiu       $a1, $zero, 0x229
    ctx->r5 = ADD32(0, 0X229);
    after_17:
    // 0x802AF60C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF610: b           L_802AF680
    // 0x802AF614: sh          $zero, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = 0;
        goto L_802AF680;
    // 0x802AF614: sh          $zero, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = 0;
L_802AF618:
    // 0x802AF618: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF61C: jal         0x80272D3C
    // 0x802AF620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_18;
    // 0x802AF620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x802AF624: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802AF628: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF62C: b           L_802AF680
    // 0x802AF630: sh          $t1, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = ctx->r9;
        goto L_802AF680;
    // 0x802AF630: sh          $t1, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = ctx->r9;
L_802AF634:
    // 0x802AF634: lwc1        $f10, 0x1C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802AF638: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802AF63C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AF640: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x802AF644: addiu       $a1, $zero, 0x229
    ctx->r5 = ADD32(0, 0X229);
    // 0x802AF648: bc1f        L_802AF66C
    if (!c1cs) {
        // 0x802AF64C: nop
    
            goto L_802AF66C;
    }
    // 0x802AF64C: nop

    // 0x802AF650: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF654: jal         0x80272D3C
    // 0x802AF658: addiu       $a1, $zero, 0x22A
    ctx->r5 = ADD32(0, 0X22A);
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_19;
    // 0x802AF658: addiu       $a1, $zero, 0x22A
    ctx->r5 = ADD32(0, 0X22A);
    after_19:
    // 0x802AF65C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802AF660: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF664: b           L_802AF680
    // 0x802AF668: sh          $t2, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = ctx->r10;
        goto L_802AF680;
    // 0x802AF668: sh          $t2, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = ctx->r10;
L_802AF66C:
    // 0x802AF66C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF670: jal         0x80272D3C
    // 0x802AF674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_20;
    // 0x802AF674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x802AF678: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF67C: sh          $zero, 0x5442($at)
    MEM_H(0X5442, ctx->r1) = 0;
L_802AF680:
    // 0x802AF680: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x802AF684: b           L_802AFABC
    // 0x802AF688: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
        goto L_802AFABC;
    // 0x802AF688: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
L_802AF68C:
    // 0x802AF68C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AF690: sh          $t4, 0x72($s0)
    MEM_H(0X72, ctx->r16) = ctx->r12;
    // 0x802AF694: jal         0x802AECCC
    // 0x802AF698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_802AECCC(rdram, ctx);
        goto after_21;
    // 0x802AF698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_21:
    // 0x802AF69C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF6A0: lwc1        $f16, 0x568C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X568C);
    // 0x802AF6A4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AF6A8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802AF6AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802AF6B0: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x802AF6B4: c.le.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d <= ctx->f0.d;
    // 0x802AF6B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x802AF6BC: bc1t        L_802AF6F0
    if (c1cs) {
        // 0x802AF6C0: lui         $t5, 0x802C
        ctx->r13 = S32(0X802C << 16);
            goto L_802AF6F0;
    }
    // 0x802AF6C0: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802AF6C4: lw          $t5, 0x540C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X540C);
    // 0x802AF6C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF6CC: bne         $t5, $zero, L_802AFAC0
    if (ctx->r13 != 0) {
        // 0x802AF6D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AFAC0;
    }
    // 0x802AF6D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AF6D4: lwc1        $f7, 0x1680($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1680);
    // 0x802AF6D8: lwc1        $f6, 0x1684($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1684);
    // 0x802AF6DC: nop

    // 0x802AF6E0: c.le.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d <= ctx->f0.d;
    // 0x802AF6E4: nop

    // 0x802AF6E8: bc1f        L_802AFAC0
    if (!c1cs) {
        // 0x802AF6EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AFAC0;
    }
    // 0x802AF6EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AF6F0:
    // 0x802AF6F0: lhu         $t8, 0x2($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X2);
    // 0x802AF6F4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AF6F8: andi        $t9, $t8, 0x9FFF
    ctx->r25 = ctx->r24 & 0X9FFF;
    // 0x802AF6FC: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x802AF700: lh          $t7, 0x70($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X70);
    // 0x802AF704: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF708: sll         $t0, $t7, 3
    ctx->r8 = S32(ctx->r15 << 3);
    // 0x802AF70C: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x802AF710: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x802AF714: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x802AF718: lhu         $a1, -0x1DF2($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DF2);
    // 0x802AF71C: jal         0x80272D3C
    // 0x802AF720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_22;
    // 0x802AF720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x802AF724: jal         0x802AEFDC
    // 0x802AF728: nop

    func_802AEFDC(rdram, ctx);
        goto after_23;
    // 0x802AF728: nop

    after_23:
    // 0x802AF72C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF730: sh          $zero, 0x5274($at)
    MEM_H(0X5274, ctx->r1) = 0;
    // 0x802AF734: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x802AF738: jal         0x802A68F8
    // 0x802AF73C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    func_802A68F8(rdram, ctx);
        goto after_24;
    // 0x802AF73C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
    after_24:
    // 0x802AF740: b           L_802AFAC0
    // 0x802AF744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AFAC0;
    // 0x802AF744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AF748:
    // 0x802AF748: jal         0x802AEE54
    // 0x802AF74C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_802AEE54(rdram, ctx);
        goto after_25;
    // 0x802AF74C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_25:
    // 0x802AF750: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF754: lwc1        $f8, 0x568C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X568C);
    // 0x802AF758: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AF75C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802AF760: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AF764: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x802AF768: c.le.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d <= ctx->f0.d;
    // 0x802AF76C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802AF770: bc1t        L_802AF7A4
    if (c1cs) {
        // 0x802AF774: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_802AF7A4;
    }
    // 0x802AF774: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AF778: lw          $t2, 0x540C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X540C);
    // 0x802AF77C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF780: bne         $t2, $zero, L_802AFAC0
    if (ctx->r10 != 0) {
        // 0x802AF784: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AFAC0;
    }
    // 0x802AF784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AF788: lwc1        $f19, 0x1688($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1688);
    // 0x802AF78C: lwc1        $f18, 0x168C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X168C);
    // 0x802AF790: nop

    // 0x802AF794: c.le.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d <= ctx->f0.d;
    // 0x802AF798: nop

    // 0x802AF79C: bc1f        L_802AFAC0
    if (!c1cs) {
        // 0x802AF7A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AFAC0;
    }
    // 0x802AF7A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AF7A4:
    // 0x802AF7A4: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x802AF7A8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AF7AC: andi        $t4, $t3, 0x9FFF
    ctx->r12 = ctx->r11 & 0X9FFF;
    // 0x802AF7B0: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
    // 0x802AF7B4: lh          $t5, 0x70($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X70);
    // 0x802AF7B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF7BC: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x802AF7C0: subu        $t8, $t8, $t5
    ctx->r24 = SUB32(ctx->r24, ctx->r13);
    // 0x802AF7C4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x802AF7C8: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x802AF7CC: lhu         $a1, -0x1D72($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1D72);
    // 0x802AF7D0: jal         0x80272D3C
    // 0x802AF7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_26;
    // 0x802AF7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x802AF7D8: jal         0x802AEFDC
    // 0x802AF7DC: nop

    func_802AEFDC(rdram, ctx);
        goto after_27;
    // 0x802AF7DC: nop

    after_27:
    // 0x802AF7E0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802AF7E4: b           L_802AFABC
    // 0x802AF7E8: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
        goto L_802AFABC;
    // 0x802AF7E8: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
L_802AF7EC:
    // 0x802AF7EC: lh          $t6, 0x70($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X70);
    // 0x802AF7F0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802AF7F4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x802AF7F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802AF7FC: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x802AF800: addiu       $t0, $t0, -0x1D78
    ctx->r8 = ADD32(ctx->r8, -0X1D78);
    // 0x802AF804: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x802AF808: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802AF80C: lh          $t1, 0x4($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X4);
    // 0x802AF810: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AF814: subu        $t2, $t1, $v1
    ctx->r10 = SUB32(ctx->r9, ctx->r3);
    // 0x802AF818: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802AF81C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802AF820: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802AF824: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AF828: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802AF82C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802AF830: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802AF834: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x802AF838: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802AF83C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AF840: nop

    // 0x802AF844: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802AF848: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AF84C: nop

    // 0x802AF850: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AF854: beq         $t4, $zero, L_802AF8A0
    if (ctx->r12 == 0) {
        // 0x802AF858: nop
    
            goto L_802AF8A0;
    }
    // 0x802AF858: nop

    // 0x802AF85C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AF860: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802AF864: sub.s       $f4, $f16, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x802AF868: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AF86C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802AF870: nop

    // 0x802AF874: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802AF878: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802AF87C: nop

    // 0x802AF880: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x802AF884: bne         $t4, $zero, L_802AF898
    if (ctx->r12 != 0) {
        // 0x802AF888: nop
    
            goto L_802AF898;
    }
    // 0x802AF888: nop

    // 0x802AF88C: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x802AF890: b           L_802AF8B0
    // 0x802AF894: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_802AF8B0;
    // 0x802AF894: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_802AF898:
    // 0x802AF898: b           L_802AF8B0
    // 0x802AF89C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_802AF8B0;
    // 0x802AF89C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_802AF8A0:
    // 0x802AF8A0: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x802AF8A4: nop

    // 0x802AF8A8: bltz        $t4, L_802AF898
    if (SIGNED(ctx->r12) < 0) {
        // 0x802AF8AC: nop
    
            goto L_802AF898;
    }
    // 0x802AF8AC: nop

L_802AF8B0:
    // 0x802AF8B0: sh          $t4, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r12;
    // 0x802AF8B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AF8B8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802AF8BC: lwc1        $f6, 0x6C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AF8C0: lwc1        $f19, 0x1690($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1690);
    // 0x802AF8C4: lwc1        $f18, 0x1694($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1694);
    // 0x802AF8C8: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x802AF8CC: add.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f10.d + ctx->f18.d;
    // 0x802AF8D0: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x802AF8D4: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x802AF8D8: lwc1        $f2, 0x64($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X64);
    // 0x802AF8DC: swc1        $f16, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f16.u32l;
    // 0x802AF8E0: lwc1        $f0, 0x6C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AF8E4: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x802AF8E8: lwc1        $f8, 0x58($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X58);
    // 0x802AF8EC: lwc1        $f12, 0x68($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X68);
    // 0x802AF8F0: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802AF8F4: sub.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x802AF8F8: lh          $a0, 0x70($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X70);
    // 0x802AF8FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802AF900: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802AF904: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802AF908: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
    // 0x802AF90C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802AF910: jal         0x802AE4A4
    // 0x802AF914: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    func_802AE4A4(rdram, ctx);
        goto after_28;
    // 0x802AF914: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    after_28:
    // 0x802AF918: bne         $v0, $zero, L_802AF994
    if (ctx->r2 != 0) {
        // 0x802AF91C: nop
    
            goto L_802AF994;
    }
    // 0x802AF91C: nop

    // 0x802AF920: lwc1        $f12, 0x6C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AF924: jal         0x802AE650
    // 0x802AF928: nop

    func_802AE650(rdram, ctx);
        goto after_29;
    // 0x802AF928: nop

    after_29:
    // 0x802AF92C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802AF930: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x802AF934: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802AF938: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802AF93C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802AF940: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AF944: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802AF948: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x802AF94C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802AF950: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802AF954: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802AF958: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x802AF95C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802AF960: cvt.d.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.d = CVT_D_W(ctx->f18.u32l);
    // 0x802AF964: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802AF968: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x802AF96C: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x802AF970: nop

    // 0x802AF974: bc1f        L_802AF980
    if (!c1cs) {
        // 0x802AF978: nop
    
            goto L_802AF980;
    }
    // 0x802AF978: nop

    // 0x802AF97C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802AF980:
    // 0x802AF980: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x802AF984: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802AF988: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AF98C: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802AF990: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
L_802AF994:
    // 0x802AF994: lwc1        $f8, 0x6C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x802AF998: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802AF99C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802AF9A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802AF9A4: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x802AF9A8: c.le.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d <= ctx->f16.d;
    // 0x802AF9AC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x802AF9B0: bc1f        L_802AFABC
    if (!c1cs) {
        // 0x802AF9B4: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_802AFABC;
    }
    // 0x802AF9B4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x802AF9B8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x802AF9BC: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x802AF9C0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802AF9C4: andi        $t1, $t0, 0x9FFF
    ctx->r9 = ctx->r8 & 0X9FFF;
    // 0x802AF9C8: sh          $t1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r9;
    // 0x802AF9CC: lh          $t2, 0x70($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X70);
    // 0x802AF9D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802AF9D4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x802AF9D8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x802AF9DC: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x802AF9E0: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x802AF9E4: lhu         $a1, -0x1D72($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1D72);
    // 0x802AF9E8: jal         0x80272D3C
    // 0x802AF9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_30;
    // 0x802AF9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x802AF9F0: jal         0x802AEFDC
    // 0x802AF9F4: nop

    func_802AEFDC(rdram, ctx);
        goto after_31;
    // 0x802AF9F4: nop

    after_31:
    // 0x802AF9F8: b           L_802AFAC0
    // 0x802AF9FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AFAC0;
    // 0x802AF9FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AFA00:
    // 0x802AFA00: jal         0x802AEB48
    // 0x802AFA04: nop

    func_802AEB48(rdram, ctx);
        goto after_32;
    // 0x802AFA04: nop

    after_32:
    // 0x802AFA08: b           L_802AFAC0
    // 0x802AFA0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AFAC0;
    // 0x802AFA0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AFA10:
    // 0x802AFA10: jal         0x802AEB48
    // 0x802AFA14: nop

    func_802AEB48(rdram, ctx);
        goto after_33;
    // 0x802AFA14: nop

    after_33:
    // 0x802AFA18: b           L_802AFAC0
    // 0x802AFA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802AFAC0;
    // 0x802AFA1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AFA20:
    // 0x802AFA20: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x802AFA24: bne         $v1, $at, L_802AFABC
    if (ctx->r3 != ctx->r1) {
        // 0x802AFA28: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_802AFABC;
    }
    // 0x802AFA28: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AFA2C: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802AFA30: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x802AFA34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AFA38: beq         $v0, $at, L_802AFA48
    if (ctx->r2 == ctx->r1) {
        // 0x802AFA3C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802AFA48;
    }
    // 0x802AFA3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AFA40: bne         $v0, $at, L_802AFAC0
    if (ctx->r2 != ctx->r1) {
        // 0x802AFA44: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802AFAC0;
    }
    // 0x802AFA44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AFA48:
    // 0x802AFA48: lh          $t4, 0x4A($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4A);
    // 0x802AFA4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AFA50: bne         $t4, $at, L_802AFA6C
    if (ctx->r12 != ctx->r1) {
        // 0x802AFA54: addiu       $a1, $zero, 0x239
        ctx->r5 = ADD32(0, 0X239);
            goto L_802AFA6C;
    }
    // 0x802AFA54: addiu       $a1, $zero, 0x239
    ctx->r5 = ADD32(0, 0X239);
    // 0x802AFA58: addiu       $a1, $zero, 0x23A
    ctx->r5 = ADD32(0, 0X23A);
    // 0x802AFA5C: jal         0x80272D3C
    // 0x802AFA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_34;
    // 0x802AFA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_34:
    // 0x802AFA64: b           L_802AFA78
    // 0x802AFA68: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
        goto L_802AFA78;
    // 0x802AFA68: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
L_802AFA6C:
    // 0x802AFA6C: jal         0x80272D3C
    // 0x802AFA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_35;
    // 0x802AFA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x802AFA74: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
L_802AFA78:
    // 0x802AFA78: b           L_802AFABC
    // 0x802AFA7C: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
        goto L_802AFABC;
    // 0x802AFA7C: sw          $t5, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r13;
L_802AFA80:
    // 0x802AFA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802AFA84: bne         $v1, $v0, L_802AFABC
    if (ctx->r3 != ctx->r2) {
        // 0x802AFA88: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_802AFABC;
    }
    // 0x802AFA88: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802AFA8C: lw          $t8, 0x56A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X56A4);
    // 0x802AFA90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802AFA94: bne         $v0, $t8, L_802AFAAC
    if (ctx->r2 != ctx->r24) {
        // 0x802AFA98: addiu       $a1, $zero, 0x223
        ctx->r5 = ADD32(0, 0X223);
            goto L_802AFAAC;
    }
    // 0x802AFA98: addiu       $a1, $zero, 0x223
    ctx->r5 = ADD32(0, 0X223);
    // 0x802AFA9C: jal         0x80272D3C
    // 0x802AFAA0: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_36;
    // 0x802AFAA0: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
    after_36:
    // 0x802AFAA4: b           L_802AFAB8
    // 0x802AFAA8: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
        goto L_802AFAB8;
    // 0x802AFAA8: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
L_802AFAAC:
    // 0x802AFAAC: jal         0x80272D3C
    // 0x802AFAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_37;
    // 0x802AFAB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_37:
    // 0x802AFAB4: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
L_802AFAB8:
    // 0x802AFAB8: sw          $t9, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r25;
L_802AFABC:
    // 0x802AFABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802AFAC0:
    // 0x802AFAC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AFAC4: jr          $ra
    // 0x802AFAC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802AFAC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802AFACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AFAD0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802AFAD4: lw          $v1, 0x55C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55C0);
    // 0x802AFAD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802AFADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802AFAE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x802AFAE4: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x802AFAE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802AFAEC: bne         $v1, $at, L_802AFB18
    if (ctx->r3 != ctx->r1) {
        // 0x802AFAF0: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_802AFB18;
    }
    // 0x802AFAF0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802AFAF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFAF8: lh          $v0, 0x50D2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X50D2);
    // 0x802AFAFC: nop

    // 0x802AFB00: addu        $t6, $v0, $v0
    ctx->r14 = ADD32(ctx->r2, ctx->r2);
    // 0x802AFB04: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802AFB08: nop

    // 0x802AFB0C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802AFB10: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x802AFB14: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
L_802AFB18:
    // 0x802AFB18: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802AFB1C: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802AFB20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AFB24: bne         $v1, $at, L_802AFB48
    if (ctx->r3 != ctx->r1) {
        // 0x802AFB28: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802AFB48;
    }
    // 0x802AFB28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFB2C: lh          $v0, 0x50D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X50D0);
    // 0x802AFB30: nop

    // 0x802AFB34: addu        $t7, $v0, $v0
    ctx->r15 = ADD32(ctx->r2, ctx->r2);
    // 0x802AFB38: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802AFB3C: nop

    // 0x802AFB40: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AFB44: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802AFB48:
    // 0x802AFB48: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x802AFB4C: jal         0x80087D40
    // 0x802AFB50: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802AFB50: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x802AFB54: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x802AFB58: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x802AFB5C: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802AFB60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802AFB64: mfhi        $t8
    ctx->r24 = hi;
    // 0x802AFB68: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x802AFB6C: bgez        $t8, L_802AFB80
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802AFB70: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802AFB80;
    }
    // 0x802AFB70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802AFB74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AFB78: nop

    // 0x802AFB7C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_802AFB80:
    // 0x802AFB80: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802AFB84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AFB88: lwc1        $f7, 0x1698($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1698);
    // 0x802AFB8C: lwc1        $f6, 0x169C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X169C);
    // 0x802AFB90: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802AFB94: nop

    // 0x802AFB98: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x802AFB9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AFBA0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802AFBA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802AFBA8: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x802AFBAC: mul.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f10.d);
    // 0x802AFBB0: sub.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f8.d - ctx->f18.d;
    // 0x802AFBB4: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x802AFBB8: jal         0x80087D40
    // 0x802AFBBC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_80087D40(rdram, ctx);
        goto after_1;
    // 0x802AFBBC: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x802AFBC0: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x802AFBC4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x802AFBC8: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802AFBCC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802AFBD0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802AFBD4: mfhi        $t9
    ctx->r25 = hi;
    // 0x802AFBD8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802AFBDC: bgez        $t9, L_802AFBF0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802AFBE0: cvt.s.w     $f16, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
            goto L_802AFBF0;
    }
    // 0x802AFBE0: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802AFBE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AFBE8: nop

    // 0x802AFBEC: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
L_802AFBF0:
    // 0x802AFBF0: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802AFBF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802AFBF8: lwc1        $f5, 0x16A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X16A0);
    // 0x802AFBFC: lwc1        $f4, 0x16A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X16A4);
    // 0x802AFC00: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x802AFC04: nop

    // 0x802AFC08: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x802AFC0C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802AFC10: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802AFC14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802AFC18: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x802AFC1C: mul.d       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x802AFC20: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802AFC24: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x802AFC28: add.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802AFC2C: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x802AFC30: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802AFC34: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x802AFC38: sub.d       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f6.d - ctx->f8.d;
    // 0x802AFC3C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x802AFC40: add.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x802AFC44: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x802AFC48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802AFC4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802AFC50: jr          $ra
    // 0x802AFC54: nop

    return;
    // 0x802AFC54: nop

;}
RECOMP_FUNC void func_802AFC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFC58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802AFC5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AFC60: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802AFC64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802AFC68: sub.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x802AFC6C: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x802AFC70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802AFC74: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x802AFC78: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802AFC7C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802AFC80: lui         $at, 0x42AC
    ctx->r1 = S32(0X42AC << 16);
    // 0x802AFC84: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802AFC88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802AFC8C: div.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x802AFC90: nop

    // 0x802AFC94: div.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802AFC98: swc1        $f12, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f12.u32l;
    // 0x802AFC9C: jr          $ra
    // 0x802AFCA0: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
    return;
    // 0x802AFCA0: swc1        $f14, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f14.u32l;
;}
RECOMP_FUNC void func_802AFCA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFCA4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802AFCA8: lbu         $t6, 0x5426($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5426);
    // 0x802AFCAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802AFCB0: bne         $t6, $zero, L_802AFCC0
    if (ctx->r14 != 0) {
        // 0x802AFCB4: nop
    
            goto L_802AFCC0;
    }
    // 0x802AFCB4: nop

    // 0x802AFCB8: jr          $ra
    // 0x802AFCBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802AFCBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AFCC0:
    // 0x802AFCC0: jr          $ra
    // 0x802AFCC4: nop

    return;
    // 0x802AFCC4: nop

;}
RECOMP_FUNC void func_802AFCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFCC8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFCCC: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802AFCD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802AFCD4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802AFCD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802AFCDC: beq         $v0, $at, L_802AFCF8
    if (ctx->r2 == ctx->r1) {
        // 0x802AFCE0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_802AFCF8;
    }
    // 0x802AFCE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802AFCE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802AFCE8: beq         $v0, $at, L_802AFDFC
    if (ctx->r2 == ctx->r1) {
        // 0x802AFCEC: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_802AFDFC;
    }
    // 0x802AFCEC: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802AFCF0: b           L_802AFEA0
    // 0x802AFCF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802AFEA0;
    // 0x802AFCF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AFCF8:
    // 0x802AFCF8: jal         0x802AB074
    // 0x802AFCFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_0;
    // 0x802AFCFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802AFD00: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFD04: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFD08: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x802AFD0C: jal         0x802AB168
    // 0x802AFD10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_1;
    // 0x802AFD10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x802AFD14: beq         $s0, $v0, L_802AFEA0
    if (ctx->r16 == ctx->r2) {
        // 0x802AFD18: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFD18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFD1C: jal         0x802AB074
    // 0x802AFD20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_2;
    // 0x802AFD20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802AFD24: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFD28: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFD2C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x802AFD30: jal         0x802AB168
    // 0x802AFD34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_3;
    // 0x802AFD34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802AFD38: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802AFD3C: beq         $at, $zero, L_802AFD8C
    if (ctx->r1 == 0) {
        // 0x802AFD40: nop
    
            goto L_802AFD8C;
    }
    // 0x802AFD40: nop

    // 0x802AFD44: jal         0x802AB074
    // 0x802AFD48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB074(rdram, ctx);
        goto after_4;
    // 0x802AFD48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x802AFD4C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFD50: sra         $t9, $s0, 16
    ctx->r25 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFD54: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x802AFD58: jal         0x802AB168
    // 0x802AFD5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_5;
    // 0x802AFD5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802AFD60: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802AFD64: beq         $at, $zero, L_802AFEA0
    if (ctx->r1 == 0) {
        // 0x802AFD68: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFD6C: jal         0x802AFCA4
    // 0x802AFD70: nop

    func_802AFCA4(rdram, ctx);
        goto after_6;
    // 0x802AFD70: nop

    after_6:
    // 0x802AFD74: bne         $v0, $zero, L_802AFD84
    if (ctx->r2 != 0) {
        // 0x802AFD78: nop
    
            goto L_802AFD84;
    }
    // 0x802AFD78: nop

    // 0x802AFD7C: b           L_802AFEA0
    // 0x802AFD80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802AFEA0;
    // 0x802AFD80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802AFD84:
    // 0x802AFD84: b           L_802AFEA0
    // 0x802AFD88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802AFEA0;
    // 0x802AFD88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802AFD8C:
    // 0x802AFD8C: jal         0x802AB168
    // 0x802AFD90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_7;
    // 0x802AFD90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802AFD94: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFD98: sra         $t0, $s0, 16
    ctx->r8 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFD9C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x802AFDA0: jal         0x802AB074
    // 0x802AFDA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_8;
    // 0x802AFDA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x802AFDA8: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802AFDAC: beq         $at, $zero, L_802AFEA0
    if (ctx->r1 == 0) {
        // 0x802AFDB0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFDB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFDB4: jal         0x802AB168
    // 0x802AFDB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB168(rdram, ctx);
        goto after_9;
    // 0x802AFDB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x802AFDBC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFDC0: sra         $t1, $s0, 16
    ctx->r9 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFDC4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x802AFDC8: jal         0x802AB074
    // 0x802AFDCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_10;
    // 0x802AFDCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x802AFDD0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802AFDD4: beq         $at, $zero, L_802AFEA0
    if (ctx->r1 == 0) {
        // 0x802AFDD8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFDD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFDDC: jal         0x802AFCA4
    // 0x802AFDE0: nop

    func_802AFCA4(rdram, ctx);
        goto after_11;
    // 0x802AFDE0: nop

    after_11:
    // 0x802AFDE4: bne         $v0, $zero, L_802AFDF4
    if (ctx->r2 != 0) {
        // 0x802AFDE8: nop
    
            goto L_802AFDF4;
    }
    // 0x802AFDE8: nop

    // 0x802AFDEC: b           L_802AFEA0
    // 0x802AFDF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802AFEA0;
    // 0x802AFDF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802AFDF4:
    // 0x802AFDF4: b           L_802AFEA0
    // 0x802AFDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802AFEA0;
    // 0x802AFDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802AFDFC:
    // 0x802AFDFC: lh          $t2, 0x5438($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X5438);
    // 0x802AFE00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802AFE04: bne         $t2, $at, L_802AFEA0
    if (ctx->r10 != ctx->r1) {
        // 0x802AFE08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFE08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFE0C: jal         0x802AB168
    // 0x802AFE10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_12;
    // 0x802AFE10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x802AFE14: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFE18: sra         $t3, $s0, 16
    ctx->r11 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFE1C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x802AFE20: jal         0x802AB074
    // 0x802AFE24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_13;
    // 0x802AFE24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x802AFE28: slt         $at, $v0, $s0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802AFE2C: beq         $at, $zero, L_802AFE54
    if (ctx->r1 == 0) {
        // 0x802AFE30: nop
    
            goto L_802AFE54;
    }
    // 0x802AFE30: nop

    // 0x802AFE34: jal         0x802AFCA4
    // 0x802AFE38: nop

    func_802AFCA4(rdram, ctx);
        goto after_14;
    // 0x802AFE38: nop

    after_14:
    // 0x802AFE3C: bne         $v0, $zero, L_802AFE4C
    if (ctx->r2 != 0) {
        // 0x802AFE40: nop
    
            goto L_802AFE4C;
    }
    // 0x802AFE40: nop

    // 0x802AFE44: b           L_802AFEA0
    // 0x802AFE48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802AFEA0;
    // 0x802AFE48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802AFE4C:
    // 0x802AFE4C: b           L_802AFEA0
    // 0x802AFE50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802AFEA0;
    // 0x802AFE50: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802AFE54:
    // 0x802AFE54: jal         0x802AB168
    // 0x802AFE58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB168(rdram, ctx);
        goto after_15;
    // 0x802AFE58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x802AFE5C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x802AFE60: sra         $t4, $s0, 16
    ctx->r12 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802AFE64: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x802AFE68: jal         0x802AB074
    // 0x802AFE6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB074(rdram, ctx);
        goto after_16;
    // 0x802AFE6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x802AFE70: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802AFE74: beq         $at, $zero, L_802AFEA0
    if (ctx->r1 == 0) {
        // 0x802AFE78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802AFEA0;
    }
    // 0x802AFE78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802AFE7C: jal         0x802AFCA4
    // 0x802AFE80: nop

    func_802AFCA4(rdram, ctx);
        goto after_17;
    // 0x802AFE80: nop

    after_17:
    // 0x802AFE84: bne         $v0, $zero, L_802AFE94
    if (ctx->r2 != 0) {
        // 0x802AFE88: nop
    
            goto L_802AFE94;
    }
    // 0x802AFE88: nop

    // 0x802AFE8C: b           L_802AFEA0
    // 0x802AFE90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802AFEA0;
    // 0x802AFE90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802AFE94:
    // 0x802AFE94: b           L_802AFEA0
    // 0x802AFE98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802AFEA0;
    // 0x802AFE98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802AFE9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802AFEA0:
    // 0x802AFEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802AFEA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802AFEA8: jr          $ra
    // 0x802AFEAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802AFEAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802AFEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFEB0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFEB4: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802AFEB8: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x802AFEBC: nop

    // 0x802AFEC0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x802AFEC4: lh          $t7, 0xE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE);
    // 0x802AFEC8: jr          $ra
    // 0x802AFECC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    return;
    // 0x802AFECC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_802AFED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFED0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AFED4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802AFED8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AFEDC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802AFEE0: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AFEE4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802AFEE8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802AFEEC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802AFEF0: addiu       $s0, $s0, -0x15A4
    ctx->r16 = ADD32(ctx->r16, -0X15A4);
    // 0x802AFEF4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802AFEF8: jal         0x802AFEB0
    // 0x802AFEFC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_802AFEB0(rdram, ctx);
        goto after_0;
    // 0x802AFEFC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x802AFF00: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFF04: lh          $v0, -0x15A4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X15A4);
    // 0x802AFF08: addiu       $s1, $zero, -0x2
    ctx->r17 = ADD32(0, -0X2);
    // 0x802AFF0C: beq         $v0, $s1, L_802AFFAC
    if (ctx->r2 == ctx->r17) {
        // 0x802AFF10: addiu       $s3, $zero, 0x3E8
        ctx->r19 = ADD32(0, 0X3E8);
            goto L_802AFFAC;
    }
    // 0x802AFF10: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
    // 0x802AFF14: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_802AFF18:
    // 0x802AFF18: beq         $v0, $s2, L_802AFF40
    if (ctx->r2 == ctx->r18) {
        // 0x802AFF1C: nop
    
            goto L_802AFF40;
    }
    // 0x802AFF1C: nop

    // 0x802AFF20: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x802AFF24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802AFF28: bne         $v0, $t6, L_802AFF9C
    if (ctx->r2 != ctx->r14) {
        // 0x802AFF2C: nop
    
            goto L_802AFF9C;
    }
    // 0x802AFF2C: nop

    // 0x802AFF30: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x802AFF34: nop

    // 0x802AFF38: bne         $t7, $t8, L_802AFF9C
    if (ctx->r15 != ctx->r24) {
        // 0x802AFF3C: nop
    
            goto L_802AFF9C;
    }
    // 0x802AFF3C: nop

L_802AFF40:
    // 0x802AFF40: jal         0x80087D40
    // 0x802AFF44: nop

    func_80087D40(rdram, ctx);
        goto after_1;
    // 0x802AFF44: nop

    after_1:
    // 0x802AFF48: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x802AFF4C: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x802AFF50: bne         $s3, $zero, L_802AFF5C
    if (ctx->r19 != 0) {
        // 0x802AFF54: nop
    
            goto L_802AFF5C;
    }
    // 0x802AFF54: nop

    // 0x802AFF58: break       7
    do_break(2150301528);
L_802AFF5C:
    // 0x802AFF5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802AFF60: bne         $s3, $at, L_802AFF74
    if (ctx->r19 != ctx->r1) {
        // 0x802AFF64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802AFF74;
    }
    // 0x802AFF64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802AFF68: bne         $v0, $at, L_802AFF74
    if (ctx->r2 != ctx->r1) {
        // 0x802AFF6C: nop
    
            goto L_802AFF74;
    }
    // 0x802AFF6C: nop

    // 0x802AFF70: break       6
    do_break(2150301552);
L_802AFF74:
    // 0x802AFF74: mfhi        $t9
    ctx->r25 = hi;
    // 0x802AFF78: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802AFF7C: beq         $at, $zero, L_802AFF9C
    if (ctx->r1 == 0) {
        // 0x802AFF80: nop
    
            goto L_802AFF9C;
    }
    // 0x802AFF80: nop

    // 0x802AFF84: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802AFF88: lhu         $a1, 0x4($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4);
    // 0x802AFF8C: jal         0x80272D3C
    // 0x802AFF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x802AFF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802AFF94: b           L_802AFFB0
    // 0x802AFF98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802AFFB0;
    // 0x802AFF98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AFF9C:
    // 0x802AFF9C: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x802AFFA0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802AFFA4: bne         $v0, $s1, L_802AFF18
    if (ctx->r2 != ctx->r17) {
        // 0x802AFFA8: nop
    
            goto L_802AFF18;
    }
    // 0x802AFFA8: nop

L_802AFFAC:
    // 0x802AFFAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802AFFB0:
    // 0x802AFFB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802AFFB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802AFFB8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802AFFBC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802AFFC0: jr          $ra
    // 0x802AFFC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802AFFC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802AFFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802AFFC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802AFFCC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802AFFD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802AFFD4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802AFFD8: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802AFFDC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802AFFE0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802AFFE4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802AFFE8: addiu       $s0, $s0, -0x15D4
    ctx->r16 = ADD32(ctx->r16, -0X15D4);
    // 0x802AFFEC: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802AFFF0: jal         0x802AFEB0
    // 0x802AFFF4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_802AFEB0(rdram, ctx);
        goto after_0;
    // 0x802AFFF4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x802AFFF8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802AFFFC: lh          $v0, -0x15D4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X15D4);
    // 0x802B0000: addiu       $s1, $zero, -0x2
    ctx->r17 = ADD32(0, -0X2);
    // 0x802B0004: beq         $v0, $s1, L_802B00A4
    if (ctx->r2 == ctx->r17) {
        // 0x802B0008: addiu       $s3, $zero, 0x3E8
        ctx->r19 = ADD32(0, 0X3E8);
            goto L_802B00A4;
    }
    // 0x802B0008: addiu       $s3, $zero, 0x3E8
    ctx->r19 = ADD32(0, 0X3E8);
    // 0x802B000C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_802B0010:
    // 0x802B0010: beq         $v0, $s2, L_802B0038
    if (ctx->r2 == ctx->r18) {
        // 0x802B0014: nop
    
            goto L_802B0038;
    }
    // 0x802B0014: nop

    // 0x802B0018: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x802B001C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x802B0020: bne         $v0, $t6, L_802B0094
    if (ctx->r2 != ctx->r14) {
        // 0x802B0024: nop
    
            goto L_802B0094;
    }
    // 0x802B0024: nop

    // 0x802B0028: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x802B002C: nop

    // 0x802B0030: bne         $t7, $t8, L_802B0094
    if (ctx->r15 != ctx->r24) {
        // 0x802B0034: nop
    
            goto L_802B0094;
    }
    // 0x802B0034: nop

L_802B0038:
    // 0x802B0038: jal         0x80087D40
    // 0x802B003C: nop

    func_80087D40(rdram, ctx);
        goto after_1;
    // 0x802B003C: nop

    after_1:
    // 0x802B0040: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x802B0044: lh          $t0, 0x6($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X6);
    // 0x802B0048: bne         $s3, $zero, L_802B0054
    if (ctx->r19 != 0) {
        // 0x802B004C: nop
    
            goto L_802B0054;
    }
    // 0x802B004C: nop

    // 0x802B0050: break       7
    do_break(2150301776);
L_802B0054:
    // 0x802B0054: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802B0058: bne         $s3, $at, L_802B006C
    if (ctx->r19 != ctx->r1) {
        // 0x802B005C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802B006C;
    }
    // 0x802B005C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802B0060: bne         $v0, $at, L_802B006C
    if (ctx->r2 != ctx->r1) {
        // 0x802B0064: nop
    
            goto L_802B006C;
    }
    // 0x802B0064: nop

    // 0x802B0068: break       6
    do_break(2150301800);
L_802B006C:
    // 0x802B006C: mfhi        $t9
    ctx->r25 = hi;
    // 0x802B0070: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802B0074: beq         $at, $zero, L_802B0094
    if (ctx->r1 == 0) {
        // 0x802B0078: nop
    
            goto L_802B0094;
    }
    // 0x802B0078: nop

    // 0x802B007C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802B0080: lhu         $a1, 0x4($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4);
    // 0x802B0084: jal         0x80272D3C
    // 0x802B0088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_2;
    // 0x802B0088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x802B008C: b           L_802B00A8
    // 0x802B0090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802B00A8;
    // 0x802B0090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B0094:
    // 0x802B0094: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x802B0098: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x802B009C: bne         $v0, $s1, L_802B0010
    if (ctx->r2 != ctx->r17) {
        // 0x802B00A0: nop
    
            goto L_802B0010;
    }
    // 0x802B00A0: nop

L_802B00A4:
    // 0x802B00A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B00A8:
    // 0x802B00A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802B00AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802B00B0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x802B00B4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x802B00B8: jr          $ra
    // 0x802B00BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802B00BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802B00C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B00C0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B00C4: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B00C8: lw          $t6, 0x8($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X8);
    // 0x802B00CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B00D0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x802B00D4: beq         $at, $zero, L_802B069C
    if (ctx->r1 == 0) {
        // 0x802B00D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B069C;
    }
    // 0x802B00D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B00DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802B00E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B00E4: addu        $at, $at, $t6
    gpr jr_addend_802B00F0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802B00E8: lw          $t6, 0x16A8($at)
    ctx->r14 = ADD32(ctx->r1, 0X16A8);
    // 0x802B00EC: nop

    // 0x802B00F0: jr          $t6
    // 0x802B00F4: nop

    switch (jr_addend_802B00F0 >> 2) {
        case 0: goto L_802B00F8; break;
        case 1: goto L_802B0290; break;
        case 2: goto L_802B02C8; break;
        case 3: goto L_802B02C8; break;
        case 4: goto L_802B0528; break;
        case 5: goto L_802B0640; break;
        case 6: goto L_802B0670; break;
        case 7: goto L_802B069C; break;
        default: switch_error(__func__, 0x802B00F0, 0x802C16A8);
    }
    // 0x802B00F4: nop

L_802B00F8:
    // 0x802B00F8: lw          $t7, 0x30($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X30);
    // 0x802B00FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B0100: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x802B0104: nop

    // 0x802B0108: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802B010C: beq         $t9, $zero, L_802B0140
    if (ctx->r25 == 0) {
        // 0x802B0110: nop
    
            goto L_802B0140;
    }
    // 0x802B0110: nop

    // 0x802B0114: jal         0x802AB6E8
    // 0x802B0118: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    func_802AB6E8(rdram, ctx);
        goto after_0;
    // 0x802B0118: sw          $t1, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r9;
    after_0:
    // 0x802B011C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B0120: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x802B0124: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B0128: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x802B012C: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B0130: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    // 0x802B0134: lw          $a1, -0x1450($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1450);
    // 0x802B0138: jal         0x802A67D4
    // 0x802B013C: nop

    func_802A67D4(rdram, ctx);
        goto after_1;
    // 0x802B013C: nop

    after_1:
L_802B0140:
    // 0x802B0140: jal         0x802A8B24
    // 0x802B0144: nop

    func_802A8B24(rdram, ctx);
        goto after_2;
    // 0x802B0144: nop

    after_2:
    // 0x802B0148: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B014C: beq         $v0, $zero, L_802B01F8
    if (ctx->r2 == 0) {
        // 0x802B0150: addiu       $t0, $t0, 0x55B8
        ctx->r8 = ADD32(ctx->r8, 0X55B8);
            goto L_802B01F8;
    }
    // 0x802B0150: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B0154: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x802B0158: lh          $t3, -0x2FAE($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X2FAE);
    // 0x802B015C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802B0160: bne         $t3, $zero, L_802B01F8
    if (ctx->r11 != 0) {
        // 0x802B0164: nop
    
            goto L_802B01F8;
    }
    // 0x802B0164: nop

    // 0x802B0168: lw          $t4, 0x540C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X540C);
    // 0x802B016C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802B0170: bne         $t4, $zero, L_802B0188
    if (ctx->r12 != 0) {
        // 0x802B0174: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_802B0188;
    }
    // 0x802B0174: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x802B0178: lh          $t5, 0x4FD2($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4FD2);
    // 0x802B017C: nop

    // 0x802B0180: bgez        $t5, L_802B01F8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x802B0184: nop
    
            goto L_802B01F8;
    }
    // 0x802B0184: nop

L_802B0188:
    // 0x802B0188: jal         0x802AB6E8
    // 0x802B018C: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
    func_802AB6E8(rdram, ctx);
        goto after_3;
    // 0x802B018C: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
    after_3:
    // 0x802B0190: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B0194: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802B0198: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B019C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x802B01A0: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B01A4: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    // 0x802B01A8: lw          $a1, -0x1470($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1470);
    // 0x802B01AC: jal         0x802A67D4
    // 0x802B01B0: nop

    func_802A67D4(rdram, ctx);
        goto after_4;
    // 0x802B01B0: nop

    after_4:
    // 0x802B01B4: jal         0x80015B94
    // 0x802B01B8: addiu       $a0, $zero, 0x3BA
    ctx->r4 = ADD32(0, 0X3BA);
    func_80015B94(rdram, ctx);
        goto after_5;
    // 0x802B01B8: addiu       $a0, $zero, 0x3BA
    ctx->r4 = ADD32(0, 0X3BA);
    after_5:
    // 0x802B01BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B01C0: lw          $v0, 0x540C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X540C);
    // 0x802B01C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B01C8: beq         $v0, $at, L_802B01D8
    if (ctx->r2 == ctx->r1) {
        // 0x802B01CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B01D8;
    }
    // 0x802B01CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B01D0: bne         $v0, $at, L_802B01F0
    if (ctx->r2 != ctx->r1) {
        // 0x802B01D4: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_802B01F0;
    }
    // 0x802B01D4: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_802B01D8:
    // 0x802B01D8: jal         0x802A6E4C
    // 0x802B01DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802A6E4C(rdram, ctx);
        goto after_6;
    // 0x802B01DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x802B01E0: jal         0x802A70F4
    // 0x802B01E4: nop

    func_802A70F4(rdram, ctx);
        goto after_7;
    // 0x802B01E4: nop

    after_7:
    // 0x802B01E8: b           L_802B01F8
    // 0x802B01EC: nop

        goto L_802B01F8;
    // 0x802B01EC: nop

L_802B01F0:
    // 0x802B01F0: jal         0x802A6DF4
    // 0x802B01F4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_802A6DF4(rdram, ctx);
        goto after_8;
    // 0x802B01F4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_8:
L_802B01F8:
    // 0x802B01F8: jal         0x802A8B48
    // 0x802B01FC: nop

    func_802A8B48(rdram, ctx);
        goto after_9;
    // 0x802B01FC: nop

    after_9:
    // 0x802B0200: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B0204: beq         $v0, $zero, L_802B069C
    if (ctx->r2 == 0) {
        // 0x802B0208: addiu       $t0, $t0, 0x55B8
        ctx->r8 = ADD32(ctx->r8, 0X55B8);
            goto L_802B069C;
    }
    // 0x802B0208: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B020C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802B0210: lh          $t8, -0x2FAE($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2FAE);
    // 0x802B0214: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x802B0218: bne         $t8, $zero, L_802B06A0
    if (ctx->r24 != 0) {
        // 0x802B021C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B06A0;
    }
    // 0x802B021C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0220: jal         0x802AB6E8
    // 0x802B0224: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    func_802AB6E8(rdram, ctx);
        goto after_10;
    // 0x802B0224: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    after_10:
    // 0x802B0228: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B022C: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x802B0230: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B0234: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x802B0238: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B023C: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    // 0x802B0240: lw          $a1, -0x1460($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1460);
    // 0x802B0244: jal         0x802A67D4
    // 0x802B0248: nop

    func_802A67D4(rdram, ctx);
        goto after_11;
    // 0x802B0248: nop

    after_11:
    // 0x802B024C: jal         0x80015B94
    // 0x802B0250: addiu       $a0, $zero, 0x3BA
    ctx->r4 = ADD32(0, 0X3BA);
    func_80015B94(rdram, ctx);
        goto after_12;
    // 0x802B0250: addiu       $a0, $zero, 0x3BA
    ctx->r4 = ADD32(0, 0X3BA);
    after_12:
    // 0x802B0254: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B0258: lw          $v0, 0x540C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X540C);
    // 0x802B025C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B0260: beq         $v0, $at, L_802B0270
    if (ctx->r2 == ctx->r1) {
        // 0x802B0264: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B0270;
    }
    // 0x802B0264: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B0268: bne         $v0, $at, L_802B0280
    if (ctx->r2 != ctx->r1) {
        // 0x802B026C: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_802B0280;
    }
    // 0x802B026C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_802B0270:
    // 0x802B0270: jal         0x802A6E4C
    // 0x802B0274: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802A6E4C(rdram, ctx);
        goto after_13;
    // 0x802B0274: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x802B0278: b           L_802B06A0
    // 0x802B027C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B06A0;
    // 0x802B027C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B0280:
    // 0x802B0280: jal         0x802A6DF4
    // 0x802B0284: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_802A6DF4(rdram, ctx);
        goto after_14;
    // 0x802B0284: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_14:
    // 0x802B0288: b           L_802B06A0
    // 0x802B028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B06A0;
    // 0x802B028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B0290:
    // 0x802B0290: lw          $t2, 0x34($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X34);
    // 0x802B0294: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B0298: lh          $t3, 0x4A($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4A);
    // 0x802B029C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B02A0: bne         $t3, $at, L_802B069C
    if (ctx->r11 != ctx->r1) {
        // 0x802B02A4: addiu       $v1, $v1, 0x5160
        ctx->r3 = ADD32(ctx->r3, 0X5160);
            goto L_802B069C;
    }
    // 0x802B02A4: addiu       $v1, $v1, 0x5160
    ctx->r3 = ADD32(ctx->r3, 0X5160);
    // 0x802B02A8: lw          $v0, 0x2C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2C);
    // 0x802B02AC: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    // 0x802B02B0: sltiu       $t4, $v0, 0x1
    ctx->r12 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802B02B4: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x802B02B8: sw          $t4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r12;
    // 0x802B02BC: sltiu       $t5, $v0, 0x1
    ctx->r13 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802B02C0: b           L_802B069C
    // 0x802B02C4: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
        goto L_802B069C;
    // 0x802B02C4: sh          $t5, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r13;
L_802B02C8:
    // 0x802B02C8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B02CC: addiu       $v1, $v1, 0x5160
    ctx->r3 = ADD32(ctx->r3, 0X5160);
    // 0x802B02D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B02D4: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802B02D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B02DC: sh          $v0, 0x543C($at)
    MEM_H(0X543C, ctx->r1) = ctx->r2;
    // 0x802B02E0: sh          $zero, 0x10($v1)
    MEM_H(0X10, ctx->r3) = 0;
    // 0x802B02E4: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x802B02E8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B02EC: lh          $t6, 0x5236($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5236);
    // 0x802B02F0: nop

    // 0x802B02F4: bne         $v0, $t6, L_802B031C
    if (ctx->r2 != ctx->r14) {
        // 0x802B02F8: nop
    
            goto L_802B031C;
    }
    // 0x802B02F8: nop

    // 0x802B02FC: jal         0x802AF070
    // 0x802B0300: nop

    func_802AF070(rdram, ctx);
        goto after_15;
    // 0x802B0300: nop

    after_15:
    // 0x802B0304: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B0308: beq         $v0, $zero, L_802B031C
    if (ctx->r2 == 0) {
        // 0x802B030C: addiu       $t0, $t0, 0x55B8
        ctx->r8 = ADD32(ctx->r8, 0X55B8);
            goto L_802B031C;
    }
    // 0x802B030C: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B0310: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B0314: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0318: sh          $t7, 0x5436($at)
    MEM_H(0X5436, ctx->r1) = ctx->r15;
L_802B031C:
    // 0x802B031C: lw          $t8, 0x34($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X34);
    // 0x802B0320: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B0324: lh          $t9, 0x4A($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4A);
    // 0x802B0328: nop

    // 0x802B032C: bne         $t9, $at, L_802B06A0
    if (ctx->r25 != ctx->r1) {
        // 0x802B0330: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B06A0;
    }
    // 0x802B0330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0334: jal         0x80015B94
    // 0x802B0338: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    func_80015B94(rdram, ctx);
        goto after_16;
    // 0x802B0338: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_16:
    // 0x802B033C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B0340: addiu       $a1, $a1, 0x50C0
    ctx->r5 = ADD32(ctx->r5, 0X50C0);
    // 0x802B0344: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B0348: nop

    // 0x802B034C: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802B0350: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802B0354: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    // 0x802B0358: jal         0x802AFACC
    // 0x802B035C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    func_802AFACC(rdram, ctx);
        goto after_17;
    // 0x802B035C: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    after_17:
    // 0x802B0360: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B0364: lw          $t1, 0x5408($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5408);
    // 0x802B0368: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B036C: bne         $t1, $zero, L_802B0388
    if (ctx->r9 != 0) {
        // 0x802B0370: addiu       $a1, $a1, 0x50C0
        ctx->r5 = ADD32(ctx->r5, 0X50C0);
            goto L_802B0388;
    }
    // 0x802B0370: addiu       $a1, $a1, 0x50C0
    ctx->r5 = ADD32(ctx->r5, 0X50C0);
    // 0x802B0374: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B0378: nop

    // 0x802B037C: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802B0380: b           L_802B0398
    // 0x802B0384: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_802B0398;
    // 0x802B0384: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_802B0388:
    // 0x802B0388: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B038C: nop

    // 0x802B0390: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802B0394: nop

L_802B0398:
    // 0x802B0398: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802B039C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B03A0: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802B03A4: addiu       $a3, $a3, 0x5684
    ctx->r7 = ADD32(ctx->r7, 0X5684);
    // 0x802B03A8: jal         0x802AFC58
    // 0x802B03AC: addiu       $a2, $a2, 0x5680
    ctx->r6 = ADD32(ctx->r6, 0X5680);
    func_802AFC58(rdram, ctx);
        goto after_18;
    // 0x802B03AC: addiu       $a2, $a2, 0x5680
    ctx->r6 = ADD32(ctx->r6, 0X5680);
    after_18:
    // 0x802B03B0: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B03B4: lw          $t2, 0x5408($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5408);
    // 0x802B03B8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B03BC: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B03C0: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B03C4: bne         $t2, $zero, L_802B03E4
    if (ctx->r10 != 0) {
        // 0x802B03C8: addiu       $a1, $a1, 0x50C0
        ctx->r5 = ADD32(ctx->r5, 0X50C0);
            goto L_802B03E4;
    }
    // 0x802B03C8: addiu       $a1, $a1, 0x50C0
    ctx->r5 = ADD32(ctx->r5, 0X50C0);
    // 0x802B03CC: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x802B03D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B03D4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B03D8: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802B03DC: b           L_802B03F8
    // 0x802B03E0: swc1        $f4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f4.u32l;
        goto L_802B03F8;
    // 0x802B03E0: swc1        $f4, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f4.u32l;
L_802B03E4:
    // 0x802B03E4: lui         $at, 0xC3FF
    ctx->r1 = S32(0XC3FF << 16);
    // 0x802B03E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B03EC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B03F0: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802B03F4: swc1        $f6, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f6.u32l;
L_802B03F8:
    // 0x802B03F8: lwc1        $f8, 0x1C($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x802B03FC: lwc1        $f10, 0x20($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X20);
    // 0x802B0400: lwc1        $f16, 0x24($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X24);
    // 0x802B0404: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B0408: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x802B040C: swc1        $f8, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->f8.u32l;
    // 0x802B0410: swc1        $f10, 0x50($a2)
    MEM_W(0X50, ctx->r6) = ctx->f10.u32l;
    // 0x802B0414: swc1        $f16, 0x54($a2)
    MEM_W(0X54, ctx->r6) = ctx->f16.u32l;
    // 0x802B0418: swc1        $f18, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f18.u32l;
    // 0x802B041C: lhu         $t3, 0xB80($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB80);
    // 0x802B0420: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0424: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x802B0428: bgez        $t3, L_802B0444
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802B042C: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_802B0444;
    }
    // 0x802B042C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x802B0430: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802B0434: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802B0438: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802B043C: nop

    // 0x802B0440: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_802B0444:
    // 0x802B0444: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x802B0448: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802B044C: lw          $t4, 0x8($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X8);
    // 0x802B0450: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x802B0454: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B0458: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B045C: addiu       $a0, $a0, 0x50D4
    ctx->r4 = ADD32(ctx->r4, 0X50D4);
    // 0x802B0460: bne         $t4, $at, L_802B0488
    if (ctx->r12 != ctx->r1) {
        // 0x802B0464: cvt.s.d     $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
            goto L_802B0488;
    }
    // 0x802B0464: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x802B0468: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B046C: lwc1        $f5, 0x16C8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X16C8);
    // 0x802B0470: lwc1        $f4, 0x16CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X16CC);
    // 0x802B0474: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802B0478: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x802B047C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x802B0480: b           L_802B04A4
    // 0x802B0484: swc1        $f6, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f6.u32l;
        goto L_802B04A4;
    // 0x802B0484: swc1        $f6, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f6.u32l;
L_802B0488:
    // 0x802B0488: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B048C: lwc1        $f17, 0x16D0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X16D0);
    // 0x802B0490: lwc1        $f16, 0x16D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X16D4);
    // 0x802B0494: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802B0498: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x802B049C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802B04A0: swc1        $f4, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f4.u32l;
L_802B04A4:
    // 0x802B04A4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B04A8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802B04AC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802B04B0: nop

    // 0x802B04B4: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x802B04B8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802B04BC: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B04C0: nop

    // 0x802B04C4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802B04C8: nop

    // 0x802B04CC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802B04D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802B04D4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x802B04D8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802B04DC: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x802B04E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B04E4: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
    // 0x802B04E8: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802B04EC: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x802B04F0: lwc1        $f6, 0x10($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X10);
    // 0x802B04F4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x802B04F8: swc1        $f6, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f6.u32l;
    // 0x802B04FC: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802B0500: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x802B0504: lwc1        $f10, 0x14($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X14);
    // 0x802B0508: nop

    // 0x802B050C: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
    // 0x802B0510: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x802B0514: nop

    // 0x802B0518: sw          $zero, 0x68($t6)
    MEM_W(0X68, ctx->r14) = 0;
    // 0x802B051C: sw          $t7, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r15;
    // 0x802B0520: b           L_802B069C
    // 0x802B0524: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
        goto L_802B069C;
    // 0x802B0524: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
L_802B0528:
    // 0x802B0528: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B052C: addiu       $v1, $v1, 0x5160
    ctx->r3 = ADD32(ctx->r3, 0X5160);
    // 0x802B0530: lh          $t9, 0x18($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X18);
    // 0x802B0534: nop

    // 0x802B0538: beq         $t9, $zero, L_802B05B8
    if (ctx->r25 == 0) {
        // 0x802B053C: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_802B05B8;
    }
    // 0x802B053C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B0540: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802B0544: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x802B0548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B054C: beq         $a1, $v0, L_802B055C
    if (ctx->r5 == ctx->r2) {
        // 0x802B0550: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B055C;
    }
    // 0x802B0550: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B0554: bne         $v0, $at, L_802B05B8
    if (ctx->r2 != ctx->r1) {
        // 0x802B0558: nop
    
            goto L_802B05B8;
    }
    // 0x802B0558: nop

L_802B055C:
    // 0x802B055C: bne         $a1, $v0, L_802B05A8
    if (ctx->r5 != ctx->r2) {
        // 0x802B0560: sh          $zero, 0x18($v1)
        MEM_H(0X18, ctx->r3) = 0;
            goto L_802B05A8;
    }
    // 0x802B0560: sh          $zero, 0x18($v1)
    MEM_H(0X18, ctx->r3) = 0;
    // 0x802B0564: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x802B0568: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802B056C: jal         0x802AB664
    // 0x802B0570: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_802AB664(rdram, ctx);
        goto after_19;
    // 0x802B0570: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_19:
    // 0x802B0574: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0578: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B057C: lw          $t2, 0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X14);
    // 0x802B0580: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B0584: beq         $t2, $zero, L_802B05B8
    if (ctx->r10 == 0) {
        // 0x802B0588: addiu       $t0, $t0, 0x55B8
        ctx->r8 = ADD32(ctx->r8, 0X55B8);
            goto L_802B05B8;
    }
    // 0x802B0588: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
    // 0x802B058C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802B0590: nop

    // 0x802B0594: lhu         $t3, 0xC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC);
    // 0x802B0598: nop

    // 0x802B059C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802B05A0: b           L_802B05B8
    // 0x802B05A4: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
        goto L_802B05B8;
    // 0x802B05A4: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
L_802B05A8:
    // 0x802B05A8: jal         0x802AB664
    // 0x802B05AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802AB664(rdram, ctx);
        goto after_20;
    // 0x802B05AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_20:
    // 0x802B05B0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B05B4: addiu       $t0, $t0, 0x55B8
    ctx->r8 = ADD32(ctx->r8, 0X55B8);
L_802B05B8:
    // 0x802B05B8: lw          $t5, 0x34($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X34);
    // 0x802B05BC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B05C0: lh          $t6, 0x4A($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4A);
    // 0x802B05C4: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B05C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B05CC: addiu       $a2, $a2, 0x5648
    ctx->r6 = ADD32(ctx->r6, 0X5648);
    // 0x802B05D0: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B05D4: bne         $t6, $at, L_802B069C
    if (ctx->r14 != ctx->r1) {
        // 0x802B05D8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802B069C;
    }
    // 0x802B05D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B05DC: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x802B05E0: nop

    // 0x802B05E4: bne         $a1, $v0, L_802B0614
    if (ctx->r5 != ctx->r2) {
        // 0x802B05E8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B0614;
    }
    // 0x802B05E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B05EC: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x802B05F0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x802B05F4: beq         $t8, $zero, L_802B069C
    if (ctx->r24 == 0) {
        // 0x802B05F8: sw          $t7, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r15;
            goto L_802B069C;
    }
    // 0x802B05F8: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x802B05FC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x802B0600: jal         0x802AFED0
    // 0x802B0604: nop

    func_802AFED0(rdram, ctx);
        goto after_21;
    // 0x802B0604: nop

    after_21:
    // 0x802B0608: b           L_802B06A0
    // 0x802B060C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B06A0;
    // 0x802B060C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0610: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802B0614:
    // 0x802B0614: bne         $v0, $at, L_802B06A0
    if (ctx->r2 != ctx->r1) {
        // 0x802B0618: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B06A0;
    }
    // 0x802B0618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B061C: lw          $t1, 0x14($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X14);
    // 0x802B0620: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x802B0624: beq         $t1, $zero, L_802B069C
    if (ctx->r9 == 0) {
        // 0x802B0628: sw          $t9, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->r25;
            goto L_802B069C;
    }
    // 0x802B0628: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x802B062C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x802B0630: jal         0x802AFFC8
    // 0x802B0634: nop

    func_802AFFC8(rdram, ctx);
        goto after_22;
    // 0x802B0634: nop

    after_22:
    // 0x802B0638: b           L_802B06A0
    // 0x802B063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B06A0;
    // 0x802B063C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B0640:
    // 0x802B0640: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x802B0644: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B0648: lw          $t3, 0xCC($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XCC);
    // 0x802B064C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x802B0650: lw          $t4, 0x30($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X30);
    // 0x802B0654: nop

    // 0x802B0658: lhu         $t5, 0x4($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X4);
    // 0x802B065C: nop

    // 0x802B0660: bne         $t5, $at, L_802B06A0
    if (ctx->r13 != ctx->r1) {
        // 0x802B0664: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B06A0;
    }
    // 0x802B0664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0668: b           L_802B069C
    // 0x802B066C: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
        goto L_802B069C;
    // 0x802B066C: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
L_802B0670:
    // 0x802B0670: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x802B0674: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B0678: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x802B067C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x802B0680: lw          $t9, 0x30($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X30);
    // 0x802B0684: nop

    // 0x802B0688: lhu         $t1, 0x4($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X4);
    // 0x802B068C: nop

    // 0x802B0690: bne         $t1, $at, L_802B06A0
    if (ctx->r9 != ctx->r1) {
        // 0x802B0694: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B06A0;
    }
    // 0x802B0694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0698: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
L_802B069C:
    // 0x802B069C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B06A0:
    // 0x802B06A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B06A4: jr          $ra
    // 0x802B06A8: nop

    return;
    // 0x802B06A8: nop

;}
RECOMP_FUNC void func_802B06AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B06AC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802B06B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B06B4: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802B06B8: mul.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x802B06BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B06C0: nop

    // 0x802B06C4: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x802B06C8: jr          $ra
    // 0x802B06CC: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    return;
    // 0x802B06CC: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
;}
RECOMP_FUNC void func_802B06D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B06D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B06D4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B06D8: lw          $t7, 0x5408($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5408);
    // 0x802B06DC: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x802B06E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B06E4: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802B06E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B06EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802B06F0: bne         $a1, $t7, L_802B06FC
    if (ctx->r5 != ctx->r15) {
        // 0x802B06F4: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_802B06FC;
    }
    // 0x802B06F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x802B06F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_802B06FC:
    // 0x802B06FC: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x802B0700: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802B0704: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802B0708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B070C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0710: mul.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802B0714: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802B0718: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B071C: swc1        $f12, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f12.u32l;
    // 0x802B0720: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x802B0724: swc1        $f14, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f14.u32l;
    // 0x802B0728: bc1f        L_802B0764
    if (!c1cs) {
        // 0x802B072C: swc1        $f4, 0x70($v1)
        MEM_W(0X70, ctx->r3) = ctx->f4.u32l;
            goto L_802B0764;
    }
    // 0x802B072C: swc1        $f4, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f4.u32l;
    // 0x802B0730: negu        $at, $a0
    ctx->r1 = SUB32(0, ctx->r4);
    // 0x802B0734: sll         $t8, $at, 2
    ctx->r24 = S32(ctx->r1 << 2);
    // 0x802B0738: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x802B073C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802B0740: subu        $t8, $t8, $at
    ctx->r24 = SUB32(ctx->r24, ctx->r1);
    // 0x802B0744: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x802B0748: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802B074C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802B0750: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802B0754: sw          $t9, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r25;
    // 0x802B0758: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802B075C: b           L_802B0824
    // 0x802B0760: swc1        $f18, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f18.u32l;
        goto L_802B0824;
    // 0x802B0760: swc1        $f18, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f18.u32l;
L_802B0764:
    // 0x802B0764: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802B0768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B076C: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x802B0770: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x802B0774: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x802B0778: bc1f        L_802B07A4
    if (!c1cs) {
        // 0x802B077C: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_802B07A4;
    }
    // 0x802B077C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802B0780: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802B0784: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x802B0788: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x802B078C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x802B0790: sw          $a1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r5;
    // 0x802B0794: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802B0798: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802B079C: b           L_802B0824
    // 0x802B07A0: swc1        $f8, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f8.u32l;
        goto L_802B0824;
    // 0x802B07A0: swc1        $f8, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f8.u32l;
L_802B07A4:
    // 0x802B07A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802B07A8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x802B07AC: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x802B07B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802B07B4: bc1f        L_802B07C8
    if (!c1cs) {
        // 0x802B07B8: nop
    
            goto L_802B07C8;
    }
    // 0x802B07B8: nop

    // 0x802B07BC: swc1        $f0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->f0.u32l;
    // 0x802B07C0: b           L_802B0824
    // 0x802B07C4: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
        goto L_802B0824;
    // 0x802B07C4: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
L_802B07C8:
    // 0x802B07C8: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x802B07CC: jal         0x802B06AC
    // 0x802B07D0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_802B06AC(rdram, ctx);
        goto after_0;
    // 0x802B07D0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x802B07D4: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802B07D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B07DC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B07E0: c.le.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl <= ctx->f14.fl;
    // 0x802B07E4: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B07E8: bc1f        L_802B081C
    if (!c1cs) {
        // 0x802B07EC: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_802B081C;
    }
    // 0x802B07EC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x802B07F0: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x802B07F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B07F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802B07FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B0800: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x802B0804: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0808: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802B080C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802B0810: swc1        $f6, 0x56B8($at)
    MEM_W(0X56B8, ctx->r1) = ctx->f6.u32l;
    // 0x802B0814: b           L_802B0824
    // 0x802B0818: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
        goto L_802B0824;
    // 0x802B0818: sw          $zero, 0x64($v1)
    MEM_W(0X64, ctx->r3) = 0;
L_802B081C:
    // 0x802B081C: sw          $t2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r10;
    // 0x802B0820: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802B0824:
    // 0x802B0824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B082C: jr          $ra
    // 0x802B0830: nop

    return;
    // 0x802B0830: nop

;}
RECOMP_FUNC void func_802B0834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B0834: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B0838: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802B083C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802B0840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B0844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B0848: bne         $t6, $at, L_802B0854
    if (ctx->r14 != ctx->r1) {
        // 0x802B084C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802B0854;
    }
    // 0x802B084C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B0850: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802B0854:
    // 0x802B0854: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0858: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B085C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802B0860: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802B0864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B0868: lwc1        $f12, 0x20($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802B086C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x802B0870: lwc1        $f14, 0x24($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802B0874: bc1f        L_802B094C
    if (!c1cs) {
        // 0x802B0878: lui         $at, 0x4218
        ctx->r1 = S32(0X4218 << 16);
            goto L_802B094C;
    }
    // 0x802B0878: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802B087C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B0880: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802B0884: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802B0888: nop

    // 0x802B088C: bc1f        L_802B094C
    if (!c1cs) {
        // 0x802B0890: nop
    
            goto L_802B094C;
    }
    // 0x802B0890: nop

    // 0x802B0894: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B0898: nop

    // 0x802B089C: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x802B08A0: nop

    // 0x802B08A4: bc1f        L_802B094C
    if (!c1cs) {
        // 0x802B08A8: nop
    
            goto L_802B094C;
    }
    // 0x802B08A8: nop

    // 0x802B08AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B08B0: nop

    // 0x802B08B4: c.le.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl <= ctx->f12.fl;
    // 0x802B08B8: nop

    // 0x802B08BC: bc1f        L_802B094C
    if (!c1cs) {
        // 0x802B08C0: nop
    
            goto L_802B094C;
    }
    // 0x802B08C0: nop

    // 0x802B08C4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x802B08C8: jal         0x802B06AC
    // 0x802B08CC: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    func_802B06AC(rdram, ctx);
        goto after_0;
    // 0x802B08CC: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x802B08D0: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x802B08D4: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802B08D8: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802B08DC: lui         $at, 0x43FF
    ctx->r1 = S32(0X43FF << 16);
    // 0x802B08E0: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802B08E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B08E8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B08EC: mul.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x802B08F0: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B08F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802B08F8: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x802B08FC: nop

    // 0x802B0900: bc1f        L_802B0950
    if (!c1cs) {
        // 0x802B0904: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802B0950;
    }
    // 0x802B0904: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B0908: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x802B090C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B0910: nop

    // 0x802B0914: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802B0918: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x802B091C: nop

    // 0x802B0920: bc1f        L_802B0950
    if (!c1cs) {
        // 0x802B0924: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802B0950;
    }
    // 0x802B0924: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B0928: lwc1        $f18, 0x30($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X30);
    // 0x802B092C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0930: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x802B0934: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802B0938: nop

    // 0x802B093C: bc1f        L_802B0950
    if (!c1cs) {
        // 0x802B0940: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802B0950;
    }
    // 0x802B0940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B0944: b           L_802B0950
    // 0x802B0948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802B0950;
    // 0x802B0948: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802B094C:
    // 0x802B094C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802B0950:
    // 0x802B0950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0954: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802B0958: jr          $ra
    // 0x802B095C: nop

    return;
    // 0x802B095C: nop

;}
RECOMP_FUNC void func_802B0960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B0960: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x802B0964: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x802B0968: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B096C: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x802B0970: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802B0974: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802B0978: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x802B097C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802B0980: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x802B0984: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802B0988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B098C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802B0990: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802B0994: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802B0998: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802B099C: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x802B09A0: add.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802B09A4: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x802B09A8: jal         0x8007FA40
    // 0x802B09AC: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x802B09AC: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x802B09B0: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B09B4: lw          $t1, 0x5408($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5408);
    // 0x802B09B8: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x802B09BC: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802B09C0: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802B09C4: bne         $t1, $zero, L_802B09D0
    if (ctx->r9 != 0) {
        // 0x802B09C8: swc1        $f0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
            goto L_802B09D0;
    }
    // 0x802B09C8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x802B09CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_802B09D0:
    // 0x802B09D0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802B09D4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802B09D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B09DC: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x802B09E0: sub.d       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f8.d - ctx->f6.d;
    // 0x802B09E4: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x802B09E8: add.d       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f0.d + ctx->f0.d;
    // 0x802B09EC: bne         $t2, $zero, L_802B0A58
    if (ctx->r10 != 0) {
        // 0x802B09F0: cvt.s.d     $f20, $f4
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
            goto L_802B0A58;
    }
    // 0x802B09F0: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x802B09F4: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802B09F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B09FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B0A00: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802B0A04: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B0A08: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802B0A0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0A10: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x802B0A14: sub.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f10.d - ctx->f6.d;
    // 0x802B0A18: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x802B0A1C: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x802B0A20: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x802B0A24: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x802B0A28: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x802B0A2C: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x802B0A30: jal         0x8007FA40
    // 0x802B0A34: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x802B0A34: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x802B0A38: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x802B0A3C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B0A40: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802B0A44: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802B0A48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B0A4C: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x802B0A50: b           L_802B0AB8
    // 0x802B0A54: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_802B0AB8;
    // 0x802B0A54: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802B0A58:
    // 0x802B0A58: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802B0A5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B0A60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B0A64: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802B0A68: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802B0A6C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802B0A70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B0A74: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802B0A78: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x802B0A7C: sub.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d - ctx->f10.d;
    // 0x802B0A80: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x802B0A84: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x802B0A88: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x802B0A8C: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x802B0A90: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x802B0A94: jal         0x8007FA40
    // 0x802B0A98: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x802B0A98: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802B0A9C: lh          $v0, 0x42($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X42);
    // 0x802B0AA0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B0AA4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802B0AA8: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802B0AAC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B0AB0: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802B0AB4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802B0AB8:
    // 0x802B0AB8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x802B0ABC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802B0AC0: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802B0AC4: negu        $t3, $v0
    ctx->r11 = SUB32(0, ctx->r2);
    // 0x802B0AC8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x802B0ACC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802B0AD0: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x802B0AD4: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x802B0AD8: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x802B0ADC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802B0AE0: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802B0AE4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x802B0AE8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x802B0AEC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802B0AF0: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x802B0AF4: mul.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x802B0AF8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802B0AFC: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802B0B00: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x802B0B04: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802B0B08: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802B0B0C: nop

    // 0x802B0B10: mul.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x802B0B14: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802B0B18: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x802B0B1C: add.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x802B0B20: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x802B0B24: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802B0B28: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B0B2C: mul.s       $f6, $f2, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x802B0B30: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x802B0B34: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802B0B38: mul.s       $f8, $f18, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x802B0B3C: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x802B0B40: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x802B0B44: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802B0B48: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x802B0B4C: add.s       $f0, $f8, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x802B0B50: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x802B0B54: sub.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802B0B58: mul.s       $f10, $f12, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802B0B5C: nop

    // 0x802B0B60: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x802B0B64: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802B0B68: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x802B0B6C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x802B0B70: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802B0B74: nop

    // 0x802B0B78: mul.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x802B0B7C: nop

    // 0x802B0B80: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802B0B84: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x802B0B88: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x802B0B8C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802B0B90: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802B0B94: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802B0B98: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x802B0B9C: mul.s       $f6, $f16, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802B0BA0: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x802B0BA4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802B0BA8: nop

    // 0x802B0BAC: mul.s       $f8, $f12, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x802B0BB0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802B0BB4: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x802B0BB8: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x802B0BBC: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x802B0BC0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B0BC4: bne         $t4, $zero, L_802B0BD8
    if (ctx->r12 != 0) {
        // 0x802B0BC8: nop
    
            goto L_802B0BD8;
    }
    // 0x802B0BC8: nop

    // 0x802B0BCC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B0BD0: b           L_802B0BDC
    // 0x802B0BD4: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_802B0BDC;
    // 0x802B0BD4: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_802B0BD8:
    // 0x802B0BD8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
L_802B0BDC:
    // 0x802B0BDC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B0BE0: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B0BE4: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802B0BE8: lwc1        $f16, 0x2C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x802B0BEC: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802B0BF0: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802B0BF4: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802B0BF8: nop

    // 0x802B0BFC: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802B0C00: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802B0C04: jal         0x8007FA40
    // 0x802B0C08: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x802B0C08: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x802B0C0C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802B0C10: lw          $t5, 0x540C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X540C);
    // 0x802B0C14: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x802B0C18: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B0C1C: bne         $t5, $zero, L_802B0CA4
    if (ctx->r13 != 0) {
        // 0x802B0C20: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_802B0CA4;
    }
    // 0x802B0C20: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802B0C24: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802B0C28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B0C2C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802B0C30: nop

    // 0x802B0C34: bc1f        L_802B0C68
    if (!c1cs) {
        // 0x802B0C38: nop
    
            goto L_802B0C68;
    }
    // 0x802B0C38: nop

    // 0x802B0C3C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802B0C40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802B0C44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B0C48: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802B0C4C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802B0C50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802B0C54: bc1f        L_802B0C68
    if (!c1cs) {
        // 0x802B0C58: nop
    
            goto L_802B0C68;
    }
    // 0x802B0C58: nop

    // 0x802B0C5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B0C60: b           L_802B0D0C
    // 0x802B0C64: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
        goto L_802B0D0C;
    // 0x802B0C64: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_802B0C68:
    // 0x802B0C68: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x802B0C6C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802B0C70: bc1f        L_802B0D10
    if (!c1cs) {
        // 0x802B0C74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B0D10;
    }
    // 0x802B0C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B0C78: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802B0C7C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802B0C80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0C84: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802B0C88: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x802B0C8C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802B0C90: bc1f        L_802B0D10
    if (!c1cs) {
        // 0x802B0C94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B0D10;
    }
    // 0x802B0C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B0C98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B0C9C: b           L_802B0D0C
    // 0x802B0CA0: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
        goto L_802B0D0C;
    // 0x802B0CA0: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_802B0CA4:
    // 0x802B0CA4: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802B0CA8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802B0CAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B0CB0: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x802B0CB4: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x802B0CB8: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x802B0CBC: bc1f        L_802B0D10
    if (!c1cs) {
        // 0x802B0CC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B0D10;
    }
    // 0x802B0CC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B0CC4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802B0CC8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0CCC: nop

    // 0x802B0CD0: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x802B0CD4: nop

    // 0x802B0CD8: bc1f        L_802B0D10
    if (!c1cs) {
        // 0x802B0CDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B0D10;
    }
    // 0x802B0CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B0CE0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x802B0CE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802B0CE8: bc1f        L_802B0D00
    if (!c1cs) {
        // 0x802B0CEC: nop
    
            goto L_802B0D00;
    }
    // 0x802B0CEC: nop

    // 0x802B0CF0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802B0CF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B0CF8: b           L_802B0D0C
    // 0x802B0CFC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
        goto L_802B0D0C;
    // 0x802B0CFC: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_802B0D00:
    // 0x802B0D00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B0D04: nop

    // 0x802B0D08: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
L_802B0D0C:
    // 0x802B0D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B0D10:
    // 0x802B0D10: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802B0D14: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802B0D18: jr          $ra
    // 0x802B0D1C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x802B0D1C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_802B0D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B0D20: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B0D24: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B0D28: lwc1        $f0, 0x4C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802B0D2C: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x802B0D30: lwc1        $f12, 0x44($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B0D34: lwc1        $f16, 0x54($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
    // 0x802B0D38: sub.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802B0D3C: lwc1        $f10, 0x40($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X40);
    // 0x802B0D40: mul.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802B0D44: sub.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802B0D48: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802B0D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B0D50: mul.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x802B0D54: add.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x802B0D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B0D5C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802B0D60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B0D64: add.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802B0D68: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x802B0D6C: div.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x802B0D70: jal         0x802AE0E8
    // 0x802B0D74: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
    func_802AE0E8(rdram, ctx);
        goto after_0;
    // 0x802B0D74: swc1        $f16, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f16.u32l;
    after_0:
    // 0x802B0D78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B0D7C: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B0D80: lwc1        $f2, 0x50($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X50);
    // 0x802B0D84: lwc1        $f16, 0x3C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802B0D88: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B0D8C: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x802B0D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0D94: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x802B0D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B0D9C: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802B0DA0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802B0DA4: jr          $ra
    // 0x802B0DA8: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x802B0DA8: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_802B0DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B0DAC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B0DB0: lw          $t6, 0x54C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X54C0);
    // 0x802B0DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B0DB8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B0DBC: bne         $t6, $at, L_802B0DE4
    if (ctx->r14 != ctx->r1) {
        // 0x802B0DC0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B0DE4;
    }
    // 0x802B0DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B0DC4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0DC8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802B0DCC: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802B0DD0: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B0DD4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802B0DD8: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
    // 0x802B0DDC: b           L_802B0FC0
    // 0x802B0DE0: sw          $t7, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r15;
        goto L_802B0FC0;
    // 0x802B0DE0: sw          $t7, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r15;
L_802B0DE4:
    // 0x802B0DE4: jal         0x802B0834
    // 0x802B0DE8: nop

    func_802B0834(rdram, ctx);
        goto after_0;
    // 0x802B0DE8: nop

    after_0:
    // 0x802B0DEC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0DF0: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B0DF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0DF8: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802B0DFC: lwc1        $f1, 0x16D8($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X16D8);
    // 0x802B0E00: lwc1        $f0, 0x16DC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16DC);
    // 0x802B0E04: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802B0E08: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x802B0E0C: lwc1        $f16, 0x2C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802B0E10: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x802B0E14: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802B0E18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0E1C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802B0E20: lwc1        $f16, 0x30($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X30);
    // 0x802B0E24: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x802B0E28: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    // 0x802B0E2C: lwc1        $f6, 0x16E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16E4);
    // 0x802B0E30: lwc1        $f7, 0x16E0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X16E0);
    // 0x802B0E34: lwc1        $f12, 0x28($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802B0E38: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x802B0E3C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x802B0E40: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802B0E44: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802B0E48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802B0E4C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x802B0E50: swc1        $f10, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f10.u32l;
    // 0x802B0E54: lwc1        $f2, 0x2C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802B0E58: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802B0E5C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x802B0E60: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x802B0E64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802B0E68: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x802B0E6C: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
    // 0x802B0E70: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802B0E74: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802B0E78: swc1        $f6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f6.u32l;
    // 0x802B0E7C: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
    // 0x802B0E80: lwc1        $f14, 0x30($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X30);
    // 0x802B0E84: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802B0E88: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802B0E8C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x802B0E90: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802B0E94: bc1f        L_802B0F0C
    if (!c1cs) {
        // 0x802B0E98: swc1        $f6, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
            goto L_802B0F0C;
    }
    // 0x802B0E98: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
    // 0x802B0E9C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802B0EA0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x802B0EA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802B0EA8: neg.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = -ctx->f2.fl;
    // 0x802B0EAC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802B0EB0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802B0EB4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x802B0EB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B0EBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0EC0: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
    // 0x802B0EC4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802B0EC8: swc1        $f10, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f10.u32l;
    // 0x802B0ECC: lwc1        $f18, 0x16E8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X16E8);
    // 0x802B0ED0: lwc1        $f2, 0x2C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802B0ED4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B0ED8: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x802B0EDC: nop

    // 0x802B0EE0: bc1f        L_802B0F0C
    if (!c1cs) {
        // 0x802B0EE4: nop
    
            goto L_802B0F0C;
    }
    // 0x802B0EE4: nop

    // 0x802B0EE8: lwc1        $f0, 0x16EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16EC);
    // 0x802B0EEC: nop

    // 0x802B0EF0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802B0EF4: nop

    // 0x802B0EF8: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x802B0EFC: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x802B0F00: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802B0F04: swc1        $f6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f6.u32l;
    // 0x802B0F08: swc1        $f8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f8.u32l;
L_802B0F0C:
    // 0x802B0F0C: jal         0x802B0834
    // 0x802B0F10: nop

    func_802B0834(rdram, ctx);
        goto after_1;
    // 0x802B0F10: nop

    after_1:
    // 0x802B0F14: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B0F18: addiu       $v1, $v1, 0x5648
    ctx->r3 = ADD32(ctx->r3, 0X5648);
    // 0x802B0F1C: lh          $a1, 0x60($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X60);
    // 0x802B0F20: nop

    // 0x802B0F24: blez        $a1, L_802B0F64
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802B0F28: addiu       $t1, $a1, -0x1
        ctx->r9 = ADD32(ctx->r5, -0X1);
            goto L_802B0F64;
    }
    // 0x802B0F28: addiu       $t1, $a1, -0x1
    ctx->r9 = ADD32(ctx->r5, -0X1);
    // 0x802B0F2C: lw          $a2, 0x58($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X58);
    // 0x802B0F30: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802B0F34: bne         $a2, $zero, L_802B0F64
    if (ctx->r6 != 0) {
        // 0x802B0F38: addiu       $a3, $a3, 0x53F8
        ctx->r7 = ADD32(ctx->r7, 0X53F8);
            goto L_802B0F64;
    }
    // 0x802B0F38: addiu       $a3, $a3, 0x53F8
    ctx->r7 = ADD32(ctx->r7, 0X53F8);
    // 0x802B0F3C: lw          $a0, 0x18($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X18);
    // 0x802B0F40: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B0F44: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B0F48: beq         $a0, $at, L_802B0F5C
    if (ctx->r4 == ctx->r1) {
        // 0x802B0F4C: sw          $t0, 0x5C($v1)
        MEM_W(0X5C, ctx->r3) = ctx->r8;
            goto L_802B0F5C;
    }
    // 0x802B0F4C: sw          $t0, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r8;
    // 0x802B0F50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B0F54: bne         $a0, $at, L_802B0F84
    if (ctx->r4 != ctx->r1) {
        // 0x802B0F58: nop
    
            goto L_802B0F84;
    }
    // 0x802B0F58: nop

L_802B0F5C:
    // 0x802B0F5C: b           L_802B0F84
    // 0x802B0F60: sw          $t0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r8;
        goto L_802B0F84;
    // 0x802B0F60: sw          $t0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r8;
L_802B0F64:
    // 0x802B0F64: lw          $a2, 0x58($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X58);
    // 0x802B0F68: bgtz        $a1, L_802B0F88
    if (SIGNED(ctx->r5) > 0) {
        // 0x802B0F6C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802B0F88;
    }
    // 0x802B0F6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B0F70: lw          $t8, 0x5C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X5C);
    // 0x802B0F74: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802B0F78: bne         $t8, $zero, L_802B0F88
    if (ctx->r24 != 0) {
        // 0x802B0F7C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802B0F88;
    }
    // 0x802B0F7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B0F80: sw          $t9, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r25;
L_802B0F84:
    // 0x802B0F84: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_802B0F88:
    // 0x802B0F88: bne         $a2, $zero, L_802B0FC0
    if (ctx->r6 != 0) {
        // 0x802B0F8C: sh          $t1, 0x60($v1)
        MEM_H(0X60, ctx->r3) = ctx->r9;
            goto L_802B0FC0;
    }
    // 0x802B0F8C: sh          $t1, 0x60($v1)
    MEM_H(0X60, ctx->r3) = ctx->r9;
    // 0x802B0F90: bne         $v0, $t0, L_802B0FC4
    if (ctx->r2 != ctx->r8) {
        // 0x802B0F94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B0FC4;
    }
    // 0x802B0F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B0F98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802B0F9C: lwc1        $f12, 0x1C($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802B0FA0: swc1        $f10, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f10.u32l;
    // 0x802B0FA4: lwc1        $f16, 0x30($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X30);
    // 0x802B0FA8: lwc1        $f14, 0x20($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802B0FAC: swc1        $f16, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f16.u32l;
    // 0x802B0FB0: lwc1        $f18, 0x2C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x802B0FB4: lw          $a2, 0x24($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X24);
    // 0x802B0FB8: jal         0x802B06D0
    // 0x802B0FBC: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    func_802B06D0(rdram, ctx);
        goto after_2;
    // 0x802B0FBC: swc1        $f18, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f18.u32l;
    after_2:
L_802B0FC0:
    // 0x802B0FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B0FC4:
    // 0x802B0FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B0FC8: jr          $ra
    // 0x802B0FCC: nop

    return;
    // 0x802B0FCC: nop

;}
RECOMP_FUNC void func_802B0FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B0FD0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802B0FD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802B0FD8: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802B0FDC: addiu       $s0, $s0, 0x5648
    ctx->r16 = ADD32(ctx->r16, 0X5648);
    // 0x802B0FE0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802B0FE4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802B0FE8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802B0FEC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802B0FF0: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802B0FF4: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x802B0FF8: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802B0FFC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x802B1000: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x802B1004: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802B1008: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802B100C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1010: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802B1014: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x802B1018: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
    // 0x802B101C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802B1020: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802B1024: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B1028: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802B102C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802B1030: sh          $zero, 0x66($sp)
    MEM_H(0X66, ctx->r29) = 0;
    // 0x802B1034: addiu       $t6, $t6, 0x56C0
    ctx->r14 = ADD32(ctx->r14, 0X56C0);
    // 0x802B1038: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x802B103C: addiu       $t9, $s0, 0x6C
    ctx->r25 = ADD32(ctx->r16, 0X6C);
    // 0x802B1040: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x802B1044: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
L_802B1048:
    // 0x802B1048: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802B104C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x802B1050: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802B1054: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x802B1058: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802B105C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802B1060: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x802B1064: bne         $t0, $t9, L_802B1048
    if (ctx->r8 != ctx->r25) {
        // 0x802B1068: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_802B1048;
    }
    // 0x802B1068: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x802B106C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802B1070: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B1074: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802B1078: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x802B107C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B1080: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x802B1084: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x802B1088: nop

    // 0x802B108C: bne         $t1, $at, L_802B10EC
    if (ctx->r9 != ctx->r1) {
        // 0x802B1090: nop
    
            goto L_802B10EC;
    }
    // 0x802B1090: nop

    // 0x802B1094: lwc1        $f2, 0x64($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X64);
    // 0x802B1098: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802B109C: lwc1        $f12, 0x6C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x802B10A0: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x802B10A4: lwc1        $f16, 0x68($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X68);
    // 0x802B10A8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x802B10AC: lui         $at, 0x401C
    ctx->r1 = S32(0X401C << 16);
    // 0x802B10B0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802B10B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802B10B8: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x802B10BC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x802B10C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802B10C4: add.d       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f18.d + ctx->f4.d;
    // 0x802B10C8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x802B10CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802B10D0: sub.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d - ctx->f0.d;
    // 0x802B10D4: cvt.d.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.d = CVT_D_S(ctx->f12.fl);
    // 0x802B10D8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x802B10DC: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x802B10E0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802B10E4: b           L_802B10FC
    // 0x802B10E8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
        goto L_802B10FC;
    // 0x802B10E8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_802B10EC:
    // 0x802B10EC: lwc1        $f8, 0x5C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802B10F0: lwc1        $f10, 0x60($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X60);
    // 0x802B10F4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x802B10F8: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
L_802B10FC:
    // 0x802B10FC: lh          $t2, 0x50B8($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X50B8);
    // 0x802B1100: nop

    // 0x802B1104: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802B1108: jal         0x802A96C0
    // 0x802B110C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_802A96C0(rdram, ctx);
        goto after_0;
    // 0x802B110C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_0:
    // 0x802B1110: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B1114: nop

    // 0x802B1118: sub.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x802B111C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802B1120: nop

    // 0x802B1124: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802B1128: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B112C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1130: nop

    // 0x802B1134: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802B1138: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802B113C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802B1140: jal         0x802A907C
    // 0x802B1144: sh          $t4, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r12;
    func_802A907C(rdram, ctx);
        goto after_1;
    // 0x802B1144: sh          $t4, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r12;
    after_1:
    // 0x802B1148: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x802B114C: jal         0x802A96DC
    // 0x802B1150: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    func_802A96DC(rdram, ctx);
        goto after_2;
    // 0x802B1150: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x802B1154: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1158: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B115C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802B1160: lh          $t7, 0x50B8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X50B8);
    // 0x802B1164: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802B1168: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802B116C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802B1170: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B1174: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1178: nop

    // 0x802B117C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802B1180: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x802B1184: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802B1188: sh          $t8, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r24;
    // 0x802B118C: jal         0x802A96C0
    // 0x802B1190: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_802A96C0(rdram, ctx);
        goto after_3;
    // 0x802B1190: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x802B1194: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B1198: nop

    // 0x802B119C: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x802B11A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802B11A4: nop

    // 0x802B11A8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802B11AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B11B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B11B4: nop

    // 0x802B11B8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802B11BC: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x802B11C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802B11C4: jal         0x802A907C
    // 0x802B11C8: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    func_802A907C(rdram, ctx);
        goto after_4;
    // 0x802B11C8: sh          $t0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r8;
    after_4:
    // 0x802B11CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x802B11D0: jal         0x802A96DC
    // 0x802B11D4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    func_802A96DC(rdram, ctx);
        goto after_5;
    // 0x802B11D4: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_5:
    // 0x802B11D8: lh          $t6, 0x62($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X62);
    // 0x802B11DC: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802B11E0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x802B11E4: lh          $t1, 0x5E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X5E);
    // 0x802B11E8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802B11EC: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802B11F0: nop

    // 0x802B11F4: bc1f        L_802B12AC
    if (!c1cs) {
        // 0x802B11F8: nop
    
            goto L_802B12AC;
    }
    // 0x802B11F8: nop

    // 0x802B11FC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802B1200: lh          $t2, 0x60($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X60);
    // 0x802B1204: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802B1208: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802B120C: nop

    // 0x802B1210: bc1f        L_802B12AC
    if (!c1cs) {
        // 0x802B1214: nop
    
            goto L_802B12AC;
    }
    // 0x802B1214: nop

    // 0x802B1218: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x802B121C: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802B1220: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802B1224: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1228: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x802B122C: nop

    // 0x802B1230: bc1f        L_802B12AC
    if (!c1cs) {
        // 0x802B1234: nop
    
            goto L_802B12AC;
    }
    // 0x802B1234: nop

    // 0x802B1238: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x802B123C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1240: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802B1244: nop

    // 0x802B1248: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802B124C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B1250: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1254: nop

    // 0x802B1258: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802B125C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802B1260: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802B1264: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x802B1268: sra         $t8, $t5, 16
    ctx->r24 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802B126C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x802B1270: nop

    // 0x802B1274: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B1278: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x802B127C: nop

    // 0x802B1280: bc1f        L_802B12AC
    if (!c1cs) {
        // 0x802B1284: nop
    
            goto L_802B12AC;
    }
    // 0x802B1284: nop

    // 0x802B1288: lw          $v0, 0x54C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54C0);
    // 0x802B128C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B1290: beq         $v0, $at, L_802B12AC
    if (ctx->r2 == ctx->r1) {
        // 0x802B1294: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802B12AC;
    }
    // 0x802B1294: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802B1298: beq         $v0, $at, L_802B12AC
    if (ctx->r2 == ctx->r1) {
        // 0x802B129C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802B12AC;
    }
    // 0x802B129C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B12A0: beq         $v0, $at, L_802B12AC
    if (ctx->r2 == ctx->r1) {
        // 0x802B12A4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_802B12AC;
    }
    // 0x802B12A4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802B12A8: bne         $v0, $at, L_802B12C8
    if (ctx->r2 != ctx->r1) {
        // 0x802B12AC: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802B12C8;
    }
L_802B12AC:
    // 0x802B12AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B12B0: lw          $v0, 0x54C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54C0);
    // 0x802B12B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802B12B8: beq         $v0, $at, L_802B12C8
    if (ctx->r2 == ctx->r1) {
        // 0x802B12BC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802B12C8;
    }
    // 0x802B12BC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B12C0: bne         $v0, $at, L_802B12F4
    if (ctx->r2 != ctx->r1) {
        // 0x802B12C4: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802B12F4;
    }
    // 0x802B12C4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
L_802B12C8:
    // 0x802B12C8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802B12CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B12D0: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
    // 0x802B12D4: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802B12D8: nop

    // 0x802B12DC: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
    // 0x802B12E0: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802B12E4: nop

    // 0x802B12E8: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x802B12EC: b           L_802B1828
    // 0x802B12F0: sw          $zero, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = 0;
        goto L_802B1828;
    // 0x802B12F0: sw          $zero, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = 0;
L_802B12F4:
    // 0x802B12F4: lh          $t7, 0x50BA($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X50BA);
    // 0x802B12F8: nop

    // 0x802B12FC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802B1300: jal         0x802A96C0
    // 0x802B1304: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_802A96C0(rdram, ctx);
        goto after_6;
    // 0x802B1304: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_6:
    // 0x802B1308: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B130C: nop

    // 0x802B1310: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x802B1314: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802B1318: nop

    // 0x802B131C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802B1320: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B1324: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1328: nop

    // 0x802B132C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B1330: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x802B1334: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802B1338: jal         0x802A909C
    // 0x802B133C: sh          $t0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r8;
    func_802A909C(rdram, ctx);
        goto after_7;
    // 0x802B133C: sh          $t0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r8;
    after_7:
    // 0x802B1340: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802B1344: jal         0x802A96DC
    // 0x802B1348: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    func_802A96DC(rdram, ctx);
        goto after_8;
    // 0x802B1348: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_8:
    // 0x802B134C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1350: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B1354: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802B1358: lh          $t2, 0x50BA($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X50BA);
    // 0x802B135C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802B1360: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x802B1364: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802B1368: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B136C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1370: nop

    // 0x802B1374: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802B1378: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x802B137C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802B1380: sh          $t1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r9;
    // 0x802B1384: jal         0x802A96C0
    // 0x802B1388: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_802A96C0(rdram, ctx);
        goto after_9;
    // 0x802B1388: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_9:
    // 0x802B138C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802B1390: nop

    // 0x802B1394: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x802B1398: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802B139C: nop

    // 0x802B13A0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802B13A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B13A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B13AC: nop

    // 0x802B13B0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x802B13B4: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x802B13B8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802B13BC: jal         0x802A909C
    // 0x802B13C0: sh          $t4, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r12;
    func_802A909C(rdram, ctx);
        goto after_10;
    // 0x802B13C0: sh          $t4, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r12;
    after_10:
    // 0x802B13C4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x802B13C8: jal         0x802A96DC
    // 0x802B13CC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_802A96DC(rdram, ctx);
        goto after_11;
    // 0x802B13CC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_11:
    // 0x802B13D0: lh          $t5, 0x62($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X62);
    // 0x802B13D4: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x802B13D8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x802B13DC: lh          $t8, 0x5E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5E);
    // 0x802B13E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802B13E4: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802B13E8: nop

    // 0x802B13EC: bc1f        L_802B1564
    if (!c1cs) {
        // 0x802B13F0: lui         $at, 0x4208
        ctx->r1 = S32(0X4208 << 16);
            goto L_802B1564;
    }
    // 0x802B13F0: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x802B13F4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802B13F8: lh          $t7, 0x60($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X60);
    // 0x802B13FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802B1400: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802B1404: nop

    // 0x802B1408: bc1f        L_802B1564
    if (!c1cs) {
        // 0x802B140C: lui         $at, 0x4208
        ctx->r1 = S32(0X4208 << 16);
            goto L_802B1564;
    }
    // 0x802B140C: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x802B1410: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x802B1414: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802B1418: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802B141C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802B1420: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x802B1424: nop

    // 0x802B1428: bc1f        L_802B1564
    if (!c1cs) {
        // 0x802B142C: lui         $at, 0x4208
        ctx->r1 = S32(0X4208 << 16);
            goto L_802B1564;
    }
    // 0x802B142C: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x802B1430: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x802B1434: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802B1438: nop

    // 0x802B143C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802B1440: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B1444: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1448: nop

    // 0x802B144C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B1450: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x802B1454: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802B1458: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x802B145C: sra         $t1, $t6, 16
    ctx->r9 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802B1460: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x802B1464: nop

    // 0x802B1468: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802B146C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802B1470: nop

    // 0x802B1474: bc1f        L_802B1564
    if (!c1cs) {
        // 0x802B1478: lui         $at, 0x4208
        ctx->r1 = S32(0X4208 << 16);
            goto L_802B1564;
    }
    // 0x802B1478: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x802B147C: jal         0x80015B94
    // 0x802B1480: addiu       $a0, $zero, 0x32C
    ctx->r4 = ADD32(0, 0X32C);
    func_80015B94(rdram, ctx);
        goto after_12;
    // 0x802B1480: addiu       $a0, $zero, 0x32C
    ctx->r4 = ADD32(0, 0X32C);
    after_12:
    // 0x802B1484: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1488: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802B148C: lwc1        $f1, 0x16F0($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X16F0);
    // 0x802B1490: lwc1        $f0, 0x16F4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X16F4);
    // 0x802B1494: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802B1498: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x802B149C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802B14A0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B14A4: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x802B14A8: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802B14AC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802B14B0: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x802B14B4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802B14B8: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x802B14BC: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802B14C0: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x802B14C4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802B14C8: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802B14CC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x802B14D0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802B14D4: lwc1        $f10, 0x5C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x802B14D8: swc1        $f16, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f16.u32l;
    // 0x802B14DC: lwc1        $f16, 0x64($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X64);
    // 0x802B14E0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802B14E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B14E8: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x802B14EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802B14F0: lwc1        $f6, 0x16FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X16FC);
    // 0x802B14F4: lwc1        $f7, 0x16F8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X16F8);
    // 0x802B14F8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802B14FC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802B1500: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x802B1504: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x802B1508: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802B150C: lwc1        $f10, 0x68($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X68);
    // 0x802B1510: add.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d + ctx->f8.d;
    // 0x802B1514: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1518: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802B151C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x802B1520: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x802B1524: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x802B1528: lwc1        $f18, 0x1704($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1704);
    // 0x802B152C: lwc1        $f19, 0x1700($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1700);
    // 0x802B1530: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x802B1534: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x802B1538: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802B153C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1540: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x802B1544: add.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d + ctx->f4.d;
    // 0x802B1548: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x802B154C: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x802B1550: jal         0x802B0DAC
    // 0x802B1554: sw          $t2, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r10;
    func_802B0DAC(rdram, ctx);
        goto after_13;
    // 0x802B1554: sw          $t2, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r10;
    after_13:
    // 0x802B1558: b           L_802B182C
    // 0x802B155C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_802B182C;
    // 0x802B155C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802B1560: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
L_802B1564:
    // 0x802B1564: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B1568: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B156C: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x802B1570: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x802B1574: nop

    // 0x802B1578: bc1f        L_802B1628
    if (!c1cs) {
        // 0x802B157C: lh          $t9, 0x66($sp)
        ctx->r25 = MEM_H(ctx->r29, 0X66);
            goto L_802B1628;
    }
    // 0x802B157C: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x802B1580: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802B1584: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x802B1588: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x802B158C: nop

    // 0x802B1590: bc1f        L_802B1628
    if (!c1cs) {
        // 0x802B1594: lh          $t9, 0x66($sp)
        ctx->r25 = MEM_H(ctx->r29, 0X66);
            goto L_802B1628;
    }
    // 0x802B1594: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x802B1598: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802B159C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B15A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802B15A4: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x802B15A8: nop

    // 0x802B15AC: bc1f        L_802B1628
    if (!c1cs) {
        // 0x802B15B0: lh          $t9, 0x66($sp)
        ctx->r25 = MEM_H(ctx->r29, 0X66);
            goto L_802B1628;
    }
    // 0x802B15B0: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x802B15B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B15B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802B15BC: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x802B15C0: nop

    // 0x802B15C4: bc1f        L_802B1628
    if (!c1cs) {
        // 0x802B15C8: lh          $t9, 0x66($sp)
        ctx->r25 = MEM_H(ctx->r29, 0X66);
            goto L_802B1628;
    }
    // 0x802B15C8: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x802B15CC: sub.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802B15D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802B15D4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B15D8: div.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x802B15DC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802B15E0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802B15E4: addiu       $t3, $sp, 0x58
    ctx->r11 = ADD32(ctx->r29, 0X58);
    // 0x802B15E8: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x802B15EC: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x802B15F0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802B15F4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802B15F8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802B15FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B1600: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802B1604: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802B1608: jal         0x802B0960
    // 0x802B160C: nop

    func_802B0960(rdram, ctx);
        goto after_14;
    // 0x802B160C: nop

    after_14:
    // 0x802B1610: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802B1614: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1618: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B161C: sw          $t8, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r24;
    // 0x802B1620: sh          $t7, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r15;
    // 0x802B1624: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
L_802B1628:
    // 0x802B1628: lui         $at, 0xC228
    ctx->r1 = S32(0XC228 << 16);
    // 0x802B162C: bne         $t9, $zero, L_802B16F4
    if (ctx->r25 != 0) {
        // 0x802B1630: lh          $t4, 0x66($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X66);
            goto L_802B16F4;
    }
    // 0x802B1630: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
    // 0x802B1634: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B1638: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B163C: lui         $at, 0xC208
    ctx->r1 = S32(0XC208 << 16);
    // 0x802B1640: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x802B1644: nop

    // 0x802B1648: bc1f        L_802B16F4
    if (!c1cs) {
        // 0x802B164C: lh          $t4, 0x66($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X66);
            goto L_802B16F4;
    }
    // 0x802B164C: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
    // 0x802B1650: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802B1654: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x802B1658: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x802B165C: nop

    // 0x802B1660: bc1f        L_802B16F4
    if (!c1cs) {
        // 0x802B1664: lh          $t4, 0x66($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X66);
            goto L_802B16F4;
    }
    // 0x802B1664: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
    // 0x802B1668: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802B166C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1670: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802B1674: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802B1678: nop

    // 0x802B167C: bc1f        L_802B16F4
    if (!c1cs) {
        // 0x802B1680: lh          $t4, 0x66($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X66);
            goto L_802B16F4;
    }
    // 0x802B1680: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
    // 0x802B1684: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B1688: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802B168C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802B1690: nop

    // 0x802B1694: bc1f        L_802B16F4
    if (!c1cs) {
        // 0x802B1698: lh          $t4, 0x66($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X66);
            goto L_802B16F4;
    }
    // 0x802B1698: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
    // 0x802B169C: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802B16A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B16A4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B16A8: div.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802B16AC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802B16B0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802B16B4: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x802B16B8: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x802B16BC: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x802B16C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802B16C4: sh          $t2, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r10;
    // 0x802B16C8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802B16CC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802B16D0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802B16D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B16D8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802B16DC: jal         0x802B0960
    // 0x802B16E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_802B0960(rdram, ctx);
        goto after_15;
    // 0x802B16E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x802B16E4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x802B16E8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B16EC: sw          $t3, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r11;
    // 0x802B16F0: lh          $t4, 0x66($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X66);
L_802B16F4:
    // 0x802B16F4: lui         $at, 0xC228
    ctx->r1 = S32(0XC228 << 16);
    // 0x802B16F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802B16FC: bne         $t4, $zero, L_802B17C0
    if (ctx->r12 != 0) {
        // 0x802B1700: lh          $t6, 0x66($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X66);
            goto L_802B17C0;
    }
    // 0x802B1700: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
    // 0x802B1704: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802B1708: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x802B170C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x802B1710: nop

    // 0x802B1714: bc1f        L_802B17C0
    if (!c1cs) {
        // 0x802B1718: lh          $t6, 0x66($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X66);
            goto L_802B17C0;
    }
    // 0x802B1718: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
    // 0x802B171C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802B1720: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x802B1724: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x802B1728: nop

    // 0x802B172C: bc1f        L_802B17C0
    if (!c1cs) {
        // 0x802B1730: lh          $t6, 0x66($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X66);
            goto L_802B17C0;
    }
    // 0x802B1730: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
    // 0x802B1734: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802B1738: lwc1        $f0, 0x3C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x802B173C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802B1740: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x802B1744: nop

    // 0x802B1748: bc1f        L_802B17C0
    if (!c1cs) {
        // 0x802B174C: lh          $t6, 0x66($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X66);
            goto L_802B17C0;
    }
    // 0x802B174C: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
    // 0x802B1750: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802B1754: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x802B1758: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x802B175C: nop

    // 0x802B1760: bc1f        L_802B17C0
    if (!c1cs) {
        // 0x802B1764: lh          $t6, 0x66($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X66);
            goto L_802B17C0;
    }
    // 0x802B1764: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
    // 0x802B1768: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802B176C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B1770: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B1774: div.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x802B1778: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x802B177C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x802B1780: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x802B1784: addiu       $t8, $sp, 0x54
    ctx->r24 = ADD32(ctx->r29, 0X54);
    // 0x802B1788: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x802B178C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B1790: sh          $t9, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r25;
    // 0x802B1794: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802B1798: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B179C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802B17A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B17A4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802B17A8: jal         0x802B0960
    // 0x802B17AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_802B0960(rdram, ctx);
        goto after_16;
    // 0x802B17AC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x802B17B0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x802B17B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B17B8: sw          $t0, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r8;
    // 0x802B17BC: lh          $t6, 0x66($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X66);
L_802B17C0:
    // 0x802B17C0: nop

    // 0x802B17C4: beq         $t6, $zero, L_802B1820
    if (ctx->r14 == 0) {
        // 0x802B17C8: nop
    
            goto L_802B1820;
    }
    // 0x802B17C8: nop

    // 0x802B17CC: jal         0x80015B94
    // 0x802B17D0: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    func_80015B94(rdram, ctx);
        goto after_17;
    // 0x802B17D0: addiu       $a0, $zero, 0x328
    ctx->r4 = ADD32(0, 0X328);
    after_17:
    // 0x802B17D4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x802B17D8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802B17DC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802B17E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B17E4: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x802B17E8: mul.d       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x802B17EC: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802B17F0: nop

    // 0x802B17F4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x802B17F8: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x802B17FC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802B1800: mul.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x802B1804: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x802B1808: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x802B180C: mul.d       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x802B1810: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x802B1814: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x802B1818: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x802B181C: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
L_802B1820:
    // 0x802B1820: jal         0x802B0DAC
    // 0x802B1824: nop

    func_802B0DAC(rdram, ctx);
        goto after_18;
    // 0x802B1824: nop

    after_18:
L_802B1828:
    // 0x802B1828: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_802B182C:
    // 0x802B182C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802B1830: jr          $ra
    // 0x802B1834: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802B1834: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802B1838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1838: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B183C: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B1840: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x802B1844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B1848: beq         $v1, $zero, L_802B19A4
    if (ctx->r3 == 0) {
        // 0x802B184C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B19A4;
    }
    // 0x802B184C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B1850: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B1854: beq         $v1, $at, L_802B186C
    if (ctx->r3 == ctx->r1) {
        // 0x802B1858: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B186C;
    }
    // 0x802B1858: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B185C: beq         $v1, $at, L_802B199C
    if (ctx->r3 == ctx->r1) {
        // 0x802B1860: nop
    
            goto L_802B199C;
    }
    // 0x802B1860: nop

    // 0x802B1864: b           L_802B19A8
    // 0x802B1868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B19A8;
    // 0x802B1868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B186C:
    // 0x802B186C: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B1870: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802B1874: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802B1878: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x802B187C: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802B1880: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802B1884: swc1        $f16, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f16.u32l;
    // 0x802B1888: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B188C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802B1890: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802B1894: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x802B1898: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x802B189C: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x802B18A0: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x802B18A4: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x802B18A8: bc1t        L_802B18DC
    if (c1cs) {
        // 0x802B18AC: swc1        $f10, 0x18($v0)
        MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
            goto L_802B18DC;
    }
    // 0x802B18AC: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x802B18B0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B18B4: lw          $t6, 0x540C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X540C);
    // 0x802B18B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B18BC: bne         $t6, $zero, L_802B196C
    if (ctx->r14 != 0) {
        // 0x802B18C0: nop
    
            goto L_802B196C;
    }
    // 0x802B18C0: nop

    // 0x802B18C4: lwc1        $f9, 0x1708($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1708);
    // 0x802B18C8: lwc1        $f8, 0x170C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X170C);
    // 0x802B18CC: nop

    // 0x802B18D0: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x802B18D4: nop

    // 0x802B18D8: bc1f        L_802B196C
    if (!c1cs) {
        // 0x802B18DC: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802B196C;
    }
L_802B18DC:
    // 0x802B18DC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B18E0: addiu       $a0, $a0, 0x50A8
    ctx->r4 = ADD32(ctx->r4, 0X50A8);
    // 0x802B18E4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B18E8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802B18EC: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x802B18F0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802B18F4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802B18F8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x802B18FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802B1900: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x802B1904: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B1908: sw          $zero, 0x68($t0)
    MEM_W(0X68, ctx->r8) = 0;
    // 0x802B190C: lw          $t1, 0x540C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X540C);
    // 0x802B1910: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1914: bne         $t1, $zero, L_802B196C
    if (ctx->r9 != 0) {
        // 0x802B1918: nop
    
            goto L_802B196C;
    }
    // 0x802B1918: nop

    // 0x802B191C: lwc1        $f10, 0x1710($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1710);
    // 0x802B1920: lwc1        $f18, 0x48($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802B1924: swc1        $f10, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f10.u32l;
    // 0x802B1928: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B192C: nop

    // 0x802B1930: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802B1934: jal         0x802B0D20
    // 0x802B1938: swc1        $f4, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f4.u32l;
    func_802B0D20(rdram, ctx);
        goto after_0;
    // 0x802B1938: swc1        $f4, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f4.u32l;
    after_0:
    // 0x802B193C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1940: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B1944: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802B1948: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802B194C: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802B1950: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1954: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x802B1958: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x802B195C: swc1        $f10, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f10.u32l;
    // 0x802B1960: lwc1        $f16, 0x1714($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1714);
    // 0x802B1964: nop

    // 0x802B1968: swc1        $f16, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f16.u32l;
L_802B196C:
    // 0x802B196C: jal         0x802B0D20
    // 0x802B1970: nop

    func_802B0D20(rdram, ctx);
        goto after_1;
    // 0x802B1970: nop

    after_1:
    // 0x802B1974: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1978: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B197C: lw          $t2, 0x34($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X34);
    // 0x802B1980: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B1984: beq         $t2, $at, L_802B19A4
    if (ctx->r10 == ctx->r1) {
        // 0x802B1988: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_802B19A4;
    }
    // 0x802B1988: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x802B198C: jal         0x802B0FD0
    // 0x802B1990: sh          $t3, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r11;
    func_802B0FD0(rdram, ctx);
        goto after_2;
    // 0x802B1990: sh          $t3, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r11;
    after_2:
    // 0x802B1994: b           L_802B19A8
    // 0x802B1998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B19A8;
    // 0x802B1998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B199C:
    // 0x802B199C: jal         0x802B0DAC
    // 0x802B19A0: nop

    func_802B0DAC(rdram, ctx);
        goto after_3;
    // 0x802B19A0: nop

    after_3:
L_802B19A4:
    // 0x802B19A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B19A8:
    // 0x802B19A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B19AC: jr          $ra
    // 0x802B19B0: nop

    return;
    // 0x802B19B0: nop

;}
RECOMP_FUNC void func_802B19B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B19B4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B19B8: addiu       $v0, $v0, 0x5198
    ctx->r2 = ADD32(ctx->r2, 0X5198);
    // 0x802B19BC: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x802B19C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802B19C4: beq         $t6, $zero, L_802B19F4
    if (ctx->r14 == 0) {
        // 0x802B19C8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B19F4;
    }
    // 0x802B19C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B19CC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B19D0: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802B19D4: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802B19D8: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802B19DC: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802B19E0: lwc1        $f10, 0x28($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802B19E4: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x802B19E8: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x802B19EC: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    // 0x802B19F0: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
L_802B19F4:
    // 0x802B19F4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B19F8: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802B19FC: lwc1        $f12, 0x28($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X28);
    // 0x802B1A00: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x802B1A04: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x802B1A08: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x802B1A0C: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x802B1A10: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x802B1A14: lw          $t7, 0x5C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5C);
    // 0x802B1A18: sub.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f18.fl;
    // 0x802B1A1C: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    // 0x802B1A20: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x802B1A24: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x802B1A28: sub.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x802B1A2C: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    // 0x802B1A30: swc1        $f18, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f18.u32l;
    // 0x802B1A34: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x802B1A38: beq         $t7, $zero, L_802B1A68
    if (ctx->r15 == 0) {
        // 0x802B1A3C: swc1        $f2, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
            goto L_802B1A68;
    }
    // 0x802B1A3C: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x802B1A40: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B1A44: addiu       $a1, $a1, 0x55B8
    ctx->r5 = ADD32(ctx->r5, 0X55B8);
    // 0x802B1A48: lwc1        $f4, 0x70($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X70);
    // 0x802B1A4C: lwc1        $f6, 0x74($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X74);
    // 0x802B1A50: lwc1        $f8, 0x78($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X78);
    // 0x802B1A54: lwc1        $f10, 0x7C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x802B1A58: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x802B1A5C: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x802B1A60: swc1        $f8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f8.u32l;
    // 0x802B1A64: swc1        $f10, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f10.u32l;
L_802B1A68:
    // 0x802B1A68: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x802B1A6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1A70: lwc1        $f0, 0x1718($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X1718);
    // 0x802B1A74: swc1        $f12, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f12.u32l;
    // 0x802B1A78: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802B1A7C: lwc1        $f18, 0x2C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x802B1A80: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B1A84: swc1        $f18, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f18.u32l;
    // 0x802B1A88: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x802B1A8C: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x802B1A90: addiu       $a1, $a1, 0x55B8
    ctx->r5 = ADD32(ctx->r5, 0X55B8);
    // 0x802B1A94: swc1        $f4, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->f4.u32l;
    // 0x802B1A98: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x802B1A9C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802B1AA0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B1AA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802B1AA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B1AAC: swc1        $f8, 0x8C($t1)
    MEM_W(0X8C, ctx->r9) = ctx->f8.u32l;
    // 0x802B1AB0: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802B1AB4: lwc1        $f10, 0xC($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0XC);
    // 0x802B1AB8: nop

    // 0x802B1ABC: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x802B1AC0: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x802B1AC4: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x802B1AC8: nop

    // 0x802B1ACC: swc1        $f18, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f18.u32l;
    // 0x802B1AD0: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x802B1AD4: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x802B1AD8: nop

    // 0x802B1ADC: swc1        $f4, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->f4.u32l;
    // 0x802B1AE0: lwc1        $f6, 0x18($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X18);
    // 0x802B1AE4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x802B1AE8: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B1AEC: swc1        $f8, 0x8C($t5)
    MEM_W(0X8C, ctx->r13) = ctx->f8.u32l;
    // 0x802B1AF0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B1AF4: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x802B1AF8: lw          $v1, 0xCC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XCC);
    // 0x802B1AFC: nop

    // 0x802B1B00: sh          $a2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r6;
    // 0x802B1B04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802B1B08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x802B1B0C: lw          $v1, 0xCC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XCC);
    // 0x802B1B10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802B1B14: sh          $a2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r6;
    // 0x802B1B18: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802B1B1C: lw          $v1, -0x16FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X16FC);
    // 0x802B1B20: lwc1        $f10, -0x1784($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1784);
    // 0x802B1B24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B1B28: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x802B1B2C: lwc1        $f18, -0x1780($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1780);
    // 0x802B1B30: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B1B34: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x802B1B38: lwc1        $f4, -0x177C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X177C);
    // 0x802B1B3C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B1B40: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x802B1B44: lwc1        $f6, -0x173C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X173C);
    // 0x802B1B48: addiu       $v0, $v0, -0x16D0
    ctx->r2 = ADD32(ctx->r2, -0X16D0);
    // 0x802B1B4C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B1B50: addiu       $v0, $v0, 0x1F0
    ctx->r2 = ADD32(ctx->r2, 0X1F0);
    // 0x802B1B54: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x802B1B58: lwc1        $f10, -0x1AC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X1AC);
    // 0x802B1B5C: lw          $v1, -0x124($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X124);
    // 0x802B1B60: nop

    // 0x802B1B64: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x802B1B68: lwc1        $f18, -0x1A8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0X1A8);
    // 0x802B1B6C: nop

    // 0x802B1B70: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x802B1B74: lwc1        $f4, -0x1A4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X1A4);
    // 0x802B1B78: nop

    // 0x802B1B7C: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x802B1B80: lwc1        $f6, -0x164($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X164);
    // 0x802B1B84: nop

    // 0x802B1B88: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B1B8C: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x802B1B90: lwc1        $f10, -0xB4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0XB4);
    // 0x802B1B94: lw          $v1, -0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X2C);
    // 0x802B1B98: nop

    // 0x802B1B9C: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x802B1BA0: lwc1        $f18, -0xB0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, -0XB0);
    // 0x802B1BA4: nop

    // 0x802B1BA8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x802B1BAC: lwc1        $f4, -0xAC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0XAC);
    // 0x802B1BB0: nop

    // 0x802B1BB4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x802B1BB8: lwc1        $f6, -0x6C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X6C);
    // 0x802B1BBC: nop

    // 0x802B1BC0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802B1BC4: swc1        $f8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f8.u32l;
    // 0x802B1BC8: lw          $v1, 0xCC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XCC);
    // 0x802B1BCC: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B1BD0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802B1BD4: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1BD8: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802B1BDC: nop

    // 0x802B1BE0: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1BE4: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802B1BE8: nop

    // 0x802B1BEC: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1BF0: lwc1        $f16, 0x8C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x802B1BF4: nop

    // 0x802B1BF8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1BFC: beq         $a0, $a1, L_802B1CEC
    if (ctx->r4 == ctx->r5) {
        // 0x802B1C00: nop
    
            goto L_802B1CEC;
    }
    // 0x802B1C00: nop

L_802B1C04:
    // 0x802B1C04: swc1        $f18, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f18.u32l;
    // 0x802B1C08: lw          $v1, 0x1C4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C4);
    // 0x802B1C0C: lwc1        $f16, 0x13C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X13C);
    // 0x802B1C10: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802B1C14: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C18: lwc1        $f16, 0x140($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X140);
    // 0x802B1C1C: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x802B1C20: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C24: lwc1        $f16, -0x29C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X29C);
    // 0x802B1C28: nop

    // 0x802B1C2C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C30: lwc1        $f16, -0x25C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X25C);
    // 0x802B1C34: nop

    // 0x802B1C38: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1C3C: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C40: lw          $v1, -0x124($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X124);
    // 0x802B1C44: lwc1        $f16, -0x1AC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1AC);
    // 0x802B1C48: nop

    // 0x802B1C4C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C50: lwc1        $f16, -0x1A8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1A8);
    // 0x802B1C54: nop

    // 0x802B1C58: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C5C: lwc1        $f16, -0x1A4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1A4);
    // 0x802B1C60: nop

    // 0x802B1C64: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C68: lwc1        $f16, -0x164($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X164);
    // 0x802B1C6C: nop

    // 0x802B1C70: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1C74: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C78: lw          $v1, -0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X2C);
    // 0x802B1C7C: lwc1        $f16, -0xB4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XB4);
    // 0x802B1C80: nop

    // 0x802B1C84: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C88: lwc1        $f16, -0xB0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XB0);
    // 0x802B1C8C: nop

    // 0x802B1C90: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1C94: lwc1        $f16, -0xAC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XAC);
    // 0x802B1C98: nop

    // 0x802B1C9C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1CA0: lwc1        $f16, -0x6C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X6C);
    // 0x802B1CA4: nop

    // 0x802B1CA8: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1CAC: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1CB0: lw          $v1, 0xCC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XCC);
    // 0x802B1CB4: lwc1        $f16, 0x44($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802B1CB8: nop

    // 0x802B1CBC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1CC0: lwc1        $f16, 0x48($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X48);
    // 0x802B1CC4: nop

    // 0x802B1CC8: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1CCC: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x802B1CD0: nop

    // 0x802B1CD4: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1CD8: lwc1        $f16, 0x8C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x802B1CDC: nop

    // 0x802B1CE0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1CE4: bne         $a0, $a1, L_802B1C04
    if (ctx->r4 != ctx->r5) {
        // 0x802B1CE8: nop
    
            goto L_802B1C04;
    }
    // 0x802B1CE8: nop

L_802B1CEC:
    // 0x802B1CEC: swc1        $f18, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f18.u32l;
    // 0x802B1CF0: lwc1        $f16, 0x13C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X13C);
    // 0x802B1CF4: lw          $v1, 0x1C4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C4);
    // 0x802B1CF8: addiu       $v0, $v0, 0x3E0
    ctx->r2 = ADD32(ctx->r2, 0X3E0);
    // 0x802B1CFC: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D00: lwc1        $f16, -0x2A0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X2A0);
    // 0x802B1D04: nop

    // 0x802B1D08: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D0C: lwc1        $f16, -0x29C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X29C);
    // 0x802B1D10: nop

    // 0x802B1D14: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D18: lwc1        $f16, -0x25C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X25C);
    // 0x802B1D1C: nop

    // 0x802B1D20: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1D24: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D28: lwc1        $f16, -0x1AC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1AC);
    // 0x802B1D2C: lw          $v1, -0x124($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X124);
    // 0x802B1D30: nop

    // 0x802B1D34: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D38: lwc1        $f16, -0x1A8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1A8);
    // 0x802B1D3C: nop

    // 0x802B1D40: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D44: lwc1        $f16, -0x1A4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X1A4);
    // 0x802B1D48: nop

    // 0x802B1D4C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D50: lwc1        $f16, -0x164($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X164);
    // 0x802B1D54: nop

    // 0x802B1D58: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1D5C: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D60: lwc1        $f16, -0xB4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XB4);
    // 0x802B1D64: lw          $v1, -0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X2C);
    // 0x802B1D68: nop

    // 0x802B1D6C: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D70: lwc1        $f16, -0xB0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XB0);
    // 0x802B1D74: nop

    // 0x802B1D78: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D7C: lwc1        $f16, -0xAC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XAC);
    // 0x802B1D80: nop

    // 0x802B1D84: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D88: lwc1        $f16, -0x6C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X6C);
    // 0x802B1D8C: nop

    // 0x802B1D90: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802B1D94: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x802B1D98: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B1D9C: lh          $t6, 0x5274($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X5274);
    // 0x802B1DA0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1DA4: beq         $t6, $zero, L_802B1EB4
    if (ctx->r14 == 0) {
        // 0x802B1DA8: addiu       $v0, $v0, 0x5648
        ctx->r2 = ADD32(ctx->r2, 0X5648);
            goto L_802B1EB4;
    }
    // 0x802B1DA8: addiu       $v0, $v0, 0x5648
    ctx->r2 = ADD32(ctx->r2, 0X5648);
    // 0x802B1DAC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802B1DB0: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x802B1DB4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x802B1DB8: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802B1DBC: nop

    // 0x802B1DC0: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x802B1DC4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x802B1DC8: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802B1DCC: nop

    // 0x802B1DD0: swc1        $f18, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f18.u32l;
    // 0x802B1DD4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x802B1DD8: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802B1DDC: nop

    // 0x802B1DE0: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
    // 0x802B1DE4: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802B1DE8: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x802B1DEC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x802B1DF0: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802B1DF4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x802B1DF8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x802B1DFC: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x802B1E00: nop

    // 0x802B1E04: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x802B1E08: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802B1E0C: jal         0x8007FA40
    // 0x802B1E10: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x802B1E10: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_0:
    // 0x802B1E14: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802B1E18: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802B1E1C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802B1E20: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x802B1E24: jal         0x8001C5D0
    // 0x802B1E28: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
    func_8001C5D0(rdram, ctx);
        goto after_1;
    // 0x802B1E28: neg.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = -ctx->f16.fl;
    after_1:
    // 0x802B1E2C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802B1E30: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x802B1E34: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x802B1E38: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B1E3C: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x802B1E40: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802B1E44: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B1E48: beq         $v0, $at, L_802B1E58
    if (ctx->r2 == ctx->r1) {
        // 0x802B1E4C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802B1E58;
    }
    // 0x802B1E4C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B1E50: bne         $v0, $at, L_802B1E64
    if (ctx->r2 != ctx->r1) {
        // 0x802B1E54: nop
    
            goto L_802B1E64;
    }
    // 0x802B1E54: nop

L_802B1E58:
    // 0x802B1E58: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x802B1E5C: b           L_802B1EA8
    // 0x802B1E60: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
        goto L_802B1EA8;
    // 0x802B1E60: sh          $zero, 0x66($t1)
    MEM_H(0X66, ctx->r9) = 0;
L_802B1E64:
    // 0x802B1E64: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802B1E68: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x802B1E6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802B1E70: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802B1E74: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802B1E78: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802B1E7C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802B1E80: nop

    // 0x802B1E84: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802B1E88: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802B1E8C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802B1E90: nop

    // 0x802B1E94: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x802B1E98: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x802B1E9C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802B1EA0: sh          $t3, 0x66($t4)
    MEM_H(0X66, ctx->r12) = ctx->r11;
    // 0x802B1EA4: nop

L_802B1EA8:
    // 0x802B1EA8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802B1EAC: nop

    // 0x802B1EB0: sh          $zero, 0x68($t5)
    MEM_H(0X68, ctx->r13) = 0;
L_802B1EB4:
    // 0x802B1EB4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802B1EB8: addiu       $v1, $v1, 0x3B20
    ctx->r3 = ADD32(ctx->r3, 0X3B20);
    // 0x802B1EBC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802B1EC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802B1EC4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802B1EC8: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x802B1ECC: swc1        $f4, 0x1B94($a0)
    MEM_W(0X1B94, ctx->r4) = ctx->f4.u32l;
    // 0x802B1ED0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802B1ED4: nop

    // 0x802B1ED8: swc1        $f6, 0x1B98($a0)
    MEM_W(0X1B98, ctx->r4) = ctx->f6.u32l;
    // 0x802B1EDC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802B1EE0: jal         0x80053C7C
    // 0x802B1EE4: swc1        $f8, 0x1B9C($a0)
    MEM_W(0X1B9C, ctx->r4) = ctx->f8.u32l;
    func_80053C7C(rdram, ctx);
        goto after_2;
    // 0x802B1EE4: swc1        $f8, 0x1B9C($a0)
    MEM_W(0X1B9C, ctx->r4) = ctx->f8.u32l;
    after_2:
    // 0x802B1EE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B1EEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x802B1EF0: jr          $ra
    // 0x802B1EF4: nop

    return;
    // 0x802B1EF4: nop

;}
RECOMP_FUNC void func_802B1EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B1EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B1F00: jal         0x802B1838
    // 0x802B1F04: nop

    func_802B1838(rdram, ctx);
        goto after_0;
    // 0x802B1F04: nop

    after_0:
    // 0x802B1F08: jal         0x802AF1F4
    // 0x802B1F0C: nop

    func_802AF1F4(rdram, ctx);
        goto after_1;
    // 0x802B1F0C: nop

    after_1:
    // 0x802B1F10: jal         0x802B00C0
    // 0x802B1F14: nop

    func_802B00C0(rdram, ctx);
        goto after_2;
    // 0x802B1F14: nop

    after_2:
    // 0x802B1F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B1F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B1F20: jr          $ra
    // 0x802B1F24: nop

    return;
    // 0x802B1F24: nop

;}
RECOMP_FUNC void func_802B1F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B1F28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B1F2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B1F30: jal         0x802B1EF8
    // 0x802B1F34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_802B1EF8(rdram, ctx);
        goto after_0;
    // 0x802B1F34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802B1F38: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B1F3C: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x802B1F40: nop

    // 0x802B1F44: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x802B1F48: bne         $at, $zero, L_802B204C
    if (ctx->r1 != 0) {
        // 0x802B1F4C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802B204C;
    }
    // 0x802B1F4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B1F50: jal         0x802A6CA4
    // 0x802B1F54: nop

    func_802A6CA4(rdram, ctx);
        goto after_1;
    // 0x802B1F54: nop

    after_1:
    // 0x802B1F58: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802B1F5C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B1F60: jal         0x802A8E30
    // 0x802B1F64: sw          $t7, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r15;
    func_802A8E30(rdram, ctx);
        goto after_2;
    // 0x802B1F64: sw          $t7, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r15;
    after_2:
    // 0x802B1F68: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802B1F6C: addiu       $s0, $s0, 0x53F8
    ctx->r16 = ADD32(ctx->r16, 0X53F8);
    // 0x802B1F70: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802B1F74: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x802B1F78: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B1F7C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B1F80: lh          $t0, 0x1E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1E);
    // 0x802B1F84: addiu       $a0, $a0, 0x54B8
    ctx->r4 = ADD32(ctx->r4, 0X54B8);
    // 0x802B1F88: addiu       $v1, $v1, 0x55B8
    ctx->r3 = ADD32(ctx->r3, 0X55B8);
    // 0x802B1F8C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802B1F90: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x802B1F94: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x802B1F98: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802B1F9C: sh          $t1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r9;
    // 0x802B1FA0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802B1FA4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x802B1FA8: jal         0x802A9CC0
    // 0x802B1FAC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    func_802A9CC0(rdram, ctx);
        goto after_3;
    // 0x802B1FAC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    after_3:
    // 0x802B1FB0: jal         0x802ABC24
    // 0x802B1FB4: nop

    func_802ABC24(rdram, ctx);
        goto after_4;
    // 0x802B1FB4: nop

    after_4:
    // 0x802B1FB8: lh          $t2, 0x1E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1E);
    // 0x802B1FBC: nop

    // 0x802B1FC0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802B1FC4: bne         $t3, $zero, L_802B1FD4
    if (ctx->r11 != 0) {
        // 0x802B1FC8: nop
    
            goto L_802B1FD4;
    }
    // 0x802B1FC8: nop

    // 0x802B1FCC: jal         0x802ABB1C
    // 0x802B1FD0: nop

    func_802ABB1C(rdram, ctx);
        goto after_5;
    // 0x802B1FD0: nop

    after_5:
L_802B1FD4:
    // 0x802B1FD4: jal         0x802AC484
    // 0x802B1FD8: nop

    func_802AC484(rdram, ctx);
        goto after_6;
    // 0x802B1FD8: nop

    after_6:
    // 0x802B1FDC: lh          $t4, 0x1E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X1E);
    // 0x802B1FE0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802B1FE4: bne         $t4, $at, L_802B2020
    if (ctx->r12 != ctx->r1) {
        // 0x802B1FE8: nop
    
            goto L_802B2020;
    }
    // 0x802B1FE8: nop

    // 0x802B1FEC: jal         0x802A8D7C
    // 0x802B1FF0: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    func_802A8D7C(rdram, ctx);
        goto after_7;
    // 0x802B1FF0: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    after_7:
    // 0x802B1FF4: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x802B1FF8: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802B1FFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2000: jal         0x80079CEC
    // 0x802B2004: sw          $t5, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r13;
    func_80079CEC(rdram, ctx);
        goto after_8;
    // 0x802B2004: sw          $t5, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r13;
    after_8:
    // 0x802B2008: jal         0x802AC484
    // 0x802B200C: nop

    func_802AC484(rdram, ctx);
        goto after_9;
    // 0x802B200C: nop

    after_9:
    // 0x802B2010: jal         0x802AC4D4
    // 0x802B2014: nop

    func_802AC4D4(rdram, ctx);
        goto after_10;
    // 0x802B2014: nop

    after_10:
    // 0x802B2018: b           L_802B2028
    // 0x802B201C: nop

        goto L_802B2028;
    // 0x802B201C: nop

L_802B2020:
    // 0x802B2020: jal         0x802AC4D4
    // 0x802B2024: nop

    func_802AC4D4(rdram, ctx);
        goto after_11;
    // 0x802B2024: nop

    after_11:
L_802B2028:
    // 0x802B2028: jal         0x802AB488
    // 0x802B202C: nop

    func_802AB488(rdram, ctx);
        goto after_12;
    // 0x802B202C: nop

    after_12:
    // 0x802B2030: jal         0x802AB8E8
    // 0x802B2034: nop

    func_802AB8E8(rdram, ctx);
        goto after_13;
    // 0x802B2034: nop

    after_13:
    // 0x802B2038: jal         0x802AB7A0
    // 0x802B203C: nop

    func_802AB7A0(rdram, ctx);
        goto after_14;
    // 0x802B203C: nop

    after_14:
    // 0x802B2040: jal         0x8002198C
    // 0x802B2044: nop

    func_8002198C(rdram, ctx);
        goto after_15;
    // 0x802B2044: nop

    after_15:
    // 0x802B2048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802B204C:
    // 0x802B204C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B2050: jr          $ra
    // 0x802B2054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802B2054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802B2058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2058: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B205C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B2060: jal         0x802B1EF8
    // 0x802B2064: nop

    func_802B1EF8(rdram, ctx);
        goto after_0;
    // 0x802B2064: nop

    after_0:
    // 0x802B2068: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B206C: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x802B2070: nop

    // 0x802B2074: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x802B2078: bne         $at, $zero, L_802B21BC
    if (ctx->r1 != 0) {
        // 0x802B207C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B21BC;
    }
    // 0x802B207C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B2080: jal         0x802A6CA4
    // 0x802B2084: nop

    func_802A6CA4(rdram, ctx);
        goto after_1;
    // 0x802B2084: nop

    after_1:
    // 0x802B2088: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B208C: lw          $t7, 0x56A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X56A4);
    // 0x802B2090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2094: bne         $t7, $at, L_802B20A4
    if (ctx->r15 != ctx->r1) {
        // 0x802B2098: addiu       $t8, $zero, 0x8
        ctx->r24 = ADD32(0, 0X8);
            goto L_802B20A4;
    }
    // 0x802B2098: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802B209C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B20A0: sw          $t8, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r24;
L_802B20A4:
    // 0x802B20A4: jal         0x802A8E30
    // 0x802B20A8: nop

    func_802A8E30(rdram, ctx);
        goto after_2;
    // 0x802B20A8: nop

    after_2:
    // 0x802B20AC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B20B0: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B20B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802B20B8: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x802B20BC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B20C0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B20C4: lh          $t1, 0x1E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X1E);
    // 0x802B20C8: lh          $t3, 0x40($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X40);
    // 0x802B20CC: addiu       $a1, $a1, 0x54B8
    ctx->r5 = ADD32(ctx->r5, 0X54B8);
    // 0x802B20D0: addiu       $a0, $a0, 0x55B8
    ctx->r4 = ADD32(ctx->r4, 0X55B8);
    // 0x802B20D4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x802B20D8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x802B20DC: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x802B20E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802B20E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x802B20E8: sh          $t2, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r10;
    // 0x802B20EC: sh          $t4, 0x40($v1)
    MEM_H(0X40, ctx->r3) = ctx->r12;
    // 0x802B20F0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802B20F4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x802B20F8: jal         0x802A9CC0
    // 0x802B20FC: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    func_802A9CC0(rdram, ctx);
        goto after_3;
    // 0x802B20FC: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    after_3:
    // 0x802B2100: jal         0x802ABC24
    // 0x802B2104: nop

    func_802ABC24(rdram, ctx);
        goto after_4;
    // 0x802B2104: nop

    after_4:
    // 0x802B2108: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B210C: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B2110: lh          $t5, 0x1E($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X1E);
    // 0x802B2114: nop

    // 0x802B2118: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x802B211C: bne         $t6, $zero, L_802B212C
    if (ctx->r14 != 0) {
        // 0x802B2120: nop
    
            goto L_802B212C;
    }
    // 0x802B2120: nop

    // 0x802B2124: jal         0x802ABB1C
    // 0x802B2128: nop

    func_802ABB1C(rdram, ctx);
        goto after_5;
    // 0x802B2128: nop

    after_5:
L_802B212C:
    // 0x802B212C: jal         0x802AC484
    // 0x802B2130: nop

    func_802AC484(rdram, ctx);
        goto after_6;
    // 0x802B2130: nop

    after_6:
    // 0x802B2134: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B2138: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B213C: lh          $t7, 0x1E($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X1E);
    // 0x802B2140: nop

    // 0x802B2144: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x802B2148: bne         $at, $zero, L_802B2154
    if (ctx->r1 != 0) {
        // 0x802B214C: nop
    
            goto L_802B2154;
    }
    // 0x802B214C: nop

    // 0x802B2150: sh          $zero, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = 0;
L_802B2154:
    // 0x802B2154: lh          $t8, 0x40($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X40);
    // 0x802B2158: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B215C: bne         $t8, $at, L_802B2184
    if (ctx->r24 != ctx->r1) {
        // 0x802B2160: nop
    
            goto L_802B2184;
    }
    // 0x802B2160: nop

    // 0x802B2164: jal         0x802A8D7C
    // 0x802B2168: nop

    func_802A8D7C(rdram, ctx);
        goto after_7;
    // 0x802B2168: nop

    after_7:
    // 0x802B216C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B2170: addiu       $v1, $v1, 0x53F8
    ctx->r3 = ADD32(ctx->r3, 0X53F8);
    // 0x802B2174: jal         0x802AC4D4
    // 0x802B2178: sh          $zero, 0x40($v1)
    MEM_H(0X40, ctx->r3) = 0;
    func_802AC4D4(rdram, ctx);
        goto after_8;
    // 0x802B2178: sh          $zero, 0x40($v1)
    MEM_H(0X40, ctx->r3) = 0;
    after_8:
    // 0x802B217C: b           L_802B218C
    // 0x802B2180: nop

        goto L_802B218C;
    // 0x802B2180: nop

L_802B2184:
    // 0x802B2184: jal         0x802AC4D4
    // 0x802B2188: nop

    func_802AC4D4(rdram, ctx);
        goto after_9;
    // 0x802B2188: nop

    after_9:
L_802B218C:
    // 0x802B218C: jal         0x802AB488
    // 0x802B2190: nop

    func_802AB488(rdram, ctx);
        goto after_10;
    // 0x802B2190: nop

    after_10:
    // 0x802B2194: jal         0x802AB8E8
    // 0x802B2198: nop

    func_802AB8E8(rdram, ctx);
        goto after_11;
    // 0x802B2198: nop

    after_11:
    // 0x802B219C: jal         0x802AB7A0
    // 0x802B21A0: nop

    func_802AB7A0(rdram, ctx);
        goto after_12;
    // 0x802B21A0: nop

    after_12:
    // 0x802B21A4: jal         0x8002198C
    // 0x802B21A8: nop

    func_8002198C(rdram, ctx);
        goto after_13;
    // 0x802B21A8: nop

    after_13:
    // 0x802B21AC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802B21B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B21B4: sw          $t9, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r25;
    // 0x802B21B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B21BC:
    // 0x802B21BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B21C0: jr          $ra
    // 0x802B21C4: nop

    return;
    // 0x802B21C4: nop

;}
RECOMP_FUNC void func_802B21C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B21C8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B21CC: lw          $t6, 0x56A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X56A4);
    // 0x802B21D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B21D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B21D8: bne         $t6, $at, L_802B21F0
    if (ctx->r14 != ctx->r1) {
        // 0x802B21DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B21F0;
    }
    // 0x802B21DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B21E0: jal         0x802A8418
    // 0x802B21E4: nop

    func_802A8418(rdram, ctx);
        goto after_0;
    // 0x802B21E4: nop

    after_0:
    // 0x802B21E8: b           L_802B21FC
    // 0x802B21EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B21FC;
    // 0x802B21EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B21F0:
    // 0x802B21F0: jal         0x802A86B8
    // 0x802B21F4: nop

    func_802A86B8(rdram, ctx);
        goto after_1;
    // 0x802B21F4: nop

    after_1:
    // 0x802B21F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B21FC:
    // 0x802B21FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B2200: jr          $ra
    // 0x802B2204: nop

    return;
    // 0x802B2204: nop

;}
RECOMP_FUNC void func_802B2208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2208: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B220C: lh          $t6, 0x543C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X543C);
    // 0x802B2210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B2214: beq         $t6, $zero, L_802B2268
    if (ctx->r14 == 0) {
        // 0x802B2218: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B2268;
    }
    // 0x802B2218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B221C: jal         0x8007BE90
    // 0x802B2220: nop

    func_8007BE90(rdram, ctx);
        goto after_0;
    // 0x802B2220: nop

    after_0:
    // 0x802B2224: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B2228: lw          $t7, 0x567C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X567C);
    // 0x802B222C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2230: bne         $t7, $at, L_802B2240
    if (ctx->r15 != ctx->r1) {
        // 0x802B2234: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802B2240;
    }
    // 0x802B2234: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B2238: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802B223C: sh          $zero, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = 0;
L_802B2240:
    // 0x802B2240: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B2244: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802B2248: lh          $t8, 0x4E($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4E);
    // 0x802B224C: nop

    // 0x802B2250: beq         $t8, $zero, L_802B2268
    if (ctx->r24 == 0) {
        // 0x802B2254: nop
    
            goto L_802B2268;
    }
    // 0x802B2254: nop

    // 0x802B2258: lh          $t9, 0x4C($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4C);
    // 0x802B225C: nop

    // 0x802B2260: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802B2264: sh          $t0, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r8;
L_802B2268:
    // 0x802B2268: jal         0x802B1EF8
    // 0x802B226C: nop

    func_802B1EF8(rdram, ctx);
        goto after_1;
    // 0x802B226C: nop

    after_1:
    // 0x802B2270: jal         0x802A67A4
    // 0x802B2274: nop

    func_802A67A4(rdram, ctx);
        goto after_2;
    // 0x802B2274: nop

    after_2:
    // 0x802B2278: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B227C: addiu       $a2, $a2, 0x53F8
    ctx->r6 = ADD32(ctx->r6, 0X53F8);
    // 0x802B2280: lw          $v0, 0x38($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X38);
    // 0x802B2284: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802B2288: beq         $v0, $zero, L_802B22B0
    if (ctx->r2 == 0) {
        // 0x802B228C: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_802B22B0;
    }
    // 0x802B228C: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x802B2290: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2294: beq         $v0, $at, L_802B22E0
    if (ctx->r2 == ctx->r1) {
        // 0x802B2298: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802B22E0;
    }
    // 0x802B2298: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B229C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B22A0: beq         $v0, $at, L_802B2574
    if (ctx->r2 == ctx->r1) {
        // 0x802B22A4: nop
    
            goto L_802B2574;
    }
    // 0x802B22A4: nop

    // 0x802B22A8: b           L_802B25CC
    // 0x802B22AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B25CC;
    // 0x802B22AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B22B0:
    // 0x802B22B0: sw          $t1, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r9;
    // 0x802B22B4: jal         0x802A6DF4
    // 0x802B22B8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_802A6DF4(rdram, ctx);
        goto after_3;
    // 0x802B22B8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_3:
    // 0x802B22BC: jal         0x802A7888
    // 0x802B22C0: nop

    func_802A7888(rdram, ctx);
        goto after_4;
    // 0x802B22C0: nop

    after_4:
    // 0x802B22C4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B22C8: addiu       $a0, $a0, 0x4FD2
    ctx->r4 = ADD32(ctx->r4, 0X4FD2);
    // 0x802B22CC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x802B22D0: jal         0x802A814C
    // 0x802B22D4: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    func_802A814C(rdram, ctx);
        goto after_5;
    // 0x802B22D4: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    after_5:
    // 0x802B22D8: b           L_802B25CC
    // 0x802B22DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B25CC;
    // 0x802B22DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B22E0:
    // 0x802B22E0: addiu       $a0, $a0, 0x4FD2
    ctx->r4 = ADD32(ctx->r4, 0X4FD2);
    // 0x802B22E4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x802B22E8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x802B22EC: sltiu       $v0, $v1, 0x1
    ctx->r2 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802B22F0: addiu       $t3, $v1, -0x1
    ctx->r11 = ADD32(ctx->r3, -0X1);
    // 0x802B22F4: beq         $v0, $zero, L_802B2314
    if (ctx->r2 == 0) {
        // 0x802B22F8: sh          $t3, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r11;
            goto L_802B2314;
    }
    // 0x802B22F8: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x802B22FC: jal         0x802A6DF4
    // 0x802B2300: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_6;
    // 0x802B2300: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    after_6:
    // 0x802B2304: jal         0x802A776C
    // 0x802B2308: nop

    func_802A776C(rdram, ctx);
        goto after_7;
    // 0x802B2308: nop

    after_7:
    // 0x802B230C: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802B2310: addiu       $a2, $a2, 0x53F8
    ctx->r6 = ADD32(ctx->r6, 0X53F8);
L_802B2314:
    // 0x802B2314: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B2318: lw          $v0, 0x56A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56A4);
    // 0x802B231C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2320: beq         $v0, $at, L_802B2330
    if (ctx->r2 == ctx->r1) {
        // 0x802B2324: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B2330;
    }
    // 0x802B2324: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B2328: bne         $v0, $at, L_802B25CC
    if (ctx->r2 != ctx->r1) {
        // 0x802B232C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B25CC;
    }
    // 0x802B232C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B2330:
    // 0x802B2330: jal         0x80087D40
    // 0x802B2334: sh          $zero, 0x44($a2)
    MEM_H(0X44, ctx->r6) = 0;
    func_80087D40(rdram, ctx);
        goto after_8;
    // 0x802B2334: sh          $zero, 0x44($a2)
    MEM_H(0X44, ctx->r6) = 0;
    after_8:
    // 0x802B2338: jal         0x80027B60
    // 0x802B233C: nop

    func_80027B60(rdram, ctx);
        goto after_9;
    // 0x802B233C: nop

    after_9:
    // 0x802B2340: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B2344: addiu       $v1, $v1, 0x54B8
    ctx->r3 = ADD32(ctx->r3, 0X54B8);
    // 0x802B2348: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B234C: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802B2350: addiu       $a0, $a0, 0x55B8
    ctx->r4 = ADD32(ctx->r4, 0X55B8);
    // 0x802B2354: addiu       $t4, $t4, 0x5538
    ctx->r12 = ADD32(ctx->r12, 0X5538);
    // 0x802B2358: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x802B235C: addiu       $t6, $v1, 0x78
    ctx->r14 = ADD32(ctx->r3, 0X78);
L_802B2360:
    // 0x802B2360: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802B2364: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x802B2368: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x802B236C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x802B2370: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x802B2374: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x802B2378: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x802B237C: bne         $t7, $t6, L_802B2360
    if (ctx->r15 != ctx->r14) {
        // 0x802B2380: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_802B2360;
    }
    // 0x802B2380: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x802B2384: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x802B2388: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802B238C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x802B2390: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x802B2394: addiu       $t8, $t8, 0x5600
    ctx->r24 = ADD32(ctx->r24, 0X5600);
    // 0x802B2398: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x802B239C: addiu       $t0, $a0, 0x3C
    ctx->r8 = ADD32(ctx->r4, 0X3C);
    // 0x802B23A0: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
L_802B23A4:
    // 0x802B23A4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802B23A8: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x802B23AC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802B23B0: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x802B23B4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802B23B8: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x802B23BC: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x802B23C0: bne         $t1, $t0, L_802B23A4
    if (ctx->r9 != ctx->r8) {
        // 0x802B23C4: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_802B23A4;
    }
    // 0x802B23C4: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x802B23C8: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802B23CC: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B23D0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802B23D4: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x802B23D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B23DC: sw          $t0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r8;
    // 0x802B23E0: lw          $t2, 0x56A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X56A4);
    // 0x802B23E4: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802B23E8: beq         $t2, $at, L_802B2430
    if (ctx->r10 == ctx->r1) {
        // 0x802B23EC: addiu       $t3, $t3, 0x56C0
        ctx->r11 = ADD32(ctx->r11, 0X56C0);
            goto L_802B2430;
    }
    // 0x802B23EC: addiu       $t3, $t3, 0x56C0
    ctx->r11 = ADD32(ctx->r11, 0X56C0);
    // 0x802B23F0: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802B23F4: addiu       $t5, $t5, 0x5648
    ctx->r13 = ADD32(ctx->r13, 0X5648);
    // 0x802B23F8: addiu       $t7, $t5, 0x6C
    ctx->r15 = ADD32(ctx->r13, 0X6C);
L_802B23FC:
    // 0x802B23FC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802B2400: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x802B2404: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x802B2408: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x802B240C: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x802B2410: sw          $at, -0x8($t3)
    MEM_W(-0X8, ctx->r11) = ctx->r1;
    // 0x802B2414: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x802B2418: bne         $t5, $t7, L_802B23FC
    if (ctx->r13 != ctx->r15) {
        // 0x802B241C: sw          $at, -0x4($t3)
        MEM_W(-0X4, ctx->r11) = ctx->r1;
            goto L_802B23FC;
    }
    // 0x802B241C: sw          $at, -0x4($t3)
    MEM_W(-0X4, ctx->r11) = ctx->r1;
    // 0x802B2420: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802B2424: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x802B2428: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x802B242C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
L_802B2430:
    // 0x802B2430: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x802B2434: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B2438: lw          $t9, 0xCC($t4)
    ctx->r25 = MEM_W(ctx->r12, 0XCC);
    // 0x802B243C: addiu       $v0, $v0, 0x5738
    ctx->r2 = ADD32(ctx->r2, 0X5738);
    // 0x802B2440: lw          $t0, 0x30($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X30);
    // 0x802B2444: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x802B2448: addiu       $t8, $t0, 0x54
    ctx->r24 = ADD32(ctx->r8, 0X54);
L_802B244C:
    // 0x802B244C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802B2450: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x802B2454: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x802B2458: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x802B245C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x802B2460: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x802B2464: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x802B2468: bne         $t0, $t8, L_802B244C
    if (ctx->r8 != ctx->r24) {
        // 0x802B246C: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_802B244C;
    }
    // 0x802B246C: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x802B2470: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x802B2474: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B2478: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x802B247C: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x802B2480: addiu       $t6, $t6, 0x5798
    ctx->r14 = ADD32(ctx->r14, 0X5798);
    // 0x802B2484: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x802B2488: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802B248C: nop

    // 0x802B2490: lw          $t5, 0xCC($t7)
    ctx->r13 = MEM_W(ctx->r15, 0XCC);
    // 0x802B2494: nop

    // 0x802B2498: lw          $t3, 0x30($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X30);
    // 0x802B249C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802B24A0: addiu       $t9, $t3, 0x54
    ctx->r25 = ADD32(ctx->r11, 0X54);
L_802B24A4:
    // 0x802B24A4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x802B24A8: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x802B24AC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802B24B0: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x802B24B4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802B24B8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802B24BC: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x802B24C0: bne         $t3, $t9, L_802B24A4
    if (ctx->r11 != ctx->r25) {
        // 0x802B24C4: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_802B24A4;
    }
    // 0x802B24C4: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x802B24C8: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x802B24CC: nop

    // 0x802B24D0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802B24D4: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x802B24D8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B24DC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x802B24E0: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x802B24E4: nop

    // 0x802B24E8: bne         $t1, $at, L_802B2530
    if (ctx->r9 != ctx->r1) {
        // 0x802B24EC: nop
    
            goto L_802B2530;
    }
    // 0x802B24EC: nop

    // 0x802B24F0: lh          $t2, 0x70($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X70);
    // 0x802B24F4: lhu         $t8, 0x2($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X2);
    // 0x802B24F8: sll         $t7, $t2, 3
    ctx->r15 = S32(ctx->r10 << 3);
    // 0x802B24FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802B2500: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x802B2504: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x802B2508: andi        $t0, $t8, 0x9FFF
    ctx->r8 = ctx->r24 & 0X9FFF;
    // 0x802B250C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x802B2510: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x802B2514: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x802B2518: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x802B251C: lh          $t5, -0x1D72($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1D72);
    // 0x802B2520: sh          $zero, 0x12($v0)
    MEM_H(0X12, ctx->r2) = 0;
    // 0x802B2524: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x802B2528: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x802B252C: sh          $t5, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r13;
L_802B2530:
    // 0x802B2530: jal         0x80021960
    // 0x802B2534: nop

    func_80021960(rdram, ctx);
        goto after_10;
    // 0x802B2534: nop

    after_10:
    // 0x802B2538: jal         0x80015B94
    // 0x802B253C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015B94(rdram, ctx);
        goto after_11;
    // 0x802B253C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
    // 0x802B2540: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802B2544: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B2548: sb          $t4, -0x2F9A($at)
    MEM_B(-0X2F9A, ctx->r1) = ctx->r12;
    // 0x802B254C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B2550: sb          $zero, -0x3298($at)
    MEM_B(-0X3298, ctx->r1) = 0;
    // 0x802B2554: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B2558: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B255C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x802B2560: addiu       $a0, $a0, 0x517C
    ctx->r4 = ADD32(ctx->r4, 0X517C);
    // 0x802B2564: sw          $t9, 0x5430($at)
    MEM_W(0X5430, ctx->r1) = ctx->r25;
    // 0x802B2568: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x802B256C: b           L_802B25C8
    // 0x802B2570: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
        goto L_802B25C8;
    // 0x802B2570: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
L_802B2574:
    // 0x802B2574: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B2578: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x802B257C: nop

    // 0x802B2580: slti        $at, $t6, 0xF0
    ctx->r1 = SIGNED(ctx->r14) < 0XF0 ? 1 : 0;
    // 0x802B2584: bne         $at, $zero, L_802B25C8
    if (ctx->r1 != 0) {
        // 0x802B2588: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802B25C8;
    }
    // 0x802B2588: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802B258C: addiu       $a0, $a0, 0x517C
    ctx->r4 = ADD32(ctx->r4, 0X517C);
    // 0x802B2590: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x802B2594: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802B2598: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x802B259C: bne         $v1, $zero, L_802B25C8
    if (ctx->r3 != 0) {
        // 0x802B25A0: sw          $t1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r9;
            goto L_802B25C8;
    }
    // 0x802B25A0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x802B25A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B25A8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802B25AC: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x802B25B0: sw          $t8, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r24;
    // 0x802B25B4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802B25B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802B25BC: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    // 0x802B25C0: jal         0x8001B854
    // 0x802B25C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_12;
    // 0x802B25C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
L_802B25C8:
    // 0x802B25C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B25CC:
    // 0x802B25CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B25D0: jr          $ra
    // 0x802B25D4: nop

    return;
    // 0x802B25D4: nop

;}
RECOMP_FUNC void func_802B25D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B25D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B25DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B25E0: jal         0x802B1EF8
    // 0x802B25E4: nop

    func_802B1EF8(rdram, ctx);
        goto after_0;
    // 0x802B25E4: nop

    after_0:
    // 0x802B25E8: jal         0x802A67A4
    // 0x802B25EC: nop

    func_802A67A4(rdram, ctx);
        goto after_1;
    // 0x802B25EC: nop

    after_1:
    // 0x802B25F0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B25F4: lw          $t6, 0x5428($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5428);
    // 0x802B25F8: nop

    // 0x802B25FC: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x802B2600: beq         $at, $zero, L_802B28EC
    if (ctx->r1 == 0) {
        // 0x802B2604: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_802B28EC;
    }
    // 0x802B2604: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802B2608: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B260C: addu        $at, $at, $t6
    gpr jr_addend_802B2618 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802B2610: lw          $t6, 0x171C($at)
    ctx->r14 = ADD32(ctx->r1, 0X171C);
    // 0x802B2614: nop

    // 0x802B2618: jr          $t6
    // 0x802B261C: nop

    switch (jr_addend_802B2618 >> 2) {
        case 0: goto L_802B2620; break;
        case 1: goto L_802B26BC; break;
        case 2: goto L_802B2788; break;
        case 3: goto L_802B281C; break;
        case 4: goto L_802B2894; break;
        default: switch_error(__func__, 0x802B2618, 0x802C171C);
    }
    // 0x802B261C: nop

L_802B2620:
    // 0x802B2620: jal         0x802A6E4C
    // 0x802B2624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802A6E4C(rdram, ctx);
        goto after_2;
    // 0x802B2624: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x802B2628: jal         0x802A814C
    // 0x802B262C: nop

    func_802A814C(rdram, ctx);
        goto after_3;
    // 0x802B262C: nop

    after_3:
    // 0x802B2630: jal         0x802AB334
    // 0x802B2634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB334(rdram, ctx);
        goto after_4;
    // 0x802B2634: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x802B2638: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B263C: jal         0x802AB2EC
    // 0x802B2640: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_802AB2EC(rdram, ctx);
        goto after_5;
    // 0x802B2640: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x802B2644: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802B2648: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x802B264C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802B2650: bne         $at, $zero, L_802B2670
    if (ctx->r1 != 0) {
        // 0x802B2654: nop
    
            goto L_802B2670;
    }
    // 0x802B2654: nop

    // 0x802B2658: jal         0x802A6DF4
    // 0x802B265C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_6;
    // 0x802B265C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_6:
    // 0x802B2660: jal         0x802A776C
    // 0x802B2664: nop

    func_802A776C(rdram, ctx);
        goto after_7;
    // 0x802B2664: nop

    after_7:
    // 0x802B2668: b           L_802B26A8
    // 0x802B266C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
        goto L_802B26A8;
    // 0x802B266C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_802B2670:
    // 0x802B2670: jal         0x802AB334
    // 0x802B2674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB334(rdram, ctx);
        goto after_8;
    // 0x802B2674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x802B2678: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B267C: jal         0x802AB2EC
    // 0x802B2680: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_802AB2EC(rdram, ctx);
        goto after_9;
    // 0x802B2680: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_9:
    // 0x802B2684: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802B2688: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x802B268C: bne         $v0, $v1, L_802B26A8
    if (ctx->r2 != ctx->r3) {
        // 0x802B2690: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_802B26A8;
    }
    // 0x802B2690: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B2694: jal         0x802A6DF4
    // 0x802B2698: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_10;
    // 0x802B2698: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_10:
    // 0x802B269C: jal         0x802A776C
    // 0x802B26A0: nop

    func_802A776C(rdram, ctx);
        goto after_11;
    // 0x802B26A0: nop

    after_11:
    // 0x802B26A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_802B26A8:
    // 0x802B26A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B26AC: jal         0x802A6DA4
    // 0x802B26B0: sw          $t7, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r15;
    func_802A6DA4(rdram, ctx);
        goto after_12;
    // 0x802B26B0: sw          $t7, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r15;
    after_12:
    // 0x802B26B4: b           L_802B28F0
    // 0x802B26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B28F0;
    // 0x802B26B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B26BC:
    // 0x802B26BC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B26C0: lw          $v0, 0x56A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56A4);
    // 0x802B26C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B26C8: beq         $v0, $at, L_802B26D8
    if (ctx->r2 == ctx->r1) {
        // 0x802B26CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B26D8;
    }
    // 0x802B26CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B26D0: bne         $v0, $at, L_802B28F0
    if (ctx->r2 != ctx->r1) {
        // 0x802B26D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B28F0;
    }
    // 0x802B26D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B26D8:
    // 0x802B26D8: jal         0x802B21C8
    // 0x802B26DC: nop

    func_802B21C8(rdram, ctx);
        goto after_13;
    // 0x802B26DC: nop

    after_13:
    // 0x802B26E0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802B26E4: lw          $t8, 0x56A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X56A4);
    // 0x802B26E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B26EC: bne         $t8, $at, L_802B2718
    if (ctx->r24 != ctx->r1) {
        // 0x802B26F0: nop
    
            goto L_802B2718;
    }
    // 0x802B26F0: nop

    // 0x802B26F4: jal         0x802A7260
    // 0x802B26F8: nop

    func_802A7260(rdram, ctx);
        goto after_14;
    // 0x802B26F8: nop

    after_14:
    // 0x802B26FC: jal         0x802A71CC
    // 0x802B2700: nop

    func_802A71CC(rdram, ctx);
        goto after_15;
    // 0x802B2700: nop

    after_15:
    // 0x802B2704: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802B2708: jal         0x802A6DF4
    // 0x802B270C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_802A6DF4(rdram, ctx);
        goto after_16;
    // 0x802B270C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_16:
    // 0x802B2710: b           L_802B2734
    // 0x802B2714: nop

        goto L_802B2734;
    // 0x802B2714: nop

L_802B2718:
    // 0x802B2718: jal         0x802A7344
    // 0x802B271C: nop

    func_802A7344(rdram, ctx);
        goto after_17;
    // 0x802B271C: nop

    after_17:
    // 0x802B2720: jal         0x802A7138
    // 0x802B2724: nop

    func_802A7138(rdram, ctx);
        goto after_18;
    // 0x802B2724: nop

    after_18:
    // 0x802B2728: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x802B272C: jal         0x802A6DF4
    // 0x802B2730: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_19;
    // 0x802B2730: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_19:
L_802B2734:
    // 0x802B2734: jal         0x802AFCC8
    // 0x802B2738: nop

    func_802AFCC8(rdram, ctx);
        goto after_20;
    // 0x802B2738: nop

    after_20:
    // 0x802B273C: beq         $v0, $zero, L_802B2758
    if (ctx->r2 == 0) {
        // 0x802B2740: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802B2758;
    }
    // 0x802B2740: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2744: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2748: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B274C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x802B2750: b           L_802B2768
    // 0x802B2754: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_802B2768;
    // 0x802B2754: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_802B2758:
    // 0x802B2758: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B275C: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x802B2760: jal         0x80087D40
    // 0x802B2764: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    func_80087D40(rdram, ctx);
        goto after_21;
    // 0x802B2764: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    after_21:
L_802B2768:
    // 0x802B2768: jal         0x80027B60
    // 0x802B276C: nop

    func_80027B60(rdram, ctx);
        goto after_22;
    // 0x802B276C: nop

    after_22:
    // 0x802B2770: jal         0x802AC254
    // 0x802B2774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AC254(rdram, ctx);
        goto after_23;
    // 0x802B2774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
    // 0x802B2778: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802B277C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2780: b           L_802B28EC
    // 0x802B2784: sw          $t1, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r9;
        goto L_802B28EC;
    // 0x802B2784: sw          $t1, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r9;
L_802B2788:
    // 0x802B2788: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B278C: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2790: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802B2794: nop

    // 0x802B2798: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802B279C: bne         $t3, $zero, L_802B28EC
    if (ctx->r11 != 0) {
        // 0x802B27A0: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_802B28EC;
    }
    // 0x802B27A0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802B27A4: jal         0x802AFCC8
    // 0x802B27A8: nop

    func_802AFCC8(rdram, ctx);
        goto after_24;
    // 0x802B27A8: nop

    after_24:
    // 0x802B27AC: beq         $v0, $zero, L_802B27FC
    if (ctx->r2 == 0) {
        // 0x802B27B0: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_802B27FC;
    }
    // 0x802B27B0: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x802B27B4: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x802B27B8: jal         0x802A8BA8
    // 0x802B27BC: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    func_802A8BA8(rdram, ctx);
        goto after_25;
    // 0x802B27BC: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    after_25:
    // 0x802B27C0: jal         0x802AC254
    // 0x802B27C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802AC254(rdram, ctx);
        goto after_26;
    // 0x802B27C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_26:
    // 0x802B27C8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B27CC: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B27D0: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x802B27D4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802B27D8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802B27DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B27E0: sw          $t8, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r24;
    // 0x802B27E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B27E8: sh          $zero, 0x5172($at)
    MEM_H(0X5172, ctx->r1) = 0;
    // 0x802B27EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B27F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B27F4: b           L_802B28EC
    // 0x802B27F8: sh          $t9, 0x5440($at)
    MEM_H(0X5440, ctx->r1) = ctx->r25;
        goto L_802B28EC;
    // 0x802B27F8: sh          $t9, 0x5440($at)
    MEM_H(0X5440, ctx->r1) = ctx->r25;
L_802B27FC:
    // 0x802B27FC: jal         0x80021960
    // 0x802B2800: nop

    func_80021960(rdram, ctx);
        goto after_27;
    // 0x802B2800: nop

    after_27:
    // 0x802B2804: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2808: sw          $zero, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = 0;
    // 0x802B280C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2810: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x802B2814: b           L_802B28EC
    // 0x802B2818: sw          $t0, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r8;
        goto L_802B28EC;
    // 0x802B2818: sw          $t0, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r8;
L_802B281C:
    // 0x802B281C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2820: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2824: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B2828: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x802B282C: bne         $v0, $at, L_802B2860
    if (ctx->r2 != ctx->r1) {
        // 0x802B2830: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_802B2860;
    }
    // 0x802B2830: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x802B2834: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802B2838: nop

    // 0x802B283C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x802B2840: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802B2844: jal         0x802A6B84
    // 0x802B2848: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_802A6B84(rdram, ctx);
        goto after_28;
    // 0x802B2848: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_28:
    // 0x802B284C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2850: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2854: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B2858: nop

    // 0x802B285C: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
L_802B2860:
    // 0x802B2860: bne         $t2, $zero, L_802B28EC
    if (ctx->r10 != 0) {
        // 0x802B2864: sw          $t2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r10;
            goto L_802B28EC;
    }
    // 0x802B2864: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x802B2868: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x802B286C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2870: jal         0x80021960
    // 0x802B2874: sw          $t4, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r12;
    func_80021960(rdram, ctx);
        goto after_29;
    // 0x802B2874: sw          $t4, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r12;
    after_29:
    // 0x802B2878: jal         0x80015B94
    // 0x802B287C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015B94(rdram, ctx);
        goto after_30;
    // 0x802B287C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_30:
    // 0x802B2880: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2884: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2888: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x802B288C: b           L_802B28EC
    // 0x802B2890: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
        goto L_802B28EC;
    // 0x802B2890: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
L_802B2894:
    // 0x802B2894: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802B2898: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x802B289C: lh          $t6, 0x7C4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X7C4);
    // 0x802B28A0: nop

    // 0x802B28A4: slti        $at, $t6, 0xF5
    ctx->r1 = SIGNED(ctx->r14) < 0XF5 ? 1 : 0;
    // 0x802B28A8: bne         $at, $zero, L_802B28EC
    if (ctx->r1 != 0) {
        // 0x802B28AC: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802B28EC;
    }
    // 0x802B28AC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B28B0: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B28B4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B28B8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x802B28BC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x802B28C0: bne         $v0, $zero, L_802B28EC
    if (ctx->r2 != 0) {
        // 0x802B28C4: sw          $t7, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r15;
            goto L_802B28EC;
    }
    // 0x802B28C4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802B28C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B28CC: sw          $t8, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r24;
    // 0x802B28D0: lbu         $t9, 0x754($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X754);
    // 0x802B28D4: nop

    // 0x802B28D8: andi        $t0, $t9, 0xFC
    ctx->r8 = ctx->r25 & 0XFC;
    // 0x802B28DC: jal         0x800603F0
    // 0x802B28E0: sb          $t0, 0x754($a0)
    MEM_B(0X754, ctx->r4) = ctx->r8;
    func_800603F0(rdram, ctx);
        goto after_31;
    // 0x802B28E0: sb          $t0, 0x754($a0)
    MEM_B(0X754, ctx->r4) = ctx->r8;
    after_31:
    // 0x802B28E4: jal         0x802A8B68
    // 0x802B28E8: nop

    func_802A8B68(rdram, ctx);
        goto after_32;
    // 0x802B28E8: nop

    after_32:
L_802B28EC:
    // 0x802B28EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B28F0:
    // 0x802B28F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B28F4: jr          $ra
    // 0x802B28F8: nop

    return;
    // 0x802B28F8: nop

;}
RECOMP_FUNC void func_802B28FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B28FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B2900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B2904: jal         0x802B1EF8
    // 0x802B2908: nop

    func_802B1EF8(rdram, ctx);
        goto after_0;
    // 0x802B2908: nop

    after_0:
    // 0x802B290C: jal         0x802A67A4
    // 0x802B2910: nop

    func_802A67A4(rdram, ctx);
        goto after_1;
    // 0x802B2910: nop

    after_1:
    // 0x802B2914: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B2918: lw          $t6, 0x542C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X542C);
    // 0x802B291C: nop

    // 0x802B2920: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x802B2924: beq         $at, $zero, L_802B2C20
    if (ctx->r1 == 0) {
        // 0x802B2928: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_802B2C20;
    }
    // 0x802B2928: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802B292C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2930: addu        $at, $at, $t6
    gpr jr_addend_802B293C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802B2934: lw          $t6, 0x1730($at)
    ctx->r14 = ADD32(ctx->r1, 0X1730);
    // 0x802B2938: nop

    // 0x802B293C: jr          $t6
    // 0x802B2940: nop

    switch (jr_addend_802B293C >> 2) {
        case 0: goto L_802B2944; break;
        case 1: goto L_802B29E8; break;
        case 2: goto L_802B2AB4; break;
        case 3: goto L_802B2B4C; break;
        case 4: goto L_802B2BC8; break;
        default: switch_error(__func__, 0x802B293C, 0x802C1730);
    }
    // 0x802B2940: nop

L_802B2944:
    // 0x802B2944: jal         0x802A77D4
    // 0x802B2948: nop

    func_802A77D4(rdram, ctx);
        goto after_2;
    // 0x802B2948: nop

    after_2:
    // 0x802B294C: jal         0x802A6E4C
    // 0x802B2950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802A6E4C(rdram, ctx);
        goto after_3;
    // 0x802B2950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802B2954: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802B2958: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B295C: jal         0x802A814C
    // 0x802B2960: sw          $t7, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r15;
    func_802A814C(rdram, ctx);
        goto after_4;
    // 0x802B2960: sw          $t7, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r15;
    after_4:
    // 0x802B2964: jal         0x802AB3C4
    // 0x802B2968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB3C4(rdram, ctx);
        goto after_5;
    // 0x802B2968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802B296C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B2970: jal         0x802AB37C
    // 0x802B2974: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_802AB37C(rdram, ctx);
        goto after_6;
    // 0x802B2974: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x802B2978: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802B297C: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x802B2980: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802B2984: bne         $at, $zero, L_802B29A4
    if (ctx->r1 != 0) {
        // 0x802B2988: nop
    
            goto L_802B29A4;
    }
    // 0x802B2988: nop

    // 0x802B298C: jal         0x802A6DF4
    // 0x802B2990: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_7;
    // 0x802B2990: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_7:
    // 0x802B2994: jal         0x802A776C
    // 0x802B2998: nop

    func_802A776C(rdram, ctx);
        goto after_8;
    // 0x802B2998: nop

    after_8:
    // 0x802B299C: b           L_802B29D8
    // 0x802B29A0: nop

        goto L_802B29D8;
    // 0x802B29A0: nop

L_802B29A4:
    // 0x802B29A4: jal         0x802AB3C4
    // 0x802B29A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB3C4(rdram, ctx);
        goto after_9;
    // 0x802B29A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x802B29AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B29B0: jal         0x802AB37C
    // 0x802B29B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_802AB37C(rdram, ctx);
        goto after_10;
    // 0x802B29B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x802B29B8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802B29BC: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x802B29C0: bne         $v0, $v1, L_802B29D8
    if (ctx->r2 != ctx->r3) {
        // 0x802B29C4: nop
    
            goto L_802B29D8;
    }
    // 0x802B29C4: nop

    // 0x802B29C8: jal         0x802A6DF4
    // 0x802B29CC: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_11;
    // 0x802B29CC: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_11:
    // 0x802B29D0: jal         0x802A776C
    // 0x802B29D4: nop

    func_802A776C(rdram, ctx);
        goto after_12;
    // 0x802B29D4: nop

    after_12:
L_802B29D8:
    // 0x802B29D8: jal         0x802A6DA4
    // 0x802B29DC: nop

    func_802A6DA4(rdram, ctx);
        goto after_13;
    // 0x802B29DC: nop

    after_13:
    // 0x802B29E0: b           L_802B2C24
    // 0x802B29E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B2C24;
    // 0x802B29E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B29E8:
    // 0x802B29E8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B29EC: lw          $v0, 0x56A4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56A4);
    // 0x802B29F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B29F4: beq         $v0, $at, L_802B2A04
    if (ctx->r2 == ctx->r1) {
        // 0x802B29F8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802B2A04;
    }
    // 0x802B29F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B29FC: bne         $v0, $at, L_802B2C24
    if (ctx->r2 != ctx->r1) {
        // 0x802B2A00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B2C24;
    }
    // 0x802B2A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B2A04:
    // 0x802B2A04: jal         0x802B21C8
    // 0x802B2A08: nop

    func_802B21C8(rdram, ctx);
        goto after_14;
    // 0x802B2A08: nop

    after_14:
    // 0x802B2A0C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802B2A10: lw          $t8, 0x56A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X56A4);
    // 0x802B2A14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2A18: bne         $t8, $at, L_802B2A44
    if (ctx->r24 != ctx->r1) {
        // 0x802B2A1C: nop
    
            goto L_802B2A44;
    }
    // 0x802B2A1C: nop

    // 0x802B2A20: jal         0x802A7260
    // 0x802B2A24: nop

    func_802A7260(rdram, ctx);
        goto after_15;
    // 0x802B2A24: nop

    after_15:
    // 0x802B2A28: jal         0x802A71CC
    // 0x802B2A2C: nop

    func_802A71CC(rdram, ctx);
        goto after_16;
    // 0x802B2A2C: nop

    after_16:
    // 0x802B2A30: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802B2A34: jal         0x802A6DF4
    // 0x802B2A38: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_802A6DF4(rdram, ctx);
        goto after_17;
    // 0x802B2A38: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_17:
    // 0x802B2A3C: b           L_802B2A60
    // 0x802B2A40: nop

        goto L_802B2A60;
    // 0x802B2A40: nop

L_802B2A44:
    // 0x802B2A44: jal         0x802A7344
    // 0x802B2A48: nop

    func_802A7344(rdram, ctx);
        goto after_18;
    // 0x802B2A48: nop

    after_18:
    // 0x802B2A4C: jal         0x802A7138
    // 0x802B2A50: nop

    func_802A7138(rdram, ctx);
        goto after_19;
    // 0x802B2A50: nop

    after_19:
    // 0x802B2A54: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x802B2A58: jal         0x802A6DF4
    // 0x802B2A5C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_20;
    // 0x802B2A5C: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_20:
L_802B2A60:
    // 0x802B2A60: jal         0x802AFCC8
    // 0x802B2A64: nop

    func_802AFCC8(rdram, ctx);
        goto after_21;
    // 0x802B2A64: nop

    after_21:
    // 0x802B2A68: beq         $v0, $zero, L_802B2A84
    if (ctx->r2 == 0) {
        // 0x802B2A6C: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802B2A84;
    }
    // 0x802B2A6C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2A70: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2A74: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2A78: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x802B2A7C: b           L_802B2A94
    // 0x802B2A80: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_802B2A94;
    // 0x802B2A80: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_802B2A84:
    // 0x802B2A84: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2A88: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x802B2A8C: jal         0x80087D40
    // 0x802B2A90: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    func_80087D40(rdram, ctx);
        goto after_22;
    // 0x802B2A90: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    after_22:
L_802B2A94:
    // 0x802B2A94: jal         0x80027B60
    // 0x802B2A98: nop

    func_80027B60(rdram, ctx);
        goto after_23;
    // 0x802B2A98: nop

    after_23:
    // 0x802B2A9C: jal         0x802AC254
    // 0x802B2AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AC254(rdram, ctx);
        goto after_24;
    // 0x802B2AA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_24:
    // 0x802B2AA4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802B2AA8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2AAC: b           L_802B2C20
    // 0x802B2AB0: sw          $t1, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r9;
        goto L_802B2C20;
    // 0x802B2AB0: sw          $t1, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r9;
L_802B2AB4:
    // 0x802B2AB4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2AB8: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2ABC: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x802B2AC0: nop

    // 0x802B2AC4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x802B2AC8: bne         $t3, $zero, L_802B2C20
    if (ctx->r11 != 0) {
        // 0x802B2ACC: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_802B2C20;
    }
    // 0x802B2ACC: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802B2AD0: jal         0x802AFCC8
    // 0x802B2AD4: nop

    func_802AFCC8(rdram, ctx);
        goto after_25;
    // 0x802B2AD4: nop

    after_25:
    // 0x802B2AD8: beq         $v0, $zero, L_802B2B28
    if (ctx->r2 == 0) {
        // 0x802B2ADC: addiu       $a0, $v0, -0x3
        ctx->r4 = ADD32(ctx->r2, -0X3);
            goto L_802B2B28;
    }
    // 0x802B2ADC: addiu       $a0, $v0, -0x3
    ctx->r4 = ADD32(ctx->r2, -0X3);
    // 0x802B2AE0: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x802B2AE4: jal         0x802A8BA8
    // 0x802B2AE8: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    func_802A8BA8(rdram, ctx);
        goto after_26;
    // 0x802B2AE8: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    after_26:
    // 0x802B2AEC: jal         0x802AC254
    // 0x802B2AF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802AC254(rdram, ctx);
        goto after_27;
    // 0x802B2AF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_27:
    // 0x802B2AF4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2AF8: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2AFC: addiu       $t7, $zero, 0x8C
    ctx->r15 = ADD32(0, 0X8C);
    // 0x802B2B00: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x802B2B04: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802B2B08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2B0C: sw          $t8, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r24;
    // 0x802B2B10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2B14: sh          $zero, 0x5172($at)
    MEM_H(0X5172, ctx->r1) = 0;
    // 0x802B2B18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2B1C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802B2B20: b           L_802B2C20
    // 0x802B2B24: sh          $t9, 0x5440($at)
    MEM_H(0X5440, ctx->r1) = ctx->r25;
        goto L_802B2C20;
    // 0x802B2B24: sh          $t9, 0x5440($at)
    MEM_H(0X5440, ctx->r1) = ctx->r25;
L_802B2B28:
    // 0x802B2B28: jal         0x80021960
    // 0x802B2B2C: nop

    func_80021960(rdram, ctx);
        goto after_28;
    // 0x802B2B2C: nop

    after_28:
    // 0x802B2B30: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B2B34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2B38: sw          $t0, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r8;
    // 0x802B2B3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2B40: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x802B2B44: b           L_802B2C20
    // 0x802B2B48: sw          $t1, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r9;
        goto L_802B2C20;
    // 0x802B2B48: sw          $t1, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r9;
L_802B2B4C:
    // 0x802B2B4C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2B50: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2B54: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B2B58: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x802B2B5C: bne         $v0, $at, L_802B2B90
    if (ctx->r2 != ctx->r1) {
        // 0x802B2B60: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_802B2B90;
    }
    // 0x802B2B60: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x802B2B64: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802B2B68: nop

    // 0x802B2B6C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x802B2B70: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802B2B74: jal         0x802A6B84
    // 0x802B2B78: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_802A6B84(rdram, ctx);
        goto after_29;
    // 0x802B2B78: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_29:
    // 0x802B2B7C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2B80: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2B84: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B2B88: nop

    // 0x802B2B8C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
L_802B2B90:
    // 0x802B2B90: bne         $t3, $zero, L_802B2C20
    if (ctx->r11 != 0) {
        // 0x802B2B94: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_802B2C20;
    }
    // 0x802B2B94: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x802B2B98: jal         0x80021960
    // 0x802B2B9C: nop

    func_80021960(rdram, ctx);
        goto after_30;
    // 0x802B2B9C: nop

    after_30:
    // 0x802B2BA0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802B2BA4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2BA8: sw          $t5, 0x542C($at)
    MEM_W(0X542C, ctx->r1) = ctx->r13;
    // 0x802B2BAC: jal         0x80015B94
    // 0x802B2BB0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015B94(rdram, ctx);
        goto after_31;
    // 0x802B2BB0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_31:
    // 0x802B2BB4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2BB8: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2BBC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x802B2BC0: b           L_802B2C20
    // 0x802B2BC4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_802B2C20;
    // 0x802B2BC4: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_802B2BC8:
    // 0x802B2BC8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802B2BCC: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x802B2BD0: lh          $t7, 0x7C4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X7C4);
    // 0x802B2BD4: nop

    // 0x802B2BD8: slti        $at, $t7, 0xF5
    ctx->r1 = SIGNED(ctx->r15) < 0XF5 ? 1 : 0;
    // 0x802B2BDC: bne         $at, $zero, L_802B2C20
    if (ctx->r1 != 0) {
        // 0x802B2BE0: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802B2C20;
    }
    // 0x802B2BE0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B2BE4: addiu       $a1, $a1, 0x517C
    ctx->r5 = ADD32(ctx->r5, 0X517C);
    // 0x802B2BE8: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x802B2BEC: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802B2BF0: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x802B2BF4: bne         $v0, $zero, L_802B2C20
    if (ctx->r2 != 0) {
        // 0x802B2BF8: sw          $t8, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r24;
            goto L_802B2C20;
    }
    // 0x802B2BF8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802B2BFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2C00: sw          $t9, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r25;
    // 0x802B2C04: lbu         $t0, 0x754($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X754);
    // 0x802B2C08: nop

    // 0x802B2C0C: andi        $t1, $t0, 0xFC
    ctx->r9 = ctx->r8 & 0XFC;
    // 0x802B2C10: jal         0x800603F0
    // 0x802B2C14: sb          $t1, 0x754($a0)
    MEM_B(0X754, ctx->r4) = ctx->r9;
    func_800603F0(rdram, ctx);
        goto after_32;
    // 0x802B2C14: sb          $t1, 0x754($a0)
    MEM_B(0X754, ctx->r4) = ctx->r9;
    after_32:
    // 0x802B2C18: jal         0x802A8B68
    // 0x802B2C1C: nop

    func_802A8B68(rdram, ctx);
        goto after_33;
    // 0x802B2C1C: nop

    after_33:
L_802B2C20:
    // 0x802B2C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B2C24:
    // 0x802B2C24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802B2C28: jr          $ra
    // 0x802B2C2C: nop

    return;
    // 0x802B2C2C: nop

;}
RECOMP_FUNC void func_802B2C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2C30: jr          $ra
    // 0x802B2C34: nop

    return;
    // 0x802B2C34: nop

;}
RECOMP_FUNC void func_802B2C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2C38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B2C3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802B2C40: jal         0x8002F2AC
    // 0x802B2C44: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x802B2C44: nop

    after_0:
    // 0x802B2C48: jal         0x80020270
    // 0x802B2C4C: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x802B2C4C: nop

    after_1:
    // 0x802B2C50: jal         0x8000E300
    // 0x802B2C54: nop

    func_8000E300(rdram, ctx);
        goto after_2;
    // 0x802B2C54: nop

    after_2:
    // 0x802B2C58: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B2C5C: addiu       $t7, $t7, -0x2730
    ctx->r15 = ADD32(ctx->r15, -0X2730);
    // 0x802B2C60: addiu       $t6, $zero, 0x60C
    ctx->r14 = ADD32(0, 0X60C);
    // 0x802B2C64: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802B2C68: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x802B2C6C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802B2C70: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B2C74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B2C78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B2C7C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802B2C80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2C84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2C88: jal         0x802A9DA8
    // 0x802B2C8C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_3;
    // 0x802B2C8C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_3:
    // 0x802B2C90: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B2C94: addiu       $t1, $t1, -0x261C
    ctx->r9 = ADD32(ctx->r9, -0X261C);
    // 0x802B2C98: addiu       $t0, $zero, 0x60C
    ctx->r8 = ADD32(0, 0X60C);
    // 0x802B2C9C: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x802B2CA0: addiu       $t3, $zero, 0xB0
    ctx->r11 = ADD32(0, 0XB0);
    // 0x802B2CA4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802B2CA8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802B2CAC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802B2CB0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802B2CB4: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x802B2CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2CBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2CC0: jal         0x802A9DA8
    // 0x802B2CC4: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_802A9DA8(rdram, ctx);
        goto after_4;
    // 0x802B2CC4: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_4:
    // 0x802B2CC8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B2CCC: addiu       $v1, $v1, 0x50A0
    ctx->r3 = ADD32(ctx->r3, 0X50A0);
    // 0x802B2CD0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802B2CD4: nop

    // 0x802B2CD8: bne         $v0, $zero, L_802B2CE8
    if (ctx->r2 != 0) {
        // 0x802B2CDC: addiu       $t4, $v0, 0x1
        ctx->r12 = ADD32(ctx->r2, 0X1);
            goto L_802B2CE8;
    }
    // 0x802B2CDC: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x802B2CE0: b           L_802B2D2C
    // 0x802B2CE4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_802B2D2C;
    // 0x802B2CE4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_802B2CE8:
    // 0x802B2CE8: jal         0x802A6964
    // 0x802B2CEC: nop

    func_802A6964(rdram, ctx);
        goto after_5;
    // 0x802B2CEC: nop

    after_5:
    // 0x802B2CF0: beq         $v0, $zero, L_802B2D30
    if (ctx->r2 == 0) {
        // 0x802B2CF4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802B2D30;
    }
    // 0x802B2CF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802B2CF8: jal         0x802A6AB4
    // 0x802B2CFC: nop

    func_802A6AB4(rdram, ctx);
        goto after_6;
    // 0x802B2CFC: nop

    after_6:
    // 0x802B2D00: jal         0x8002F2AC
    // 0x802B2D04: nop

    func_8002F2AC(rdram, ctx);
        goto after_7;
    // 0x802B2D04: nop

    after_7:
    // 0x802B2D08: jal         0x80020270
    // 0x802B2D0C: nop

    func_80020270(rdram, ctx);
        goto after_8;
    // 0x802B2D0C: nop

    after_8:
    // 0x802B2D10: jal         0x80297DB0
    // 0x802B2D14: nop

    func_80297DB0(rdram, ctx);
        goto after_9;
    // 0x802B2D14: nop

    after_9:
    // 0x802B2D18: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802B2D1C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802B2D20: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x802B2D24: jal         0x800201A8
    // 0x802B2D28: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_10;
    // 0x802B2D28: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_10:
L_802B2D2C:
    // 0x802B2D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B2D30:
    // 0x802B2D30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B2D34: jr          $ra
    // 0x802B2D38: nop

    return;
    // 0x802B2D38: nop

;}
RECOMP_FUNC void func_802B2D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B2D3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802B2D40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802B2D44: jal         0x8002F2AC
    // 0x802B2D48: nop

    func_8002F2AC(rdram, ctx);
        goto after_0;
    // 0x802B2D48: nop

    after_0:
    // 0x802B2D4C: jal         0x80020270
    // 0x802B2D50: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x802B2D50: nop

    after_1:
    // 0x802B2D54: jal         0x8000E300
    // 0x802B2D58: nop

    func_8000E300(rdram, ctx);
        goto after_2;
    // 0x802B2D58: nop

    after_2:
    // 0x802B2D5C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B2D60: addiu       $t7, $t7, -0x2940
    ctx->r15 = ADD32(ctx->r15, -0X2940);
    // 0x802B2D64: addiu       $t6, $zero, 0x60C
    ctx->r14 = ADD32(0, 0X60C);
    // 0x802B2D68: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802B2D6C: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x802B2D70: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802B2D74: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B2D78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B2D7C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B2D80: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802B2D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2D88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2D8C: jal         0x802A9DA8
    // 0x802B2D90: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_3;
    // 0x802B2D90: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_3:
    // 0x802B2D94: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B2D98: addiu       $t1, $t1, -0x26B8
    ctx->r9 = ADD32(ctx->r9, -0X26B8);
    // 0x802B2D9C: addiu       $t0, $zero, 0x60C
    ctx->r8 = ADD32(0, 0X60C);
    // 0x802B2DA0: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x802B2DA4: addiu       $t3, $zero, 0xB0
    ctx->r11 = ADD32(0, 0XB0);
    // 0x802B2DA8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802B2DAC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802B2DB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802B2DB4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802B2DB8: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x802B2DBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2DC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2DC4: jal         0x802A9DA8
    // 0x802B2DC8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_802A9DA8(rdram, ctx);
        goto after_4;
    // 0x802B2DC8: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_4:
    // 0x802B2DCC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B2DD0: addiu       $v1, $v1, 0x50A0
    ctx->r3 = ADD32(ctx->r3, 0X50A0);
    // 0x802B2DD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802B2DD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802B2DDC: beq         $v0, $zero, L_802B2E0C
    if (ctx->r2 == 0) {
        // 0x802B2DE0: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_802B2E0C;
    }
    // 0x802B2DE0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x802B2DE4: beq         $v0, $at, L_802B2E14
    if (ctx->r2 == ctx->r1) {
        // 0x802B2DE8: addiu       $a0, $zero, 0x66
        ctx->r4 = ADD32(0, 0X66);
            goto L_802B2E14;
    }
    // 0x802B2DE8: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    // 0x802B2DEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802B2DF0: beq         $v0, $at, L_802B2F70
    if (ctx->r2 == ctx->r1) {
        // 0x802B2DF4: addiu       $a0, $zero, 0x66
        ctx->r4 = ADD32(0, 0X66);
            goto L_802B2F70;
    }
    // 0x802B2DF4: addiu       $a0, $zero, 0x66
    ctx->r4 = ADD32(0, 0X66);
    // 0x802B2DF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802B2DFC: beq         $v0, $at, L_802B30B0
    if (ctx->r2 == ctx->r1) {
        // 0x802B2E00: addiu       $a0, $zero, 0x65
        ctx->r4 = ADD32(0, 0X65);
            goto L_802B30B0;
    }
    // 0x802B2E00: addiu       $a0, $zero, 0x65
    ctx->r4 = ADD32(0, 0X65);
    // 0x802B2E04: b           L_802B3218
    // 0x802B2E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802B3218;
    // 0x802B2E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B2E0C:
    // 0x802B2E0C: b           L_802B3214
    // 0x802B2E10: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_802B3214;
    // 0x802B2E10: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_802B2E14:
    // 0x802B2E14: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802B2E18: addiu       $t6, $t6, -0x2970
    ctx->r14 = ADD32(ctx->r14, -0X2970);
    // 0x802B2E1C: addiu       $t5, $zero, 0x60C
    ctx->r13 = ADD32(0, 0X60C);
    // 0x802B2E20: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x802B2E24: addiu       $t8, $zero, 0xB1
    ctx->r24 = ADD32(0, 0XB1);
    // 0x802B2E28: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802B2E2C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x802B2E30: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x802B2E34: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802B2E38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2E40: jal         0x802A9DA8
    // 0x802B2E44: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_5;
    // 0x802B2E44: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_5:
    // 0x802B2E48: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802B2E4C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802B2E50: lhu         $v1, 0x9AC($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B2E54: lh          $t9, 0x9CE($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X9CE);
    // 0x802B2E58: lhu         $a0, 0x9B6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B2E5C: lhu         $a1, 0x9C0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B2E60: andi        $t1, $v1, 0x400
    ctx->r9 = ctx->r3 & 0X400;
    // 0x802B2E64: slti        $t0, $t9, -0xA
    ctx->r8 = SIGNED(ctx->r25) < -0XA ? 1 : 0;
    // 0x802B2E68: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x802B2E6C: andi        $t3, $a0, 0x400
    ctx->r11 = ctx->r4 & 0X400;
    // 0x802B2E70: lhu         $a2, 0x9CA($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B2E74: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x802B2E78: andi        $t5, $a1, 0x400
    ctx->r13 = ctx->r5 & 0X400;
    // 0x802B2E7C: lh          $t9, 0x9B0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X9B0);
    // 0x802B2E80: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x802B2E84: lh          $t2, 0x9BA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X9BA);
    // 0x802B2E88: andi        $t7, $a2, 0x400
    ctx->r15 = ctx->r6 & 0X400;
    // 0x802B2E8C: lh          $t5, 0x9C4($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X9C4);
    // 0x802B2E90: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x802B2E94: slti        $t0, $t9, -0xA
    ctx->r8 = SIGNED(ctx->r25) < -0XA ? 1 : 0;
    // 0x802B2E98: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x802B2E9C: slti        $t3, $t2, -0xA
    ctx->r11 = SIGNED(ctx->r10) < -0XA ? 1 : 0;
    // 0x802B2EA0: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x802B2EA4: slti        $t6, $t5, -0xA
    ctx->r14 = SIGNED(ctx->r13) < -0XA ? 1 : 0;
    // 0x802B2EA8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802B2EAC: beq         $t7, $zero, L_802B2EEC
    if (ctx->r15 == 0) {
        // 0x802B2EB0: andi        $t8, $a2, 0x8000
        ctx->r24 = ctx->r6 & 0X8000;
            goto L_802B2EEC;
    }
    // 0x802B2EB0: andi        $t8, $a2, 0x8000
    ctx->r24 = ctx->r6 & 0X8000;
    // 0x802B2EB4: jal         0x80015B94
    // 0x802B2EB8: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015B94(rdram, ctx);
        goto after_6;
    // 0x802B2EB8: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_6:
    // 0x802B2EBC: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802B2EC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802B2EC4: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x802B2EC8: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x802B2ECC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x802B2ED0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B2ED4: lhu         $a2, 0x525A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X525A);
    // 0x802B2ED8: lhu         $a1, 0x5250($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X5250);
    // 0x802B2EDC: lhu         $a0, 0x5246($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5246);
    // 0x802B2EE0: lhu         $v1, 0x523C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X523C);
    // 0x802B2EE4: sw          $t9, 0x50A0($at)
    MEM_W(0X50A0, ctx->r1) = ctx->r25;
    // 0x802B2EE8: andi        $t8, $a2, 0x8000
    ctx->r24 = ctx->r6 & 0X8000;
L_802B2EEC:
    // 0x802B2EEC: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x802B2EF0: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x802B2EF4: andi        $t1, $a0, 0x8000
    ctx->r9 = ctx->r4 & 0X8000;
    // 0x802B2EF8: or          $t3, $t2, $t1
    ctx->r11 = ctx->r10 | ctx->r9;
    // 0x802B2EFC: andi        $t5, $a1, 0x8000
    ctx->r13 = ctx->r5 & 0X8000;
    // 0x802B2F00: or          $t4, $t3, $t5
    ctx->r12 = ctx->r11 | ctx->r13;
    // 0x802B2F04: bne         $t4, $zero, L_802B2F1C
    if (ctx->r12 != 0) {
        // 0x802B2F08: nop
    
            goto L_802B2F1C;
    }
    // 0x802B2F08: nop

    // 0x802B2F0C: jal         0x802A6964
    // 0x802B2F10: nop

    func_802A6964(rdram, ctx);
        goto after_7;
    // 0x802B2F10: nop

    after_7:
    // 0x802B2F14: beq         $v0, $zero, L_802B3218
    if (ctx->r2 == 0) {
        // 0x802B2F18: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802B3218;
    }
    // 0x802B2F18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B2F1C:
    // 0x802B2F1C: jal         0x802A6964
    // 0x802B2F20: nop

    func_802A6964(rdram, ctx);
        goto after_8;
    // 0x802B2F20: nop

    after_8:
    // 0x802B2F24: bne         $v0, $zero, L_802B2F34
    if (ctx->r2 != 0) {
        // 0x802B2F28: nop
    
            goto L_802B2F34;
    }
    // 0x802B2F28: nop

    // 0x802B2F2C: jal         0x80015B94
    // 0x802B2F30: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015B94(rdram, ctx);
        goto after_9;
    // 0x802B2F30: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_9:
L_802B2F34:
    // 0x802B2F34: jal         0x8002F2AC
    // 0x802B2F38: nop

    func_8002F2AC(rdram, ctx);
        goto after_10;
    // 0x802B2F38: nop

    after_10:
    // 0x802B2F3C: jal         0x80020270
    // 0x802B2F40: nop

    func_80020270(rdram, ctx);
        goto after_11;
    // 0x802B2F40: nop

    after_11:
    // 0x802B2F44: jal         0x802A6AB4
    // 0x802B2F48: nop

    func_802A6AB4(rdram, ctx);
        goto after_12;
    // 0x802B2F48: nop

    after_12:
    // 0x802B2F4C: jal         0x80297DB0
    // 0x802B2F50: nop

    func_80297DB0(rdram, ctx);
        goto after_13;
    // 0x802B2F50: nop

    after_13:
    // 0x802B2F54: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802B2F58: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802B2F5C: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x802B2F60: jal         0x800201A8
    // 0x802B2F64: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_14;
    // 0x802B2F64: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_14:
    // 0x802B2F68: b           L_802B3218
    // 0x802B2F6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802B3218;
    // 0x802B2F6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B2F70:
    // 0x802B2F70: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B2F74: addiu       $t7, $t7, -0x2958
    ctx->r15 = ADD32(ctx->r15, -0X2958);
    // 0x802B2F78: addiu       $t6, $zero, 0x60C
    ctx->r14 = ADD32(0, 0X60C);
    // 0x802B2F7C: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x802B2F80: addiu       $t8, $zero, 0xB1
    ctx->r24 = ADD32(0, 0XB1);
    // 0x802B2F84: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x802B2F88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802B2F8C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802B2F90: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B2F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B2F98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B2F9C: jal         0x802A9DA8
    // 0x802B2FA0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_15;
    // 0x802B2FA0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_15:
    // 0x802B2FA4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802B2FA8: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802B2FAC: lh          $t0, 0x9CE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X9CE);
    // 0x802B2FB0: lhu         $v1, 0x9AC($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B2FB4: lhu         $a0, 0x9B6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B2FB8: slti        $t2, $t0, 0xB
    ctx->r10 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x802B2FBC: lhu         $a1, 0x9C0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B2FC0: xori        $t2, $t2, 0x1
    ctx->r10 = ctx->r10 ^ 0X1;
    // 0x802B2FC4: andi        $t1, $v1, 0x800
    ctx->r9 = ctx->r3 & 0X800;
    // 0x802B2FC8: or          $t3, $t2, $t1
    ctx->r11 = ctx->r10 | ctx->r9;
    // 0x802B2FCC: andi        $t5, $a0, 0x800
    ctx->r13 = ctx->r4 & 0X800;
    // 0x802B2FD0: lhu         $a2, 0x9CA($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B2FD4: or          $t4, $t3, $t5
    ctx->r12 = ctx->r11 | ctx->r13;
    // 0x802B2FD8: andi        $t6, $a1, 0x800
    ctx->r14 = ctx->r5 & 0X800;
    // 0x802B2FDC: lh          $t0, 0x9B0($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X9B0);
    // 0x802B2FE0: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x802B2FE4: lh          $t3, 0x9BA($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X9BA);
    // 0x802B2FE8: andi        $t9, $a2, 0x800
    ctx->r25 = ctx->r6 & 0X800;
    // 0x802B2FEC: lh          $t6, 0x9C4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9C4);
    // 0x802B2FF0: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x802B2FF4: slti        $t2, $t0, 0xB
    ctx->r10 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x802B2FF8: xori        $t2, $t2, 0x1
    ctx->r10 = ctx->r10 ^ 0X1;
    // 0x802B2FFC: slti        $t5, $t3, 0xB
    ctx->r13 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x802B3000: xori        $t5, $t5, 0x1
    ctx->r13 = ctx->r13 ^ 0X1;
    // 0x802B3004: or          $t1, $t8, $t2
    ctx->r9 = ctx->r24 | ctx->r10;
    // 0x802B3008: slti        $t7, $t6, 0xB
    ctx->r15 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x802B300C: xori        $t7, $t7, 0x1
    ctx->r15 = ctx->r15 ^ 0X1;
    // 0x802B3010: or          $t4, $t1, $t5
    ctx->r12 = ctx->r9 | ctx->r13;
    // 0x802B3014: or          $t9, $t4, $t7
    ctx->r25 = ctx->r12 | ctx->r15;
    // 0x802B3018: beq         $t9, $zero, L_802B3058
    if (ctx->r25 == 0) {
        // 0x802B301C: andi        $t8, $a2, 0x8000
        ctx->r24 = ctx->r6 & 0X8000;
            goto L_802B3058;
    }
    // 0x802B301C: andi        $t8, $a2, 0x8000
    ctx->r24 = ctx->r6 & 0X8000;
    // 0x802B3020: jal         0x80015B94
    // 0x802B3024: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015B94(rdram, ctx);
        goto after_16;
    // 0x802B3024: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_16:
    // 0x802B3028: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802B302C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802B3030: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x802B3034: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x802B3038: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B303C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3040: lhu         $a2, 0x525A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X525A);
    // 0x802B3044: lhu         $a1, 0x5250($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X5250);
    // 0x802B3048: lhu         $a0, 0x5246($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5246);
    // 0x802B304C: lhu         $v1, 0x523C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X523C);
    // 0x802B3050: sw          $t0, 0x50A0($at)
    MEM_W(0X50A0, ctx->r1) = ctx->r8;
    // 0x802B3054: andi        $t8, $a2, 0x8000
    ctx->r24 = ctx->r6 & 0X8000;
L_802B3058:
    // 0x802B3058: andi        $t2, $v1, 0x8000
    ctx->r10 = ctx->r3 & 0X8000;
    // 0x802B305C: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x802B3060: andi        $t1, $a0, 0x8000
    ctx->r9 = ctx->r4 & 0X8000;
    // 0x802B3064: or          $t5, $t3, $t1
    ctx->r13 = ctx->r11 | ctx->r9;
    // 0x802B3068: andi        $t6, $a1, 0x8000
    ctx->r14 = ctx->r5 & 0X8000;
    // 0x802B306C: or          $t4, $t5, $t6
    ctx->r12 = ctx->r13 | ctx->r14;
    // 0x802B3070: bne         $t4, $zero, L_802B3088
    if (ctx->r12 != 0) {
        // 0x802B3074: nop
    
            goto L_802B3088;
    }
    // 0x802B3074: nop

    // 0x802B3078: jal         0x802A6964
    // 0x802B307C: nop

    func_802A6964(rdram, ctx);
        goto after_17;
    // 0x802B307C: nop

    after_17:
    // 0x802B3080: beq         $v0, $zero, L_802B3218
    if (ctx->r2 == 0) {
        // 0x802B3084: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802B3218;
    }
    // 0x802B3084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B3088:
    // 0x802B3088: jal         0x802A6964
    // 0x802B308C: nop

    func_802A6964(rdram, ctx);
        goto after_18;
    // 0x802B308C: nop

    after_18:
    // 0x802B3090: bne         $v0, $zero, L_802B30A4
    if (ctx->r2 != 0) {
        // 0x802B3094: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_802B30A4;
    }
    // 0x802B3094: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x802B3098: jal         0x80015B94
    // 0x802B309C: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015B94(rdram, ctx);
        goto after_19;
    // 0x802B309C: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_19:
    // 0x802B30A0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
L_802B30A4:
    // 0x802B30A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B30A8: b           L_802B3214
    // 0x802B30AC: sw          $t7, 0x50A0($at)
    MEM_W(0X50A0, ctx->r1) = ctx->r15;
        goto L_802B3214;
    // 0x802B30AC: sw          $t7, 0x50A0($at)
    MEM_W(0X50A0, ctx->r1) = ctx->r15;
L_802B30B0:
    // 0x802B30B0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B30B4: addiu       $t0, $t0, -0x2850
    ctx->r8 = ADD32(ctx->r8, -0X2850);
    // 0x802B30B8: addiu       $t9, $zero, 0x60C
    ctx->r25 = ADD32(0, 0X60C);
    // 0x802B30BC: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x802B30C0: addiu       $t2, $zero, 0xB0
    ctx->r10 = ADD32(0, 0XB0);
    // 0x802B30C4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802B30C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802B30CC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802B30D0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x802B30D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B30D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B30DC: jal         0x802A9DA8
    // 0x802B30E0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_802A9DA8(rdram, ctx);
        goto after_20;
    // 0x802B30E0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_20:
    // 0x802B30E4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B30E8: addiu       $t1, $t1, -0x2634
    ctx->r9 = ADD32(ctx->r9, -0X2634);
    // 0x802B30EC: addiu       $t3, $zero, 0x60C
    ctx->r11 = ADD32(0, 0X60C);
    // 0x802B30F0: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x802B30F4: addiu       $t6, $zero, 0xB0
    ctx->r14 = ADD32(0, 0XB0);
    // 0x802B30F8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802B30FC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802B3100: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x802B3104: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802B3108: addiu       $a0, $zero, 0x69
    ctx->r4 = ADD32(0, 0X69);
    // 0x802B310C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B3110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B3114: jal         0x802A9DA8
    // 0x802B3118: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_802A9DA8(rdram, ctx);
        goto after_21;
    // 0x802B3118: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_21:
    // 0x802B311C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B3120: addiu       $t7, $t7, -0x267C
    ctx->r15 = ADD32(ctx->r15, -0X267C);
    // 0x802B3124: addiu       $t4, $zero, 0x60C
    ctx->r12 = ADD32(0, 0X60C);
    // 0x802B3128: addiu       $t9, $zero, 0x12
    ctx->r25 = ADD32(0, 0X12);
    // 0x802B312C: addiu       $t0, $zero, 0xB1
    ctx->r8 = ADD32(0, 0XB1);
    // 0x802B3130: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802B3134: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802B3138: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802B313C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802B3140: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    // 0x802B3144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B3148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802B314C: jal         0x802A9DA8
    // 0x802B3150: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_802A9DA8(rdram, ctx);
        goto after_22;
    // 0x802B3150: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_22:
    // 0x802B3154: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802B3158: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802B315C: lhu         $a2, 0x9CA($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B3160: lhu         $v1, 0x9AC($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B3164: lhu         $a0, 0x9B6($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B3168: lhu         $a1, 0x9C0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B316C: andi        $t8, $a2, 0x4000
    ctx->r24 = ctx->r6 & 0X4000;
    // 0x802B3170: andi        $t2, $v1, 0x4000
    ctx->r10 = ctx->r3 & 0X4000;
    // 0x802B3174: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x802B3178: andi        $t1, $a0, 0x4000
    ctx->r9 = ctx->r4 & 0X4000;
    // 0x802B317C: or          $t5, $t3, $t1
    ctx->r13 = ctx->r11 | ctx->r9;
    // 0x802B3180: andi        $t6, $a1, 0x4000
    ctx->r14 = ctx->r5 & 0X4000;
    // 0x802B3184: or          $t4, $t5, $t6
    ctx->r12 = ctx->r13 | ctx->r14;
    // 0x802B3188: beq         $t4, $zero, L_802B31C8
    if (ctx->r12 == 0) {
        // 0x802B318C: andi        $t9, $a2, 0x8000
        ctx->r25 = ctx->r6 & 0X8000;
            goto L_802B31C8;
    }
    // 0x802B318C: andi        $t9, $a2, 0x8000
    ctx->r25 = ctx->r6 & 0X8000;
    // 0x802B3190: jal         0x80015B94
    // 0x802B3194: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015B94(rdram, ctx);
        goto after_23;
    // 0x802B3194: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_23:
    // 0x802B3198: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802B319C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802B31A0: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x802B31A4: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x802B31A8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802B31AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B31B0: lhu         $a2, 0x525A($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X525A);
    // 0x802B31B4: lhu         $a1, 0x5250($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X5250);
    // 0x802B31B8: lhu         $a0, 0x5246($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X5246);
    // 0x802B31BC: lhu         $v1, 0x523C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X523C);
    // 0x802B31C0: sw          $t7, 0x50A0($at)
    MEM_W(0X50A0, ctx->r1) = ctx->r15;
    // 0x802B31C4: andi        $t9, $a2, 0x8000
    ctx->r25 = ctx->r6 & 0X8000;
L_802B31C8:
    // 0x802B31C8: andi        $t0, $v1, 0x8000
    ctx->r8 = ctx->r3 & 0X8000;
    // 0x802B31CC: or          $t8, $t9, $t0
    ctx->r24 = ctx->r25 | ctx->r8;
    // 0x802B31D0: andi        $t2, $a0, 0x8000
    ctx->r10 = ctx->r4 & 0X8000;
    // 0x802B31D4: or          $t3, $t8, $t2
    ctx->r11 = ctx->r24 | ctx->r10;
    // 0x802B31D8: andi        $t1, $a1, 0x8000
    ctx->r9 = ctx->r5 & 0X8000;
    // 0x802B31DC: or          $t5, $t3, $t1
    ctx->r13 = ctx->r11 | ctx->r9;
    // 0x802B31E0: beq         $t5, $zero, L_802B3218
    if (ctx->r13 == 0) {
        // 0x802B31E4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802B3218;
    }
    // 0x802B31E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802B31E8: jal         0x80015B94
    // 0x802B31EC: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015B94(rdram, ctx);
        goto after_24;
    // 0x802B31EC: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_24:
    // 0x802B31F0: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x802B31F4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B31F8: jal         0x80021960
    // 0x802B31FC: sw          $t6, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r14;
    func_80021960(rdram, ctx);
        goto after_25;
    // 0x802B31FC: sw          $t6, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r14;
    after_25:
    // 0x802B3200: jal         0x80015B94
    // 0x802B3204: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015B94(rdram, ctx);
        goto after_26;
    // 0x802B3204: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_26:
    // 0x802B3208: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802B320C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B3210: sh          $t4, -0x2FA8($at)
    MEM_H(-0X2FA8, ctx->r1) = ctx->r12;
L_802B3214:
    // 0x802B3214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802B3218:
    // 0x802B3218: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802B321C: jr          $ra
    // 0x802B3220: nop

    return;
    // 0x802B3220: nop

;}
RECOMP_FUNC void func_802B3224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B322C: jal         0x80276AD4
    // 0x802B3230: nop

    LOOKUP_FUNC(0x80276AD4)(rdram, ctx);
        goto after_0;
    // 0x802B3230: nop

    after_0:
    // 0x802B3234: jal         0x8028D490
    // 0x802B3238: nop

    func_8028D490(rdram, ctx);
        goto after_1;
    // 0x802B3238: nop

    after_1:
    // 0x802B323C: jal         0x80052CD8
    // 0x802B3240: nop

    func_80052CD8(rdram, ctx);
        goto after_2;
    // 0x802B3240: nop

    after_2:
    // 0x802B3244: jal         0x802A6964
    // 0x802B3248: nop

    func_802A6964(rdram, ctx);
        goto after_3;
    // 0x802B3248: nop

    after_3:
    // 0x802B324C: beq         $v0, $zero, L_802B32D0
    if (ctx->r2 == 0) {
        // 0x802B3250: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802B32D0;
    }
    // 0x802B3250: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B3254: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802B3258: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802B325C: beq         $v0, $at, L_802B32D0
    if (ctx->r2 == ctx->r1) {
        // 0x802B3260: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802B32D0;
    }
    // 0x802B3260: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802B3264: beq         $v0, $at, L_802B32D0
    if (ctx->r2 == ctx->r1) {
        // 0x802B3268: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_802B32D0;
    }
    // 0x802B3268: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802B326C: beq         $v0, $at, L_802B32D0
    if (ctx->r2 == ctx->r1) {
        // 0x802B3270: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_802B32D0;
    }
    // 0x802B3270: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B3274: lh          $t6, -0x2FAE($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAE);
    // 0x802B3278: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802B327C: bne         $t6, $zero, L_802B32D0
    if (ctx->r14 != 0) {
        // 0x802B3280: nop
    
            goto L_802B32D0;
    }
    // 0x802B3280: nop

    // 0x802B3284: lh          $t7, 0x5440($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5440);
    // 0x802B3288: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802B328C: bne         $t7, $zero, L_802B32D0
    if (ctx->r15 != 0) {
        // 0x802B3290: nop
    
            goto L_802B32D0;
    }
    // 0x802B3290: nop

    // 0x802B3294: lbu         $t8, -0x32A4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32A4);
    // 0x802B3298: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802B329C: bne         $t8, $at, L_802B32BC
    if (ctx->r24 != ctx->r1) {
        // 0x802B32A0: nop
    
            goto L_802B32BC;
    }
    // 0x802B32A0: nop

    // 0x802B32A4: jal         0x802A699C
    // 0x802B32A8: nop

    func_802A699C(rdram, ctx);
        goto after_4;
    // 0x802B32A8: nop

    after_4:
    // 0x802B32AC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x802B32B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B32B4: b           L_802B32D0
    // 0x802B32B8: sw          $t9, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r25;
        goto L_802B32D0;
    // 0x802B32B8: sw          $t9, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r25;
L_802B32BC:
    // 0x802B32BC: jal         0x802A699C
    // 0x802B32C0: nop

    func_802A699C(rdram, ctx);
        goto after_5;
    // 0x802B32C0: nop

    after_5:
    // 0x802B32C4: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x802B32C8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B32CC: sw          $t0, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r8;
L_802B32D0:
    // 0x802B32D0: jal         0x802AD0A8
    // 0x802B32D4: nop

    func_802AD0A8(rdram, ctx);
        goto after_6;
    // 0x802B32D4: nop

    after_6:
    // 0x802B32D8: jal         0x802AB498
    // 0x802B32DC: nop

    func_802AB498(rdram, ctx);
        goto after_7;
    // 0x802B32DC: nop

    after_7:
    // 0x802B32E0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B32E4: addiu       $v0, $v0, 0x50D8
    ctx->r2 = ADD32(ctx->r2, 0X50D8);
    // 0x802B32E8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802B32EC: nop

    // 0x802B32F0: sltiu       $at, $t1, 0xA
    ctx->r1 = ctx->r9 < 0XA ? 1 : 0;
    // 0x802B32F4: beq         $at, $zero, L_802B33FC
    if (ctx->r1 == 0) {
        // 0x802B32F8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_802B33FC;
    }
    // 0x802B32F8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802B32FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3300: addu        $at, $at, $t1
    gpr jr_addend_802B330C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802B3304: lw          $t1, 0x1744($at)
    ctx->r9 = ADD32(ctx->r1, 0X1744);
    // 0x802B3308: nop

    // 0x802B330C: jr          $t1
    // 0x802B3310: nop

    switch (jr_addend_802B330C >> 2) {
        case 0: goto L_802B3314; break;
        case 1: goto L_802B3324; break;
        case 2: goto L_802B3364; break;
        case 3: goto L_802B3374; break;
        case 4: goto L_802B3384; break;
        case 5: goto L_802B3334; break;
        case 6: goto L_802B3394; break;
        case 7: goto L_802B33A4; break;
        case 8: goto L_802B33B4; break;
        case 9: goto L_802B33C4; break;
        default: switch_error(__func__, 0x802B330C, 0x802C1744);
    }
    // 0x802B3310: nop

L_802B3314:
    // 0x802B3314: jal         0x802B1F28
    // 0x802B3318: nop

    func_802B1F28(rdram, ctx);
        goto after_8;
    // 0x802B3318: nop

    after_8:
    // 0x802B331C: b           L_802B33FC
    // 0x802B3320: nop

        goto L_802B33FC;
    // 0x802B3320: nop

L_802B3324:
    // 0x802B3324: jal         0x802B2058
    // 0x802B3328: nop

    func_802B2058(rdram, ctx);
        goto after_9;
    // 0x802B3328: nop

    after_9:
    // 0x802B332C: b           L_802B33FC
    // 0x802B3330: nop

        goto L_802B33FC;
    // 0x802B3330: nop

L_802B3334:
    // 0x802B3334: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B3338: lh          $t2, 0x5270($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X5270);
    // 0x802B333C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802B3340: beq         $t2, $zero, L_802B33FC
    if (ctx->r10 == 0) {
        // 0x802B3344: nop
    
            goto L_802B33FC;
    }
    // 0x802B3344: nop

    // 0x802B3348: lbu         $t3, 0x5427($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5427);
    // 0x802B334C: jal         0x802AB8E8
    // 0x802B3350: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    func_802AB8E8(rdram, ctx);
        goto after_10;
    // 0x802B3350: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_10:
    // 0x802B3354: jal         0x802AB7A0
    // 0x802B3358: nop

    func_802AB7A0(rdram, ctx);
        goto after_11;
    // 0x802B3358: nop

    after_11:
    // 0x802B335C: b           L_802B33FC
    // 0x802B3360: nop

        goto L_802B33FC;
    // 0x802B3360: nop

L_802B3364:
    // 0x802B3364: jal         0x802B2208
    // 0x802B3368: nop

    func_802B2208(rdram, ctx);
        goto after_12;
    // 0x802B3368: nop

    after_12:
    // 0x802B336C: b           L_802B33FC
    // 0x802B3370: nop

        goto L_802B33FC;
    // 0x802B3370: nop

L_802B3374:
    // 0x802B3374: jal         0x802B25D8
    // 0x802B3378: nop

    func_802B25D8(rdram, ctx);
        goto after_13;
    // 0x802B3378: nop

    after_13:
    // 0x802B337C: b           L_802B33FC
    // 0x802B3380: nop

        goto L_802B33FC;
    // 0x802B3380: nop

L_802B3384:
    // 0x802B3384: jal         0x802B28FC
    // 0x802B3388: nop

    func_802B28FC(rdram, ctx);
        goto after_14;
    // 0x802B3388: nop

    after_14:
    // 0x802B338C: b           L_802B33FC
    // 0x802B3390: nop

        goto L_802B33FC;
    // 0x802B3390: nop

L_802B3394:
    // 0x802B3394: jal         0x802B2D3C
    // 0x802B3398: nop

    func_802B2D3C(rdram, ctx);
        goto after_15;
    // 0x802B3398: nop

    after_15:
    // 0x802B339C: b           L_802B33FC
    // 0x802B33A0: nop

        goto L_802B33FC;
    // 0x802B33A0: nop

L_802B33A4:
    // 0x802B33A4: jal         0x802B2C38
    // 0x802B33A8: nop

    func_802B2C38(rdram, ctx);
        goto after_16;
    // 0x802B33A8: nop

    after_16:
    // 0x802B33AC: b           L_802B33FC
    // 0x802B33B0: nop

        goto L_802B33FC;
    // 0x802B33B0: nop

L_802B33B4:
    // 0x802B33B4: jal         0x802B2C30
    // 0x802B33B8: nop

    func_802B2C30(rdram, ctx);
        goto after_17;
    // 0x802B33B8: nop

    after_17:
    // 0x802B33BC: b           L_802B33FC
    // 0x802B33C0: nop

        goto L_802B33FC;
    // 0x802B33C0: nop

L_802B33C4:
    // 0x802B33C4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x802B33C8: lh          $t4, -0x2FAC($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X2FAC);
    // 0x802B33CC: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x802B33D0: slti        $at, $t4, 0xF0
    ctx->r1 = SIGNED(ctx->r12) < 0XF0 ? 1 : 0;
    // 0x802B33D4: bne         $at, $zero, L_802B33FC
    if (ctx->r1 != 0) {
        // 0x802B33D8: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_802B33FC;
    }
    // 0x802B33D8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802B33DC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802B33E0: lbu         $t6, -0x301C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X301C);
    // 0x802B33E4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B33E8: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x802B33EC: jal         0x800603F0
    // 0x802B33F0: sb          $t7, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r15;
    func_800603F0(rdram, ctx);
        goto after_18;
    // 0x802B33F0: sb          $t7, -0x301C($at)
    MEM_B(-0X301C, ctx->r1) = ctx->r15;
    after_18:
    // 0x802B33F4: jal         0x802A8B68
    // 0x802B33F8: nop

    func_802A8B68(rdram, ctx);
        goto after_19;
    // 0x802B33F8: nop

    after_19:
L_802B33FC:
    // 0x802B33FC: jal         0x802A8F9C
    // 0x802B3400: nop

    func_802A8F9C(rdram, ctx);
        goto after_20;
    // 0x802B3400: nop

    after_20:
    // 0x802B3404: jal         0x802B19B4
    // 0x802B3408: nop

    func_802B19B4(rdram, ctx);
        goto after_21;
    // 0x802B3408: nop

    after_21:
    // 0x802B340C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3414: jr          $ra
    // 0x802B3418: nop

    return;
    // 0x802B3418: nop

    // 0x802B341C: nop

;}
RECOMP_FUNC void func_802B3420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3428: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B342C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x802B3430: jal         0x80024960
    // 0x802B3434: sb          $t6, -0x2FA4($at)
    MEM_B(-0X2FA4, ctx->r1) = ctx->r14;
    func_80024960(rdram, ctx);
        goto after_0;
    // 0x802B3434: sb          $t6, -0x2FA4($at)
    MEM_B(-0X2FA4, ctx->r1) = ctx->r14;
    after_0:
    // 0x802B3438: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B343C: sh          $zero, 0x522A($at)
    MEM_H(0X522A, ctx->r1) = 0;
    // 0x802B3440: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802B3444: jal         0x8001BA08
    // 0x802B3448: sh          $zero, -0x3A04($at)
    MEM_H(-0X3A04, ctx->r1) = 0;
    func_8001BA08(rdram, ctx);
        goto after_1;
    // 0x802B3448: sh          $zero, -0x3A04($at)
    MEM_H(-0X3A04, ctx->r1) = 0;
    after_1:
    // 0x802B344C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802B3450: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x802B3454: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x802B3458: lhu         $t9, 0xA9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA9C);
    // 0x802B345C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3460: andi        $t8, $t7, 0xFFF7
    ctx->r24 = ctx->r15 & 0XFFF7;
    // 0x802B3464: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x802B3468: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    // 0x802B346C: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
    // 0x802B3470: jr          $ra
    // 0x802B3474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802B3474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802B3478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3478: jr          $ra
    // 0x802B347C: nop

    return;
    // 0x802B347C: nop

;}
RECOMP_FUNC void func_802B3480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3488: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B348C: sb          $zero, -0x3095($at)
    MEM_B(-0X3095, ctx->r1) = 0;
    // 0x802B3490: jal         0x8005F560
    // 0x802B3494: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005F560(rdram, ctx);
        goto after_0;
    // 0x802B3494: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802B3498: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B349C: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B34A0: sh          $zero, 0x7C2($v0)
    MEM_H(0X7C2, ctx->r2) = 0;
    // 0x802B34A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802B34A8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B34AC: sb          $t6, 0x522D($at)
    MEM_B(0X522D, ctx->r1) = ctx->r14;
    // 0x802B34B0: lbu         $t7, 0x754($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X754);
    // 0x802B34B4: nop

    // 0x802B34B8: andi        $t8, $t7, 0xF4
    ctx->r24 = ctx->r15 & 0XF4;
    // 0x802B34BC: jal         0x8005ACAC
    // 0x802B34C0: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    func_8005ACAC(rdram, ctx);
        goto after_1;
    // 0x802B34C0: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    after_1:
    // 0x802B34C4: jal         0x800603F0
    // 0x802B34C8: nop

    func_800603F0(rdram, ctx);
        goto after_2;
    // 0x802B34C8: nop

    after_2:
    // 0x802B34CC: jal         0x80020270
    // 0x802B34D0: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x802B34D0: nop

    after_3:
    // 0x802B34D4: jal         0x80073F40
    // 0x802B34D8: nop

    func_80073F40(rdram, ctx);
        goto after_4;
    // 0x802B34D8: nop

    after_4:
    // 0x802B34DC: jal         0x802A13CC
    // 0x802B34E0: nop

    func_802A13CC(rdram, ctx);
        goto after_5;
    // 0x802B34E0: nop

    after_5:
    // 0x802B34E4: jal         0x8002F2AC
    // 0x802B34E8: nop

    func_8002F2AC(rdram, ctx);
        goto after_6;
    // 0x802B34E8: nop

    after_6:
    // 0x802B34EC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B34F0: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    // 0x802B34F4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802B34F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802B34FC: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x802B3500: jal         0x800201A8
    // 0x802B3504: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_7;
    // 0x802B3504: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_7:
    // 0x802B3508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B350C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3510: jr          $ra
    // 0x802B3514: nop

    return;
    // 0x802B3514: nop

;}
RECOMP_FUNC void func_802B3518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3518: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802B351C: lbu         $t6, 0x522E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522E);
    // 0x802B3520: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802B3524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802B3528: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x802B352C: lw          $t9, -0x13AC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X13AC);
    // 0x802B3530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3538: jalr        $t9
    // 0x802B353C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B353C: nop

    after_0:
    // 0x802B3540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3548: jr          $ra
    // 0x802B354C: nop

    return;
    // 0x802B354C: nop

;}
RECOMP_FUNC void func_802B3550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3558: jal         0x80015BC0
    // 0x802B355C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B355C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802B3560: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3564: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B3568: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802B356C: sb          $zero, 0x7D6($v0)
    MEM_B(0X7D6, ctx->r2) = 0;
    // 0x802B3570: sh          $zero, 0x7CE($v0)
    MEM_H(0X7CE, ctx->r2) = 0;
    // 0x802B3574: jal         0x80025A10
    // 0x802B3578: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x802B3578: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    after_1:
    // 0x802B357C: jal         0x802B3420
    // 0x802B3580: nop

    func_802B3420(rdram, ctx);
        goto after_2;
    // 0x802B3580: nop

    after_2:
    // 0x802B3584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B358C: jr          $ra
    // 0x802B3590: nop

    return;
    // 0x802B3590: nop

;}
RECOMP_FUNC void func_802B3594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B359C: jal         0x8001BA08
    // 0x802B35A0: nop

    func_8001BA08(rdram, ctx);
        goto after_0;
    // 0x802B35A0: nop

    after_0:
    // 0x802B35A4: jal         0x8001B854
    // 0x802B35A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x802B35A8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802B35AC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802B35B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B35B4: sh          $t6, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = ctx->r14;
    // 0x802B35B8: jal         0x8001CA74
    // 0x802B35BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x802B35BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x802B35C0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x802B35C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802B35C8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B35CC: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x802B35D0: lbu         $a0, -0x1399($v1)
    ctx->r4 = MEM_BU(ctx->r3, -0X1399);
    // 0x802B35D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B35D8: jal         0x8001D4C0
    // 0x802B35DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x802B35DC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x802B35E0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802B35E4: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x802B35E8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x802B35EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802B35F0: sb          $v0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r2;
    // 0x802B35F4: sb          $t9, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r25;
    // 0x802B35F8: sb          $t0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r8;
    // 0x802B35FC: jal         0x8001CA74
    // 0x802B3600: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8001CA74(rdram, ctx);
        goto after_4;
    // 0x802B3600: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x802B3604: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x802B3608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B360C: jal         0x8001D4C0
    // 0x802B3610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001D4C0(rdram, ctx);
        goto after_5;
    // 0x802B3610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802B3614: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802B3618: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x802B361C: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x802B3620: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802B3624: lbu         $a0, -0x2F9C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2F9C);
    // 0x802B3628: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B362C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x802B3630: lbu         $t1, -0x1420($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1420);
    // 0x802B3634: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802B3638: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802B363C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802B3640: sb          $zero, 0x7($v1)
    MEM_B(0X7, ctx->r3) = 0;
    // 0x802B3644: sb          $a3, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r7;
    // 0x802B3648: sb          $a3, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r7;
    // 0x802B364C: sb          $a3, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r7;
    // 0x802B3650: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x802B3654: sb          $a1, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r5;
    // 0x802B3658: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x802B365C: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x802B3660: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x802B3664: lbu         $t2, -0x1418($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X1418);
    // 0x802B3668: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802B366C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B3670: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x802B3674: sb          $a1, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r5;
    // 0x802B3678: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802B367C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x802B3680: sb          $t2, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r10;
    // 0x802B3684: lbu         $t3, -0x1408($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1408);
    // 0x802B3688: jal         0x80036990
    // 0x802B368C: sb          $t3, 0xA94($a2)
    MEM_B(0XA94, ctx->r6) = ctx->r11;
    func_80036990(rdram, ctx);
        goto after_6;
    // 0x802B368C: sb          $t3, 0xA94($a2)
    MEM_B(0XA94, ctx->r6) = ctx->r11;
    after_6:
    // 0x802B3690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3698: jr          $ra
    // 0x802B369C: nop

    return;
    // 0x802B369C: nop

;}
RECOMP_FUNC void func_802B36A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B36A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B36A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B36A8: jal         0x80025D00
    // 0x802B36AC: nop

    func_80025D00(rdram, ctx);
        goto after_0;
    // 0x802B36AC: nop

    after_0:
    // 0x802B36B0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B36B4: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x802B36B8: lh          $t6, 0x7C2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X7C2);
    // 0x802B36BC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802B36C0: bne         $t6, $zero, L_802B3768
    if (ctx->r14 != 0) {
        // 0x802B36C4: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_802B3768;
    }
    // 0x802B36C4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802B36C8: lhu         $t7, 0x9AC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B36CC: nop

    // 0x802B36D0: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x802B36D4: bne         $t8, $zero, L_802B3718
    if (ctx->r24 != 0) {
        // 0x802B36D8: nop
    
            goto L_802B3718;
    }
    // 0x802B36D8: nop

    // 0x802B36DC: lhu         $t9, 0x9B6($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B36E0: nop

    // 0x802B36E4: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x802B36E8: bne         $t0, $zero, L_802B3718
    if (ctx->r8 != 0) {
        // 0x802B36EC: nop
    
            goto L_802B3718;
    }
    // 0x802B36EC: nop

    // 0x802B36F0: lhu         $t1, 0x9C0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B36F4: nop

    // 0x802B36F8: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x802B36FC: bne         $t2, $zero, L_802B3718
    if (ctx->r10 != 0) {
        // 0x802B3700: nop
    
            goto L_802B3718;
    }
    // 0x802B3700: nop

    // 0x802B3704: lhu         $t3, 0x9CA($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B3708: nop

    // 0x802B370C: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x802B3710: beq         $t4, $zero, L_802B3734
    if (ctx->r12 == 0) {
        // 0x802B3714: nop
    
            goto L_802B3734;
    }
    // 0x802B3714: nop

L_802B3718:
    // 0x802B3718: jal         0x802B3778
    // 0x802B371C: nop

    func_802B3778(rdram, ctx);
        goto after_1;
    // 0x802B371C: nop

    after_1:
    // 0x802B3720: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3724: lhu         $v0, -0x2FA2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2FA2);
    // 0x802B3728: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B372C: b           L_802B3760
    // 0x802B3730: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
        goto L_802B3760;
    // 0x802B3730: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_802B3734:
    // 0x802B3734: lhu         $v0, 0x7CE($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X7CE);
    // 0x802B3738: nop

    // 0x802B373C: slti        $at, $v0, 0x385
    ctx->r1 = SIGNED(ctx->r2) < 0X385 ? 1 : 0;
    // 0x802B3740: bne         $at, $zero, L_802B3764
    if (ctx->r1 != 0) {
        // 0x802B3744: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_802B3764;
    }
    // 0x802B3744: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x802B3748: jal         0x802B3778
    // 0x802B374C: nop

    func_802B3778(rdram, ctx);
        goto after_2;
    // 0x802B374C: nop

    after_2:
    // 0x802B3750: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3754: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B3758: lhu         $v0, -0x2FA2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2FA2);
    // 0x802B375C: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
L_802B3760:
    // 0x802B3760: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
L_802B3764:
    // 0x802B3764: sh          $t5, 0x7CE($v1)
    MEM_H(0X7CE, ctx->r3) = ctx->r13;
L_802B3768:
    // 0x802B3768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B376C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3770: jr          $ra
    // 0x802B3774: nop

    return;
    // 0x802B3774: nop

;}
RECOMP_FUNC void func_802B3778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B377C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3780: jal         0x80015BC0
    // 0x802B3784: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B3784: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x802B3788: jal         0x80015BC0
    // 0x802B378C: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B378C: ori         $a0, $zero, 0x83BB
    ctx->r4 = 0 | 0X83BB;
    after_1:
    // 0x802B3790: jal         0x80021960
    // 0x802B3794: nop

    func_80021960(rdram, ctx);
        goto after_2;
    // 0x802B3794: nop

    after_2:
    // 0x802B3798: jal         0x802A13CC
    // 0x802B379C: nop

    func_802A13CC(rdram, ctx);
        goto after_3;
    // 0x802B379C: nop

    after_3:
    // 0x802B37A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B37A4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802B37A8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B37AC: sb          $t6, 0x522E($at)
    MEM_B(0X522E, ctx->r1) = ctx->r14;
    // 0x802B37B0: jr          $ra
    // 0x802B37B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802B37B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802B37B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B37B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B37BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B37C0: jal         0x80025D00
    // 0x802B37C4: nop

    func_80025D00(rdram, ctx);
        goto after_0;
    // 0x802B37C4: nop

    after_0:
    // 0x802B37C8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B37CC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B37D0: lh          $t6, 0x7CA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X7CA);
    // 0x802B37D4: nop

    // 0x802B37D8: beq         $t6, $zero, L_802B380C
    if (ctx->r14 == 0) {
        // 0x802B37DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B380C;
    }
    // 0x802B37DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B37E0: lbu         $t7, 0x7D4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7D4);
    // 0x802B37E4: nop

    // 0x802B37E8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802B37EC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x802B37F0: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x802B37F4: bne         $at, $zero, L_802B3800
    if (ctx->r1 != 0) {
        // 0x802B37F8: sb          $t8, 0x7D4($v0)
        MEM_B(0X7D4, ctx->r2) = ctx->r24;
            goto L_802B3800;
    }
    // 0x802B37F8: sb          $t8, 0x7D4($v0)
    MEM_B(0X7D4, ctx->r2) = ctx->r24;
    // 0x802B37FC: sb          $zero, 0x7D4($v0)
    MEM_B(0X7D4, ctx->r2) = 0;
L_802B3800:
    // 0x802B3800: jal         0x802B3480
    // 0x802B3804: nop

    func_802B3480(rdram, ctx);
        goto after_1;
    // 0x802B3804: nop

    after_1:
    // 0x802B3808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B380C:
    // 0x802B380C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3810: jr          $ra
    // 0x802B3814: nop

    return;
    // 0x802B3814: nop

;}
RECOMP_FUNC void func_802B3818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3818: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802B381C: lbu         $t6, 0x522E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522E);
    // 0x802B3820: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802B3824: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802B3828: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x802B382C: lw          $t9, -0x1374($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1374);
    // 0x802B3830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3838: jalr        $t9
    // 0x802B383C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802B383C: nop

    after_0:
    // 0x802B3840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3848: jr          $ra
    // 0x802B384C: nop

    return;
    // 0x802B384C: nop

;}
RECOMP_FUNC void func_802B3850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3858: jal         0x80015BC0
    // 0x802B385C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802B385C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802B3860: jal         0x802B3420
    // 0x802B3864: nop

    func_802B3420(rdram, ctx);
        goto after_1;
    // 0x802B3864: nop

    after_1:
    // 0x802B3868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B386C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3870: jr          $ra
    // 0x802B3874: nop

    return;
    // 0x802B3874: nop

;}
RECOMP_FUNC void func_802B3878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3878: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802B387C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802B3880: jal         0x8001BA08
    // 0x802B3884: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8001BA08(rdram, ctx);
        goto after_0;
    // 0x802B3884: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802B3888: jal         0x8001B854
    // 0x802B388C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001B854(rdram, ctx);
        goto after_1;
    // 0x802B388C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802B3890: jal         0x8005985C
    // 0x802B3894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005985C(rdram, ctx);
        goto after_2;
    // 0x802B3894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802B3898: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B389C: sh          $zero, 0x522A($at)
    MEM_H(0X522A, ctx->r1) = 0;
    // 0x802B38A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802B38A4: sh          $zero, -0x1B60($at)
    MEM_H(-0X1B60, ctx->r1) = 0;
    // 0x802B38A8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802B38AC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802B38B0: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x802B38B4: sh          $zero, -0x1B5E($at)
    MEM_H(-0X1B5E, ctx->r1) = 0;
    // 0x802B38B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802B38BC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802B38C0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802B38C4: sb          $t6, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r14;
    // 0x802B38C8: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x802B38CC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802B38D0: lbu         $v1, -0x2F9B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2F9B);
    // 0x802B38D4: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802B38D8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x802B38DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802B38E0: lw          $t8, -0x1364($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1364);
    // 0x802B38E4: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802B38E8: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x802B38EC: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x802B38F0: lbu         $t9, -0x13F8($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X13F8);
    // 0x802B38F4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802B38F8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B38FC: sb          $zero, 0x7($v0)
    MEM_B(0X7, ctx->r2) = 0;
    // 0x802B3900: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x802B3904: sb          $a0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r4;
    // 0x802B3908: sb          $a0, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r4;
    // 0x802B390C: sb          $a0, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r4;
    // 0x802B3910: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x802B3914: sb          $s0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r16;
    // 0x802B3918: sb          $s0, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r16;
    // 0x802B391C: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x802B3920: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    // 0x802B3924: lbu         $t0, -0x13F0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X13F0);
    // 0x802B3928: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x802B392C: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x802B3930: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802B3934: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x802B3938: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x802B393C: lbu         $t1, -0x13E8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X13E8);
    // 0x802B3940: jal         0x80036990
    // 0x802B3944: sb          $t1, 0xA94($a1)
    MEM_B(0XA94, ctx->r5) = ctx->r9;
    func_80036990(rdram, ctx);
        goto after_3;
    // 0x802B3944: sb          $t1, 0xA94($a1)
    MEM_B(0XA94, ctx->r5) = ctx->r9;
    after_3:
    // 0x802B3948: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B394C: sb          $s0, -0x32A4($at)
    MEM_B(-0X32A4, ctx->r1) = ctx->r16;
    // 0x802B3950: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3954: jal         0x80292C58
    // 0x802B3958: sb          $zero, 0x3A18($at)
    MEM_B(0X3A18, ctx->r1) = 0;
    func_80292C58(rdram, ctx);
        goto after_4;
    // 0x802B3958: sb          $zero, 0x3A18($at)
    MEM_B(0X3A18, ctx->r1) = 0;
    after_4:
    // 0x802B395C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802B3960: lbu         $t2, -0x2F9B($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X2F9B);
    // 0x802B3964: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802B3968: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x802B396C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802B3970: lh          $t4, -0x13B8($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X13B8);
    // 0x802B3974: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3978: sh          $t4, 0x3A22($at)
    MEM_H(0X3A22, ctx->r1) = ctx->r12;
    // 0x802B397C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B3980: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x802B3984: lbu         $t5, -0x3268($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3268);
    // 0x802B3988: sh          $zero, 0xB72($at)
    MEM_H(0XB72, ctx->r1) = 0;
    // 0x802B398C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802B3994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802B3998: jal         0x8006F700
    // 0x802B399C: sb          $t5, 0x580C($at)
    MEM_B(0X580C, ctx->r1) = ctx->r13;
    func_8006F700(rdram, ctx);
        goto after_5;
    // 0x802B399C: sb          $t5, 0x580C($at)
    MEM_B(0X580C, ctx->r1) = ctx->r13;
    after_5:
    // 0x802B39A0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802B39A4: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x802B39A8: lbu         $t6, 0x868($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X868);
    // 0x802B39AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B39B0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802B39B4: sb          $t6, 0x580D($at)
    MEM_B(0X580D, ctx->r1) = ctx->r14;
    // 0x802B39B8: addiu       $v0, $v0, 0xB14
    ctx->r2 = ADD32(ctx->r2, 0XB14);
    // 0x802B39BC: sb          $zero, 0x868($v1)
    MEM_B(0X868, ctx->r3) = 0;
    // 0x802B39C0: sb          $s0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r16;
    // 0x802B39C4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x802B39C8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x802B39CC: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x802B39D0: jal         0x802B3B8C
    // 0x802B39D4: sb          $s0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r16;
    func_802B3B8C(rdram, ctx);
        goto after_6;
    // 0x802B39D4: sb          $s0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r16;
    after_6:
    // 0x802B39D8: jal         0x802B3C74
    // 0x802B39DC: nop

    func_802B3C74(rdram, ctx);
        goto after_7;
    // 0x802B39DC: nop

    after_7:
    // 0x802B39E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B39E4: sh          $s0, 0xB78($at)
    MEM_H(0XB78, ctx->r1) = ctx->r16;
    // 0x802B39E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802B39EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B39F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802B39F4: sw          $zero, 0x5808($at)
    MEM_W(0X5808, ctx->r1) = 0;
    // 0x802B39F8: jr          $ra
    // 0x802B39FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802B39FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802B3A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3A00: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802B3A04: addiu       $v1, $v1, 0x5808
    ctx->r3 = ADD32(ctx->r3, 0X5808);
    // 0x802B3A08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802B3A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3A10: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x802B3A14: beq         $at, $zero, L_802B3A28
    if (ctx->r1 == 0) {
        // 0x802B3A18: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802B3A28;
    }
    // 0x802B3A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3A1C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x802B3A20: b           L_802B3ABC
    // 0x802B3A24: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_802B3ABC;
    // 0x802B3A24: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_802B3A28:
    // 0x802B3A28: jal         0x802B3BBC
    // 0x802B3A2C: nop

    func_802B3BBC(rdram, ctx);
        goto after_0;
    // 0x802B3A2C: nop

    after_0:
    // 0x802B3A30: jal         0x802B3BA0
    // 0x802B3A34: nop

    func_802B3BA0(rdram, ctx);
        goto after_1;
    // 0x802B3A34: nop

    after_1:
    // 0x802B3A38: jal         0x80025D00
    // 0x802B3A3C: nop

    func_80025D00(rdram, ctx);
        goto after_2;
    // 0x802B3A3C: nop

    after_2:
    // 0x802B3A40: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802B3A44: lh          $t7, -0x2FAE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FAE);
    // 0x802B3A48: nop

    // 0x802B3A4C: bne         $t7, $zero, L_802B3ABC
    if (ctx->r15 != 0) {
        // 0x802B3A50: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_802B3ABC;
    }
    // 0x802B3A50: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802B3A54: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802B3A58: lhu         $t8, 0x9CA($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X9CA);
    // 0x802B3A5C: lhu         $t9, 0x9AC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AC);
    // 0x802B3A60: lhu         $t1, 0x9B6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X9B6);
    // 0x802B3A64: lhu         $t3, 0x9C0($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9C0);
    // 0x802B3A68: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802B3A6C: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x802B3A70: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x802B3A74: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x802B3A78: beq         $t5, $zero, L_802B3A90
    if (ctx->r13 == 0) {
        // 0x802B3A7C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802B3A90;
    }
    // 0x802B3A7C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B3A80: jal         0x802B3ACC
    // 0x802B3A84: nop

    func_802B3ACC(rdram, ctx);
        goto after_3;
    // 0x802B3A84: nop

    after_3:
    // 0x802B3A88: b           L_802B3AC0
    // 0x802B3A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802B3AC0;
    // 0x802B3A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3A90:
    // 0x802B3A90: addiu       $v0, $v0, 0x3A22
    ctx->r2 = ADD32(ctx->r2, 0X3A22);
    // 0x802B3A94: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x802B3A98: nop

    // 0x802B3A9C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802B3AA0: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x802B3AA4: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x802B3AA8: nop

    // 0x802B3AAC: bgtz        $t8, L_802B3AC0
    if (SIGNED(ctx->r24) > 0) {
        // 0x802B3AB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B3AC0;
    }
    // 0x802B3AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3AB4: jal         0x802B3ACC
    // 0x802B3AB8: nop

    func_802B3ACC(rdram, ctx);
        goto after_4;
    // 0x802B3AB8: nop

    after_4:
L_802B3ABC:
    // 0x802B3ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3AC0:
    // 0x802B3AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3AC4: jr          $ra
    // 0x802B3AC8: nop

    return;
    // 0x802B3AC8: nop

;}
RECOMP_FUNC void func_802B3ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3AD4: jal         0x80024960
    // 0x802B3AD8: nop

    func_80024960(rdram, ctx);
        goto after_0;
    // 0x802B3AD8: nop

    after_0:
    // 0x802B3ADC: jal         0x80015BC0
    // 0x802B3AE0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x802B3AE0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x802B3AE4: jal         0x80021960
    // 0x802B3AE8: nop

    func_80021960(rdram, ctx);
        goto after_2;
    // 0x802B3AE8: nop

    after_2:
    // 0x802B3AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3AF0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802B3AF4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802B3AF8: sb          $t6, 0x522E($at)
    MEM_B(0X522E, ctx->r1) = ctx->r14;
    // 0x802B3AFC: jr          $ra
    // 0x802B3B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802B3B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802B3B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802B3B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802B3B0C: jal         0x802B3BBC
    // 0x802B3B10: nop

    func_802B3BBC(rdram, ctx);
        goto after_0;
    // 0x802B3B10: nop

    after_0:
    // 0x802B3B14: jal         0x802B3BA0
    // 0x802B3B18: nop

    func_802B3BA0(rdram, ctx);
        goto after_1;
    // 0x802B3B18: nop

    after_1:
    // 0x802B3B1C: jal         0x80025D00
    // 0x802B3B20: nop

    func_80025D00(rdram, ctx);
        goto after_2;
    // 0x802B3B20: nop

    after_2:
    // 0x802B3B24: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802B3B28: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x802B3B2C: lh          $t6, 0x7CA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X7CA);
    // 0x802B3B30: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802B3B34: beq         $t6, $zero, L_802B3B80
    if (ctx->r14 == 0) {
        // 0x802B3B38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802B3B80;
    }
    // 0x802B3B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802B3B3C: lbu         $t7, 0x7D5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7D5);
    // 0x802B3B40: nop

    // 0x802B3B44: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802B3B48: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x802B3B4C: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x802B3B50: bne         $at, $zero, L_802B3B5C
    if (ctx->r1 != 0) {
        // 0x802B3B54: sb          $t8, 0x7D5($v0)
        MEM_B(0X7D5, ctx->r2) = ctx->r24;
            goto L_802B3B5C;
    }
    // 0x802B3B54: sb          $t8, 0x7D5($v0)
    MEM_B(0X7D5, ctx->r2) = ctx->r24;
    // 0x802B3B58: sb          $zero, 0x7D5($v0)
    MEM_B(0X7D5, ctx->r2) = 0;
L_802B3B5C:
    // 0x802B3B5C: lbu         $a1, 0x580C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X580C);
    // 0x802B3B60: jal         0x8006F700
    // 0x802B3B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F700(rdram, ctx);
        goto after_3;
    // 0x802B3B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802B3B68: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802B3B6C: lbu         $t0, 0x580D($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X580D);
    // 0x802B3B70: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x802B3B74: jal         0x802B3480
    // 0x802B3B78: sb          $t0, -0x2488($at)
    MEM_B(-0X2488, ctx->r1) = ctx->r8;
    func_802B3480(rdram, ctx);
        goto after_4;
    // 0x802B3B78: sb          $t0, -0x2488($at)
    MEM_B(-0X2488, ctx->r1) = ctx->r8;
    after_4:
    // 0x802B3B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802B3B80:
    // 0x802B3B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802B3B84: jr          $ra
    // 0x802B3B88: nop

    return;
    // 0x802B3B88: nop

;}
RECOMP_FUNC void func_802B3B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3B8C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3B90: sw          $zero, 0x5800($at)
    MEM_W(0X5800, ctx->r1) = 0;
    // 0x802B3B94: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802B3B98: jr          $ra
    // 0x802B3B9C: sw          $zero, 0x5804($at)
    MEM_W(0X5804, ctx->r1) = 0;
    return;
    // 0x802B3B9C: sw          $zero, 0x5804($at)
    MEM_W(0X5804, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802B3BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802B3BA0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802B3BA4: addiu       $v0, $v0, 0x5800
    ctx->r2 = ADD32(ctx->r2, 0X5800);
    // 0x802B3BA8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802B3BAC: nop

    // 0x802B3BB0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802B3BB4: jr          $ra
    // 0x802B3BB8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x802B3BB8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
;}
