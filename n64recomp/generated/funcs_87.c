#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_803F0000_menu_func_803F6488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6488: lh          $t4, -0x1B60($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1B60);
    // 0x803F648C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F6490: b           L_803F6970
    // 0x803F6494: sh          $t4, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r12;
        goto L_803F6970;
    // 0x803F6494: sh          $t4, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r12;
    // 0x803F6498: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x803F649C: lhu         $t5, 0x362C($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X362C);
    // 0x803F64A0: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F64A4: beq         $t5, $zero, L_803F64DC
    if (ctx->r13 == 0) {
        // 0x803F64A8: addiu       $t0, $t0, 0x74D0
        ctx->r8 = ADD32(ctx->r8, 0X74D0);
            goto L_803F64DC;
    }
    // 0x803F64A8: addiu       $t0, $t0, 0x74D0
    ctx->r8 = ADD32(ctx->r8, 0X74D0);
    // 0x803F64AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803F64B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F64B4: lwc1        $f4, 0xB4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F64B8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F64BC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F64C0: nop

    // 0x803F64C4: bc1f        L_803F64E0
    if (!c1cs) {
        // 0x803F64C8: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_803F64E0;
    }
    // 0x803F64C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803F64CC: lhu         $t6, 0x361E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X361E);
    // 0x803F64D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x803F64D4: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x803F64D8: sh          $t7, 0x361E($at)
    MEM_H(0X361E, ctx->r1) = ctx->r15;
L_803F64DC:
    // 0x803F64DC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_803F64E0:
    // 0x803F64E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F64E4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x803F64E8: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x803F64EC: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x803F64F0: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x803F64F4: lwc1        $f16, 0x4C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F64F8: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803F64FC: lbu         $t8, 0x8AC($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8AC);
    // 0x803F6500: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803F6504: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803F6508: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x803F650C: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x803F6510: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F6514: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803F6518: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x803F651C: beq         $t3, $zero, L_803F652C
    if (ctx->r11 == 0) {
        // 0x803F6520: addu        $v1, $t9, $t0
        ctx->r3 = ADD32(ctx->r25, ctx->r8);
            goto L_803F652C;
    }
    // 0x803F6520: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x803F6524: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x803F6528: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_803F652C:
    // 0x803F652C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F6530: lwc1        $f6, 0x7DE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7DE4);
    // 0x803F6534: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803F6538: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    // 0x803F653C: lw          $t5, 0x9C0($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X9C0);
    // 0x803F6540: lhu         $t4, 0x4($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X4);
    // 0x803F6544: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F6548: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x803F654C: bne         $at, $zero, L_803F656C
    if (ctx->r1 != 0) {
        // 0x803F6550: lui         $t0, 0x801B
        ctx->r8 = S32(0X801B << 16);
            goto L_803F656C;
    }
    // 0x803F6550: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x803F6554: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x803F6558: lw          $t7, 0x9C4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X9C4);
    // 0x803F655C: nop

    // 0x803F6560: sltu        $at, $t6, $t7
    ctx->r1 = ctx->r14 < ctx->r15 ? 1 : 0;
    // 0x803F6564: beq         $at, $zero, L_803F65EC
    if (ctx->r1 == 0) {
        // 0x803F6568: nop
    
            goto L_803F65EC;
    }
    // 0x803F6568: nop

L_803F656C:
    // 0x803F656C: lh          $t8, 0xC($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XC);
    // 0x803F6570: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803F6574: lwc1        $f18, 0x50($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X50);
    // 0x803F6578: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x803F657C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x803F6580: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6584: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x803F6588: bc1f        L_803F65A8
    if (!c1cs) {
        // 0x803F658C: swc1        $f10, 0xB8($s0)
        MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
            goto L_803F65A8;
    }
    // 0x803F658C: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
    // 0x803F6590: lh          $t9, 0xE($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XE);
    // 0x803F6594: nop

    // 0x803F6598: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x803F659C: nop

    // 0x803F65A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F65A4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
L_803F65A8:
    // 0x803F65A8: lhu         $t0, 0x362C($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X362C);
    // 0x803F65AC: nop

    // 0x803F65B0: beq         $t0, $zero, L_803F65EC
    if (ctx->r8 == 0) {
        // 0x803F65B4: nop
    
            goto L_803F65EC;
    }
    // 0x803F65B4: nop

    // 0x803F65B8: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x803F65BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F65C0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x803F65C4: beq         $t2, $zero, L_803F65EC
    if (ctx->r10 == 0) {
        // 0x803F65C8: addiu       $v0, $v0, 0x3638
        ctx->r2 = ADD32(ctx->r2, 0X3638);
            goto L_803F65EC;
    }
    // 0x803F65C8: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x803F65CC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x803F65D0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x803F65D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F65D8: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x803F65DC: jal         0x8026C070
    // 0x803F65E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_0;
    // 0x803F65E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F65E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F65E8: nop

L_803F65EC:
    // 0x803F65EC: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F65F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F65F4: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F65F8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x803F65FC: bne         $t4, $zero, L_803F6614
    if (ctx->r12 != 0) {
        // 0x803F6600: lui         $a3, 0x4011
        ctx->r7 = S32(0X4011 << 16);
            goto L_803F6614;
    }
    // 0x803F6600: lui         $a3, 0x4011
    ctx->r7 = S32(0X4011 << 16);
    // 0x803F6604: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F6608: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F660C: b           L_803F662C
    // 0x803F6610: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_803F662C;
    // 0x803F6610: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_803F6614:
    // 0x803F6614: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x803F6618: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F661C: jal         0x802700FC
    // 0x803F6620: ori         $a3, $a3, 0xEB85
    ctx->r7 = ctx->r7 | 0XEB85;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_1;
    // 0x803F6620: ori         $a3, $a3, 0xEB85
    ctx->r7 = ctx->r7 | 0XEB85;
    after_1:
    // 0x803F6624: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6628: nop

L_803F662C:
    // 0x803F662C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F6630: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F6634: lwc1        $f2, 0xAC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F6638: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F663C: nop

    // 0x803F6640: bc1f        L_803F6690
    if (!c1cs) {
        // 0x803F6644: nop
    
            goto L_803F6690;
    }
    // 0x803F6644: nop

    // 0x803F6648: lhu         $t5, 0x10($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X10);
    // 0x803F664C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6650: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F6654: bgez        $t5, L_803F666C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x803F6658: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F666C;
    }
    // 0x803F6658: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F665C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F6664: nop

    // 0x803F6668: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_803F666C:
    // 0x803F666C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x803F6670: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x803F6674: lw          $a3, 0x18($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X18);
    // 0x803F6678: jal         0x802700FC
    // 0x803F667C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_2;
    // 0x803F667C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F6680: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6684: nop

    // 0x803F6688: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x803F668C: nop

L_803F6690:
    // 0x803F6690: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6694: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F6698: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x803F669C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F66A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F66A4: beq         $t8, $zero, L_803F66C0
    if (ctx->r24 == 0) {
        // 0x803F66A8: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_803F66C0;
    }
    // 0x803F66A8: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x803F66AC: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F66B0: nop

    // 0x803F66B4: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    // 0x803F66B8: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F66BC: nop

L_803F66C0:
    // 0x803F66C0: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x803F66C4: lw          $t0, 0x9C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9C0);
    // 0x803F66C8: nop

    // 0x803F66CC: sltu        $at, $t9, $t0
    ctx->r1 = ctx->r25 < ctx->r8 ? 1 : 0;
    // 0x803F66D0: bne         $at, $zero, L_803F66F0
    if (ctx->r1 != 0) {
        // 0x803F66D4: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_803F66F0;
    }
    // 0x803F66D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803F66D8: lhu         $t1, 0xA($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA);
    // 0x803F66DC: lw          $t2, 0x9C4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9C4);
    // 0x803F66E0: nop

    // 0x803F66E4: sltu        $at, $t1, $t2
    ctx->r1 = ctx->r9 < ctx->r10 ? 1 : 0;
    // 0x803F66E8: beq         $at, $zero, L_803F68C0
    if (ctx->r1 == 0) {
        // 0x803F66EC: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_803F68C0;
    }
    // 0x803F66EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_803F66F0:
    // 0x803F66F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F66F4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F66F8: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x803F66FC: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6700: lwc1        $f18, 0x7DEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7DEC);
    // 0x803F6704: lwc1        $f19, 0x7DE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7DE8);
    // 0x803F6708: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803F670C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803F6710: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803F6714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6718: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F671C: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x803F6720: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x803F6724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6728: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F672C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F6730: bc1f        L_803F6740
    if (!c1cs) {
        // 0x803F6734: nop
    
            goto L_803F6740;
    }
    // 0x803F6734: nop

    // 0x803F6738: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F673C: nop

L_803F6740:
    // 0x803F6740: lhu         $t3, 0x362C($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X362C);
    // 0x803F6744: nop

    // 0x803F6748: beq         $t3, $zero, L_803F6790
    if (ctx->r11 == 0) {
        // 0x803F674C: nop
    
            goto L_803F6790;
    }
    // 0x803F674C: nop

    // 0x803F6750: lhu         $t4, 0x361E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X361E);
    // 0x803F6754: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803F6758: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x803F675C: beq         $t5, $zero, L_803F6790
    if (ctx->r13 == 0) {
        // 0x803F6760: lui         $a2, 0x801B
        ctx->r6 = S32(0X801B << 16);
            goto L_803F6790;
    }
    // 0x803F6760: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x803F6764: lw          $a1, 0x3638($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3638);
    // 0x803F6768: lw          $a2, 0x363C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X363C);
    // 0x803F676C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6770: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x803F6774: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F6778: jal         0x8026C070
    // 0x803F677C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_3;
    // 0x803F677C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x803F6780: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6784: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F6788: b           L_803F67BC
    // 0x803F678C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_803F67BC;
    // 0x803F678C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F6790:
    // 0x803F6790: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F6794: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x803F6798: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F679C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F67A0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x803F67A4: jal         0x8026C070
    // 0x803F67A8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_4;
    // 0x803F67A8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x803F67AC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F67B0: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F67B4: nop

    // 0x803F67B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F67BC:
    // 0x803F67BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F67C0: jal         0x8026BD38
    // 0x803F67C4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_5;
    // 0x803F67C4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x803F67C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F67CC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F67D0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F67D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F67D8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F67DC: bc1f        L_803F682C
    if (!c1cs) {
        // 0x803F67E0: nop
    
            goto L_803F682C;
    }
    // 0x803F67E0: nop

    // 0x803F67E4: lhu         $t6, 0x1C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1C);
    // 0x803F67E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F67EC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x803F67F0: bgez        $t6, L_803F6808
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F67F4: cvt.s.w     $f16, $f16
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F6808;
    }
    // 0x803F67F4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F67F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F67FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F6800: nop

    // 0x803F6804: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_803F6808:
    // 0x803F6808: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F680C: lw          $a2, 0x20($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X20);
    // 0x803F6810: lw          $a3, 0x24($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X24);
    // 0x803F6814: jal         0x802700FC
    // 0x803F6818: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_6;
    // 0x803F6818: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x803F681C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6820: nop

    // 0x803F6824: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F6828: nop

L_803F682C:
    // 0x803F682C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6830: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F6834: lhu         $t8, 0x10($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X10);
    // 0x803F6838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F683C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F6840: beq         $t9, $zero, L_803F685C
    if (ctx->r25 == 0) {
        // 0x803F6844: nop
    
            goto L_803F685C;
    }
    // 0x803F6844: nop

    // 0x803F6848: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F684C: nop

    // 0x803F6850: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x803F6854: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F6858: nop

L_803F685C:
    // 0x803F685C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F6860: nop

    // 0x803F6864: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x803F6868: nop

    // 0x803F686C: lhu         $t2, 0x20($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X20);
    // 0x803F6870: nop

    // 0x803F6874: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x803F6878: bne         $t3, $zero, L_803F68C0
    if (ctx->r11 != 0) {
        // 0x803F687C: nop
    
            goto L_803F68C0;
    }
    // 0x803F687C: nop

    // 0x803F6880: jal         0x803F5F18
    // 0x803F6884: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    ovl_803F0000_menu_func_803F5F18(rdram, ctx);
        goto after_7;
    // 0x803F6884: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x803F6888: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F688C: beq         $v0, $zero, L_803F68C0
    if (ctx->r2 == 0) {
        // 0x803F6890: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_803F68C0;
    }
    // 0x803F6890: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F6894: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6898: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F689C: sw          $s0, 0x96C($t4)
    MEM_W(0X96C, ctx->r12) = ctx->r16;
    // 0x803F68A0: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F68A4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F68A8: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x803F68AC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x803F68B0: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F68B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F68B8: b           L_803F6970
    // 0x803F68BC: sh          $t7, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r15;
        goto L_803F6970;
    // 0x803F68BC: sh          $t7, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r15;
L_803F68C0:
    // 0x803F68C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F68C4: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x803F68C8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803F68CC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x803F68D0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x803F68D4: bc1t        L_803F68E8
    if (c1cs) {
        // 0x803F68D8: nop
    
            goto L_803F68E8;
    }
    // 0x803F68D8: nop

    // 0x803F68DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F68E0: nop

    // 0x803F68E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_803F68E8:
    // 0x803F68E8: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F68EC: lwc1        $f18, 0xB8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x803F68F0: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F68F4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F68F8: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x803F68FC: bc1f        L_803F690C
    if (!c1cs) {
        // 0x803F6900: sh          $t9, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r25;
            goto L_803F690C;
    }
    // 0x803F6900: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F6904: ori         $t1, $t9, 0x8
    ctx->r9 = ctx->r25 | 0X8;
    // 0x803F6908: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
L_803F690C:
    // 0x803F690C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x803F6910: nop

    // 0x803F6914: lw          $v0, 0x88($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X88);
    // 0x803F6918: nop

    // 0x803F691C: beq         $v0, $zero, L_803F696C
    if (ctx->r2 == 0) {
        // 0x803F6920: nop
    
            goto L_803F696C;
    }
    // 0x803F6920: nop

    // 0x803F6924: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6928: nop

    // 0x803F692C: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F6930: nop

    // 0x803F6934: beq         $t4, $zero, L_803F696C
    if (ctx->r12 == 0) {
        // 0x803F6938: nop
    
            goto L_803F696C;
    }
    // 0x803F6938: nop

    // 0x803F693C: lhu         $t5, 0x12($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X12);
    // 0x803F6940: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F6944: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F6948: beq         $t6, $zero, L_803F6970
    if (ctx->r14 == 0) {
        // 0x803F694C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6970;
    }
    // 0x803F694C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6950: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F6954: nop

    // 0x803F6958: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F695C: nop

    // 0x803F6960: bc1f        L_803F6970
    if (!c1cs) {
        // 0x803F6964: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6970;
    }
    // 0x803F6964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6968: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_803F696C:
    // 0x803F696C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6970:
    // 0x803F6970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6978: jr          $ra
    // 0x803F697C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F697C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6590: lh          $t9, 0xE($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XE);
    // 0x803F6594: nop

    // 0x803F6598: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x803F659C: nop

    // 0x803F65A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F65A4: swc1        $f6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f6.u32l;
    // 0x803F65A8: lhu         $t0, 0x362C($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X362C);
    // 0x803F65AC: nop

    // 0x803F65B0: beq         $t0, $zero, L_803F65EC
    if (ctx->r8 == 0) {
        // 0x803F65B4: nop
    
            goto L_803F65EC;
    }
    // 0x803F65B4: nop

    // 0x803F65B8: lhu         $t1, 0x361E($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X361E);
    // 0x803F65BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F65C0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x803F65C4: beq         $t2, $zero, L_803F65EC
    if (ctx->r10 == 0) {
        // 0x803F65C8: addiu       $v0, $v0, 0x3638
        ctx->r2 = ADD32(ctx->r2, 0X3638);
            goto L_803F65EC;
    }
    // 0x803F65C8: addiu       $v0, $v0, 0x3638
    ctx->r2 = ADD32(ctx->r2, 0X3638);
    // 0x803F65CC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x803F65D0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x803F65D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F65D8: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x803F65DC: jal         0x8026C070
    // 0x803F65E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_0;
    // 0x803F65E0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F65E4: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F65E8: nop

L_803F65EC:
    // 0x803F65EC: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F65F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F65F4: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F65F8: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x803F65FC: bne         $t4, $zero, L_803F6614
    if (ctx->r12 != 0) {
        // 0x803F6600: lui         $a3, 0x4011
        ctx->r7 = S32(0X4011 << 16);
            goto L_803F6614;
    }
    // 0x803F6600: lui         $a3, 0x4011
    ctx->r7 = S32(0X4011 << 16);
    // 0x803F6604: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803F6608: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F660C: b           L_803F662C
    // 0x803F6610: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
        goto L_803F662C;
    // 0x803F6610: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
L_803F6614:
    // 0x803F6614: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x803F6618: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F661C: jal         0x802700FC
    // 0x803F6620: ori         $a3, $a3, 0xEB85
    ctx->r7 = ctx->r7 | 0XEB85;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_1;
    // 0x803F6620: ori         $a3, $a3, 0xEB85
    ctx->r7 = ctx->r7 | 0XEB85;
    after_1:
    // 0x803F6624: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6628: nop

L_803F662C:
    // 0x803F662C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803F6630: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F6634: lwc1        $f2, 0xAC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x803F6638: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x803F663C: nop

    // 0x803F6640: bc1f        L_803F6690
    if (!c1cs) {
        // 0x803F6644: nop
    
            goto L_803F6690;
    }
    // 0x803F6644: nop

    // 0x803F6648: lhu         $t5, 0x10($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X10);
    // 0x803F664C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6650: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x803F6654: bgez        $t5, L_803F666C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x803F6658: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_803F666C;
    }
    // 0x803F6658: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803F665C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803F6664: nop

    // 0x803F6668: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_803F666C:
    // 0x803F666C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x803F6670: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x803F6674: lw          $a3, 0x18($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X18);
    // 0x803F6678: jal         0x802700FC
    // 0x803F667C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_2;
    // 0x803F667C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F6680: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6684: nop

    // 0x803F6688: lwc1        $f2, 0x14($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X14);
    // 0x803F668C: nop

L_803F6690:
    // 0x803F6690: lw          $t6, 0xC8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6694: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F6698: lhu         $t7, 0x10($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X10);
    // 0x803F669C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F66A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F66A4: beq         $t8, $zero, L_803F66C0
    if (ctx->r24 == 0) {
        // 0x803F66A8: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_803F66C0;
    }
    // 0x803F66A8: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x803F66AC: lwc1        $f6, 0x20($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F66B0: nop

    // 0x803F66B4: swc1        $f6, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f6.u32l;
    // 0x803F66B8: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F66BC: nop

L_803F66C0:
    // 0x803F66C0: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x803F66C4: lw          $t0, 0x9C0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X9C0);
    // 0x803F66C8: nop

    // 0x803F66CC: sltu        $at, $t9, $t0
    ctx->r1 = ctx->r25 < ctx->r8 ? 1 : 0;
    // 0x803F66D0: bne         $at, $zero, L_803F66F0
    if (ctx->r1 != 0) {
        // 0x803F66D4: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_803F66F0;
    }
    // 0x803F66D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803F66D8: lhu         $t1, 0xA($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA);
    // 0x803F66DC: lw          $t2, 0x9C4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9C4);
    // 0x803F66E0: nop

    // 0x803F66E4: sltu        $at, $t1, $t2
    ctx->r1 = ctx->r9 < ctx->r10 ? 1 : 0;
    // 0x803F66E8: beq         $at, $zero, L_803F68C0
    if (ctx->r1 == 0) {
        // 0x803F66EC: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_803F68C0;
    }
    // 0x803F66EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
L_803F66F0:
    // 0x803F66F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F66F4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F66F8: swc1        $f8, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f8.u32l;
    // 0x803F66FC: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F6700: lwc1        $f18, 0x7DEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7DEC);
    // 0x803F6704: lwc1        $f19, 0x7DE8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X7DE8);
    // 0x803F6708: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803F670C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x803F6710: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803F6714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6718: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803F671C: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x803F6720: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    // 0x803F6724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6728: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x803F672C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F6730: bc1f        L_803F6740
    if (!c1cs) {
        // 0x803F6734: nop
    
            goto L_803F6740;
    }
    // 0x803F6734: nop

    // 0x803F6738: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F673C: nop

L_803F6740:
    // 0x803F6740: lhu         $t3, 0x362C($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X362C);
    // 0x803F6744: nop

    // 0x803F6748: beq         $t3, $zero, L_803F6790
    if (ctx->r11 == 0) {
        // 0x803F674C: nop
    
            goto L_803F6790;
    }
    // 0x803F674C: nop

    // 0x803F6750: lhu         $t4, 0x361E($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X361E);
    // 0x803F6754: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803F6758: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x803F675C: beq         $t5, $zero, L_803F6790
    if (ctx->r13 == 0) {
        // 0x803F6760: lui         $a2, 0x801B
        ctx->r6 = S32(0X801B << 16);
            goto L_803F6790;
    }
    // 0x803F6760: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x803F6764: lw          $a1, 0x3638($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3638);
    // 0x803F6768: lw          $a2, 0x363C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X363C);
    // 0x803F676C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6770: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x803F6774: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F6778: jal         0x8026C070
    // 0x803F677C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_3;
    // 0x803F677C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x803F6780: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6784: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F6788: b           L_803F67BC
    // 0x803F678C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_803F67BC;
    // 0x803F678C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F6790:
    // 0x803F6790: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F6794: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x803F6798: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F679C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F67A0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x803F67A4: jal         0x8026C070
    // 0x803F67A8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x8026C070)(rdram, ctx);
        goto after_4;
    // 0x803F67A8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_4:
    // 0x803F67AC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F67B0: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F67B4: nop

    // 0x803F67B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F67BC:
    // 0x803F67BC: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x803F67C0: jal         0x8026BD38
    // 0x803F67C4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_5;
    // 0x803F67C4: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x803F67C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F67CC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F67D0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F67D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F67D8: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F67DC: bc1f        L_803F682C
    if (!c1cs) {
        // 0x803F67E0: nop
    
            goto L_803F682C;
    }
    // 0x803F67E0: nop

    // 0x803F67E4: lhu         $t6, 0x1C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1C);
    // 0x803F67E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F67EC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x803F67F0: bgez        $t6, L_803F6808
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F67F4: cvt.s.w     $f16, $f16
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
            goto L_803F6808;
    }
    // 0x803F67F4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803F67F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F67FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803F6800: nop

    // 0x803F6804: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_803F6808:
    // 0x803F6808: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x803F680C: lw          $a2, 0x20($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X20);
    // 0x803F6810: lw          $a3, 0x24($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X24);
    // 0x803F6814: jal         0x802700FC
    // 0x803F6818: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    LOOKUP_FUNC(0x802700FC)(rdram, ctx);
        goto after_6;
    // 0x803F6818: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x803F681C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x803F6820: nop

    // 0x803F6824: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F6828: nop

L_803F682C:
    // 0x803F682C: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6830: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F6834: lhu         $t8, 0x10($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X10);
    // 0x803F6838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F683C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F6840: beq         $t9, $zero, L_803F685C
    if (ctx->r25 == 0) {
        // 0x803F6844: nop
    
            goto L_803F685C;
    }
    // 0x803F6844: nop

    // 0x803F6848: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F684C: nop

    // 0x803F6850: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x803F6854: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x803F6858: nop

L_803F685C:
    // 0x803F685C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x803F6860: nop

    // 0x803F6864: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x803F6868: nop

    // 0x803F686C: lhu         $t2, 0x20($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X20);
    // 0x803F6870: nop

    // 0x803F6874: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x803F6878: bne         $t3, $zero, L_803F68C0
    if (ctx->r11 != 0) {
        // 0x803F687C: nop
    
            goto L_803F68C0;
    }
    // 0x803F687C: nop

    // 0x803F6880: jal         0x803F5F18
    // 0x803F6884: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    ovl_803F0000_menu_func_803F5F18(rdram, ctx);
        goto after_7;
    // 0x803F6884: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x803F6888: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803F688C: beq         $v0, $zero, L_803F68C0
    if (ctx->r2 == 0) {
        // 0x803F6890: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_803F68C0;
    }
    // 0x803F6890: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x803F6894: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6898: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x803F689C: sw          $s0, 0x96C($t4)
    MEM_W(0X96C, ctx->r12) = ctx->r16;
    // 0x803F68A0: lhu         $t5, 0x12($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X12);
    // 0x803F68A4: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F68A8: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x803F68AC: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x803F68B0: lh          $t7, -0x1B60($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1B60);
    // 0x803F68B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x803F68B8: b           L_803F6970
    // 0x803F68BC: sh          $t7, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r15;
        goto L_803F6970;
    // 0x803F68BC: sh          $t7, 0x7E06($at)
    MEM_H(0X7E06, ctx->r1) = ctx->r15;
L_803F68C0:
    // 0x803F68C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803F68C4: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x803F68C8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803F68CC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x803F68D0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x803F68D4: bc1t        L_803F68E8
    if (c1cs) {
        // 0x803F68D8: nop
    
            goto L_803F68E8;
    }
    // 0x803F68D8: nop

    // 0x803F68DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F68E0: nop

    // 0x803F68E4: swc1        $f10, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f10.u32l;
L_803F68E8:
    // 0x803F68E8: lwc1        $f16, 0xB4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F68EC: lwc1        $f18, 0xB8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB8);
    // 0x803F68F0: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x803F68F4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803F68F8: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x803F68FC: bc1f        L_803F690C
    if (!c1cs) {
        // 0x803F6900: sh          $t9, 0x12($s0)
        MEM_H(0X12, ctx->r16) = ctx->r25;
            goto L_803F690C;
    }
    // 0x803F6900: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F6904: ori         $t1, $t9, 0x8
    ctx->r9 = ctx->r25 | 0X8;
    // 0x803F6908: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
L_803F690C:
    // 0x803F690C: lw          $t2, 0x3B20($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B20);
    // 0x803F6910: nop

    // 0x803F6914: lw          $v0, 0x88($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X88);
    // 0x803F6918: nop

    // 0x803F691C: beq         $v0, $zero, L_803F696C
    if (ctx->r2 == 0) {
        // 0x803F6920: nop
    
            goto L_803F696C;
    }
    // 0x803F6920: nop

    // 0x803F6924: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6928: nop

    // 0x803F692C: lbu         $t4, 0x8AC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8AC);
    // 0x803F6930: nop

    // 0x803F6934: beq         $t4, $zero, L_803F696C
    if (ctx->r12 == 0) {
        // 0x803F6938: nop
    
            goto L_803F696C;
    }
    // 0x803F6938: nop

    // 0x803F693C: lhu         $t5, 0x12($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X12);
    // 0x803F6940: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F6944: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x803F6948: beq         $t6, $zero, L_803F6970
    if (ctx->r14 == 0) {
        // 0x803F694C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6970;
    }
    // 0x803F694C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6950: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803F6954: nop

    // 0x803F6958: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F695C: nop

    // 0x803F6960: bc1f        L_803F6970
    if (!c1cs) {
        // 0x803F6964: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F6970;
    }
    // 0x803F6964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6968: swc1        $f2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f2.u32l;
L_803F696C:
    // 0x803F696C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6970:
    // 0x803F6970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6978: jr          $ra
    // 0x803F697C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F697C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6980: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x803F6984: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x803F6988: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F698C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F6990: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x803F6994: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x803F6998: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x803F699C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F69A0: jal         0x80272B98
    // 0x803F69A4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F69A4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x803F69A8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x803F69AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803F69B0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x803F69B4: swc1        $f4, 0xBC($t6)
    MEM_W(0XBC, ctx->r14) = ctx->f4.u32l;
    // 0x803F69B8: lhu         $t7, 0x2E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X2E);
    // 0x803F69BC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F69C0: bne         $t7, $zero, L_803F6A00
    if (ctx->r15 != 0) {
        // 0x803F69C4: lui         $a2, 0x800B
        ctx->r6 = S32(0X800B << 16);
            goto L_803F6A00;
    }
    // 0x803F69C4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F69C8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803F69CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803F69D0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F69D4: addiu       $a3, $a3, -0x52F4
    ctx->r7 = ADD32(ctx->r7, -0X52F4);
    // 0x803F69D8: addiu       $a2, $a2, -0x5324
    ctx->r6 = ADD32(ctx->r6, -0X5324);
    // 0x803F69DC: jal         0x803F0000
    // 0x803F69E0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_1;
    // 0x803F69E0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x803F69E4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x803F69E8: nop

    // 0x803F69EC: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x803F69F0: nop

    // 0x803F69F4: sh          $v0, 0x960($t9)
    MEM_H(0X960, ctx->r25) = ctx->r2;
    // 0x803F69F8: b           L_803F6A28
    // 0x803F69FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6A28;
    // 0x803F69FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6A00:
    // 0x803F6A00: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F6A04: addiu       $a3, $a3, -0x52C0
    ctx->r7 = ADD32(ctx->r7, -0X52C0);
    // 0x803F6A08: jal         0x803F0000
    // 0x803F6A0C: addiu       $a2, $a2, -0x52F0
    ctx->r6 = ADD32(ctx->r6, -0X52F0);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_2;
    // 0x803F6A0C: addiu       $a2, $a2, -0x52F0
    ctx->r6 = ADD32(ctx->r6, -0X52F0);
    after_2:
    // 0x803F6A10: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F6A14: nop

    // 0x803F6A18: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x803F6A1C: nop

    // 0x803F6A20: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F6A24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_803F6A28:
    // 0x803F6A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6A30: jr          $ra
    // 0x803F6A34: nop

    return;
    // 0x803F6A34: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6A04: addiu       $a3, $a3, -0x52C0
    ctx->r7 = ADD32(ctx->r7, -0X52C0);
    // 0x803F6A08: jal         0x803F0000
    // 0x803F6A0C: addiu       $a2, $a2, -0x52F0
    ctx->r6 = ADD32(ctx->r6, -0X52F0);
    ovl_803F0000_menu_func_803F0000(rdram, ctx);
        goto after_0;
    // 0x803F6A0C: addiu       $a2, $a2, -0x52F0
    ctx->r6 = ADD32(ctx->r6, -0X52F0);
    after_0:
    // 0x803F6A10: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803F6A14: nop

    // 0x803F6A18: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x803F6A1C: nop

    // 0x803F6A20: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    // 0x803F6A24: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x803F6A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F6A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F6A30: jr          $ra
    // 0x803F6A34: nop

    return;
    // 0x803F6A34: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6A38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F6A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6A40: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F6A44: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F6A48: lwc1        $f2, 0x7DF0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X7DF0);
    // 0x803F6A4C: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x803F6A50: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F6A54: lwc1        $f0, 0x7DF4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DF4);
    // 0x803F6A58: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x803F6A5C: bne         $t8, $zero, L_803F6A6C
    if (ctx->r24 != 0) {
        // 0x803F6A60: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_803F6A6C;
    }
    // 0x803F6A60: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x803F6A64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x803F6A68: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_803F6A6C:
    // 0x803F6A6C: lw          $a2, 0x4C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4C);
    // 0x803F6A70: lw          $a3, 0x44($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X44);
    // 0x803F6A74: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803F6A78: addiu       $t9, $sp, 0x24
    ctx->r25 = ADD32(ctx->r29, 0X24);
    // 0x803F6A7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803F6A80: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803F6A84: jal         0x80272B1C
    // 0x803F6A88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x803F6A88: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F6A8C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803F6A90: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803F6A94: jal         0x80279308
    // 0x803F6A98: nop

    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x803F6A98: nop

    after_1:
    // 0x803F6A9C: lui         $at, 0x803F
    ctx->r1 = S32(0X803F << 16);
    // 0x803F6AA0: lwc1        $f5, 0x7DF8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7DF8);
    // 0x803F6AA4: lwc1        $f4, 0x7DFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7DFC);
    // 0x803F6AA8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x803F6AAC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x803F6AB0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x803F6AB4: bc1t        L_803F6AE4
    if (c1cs) {
        // 0x803F6AB8: nop
    
            goto L_803F6AE4;
    }
    // 0x803F6AB8: nop

    // 0x803F6ABC: lwc1        $f12, 0x44($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X44);
    // 0x803F6AC0: jal         0x80272AEC
    // 0x803F6AC4: nop

    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_2;
    // 0x803F6AC4: nop

    after_2:
    // 0x803F6AC8: lui         $at, 0x42B8
    ctx->r1 = S32(0X42B8 << 16);
    // 0x803F6ACC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6AD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F6AD4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x803F6AD8: nop

    // 0x803F6ADC: bc1f        L_803F6AEC
    if (!c1cs) {
        // 0x803F6AE0: nop
    
            goto L_803F6AEC;
    }
    // 0x803F6AE0: nop

L_803F6AE4:
    // 0x803F6AE4: b           L_803F6AEC
    // 0x803F6AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803F6AEC;
    // 0x803F6AE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F6AEC:
    // 0x803F6AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6AF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803F6AF4: jr          $ra
    // 0x803F6AF8: nop

    return;
    // 0x803F6AF8: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6AFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F6B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6B04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F6B08: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x803F6B0C: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x803F6B10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F6B14: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x803F6B18: jal         0x8026AB2C
    // 0x803F6B1C: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(0x8026AB2C)(rdram, ctx);
        goto after_0;
    // 0x803F6B1C: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    after_0:
    // 0x803F6B20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F6B24: nop

    // 0x803F6B28: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F6B2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F6B30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F6B34: nop

    // 0x803F6B38: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F6B3C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F6B40: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F6B44: slti        $at, $v0, -0x130
    ctx->r1 = SIGNED(ctx->r2) < -0X130 ? 1 : 0;
    // 0x803F6B48: beq         $at, $zero, L_803F6BFC
    if (ctx->r1 == 0) {
        // 0x803F6B4C: slti        $at, $v0, 0x108
        ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
            goto L_803F6BFC;
    }
    // 0x803F6B4C: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F6B50: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6B54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803F6B58: lw          $t1, 0x24($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X24);
    // 0x803F6B5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6B60: lwc1        $f6, 0x31C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X31C);
    // 0x803F6B64: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F6B68: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F6B6C: nop

    // 0x803F6B70: bc1t        L_803F6B88
    if (c1cs) {
        // 0x803F6B74: nop
    
            goto L_803F6B88;
    }
    // 0x803F6B74: nop

    // 0x803F6B78: lhu         $t2, 0xB7A($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB7A);
    // 0x803F6B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6B80: beq         $t2, $zero, L_803F6BA0
    if (ctx->r10 == 0) {
        // 0x803F6B84: addiu       $a1, $zero, 0xFE
        ctx->r5 = ADD32(0, 0XFE);
            goto L_803F6BA0;
    }
    // 0x803F6B84: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
L_803F6B88:
    // 0x803F6B88: jal         0x803F3E54
    // 0x803F6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_1;
    // 0x803F6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F6B90: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F6B94: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F6B98: b           L_803F6D70
    // 0x803F6B9C: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
        goto L_803F6D70;
    // 0x803F6B9C: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
L_803F6BA0:
    // 0x803F6BA0: jal         0x803F11B4
    // 0x803F6BA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F6BA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F6BA8: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6BAC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F6D70;
    }
    // 0x803F6BAC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F6BB0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x803F6BB4: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x803F6BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6BBC: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x803F6BC0: beq         $t4, $zero, L_803F6BE0
    if (ctx->r12 == 0) {
        // 0x803F6BC4: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_803F6BE0;
    }
    // 0x803F6BC4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x803F6BC8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6BCC: nop

    // 0x803F6BD0: lhu         $t5, 0x95C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6BD4: nop

    // 0x803F6BD8: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x803F6BDC: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
L_803F6BE0:
    // 0x803F6BE0: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x803F6BE4: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x803F6BE8: jal         0x803F6980
    // 0x803F6BEC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_3;
    // 0x803F6BEC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_3:
    // 0x803F6BF0: b           L_803F6D70
    // 0x803F6BF4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
        goto L_803F6D70;
    // 0x803F6BF4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6BF8: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
L_803F6BFC:
    // 0x803F6BFC: beq         $at, $zero, L_803F6C7C
    if (ctx->r1 == 0) {
        // 0x803F6C00: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F6C7C;
    }
    // 0x803F6C00: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F6C04: jal         0x803F4D88
    // 0x803F6C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4D88(rdram, ctx);
        goto after_4;
    // 0x803F6C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F6C0C: beq         $v0, $zero, L_803F6C1C
    if (ctx->r2 == 0) {
        // 0x803F6C10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6C1C;
    }
    // 0x803F6C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C14: b           L_803F6D78
    // 0x803F6C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6D78;
    // 0x803F6C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6C1C:
    // 0x803F6C1C: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F6C20: jal         0x803F11B4
    // 0x803F6C24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_5;
    // 0x803F6C24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_5:
    // 0x803F6C28: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6C2C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F6D70;
    }
    // 0x803F6C2C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F6C30: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x803F6C34: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x803F6C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C3C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x803F6C40: beq         $t7, $zero, L_803F6C60
    if (ctx->r15 == 0) {
        // 0x803F6C44: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_803F6C60;
    }
    // 0x803F6C44: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803F6C48: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6C4C: nop

    // 0x803F6C50: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6C54: nop

    // 0x803F6C58: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x803F6C5C: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
L_803F6C60:
    // 0x803F6C60: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x803F6C64: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x803F6C68: jal         0x803F6980
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_6;
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_6:
    // 0x803F6C70: b           L_803F6D70
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
        goto L_803F6D70;
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6C78: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
L_803F6C7C:
    // 0x803F6C7C: beq         $at, $zero, L_803F6CE0
    if (ctx->r1 == 0) {
        // 0x803F6C80: nop
    
            goto L_803F6CE0;
    }
    // 0x803F6C80: nop

    // 0x803F6C84: jal         0x803F4D88
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4D88(rdram, ctx);
        goto after_7;
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F6C8C: beq         $v0, $zero, L_803F6C9C
    if (ctx->r2 == 0) {
        // 0x803F6C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6C9C;
    }
    // 0x803F6C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C94: b           L_803F6D78
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6D78;
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6C9C:
    // 0x803F6C9C: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F6CA0: jal         0x803F11B4
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_8;
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_8:
    // 0x803F6CA8: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6D70;
    }
    // 0x803F6CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6CB0: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F6CB4: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F6CB8: jal         0x803F6980
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_9;
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x803F6CC0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6CC4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6CC8: nop

    // 0x803F6CCC: lhu         $t1, 0x95C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6CD0: nop

    // 0x803F6CD4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x803F6CD8: b           L_803F6D70
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
        goto L_803F6D70;
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
L_803F6CE0:
    // 0x803F6CE0: jal         0x803F6A38
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6A38(rdram, ctx);
        goto after_10;
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F6CE8: bne         $v0, $zero, L_803F6D38
    if (ctx->r2 != 0) {
        // 0x803F6CEC: nop
    
            goto L_803F6D38;
    }
    // 0x803F6CEC: nop

    // 0x803F6CF0: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F6CF4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F6CF8: jal         0x803F3EE8
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_11;
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x803F6D00: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F6D04: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x803F6D08: jal         0x80059898
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_12;
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_12:
    // 0x803F6D10: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D14: nop

    // 0x803F6D18: sh          $v0, 0x960($t4)
    MEM_H(0X960, ctx->r12) = ctx->r2;
    // 0x803F6D1C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D20: nop

    // 0x803F6D24: lhu         $t5, 0x95C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6D28: nop

    // 0x803F6D2C: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x803F6D30: b           L_803F6D70
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
        goto L_803F6D70;
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
L_803F6D38:
    // 0x803F6D38: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D3C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x803F6D40: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F6D44: lhu         $t1, 0x522A($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X522A);
    // 0x803F6D48: lh          $t9, 0x8BA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8BA);
    // 0x803F6D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6D50: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x803F6D54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803F6D58: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F6D5C: andi        $a3, $t1, 0x1
    ctx->r7 = ctx->r9 & 0X1;
    // 0x803F6D60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F6D64: jal         0x803F6980
    // 0x803F6D68: nop

    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_13;
    // 0x803F6D68: nop

    after_13:
    // 0x803F6D6C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
L_803F6D70:
    // 0x803F6D70: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x803F6D74: nop

L_803F6D78:
    // 0x803F6D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6D7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6D80: jr          $ra
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6B18: jal         0x8026AB2C
    // 0x803F6B1C: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    LOOKUP_FUNC(0x8026AB2C)(rdram, ctx);
        goto after_0;
    // 0x803F6B1C: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    after_0:
    // 0x803F6B20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803F6B24: nop

    // 0x803F6B28: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803F6B2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803F6B30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803F6B34: nop

    // 0x803F6B38: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803F6B3C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x803F6B40: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803F6B44: slti        $at, $v0, -0x130
    ctx->r1 = SIGNED(ctx->r2) < -0X130 ? 1 : 0;
    // 0x803F6B48: beq         $at, $zero, L_803F6BFC
    if (ctx->r1 == 0) {
        // 0x803F6B4C: slti        $at, $v0, 0x108
        ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
            goto L_803F6BFC;
    }
    // 0x803F6B4C: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
    // 0x803F6B50: lw          $t9, 0xC8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6B54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803F6B58: lw          $t1, 0x24($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X24);
    // 0x803F6B5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803F6B60: lwc1        $f6, 0x31C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X31C);
    // 0x803F6B64: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F6B68: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803F6B6C: nop

    // 0x803F6B70: bc1t        L_803F6B88
    if (c1cs) {
        // 0x803F6B74: nop
    
            goto L_803F6B88;
    }
    // 0x803F6B74: nop

    // 0x803F6B78: lhu         $t2, 0xB7A($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB7A);
    // 0x803F6B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6B80: beq         $t2, $zero, L_803F6BA0
    if (ctx->r10 == 0) {
        // 0x803F6B84: addiu       $a1, $zero, 0xFE
        ctx->r5 = ADD32(0, 0XFE);
            goto L_803F6BA0;
    }
    // 0x803F6B84: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
L_803F6B88:
    // 0x803F6B88: jal         0x803F3E54
    // 0x803F6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_1;
    // 0x803F6B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F6B90: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F6B94: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F6B98: b           L_803F6D70
    // 0x803F6B9C: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
        goto L_803F6D70;
    // 0x803F6B9C: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
L_803F6BA0:
    // 0x803F6BA0: jal         0x803F11B4
    // 0x803F6BA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F6BA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F6BA8: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6BAC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F6D70;
    }
    // 0x803F6BAC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F6BB0: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x803F6BB4: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x803F6BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6BBC: andi        $t4, $v0, 0x3
    ctx->r12 = ctx->r2 & 0X3;
    // 0x803F6BC0: beq         $t4, $zero, L_803F6BE0
    if (ctx->r12 == 0) {
        // 0x803F6BC4: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_803F6BE0;
    }
    // 0x803F6BC4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x803F6BC8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6BCC: nop

    // 0x803F6BD0: lhu         $t5, 0x95C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6BD4: nop

    // 0x803F6BD8: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x803F6BDC: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
L_803F6BE0:
    // 0x803F6BE0: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x803F6BE4: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x803F6BE8: jal         0x803F6980
    // 0x803F6BEC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_3;
    // 0x803F6BEC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_3:
    // 0x803F6BF0: b           L_803F6D70
    // 0x803F6BF4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
        goto L_803F6D70;
    // 0x803F6BF4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6BF8: slti        $at, $v0, 0x108
    ctx->r1 = SIGNED(ctx->r2) < 0X108 ? 1 : 0;
L_803F6BFC:
    // 0x803F6BFC: beq         $at, $zero, L_803F6C7C
    if (ctx->r1 == 0) {
        // 0x803F6C00: slti        $at, $v0, 0x158
        ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
            goto L_803F6C7C;
    }
    // 0x803F6C00: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F6C04: jal         0x803F4D88
    // 0x803F6C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4D88(rdram, ctx);
        goto after_4;
    // 0x803F6C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F6C0C: beq         $v0, $zero, L_803F6C1C
    if (ctx->r2 == 0) {
        // 0x803F6C10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6C1C;
    }
    // 0x803F6C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C14: b           L_803F6D78
    // 0x803F6C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6D78;
    // 0x803F6C18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6C1C:
    // 0x803F6C1C: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F6C20: jal         0x803F11B4
    // 0x803F6C24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_5;
    // 0x803F6C24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_5:
    // 0x803F6C28: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6C2C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_803F6D70;
    }
    // 0x803F6C2C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x803F6C30: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x803F6C34: lh          $v0, -0x1B60($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B60);
    // 0x803F6C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C3C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x803F6C40: beq         $t7, $zero, L_803F6C60
    if (ctx->r15 == 0) {
        // 0x803F6C44: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_803F6C60;
    }
    // 0x803F6C44: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803F6C48: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6C4C: nop

    // 0x803F6C50: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6C54: nop

    // 0x803F6C58: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x803F6C5C: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
L_803F6C60:
    // 0x803F6C60: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x803F6C64: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x803F6C68: jal         0x803F6980
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_6;
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_6:
    // 0x803F6C70: b           L_803F6D70
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
        goto L_803F6D70;
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6C78: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
L_803F6C7C:
    // 0x803F6C7C: beq         $at, $zero, L_803F6CE0
    if (ctx->r1 == 0) {
        // 0x803F6C80: nop
    
            goto L_803F6CE0;
    }
    // 0x803F6C80: nop

    // 0x803F6C84: jal         0x803F4D88
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4D88(rdram, ctx);
        goto after_7;
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F6C8C: beq         $v0, $zero, L_803F6C9C
    if (ctx->r2 == 0) {
        // 0x803F6C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6C9C;
    }
    // 0x803F6C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C94: b           L_803F6D78
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6D78;
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6C9C:
    // 0x803F6C9C: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F6CA0: jal         0x803F11B4
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_8;
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_8:
    // 0x803F6CA8: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6D70;
    }
    // 0x803F6CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6CB0: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F6CB4: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F6CB8: jal         0x803F6980
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_9;
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x803F6CC0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6CC4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6CC8: nop

    // 0x803F6CCC: lhu         $t1, 0x95C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6CD0: nop

    // 0x803F6CD4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x803F6CD8: b           L_803F6D70
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
        goto L_803F6D70;
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
L_803F6CE0:
    // 0x803F6CE0: jal         0x803F6A38
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6A38(rdram, ctx);
        goto after_10;
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x803F6CE8: bne         $v0, $zero, L_803F6D38
    if (ctx->r2 != 0) {
        // 0x803F6CEC: nop
    
            goto L_803F6D38;
    }
    // 0x803F6CEC: nop

    // 0x803F6CF0: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F6CF4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F6CF8: jal         0x803F3EE8
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_11;
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x803F6D00: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F6D04: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x803F6D08: jal         0x80059898
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_12;
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_12:
    // 0x803F6D10: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D14: nop

    // 0x803F6D18: sh          $v0, 0x960($t4)
    MEM_H(0X960, ctx->r12) = ctx->r2;
    // 0x803F6D1C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D20: nop

    // 0x803F6D24: lhu         $t5, 0x95C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6D28: nop

    // 0x803F6D2C: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x803F6D30: b           L_803F6D70
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
        goto L_803F6D70;
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
L_803F6D38:
    // 0x803F6D38: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D3C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x803F6D40: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F6D44: lhu         $t1, 0x522A($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X522A);
    // 0x803F6D48: lh          $t9, 0x8BA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8BA);
    // 0x803F6D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6D50: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x803F6D54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803F6D58: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F6D5C: andi        $a3, $t1, 0x1
    ctx->r7 = ctx->r9 & 0X1;
    // 0x803F6D60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F6D64: jal         0x803F6980
    // 0x803F6D68: nop

    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_13;
    // 0x803F6D68: nop

    after_13:
    // 0x803F6D6C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
L_803F6D70:
    // 0x803F6D70: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x803F6D74: nop

L_803F6D78:
    // 0x803F6D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6D7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6D80: jr          $ra
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6C5C: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
    // 0x803F6C60: lw          $a1, 0x4C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4C);
    // 0x803F6C64: lw          $a2, 0x44($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X44);
    // 0x803F6C68: jal         0x803F6980
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_0;
    // 0x803F6C6C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x803F6C70: b           L_803F6D70
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
        goto L_803F6D70;
    // 0x803F6C74: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6C78: slti        $at, $v0, 0x158
    ctx->r1 = SIGNED(ctx->r2) < 0X158 ? 1 : 0;
    // 0x803F6C7C: beq         $at, $zero, L_803F6CE0
    if (ctx->r1 == 0) {
        // 0x803F6C80: nop
    
            goto L_803F6CE0;
    }
    // 0x803F6C80: nop

    // 0x803F6C84: jal         0x803F4D88
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F4D88(rdram, ctx);
        goto after_1;
    // 0x803F6C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F6C8C: beq         $v0, $zero, L_803F6C9C
    if (ctx->r2 == 0) {
        // 0x803F6C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6C9C;
    }
    // 0x803F6C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6C94: b           L_803F6D78
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F6D78;
    // 0x803F6C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6C9C:
    // 0x803F6C9C: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    // 0x803F6CA0: jal         0x803F11B4
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_803F0000_menu_func_803F11B4(rdram, ctx);
        goto after_2;
    // 0x803F6CA4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x803F6CA8: beq         $v0, $zero, L_803F6D70
    if (ctx->r2 == 0) {
        // 0x803F6CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6D70;
    }
    // 0x803F6CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6CB0: lw          $a1, 0x4C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4C);
    // 0x803F6CB4: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x803F6CB8: jal         0x803F6980
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_3;
    // 0x803F6CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x803F6CC0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x803F6CC4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6CC8: nop

    // 0x803F6CCC: lhu         $t1, 0x95C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6CD0: nop

    // 0x803F6CD4: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x803F6CD8: b           L_803F6D70
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
        goto L_803F6D70;
    // 0x803F6CDC: sh          $t2, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r10;
L_803F6CE0:
    // 0x803F6CE0: jal         0x803F6A38
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6A38(rdram, ctx);
        goto after_4;
    // 0x803F6CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F6CE8: bne         $v0, $zero, L_803F6D38
    if (ctx->r2 != 0) {
        // 0x803F6CEC: nop
    
            goto L_803F6D38;
    }
    // 0x803F6CEC: nop

    // 0x803F6CF0: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F6CF4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F6CF8: jal         0x803F3EE8
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_5;
    // 0x803F6CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F6D00: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x803F6D04: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x803F6D08: jal         0x80059898
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_6;
    // 0x803F6D0C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x803F6D10: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D14: nop

    // 0x803F6D18: sh          $v0, 0x960($t4)
    MEM_H(0X960, ctx->r12) = ctx->r2;
    // 0x803F6D1C: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D20: nop

    // 0x803F6D24: lhu         $t5, 0x95C($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6D28: nop

    // 0x803F6D2C: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x803F6D30: b           L_803F6D70
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
        goto L_803F6D70;
    // 0x803F6D34: sh          $t6, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r14;
L_803F6D38:
    // 0x803F6D38: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6D3C: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x803F6D40: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x803F6D44: lhu         $t1, 0x522A($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X522A);
    // 0x803F6D48: lh          $t9, 0x8BA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8BA);
    // 0x803F6D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6D50: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x803F6D54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803F6D58: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803F6D5C: andi        $a3, $t1, 0x1
    ctx->r7 = ctx->r9 & 0X1;
    // 0x803F6D60: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x803F6D64: jal         0x803F6980
    // 0x803F6D68: nop

    ovl_803F0000_menu_func_803F6980(rdram, ctx);
        goto after_7;
    // 0x803F6D68: nop

    after_7:
    // 0x803F6D6C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
L_803F6D70:
    // 0x803F6D70: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x803F6D74: nop

L_803F6D78:
    // 0x803F6D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F6D7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F6D80: jr          $ra
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F6D84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6D88: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F6D8C: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x803F6D90: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x803F6D94: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x803F6D98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F6D9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F6DA0: lbu         $t6, 0xBC($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XBC);
    // 0x803F6DA4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x803F6DA8: bne         $t6, $at, L_803F6DD4
    if (ctx->r14 != ctx->r1) {
        // 0x803F6DAC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_803F6DD4;
    }
    // 0x803F6DAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F6DB0: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6DB4: nop

    // 0x803F6DB8: lhu         $t8, 0x2C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2C);
    // 0x803F6DBC: nop

    // 0x803F6DC0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F6DC4: beq         $t9, $zero, L_803F6DD4
    if (ctx->r25 == 0) {
        // 0x803F6DC8: nop
    
            goto L_803F6DD4;
    }
    // 0x803F6DC8: nop

    // 0x803F6DCC: b           L_803F71E0
    // 0x803F6DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6DD4:
    // 0x803F6DD4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6DD8: nop

    // 0x803F6DDC: lbu         $t1, 0x8AC($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F6DE0: nop

    // 0x803F6DE4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803F6DE8: beq         $at, $zero, L_803F6E14
    if (ctx->r1 == 0) {
        // 0x803F6DEC: nop
    
            goto L_803F6E14;
    }
    // 0x803F6DEC: nop

    // 0x803F6DF0: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6DF4: nop

    // 0x803F6DF8: lhu         $t3, 0x2C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2C);
    // 0x803F6DFC: nop

    // 0x803F6E00: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803F6E04: beq         $t4, $zero, L_803F6E14
    if (ctx->r12 == 0) {
        // 0x803F6E08: nop
    
            goto L_803F6E14;
    }
    // 0x803F6E08: nop

    // 0x803F6E0C: b           L_803F71E0
    // 0x803F6E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E14:
    // 0x803F6E14: lhu         $a3, 0x95C($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6E18: nop

    // 0x803F6E1C: andi        $t5, $a3, 0x1000
    ctx->r13 = ctx->r7 & 0X1000;
    // 0x803F6E20: bne         $t5, $zero, L_803F6E38
    if (ctx->r13 != 0) {
        // 0x803F6E24: nop
    
            goto L_803F6E38;
    }
    // 0x803F6E24: nop

    // 0x803F6E28: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6E2C: nop

    // 0x803F6E30: bne         $s0, $a0, L_803F6E40
    if (ctx->r16 != ctx->r4) {
        // 0x803F6E34: nop
    
            goto L_803F6E40;
    }
    // 0x803F6E34: nop

L_803F6E38:
    // 0x803F6E38: b           L_803F71E0
    // 0x803F6E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E40:
    // 0x803F6E40: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F6E44: andi        $t7, $a3, 0xF7EF
    ctx->r15 = ctx->r7 & 0XF7EF;
    // 0x803F6E48: beq         $t6, $v1, L_803F6E98
    if (ctx->r14 == ctx->r3) {
        // 0x803F6E4C: nop
    
            goto L_803F6E98;
    }
    // 0x803F6E4C: nop

    // 0x803F6E50: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
    // 0x803F6E54: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x803F6E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6E5C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F6E60: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F6E64: jal         0x8027200C
    // 0x803F6E68: nop

    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_0;
    // 0x803F6E68: nop

    after_0:
    // 0x803F6E6C: beq         $v0, $zero, L_803F6E98
    if (ctx->r2 == 0) {
        // 0x803F6E70: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_803F6E98;
    }
    // 0x803F6E70: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x803F6E74: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x803F6E78: nop

    // 0x803F6E7C: lbu         $t9, 0xBD($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XBD);
    // 0x803F6E80: nop

    // 0x803F6E84: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x803F6E88: bne         $t1, $zero, L_803F6E98
    if (ctx->r9 != 0) {
        // 0x803F6E8C: nop
    
            goto L_803F6E98;
    }
    // 0x803F6E8C: nop

    // 0x803F6E90: b           L_803F71E0
    // 0x803F6E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E98:
    // 0x803F6E98: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F6E9C: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x803F6EA0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x803F6EA4: nop

    // 0x803F6EA8: lw          $t2, 0x88($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X88);
    // 0x803F6EAC: nop

    // 0x803F6EB0: bne         $t2, $zero, L_803F6EF8
    if (ctx->r10 != 0) {
        // 0x803F6EB4: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6EB4: nop

    // 0x803F6EB8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6EBC: nop

    // 0x803F6EC0: lw          $t3, 0x914($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X914);
    // 0x803F6EC4: nop

    // 0x803F6EC8: bne         $s0, $t3, L_803F6EF8
    if (ctx->r16 != ctx->r11) {
        // 0x803F6ECC: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6ECC: nop

    // 0x803F6ED0: lhu         $a2, 0x12($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12);
    // 0x803F6ED4: nop

    // 0x803F6ED8: andi        $t4, $a2, 0x2
    ctx->r12 = ctx->r6 & 0X2;
    // 0x803F6EDC: bne         $t4, $zero, L_803F6EF8
    if (ctx->r12 != 0) {
        // 0x803F6EE0: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6EE0: nop

    // 0x803F6EE4: lhu         $a3, 0x95C($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6EE8: nop

    // 0x803F6EEC: andi        $t5, $a3, 0x10
    ctx->r13 = ctx->r7 & 0X10;
    // 0x803F6EF0: beq         $t5, $zero, L_803F6F00
    if (ctx->r13 == 0) {
        // 0x803F6EF4: nop
    
            goto L_803F6F00;
    }
    // 0x803F6EF4: nop

L_803F6EF8:
    // 0x803F6EF8: b           L_803F71E0
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6F00:
    // 0x803F6F00: lhu         $a1, 0x2C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F6F04: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F6F08: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x803F6F0C: lbu         $t7, 0x8AC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F6F10: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6F14: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803F6F18: lbu         $a0, 0x75F8($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X75F8);
    // 0x803F6F1C: mfhi        $t6
    ctx->r14 = hi;
    // 0x803F6F20: addiu       $a1, $t6, 0xF
    ctx->r5 = ADD32(ctx->r14, 0XF);
    // 0x803F6F24: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x803F6F28: beq         $at, $zero, L_803F6F34
    if (ctx->r1 == 0) {
        // 0x803F6F2C: nop
    
            goto L_803F6F34;
    }
    // 0x803F6F2C: nop

    // 0x803F6F30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_803F6F34:
    // 0x803F6F34: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F6F38: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x803F6F3C: slti        $at, $t8, 0x159
    ctx->r1 = SIGNED(ctx->r24) < 0X159 ? 1 : 0;
    // 0x803F6F40: bne         $at, $zero, L_803F6F50
    if (ctx->r1 != 0) {
        // 0x803F6F44: nop
    
            goto L_803F6F50;
    }
    // 0x803F6F44: nop

    // 0x803F6F48: b           L_803F6F50
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_803F6F50;
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_803F6F50:
    // 0x803F6F50: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x803F6F54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803F6F58: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F6F5C: beq         $t1, $zero, L_803F70D4
    if (ctx->r9 == 0) {
        // 0x803F6F60: nop
    
            goto L_803F70D4;
    }
    // 0x803F6F60: nop

    // 0x803F6F64: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x803F6F68: bgez        $a1, L_803F6F80
    if (SIGNED(ctx->r5) >= 0) {
        // 0x803F6F6C: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F6F80;
    }
    // 0x803F6F6C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F6F70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6F78: nop

    // 0x803F6F7C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_803F6F80:
    // 0x803F6F80: jal         0x8026D720
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_1;
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F6F88: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x803F6F8C: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6F90: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6F90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6F94: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x803F6F98: bgez        $a0, L_803F6FB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x803F6F9C: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6FB0;
    }
    // 0x803F6F9C: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6FA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6FA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6FA8: nop

    // 0x803F6FAC: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_803F6FB0:
    // 0x803F6FB0: jal         0x8026D720
    // 0x803F6FB4: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_2;
    // 0x803F6FB4: nop

    after_2:
    // 0x803F6FB8: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6FBC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6FBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6FC0: b           L_803F71E0
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FC8:
    // 0x803F6FC8: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x803F6FCC: beq         $at, $zero, L_803F6FDC
    if (ctx->r1 == 0) {
        // 0x803F6FD0: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_803F6FDC;
    }
    // 0x803F6FD0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x803F6FD4: beq         $at, $zero, L_803F6FE4
    if (ctx->r1 == 0) {
        // 0x803F6FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6FE4;
    }
    // 0x803F6FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F6FDC:
    // 0x803F6FDC: b           L_803F71E0
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FE4:
    // 0x803F6FE4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803F6FE8: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x803F6FEC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803F6FF0: addiu       $t3, $t3, 0x680
    ctx->r11 = ADD32(ctx->r11, 0X680);
    // 0x803F6FF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F6FF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803F6FFC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F7000: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F7004: jal         0x80272B98
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x803F700C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F7010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F7014: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F7018: nop

    // 0x803F701C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x803F7020: nop

    // 0x803F7024: bc1t        L_803F7044
    if (c1cs) {
        // 0x803F7028: nop
    
            goto L_803F7044;
    }
    // 0x803F7028: nop

    // 0x803F702C: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F7030: nop

    // 0x803F7034: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F7038: nop

    // 0x803F703C: bc1f        L_803F71E0
    if (!c1cs) {
        // 0x803F7040: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F71E0;
    }
    // 0x803F7040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7044:
    // 0x803F7044: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F704C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x803F7050: nop

    // 0x803F7054: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F7058: beq         $t6, $zero, L_803F7068
    if (ctx->r14 == 0) {
        // 0x803F705C: nop
    
            goto L_803F7068;
    }
    // 0x803F705C: nop

    // 0x803F7060: b           L_803F7068
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_803F7068;
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_803F7068:
    // 0x803F7068: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F706C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7070: jal         0x80271FD4
    // 0x803F7074: nop

    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_4;
    // 0x803F7074: nop

    after_4:
    // 0x803F7078: bne         $v0, $zero, L_803F7090
    if (ctx->r2 != 0) {
        // 0x803F707C: nop
    
            goto L_803F7090;
    }
    // 0x803F707C: nop

    // 0x803F7080: jal         0x803F6AFC
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_5;
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F7088: b           L_803F71E4
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F7090:
    // 0x803F7090: jal         0x800688BC
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800688BC(rdram, ctx);
        goto after_6;
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F7098: beq         $v0, $zero, L_803F70BC
    if (ctx->r2 == 0) {
        // 0x803F709C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F70BC;
    }
    // 0x803F709C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F70A0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F70A4: nop

    // 0x803F70A8: lhu         $t8, 0x6A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6A);
    // 0x803F70AC: nop

    // 0x803F70B0: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x803F70B4: beq         $at, $zero, L_803F70C4
    if (ctx->r1 == 0) {
        // 0x803F70B8: nop
    
            goto L_803F70C4;
    }
    // 0x803F70B8: nop

L_803F70BC:
    // 0x803F70BC: b           L_803F71E0
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70C4:
    // 0x803F70C4: jal         0x803F6AFC
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_7;
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F70CC: b           L_803F71E4
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F70D4:
    // 0x803F70D4: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F70D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F70DC: andi        $t9, $a3, 0x800
    ctx->r25 = ctx->r7 & 0X800;
    // 0x803F70E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F70E4: nop

    // 0x803F70E8: bc1f        L_803F71DC
    if (!c1cs) {
        // 0x803F70EC: nop
    
            goto L_803F71DC;
    }
    // 0x803F70EC: nop

    // 0x803F70F0: beq         $t9, $zero, L_803F714C
    if (ctx->r25 == 0) {
        // 0x803F70F4: ori         $t1, $a2, 0x4
        ctx->r9 = ctx->r6 | 0X4;
            goto L_803F714C;
    }
    // 0x803F70F4: ori         $t1, $a2, 0x4
    ctx->r9 = ctx->r6 | 0X4;
    // 0x803F70F8: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x803F70FC: jal         0x80059898
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_8:
    // 0x803F7104: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F710C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F7110: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7114: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x803F7118: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F711C: nop

    // 0x803F7120: bc1f        L_803F7130
    if (!c1cs) {
        // 0x803F7124: nop
    
            goto L_803F7130;
    }
    // 0x803F7124: nop

    // 0x803F7128: b           L_803F7130
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
        goto L_803F7130;
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_803F7130:
    // 0x803F7130: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7134: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x803F7138: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F713C: nop

    // 0x803F7140: or          $t4, $t3, $a0
    ctx->r12 = ctx->r11 | ctx->r4;
    // 0x803F7144: b           L_803F71E0
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
        goto L_803F71E0;
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
L_803F714C:
    // 0x803F714C: lbu         $t5, 0xBC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBC);
    // 0x803F7150: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F7154: bne         $t5, $at, L_803F71DC
    if (ctx->r13 != ctx->r1) {
        // 0x803F7158: nop
    
            goto L_803F71DC;
    }
    // 0x803F7158: nop

    // 0x803F715C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x803F7160: nop

    // 0x803F7164: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x803F7168: beq         $at, $zero, L_803F71DC
    if (ctx->r1 == 0) {
        // 0x803F716C: nop
    
            goto L_803F71DC;
    }
    // 0x803F716C: nop

    // 0x803F7170: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F7174: ori         $t9, $a2, 0x4
    ctx->r25 = ctx->r6 | 0X4;
    // 0x803F7178: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x803F717C: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x803F7180: bne         $t8, $v1, L_803F71B0
    if (ctx->r24 != ctx->r3) {
        // 0x803F7184: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_803F71B0;
    }
    // 0x803F7184: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x803F7188: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F718C: jal         0x80059898
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_9;
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_9:
    // 0x803F7194: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F719C: jal         0x803F3E54
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_10;
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    after_10:
    // 0x803F71A4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F71A8: b           L_803F71E0
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71B0:
    // 0x803F71B0: jal         0x80059898
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    func_80059898(rdram, ctx);
        goto after_11;
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    after_11:
    // 0x803F71B8: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F71BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F71C0: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F71C4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F71C8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F71CC: jal         0x803F3EE8
    // 0x803F71D0: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_12;
    // 0x803F71D0: nop

    after_12:
    // 0x803F71D4: b           L_803F71E0
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71DC:
    // 0x803F71DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F71E0:
    // 0x803F71E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F71E4:
    // 0x803F71E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F71E8: jr          $ra
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6DA4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x803F6DA8: bne         $t6, $at, L_803F6DD4
    if (ctx->r14 != ctx->r1) {
        // 0x803F6DAC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_803F6DD4;
    }
    // 0x803F6DAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F6DB0: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6DB4: nop

    // 0x803F6DB8: lhu         $t8, 0x2C($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2C);
    // 0x803F6DBC: nop

    // 0x803F6DC0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x803F6DC4: beq         $t9, $zero, L_803F6DD4
    if (ctx->r25 == 0) {
        // 0x803F6DC8: nop
    
            goto L_803F6DD4;
    }
    // 0x803F6DC8: nop

    // 0x803F6DCC: b           L_803F71E0
    // 0x803F6DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6DD4:
    // 0x803F6DD4: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6DD8: nop

    // 0x803F6DDC: lbu         $t1, 0x8AC($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F6DE0: nop

    // 0x803F6DE4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803F6DE8: beq         $at, $zero, L_803F6E14
    if (ctx->r1 == 0) {
        // 0x803F6DEC: nop
    
            goto L_803F6E14;
    }
    // 0x803F6DEC: nop

    // 0x803F6DF0: lw          $t2, 0x8C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6DF4: nop

    // 0x803F6DF8: lhu         $t3, 0x2C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X2C);
    // 0x803F6DFC: nop

    // 0x803F6E00: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x803F6E04: beq         $t4, $zero, L_803F6E14
    if (ctx->r12 == 0) {
        // 0x803F6E08: nop
    
            goto L_803F6E14;
    }
    // 0x803F6E08: nop

    // 0x803F6E0C: b           L_803F71E0
    // 0x803F6E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E14:
    // 0x803F6E14: lhu         $a3, 0x95C($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6E18: nop

    // 0x803F6E1C: andi        $t5, $a3, 0x1000
    ctx->r13 = ctx->r7 & 0X1000;
    // 0x803F6E20: bne         $t5, $zero, L_803F6E38
    if (ctx->r13 != 0) {
        // 0x803F6E24: nop
    
            goto L_803F6E38;
    }
    // 0x803F6E24: nop

    // 0x803F6E28: lw          $a0, 0x8C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8C);
    // 0x803F6E2C: nop

    // 0x803F6E30: bne         $s0, $a0, L_803F6E40
    if (ctx->r16 != ctx->r4) {
        // 0x803F6E34: nop
    
            goto L_803F6E40;
    }
    // 0x803F6E34: nop

L_803F6E38:
    // 0x803F6E38: b           L_803F71E0
    // 0x803F6E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E40:
    // 0x803F6E40: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x803F6E44: andi        $t7, $a3, 0xF7EF
    ctx->r15 = ctx->r7 & 0XF7EF;
    // 0x803F6E48: beq         $t6, $v1, L_803F6E98
    if (ctx->r14 == ctx->r3) {
        // 0x803F6E4C: nop
    
            goto L_803F6E98;
    }
    // 0x803F6E4C: nop

    // 0x803F6E50: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
    // 0x803F6E54: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x803F6E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F6E5C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F6E60: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F6E64: jal         0x8027200C
    // 0x803F6E68: nop

    LOOKUP_FUNC(0x8027200C)(rdram, ctx);
        goto after_0;
    // 0x803F6E68: nop

    after_0:
    // 0x803F6E6C: beq         $v0, $zero, L_803F6E98
    if (ctx->r2 == 0) {
        // 0x803F6E70: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_803F6E98;
    }
    // 0x803F6E70: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x803F6E74: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x803F6E78: nop

    // 0x803F6E7C: lbu         $t9, 0xBD($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XBD);
    // 0x803F6E80: nop

    // 0x803F6E84: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x803F6E88: bne         $t1, $zero, L_803F6E98
    if (ctx->r9 != 0) {
        // 0x803F6E8C: nop
    
            goto L_803F6E98;
    }
    // 0x803F6E8C: nop

    // 0x803F6E90: b           L_803F71E0
    // 0x803F6E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6E94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6E98:
    // 0x803F6E98: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x803F6E9C: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x803F6EA0: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x803F6EA4: nop

    // 0x803F6EA8: lw          $t2, 0x88($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X88);
    // 0x803F6EAC: nop

    // 0x803F6EB0: bne         $t2, $zero, L_803F6EF8
    if (ctx->r10 != 0) {
        // 0x803F6EB4: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6EB4: nop

    // 0x803F6EB8: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F6EBC: nop

    // 0x803F6EC0: lw          $t3, 0x914($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X914);
    // 0x803F6EC4: nop

    // 0x803F6EC8: bne         $s0, $t3, L_803F6EF8
    if (ctx->r16 != ctx->r11) {
        // 0x803F6ECC: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6ECC: nop

    // 0x803F6ED0: lhu         $a2, 0x12($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12);
    // 0x803F6ED4: nop

    // 0x803F6ED8: andi        $t4, $a2, 0x2
    ctx->r12 = ctx->r6 & 0X2;
    // 0x803F6EDC: bne         $t4, $zero, L_803F6EF8
    if (ctx->r12 != 0) {
        // 0x803F6EE0: nop
    
            goto L_803F6EF8;
    }
    // 0x803F6EE0: nop

    // 0x803F6EE4: lhu         $a3, 0x95C($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F6EE8: nop

    // 0x803F6EEC: andi        $t5, $a3, 0x10
    ctx->r13 = ctx->r7 & 0X10;
    // 0x803F6EF0: beq         $t5, $zero, L_803F6F00
    if (ctx->r13 == 0) {
        // 0x803F6EF4: nop
    
            goto L_803F6F00;
    }
    // 0x803F6EF4: nop

L_803F6EF8:
    // 0x803F6EF8: b           L_803F71E0
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6F00:
    // 0x803F6F00: lhu         $a1, 0x2C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F6F04: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F6F08: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x803F6F0C: lbu         $t7, 0x8AC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F6F10: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6F14: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803F6F18: lbu         $a0, 0x75F8($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X75F8);
    // 0x803F6F1C: mfhi        $t6
    ctx->r14 = hi;
    // 0x803F6F20: addiu       $a1, $t6, 0xF
    ctx->r5 = ADD32(ctx->r14, 0XF);
    // 0x803F6F24: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x803F6F28: beq         $at, $zero, L_803F6F34
    if (ctx->r1 == 0) {
        // 0x803F6F2C: nop
    
            goto L_803F6F34;
    }
    // 0x803F6F2C: nop

    // 0x803F6F30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_803F6F34:
    // 0x803F6F34: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F6F38: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x803F6F3C: slti        $at, $t8, 0x159
    ctx->r1 = SIGNED(ctx->r24) < 0X159 ? 1 : 0;
    // 0x803F6F40: bne         $at, $zero, L_803F6F50
    if (ctx->r1 != 0) {
        // 0x803F6F44: nop
    
            goto L_803F6F50;
    }
    // 0x803F6F44: nop

    // 0x803F6F48: b           L_803F6F50
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_803F6F50;
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_803F6F50:
    // 0x803F6F50: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x803F6F54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803F6F58: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F6F5C: beq         $t1, $zero, L_803F70D4
    if (ctx->r9 == 0) {
        // 0x803F6F60: nop
    
            goto L_803F70D4;
    }
    // 0x803F6F60: nop

    // 0x803F6F64: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x803F6F68: bgez        $a1, L_803F6F80
    if (SIGNED(ctx->r5) >= 0) {
        // 0x803F6F6C: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F6F80;
    }
    // 0x803F6F6C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F6F70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6F78: nop

    // 0x803F6F7C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_803F6F80:
    // 0x803F6F80: jal         0x8026D720
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_1;
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F6F88: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x803F6F8C: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6F90: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6F90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6F94: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x803F6F98: bgez        $a0, L_803F6FB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x803F6F9C: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6FB0;
    }
    // 0x803F6F9C: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6FA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6FA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6FA8: nop

    // 0x803F6FAC: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_803F6FB0:
    // 0x803F6FB0: jal         0x8026D720
    // 0x803F6FB4: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_2;
    // 0x803F6FB4: nop

    after_2:
    // 0x803F6FB8: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6FBC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6FBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6FC0: b           L_803F71E0
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FC8:
    // 0x803F6FC8: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x803F6FCC: beq         $at, $zero, L_803F6FDC
    if (ctx->r1 == 0) {
        // 0x803F6FD0: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_803F6FDC;
    }
    // 0x803F6FD0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x803F6FD4: beq         $at, $zero, L_803F6FE4
    if (ctx->r1 == 0) {
        // 0x803F6FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6FE4;
    }
    // 0x803F6FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F6FDC:
    // 0x803F6FDC: b           L_803F71E0
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FE4:
    // 0x803F6FE4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803F6FE8: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x803F6FEC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803F6FF0: addiu       $t3, $t3, 0x680
    ctx->r11 = ADD32(ctx->r11, 0X680);
    // 0x803F6FF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F6FF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803F6FFC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F7000: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F7004: jal         0x80272B98
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_3;
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x803F700C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F7010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F7014: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F7018: nop

    // 0x803F701C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x803F7020: nop

    // 0x803F7024: bc1t        L_803F7044
    if (c1cs) {
        // 0x803F7028: nop
    
            goto L_803F7044;
    }
    // 0x803F7028: nop

    // 0x803F702C: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F7030: nop

    // 0x803F7034: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F7038: nop

    // 0x803F703C: bc1f        L_803F71E0
    if (!c1cs) {
        // 0x803F7040: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F71E0;
    }
    // 0x803F7040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7044:
    // 0x803F7044: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F704C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x803F7050: nop

    // 0x803F7054: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F7058: beq         $t6, $zero, L_803F7068
    if (ctx->r14 == 0) {
        // 0x803F705C: nop
    
            goto L_803F7068;
    }
    // 0x803F705C: nop

    // 0x803F7060: b           L_803F7068
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_803F7068;
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_803F7068:
    // 0x803F7068: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F706C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7070: jal         0x80271FD4
    // 0x803F7074: nop

    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_4;
    // 0x803F7074: nop

    after_4:
    // 0x803F7078: bne         $v0, $zero, L_803F7090
    if (ctx->r2 != 0) {
        // 0x803F707C: nop
    
            goto L_803F7090;
    }
    // 0x803F707C: nop

    // 0x803F7080: jal         0x803F6AFC
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_5;
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F7088: b           L_803F71E4
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F7090:
    // 0x803F7090: jal         0x800688BC
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800688BC(rdram, ctx);
        goto after_6;
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F7098: beq         $v0, $zero, L_803F70BC
    if (ctx->r2 == 0) {
        // 0x803F709C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F70BC;
    }
    // 0x803F709C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F70A0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F70A4: nop

    // 0x803F70A8: lhu         $t8, 0x6A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6A);
    // 0x803F70AC: nop

    // 0x803F70B0: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x803F70B4: beq         $at, $zero, L_803F70C4
    if (ctx->r1 == 0) {
        // 0x803F70B8: nop
    
            goto L_803F70C4;
    }
    // 0x803F70B8: nop

L_803F70BC:
    // 0x803F70BC: b           L_803F71E0
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70C4:
    // 0x803F70C4: jal         0x803F6AFC
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_7;
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x803F70CC: b           L_803F71E4
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F70D4:
    // 0x803F70D4: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F70D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F70DC: andi        $t9, $a3, 0x800
    ctx->r25 = ctx->r7 & 0X800;
    // 0x803F70E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F70E4: nop

    // 0x803F70E8: bc1f        L_803F71DC
    if (!c1cs) {
        // 0x803F70EC: nop
    
            goto L_803F71DC;
    }
    // 0x803F70EC: nop

    // 0x803F70F0: beq         $t9, $zero, L_803F714C
    if (ctx->r25 == 0) {
        // 0x803F70F4: ori         $t1, $a2, 0x4
        ctx->r9 = ctx->r6 | 0X4;
            goto L_803F714C;
    }
    // 0x803F70F4: ori         $t1, $a2, 0x4
    ctx->r9 = ctx->r6 | 0X4;
    // 0x803F70F8: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x803F70FC: jal         0x80059898
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_8:
    // 0x803F7104: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F710C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F7110: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7114: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x803F7118: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F711C: nop

    // 0x803F7120: bc1f        L_803F7130
    if (!c1cs) {
        // 0x803F7124: nop
    
            goto L_803F7130;
    }
    // 0x803F7124: nop

    // 0x803F7128: b           L_803F7130
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
        goto L_803F7130;
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_803F7130:
    // 0x803F7130: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7134: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x803F7138: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F713C: nop

    // 0x803F7140: or          $t4, $t3, $a0
    ctx->r12 = ctx->r11 | ctx->r4;
    // 0x803F7144: b           L_803F71E0
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
        goto L_803F71E0;
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
L_803F714C:
    // 0x803F714C: lbu         $t5, 0xBC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBC);
    // 0x803F7150: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F7154: bne         $t5, $at, L_803F71DC
    if (ctx->r13 != ctx->r1) {
        // 0x803F7158: nop
    
            goto L_803F71DC;
    }
    // 0x803F7158: nop

    // 0x803F715C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x803F7160: nop

    // 0x803F7164: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x803F7168: beq         $at, $zero, L_803F71DC
    if (ctx->r1 == 0) {
        // 0x803F716C: nop
    
            goto L_803F71DC;
    }
    // 0x803F716C: nop

    // 0x803F7170: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F7174: ori         $t9, $a2, 0x4
    ctx->r25 = ctx->r6 | 0X4;
    // 0x803F7178: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x803F717C: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x803F7180: bne         $t8, $v1, L_803F71B0
    if (ctx->r24 != ctx->r3) {
        // 0x803F7184: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_803F71B0;
    }
    // 0x803F7184: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x803F7188: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F718C: jal         0x80059898
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_9;
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_9:
    // 0x803F7194: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F719C: jal         0x803F3E54
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_10;
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    after_10:
    // 0x803F71A4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F71A8: b           L_803F71E0
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71B0:
    // 0x803F71B0: jal         0x80059898
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    func_80059898(rdram, ctx);
        goto after_11;
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    after_11:
    // 0x803F71B8: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F71BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F71C0: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F71C4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F71C8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F71CC: jal         0x803F3EE8
    // 0x803F71D0: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_12;
    // 0x803F71D0: nop

    after_12:
    // 0x803F71D4: b           L_803F71E0
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71DC:
    // 0x803F71DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F71E0:
    // 0x803F71E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F71E4:
    // 0x803F71E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F71E8: jr          $ra
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F6EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F6EE8: nop

    // 0x803F6EEC: andi        $t5, $a3, 0x10
    ctx->r13 = ctx->r7 & 0X10;
    // 0x803F6EF0: beq         $t5, $zero, L_803F6F00
    if (ctx->r13 == 0) {
        // 0x803F6EF4: nop
    
            goto L_803F6F00;
    }
    // 0x803F6EF4: nop

    // 0x803F6EF8: b           L_803F71E0
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6F00:
    // 0x803F6F00: lhu         $a1, 0x2C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2C);
    // 0x803F6F04: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x803F6F08: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x803F6F0C: lbu         $t7, 0x8AC($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X8AC);
    // 0x803F6F10: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F6F14: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x803F6F18: lbu         $a0, 0x75F8($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X75F8);
    // 0x803F6F1C: mfhi        $t6
    ctx->r14 = hi;
    // 0x803F6F20: addiu       $a1, $t6, 0xF
    ctx->r5 = ADD32(ctx->r14, 0XF);
    // 0x803F6F24: sltu        $at, $a1, $a0
    ctx->r1 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x803F6F28: beq         $at, $zero, L_803F6F34
    if (ctx->r1 == 0) {
        // 0x803F6F2C: nop
    
            goto L_803F6F34;
    }
    // 0x803F6F2C: nop

    // 0x803F6F30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
L_803F6F34:
    // 0x803F6F34: lh          $t8, 0x8B0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8B0);
    // 0x803F6F38: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x803F6F3C: slti        $at, $t8, 0x159
    ctx->r1 = SIGNED(ctx->r24) < 0X159 ? 1 : 0;
    // 0x803F6F40: bne         $at, $zero, L_803F6F50
    if (ctx->r1 != 0) {
        // 0x803F6F44: nop
    
            goto L_803F6F50;
    }
    // 0x803F6F44: nop

    // 0x803F6F48: b           L_803F6F50
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_803F6F50;
    // 0x803F6F4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_803F6F50:
    // 0x803F6F50: lhu         $t9, 0xC0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC0);
    // 0x803F6F54: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803F6F58: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x803F6F5C: beq         $t1, $zero, L_803F70D4
    if (ctx->r9 == 0) {
        // 0x803F6F60: nop
    
            goto L_803F70D4;
    }
    // 0x803F6F60: nop

    // 0x803F6F64: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x803F6F68: bgez        $a1, L_803F6F80
    if (SIGNED(ctx->r5) >= 0) {
        // 0x803F6F6C: cvt.s.w     $f12, $f4
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
            goto L_803F6F80;
    }
    // 0x803F6F6C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803F6F70: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6F74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F6F78: nop

    // 0x803F6F7C: add.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f6.fl;
L_803F6F80:
    // 0x803F6F80: jal         0x8026D720
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_0;
    // 0x803F6F84: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_0:
    // 0x803F6F88: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x803F6F8C: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6F90: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6F90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6F94: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x803F6F98: bgez        $a0, L_803F6FB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x803F6F9C: cvt.s.w     $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
            goto L_803F6FB0;
    }
    // 0x803F6F9C: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803F6FA0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x803F6FA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803F6FA8: nop

    // 0x803F6FAC: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_803F6FB0:
    // 0x803F6FB0: jal         0x8026D720
    // 0x803F6FB4: nop

    LOOKUP_FUNC(0x8026D720)(rdram, ctx);
        goto after_1;
    // 0x803F6FB4: nop

    after_1:
    // 0x803F6FB8: bgez        $v0, L_803F6FC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803F6FBC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F6FC8;
    }
    // 0x803F6FBC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F6FC0: b           L_803F71E0
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FC8:
    // 0x803F6FC8: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x803F6FCC: beq         $at, $zero, L_803F6FDC
    if (ctx->r1 == 0) {
        // 0x803F6FD0: slti        $at, $v0, 0xA
        ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_803F6FDC;
    }
    // 0x803F6FD0: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x803F6FD4: beq         $at, $zero, L_803F6FE4
    if (ctx->r1 == 0) {
        // 0x803F6FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_803F6FE4;
    }
    // 0x803F6FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_803F6FDC:
    // 0x803F6FDC: b           L_803F71E0
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F6FE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F6FE4:
    // 0x803F6FE4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x803F6FE8: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x803F6FEC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803F6FF0: addiu       $t3, $t3, 0x680
    ctx->r11 = ADD32(ctx->r11, 0X680);
    // 0x803F6FF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F6FF8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x803F6FFC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x803F7000: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F7004: jal         0x80272B98
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_2;
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x803F700C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F7010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F7014: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F7018: nop

    // 0x803F701C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x803F7020: nop

    // 0x803F7024: bc1t        L_803F7044
    if (c1cs) {
        // 0x803F7028: nop
    
            goto L_803F7044;
    }
    // 0x803F7028: nop

    // 0x803F702C: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F7030: nop

    // 0x803F7034: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F7038: nop

    // 0x803F703C: bc1f        L_803F71E0
    if (!c1cs) {
        // 0x803F7040: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F71E0;
    }
    // 0x803F7040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7044:
    // 0x803F7044: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F704C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x803F7050: nop

    // 0x803F7054: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F7058: beq         $t6, $zero, L_803F7068
    if (ctx->r14 == 0) {
        // 0x803F705C: nop
    
            goto L_803F7068;
    }
    // 0x803F705C: nop

    // 0x803F7060: b           L_803F7068
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_803F7068;
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_803F7068:
    // 0x803F7068: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F706C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7070: jal         0x80271FD4
    // 0x803F7074: nop

    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_3;
    // 0x803F7074: nop

    after_3:
    // 0x803F7078: bne         $v0, $zero, L_803F7090
    if (ctx->r2 != 0) {
        // 0x803F707C: nop
    
            goto L_803F7090;
    }
    // 0x803F707C: nop

    // 0x803F7080: jal         0x803F6AFC
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_4;
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F7088: b           L_803F71E4
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F7090:
    // 0x803F7090: jal         0x800688BC
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800688BC(rdram, ctx);
        goto after_5;
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F7098: beq         $v0, $zero, L_803F70BC
    if (ctx->r2 == 0) {
        // 0x803F709C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F70BC;
    }
    // 0x803F709C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F70A0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F70A4: nop

    // 0x803F70A8: lhu         $t8, 0x6A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6A);
    // 0x803F70AC: nop

    // 0x803F70B0: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x803F70B4: beq         $at, $zero, L_803F70C4
    if (ctx->r1 == 0) {
        // 0x803F70B8: nop
    
            goto L_803F70C4;
    }
    // 0x803F70B8: nop

L_803F70BC:
    // 0x803F70BC: b           L_803F71E0
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70C4:
    // 0x803F70C4: jal         0x803F6AFC
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_6;
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x803F70CC: b           L_803F71E4
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F70D4:
    // 0x803F70D4: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F70D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F70DC: andi        $t9, $a3, 0x800
    ctx->r25 = ctx->r7 & 0X800;
    // 0x803F70E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F70E4: nop

    // 0x803F70E8: bc1f        L_803F71DC
    if (!c1cs) {
        // 0x803F70EC: nop
    
            goto L_803F71DC;
    }
    // 0x803F70EC: nop

    // 0x803F70F0: beq         $t9, $zero, L_803F714C
    if (ctx->r25 == 0) {
        // 0x803F70F4: ori         $t1, $a2, 0x4
        ctx->r9 = ctx->r6 | 0X4;
            goto L_803F714C;
    }
    // 0x803F70F4: ori         $t1, $a2, 0x4
    ctx->r9 = ctx->r6 | 0X4;
    // 0x803F70F8: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x803F70FC: jal         0x80059898
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_7;
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_7:
    // 0x803F7104: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F710C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F7110: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7114: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x803F7118: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F711C: nop

    // 0x803F7120: bc1f        L_803F7130
    if (!c1cs) {
        // 0x803F7124: nop
    
            goto L_803F7130;
    }
    // 0x803F7124: nop

    // 0x803F7128: b           L_803F7130
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
        goto L_803F7130;
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_803F7130:
    // 0x803F7130: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7134: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x803F7138: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F713C: nop

    // 0x803F7140: or          $t4, $t3, $a0
    ctx->r12 = ctx->r11 | ctx->r4;
    // 0x803F7144: b           L_803F71E0
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
        goto L_803F71E0;
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
L_803F714C:
    // 0x803F714C: lbu         $t5, 0xBC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBC);
    // 0x803F7150: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F7154: bne         $t5, $at, L_803F71DC
    if (ctx->r13 != ctx->r1) {
        // 0x803F7158: nop
    
            goto L_803F71DC;
    }
    // 0x803F7158: nop

    // 0x803F715C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x803F7160: nop

    // 0x803F7164: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x803F7168: beq         $at, $zero, L_803F71DC
    if (ctx->r1 == 0) {
        // 0x803F716C: nop
    
            goto L_803F71DC;
    }
    // 0x803F716C: nop

    // 0x803F7170: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F7174: ori         $t9, $a2, 0x4
    ctx->r25 = ctx->r6 | 0X4;
    // 0x803F7178: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x803F717C: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x803F7180: bne         $t8, $v1, L_803F71B0
    if (ctx->r24 != ctx->r3) {
        // 0x803F7184: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_803F71B0;
    }
    // 0x803F7184: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x803F7188: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F718C: jal         0x80059898
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_8:
    // 0x803F7194: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F719C: jal         0x803F3E54
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_9;
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    after_9:
    // 0x803F71A4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F71A8: b           L_803F71E0
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71B0:
    // 0x803F71B0: jal         0x80059898
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    func_80059898(rdram, ctx);
        goto after_10;
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    after_10:
    // 0x803F71B8: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F71BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F71C0: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F71C4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F71C8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F71CC: jal         0x803F3EE8
    // 0x803F71D0: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_11;
    // 0x803F71D0: nop

    after_11:
    // 0x803F71D4: b           L_803F71E0
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71DC:
    // 0x803F71DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F71E0:
    // 0x803F71E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F71E4:
    // 0x803F71E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F71E8: jr          $ra
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F7000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7000: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x803F7004: jal         0x80272B98
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(0x80272B98)(rdram, ctx);
        goto after_0;
    // 0x803F7008: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x803F700C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x803F7010: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x803F7014: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x803F7018: nop

    // 0x803F701C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x803F7020: nop

    // 0x803F7024: bc1t        L_803F7044
    if (c1cs) {
        // 0x803F7028: nop
    
            goto L_803F7044;
    }
    // 0x803F7028: nop

    // 0x803F702C: lwc1        $f18, 0xB4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XB4);
    // 0x803F7030: nop

    // 0x803F7034: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x803F7038: nop

    // 0x803F703C: bc1f        L_803F71E0
    if (!c1cs) {
        // 0x803F7040: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_803F71E0;
    }
    // 0x803F7040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F7044:
    // 0x803F7044: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7048: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F704C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x803F7050: nop

    // 0x803F7054: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x803F7058: beq         $t6, $zero, L_803F7068
    if (ctx->r14 == 0) {
        // 0x803F705C: nop
    
            goto L_803F7068;
    }
    // 0x803F705C: nop

    // 0x803F7060: b           L_803F7068
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_803F7068;
    // 0x803F7064: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_803F7068:
    // 0x803F7068: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x803F706C: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7070: jal         0x80271FD4
    // 0x803F7074: nop

    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_1;
    // 0x803F7074: nop

    after_1:
    // 0x803F7078: bne         $v0, $zero, L_803F7090
    if (ctx->r2 != 0) {
        // 0x803F707C: nop
    
            goto L_803F7090;
    }
    // 0x803F707C: nop

    // 0x803F7080: jal         0x803F6AFC
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_2;
    // 0x803F7084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x803F7088: b           L_803F71E4
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F708C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F7090:
    // 0x803F7090: jal         0x800688BC
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800688BC(rdram, ctx);
        goto after_3;
    // 0x803F7094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F7098: beq         $v0, $zero, L_803F70BC
    if (ctx->r2 == 0) {
        // 0x803F709C: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_803F70BC;
    }
    // 0x803F709C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x803F70A0: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x803F70A4: nop

    // 0x803F70A8: lhu         $t8, 0x6A($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X6A);
    // 0x803F70AC: nop

    // 0x803F70B0: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x803F70B4: beq         $at, $zero, L_803F70C4
    if (ctx->r1 == 0) {
        // 0x803F70B8: nop
    
            goto L_803F70C4;
    }
    // 0x803F70B8: nop

L_803F70BC:
    // 0x803F70BC: b           L_803F71E0
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F71E0;
    // 0x803F70C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F70C4:
    // 0x803F70C4: jal         0x803F6AFC
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6AFC(rdram, ctx);
        goto after_4;
    // 0x803F70C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F70CC: b           L_803F71E4
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F71E4;
    // 0x803F70D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F70D4: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x803F70D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803F70DC: andi        $t9, $a3, 0x800
    ctx->r25 = ctx->r7 & 0X800;
    // 0x803F70E0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x803F70E4: nop

    // 0x803F70E8: bc1f        L_803F71DC
    if (!c1cs) {
        // 0x803F70EC: nop
    
            goto L_803F71DC;
    }
    // 0x803F70EC: nop

    // 0x803F70F0: beq         $t9, $zero, L_803F714C
    if (ctx->r25 == 0) {
        // 0x803F70F4: ori         $t1, $a2, 0x4
        ctx->r9 = ctx->r6 | 0X4;
            goto L_803F714C;
    }
    // 0x803F70F4: ori         $t1, $a2, 0x4
    ctx->r9 = ctx->r6 | 0X4;
    // 0x803F70F8: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x803F70FC: jal         0x80059898
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_5;
    // 0x803F7100: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_5:
    // 0x803F7104: lw          $t2, 0xC8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7108: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803F710C: sh          $v0, 0x960($t2)
    MEM_H(0X960, ctx->r10) = ctx->r2;
    // 0x803F7110: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x803F7114: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x803F7118: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803F711C: nop

    // 0x803F7120: bc1f        L_803F7130
    if (!c1cs) {
        // 0x803F7124: nop
    
            goto L_803F7130;
    }
    // 0x803F7124: nop

    // 0x803F7128: b           L_803F7130
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
        goto L_803F7130;
    // 0x803F712C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_803F7130:
    // 0x803F7130: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7134: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x803F7138: lhu         $t3, 0x95C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F713C: nop

    // 0x803F7140: or          $t4, $t3, $a0
    ctx->r12 = ctx->r11 | ctx->r4;
    // 0x803F7144: b           L_803F71E0
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
        goto L_803F71E0;
    // 0x803F7148: sh          $t4, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r12;
L_803F714C:
    // 0x803F714C: lbu         $t5, 0xBC($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XBC);
    // 0x803F7150: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803F7154: bne         $t5, $at, L_803F71DC
    if (ctx->r13 != ctx->r1) {
        // 0x803F7158: nop
    
            goto L_803F71DC;
    }
    // 0x803F7158: nop

    // 0x803F715C: lhu         $t6, 0x6A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6A);
    // 0x803F7160: nop

    // 0x803F7164: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x803F7168: beq         $at, $zero, L_803F71DC
    if (ctx->r1 == 0) {
        // 0x803F716C: nop
    
            goto L_803F71DC;
    }
    // 0x803F716C: nop

    // 0x803F7170: lw          $t7, 0x8C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8C);
    // 0x803F7174: ori         $t9, $a2, 0x4
    ctx->r25 = ctx->r6 | 0X4;
    // 0x803F7178: lw          $t8, 0xC8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC8);
    // 0x803F717C: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x803F7180: bne         $t8, $v1, L_803F71B0
    if (ctx->r24 != ctx->r3) {
        // 0x803F7184: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_803F71B0;
    }
    // 0x803F7184: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x803F7188: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    // 0x803F718C: jal         0x80059898
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80059898(rdram, ctx);
        goto after_6;
    // 0x803F7190: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x803F7194: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F719C: jal         0x803F3E54
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    ovl_803F0000_menu_func_803F3E54(rdram, ctx);
        goto after_7;
    // 0x803F71A0: sh          $v0, 0x960($t1)
    MEM_H(0X960, ctx->r9) = ctx->r2;
    after_7:
    // 0x803F71A4: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x803F71A8: b           L_803F71E0
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71B0:
    // 0x803F71B0: jal         0x80059898
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    func_80059898(rdram, ctx);
        goto after_8;
    // 0x803F71B4: sh          $t2, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r10;
    after_8:
    // 0x803F71B8: lw          $t3, 0xC8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XC8);
    // 0x803F71BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F71C0: sh          $v0, 0x960($t3)
    MEM_H(0X960, ctx->r11) = ctx->r2;
    // 0x803F71C4: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x803F71C8: lw          $a1, 0x4C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4C);
    // 0x803F71CC: jal         0x803F3EE8
    // 0x803F71D0: nop

    ovl_803F0000_menu_func_803F3EE8(rdram, ctx);
        goto after_9;
    // 0x803F71D0: nop

    after_9:
    // 0x803F71D4: b           L_803F71E0
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_803F71E0;
    // 0x803F71D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_803F71DC:
    // 0x803F71DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F71E0:
    // 0x803F71E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F71E4:
    // 0x803F71E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F71E8: jr          $ra
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803F71EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F71F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F71F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x803F71F4: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x803F71F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F71FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F7200: lw          $t6, 0x8C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8C);
    // 0x803F7204: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F7208: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x803F720C: nop

    // 0x803F7210: beq         $v1, $t7, L_803F722C
    if (ctx->r3 == ctx->r15) {
        // 0x803F7214: nop
    
            goto L_803F722C;
    }
    // 0x803F7214: nop

    // 0x803F7218: lhu         $t8, 0x95C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F721C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F7220: andi        $t9, $t8, 0xFFFB
    ctx->r25 = ctx->r24 & 0XFFFB;
    // 0x803F7224: b           L_803F727C
    // 0x803F7228: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
        goto L_803F727C;
    // 0x803F7228: sh          $t9, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r25;
L_803F722C:
    // 0x803F722C: lw          $v1, 0xA4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA4);
    // 0x803F7230: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F7234: beq         $v1, $zero, L_803F725C
    if (ctx->r3 == 0) {
        // 0x803F7238: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_803F725C;
    }
    // 0x803F7238: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803F723C: lw          $t0, 0x40($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X40);
    // 0x803F7240: nop

    // 0x803F7244: bne         $a0, $t0, L_803F725C
    if (ctx->r4 != ctx->r8) {
        // 0x803F7248: nop
    
            goto L_803F725C;
    }
    // 0x803F7248: nop

    // 0x803F724C: jal         0x803F5814
    // 0x803F7250: nop

    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_0;
    // 0x803F7250: nop

    after_0:
    // 0x803F7254: b           L_803F727C
    // 0x803F7258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F727C;
    // 0x803F7258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F725C:
    // 0x803F725C: lw          $a1, 0xB50($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XB50);
    // 0x803F7260: lw          $a2, 0xB54($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XB54);
    // 0x803F7264: jal         0x8026D4C0
    // 0x803F7268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D4C0)(rdram, ctx);
        goto after_1;
    // 0x803F7268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F726C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F7270: jal         0x8026BD38
    // 0x803F7274: nop

    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_2;
    // 0x803F7274: nop

    after_2:
    // 0x803F7278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F727C:
    // 0x803F727C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7284: jr          $ra
    // 0x803F7288: nop

    return;
    // 0x803F7288: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F723C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F723C: lw          $t0, 0x40($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X40);
    // 0x803F7240: nop

    // 0x803F7244: bne         $a0, $t0, L_803F725C
    if (ctx->r4 != ctx->r8) {
        // 0x803F7248: nop
    
            goto L_803F725C;
    }
    // 0x803F7248: nop

    // 0x803F724C: jal         0x803F5814
    // 0x803F7250: nop

    ovl_803F0000_menu_func_803F5814(rdram, ctx);
        goto after_0;
    // 0x803F7250: nop

    after_0:
    // 0x803F7254: b           L_803F727C
    // 0x803F7258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F727C;
    // 0x803F7258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F725C:
    // 0x803F725C: lw          $a1, 0xB50($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XB50);
    // 0x803F7260: lw          $a2, 0xB54($a2)
    ctx->r6 = MEM_W(ctx->r6, 0XB54);
    // 0x803F7264: jal         0x8026D4C0
    // 0x803F7268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8026D4C0)(rdram, ctx);
        goto after_1;
    // 0x803F7268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F726C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F7270: jal         0x8026BD38
    // 0x803F7274: nop

    LOOKUP_FUNC(0x8026BD38)(rdram, ctx);
        goto after_2;
    // 0x803F7274: nop

    after_2:
    // 0x803F7278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F727C:
    // 0x803F727C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F7280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F7284: jr          $ra
    // 0x803F7288: nop

    return;
    // 0x803F7288: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F728C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F728C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F7290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F7294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F7298: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F729C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803F72A0: lhu         $t6, 0x948($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X948);
    // 0x803F72A4: nop

    // 0x803F72A8: beq         $t6, $zero, L_803F72EC
    if (ctx->r14 == 0) {
        // 0x803F72AC: nop
    
            goto L_803F72EC;
    }
    // 0x803F72AC: nop

    // 0x803F72B0: lh          $t7, 0x94C($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X94C);
    // 0x803F72B4: nop

    // 0x803F72B8: bne         $t7, $zero, L_803F72EC
    if (ctx->r15 != 0) {
        // 0x803F72BC: nop
    
            goto L_803F72EC;
    }
    // 0x803F72BC: nop

    // 0x803F72C0: lh          $t8, 0x94E($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X94E);
    // 0x803F72C4: nop

    // 0x803F72C8: bne         $t8, $zero, L_803F72EC
    if (ctx->r24 != 0) {
        // 0x803F72CC: nop
    
            goto L_803F72EC;
    }
    // 0x803F72CC: nop

    // 0x803F72D0: lhu         $t9, 0x94A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X94A);
    // 0x803F72D4: nop

    // 0x803F72D8: bne         $t9, $zero, L_803F72EC
    if (ctx->r25 != 0) {
        // 0x803F72DC: nop
    
            goto L_803F72EC;
    }
    // 0x803F72DC: nop

    // 0x803F72E0: sh          $zero, 0x948($v1)
    MEM_H(0X948, ctx->r3) = 0;
    // 0x803F72E4: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x803F72E8: nop

L_803F72EC:
    // 0x803F72EC: lh          $t0, 0x93C($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X93C);
    // 0x803F72F0: nop

    // 0x803F72F4: bne         $t0, $zero, L_803F7324
    if (ctx->r8 != 0) {
        // 0x803F72F8: nop
    
            goto L_803F7324;
    }
    // 0x803F72F8: nop

    // 0x803F72FC: lh          $t1, 0x93E($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X93E);
    // 0x803F7300: nop

    // 0x803F7304: bne         $t1, $zero, L_803F7324
    if (ctx->r9 != 0) {
        // 0x803F7308: nop
    
            goto L_803F7324;
    }
    // 0x803F7308: nop

    // 0x803F730C: lhu         $t2, 0x93A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X93A);
    // 0x803F7310: nop

    // 0x803F7314: bne         $t2, $zero, L_803F7324
    if (ctx->r10 != 0) {
        // 0x803F7318: nop
    
            goto L_803F7324;
    }
    // 0x803F7318: nop

    // 0x803F731C: jal         0x803F2464
    // 0x803F7320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_0;
    // 0x803F7320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_803F7324:
    // 0x803F7324: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803F7328: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x803F732C: nop

    // 0x803F7330: bne         $t3, $zero, L_803F73DC
    if (ctx->r11 != 0) {
        // 0x803F7334: nop
    
            goto L_803F73DC;
    }
    // 0x803F7334: nop

    // 0x803F7338: jal         0x803F6D88
    // 0x803F733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6D88(rdram, ctx);
        goto after_1;
    // 0x803F733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F7340: beq         $v0, $zero, L_803F737C
    if (ctx->r2 == 0) {
        // 0x803F7344: andi        $a1, $v0, 0xFFFF
        ctx->r5 = ctx->r2 & 0XFFFF;
            goto L_803F737C;
    }
    // 0x803F7344: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x803F7348: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F734C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F7350: lhu         $t4, 0x95C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F7354: nop

    // 0x803F7358: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x803F735C: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
    // 0x803F7360: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7364: nop

    // 0x803F7368: lhu         $t6, 0x95C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F736C: nop

    // 0x803F7370: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x803F7374: b           L_803F73F8
    // 0x803F7378: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
        goto L_803F73F8;
    // 0x803F7378: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
L_803F737C:
    // 0x803F737C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7384: lhu         $t9, 0x95C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X95C);
    // 0x803F7388: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x803F738C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x803F7390: beq         $t0, $zero, L_803F73B4
    if (ctx->r8 == 0) {
        // 0x803F7394: nop
    
            goto L_803F73B4;
    }
    // 0x803F7394: nop

    // 0x803F7398: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x803F739C: jal         0x80270F30
    // 0x803F73A0: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(0x80270F30)(rdram, ctx);
        goto after_2;
    // 0x803F73A0: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x803F73A4: jal         0x803F71F0
    // 0x803F73A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F71F0(rdram, ctx);
        goto after_3;
    // 0x803F73A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F73AC: b           L_803F73FC
    // 0x803F73B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F73FC;
    // 0x803F73B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73B4:
    // 0x803F73B4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x803F73B8: nop

    // 0x803F73BC: lw          $t2, 0x88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X88);
    // 0x803F73C0: nop

    // 0x803F73C4: bne         $s0, $t2, L_803F73DC
    if (ctx->r16 != ctx->r10) {
        // 0x803F73C8: nop
    
            goto L_803F73DC;
    }
    // 0x803F73C8: nop

    // 0x803F73CC: jal         0x803F5B1C
    // 0x803F73D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5B1C(rdram, ctx);
        goto after_4;
    // 0x803F73D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F73D4: b           L_803F73FC
    // 0x803F73D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F73FC;
    // 0x803F73D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73DC:
    // 0x803F73DC: jal         0x803F63A4
    // 0x803F73E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F63A4(rdram, ctx);
        goto after_5;
    // 0x803F73E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F73E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F73E8: jal         0x80270F30
    // 0x803F73EC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x80270F30)(rdram, ctx);
        goto after_6;
    // 0x803F73EC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    after_6:
    // 0x803F73F0: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x803F73F4: nop

L_803F73F8:
    // 0x803F73F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73FC:
    // 0x803F73FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F7400: jr          $ra
    // 0x803F7404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F7404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F7408: nop

    // 0x803F740C: nop

;}
RECOMP_FUNC void ovl_803F0000_menu_func_803F7314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F7314: bne         $t2, $zero, L_803F7324
    if (ctx->r10 != 0) {
        // 0x803F7318: nop
    
            goto L_803F7324;
    }
    // 0x803F7318: nop

    // 0x803F731C: jal         0x803F2464
    // 0x803F7320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F2464(rdram, ctx);
        goto after_0;
    // 0x803F7320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_803F7324:
    // 0x803F7324: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803F7328: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x803F732C: nop

    // 0x803F7330: bne         $t3, $zero, L_803F73DC
    if (ctx->r11 != 0) {
        // 0x803F7334: nop
    
            goto L_803F73DC;
    }
    // 0x803F7334: nop

    // 0x803F7338: jal         0x803F6D88
    // 0x803F733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F6D88(rdram, ctx);
        goto after_1;
    // 0x803F733C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803F7340: beq         $v0, $zero, L_803F737C
    if (ctx->r2 == 0) {
        // 0x803F7344: andi        $a1, $v0, 0xFFFF
        ctx->r5 = ctx->r2 & 0XFFFF;
            goto L_803F737C;
    }
    // 0x803F7344: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x803F7348: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F734C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F7350: lhu         $t4, 0x95C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F7354: nop

    // 0x803F7358: ori         $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 | 0X1000;
    // 0x803F735C: sh          $t5, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r13;
    // 0x803F7360: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7364: nop

    // 0x803F7368: lhu         $t6, 0x95C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X95C);
    // 0x803F736C: nop

    // 0x803F7370: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x803F7374: b           L_803F73F8
    // 0x803F7378: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
        goto L_803F73F8;
    // 0x803F7378: sh          $t7, 0x95C($v1)
    MEM_H(0X95C, ctx->r3) = ctx->r15;
L_803F737C:
    // 0x803F737C: lw          $t8, 0xC8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC8);
    // 0x803F7380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F7384: lhu         $t9, 0x95C($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X95C);
    // 0x803F7388: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x803F738C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x803F7390: beq         $t0, $zero, L_803F73B4
    if (ctx->r8 == 0) {
        // 0x803F7394: nop
    
            goto L_803F73B4;
    }
    // 0x803F7394: nop

    // 0x803F7398: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x803F739C: jal         0x80270F30
    // 0x803F73A0: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(0x80270F30)(rdram, ctx);
        goto after_2;
    // 0x803F73A0: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x803F73A4: jal         0x803F71F0
    // 0x803F73A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F71F0(rdram, ctx);
        goto after_3;
    // 0x803F73A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x803F73AC: b           L_803F73FC
    // 0x803F73B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F73FC;
    // 0x803F73B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73B4:
    // 0x803F73B4: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x803F73B8: nop

    // 0x803F73BC: lw          $t2, 0x88($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X88);
    // 0x803F73C0: nop

    // 0x803F73C4: bne         $s0, $t2, L_803F73DC
    if (ctx->r16 != ctx->r10) {
        // 0x803F73C8: nop
    
            goto L_803F73DC;
    }
    // 0x803F73C8: nop

    // 0x803F73CC: jal         0x803F5B1C
    // 0x803F73D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F5B1C(rdram, ctx);
        goto after_4;
    // 0x803F73D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x803F73D4: b           L_803F73FC
    // 0x803F73D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_803F73FC;
    // 0x803F73D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73DC:
    // 0x803F73DC: jal         0x803F63A4
    // 0x803F73E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_803F0000_menu_func_803F63A4(rdram, ctx);
        goto after_5;
    // 0x803F73E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x803F73E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x803F73E8: jal         0x80270F30
    // 0x803F73EC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(0x80270F30)(rdram, ctx);
        goto after_6;
    // 0x803F73EC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    after_6:
    // 0x803F73F0: lhu         $v0, 0x26($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X26);
    // 0x803F73F4: nop

L_803F73F8:
    // 0x803F73F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F73FC:
    // 0x803F73FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F7400: jr          $ra
    // 0x803F7404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F7404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F7408: nop

    // 0x803F740C: nop

;}
RECOMP_FUNC void func_803F0000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0004: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F0008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F000C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F0010: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F0018: sb          $zero, -0x1F14($at)
    MEM_B(-0X1F14, ctx->r1) = 0;
    // 0x803F001C: jal         0x800296E0
    // 0x803F0020: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x803F0020: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_0:
    // 0x803F0024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F002C: jr          $ra
    // 0x803F0030: nop

    return;
    // 0x803F0030: nop

;}
RECOMP_FUNC void func_803F0034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F003C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F0040: jal         0x80035A04
    // 0x803F0044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035A04(rdram, ctx);
        goto after_0;
    // 0x803F0044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0048: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F004C: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F0050: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0054: sb          $t6, -0x1F14($at)
    MEM_B(-0X1F14, ctx->r1) = ctx->r14;
    // 0x803F0058: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    // 0x803F005C: jal         0x8002989C
    // 0x803F0060: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x803F0060: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x803F0064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F006C: jr          $ra
    // 0x803F0070: nop

    return;
    // 0x803F0070: nop

;}
RECOMP_FUNC void func_803F0074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F007C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F0080: jal         0x80036234
    // 0x803F0084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803F0084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0088: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803F008C: jal         0x80035FF0
    // 0x803F0090: addiu       $a0, $a0, 0x1EA4
    ctx->r4 = ADD32(ctx->r4, 0X1EA4);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803F0090: addiu       $a0, $a0, 0x1EA4
    ctx->r4 = ADD32(ctx->r4, 0X1EA4);
    after_1:
    // 0x803F0094: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803F0098: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F009C: jal         0x80049E40
    // 0x803F00A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803F00A0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803F00A4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803F00A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803F00AC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x803F00B0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x803F00B4: sh          $t6, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r14;
    // 0x803F00B8: lbu         $t7, 0x754($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X754);
    // 0x803F00BC: nop

    // 0x803F00C0: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803F00C4: jal         0x80039258
    // 0x803F00C8: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    func_80039258(rdram, ctx);
        goto after_3;
    // 0x803F00C8: sb          $t8, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r24;
    after_3:
    // 0x803F00CC: jal         0x8001C820
    // 0x803F00D0: nop

    func_8001C820(rdram, ctx);
        goto after_4;
    // 0x803F00D0: nop

    after_4:
    // 0x803F00D4: jal         0x803F0E54
    // 0x803F00D8: nop

    func_803F0E54(rdram, ctx);
        goto after_5;
    // 0x803F00D8: nop

    after_5:
    // 0x803F00DC: jal         0x80039D98
    // 0x803F00E0: nop

    func_80039D98(rdram, ctx);
        goto after_6;
    // 0x803F00E0: nop

    after_6:
    // 0x803F00E4: jal         0x803F1568
    // 0x803F00E8: nop

    func_803F1568(rdram, ctx);
        goto after_7;
    // 0x803F00E8: nop

    after_7:
    // 0x803F00EC: jal         0x803F1650
    // 0x803F00F0: nop

    func_803F1650(rdram, ctx);
        goto after_8;
    // 0x803F00F0: nop

    after_8:
    // 0x803F00F4: jal         0x803F1760
    // 0x803F00F8: nop

    func_803F1760(rdram, ctx);
        goto after_9;
    // 0x803F00F8: nop

    after_9:
    // 0x803F00FC: jal         0x803F1B48
    // 0x803F0100: nop

    func_803F1B48(rdram, ctx);
        goto after_10;
    // 0x803F0100: nop

    after_10:
    // 0x803F0104: jal         0x803F1BCC
    // 0x803F0108: nop

    func_803F1BCC(rdram, ctx);
        goto after_11;
    // 0x803F0108: nop

    after_11:
    // 0x803F010C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0110: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803F0114: jal         0x80021214
    // 0x803F0118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_12;
    // 0x803F0118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x803F011C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x803F0120: addiu       $t9, $t9, -0x6C9C
    ctx->r25 = ADD32(ctx->r25, -0X6C9C);
    // 0x803F0124: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x803F0128: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F012C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F0130: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x803F0134: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F0138: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F013C: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x803F0140: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F0144: jal         0x8004B078
    // 0x803F0148: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_13;
    // 0x803F0148: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_13:
    // 0x803F014C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F0150: lbu         $t2, -0x32A4($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X32A4);
    // 0x803F0154: nop

    // 0x803F0158: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803F015C: sltiu       $at, $t3, 0x7
    ctx->r1 = ctx->r11 < 0X7 ? 1 : 0;
    // 0x803F0160: beq         $at, $zero, L_803F01EC
    if (ctx->r1 == 0) {
        // 0x803F0164: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_803F01EC;
    }
    // 0x803F0164: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F0168: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F016C: addu        $at, $at, $t3
    gpr jr_addend_803F0178 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803F0170: lw          $t3, -0x4FC0($at)
    ctx->r11 = ADD32(ctx->r1, -0X4FC0);
    // 0x803F0174: nop

    // 0x803F0178: jr          $t3
    // 0x803F017C: nop

    switch (jr_addend_803F0178 >> 2) {
        case 0: goto L_803F0180; break;
        case 1: goto L_803F01E0; break;
        case 2: goto L_803F01E0; break;
        case 3: goto L_803F01EC; break;
        case 4: goto L_803F0180; break;
        case 5: goto L_803F01EC; break;
        case 6: goto L_803F01E0; break;
        default: switch_error(__func__, 0x803F0178, 0x803FB040);
    }
    // 0x803F017C: nop

L_803F0180:
    // 0x803F0180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0184: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x803F0188: jal         0x80021214
    // 0x803F018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_14;
    // 0x803F018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x803F0190: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x803F0194: addiu       $t4, $t4, -0x6C90
    ctx->r12 = ADD32(ctx->r12, -0X6C90);
    // 0x803F0198: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x803F019C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F01A0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F01A4: lw          $a2, 0x4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X4);
    // 0x803F01A8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F01AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F01B0: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x803F01B4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F01B8: jal         0x8004B078
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_15;
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_15:
    // 0x803F01C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01C4: jal         0x803F2634
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2634(rdram, ctx);
        goto after_16;
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x803F01CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F01D0: jal         0x803F2634
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2634(rdram, ctx);
        goto after_17;
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x803F01D8: b           L_803F01EC
    // 0x803F01DC: nop

        goto L_803F01EC;
    // 0x803F01DC: nop

L_803F01E0:
    // 0x803F01E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01E4: jal         0x803F2634
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_803F2634(rdram, ctx);
        goto after_18;
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
L_803F01EC:
    // 0x803F01EC: jal         0x8006FB58
    // 0x803F01F0: nop

    func_8006FB58(rdram, ctx);
        goto after_19;
    // 0x803F01F0: nop

    after_19:
    // 0x803F01F4: jal         0x80070300
    // 0x803F01F8: nop

    func_80070300(rdram, ctx);
        goto after_20;
    // 0x803F01F8: nop

    after_20:
    // 0x803F01FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F0200: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x803F0204: nop

    // 0x803F0208: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803F020C: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x803F0210: beq         $at, $zero, L_803F039C
    if (ctx->r1 == 0) {
        // 0x803F0214: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F039C;
    }
    // 0x803F0214: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F0218: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F021C: addu        $at, $at, $t8
    gpr jr_addend_803F0228 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F0220: lw          $t8, -0x4FA4($at)
    ctx->r24 = ADD32(ctx->r1, -0X4FA4);
    // 0x803F0224: nop

    // 0x803F0228: jr          $t8
    // 0x803F022C: nop

    switch (jr_addend_803F0228 >> 2) {
        case 0: goto L_803F0230; break;
        case 1: goto L_803F031C; break;
        case 2: goto L_803F031C; break;
        case 3: goto L_803F039C; break;
        case 4: goto L_803F0230; break;
        case 5: goto L_803F039C; break;
        case 6: goto L_803F031C; break;
        default: switch_error(__func__, 0x803F0228, 0x803FB05C);
    }
    // 0x803F022C: nop

L_803F0230:
    // 0x803F0230: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0234: jal         0x8002AAC0
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    func_8002AAC0(rdram, ctx);
        goto after_21;
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    after_21:
    // 0x803F023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0240: jal         0x803F2704
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2704(rdram, ctx);
        goto after_22;
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x803F0248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F024C: jal         0x803F2704
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2704(rdram, ctx);
        goto after_23;
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x803F0254: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0258: addiu       $a1, $a1, -0x7328
    ctx->r5 = ADD32(ctx->r5, -0X7328);
    // 0x803F025C: jal         0x8004C2C8
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_24;
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x803F0264: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0268: addiu       $a1, $a1, -0x731C
    ctx->r5 = ADD32(ctx->r5, -0X731C);
    // 0x803F026C: jal         0x8004C2C8
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C2C8(rdram, ctx);
        goto after_25;
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_25:
    // 0x803F0274: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0278: addiu       $a1, $a1, -0x587C
    ctx->r5 = ADD32(ctx->r5, -0X587C);
    // 0x803F027C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0280: jal         0x803F27B0
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_26;
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x803F0288: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F028C: addiu       $a1, $a1, -0x5870
    ctx->r5 = ADD32(ctx->r5, -0X5870);
    // 0x803F0290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0294: jal         0x803F27B0
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803F27B0(rdram, ctx);
        goto after_27;
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_27:
    // 0x803F029C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02A0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02A4: jal         0x803F22EC
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_28;
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x803F02AC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02B0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02B4: jal         0x803F22EC
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F22EC(rdram, ctx);
        goto after_29;
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_29:
    // 0x803F02BC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02C0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02C4: jal         0x803F24E4
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_30;
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_30:
    // 0x803F02CC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02D0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02D4: jal         0x803F24E4
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F24E4(rdram, ctx);
        goto after_31;
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_31:
    // 0x803F02DC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02E0: jal         0x803F299C
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    func_803F299C(rdram, ctx);
        goto after_32;
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    after_32:
    // 0x803F02E8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02EC: jal         0x803F299C
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    func_803F299C(rdram, ctx);
        goto after_33;
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    after_33:
    // 0x803F02F4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02F8: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02FC: jal         0x803F3328
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_34;
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_34:
    // 0x803F0304: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0308: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F030C: jal         0x803F3328
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F3328(rdram, ctx);
        goto after_35;
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_35:
    // 0x803F0314: b           L_803F039C
    // 0x803F0318: nop

        goto L_803F039C;
    // 0x803F0318: nop

L_803F031C:
    // 0x803F031C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0320: jal         0x8002AAC0
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    func_8002AAC0(rdram, ctx);
        goto after_36;
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    after_36:
    // 0x803F0328: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F032C: addiu       $a1, $a1, -0x6914
    ctx->r5 = ADD32(ctx->r5, -0X6914);
    // 0x803F0330: jal         0x8004C2C8
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_37;
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_37:
    // 0x803F0338: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F033C: addiu       $a1, $a1, -0x5864
    ctx->r5 = ADD32(ctx->r5, -0X5864);
    // 0x803F0340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0344: jal         0x803F27B0
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_38;
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_38:
    // 0x803F034C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0350: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0354: jal         0x803F22EC
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_39;
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_39:
    // 0x803F035C: jal         0x803F2464
    // 0x803F0360: nop

    func_803F2464(rdram, ctx);
        goto after_40;
    // 0x803F0360: nop

    after_40:
    // 0x803F0364: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0368: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F036C: jal         0x803F24E4
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_41;
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_41:
    // 0x803F0374: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0378: jal         0x803F299C
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    func_803F299C(rdram, ctx);
        goto after_42;
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    after_42:
    // 0x803F0380: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0384: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0388: jal         0x803F3328
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_43;
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_43:
    // 0x803F0390: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0394: jal         0x80029220
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    func_80029220(rdram, ctx);
        goto after_44;
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    after_44:
L_803F039C:
    // 0x803F039C: jal         0x8000AB98
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000AB98(rdram, ctx);
        goto after_45;
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_45:
    // 0x803F03A4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03A8: jal         0x80029220
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    func_80029220(rdram, ctx);
        goto after_46;
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    after_46:
    // 0x803F03B0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03B4: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x803F03B8: jal         0x8004A9B4
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_47;
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_47:
    // 0x803F03C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F03C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F03C8: jr          $ra
    // 0x803F03CC: nop

    return;
    // 0x803F03CC: nop

;}
RECOMP_FUNC void func_803F0164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0164: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803F0168: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F016C: addu        $at, $at, $t3
    gpr jr_addend_803F0178 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803F0170: lw          $t3, -0x4FC0($at)
    ctx->r11 = ADD32(ctx->r1, -0X4FC0);
    // 0x803F0174: nop

    // 0x803F0178: jr          $t3
    // 0x803F017C: nop

    switch (jr_addend_803F0178 >> 2) {
        case 0: goto L_803F0180; break;
        case 1: goto L_803F01E0; break;
        case 2: goto L_803F01E0; break;
        case 3: goto L_803F01EC; break;
        case 4: goto L_803F0180; break;
        case 5: goto L_803F01EC; break;
        case 6: goto L_803F01E0; break;
        default: switch_error(__func__, 0x803F0178, 0x803FB040);
    }
    // 0x803F017C: nop

L_803F0180:
    // 0x803F0180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0184: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x803F0188: jal         0x80021214
    // 0x803F018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x803F018C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x803F0190: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x803F0194: addiu       $t4, $t4, -0x6C90
    ctx->r12 = ADD32(ctx->r12, -0X6C90);
    // 0x803F0198: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x803F019C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F01A0: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803F01A4: lw          $a2, 0x4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X4);
    // 0x803F01A8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803F01AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803F01B0: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x803F01B4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F01B8: jal         0x8004B078
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F01C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01C4: jal         0x803F2634
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2634(rdram, ctx);
        goto after_2;
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803F01CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F01D0: jal         0x803F2634
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2634(rdram, ctx);
        goto after_3;
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803F01D8: b           L_803F01EC
    // 0x803F01DC: nop

        goto L_803F01EC;
    // 0x803F01DC: nop

L_803F01E0:
    // 0x803F01E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01E4: jal         0x803F2634
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_803F2634(rdram, ctx);
        goto after_4;
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_803F01EC:
    // 0x803F01EC: jal         0x8006FB58
    // 0x803F01F0: nop

    func_8006FB58(rdram, ctx);
        goto after_5;
    // 0x803F01F0: nop

    after_5:
    // 0x803F01F4: jal         0x80070300
    // 0x803F01F8: nop

    func_80070300(rdram, ctx);
        goto after_6;
    // 0x803F01F8: nop

    after_6:
    // 0x803F01FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F0200: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x803F0204: nop

    // 0x803F0208: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803F020C: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x803F0210: beq         $at, $zero, L_803F039C
    if (ctx->r1 == 0) {
        // 0x803F0214: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F039C;
    }
    // 0x803F0214: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F0218: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F021C: addu        $at, $at, $t8
    gpr jr_addend_803F0228 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F0220: lw          $t8, -0x4FA4($at)
    ctx->r24 = ADD32(ctx->r1, -0X4FA4);
    // 0x803F0224: nop

    // 0x803F0228: jr          $t8
    // 0x803F022C: nop

    switch (jr_addend_803F0228 >> 2) {
        case 0: goto L_803F0230; break;
        case 1: goto L_803F031C; break;
        case 2: goto L_803F031C; break;
        case 3: goto L_803F039C; break;
        case 4: goto L_803F0230; break;
        case 5: goto L_803F039C; break;
        case 6: goto L_803F031C; break;
        default: switch_error(__func__, 0x803F0228, 0x803FB05C);
    }
    // 0x803F022C: nop

L_803F0230:
    // 0x803F0230: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0234: jal         0x8002AAC0
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    func_8002AAC0(rdram, ctx);
        goto after_7;
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    after_7:
    // 0x803F023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0240: jal         0x803F2704
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2704(rdram, ctx);
        goto after_8;
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x803F0248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F024C: jal         0x803F2704
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2704(rdram, ctx);
        goto after_9;
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x803F0254: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0258: addiu       $a1, $a1, -0x7328
    ctx->r5 = ADD32(ctx->r5, -0X7328);
    // 0x803F025C: jal         0x8004C2C8
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_10;
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x803F0264: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0268: addiu       $a1, $a1, -0x731C
    ctx->r5 = ADD32(ctx->r5, -0X731C);
    // 0x803F026C: jal         0x8004C2C8
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C2C8(rdram, ctx);
        goto after_11;
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x803F0274: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0278: addiu       $a1, $a1, -0x587C
    ctx->r5 = ADD32(ctx->r5, -0X587C);
    // 0x803F027C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0280: jal         0x803F27B0
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_12;
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x803F0288: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F028C: addiu       $a1, $a1, -0x5870
    ctx->r5 = ADD32(ctx->r5, -0X5870);
    // 0x803F0290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0294: jal         0x803F27B0
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803F27B0(rdram, ctx);
        goto after_13;
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_13:
    // 0x803F029C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02A0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02A4: jal         0x803F22EC
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_14;
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x803F02AC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02B0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02B4: jal         0x803F22EC
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F22EC(rdram, ctx);
        goto after_15;
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x803F02BC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02C0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02C4: jal         0x803F24E4
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_16;
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x803F02CC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02D0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02D4: jal         0x803F24E4
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F24E4(rdram, ctx);
        goto after_17;
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x803F02DC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02E0: jal         0x803F299C
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    func_803F299C(rdram, ctx);
        goto after_18;
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    after_18:
    // 0x803F02E8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02EC: jal         0x803F299C
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    func_803F299C(rdram, ctx);
        goto after_19;
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    after_19:
    // 0x803F02F4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02F8: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02FC: jal         0x803F3328
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_20;
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x803F0304: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0308: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F030C: jal         0x803F3328
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F3328(rdram, ctx);
        goto after_21;
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x803F0314: b           L_803F039C
    // 0x803F0318: nop

        goto L_803F039C;
    // 0x803F0318: nop

L_803F031C:
    // 0x803F031C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0320: jal         0x8002AAC0
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    func_8002AAC0(rdram, ctx);
        goto after_22;
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    after_22:
    // 0x803F0328: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F032C: addiu       $a1, $a1, -0x6914
    ctx->r5 = ADD32(ctx->r5, -0X6914);
    // 0x803F0330: jal         0x8004C2C8
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_23;
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x803F0338: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F033C: addiu       $a1, $a1, -0x5864
    ctx->r5 = ADD32(ctx->r5, -0X5864);
    // 0x803F0340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0344: jal         0x803F27B0
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_24;
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x803F034C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0350: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0354: jal         0x803F22EC
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_25;
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_25:
    // 0x803F035C: jal         0x803F2464
    // 0x803F0360: nop

    func_803F2464(rdram, ctx);
        goto after_26;
    // 0x803F0360: nop

    after_26:
    // 0x803F0364: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0368: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F036C: jal         0x803F24E4
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_27;
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x803F0374: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0378: jal         0x803F299C
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    func_803F299C(rdram, ctx);
        goto after_28;
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    after_28:
    // 0x803F0380: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0384: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0388: jal         0x803F3328
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_29;
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_29:
    // 0x803F0390: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0394: jal         0x80029220
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    func_80029220(rdram, ctx);
        goto after_30;
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    after_30:
L_803F039C:
    // 0x803F039C: jal         0x8000AB98
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000AB98(rdram, ctx);
        goto after_31;
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_31:
    // 0x803F03A4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03A8: jal         0x80029220
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    func_80029220(rdram, ctx);
        goto after_32;
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    after_32:
    // 0x803F03B0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03B4: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x803F03B8: jal         0x8004A9B4
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_33;
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_33:
    // 0x803F03C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F03C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F03C8: jr          $ra
    // 0x803F03CC: nop

    return;
    // 0x803F03CC: nop

;}
RECOMP_FUNC void func_803F01B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F01B0: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x803F01B4: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F01B8: jal         0x8004B078
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_0;
    // 0x803F01BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F01C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01C4: jal         0x803F2634
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2634(rdram, ctx);
        goto after_1;
    // 0x803F01C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803F01CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F01D0: jal         0x803F2634
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2634(rdram, ctx);
        goto after_2;
    // 0x803F01D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803F01D8: b           L_803F01EC
    // 0x803F01DC: nop

        goto L_803F01EC;
    // 0x803F01DC: nop

    // 0x803F01E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F01E4: jal         0x803F2634
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_803F2634(rdram, ctx);
        goto after_3;
    // 0x803F01E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_803F01EC:
    // 0x803F01EC: jal         0x8006FB58
    // 0x803F01F0: nop

    func_8006FB58(rdram, ctx);
        goto after_4;
    // 0x803F01F0: nop

    after_4:
    // 0x803F01F4: jal         0x80070300
    // 0x803F01F8: nop

    func_80070300(rdram, ctx);
        goto after_5;
    // 0x803F01F8: nop

    after_5:
    // 0x803F01FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F0200: lbu         $t7, -0x32A4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32A4);
    // 0x803F0204: nop

    // 0x803F0208: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803F020C: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x803F0210: beq         $at, $zero, L_803F039C
    if (ctx->r1 == 0) {
        // 0x803F0214: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_803F039C;
    }
    // 0x803F0214: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803F0218: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F021C: addu        $at, $at, $t8
    gpr jr_addend_803F0228 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803F0220: lw          $t8, -0x4FA4($at)
    ctx->r24 = ADD32(ctx->r1, -0X4FA4);
    // 0x803F0224: nop

    // 0x803F0228: jr          $t8
    // 0x803F022C: nop

    switch (jr_addend_803F0228 >> 2) {
        case 0: goto L_803F0230; break;
        case 1: goto L_803F031C; break;
        case 2: goto L_803F031C; break;
        case 3: goto L_803F039C; break;
        case 4: goto L_803F0230; break;
        case 5: goto L_803F039C; break;
        case 6: goto L_803F031C; break;
        default: switch_error(__func__, 0x803F0228, 0x803FB05C);
    }
    // 0x803F022C: nop

L_803F0230:
    // 0x803F0230: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0234: jal         0x8002AAC0
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    func_8002AAC0(rdram, ctx);
        goto after_6;
    // 0x803F0238: addiu       $a0, $a0, -0x563C
    ctx->r4 = ADD32(ctx->r4, -0X563C);
    after_6:
    // 0x803F023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0240: jal         0x803F2704
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_803F2704(rdram, ctx);
        goto after_7;
    // 0x803F0244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803F0248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F024C: jal         0x803F2704
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_803F2704(rdram, ctx);
        goto after_8;
    // 0x803F0250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x803F0254: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0258: addiu       $a1, $a1, -0x7328
    ctx->r5 = ADD32(ctx->r5, -0X7328);
    // 0x803F025C: jal         0x8004C2C8
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_9;
    // 0x803F0260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x803F0264: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F0268: addiu       $a1, $a1, -0x731C
    ctx->r5 = ADD32(ctx->r5, -0X731C);
    // 0x803F026C: jal         0x8004C2C8
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C2C8(rdram, ctx);
        goto after_10;
    // 0x803F0270: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x803F0274: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0278: addiu       $a1, $a1, -0x587C
    ctx->r5 = ADD32(ctx->r5, -0X587C);
    // 0x803F027C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0280: jal         0x803F27B0
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_11;
    // 0x803F0284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x803F0288: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F028C: addiu       $a1, $a1, -0x5870
    ctx->r5 = ADD32(ctx->r5, -0X5870);
    // 0x803F0290: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0294: jal         0x803F27B0
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803F27B0(rdram, ctx);
        goto after_12;
    // 0x803F0298: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x803F029C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02A0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02A4: jal         0x803F22EC
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_13;
    // 0x803F02A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x803F02AC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02B0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02B4: jal         0x803F22EC
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F22EC(rdram, ctx);
        goto after_14;
    // 0x803F02B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x803F02BC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02C0: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02C4: jal         0x803F24E4
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_15;
    // 0x803F02C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x803F02CC: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02D0: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F02D4: jal         0x803F24E4
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F24E4(rdram, ctx);
        goto after_16;
    // 0x803F02D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x803F02DC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02E0: jal         0x803F299C
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    func_803F299C(rdram, ctx);
        goto after_17;
    // 0x803F02E4: addiu       $a0, $a0, -0x57C0
    ctx->r4 = ADD32(ctx->r4, -0X57C0);
    after_17:
    // 0x803F02E8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F02EC: jal         0x803F299C
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    func_803F299C(rdram, ctx);
        goto after_18;
    // 0x803F02F0: addiu       $a0, $a0, -0x57AC
    ctx->r4 = ADD32(ctx->r4, -0X57AC);
    after_18:
    // 0x803F02F4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F02F8: addiu       $a1, $a1, -0x5844
    ctx->r5 = ADD32(ctx->r5, -0X5844);
    // 0x803F02FC: jal         0x803F3328
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_19;
    // 0x803F0300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x803F0304: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0308: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F030C: jal         0x803F3328
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F3328(rdram, ctx);
        goto after_20;
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x803F0314: b           L_803F039C
    // 0x803F0318: nop

        goto L_803F039C;
    // 0x803F0318: nop

L_803F031C:
    // 0x803F031C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0320: jal         0x8002AAC0
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    func_8002AAC0(rdram, ctx);
        goto after_21;
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    after_21:
    // 0x803F0328: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F032C: addiu       $a1, $a1, -0x6914
    ctx->r5 = ADD32(ctx->r5, -0X6914);
    // 0x803F0330: jal         0x8004C2C8
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_22;
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x803F0338: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F033C: addiu       $a1, $a1, -0x5864
    ctx->r5 = ADD32(ctx->r5, -0X5864);
    // 0x803F0340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0344: jal         0x803F27B0
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_23;
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x803F034C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0350: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0354: jal         0x803F22EC
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_24;
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x803F035C: jal         0x803F2464
    // 0x803F0360: nop

    func_803F2464(rdram, ctx);
        goto after_25;
    // 0x803F0360: nop

    after_25:
    // 0x803F0364: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0368: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F036C: jal         0x803F24E4
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_26;
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x803F0374: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0378: jal         0x803F299C
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    func_803F299C(rdram, ctx);
        goto after_27;
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    after_27:
    // 0x803F0380: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0384: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0388: jal         0x803F3328
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_28;
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x803F0390: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0394: jal         0x80029220
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    func_80029220(rdram, ctx);
        goto after_29;
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    after_29:
L_803F039C:
    // 0x803F039C: jal         0x8000AB98
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000AB98(rdram, ctx);
        goto after_30;
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_30:
    // 0x803F03A4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03A8: jal         0x80029220
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    func_80029220(rdram, ctx);
        goto after_31;
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    after_31:
    // 0x803F03B0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03B4: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x803F03B8: jal         0x8004A9B4
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_32;
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_32:
    // 0x803F03C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F03C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F03C8: jr          $ra
    // 0x803F03CC: nop

    return;
    // 0x803F03CC: nop

;}
RECOMP_FUNC void func_803F0304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0304: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0308: addiu       $a1, $a1, -0x582C
    ctx->r5 = ADD32(ctx->r5, -0X582C);
    // 0x803F030C: jal         0x803F3328
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_803F3328(rdram, ctx);
        goto after_0;
    // 0x803F0310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x803F0314: b           L_803F039C
    // 0x803F0318: nop

        goto L_803F039C;
    // 0x803F0318: nop

    // 0x803F031C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0320: jal         0x8002AAC0
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    func_8002AAC0(rdram, ctx);
        goto after_1;
    // 0x803F0324: addiu       $a0, $a0, -0x54EC
    ctx->r4 = ADD32(ctx->r4, -0X54EC);
    after_1:
    // 0x803F0328: lui         $a1, 0x803E
    ctx->r5 = S32(0X803E << 16);
    // 0x803F032C: addiu       $a1, $a1, -0x6914
    ctx->r5 = ADD32(ctx->r5, -0X6914);
    // 0x803F0330: jal         0x8004C2C8
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C2C8(rdram, ctx);
        goto after_2;
    // 0x803F0334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x803F0338: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F033C: addiu       $a1, $a1, -0x5864
    ctx->r5 = ADD32(ctx->r5, -0X5864);
    // 0x803F0340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F0344: jal         0x803F27B0
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F27B0(rdram, ctx);
        goto after_3;
    // 0x803F0348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803F034C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0350: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0354: jal         0x803F22EC
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F22EC(rdram, ctx);
        goto after_4;
    // 0x803F0358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x803F035C: jal         0x803F2464
    // 0x803F0360: nop

    func_803F2464(rdram, ctx);
        goto after_5;
    // 0x803F0360: nop

    after_5:
    // 0x803F0364: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0368: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F036C: jal         0x803F24E4
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F24E4(rdram, ctx);
        goto after_6;
    // 0x803F0370: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x803F0374: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F0378: jal         0x803F299C
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    func_803F299C(rdram, ctx);
        goto after_7;
    // 0x803F037C: addiu       $a0, $a0, -0x5798
    ctx->r4 = ADD32(ctx->r4, -0X5798);
    after_7:
    // 0x803F0380: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0384: addiu       $a1, $a1, -0x5814
    ctx->r5 = ADD32(ctx->r5, -0X5814);
    // 0x803F0388: jal         0x803F3328
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_803F3328(rdram, ctx);
        goto after_8;
    // 0x803F038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x803F0390: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F0394: jal         0x80029220
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    func_80029220(rdram, ctx);
        goto after_9;
    // 0x803F0398: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    after_9:
L_803F039C:
    // 0x803F039C: jal         0x8000AB98
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000AB98(rdram, ctx);
        goto after_10;
    // 0x803F03A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
    // 0x803F03A4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03A8: jal         0x80029220
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    func_80029220(rdram, ctx);
        goto after_11;
    // 0x803F03AC: addiu       $a0, $a0, 0x1464
    ctx->r4 = ADD32(ctx->r4, 0X1464);
    after_11:
    // 0x803F03B0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F03B4: addiu       $a0, $a0, 0x3D0
    ctx->r4 = ADD32(ctx->r4, 0X3D0);
    // 0x803F03B8: jal         0x8004A9B4
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_12;
    // 0x803F03BC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_12:
    // 0x803F03C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F03C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F03C8: jr          $ra
    // 0x803F03CC: nop

    return;
    // 0x803F03CC: nop

;}
RECOMP_FUNC void func_803F03D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F03D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F03D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803F03D8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803F03DC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803F03E0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F03E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F03E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F03EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F03F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F03F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F03F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F03FC: lb          $t6, 0x2C($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2C);
    // 0x803F0400: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x803F0404: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x803F0408: bne         $fp, $t6, L_803F041C
    if (ctx->r30 != ctx->r14) {
        // 0x803F040C: or          $s7, $a1, $zero
        ctx->r23 = ctx->r5 | 0;
            goto L_803F041C;
    }
    // 0x803F040C: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x803F0410: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803F0414: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x803F0418: sb          $zero, 0x44($s1)
    MEM_B(0X44, ctx->r17) = 0;
L_803F041C:
    // 0x803F041C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803F0420: lui         $s5, 0x8040
    ctx->r21 = S32(0X8040 << 16);
    // 0x803F0424: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x803F0428: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x803F042C: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x803F0430: addiu       $s5, $s5, -0x5450
    ctx->r21 = ADD32(ctx->r21, -0X5450);
    // 0x803F0434: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F0438: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x803F043C: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
L_803F0440:
    // 0x803F0440: lb          $t7, 0x44($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X44);
    // 0x803F0444: nop

    // 0x803F0448: multu       $t7, $s3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F044C: mflo        $t8
    ctx->r24 = lo;
    // 0x803F0450: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x803F0454: addu        $t0, $t9, $s4
    ctx->r8 = ADD32(ctx->r25, ctx->r20);
    // 0x803F0458: lhu         $a0, 0x6F8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X6F8);
    // 0x803F045C: jal         0x80035EE4
    // 0x803F0460: nop

    func_80035EE4(rdram, ctx);
        goto after_0;
    // 0x803F0460: nop

    after_0:
    // 0x803F0464: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803F0468: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x803F046C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x803F0470: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x803F0474: jalr        $t9
    // 0x803F0478: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803F0478: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_1:
    // 0x803F047C: lb          $t3, 0x44($s1)
    ctx->r11 = MEM_B(ctx->r17, 0X44);
    // 0x803F0480: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F0484: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x803F0488: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x803F048C: subu        $t4, $fp, $t3
    ctx->r12 = SUB32(ctx->r30, ctx->r11);
    // 0x803F0490: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x803F0494: bne         $at, $zero, L_803F0440
    if (ctx->r1 != 0) {
        // 0x803F0498: sb          $t4, 0x44($s1)
        MEM_B(0X44, ctx->r17) = ctx->r12;
            goto L_803F0440;
    }
    // 0x803F0498: sb          $t4, 0x44($s1)
    MEM_B(0X44, ctx->r17) = ctx->r12;
    // 0x803F049C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F04A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F04A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F04A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F04AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F04B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F04B4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F04B8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F04BC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803F04C0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803F04C4: jr          $ra
    // 0x803F04C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F04C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F04A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F04A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F04AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F04B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F04B4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F04B8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F04BC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803F04C0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803F04C4: jr          $ra
    // 0x803F04C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F04C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F04CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F04CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F04D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F04D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F04D8: lb          $t6, 0x54($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X54);
    // 0x803F04DC: nop

    // 0x803F04E0: sb          $t6, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r14;
    // 0x803F04E4: lb          $t7, 0x55($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X55);
    // 0x803F04E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F04EC: jal         0x803F1F30
    // 0x803F04F0: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F04F0: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    after_0:
    // 0x803F04F4: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F04F8: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F04FC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0500: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0504: beq         $t8, $at, L_803F0678
    if (ctx->r24 == ctx->r1) {
        // 0x803F0508: sb          $v0, 0x27($sp)
        MEM_B(0X27, ctx->r29) = ctx->r2;
            goto L_803F0678;
    }
    // 0x803F0508: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x803F050C: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x803F0510: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x803F0514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0518: beq         $v0, $zero, L_803F0538
    if (ctx->r2 == 0) {
        // 0x803F051C: nop
    
            goto L_803F0538;
    }
    // 0x803F051C: nop

    // 0x803F0520: beq         $v0, $at, L_803F05F8
    if (ctx->r2 == ctx->r1) {
        // 0x803F0524: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F05F8;
    }
    // 0x803F0524: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0528: beq         $v0, $at, L_803F067C
    if (ctx->r2 == ctx->r1) {
        // 0x803F052C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F052C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0530: b           L_803F067C
    // 0x803F0534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F0534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0538:
    // 0x803F0538: jal         0x80035770
    // 0x803F053C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_1;
    // 0x803F053C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F0540: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0544: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x803F0548: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F054C: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x803F0550: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
    // 0x803F0554: nop

    // 0x803F0558: beq         $v0, $zero, L_803F0570
    if (ctx->r2 == 0) {
        // 0x803F055C: nop
    
            goto L_803F0570;
    }
    // 0x803F055C: nop

    // 0x803F0560: beq         $v0, $at, L_803F067C
    if (ctx->r2 == ctx->r1) {
        // 0x803F0564: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F0564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0568: b           L_803F067C
    // 0x803F056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0570:
    // 0x803F0570: lb          $t0, 0x2C($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X2C);
    // 0x803F0574: nop

    // 0x803F0578: bne         $t0, $zero, L_803F05BC
    if (ctx->r8 != 0) {
        // 0x803F057C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_803F05BC;
    }
    // 0x803F057C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0580: lb          $t1, 0x38($a3)
    ctx->r9 = MEM_B(ctx->r7, 0X38);
    // 0x803F0584: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F0588: bne         $t1, $zero, L_803F05BC
    if (ctx->r9 != 0) {
        // 0x803F058C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_803F05BC;
    }
    // 0x803F058C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0590: sb          $t2, 0x38($a3)
    MEM_B(0X38, ctx->r7) = ctx->r10;
    // 0x803F0594: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x803F0598: lbu         $a1, 0x26($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X26);
    // 0x803F059C: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x803F05A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803F05A4: jal         0x8007039C
    // 0x803F05A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8007039C(rdram, ctx);
        goto after_2;
    // 0x803F05A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F05AC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F05B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F05B4: sb          $v0, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r2;
    // 0x803F05B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_803F05BC:
    // 0x803F05BC: sb          $t3, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r11;
    // 0x803F05C0: lb          $t4, 0x4C($a3)
    ctx->r12 = MEM_B(ctx->r7, 0X4C);
    // 0x803F05C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F05C8: bne         $t4, $at, L_803F067C
    if (ctx->r12 != ctx->r1) {
        // 0x803F05CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F05CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F05D0: lb          $t5, 0x4D($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X4D);
    // 0x803F05D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F05D8: bne         $t5, $at, L_803F067C
    if (ctx->r13 != ctx->r1) {
        // 0x803F05DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F05DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F05E0: jal         0x803F10B4
    // 0x803F05E4: nop

    func_803F10B4(rdram, ctx);
        goto after_3;
    // 0x803F05E4: nop

    after_3:
    // 0x803F05E8: jal         0x80037908
    // 0x803F05EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x803F05EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x803F05F0: b           L_803F067C
    // 0x803F05F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F05F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F05F8:
    // 0x803F05F8: lb          $t6, 0x5C($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X5C);
    // 0x803F05FC: nop

    // 0x803F0600: bne         $t6, $zero, L_803F0654
    if (ctx->r14 != 0) {
        // 0x803F0604: nop
    
            goto L_803F0654;
    }
    // 0x803F0604: nop

    // 0x803F0608: jal         0x803F1560
    // 0x803F060C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_803F1560(rdram, ctx);
        goto after_5;
    // 0x803F060C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_5:
    // 0x803F0610: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0614: bne         $v0, $zero, L_803F0644
    if (ctx->r2 != 0) {
        // 0x803F0618: nop
    
            goto L_803F0644;
    }
    // 0x803F0618: nop

    // 0x803F061C: jal         0x80035770
    // 0x803F0620: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_6;
    // 0x803F0620: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x803F0624: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0628: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x803F062C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F0630: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x803F0634: sb          $t8, 0x58($v1)
    MEM_B(0X58, ctx->r3) = ctx->r24;
    // 0x803F0638: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F063C: b           L_803F0678
    // 0x803F0640: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
        goto L_803F0678;
    // 0x803F0640: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
L_803F0644:
    // 0x803F0644: jal         0x800357AC
    // 0x803F0648: nop

    func_800357AC(rdram, ctx);
        goto after_7;
    // 0x803F0648: nop

    after_7:
    // 0x803F064C: b           L_803F067C
    // 0x803F0650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F0650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0654:
    // 0x803F0654: jal         0x80035770
    // 0x803F0658: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_8;
    // 0x803F0658: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_8:
    // 0x803F065C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0660: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x803F0664: nop

    // 0x803F0668: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x803F066C: sb          $zero, 0x58($v1)
    MEM_B(0X58, ctx->r3) = 0;
    // 0x803F0670: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F0674: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
L_803F0678:
    // 0x803F0678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F067C:
    // 0x803F067C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F0680: jr          $ra
    // 0x803F0684: nop

    return;
    // 0x803F0684: nop

;}
RECOMP_FUNC void func_803F0558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0558: beq         $v0, $zero, L_803F0570
    if (ctx->r2 == 0) {
        // 0x803F055C: nop
    
            goto L_803F0570;
    }
    // 0x803F055C: nop

    // 0x803F0560: beq         $v0, $at, L_803F067C
    if (ctx->r2 == ctx->r1) {
        // 0x803F0564: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F0564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0568: b           L_803F067C
    // 0x803F056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0570:
    // 0x803F0570: lb          $t0, 0x2C($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X2C);
    // 0x803F0574: nop

    // 0x803F0578: bne         $t0, $zero, L_803F05BC
    if (ctx->r8 != 0) {
        // 0x803F057C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_803F05BC;
    }
    // 0x803F057C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0580: lb          $t1, 0x38($a3)
    ctx->r9 = MEM_B(ctx->r7, 0X38);
    // 0x803F0584: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803F0588: bne         $t1, $zero, L_803F05BC
    if (ctx->r9 != 0) {
        // 0x803F058C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_803F05BC;
    }
    // 0x803F058C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F0590: sb          $t2, 0x38($a3)
    MEM_B(0X38, ctx->r7) = ctx->r10;
    // 0x803F0594: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x803F0598: lbu         $a1, 0x26($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X26);
    // 0x803F059C: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x803F05A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x803F05A4: jal         0x8007039C
    // 0x803F05A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8007039C(rdram, ctx);
        goto after_0;
    // 0x803F05A8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x803F05AC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F05B0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F05B4: sb          $v0, 0x45($a3)
    MEM_B(0X45, ctx->r7) = ctx->r2;
    // 0x803F05B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_803F05BC:
    // 0x803F05BC: sb          $t3, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r11;
    // 0x803F05C0: lb          $t4, 0x4C($a3)
    ctx->r12 = MEM_B(ctx->r7, 0X4C);
    // 0x803F05C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F05C8: bne         $t4, $at, L_803F067C
    if (ctx->r12 != ctx->r1) {
        // 0x803F05CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F05CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F05D0: lb          $t5, 0x4D($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X4D);
    // 0x803F05D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F05D8: bne         $t5, $at, L_803F067C
    if (ctx->r13 != ctx->r1) {
        // 0x803F05DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F067C;
    }
    // 0x803F05DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F05E0: jal         0x803F10B4
    // 0x803F05E4: nop

    func_803F10B4(rdram, ctx);
        goto after_1;
    // 0x803F05E4: nop

    after_1:
    // 0x803F05E8: jal         0x80037908
    // 0x803F05EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_2;
    // 0x803F05EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803F05F0: b           L_803F067C
    // 0x803F05F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F05F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F05F8: lb          $t6, 0x5C($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X5C);
    // 0x803F05FC: nop

    // 0x803F0600: bne         $t6, $zero, L_803F0654
    if (ctx->r14 != 0) {
        // 0x803F0604: nop
    
            goto L_803F0654;
    }
    // 0x803F0604: nop

    // 0x803F0608: jal         0x803F1560
    // 0x803F060C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_803F1560(rdram, ctx);
        goto after_3;
    // 0x803F060C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_3:
    // 0x803F0610: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0614: bne         $v0, $zero, L_803F0644
    if (ctx->r2 != 0) {
        // 0x803F0618: nop
    
            goto L_803F0644;
    }
    // 0x803F0618: nop

    // 0x803F061C: jal         0x80035770
    // 0x803F0620: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_4;
    // 0x803F0620: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_4:
    // 0x803F0624: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0628: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x803F062C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F0630: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x803F0634: sb          $t8, 0x58($v1)
    MEM_B(0X58, ctx->r3) = ctx->r24;
    // 0x803F0638: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F063C: b           L_803F0678
    // 0x803F0640: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
        goto L_803F0678;
    // 0x803F0640: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
L_803F0644:
    // 0x803F0644: jal         0x800357AC
    // 0x803F0648: nop

    func_800357AC(rdram, ctx);
        goto after_5;
    // 0x803F0648: nop

    after_5:
    // 0x803F064C: b           L_803F067C
    // 0x803F0650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F067C;
    // 0x803F0650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0654:
    // 0x803F0654: jal         0x80035770
    // 0x803F0658: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_6;
    // 0x803F0658: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_6:
    // 0x803F065C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803F0660: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x803F0664: nop

    // 0x803F0668: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x803F066C: sb          $zero, 0x58($v1)
    MEM_B(0X58, ctx->r3) = 0;
    // 0x803F0670: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F0674: sb          $zero, 0x40($v1)
    MEM_B(0X40, ctx->r3) = 0;
L_803F0678:
    // 0x803F0678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F067C:
    // 0x803F067C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F0680: jr          $ra
    // 0x803F0684: nop

    return;
    // 0x803F0684: nop

;}
RECOMP_FUNC void func_803F0688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F068C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F0690: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803F0694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0698: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F069C: lb          $a1, 0x2C($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X2C);
    // 0x803F06A0: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x803F06A4: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F06A8: bne         $a1, $zero, L_803F06C4
    if (ctx->r5 != 0) {
        // 0x803F06AC: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_803F06C4;
    }
    // 0x803F06AC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F06B0: lb          $t7, 0x38($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X38);
    // 0x803F06B4: nop

    // 0x803F06B8: subu        $a2, $t7, $v0
    ctx->r6 = SUB32(ctx->r15, ctx->r2);
    // 0x803F06BC: sll         $t8, $a2, 24
    ctx->r24 = S32(ctx->r6 << 24);
    // 0x803F06C0: sra         $a2, $t8, 24
    ctx->r6 = S32(SIGNED(ctx->r24) >> 24);
L_803F06C4:
    // 0x803F06C4: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x803F06C8: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x803F06CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F06D0: beq         $v0, $zero, L_803F06F0
    if (ctx->r2 == 0) {
        // 0x803F06D4: nop
    
            goto L_803F06F0;
    }
    // 0x803F06D4: nop

    // 0x803F06D8: beq         $v0, $at, L_803F0780
    if (ctx->r2 == ctx->r1) {
        // 0x803F06DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0780;
    }
    // 0x803F06DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F06E0: beq         $v0, $at, L_803F0788
    if (ctx->r2 == ctx->r1) {
        // 0x803F06E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0788;
    }
    // 0x803F06E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F06E8: b           L_803F0788
    // 0x803F06EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0788;
    // 0x803F06EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F06F0:
    // 0x803F06F0: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
    // 0x803F06F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F06F8: beq         $v0, $zero, L_803F0710
    if (ctx->r2 == 0) {
        // 0x803F06FC: nop
    
            goto L_803F0710;
    }
    // 0x803F06FC: nop

    // 0x803F0700: beq         $v0, $at, L_803F0788
    if (ctx->r2 == ctx->r1) {
        // 0x803F0704: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0788;
    }
    // 0x803F0704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0708: b           L_803F0788
    // 0x803F070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0788;
    // 0x803F070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0710:
    // 0x803F0710: beq         $a1, $zero, L_803F0754
    if (ctx->r5 == 0) {
        // 0x803F0714: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803F0754;
    }
    // 0x803F0714: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F071C: bne         $a1, $at, L_803F0788
    if (ctx->r5 != ctx->r1) {
        // 0x803F0720: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0788;
    }
    // 0x803F0720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0724: lb          $t0, 0x4C($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X4C);
    // 0x803F0728: nop

    // 0x803F072C: bne         $t0, $zero, L_803F074C
    if (ctx->r8 != 0) {
        // 0x803F0730: nop
    
            goto L_803F074C;
    }
    // 0x803F0730: nop

    // 0x803F0734: jal         0x803F10B4
    // 0x803F0738: nop

    func_803F10B4(rdram, ctx);
        goto after_0;
    // 0x803F0738: nop

    after_0:
    // 0x803F073C: jal         0x80037908
    // 0x803F0740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x803F0740: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x803F0744: b           L_803F0788
    // 0x803F0748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0788;
    // 0x803F0748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F074C:
    // 0x803F074C: b           L_803F0784
    // 0x803F0750: sb          $zero, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = 0;
        goto L_803F0784;
    // 0x803F0750: sb          $zero, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = 0;
L_803F0754:
    // 0x803F0754: bne         $a2, $at, L_803F0768
    if (ctx->r6 != ctx->r1) {
        // 0x803F0758: nop
    
            goto L_803F0768;
    }
    // 0x803F0758: nop

    // 0x803F075C: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    // 0x803F0760: b           L_803F0784
    // 0x803F0764: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
        goto L_803F0784;
    // 0x803F0764: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
L_803F0768:
    // 0x803F0768: jal         0x803F10B4
    // 0x803F076C: nop

    func_803F10B4(rdram, ctx);
        goto after_2;
    // 0x803F076C: nop

    after_2:
    // 0x803F0770: jal         0x80037908
    // 0x803F0774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803F0774: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x803F0778: b           L_803F0788
    // 0x803F077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0788;
    // 0x803F077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0780:
    // 0x803F0780: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
L_803F0784:
    // 0x803F0784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0788:
    // 0x803F0788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F078C: jr          $ra
    // 0x803F0790: nop

    return;
    // 0x803F0790: nop

;}
RECOMP_FUNC void func_803F0794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0794: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F0798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F079C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F07A0: jal         0x803F1F30
    // 0x803F07A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F07A4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F07A8: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x803F07AC: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F07B0: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F07B4: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F07B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F07BC: beq         $t7, $at, L_803F08B0
    if (ctx->r15 == ctx->r1) {
        // 0x803F07C0: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_803F08B0;
    }
    // 0x803F07C0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F07C4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803F07C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F07CC: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x803F07D0: lb          $v0, 0x3C($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X3C);
    // 0x803F07D4: nop

    // 0x803F07D8: beq         $v0, $zero, L_803F07F8
    if (ctx->r2 == 0) {
        // 0x803F07DC: nop
    
            goto L_803F07F8;
    }
    // 0x803F07DC: nop

    // 0x803F07E0: beq         $v0, $a0, L_803F0878
    if (ctx->r2 == ctx->r4) {
        // 0x803F07E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0878;
    }
    // 0x803F07E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F07E8: beq         $v0, $at, L_803F08B4
    if (ctx->r2 == ctx->r1) {
        // 0x803F07EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F08B4;
    }
    // 0x803F07EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F07F0: b           L_803F08B4
    // 0x803F07F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F08B4;
    // 0x803F07F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F07F8:
    // 0x803F07F8: jal         0x80035734
    // 0x803F07FC: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F07FC: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F0800: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F0804: nop

    // 0x803F0808: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F080C: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0810: jal         0x803F1F8C
    // 0x803F0814: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_803F1F8C(rdram, ctx);
        goto after_2;
    // 0x803F0814: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
    // 0x803F0818: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F081C: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F0820: bne         $a0, $v0, L_803F0854
    if (ctx->r4 != ctx->r2) {
        // 0x803F0824: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F0854;
    }
    // 0x803F0824: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0828: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803F082C: nop

    // 0x803F0830: addu        $v1, $t1, $a2
    ctx->r3 = ADD32(ctx->r9, ctx->r6);
    // 0x803F0834: lb          $t2, 0x58($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X58);
    // 0x803F0838: sb          $a0, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = ctx->r4;
    // 0x803F083C: bne         $a0, $t2, L_803F084C
    if (ctx->r4 != ctx->r10) {
        // 0x803F0840: nop
    
            goto L_803F084C;
    }
    // 0x803F0840: nop

    // 0x803F0844: b           L_803F08B0
    // 0x803F0848: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
        goto L_803F08B0;
    // 0x803F0848: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
L_803F084C:
    // 0x803F084C: b           L_803F08B0
    // 0x803F0850: sb          $a0, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = ctx->r4;
        goto L_803F08B0;
    // 0x803F0850: sb          $a0, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = ctx->r4;
L_803F0854:
    // 0x803F0854: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x803F0858: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    // 0x803F085C: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
    // 0x803F0860: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F0864: jal         0x8004BF74
    // 0x803F0868: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004BF74(rdram, ctx);
        goto after_3;
    // 0x803F0868: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x803F086C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F0870: b           L_803F08B0
    // 0x803F0874: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
        goto L_803F08B0;
    // 0x803F0874: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F0878:
    // 0x803F0878: jal         0x80035734
    // 0x803F087C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_4;
    // 0x803F087C: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_4:
    // 0x803F0880: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F0884: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803F0888: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F088C: addu        $v1, $t4, $a2
    ctx->r3 = ADD32(ctx->r12, ctx->r6);
    // 0x803F0890: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F0894: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F0898: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803F089C: jal         0x8004BF74
    // 0x803F08A0: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    func_8004BF74(rdram, ctx);
        goto after_5;
    // 0x803F08A0: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    after_5:
    // 0x803F08A4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F08A8: nop

    // 0x803F08AC: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F08B0:
    // 0x803F08B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F08B4:
    // 0x803F08B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F08B8: jr          $ra
    // 0x803F08BC: nop

    return;
    // 0x803F08BC: nop

;}
RECOMP_FUNC void func_803F08C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F08C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F08C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F08C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F08CC: jal         0x803F1F30
    // 0x803F08D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F08D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F08D4: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x803F08D8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F08DC: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F08E0: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F08E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F08E8: beq         $t7, $at, L_803F09DC
    if (ctx->r15 == ctx->r1) {
        // 0x803F08EC: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_803F09DC;
    }
    // 0x803F08EC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F08F0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803F08F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F08F8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x803F08FC: lb          $v0, 0x3C($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X3C);
    // 0x803F0900: nop

    // 0x803F0904: beq         $v0, $zero, L_803F0924
    if (ctx->r2 == 0) {
        // 0x803F0908: nop
    
            goto L_803F0924;
    }
    // 0x803F0908: nop

    // 0x803F090C: beq         $v0, $a0, L_803F09A4
    if (ctx->r2 == ctx->r4) {
        // 0x803F0910: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F09A4;
    }
    // 0x803F0910: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0914: beq         $v0, $at, L_803F09E0
    if (ctx->r2 == ctx->r1) {
        // 0x803F0918: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F09E0;
    }
    // 0x803F0918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F091C: b           L_803F09E0
    // 0x803F0920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F09E0;
    // 0x803F0920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0924:
    // 0x803F0924: jal         0x80035734
    // 0x803F0928: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F0928: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_1:
    // 0x803F092C: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F0930: nop

    // 0x803F0934: sll         $a0, $a2, 24
    ctx->r4 = S32(ctx->r6 << 24);
    // 0x803F0938: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F093C: jal         0x803F1F8C
    // 0x803F0940: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_803F1F8C(rdram, ctx);
        goto after_2;
    // 0x803F0940: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_2:
    // 0x803F0944: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0948: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F094C: bne         $a0, $v0, L_803F0978
    if (ctx->r4 != ctx->r2) {
        // 0x803F0950: lui         $a1, 0x8040
        ctx->r5 = S32(0X8040 << 16);
            goto L_803F0978;
    }
    // 0x803F0950: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0954: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803F0958: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    // 0x803F095C: addu        $v1, $t1, $a2
    ctx->r3 = ADD32(ctx->r9, ctx->r6);
    // 0x803F0960: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F0964: jal         0x8004C000
    // 0x803F0968: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004C000(rdram, ctx);
        goto after_3;
    // 0x803F0968: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x803F096C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F0970: b           L_803F09DC
    // 0x803F0974: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
        goto L_803F09DC;
    // 0x803F0974: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F0978:
    // 0x803F0978: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803F097C: nop

    // 0x803F0980: addu        $v1, $t2, $a2
    ctx->r3 = ADD32(ctx->r10, ctx->r6);
    // 0x803F0984: lb          $t3, 0x58($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X58);
    // 0x803F0988: sb          $a0, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = ctx->r4;
    // 0x803F098C: bne         $a0, $t3, L_803F099C
    if (ctx->r4 != ctx->r11) {
        // 0x803F0990: nop
    
            goto L_803F099C;
    }
    // 0x803F0990: nop

    // 0x803F0994: b           L_803F09DC
    // 0x803F0998: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
        goto L_803F09DC;
    // 0x803F0998: sb          $zero, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = 0;
L_803F099C:
    // 0x803F099C: b           L_803F09DC
    // 0x803F09A0: sb          $a0, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = ctx->r4;
        goto L_803F09DC;
    // 0x803F09A0: sb          $a0, 0x5C($v1)
    MEM_B(0X5C, ctx->r3) = ctx->r4;
L_803F09A4:
    // 0x803F09A4: jal         0x80035734
    // 0x803F09A8: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    func_80035734(rdram, ctx);
        goto after_4;
    // 0x803F09A8: sb          $a2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r6;
    after_4:
    // 0x803F09AC: lb          $a2, 0x27($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X27);
    // 0x803F09B0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803F09B4: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F09B8: addu        $v1, $t4, $a2
    ctx->r3 = ADD32(ctx->r12, ctx->r6);
    // 0x803F09BC: sb          $zero, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = 0;
    // 0x803F09C0: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F09C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803F09C8: jal         0x8004BF74
    // 0x803F09CC: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    func_8004BF74(rdram, ctx);
        goto after_5;
    // 0x803F09CC: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    after_5:
    // 0x803F09D0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F09D4: nop

    // 0x803F09D8: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F09DC:
    // 0x803F09DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F09E0:
    // 0x803F09E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F09E4: jr          $ra
    // 0x803F09E8: nop

    return;
    // 0x803F09E8: nop

;}
RECOMP_FUNC void func_803F09EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F09EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F09F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F09F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F09F8: jal         0x803F1F30
    // 0x803F09FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F09FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0A00: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803F0A04: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0A08: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0A0C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F0A10: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F0A14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0A18: beq         $t7, $at, L_803F0AB4
    if (ctx->r15 == ctx->r1) {
        // 0x803F0A1C: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_803F0AB4;
    }
    // 0x803F0A1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x803F0A20: addu        $v1, $a2, $t7
    ctx->r3 = ADD32(ctx->r6, ctx->r15);
    // 0x803F0A24: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x803F0A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0A2C: beq         $v0, $zero, L_803F0A4C
    if (ctx->r2 == 0) {
        // 0x803F0A30: nop
    
            goto L_803F0A4C;
    }
    // 0x803F0A30: nop

    // 0x803F0A34: beq         $v0, $a0, L_803F0A9C
    if (ctx->r2 == ctx->r4) {
        // 0x803F0A38: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0A9C;
    }
    // 0x803F0A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0A3C: beq         $v0, $at, L_803F0AB8
    if (ctx->r2 == ctx->r1) {
        // 0x803F0A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0AB8;
    }
    // 0x803F0A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0A44: b           L_803F0AB8
    // 0x803F0A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0AB8;
    // 0x803F0A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0A4C:
    // 0x803F0A4C: jal         0x80035734
    // 0x803F0A50: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F0A50: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    after_1:
    // 0x803F0A54: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x803F0A58: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F0A5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0A60: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x803F0A64: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
    // 0x803F0A68: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0A6C: beq         $v0, $zero, L_803F0A84
    if (ctx->r2 == 0) {
        // 0x803F0A70: addiu       $a1, $a1, -0x57FC
        ctx->r5 = ADD32(ctx->r5, -0X57FC);
            goto L_803F0A84;
    }
    // 0x803F0A70: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    // 0x803F0A74: beq         $v0, $a0, L_803F0AB8
    if (ctx->r2 == ctx->r4) {
        // 0x803F0A78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0AB8;
    }
    // 0x803F0A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0A7C: b           L_803F0AB8
    // 0x803F0A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0AB8;
    // 0x803F0A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0A84:
    // 0x803F0A84: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F0A88: jal         0x8004C118
    // 0x803F0A8C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004C118(rdram, ctx);
        goto after_2;
    // 0x803F0A8C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F0A90: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F0A94: b           L_803F0AB4
    // 0x803F0A98: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
        goto L_803F0AB4;
    // 0x803F0A98: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F0A9C:
    // 0x803F0A9C: lb          $t8, 0x5C($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X5C);
    // 0x803F0AA0: addu        $t9, $a2, $a1
    ctx->r25 = ADD32(ctx->r6, ctx->r5);
    // 0x803F0AA4: bne         $a0, $t8, L_803F0AB8
    if (ctx->r4 != ctx->r24) {
        // 0x803F0AA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0AB8;
    }
    // 0x803F0AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0AAC: jal         0x80035734
    // 0x803F0AB0: sb          $zero, 0x5C($t9)
    MEM_B(0X5C, ctx->r25) = 0;
    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F0AB0: sb          $zero, 0x5C($t9)
    MEM_B(0X5C, ctx->r25) = 0;
    after_3:
L_803F0AB4:
    // 0x803F0AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0AB8:
    // 0x803F0AB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F0ABC: jr          $ra
    // 0x803F0AC0: nop

    return;
    // 0x803F0AC0: nop

;}
RECOMP_FUNC void func_803F0AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0AC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F0AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0ACC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F0AD0: jal         0x803F1F30
    // 0x803F0AD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F0AD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0AD8: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803F0ADC: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0AE0: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0AE4: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F0AE8: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F0AEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0AF0: beq         $t7, $at, L_803F0B8C
    if (ctx->r15 == ctx->r1) {
        // 0x803F0AF4: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_803F0B8C;
    }
    // 0x803F0AF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x803F0AF8: addu        $v1, $a2, $t7
    ctx->r3 = ADD32(ctx->r6, ctx->r15);
    // 0x803F0AFC: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x803F0B00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0B04: beq         $v0, $zero, L_803F0B24
    if (ctx->r2 == 0) {
        // 0x803F0B08: nop
    
            goto L_803F0B24;
    }
    // 0x803F0B08: nop

    // 0x803F0B0C: beq         $v0, $a0, L_803F0B74
    if (ctx->r2 == ctx->r4) {
        // 0x803F0B10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0B74;
    }
    // 0x803F0B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0B14: beq         $v0, $at, L_803F0B90
    if (ctx->r2 == ctx->r1) {
        // 0x803F0B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0B90;
    }
    // 0x803F0B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0B1C: b           L_803F0B90
    // 0x803F0B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0B90;
    // 0x803F0B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0B24:
    // 0x803F0B24: jal         0x80035734
    // 0x803F0B28: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F0B28: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    after_1:
    // 0x803F0B2C: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x803F0B30: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x803F0B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803F0B38: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x803F0B3C: lb          $v0, 0x40($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X40);
    // 0x803F0B40: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F0B44: beq         $v0, $zero, L_803F0B5C
    if (ctx->r2 == 0) {
        // 0x803F0B48: addiu       $a1, $a1, -0x57FC
        ctx->r5 = ADD32(ctx->r5, -0X57FC);
            goto L_803F0B5C;
    }
    // 0x803F0B48: addiu       $a1, $a1, -0x57FC
    ctx->r5 = ADD32(ctx->r5, -0X57FC);
    // 0x803F0B4C: beq         $v0, $a0, L_803F0B90
    if (ctx->r2 == ctx->r4) {
        // 0x803F0B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0B90;
    }
    // 0x803F0B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0B54: b           L_803F0B90
    // 0x803F0B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0B90;
    // 0x803F0B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0B5C:
    // 0x803F0B5C: lb          $a0, 0x50($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X50);
    // 0x803F0B60: jal         0x8004C08C
    // 0x803F0B64: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004C08C(rdram, ctx);
        goto after_2;
    // 0x803F0B64: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x803F0B68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x803F0B6C: b           L_803F0B8C
    // 0x803F0B70: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
        goto L_803F0B8C;
    // 0x803F0B70: sb          $v0, 0x50($v1)
    MEM_B(0X50, ctx->r3) = ctx->r2;
L_803F0B74:
    // 0x803F0B74: lb          $t8, 0x5C($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X5C);
    // 0x803F0B78: addu        $t9, $a2, $a1
    ctx->r25 = ADD32(ctx->r6, ctx->r5);
    // 0x803F0B7C: bne         $t8, $zero, L_803F0B90
    if (ctx->r24 != 0) {
        // 0x803F0B80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0B90;
    }
    // 0x803F0B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0B84: jal         0x80035734
    // 0x803F0B88: sb          $a0, 0x5C($t9)
    MEM_B(0X5C, ctx->r25) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_3;
    // 0x803F0B88: sb          $a0, 0x5C($t9)
    MEM_B(0X5C, ctx->r25) = ctx->r4;
    after_3:
L_803F0B8C:
    // 0x803F0B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0B90:
    // 0x803F0B90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F0B94: jr          $ra
    // 0x803F0B98: nop

    return;
    // 0x803F0B98: nop

;}
RECOMP_FUNC void func_803F0B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0B9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F0BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0BA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F0BA8: jal         0x803F1F30
    // 0x803F0BAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F0BAC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0BB0: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0BB4: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0BB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0BBC: beq         $t6, $at, L_803F0C44
    if (ctx->r14 == ctx->r1) {
        // 0x803F0BC0: sb          $v0, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r2;
            goto L_803F0C44;
    }
    // 0x803F0BC0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x803F0BC4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803F0BC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0BCC: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x803F0BD0: lb          $v0, 0x3C($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X3C);
    // 0x803F0BD4: nop

    // 0x803F0BD8: beq         $v0, $zero, L_803F0BF8
    if (ctx->r2 == 0) {
        // 0x803F0BDC: nop
    
            goto L_803F0BF8;
    }
    // 0x803F0BDC: nop

    // 0x803F0BE0: beq         $v0, $at, L_803F0C44
    if (ctx->r2 == ctx->r1) {
        // 0x803F0BE4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0C44;
    }
    // 0x803F0BE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0BE8: beq         $v0, $at, L_803F0C48
    if (ctx->r2 == ctx->r1) {
        // 0x803F0BEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0C48;
    }
    // 0x803F0BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0BF0: b           L_803F0C48
    // 0x803F0BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0C48;
    // 0x803F0BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0BF8:
    // 0x803F0BF8: jal         0x80035734
    // 0x803F0BFC: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F0BFC: nop

    after_1:
    // 0x803F0C00: jal         0x80035734
    // 0x803F0C04: nop

    func_80035734(rdram, ctx);
        goto after_2;
    // 0x803F0C04: nop

    after_2:
    // 0x803F0C08: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x803F0C0C: lb          $t0, 0x1F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X1F);
    // 0x803F0C10: nop

    // 0x803F0C14: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x803F0C18: lb          $v0, 0x48($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X48);
    // 0x803F0C1C: nop

    // 0x803F0C20: bgtz        $v0, L_803F0C38
    if (SIGNED(ctx->r2) > 0) {
        // 0x803F0C24: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_803F0C38;
    }
    // 0x803F0C24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x803F0C28: lb          $v0, 0x39($t9)
    ctx->r2 = MEM_B(ctx->r25, 0X39);
    // 0x803F0C2C: b           L_803F0C44
    // 0x803F0C30: sb          $v0, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r2;
        goto L_803F0C44;
    // 0x803F0C30: sb          $v0, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r2;
    // 0x803F0C34: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_803F0C38:
    // 0x803F0C38: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x803F0C3C: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
    // 0x803F0C40: sb          $v0, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r2;
L_803F0C44:
    // 0x803F0C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0C48:
    // 0x803F0C48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F0C4C: jr          $ra
    // 0x803F0C50: nop

    return;
    // 0x803F0C50: nop

;}
RECOMP_FUNC void func_803F0C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F0C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0C5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F0C60: jal         0x803F1F30
    // 0x803F0C64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F0C64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0C68: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803F0C6C: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0C70: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0C74: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803F0C78: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803F0C7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0C80: beq         $t7, $at, L_803F0CF8
    if (ctx->r15 == ctx->r1) {
        // 0x803F0C84: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_803F0CF8;
    }
    // 0x803F0C84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x803F0C88: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x803F0C8C: lb          $v0, 0x3C($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X3C);
    // 0x803F0C90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0C94: beq         $v0, $zero, L_803F0CB4
    if (ctx->r2 == 0) {
        // 0x803F0C98: nop
    
            goto L_803F0CB4;
    }
    // 0x803F0C98: nop

    // 0x803F0C9C: beq         $v0, $at, L_803F0CF8
    if (ctx->r2 == ctx->r1) {
        // 0x803F0CA0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0CF8;
    }
    // 0x803F0CA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0CA4: beq         $v0, $at, L_803F0CFC
    if (ctx->r2 == ctx->r1) {
        // 0x803F0CA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0CFC;
    }
    // 0x803F0CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0CAC: b           L_803F0CFC
    // 0x803F0CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0CFC;
    // 0x803F0CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0CB4:
    // 0x803F0CB4: jal         0x80035734
    // 0x803F0CB8: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x803F0CB8: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    after_1:
    // 0x803F0CBC: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x803F0CC0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x803F0CC4: nop

    // 0x803F0CC8: addu        $v1, $a2, $a1
    ctx->r3 = ADD32(ctx->r6, ctx->r5);
    // 0x803F0CCC: lb          $v0, 0x48($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X48);
    // 0x803F0CD0: lb          $t9, 0x39($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X39);
    // 0x803F0CD4: nop

    // 0x803F0CD8: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x803F0CDC: bne         $at, $zero, L_803F0CEC
    if (ctx->r1 != 0) {
        // 0x803F0CE0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_803F0CEC;
    }
    // 0x803F0CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F0CE4: b           L_803F0CF4
    // 0x803F0CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803F0CF4;
    // 0x803F0CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F0CEC:
    // 0x803F0CEC: sll         $t0, $v0, 24
    ctx->r8 = S32(ctx->r2 << 24);
    // 0x803F0CF0: sra         $v0, $t0, 24
    ctx->r2 = S32(SIGNED(ctx->r8) >> 24);
L_803F0CF4:
    // 0x803F0CF4: sb          $v0, 0x48($v1)
    MEM_B(0X48, ctx->r3) = ctx->r2;
L_803F0CF8:
    // 0x803F0CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0CFC:
    // 0x803F0CFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F0D00: jr          $ra
    // 0x803F0D04: nop

    return;
    // 0x803F0D04: nop

;}
RECOMP_FUNC void func_803F0D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0D08: jr          $ra
    // 0x803F0D0C: nop

    return;
    // 0x803F0D0C: nop

;}
RECOMP_FUNC void func_803F0D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0D10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F0D14: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x803F0D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0D1C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F0D20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0D24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F0D28: beq         $v0, $at, L_803F0DB0
    if (ctx->r2 == ctx->r1) {
        // 0x803F0D2C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803F0DB0;
    }
    // 0x803F0D2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F0D30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0D34: beq         $v0, $at, L_803F0DB0
    if (ctx->r2 == ctx->r1) {
        // 0x803F0D38: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_803F0DB0;
    }
    // 0x803F0D38: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803F0D3C: beq         $v0, $at, L_803F0DB4
    if (ctx->r2 == ctx->r1) {
        // 0x803F0D40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0DB4;
    }
    // 0x803F0D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0D44: jal         0x803F1F30
    // 0x803F0D48: nop

    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F0D48: nop

    after_0:
    // 0x803F0D4C: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0D50: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0D54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0D58: beq         $t6, $at, L_803F0DB4
    if (ctx->r14 == ctx->r1) {
        // 0x803F0D5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0DB4;
    }
    // 0x803F0D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0D60: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803F0D64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0D68: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x803F0D6C: lb          $v1, 0x3C($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X3C);
    // 0x803F0D70: nop

    // 0x803F0D74: beq         $v1, $zero, L_803F0D94
    if (ctx->r3 == 0) {
        // 0x803F0D78: nop
    
            goto L_803F0D94;
    }
    // 0x803F0D78: nop

    // 0x803F0D7C: beq         $v1, $at, L_803F0DB0
    if (ctx->r3 == ctx->r1) {
        // 0x803F0D80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0DB0;
    }
    // 0x803F0D80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0D84: beq         $v1, $at, L_803F0DB4
    if (ctx->r3 == ctx->r1) {
        // 0x803F0D88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0DB4;
    }
    // 0x803F0D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0D8C: b           L_803F0DB4
    // 0x803F0D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0DB4;
    // 0x803F0D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0D94:
    // 0x803F0D94: lb          $t8, 0x44($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X44);
    // 0x803F0D98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803F0D9C: bne         $t8, $zero, L_803F0DAC
    if (ctx->r24 != 0) {
        // 0x803F0DA0: nop
    
            goto L_803F0DAC;
    }
    // 0x803F0DA0: nop

    // 0x803F0DA4: b           L_803F0DB0
    // 0x803F0DA8: sb          $t9, 0x44($v0)
    MEM_B(0X44, ctx->r2) = ctx->r25;
        goto L_803F0DB0;
    // 0x803F0DA8: sb          $t9, 0x44($v0)
    MEM_B(0X44, ctx->r2) = ctx->r25;
L_803F0DAC:
    // 0x803F0DAC: sb          $zero, 0x44($v0)
    MEM_B(0X44, ctx->r2) = 0;
L_803F0DB0:
    // 0x803F0DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0DB4:
    // 0x803F0DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F0DB8: jr          $ra
    // 0x803F0DBC: nop

    return;
    // 0x803F0DBC: nop

;}
RECOMP_FUNC void func_803F0DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0DC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F0DCC: jal         0x803F1F30
    // 0x803F0DD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803F1F30(rdram, ctx);
        goto after_0;
    // 0x803F0DD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F0DD4: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x803F0DD8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803F0DDC: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803F0DE0: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x803F0DE4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F0DE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0DEC: beq         $t7, $at, L_803F0E38
    if (ctx->r15 == ctx->r1) {
        // 0x803F0DF0: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_803F0E38;
    }
    // 0x803F0DF0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x803F0DF4: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x803F0DF8: lb          $v0, 0x3C($t8)
    ctx->r2 = MEM_B(ctx->r24, 0X3C);
    // 0x803F0DFC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803F0E00: beq         $v0, $zero, L_803F0E24
    if (ctx->r2 == 0) {
        // 0x803F0E04: addu        $t0, $a3, $a2
        ctx->r8 = ADD32(ctx->r7, ctx->r6);
            goto L_803F0E24;
    }
    // 0x803F0E04: addu        $t0, $a3, $a2
    ctx->r8 = ADD32(ctx->r7, ctx->r6);
    // 0x803F0E08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F0E0C: beq         $v0, $at, L_803F0E38
    if (ctx->r2 == ctx->r1) {
        // 0x803F0E10: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F0E38;
    }
    // 0x803F0E10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0E14: beq         $v0, $at, L_803F0E3C
    if (ctx->r2 == ctx->r1) {
        // 0x803F0E18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F0E3C;
    }
    // 0x803F0E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F0E1C: b           L_803F0E3C
    // 0x803F0E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F0E3C;
    // 0x803F0E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0E24:
    // 0x803F0E24: sb          $t9, 0x3C($t0)
    MEM_B(0X3C, ctx->r8) = ctx->r25;
    // 0x803F0E28: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x803F0E2C: lb          $a1, -0x326C($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X326C);
    // 0x803F0E30: jal         0x803F1FC8
    // 0x803F0E34: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    func_803F1FC8(rdram, ctx);
        goto after_1;
    // 0x803F0E34: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    after_1:
L_803F0E38:
    // 0x803F0E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F0E3C:
    // 0x803F0E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F0E40: jr          $ra
    // 0x803F0E44: nop

    return;
    // 0x803F0E44: nop

;}
RECOMP_FUNC void func_803F0E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0E48: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F0E4C: jr          $ra
    // 0x803F0E50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803F0E50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803F0E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0E54: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F0E58: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F0E5C: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F0E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F0E68: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F0E6C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803F0E70: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803F0E74: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x803F0E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F0E7C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F0E80: addiu       $a0, $zero, 0xA94
    ctx->r4 = ADD32(0, 0XA94);
    // 0x803F0E84: sb          $zero, 0x38($t6)
    MEM_B(0X38, ctx->r14) = 0;
L_803F0E88:
    // 0x803F0E88: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F0E8C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x803F0E90: nop

    // 0x803F0E94: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x803F0E98: mflo        $t7
    ctx->r15 = lo;
    // 0x803F0E9C: addu        $v1, $t0, $t7
    ctx->r3 = ADD32(ctx->r8, ctx->r15);
    // 0x803F0EA0: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0EA4: nop

    // 0x803F0EA8: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x803F0EAC: bne         $a1, $zero, L_803F0EB8
    if (ctx->r5 != 0) {
        // 0x803F0EB0: nop
    
            goto L_803F0EB8;
    }
    // 0x803F0EB0: nop

    // 0x803F0EB4: break       7
    do_break(2151616180);
L_803F0EB8:
    // 0x803F0EB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0EBC: bne         $a1, $at, L_803F0ED0
    if (ctx->r5 != ctx->r1) {
        // 0x803F0EC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F0ED0;
    }
    // 0x803F0EC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0EC4: bne         $t8, $at, L_803F0ED0
    if (ctx->r24 != ctx->r1) {
        // 0x803F0EC8: nop
    
            goto L_803F0ED0;
    }
    // 0x803F0EC8: nop

    // 0x803F0ECC: break       6
    do_break(2151616204);
L_803F0ED0:
    // 0x803F0ED0: mflo        $t9
    ctx->r25 = lo;
    // 0x803F0ED4: sb          $t9, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r25;
    // 0x803F0ED8: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0EDC: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F0EE0: div         $zero, $t3, $a1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r5)));
    // 0x803F0EE4: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x803F0EE8: bne         $a1, $zero, L_803F0EF4
    if (ctx->r5 != 0) {
        // 0x803F0EEC: nop
    
            goto L_803F0EF4;
    }
    // 0x803F0EEC: nop

    // 0x803F0EF0: break       7
    do_break(2151616240);
L_803F0EF4:
    // 0x803F0EF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0EF8: bne         $a1, $at, L_803F0F0C
    if (ctx->r5 != ctx->r1) {
        // 0x803F0EFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F0F0C;
    }
    // 0x803F0EFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0F00: bne         $t3, $at, L_803F0F0C
    if (ctx->r11 != ctx->r1) {
        // 0x803F0F04: nop
    
            goto L_803F0F0C;
    }
    // 0x803F0F04: nop

    // 0x803F0F08: break       6
    do_break(2151616264);
L_803F0F0C:
    // 0x803F0F0C: addu        $t5, $a2, $v0
    ctx->r13 = ADD32(ctx->r6, ctx->r2);
    // 0x803F0F10: mfhi        $t4
    ctx->r12 = hi;
    // 0x803F0F14: sb          $t4, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r12;
    // 0x803F0F18: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F1C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F20: addu        $t1, $t8, $v0
    ctx->r9 = ADD32(ctx->r24, ctx->r2);
    // 0x803F0F24: sb          $t7, 0x54($t1)
    MEM_B(0X54, ctx->r9) = ctx->r15;
    // 0x803F0F28: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F2C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F30: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x803F0F34: sb          $t9, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r25;
    // 0x803F0F38: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F3C: lbu         $t4, 0x55($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X55);
    // 0x803F0F40: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x803F0F44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F0F48: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x803F0F4C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803F0F50: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803F0F54: bne         $at, $zero, L_803F0E88
    if (ctx->r1 != 0) {
        // 0x803F0F58: sb          $t4, 0x58($t8)
        MEM_B(0X58, ctx->r24) = ctx->r12;
            goto L_803F0E88;
    }
    // 0x803F0F58: sb          $t4, 0x58($t8)
    MEM_B(0X58, ctx->r24) = ctx->r12;
    // 0x803F0F5C: lbu         $t1, 0xC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XC);
    // 0x803F0F60: nop

    // 0x803F0F64: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803F0F68: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x803F0F6C: beq         $at, $zero, L_803F1048
    if (ctx->r1 == 0) {
        // 0x803F0F70: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F1048;
    }
    // 0x803F0F70: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F0F74: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F0F78: addu        $at, $at, $t2
    gpr jr_addend_803F0F84 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F0F7C: lw          $t2, -0x4F88($at)
    ctx->r10 = ADD32(ctx->r1, -0X4F88);
    // 0x803F0F80: nop

    // 0x803F0F84: jr          $t2
    // 0x803F0F88: nop

    switch (jr_addend_803F0F84 >> 2) {
        case 0: goto L_803F0F8C; break;
        case 1: goto L_803F101C; break;
        case 2: goto L_803F101C; break;
        case 3: goto L_803F1048; break;
        case 4: goto L_803F0F8C; break;
        case 5: goto L_803F1048; break;
        case 6: goto L_803F101C; break;
        default: switch_error(__func__, 0x803F0F84, 0x803FB078);
    }
    // 0x803F0F88: nop

L_803F0F8C:
    // 0x803F0F8C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F0F90: lb          $t9, -0x3082($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3082);
    // 0x803F0F94: nop

    // 0x803F0F98: slti        $at, $t9, 0x25
    ctx->r1 = SIGNED(ctx->r25) < 0X25 ? 1 : 0;
    // 0x803F0F9C: bne         $at, $zero, L_803F0FB0
    if (ctx->r1 != 0) {
        // 0x803F0FA0: nop
    
            goto L_803F0FB0;
    }
    // 0x803F0FA0: nop

    // 0x803F0FA4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FA8: b           L_803F0FBC
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
        goto L_803F0FBC;
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
L_803F0FB0:
    // 0x803F0FB0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FB4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F0FB8: sb          $t5, 0x39($t6)
    MEM_B(0X39, ctx->r14) = ctx->r13;
L_803F0FBC:
    // 0x803F0FBC: jal         0x8004DF70
    // 0x803F0FC0: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803F0FC0: nop

    after_0:
    // 0x803F0FC4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803F0FC8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F0FCC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F0FD0: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x803F0FD4: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F0FD8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803F0FDC: beq         $v0, $zero, L_803F0FF8
    if (ctx->r2 == 0) {
        // 0x803F0FE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F0FF8;
    }
    // 0x803F0FE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F0FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F0FE8: beq         $v1, $v0, L_803F1010
    if (ctx->r3 == ctx->r2) {
        // 0x803F0FEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F1010;
    }
    // 0x803F0FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0FF0: bne         $v1, $at, L_803F1048
    if (ctx->r3 != ctx->r1) {
        // 0x803F0FF4: nop
    
            goto L_803F1048;
    }
    // 0x803F0FF4: nop

L_803F0FF8:
    // 0x803F0FF8: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F1000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1004: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
    // 0x803F1008: b           L_803F1048
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
        goto L_803F1048;
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
L_803F1010:
    // 0x803F1010: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1014: b           L_803F1048
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
        goto L_803F1048;
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
L_803F101C:
    // 0x803F101C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F1020: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F1024: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    // 0x803F1028: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x803F102C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F1030: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1034: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    // 0x803F1038: sb          $t3, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r11;
    // 0x803F103C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F1040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1044: sb          $v0, 0x4D($t5)
    MEM_B(0X4D, ctx->r13) = ctx->r2;
L_803F1048:
    // 0x803F1048: lbu         $t6, 0x53($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X53);
    // 0x803F104C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F1050: nop

    // 0x803F1054: sb          $t6, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r14;
    // 0x803F1058: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F105C: nop

    // 0x803F1060: lb          $t8, 0x2C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2C);
    // 0x803F1064: nop

    // 0x803F1068: bne         $t8, $zero, L_803F1098
    if (ctx->r24 != 0) {
        // 0x803F106C: nop
    
            goto L_803F1098;
    }
    // 0x803F106C: nop

    // 0x803F1070: lbu         $a0, 0xA94($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XA94);
    // 0x803F1074: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x803F1078: lbu         $a2, 0x44($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X44);
    // 0x803F107C: jal         0x8007039C
    // 0x803F1080: nop

    func_8007039C(rdram, ctx);
        goto after_1;
    // 0x803F1080: nop

    after_1:
    // 0x803F1084: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F1088: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F108C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1090: b           L_803F10A4
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
        goto L_803F10A4;
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
L_803F1098:
    // 0x803F1098: lbu         $t1, 0x54($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X54);
    // 0x803F109C: nop

    // 0x803F10A0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
L_803F10A4:
    // 0x803F10A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F10A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F10AC: jr          $ra
    // 0x803F10B0: nop

    return;
    // 0x803F10B0: nop

;}
RECOMP_FUNC void func_803F0E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F0E88:
    // 0x803F0E88: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F0E8C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x803F0E90: nop

    // 0x803F0E94: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x803F0E98: mflo        $t7
    ctx->r15 = lo;
    // 0x803F0E9C: addu        $v1, $t0, $t7
    ctx->r3 = ADD32(ctx->r8, ctx->r15);
    // 0x803F0EA0: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0EA4: nop

    // 0x803F0EA8: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x803F0EAC: bne         $a1, $zero, L_803F0EB8
    if (ctx->r5 != 0) {
        // 0x803F0EB0: nop
    
            goto L_803F0EB8;
    }
    // 0x803F0EB0: nop

    // 0x803F0EB4: break       7
    do_break(2151616180);
L_803F0EB8:
    // 0x803F0EB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0EBC: bne         $a1, $at, L_803F0ED0
    if (ctx->r5 != ctx->r1) {
        // 0x803F0EC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F0ED0;
    }
    // 0x803F0EC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0EC4: bne         $t8, $at, L_803F0ED0
    if (ctx->r24 != ctx->r1) {
        // 0x803F0EC8: nop
    
            goto L_803F0ED0;
    }
    // 0x803F0EC8: nop

    // 0x803F0ECC: break       6
    do_break(2151616204);
L_803F0ED0:
    // 0x803F0ED0: mflo        $t9
    ctx->r25 = lo;
    // 0x803F0ED4: sb          $t9, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r25;
    // 0x803F0ED8: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0EDC: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F0EE0: div         $zero, $t3, $a1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r5)));
    // 0x803F0EE4: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x803F0EE8: bne         $a1, $zero, L_803F0EF4
    if (ctx->r5 != 0) {
        // 0x803F0EEC: nop
    
            goto L_803F0EF4;
    }
    // 0x803F0EEC: nop

    // 0x803F0EF0: break       7
    do_break(2151616240);
L_803F0EF4:
    // 0x803F0EF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0EF8: bne         $a1, $at, L_803F0F0C
    if (ctx->r5 != ctx->r1) {
        // 0x803F0EFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F0F0C;
    }
    // 0x803F0EFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0F00: bne         $t3, $at, L_803F0F0C
    if (ctx->r11 != ctx->r1) {
        // 0x803F0F04: nop
    
            goto L_803F0F0C;
    }
    // 0x803F0F04: nop

    // 0x803F0F08: break       6
    do_break(2151616264);
L_803F0F0C:
    // 0x803F0F0C: addu        $t5, $a2, $v0
    ctx->r13 = ADD32(ctx->r6, ctx->r2);
    // 0x803F0F10: mfhi        $t4
    ctx->r12 = hi;
    // 0x803F0F14: sb          $t4, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r12;
    // 0x803F0F18: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F1C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F20: addu        $t1, $t8, $v0
    ctx->r9 = ADD32(ctx->r24, ctx->r2);
    // 0x803F0F24: sb          $t7, 0x54($t1)
    MEM_B(0X54, ctx->r9) = ctx->r15;
    // 0x803F0F28: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F2C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F30: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x803F0F34: sb          $t9, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r25;
    // 0x803F0F38: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F3C: lbu         $t4, 0x55($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X55);
    // 0x803F0F40: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x803F0F44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F0F48: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x803F0F4C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803F0F50: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803F0F54: bne         $at, $zero, L_803F0E88
    if (ctx->r1 != 0) {
        // 0x803F0F58: sb          $t4, 0x58($t8)
        MEM_B(0X58, ctx->r24) = ctx->r12;
            goto L_803F0E88;
    }
    // 0x803F0F58: sb          $t4, 0x58($t8)
    MEM_B(0X58, ctx->r24) = ctx->r12;
    // 0x803F0F5C: lbu         $t1, 0xC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XC);
    // 0x803F0F60: nop

    // 0x803F0F64: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803F0F68: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x803F0F6C: beq         $at, $zero, L_803F1048
    if (ctx->r1 == 0) {
        // 0x803F0F70: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F1048;
    }
    // 0x803F0F70: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F0F74: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F0F78: addu        $at, $at, $t2
    gpr jr_addend_803F0F84 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F0F7C: lw          $t2, -0x4F88($at)
    ctx->r10 = ADD32(ctx->r1, -0X4F88);
    // 0x803F0F80: nop

    // 0x803F0F84: jr          $t2
    // 0x803F0F88: nop

    switch (jr_addend_803F0F84 >> 2) {
        case 0: goto L_803F0F8C; break;
        case 1: goto L_803F101C; break;
        case 2: goto L_803F101C; break;
        case 3: goto L_803F1048; break;
        case 4: goto L_803F0F8C; break;
        case 5: goto L_803F1048; break;
        case 6: goto L_803F101C; break;
        default: switch_error(__func__, 0x803F0F84, 0x803FB078);
    }
    // 0x803F0F88: nop

L_803F0F8C:
    // 0x803F0F8C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F0F90: lb          $t9, -0x3082($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3082);
    // 0x803F0F94: nop

    // 0x803F0F98: slti        $at, $t9, 0x25
    ctx->r1 = SIGNED(ctx->r25) < 0X25 ? 1 : 0;
    // 0x803F0F9C: bne         $at, $zero, L_803F0FB0
    if (ctx->r1 != 0) {
        // 0x803F0FA0: nop
    
            goto L_803F0FB0;
    }
    // 0x803F0FA0: nop

    // 0x803F0FA4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FA8: b           L_803F0FBC
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
        goto L_803F0FBC;
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
L_803F0FB0:
    // 0x803F0FB0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FB4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F0FB8: sb          $t5, 0x39($t6)
    MEM_B(0X39, ctx->r14) = ctx->r13;
L_803F0FBC:
    // 0x803F0FBC: jal         0x8004DF70
    // 0x803F0FC0: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803F0FC0: nop

    after_0:
    // 0x803F0FC4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803F0FC8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F0FCC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F0FD0: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x803F0FD4: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F0FD8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803F0FDC: beq         $v0, $zero, L_803F0FF8
    if (ctx->r2 == 0) {
        // 0x803F0FE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F0FF8;
    }
    // 0x803F0FE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F0FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F0FE8: beq         $v1, $v0, L_803F1010
    if (ctx->r3 == ctx->r2) {
        // 0x803F0FEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F1010;
    }
    // 0x803F0FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0FF0: bne         $v1, $at, L_803F1048
    if (ctx->r3 != ctx->r1) {
        // 0x803F0FF4: nop
    
            goto L_803F1048;
    }
    // 0x803F0FF4: nop

L_803F0FF8:
    // 0x803F0FF8: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F1000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1004: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
    // 0x803F1008: b           L_803F1048
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
        goto L_803F1048;
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
L_803F1010:
    // 0x803F1010: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1014: b           L_803F1048
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
        goto L_803F1048;
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
L_803F101C:
    // 0x803F101C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F1020: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F1024: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    // 0x803F1028: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x803F102C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F1030: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1034: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    // 0x803F1038: sb          $t3, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r11;
    // 0x803F103C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F1040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1044: sb          $v0, 0x4D($t5)
    MEM_B(0X4D, ctx->r13) = ctx->r2;
L_803F1048:
    // 0x803F1048: lbu         $t6, 0x53($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X53);
    // 0x803F104C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F1050: nop

    // 0x803F1054: sb          $t6, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r14;
    // 0x803F1058: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F105C: nop

    // 0x803F1060: lb          $t8, 0x2C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2C);
    // 0x803F1064: nop

    // 0x803F1068: bne         $t8, $zero, L_803F1098
    if (ctx->r24 != 0) {
        // 0x803F106C: nop
    
            goto L_803F1098;
    }
    // 0x803F106C: nop

    // 0x803F1070: lbu         $a0, 0xA94($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XA94);
    // 0x803F1074: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x803F1078: lbu         $a2, 0x44($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X44);
    // 0x803F107C: jal         0x8007039C
    // 0x803F1080: nop

    func_8007039C(rdram, ctx);
        goto after_1;
    // 0x803F1080: nop

    after_1:
    // 0x803F1084: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F1088: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F108C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1090: b           L_803F10A4
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
        goto L_803F10A4;
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
L_803F1098:
    // 0x803F1098: lbu         $t1, 0x54($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X54);
    // 0x803F109C: nop

    // 0x803F10A0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
L_803F10A4:
    // 0x803F10A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F10A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F10AC: jr          $ra
    // 0x803F10B0: nop

    return;
    // 0x803F10B0: nop

;}
RECOMP_FUNC void func_803F0EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F0E88:
    // 0x803F0EF0: break       7
    do_break(2151616240);
    // 0x803F0EF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803F0EF8: bne         $a1, $at, L_803F0F0C
    if (ctx->r5 != ctx->r1) {
        // 0x803F0EFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803F0F0C;
    }
    // 0x803F0EFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803F0F00: bne         $t3, $at, L_803F0F0C
    if (ctx->r11 != ctx->r1) {
        // 0x803F0F04: nop
    
            goto L_803F0F0C;
    }
    // 0x803F0F04: nop

    // 0x803F0F08: break       6
    do_break(2151616264);
L_803F0F0C:
    // 0x803F0F0C: addu        $t5, $a2, $v0
    ctx->r13 = ADD32(ctx->r6, ctx->r2);
    // 0x803F0F10: mfhi        $t4
    ctx->r12 = hi;
    // 0x803F0F14: sb          $t4, 0x50($t6)
    MEM_B(0X50, ctx->r14) = ctx->r12;
    // 0x803F0F18: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F1C: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F20: addu        $t1, $t8, $v0
    ctx->r9 = ADD32(ctx->r24, ctx->r2);
    // 0x803F0F24: sb          $t7, 0x54($t1)
    MEM_B(0X54, ctx->r9) = ctx->r15;
    // 0x803F0F28: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F2C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x803F0F30: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x803F0F34: sb          $t9, 0x60($t3)
    MEM_B(0X60, ctx->r11) = ctx->r25;
    // 0x803F0F38: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0F3C: lbu         $t4, 0x55($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X55);
    // 0x803F0F40: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x803F0F44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F0F48: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x803F0F4C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x803F0F50: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803F0F54: bne         $at, $zero, L_803F0E88
    if (ctx->r1 != 0) {
            // 0x803F0F58: sb          $t4, 0x58($t8)
    MEM_B(0X58, ctx->r24) = ctx->r12;
    func_803F0E88(rdram, ctx);
    return;
    }
    // 0x803F0F58: sb          $t4, 0x58($t8)
    MEM_B(0X58, ctx->r24) = ctx->r12;
    // 0x803F0F5C: lbu         $t1, 0xC($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0XC);
    // 0x803F0F60: nop

    // 0x803F0F64: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803F0F68: sltiu       $at, $t2, 0x7
    ctx->r1 = ctx->r10 < 0X7 ? 1 : 0;
    // 0x803F0F6C: beq         $at, $zero, L_803F1048
    if (ctx->r1 == 0) {
        // 0x803F0F70: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_803F1048;
    }
    // 0x803F0F70: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803F0F74: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F0F78: addu        $at, $at, $t2
    gpr jr_addend_803F0F84 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803F0F7C: lw          $t2, -0x4F88($at)
    ctx->r10 = ADD32(ctx->r1, -0X4F88);
    // 0x803F0F80: nop

    // 0x803F0F84: jr          $t2
    // 0x803F0F88: nop

    switch (jr_addend_803F0F84 >> 2) {
        case 0: goto L_803F0F8C; break;
        case 1: goto L_803F101C; break;
        case 2: goto L_803F101C; break;
        case 3: goto L_803F1048; break;
        case 4: goto L_803F0F8C; break;
        case 5: goto L_803F1048; break;
        case 6: goto L_803F101C; break;
        default: switch_error(__func__, 0x803F0F84, 0x803FB078);
    }
    // 0x803F0F88: nop

L_803F0F8C:
    // 0x803F0F8C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803F0F90: lb          $t9, -0x3082($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3082);
    // 0x803F0F94: nop

    // 0x803F0F98: slti        $at, $t9, 0x25
    ctx->r1 = SIGNED(ctx->r25) < 0X25 ? 1 : 0;
    // 0x803F0F9C: bne         $at, $zero, L_803F0FB0
    if (ctx->r1 != 0) {
        // 0x803F0FA0: nop
    
            goto L_803F0FB0;
    }
    // 0x803F0FA0: nop

    // 0x803F0FA4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FA8: b           L_803F0FBC
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
        goto L_803F0FBC;
    // 0x803F0FAC: sb          $a1, 0x39($t3)
    MEM_B(0X39, ctx->r11) = ctx->r5;
L_803F0FB0:
    // 0x803F0FB0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FB4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803F0FB8: sb          $t5, 0x39($t6)
    MEM_B(0X39, ctx->r14) = ctx->r13;
L_803F0FBC:
    // 0x803F0FBC: jal         0x8004DF70
    // 0x803F0FC0: nop

    func_8004DF70(rdram, ctx);
        goto after_0;
    // 0x803F0FC0: nop

    after_0:
    // 0x803F0FC4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x803F0FC8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F0FCC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F0FD0: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x803F0FD4: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F0FD8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x803F0FDC: beq         $v0, $zero, L_803F0FF8
    if (ctx->r2 == 0) {
        // 0x803F0FE0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_803F0FF8;
    }
    // 0x803F0FE0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x803F0FE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F0FE8: beq         $v1, $v0, L_803F1010
    if (ctx->r3 == ctx->r2) {
        // 0x803F0FEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F1010;
    }
    // 0x803F0FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F0FF0: bne         $v1, $at, L_803F1048
    if (ctx->r3 != ctx->r1) {
        // 0x803F0FF4: nop
    
            goto L_803F1048;
    }
    // 0x803F0FF4: nop

L_803F0FF8:
    // 0x803F0FF8: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F1000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1004: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
    // 0x803F1008: b           L_803F1048
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
        goto L_803F1048;
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
L_803F1010:
    // 0x803F1010: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1014: b           L_803F1048
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
        goto L_803F1048;
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
L_803F101C:
    // 0x803F101C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F1020: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F1024: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    // 0x803F1028: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x803F102C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F1030: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1034: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    // 0x803F1038: sb          $t3, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r11;
    // 0x803F103C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F1040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1044: sb          $v0, 0x4D($t5)
    MEM_B(0X4D, ctx->r13) = ctx->r2;
L_803F1048:
    // 0x803F1048: lbu         $t6, 0x53($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X53);
    // 0x803F104C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F1050: nop

    // 0x803F1054: sb          $t6, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r14;
    // 0x803F1058: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F105C: nop

    // 0x803F1060: lb          $t8, 0x2C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2C);
    // 0x803F1064: nop

    // 0x803F1068: bne         $t8, $zero, L_803F1098
    if (ctx->r24 != 0) {
        // 0x803F106C: nop
    
            goto L_803F1098;
    }
    // 0x803F106C: nop

    // 0x803F1070: lbu         $a0, 0xA94($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XA94);
    // 0x803F1074: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x803F1078: lbu         $a2, 0x44($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X44);
    // 0x803F107C: jal         0x8007039C
    // 0x803F1080: nop

    func_8007039C(rdram, ctx);
        goto after_1;
    // 0x803F1080: nop

    after_1:
    // 0x803F1084: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F1088: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F108C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1090: b           L_803F10A4
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
        goto L_803F10A4;
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
L_803F1098:
    // 0x803F1098: lbu         $t1, 0x54($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X54);
    // 0x803F109C: nop

    // 0x803F10A0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
L_803F10A4:
    // 0x803F10A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F10A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F10AC: jr          $ra
    // 0x803F10B0: nop

    return;
    // 0x803F10B0: nop

;}
RECOMP_FUNC void func_803F0FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F0FF0: bne         $v1, $at, L_803F1048
    if (ctx->r3 != ctx->r1) {
        // 0x803F0FF4: nop
    
            goto L_803F1048;
    }
    // 0x803F0FF4: nop

    // 0x803F0FF8: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F0FFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803F1000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1004: sb          $zero, 0x2C($t4)
    MEM_B(0X2C, ctx->r12) = 0;
    // 0x803F1008: b           L_803F1048
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
        goto L_803F1048;
    // 0x803F100C: sb          $t8, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r24;
    // 0x803F1010: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1014: b           L_803F1048
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
        goto L_803F1048;
    // 0x803F1018: sb          $v0, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r2;
    // 0x803F101C: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x803F1020: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803F1024: sb          $t1, 0x39($t2)
    MEM_B(0X39, ctx->r10) = ctx->r9;
    // 0x803F1028: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x803F102C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803F1030: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x803F1034: sb          $zero, 0x2C($t9)
    MEM_B(0X2C, ctx->r25) = 0;
    // 0x803F1038: sb          $t3, -0x304E($at)
    MEM_B(-0X304E, ctx->r1) = ctx->r11;
    // 0x803F103C: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x803F1040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803F1044: sb          $v0, 0x4D($t5)
    MEM_B(0X4D, ctx->r13) = ctx->r2;
L_803F1048:
    // 0x803F1048: lbu         $t6, 0x53($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X53);
    // 0x803F104C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x803F1050: nop

    // 0x803F1054: sb          $t6, 0x44($t4)
    MEM_B(0X44, ctx->r12) = ctx->r14;
    // 0x803F1058: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F105C: nop

    // 0x803F1060: lb          $t8, 0x2C($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2C);
    // 0x803F1064: nop

    // 0x803F1068: bne         $t8, $zero, L_803F1098
    if (ctx->r24 != 0) {
        // 0x803F106C: nop
    
            goto L_803F1098;
    }
    // 0x803F106C: nop

    // 0x803F1070: lbu         $a0, 0xA94($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0XA94);
    // 0x803F1074: lbu         $a1, 0x0($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X0);
    // 0x803F1078: lbu         $a2, 0x44($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X44);
    // 0x803F107C: jal         0x8007039C
    // 0x803F1080: nop

    func_8007039C(rdram, ctx);
        goto after_0;
    // 0x803F1080: nop

    after_0:
    // 0x803F1084: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F1088: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F108C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F1090: b           L_803F10A4
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
        goto L_803F10A4;
    // 0x803F1094: sb          $v0, 0x45($t7)
    MEM_B(0X45, ctx->r15) = ctx->r2;
L_803F1098:
    // 0x803F1098: lbu         $t1, 0x54($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X54);
    // 0x803F109C: nop

    // 0x803F10A0: sb          $t1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r9;
L_803F10A4:
    // 0x803F10A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F10A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F10AC: jr          $ra
    // 0x803F10B0: nop

    return;
    // 0x803F10B0: nop

;}
RECOMP_FUNC void func_803F10B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F10B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803F10B8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F10BC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x803F10C0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F10C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F10C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F10CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F10D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F10D4: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x803F10D8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803F10DC: lw          $a1, 0x1CF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1CF0);
    // 0x803F10E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803F10E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F10E8: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x803F10EC: addiu       $s5, $s5, -0x2CF0
    ctx->r21 = ADD32(ctx->r21, -0X2CF0);
    // 0x803F10F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F10F4: addiu       $s2, $sp, 0x44
    ctx->r18 = ADD32(ctx->r29, 0X44);
    // 0x803F10F8: addiu       $s3, $sp, 0x40
    ctx->r19 = ADD32(ctx->r29, 0X40);
    // 0x803F10FC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x803F1100: addiu       $s6, $zero, 0xA94
    ctx->r22 = ADD32(0, 0XA94);
    // 0x803F1104: addiu       $a2, $zero, -0x201
    ctx->r6 = ADD32(0, -0X201);
L_803F1108:
    // 0x803F1108: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F110C: addu        $t8, $s2, $s0
    ctx->r24 = ADD32(ctx->r18, ctx->r16);
    // 0x803F1110: addu        $v0, $a1, $s0
    ctx->r2 = ADD32(ctx->r5, ctx->r16);
    // 0x803F1114: addu        $v1, $s3, $s0
    ctx->r3 = ADD32(ctx->r19, ctx->r16);
    // 0x803F1118: addu        $a0, $a3, $s0
    ctx->r4 = ADD32(ctx->r7, ctx->r16);
    // 0x803F111C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1120: mflo        $t6
    ctx->r14 = lo;
    // 0x803F1124: addu        $s1, $s5, $t6
    ctx->r17 = ADD32(ctx->r21, ctx->r14);
    // 0x803F1128: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x803F112C: nop

    // 0x803F1130: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x803F1134: lb          $t0, 0x54($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X54);
    // 0x803F1138: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803F113C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x803F1140: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
    // 0x803F1144: lb          $t1, 0x58($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X58);
    // 0x803F1148: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803F114C: sb          $t1, 0x55($a0)
    MEM_B(0X55, ctx->r4) = ctx->r9;
    // 0x803F1150: lb          $t2, 0x44($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X44);
    // 0x803F1154: nop

    // 0x803F1158: sb          $t2, 0x53($a0)
    MEM_B(0X53, ctx->r4) = ctx->r10;
    // 0x803F115C: lb          $t3, 0x44($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X44);
    // 0x803F1160: nop

    // 0x803F1164: bne         $s4, $t3, L_803F1180
    if (ctx->r20 != ctx->r11) {
        // 0x803F1168: nop
    
            goto L_803F1180;
    }
    // 0x803F1168: nop

    // 0x803F116C: lhu         $t4, 0x8($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X8);
    // 0x803F1170: nop

    // 0x803F1174: ori         $t5, $t4, 0x200
    ctx->r13 = ctx->r12 | 0X200;
    // 0x803F1178: b           L_803F1190
    // 0x803F117C: sh          $t5, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r13;
        goto L_803F1190;
    // 0x803F117C: sh          $t5, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r13;
L_803F1180:
    // 0x803F1180: lhu         $t6, 0x8($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X8);
    // 0x803F1184: nop

    // 0x803F1188: and         $t7, $t6, $a2
    ctx->r15 = ctx->r14 & ctx->r6;
    // 0x803F118C: sh          $t7, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r15;
L_803F1190:
    // 0x803F1190: bne         $at, $zero, L_803F1108
    if (ctx->r1 != 0) {
        // 0x803F1194: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_803F1108;
    }
    // 0x803F1194: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803F1198: lbu         $t9, 0xC($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XC);
    // 0x803F119C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803F11A0: bne         $t9, $at, L_803F11BC
    if (ctx->r25 != ctx->r1) {
        // 0x803F11A4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_803F11BC;
    }
    // 0x803F11A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F11A8: lhu         $t1, 0xA9C($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0XA9C);
    // 0x803F11AC: lbu         $t0, 0x0($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X0);
    // 0x803F11B0: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x803F11B4: sh          $t2, 0xA9C($s5)
    MEM_H(0XA9C, ctx->r21) = ctx->r10;
    // 0x803F11B8: sb          $t0, 0xA94($s5)
    MEM_B(0XA94, ctx->r21) = ctx->r8;
L_803F11BC:
    // 0x803F11BC: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803F11C0: addiu       $s1, $s1, -0x1F14
    ctx->r17 = ADD32(ctx->r17, -0X1F14);
L_803F11C4:
    // 0x803F11C4: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x803F11C8: addu        $t4, $s2, $s0
    ctx->r12 = ADD32(ctx->r18, ctx->r16);
    // 0x803F11CC: bne         $s4, $t3, L_803F11E8
    if (ctx->r20 != ctx->r11) {
        // 0x803F11D0: addu        $t6, $s3, $s0
        ctx->r14 = ADD32(ctx->r19, ctx->r16);
            goto L_803F11E8;
    }
    // 0x803F11D0: addu        $t6, $s3, $s0
    ctx->r14 = ADD32(ctx->r19, ctx->r16);
    // 0x803F11D4: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x803F11D8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x803F11DC: nop

    // 0x803F11E0: beq         $t5, $t7, L_803F11F8
    if (ctx->r13 == ctx->r15) {
        // 0x803F11E4: nop
    
            goto L_803F11F8;
    }
    // 0x803F11E4: nop

L_803F11E8:
    // 0x803F11E8: jal         0x8005CED4
    // 0x803F11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CED4(rdram, ctx);
        goto after_0;
    // 0x803F11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F11F0: jal         0x8005CC40
    // 0x803F11F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CC40(rdram, ctx);
        goto after_1;
    // 0x803F11F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_803F11F8:
    // 0x803F11F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F11FC: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803F1200: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803F1204: bne         $at, $zero, L_803F11C4
    if (ctx->r1 != 0) {
        // 0x803F1208: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_803F11C4;
    }
    // 0x803F1208: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803F120C: jal         0x80036278
    // 0x803F1210: nop

    func_80036278(rdram, ctx);
        goto after_2;
    // 0x803F1210: nop

    after_2:
    // 0x803F1214: jal         0x8005B330
    // 0x803F1218: nop

    func_8005B330(rdram, ctx);
        goto after_3;
    // 0x803F1218: nop

    after_3:
    // 0x803F121C: jal         0x8006DFEC
    // 0x803F1220: nop

    func_8006DFEC(rdram, ctx);
        goto after_4;
    // 0x803F1220: nop

    after_4:
    // 0x803F1224: jal         0x800385C0
    // 0x803F1228: nop

    func_800385C0(rdram, ctx);
        goto after_5;
    // 0x803F1228: nop

    after_5:
    // 0x803F122C: jal         0x80038C10
    // 0x803F1230: nop

    func_80038C10(rdram, ctx);
        goto after_6;
    // 0x803F1230: nop

    after_6:
    // 0x803F1234: jal         0x8005B4C0
    // 0x803F1238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_7;
    // 0x803F1238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x803F123C: jal         0x8005B4C0
    // 0x803F1240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_8;
    // 0x803F1240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x803F1244: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x803F1248: addiu       $s2, $s2, 0x1CF0
    ctx->r18 = ADD32(ctx->r18, 0X1CF0);
    // 0x803F124C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1250:
    // 0x803F1250: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1254: mflo        $t9
    ctx->r25 = lo;
    // 0x803F1258: addu        $s1, $s5, $t9
    ctx->r17 = ADD32(ctx->r21, ctx->r25);
    // 0x803F125C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x803F1260: jal         0x8006FF70
    // 0x803F1264: nop

    func_8006FF70(rdram, ctx);
        goto after_9;
    // 0x803F1264: nop

    after_9:
    // 0x803F1268: bne         $v0, $zero, L_803F1294
    if (ctx->r2 != 0) {
        // 0x803F126C: nop
    
            goto L_803F1294;
    }
    // 0x803F126C: nop

    // 0x803F1270: jal         0x80038404
    // 0x803F1274: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80038404(rdram, ctx);
        goto after_10;
    // 0x803F1274: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_10:
    // 0x803F1278: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F127C: jal         0x80039B28
    // 0x803F1280: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039B28(rdram, ctx);
        goto after_11;
    // 0x803F1280: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_11:
    // 0x803F1284: jal         0x803F1354
    // 0x803F1288: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_12;
    // 0x803F1288: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_12:
    // 0x803F128C: b           L_803F12FC
    // 0x803F1290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803F12FC;
    // 0x803F1290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F1294:
    // 0x803F1294: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x803F1298: nop

    // 0x803F129C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x803F12A0: lb          $t2, 0x58($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X58);
    // 0x803F12A4: nop

    // 0x803F12A8: bne         $s4, $t2, L_803F12D8
    if (ctx->r20 != ctx->r10) {
        // 0x803F12AC: nop
    
            goto L_803F12D8;
    }
    // 0x803F12AC: nop

    // 0x803F12B0: jal         0x803F13F0
    // 0x803F12B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F13F0(rdram, ctx);
        goto after_13;
    // 0x803F12B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_13:
    // 0x803F12B8: jal         0x80038404
    // 0x803F12BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80038404(rdram, ctx);
        goto after_14;
    // 0x803F12BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_14:
    // 0x803F12C0: jal         0x803F1354
    // 0x803F12C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_15;
    // 0x803F12C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_15:
    // 0x803F12C8: jal         0x80039A14
    // 0x803F12CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039A14(rdram, ctx);
        goto after_16;
    // 0x803F12CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_16:
    // 0x803F12D0: b           L_803F12FC
    // 0x803F12D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803F12FC;
    // 0x803F12D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F12D8:
    // 0x803F12D8: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F12DC: jal         0x8005B2C8
    // 0x803F12E0: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    func_8005B2C8(rdram, ctx);
        goto after_17;
    // 0x803F12E0: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    after_17:
    // 0x803F12E4: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F12E8: jal         0x80039B28
    // 0x803F12EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039B28(rdram, ctx);
        goto after_18;
    // 0x803F12EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_18:
    // 0x803F12F0: jal         0x803F1354
    // 0x803F12F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_19;
    // 0x803F12F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_19:
    // 0x803F12F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F12FC:
    // 0x803F12FC: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x803F1300: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x803F1304: bne         $at, $zero, L_803F1250
    if (ctx->r1 != 0) {
        // 0x803F1308: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_803F1250;
    }
    // 0x803F1308: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803F130C: jal         0x8006F4C0
    // 0x803F1310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_20;
    // 0x803F1310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x803F1314: jal         0x8006F4C0
    // 0x803F1318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_21;
    // 0x803F1318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x803F131C: jal         0x803F1EB4
    // 0x803F1320: nop

    func_803F1EB4(rdram, ctx);
        goto after_22;
    // 0x803F1320: nop

    after_22:
    // 0x803F1324: jal         0x803F13C0
    // 0x803F1328: nop

    func_803F13C0(rdram, ctx);
        goto after_23;
    // 0x803F1328: nop

    after_23:
    // 0x803F132C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F1330: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1334: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F133C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1340: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1344: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1348: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F134C: jr          $ra
    // 0x803F1350: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F1350: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_803F11B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F11B4: sh          $t2, 0xA9C($s5)
    MEM_H(0XA9C, ctx->r21) = ctx->r10;
    // 0x803F11B8: sb          $t0, 0xA94($s5)
    MEM_B(0XA94, ctx->r21) = ctx->r8;
    // 0x803F11BC: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803F11C0: addiu       $s1, $s1, -0x1F14
    ctx->r17 = ADD32(ctx->r17, -0X1F14);
L_803F11C4:
    // 0x803F11C4: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x803F11C8: addu        $t4, $s2, $s0
    ctx->r12 = ADD32(ctx->r18, ctx->r16);
    // 0x803F11CC: bne         $s4, $t3, L_803F11E8
    if (ctx->r20 != ctx->r11) {
        // 0x803F11D0: addu        $t6, $s3, $s0
        ctx->r14 = ADD32(ctx->r19, ctx->r16);
            goto L_803F11E8;
    }
    // 0x803F11D0: addu        $t6, $s3, $s0
    ctx->r14 = ADD32(ctx->r19, ctx->r16);
    // 0x803F11D4: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x803F11D8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x803F11DC: nop

    // 0x803F11E0: beq         $t5, $t7, L_803F11F8
    if (ctx->r13 == ctx->r15) {
        // 0x803F11E4: nop
    
            goto L_803F11F8;
    }
    // 0x803F11E4: nop

L_803F11E8:
    // 0x803F11E8: jal         0x8005CED4
    // 0x803F11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CED4(rdram, ctx);
        goto after_0;
    // 0x803F11EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x803F11F0: jal         0x8005CC40
    // 0x803F11F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005CC40(rdram, ctx);
        goto after_1;
    // 0x803F11F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_803F11F8:
    // 0x803F11F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F11FC: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803F1200: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803F1204: bne         $at, $zero, L_803F11C4
    if (ctx->r1 != 0) {
        // 0x803F1208: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_803F11C4;
    }
    // 0x803F1208: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803F120C: jal         0x80036278
    // 0x803F1210: nop

    func_80036278(rdram, ctx);
        goto after_2;
    // 0x803F1210: nop

    after_2:
    // 0x803F1214: jal         0x8005B330
    // 0x803F1218: nop

    func_8005B330(rdram, ctx);
        goto after_3;
    // 0x803F1218: nop

    after_3:
    // 0x803F121C: jal         0x8006DFEC
    // 0x803F1220: nop

    func_8006DFEC(rdram, ctx);
        goto after_4;
    // 0x803F1220: nop

    after_4:
    // 0x803F1224: jal         0x800385C0
    // 0x803F1228: nop

    func_800385C0(rdram, ctx);
        goto after_5;
    // 0x803F1228: nop

    after_5:
    // 0x803F122C: jal         0x80038C10
    // 0x803F1230: nop

    func_80038C10(rdram, ctx);
        goto after_6;
    // 0x803F1230: nop

    after_6:
    // 0x803F1234: jal         0x8005B4C0
    // 0x803F1238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005B4C0(rdram, ctx);
        goto after_7;
    // 0x803F1238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x803F123C: jal         0x8005B4C0
    // 0x803F1240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005B4C0(rdram, ctx);
        goto after_8;
    // 0x803F1240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x803F1244: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x803F1248: addiu       $s2, $s2, 0x1CF0
    ctx->r18 = ADD32(ctx->r18, 0X1CF0);
    // 0x803F124C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1250:
    // 0x803F1250: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1254: mflo        $t9
    ctx->r25 = lo;
    // 0x803F1258: addu        $s1, $s5, $t9
    ctx->r17 = ADD32(ctx->r21, ctx->r25);
    // 0x803F125C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x803F1260: jal         0x8006FF70
    // 0x803F1264: nop

    func_8006FF70(rdram, ctx);
        goto after_9;
    // 0x803F1264: nop

    after_9:
    // 0x803F1268: bne         $v0, $zero, L_803F1294
    if (ctx->r2 != 0) {
        // 0x803F126C: nop
    
            goto L_803F1294;
    }
    // 0x803F126C: nop

    // 0x803F1270: jal         0x80038404
    // 0x803F1274: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80038404(rdram, ctx);
        goto after_10;
    // 0x803F1274: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_10:
    // 0x803F1278: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F127C: jal         0x80039B28
    // 0x803F1280: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039B28(rdram, ctx);
        goto after_11;
    // 0x803F1280: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_11:
    // 0x803F1284: jal         0x803F1354
    // 0x803F1288: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_12;
    // 0x803F1288: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_12:
    // 0x803F128C: b           L_803F12FC
    // 0x803F1290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803F12FC;
    // 0x803F1290: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F1294:
    // 0x803F1294: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x803F1298: nop

    // 0x803F129C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x803F12A0: lb          $t2, 0x58($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X58);
    // 0x803F12A4: nop

    // 0x803F12A8: bne         $s4, $t2, L_803F12D8
    if (ctx->r20 != ctx->r10) {
        // 0x803F12AC: nop
    
            goto L_803F12D8;
    }
    // 0x803F12AC: nop

    // 0x803F12B0: jal         0x803F13F0
    // 0x803F12B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F13F0(rdram, ctx);
        goto after_13;
    // 0x803F12B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_13:
    // 0x803F12B8: jal         0x80038404
    // 0x803F12BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80038404(rdram, ctx);
        goto after_14;
    // 0x803F12BC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_14:
    // 0x803F12C0: jal         0x803F1354
    // 0x803F12C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_15;
    // 0x803F12C4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_15:
    // 0x803F12C8: jal         0x80039A14
    // 0x803F12CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039A14(rdram, ctx);
        goto after_16;
    // 0x803F12CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_16:
    // 0x803F12D0: b           L_803F12FC
    // 0x803F12D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_803F12FC;
    // 0x803F12D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F12D8:
    // 0x803F12D8: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F12DC: jal         0x8005B2C8
    // 0x803F12E0: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    func_8005B2C8(rdram, ctx);
        goto after_17;
    // 0x803F12E0: addiu       $a0, $s1, 0x2E8
    ctx->r4 = ADD32(ctx->r17, 0X2E8);
    after_17:
    // 0x803F12E4: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x803F12E8: jal         0x80039B28
    // 0x803F12EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80039B28(rdram, ctx);
        goto after_18;
    // 0x803F12EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_18:
    // 0x803F12F0: jal         0x803F1354
    // 0x803F12F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F1354(rdram, ctx);
        goto after_19;
    // 0x803F12F4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_19:
    // 0x803F12F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_803F12FC:
    // 0x803F12FC: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x803F1300: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x803F1304: bne         $at, $zero, L_803F1250
    if (ctx->r1 != 0) {
        // 0x803F1308: or          $s0, $t3, $zero
        ctx->r16 = ctx->r11 | 0;
            goto L_803F1250;
    }
    // 0x803F1308: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803F130C: jal         0x8006F4C0
    // 0x803F1310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_20;
    // 0x803F1310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x803F1314: jal         0x8006F4C0
    // 0x803F1318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_21;
    // 0x803F1318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x803F131C: jal         0x803F1EB4
    // 0x803F1320: nop

    func_803F1EB4(rdram, ctx);
        goto after_22;
    // 0x803F1320: nop

    after_22:
    // 0x803F1324: jal         0x803F13C0
    // 0x803F1328: nop

    func_803F13C0(rdram, ctx);
        goto after_23;
    // 0x803F1328: nop

    after_23:
    // 0x803F132C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803F1330: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1334: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F133C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1340: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1344: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1348: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F134C: jr          $ra
    // 0x803F1350: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803F1350: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_803F1354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F1358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F135C: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F1360: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803F1364: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F1368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F136C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F1370: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F1374: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F1378: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F137C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F1380: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F1384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1388: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803F138C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x803F1390: jal         0x8005B364
    // 0x803F1394: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_8005B364(rdram, ctx);
        goto after_0;
    // 0x803F1394: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x803F1398: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F139C: jal         0x80039910
    // 0x803F13A0: nop

    func_80039910(rdram, ctx);
        goto after_1;
    // 0x803F13A0: nop

    after_1:
    // 0x803F13A4: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F13A8: jal         0x800396B8
    // 0x803F13AC: nop

    func_800396B8(rdram, ctx);
        goto after_2;
    // 0x803F13AC: nop

    after_2:
    // 0x803F13B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F13B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F13B8: jr          $ra
    // 0x803F13BC: nop

    return;
    // 0x803F13BC: nop

;}
RECOMP_FUNC void func_803F13C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F13C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F13C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F13C8: jal         0x803F15DC
    // 0x803F13CC: nop

    func_803F15DC(rdram, ctx);
        goto after_0;
    // 0x803F13CC: nop

    after_0:
    // 0x803F13D0: jal         0x803F1954
    // 0x803F13D4: nop

    func_803F1954(rdram, ctx);
        goto after_1;
    // 0x803F13D4: nop

    after_1:
    // 0x803F13D8: jal         0x803F16D8
    // 0x803F13DC: nop

    func_803F16D8(rdram, ctx);
        goto after_2;
    // 0x803F13DC: nop

    after_2:
    // 0x803F13E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F13E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F13E8: jr          $ra
    // 0x803F13EC: nop

    return;
    // 0x803F13EC: nop

;}
RECOMP_FUNC void func_803F13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F13F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F13F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F13F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F13FC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F1400: jal         0x800353B0
    // 0x803F1404: nop

    func_800353B0(rdram, ctx);
        goto after_0;
    // 0x803F1404: nop

    after_0:
    // 0x803F1408: bne         $v0, $zero, L_803F143C
    if (ctx->r2 != 0) {
        // 0x803F140C: nop
    
            goto L_803F143C;
    }
    // 0x803F140C: nop

    // 0x803F1410: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F1414: jal         0x8003294C
    // 0x803F1418: nop

    func_8003294C(rdram, ctx);
        goto after_1;
    // 0x803F1418: nop

    after_1:
    // 0x803F141C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F1420: jal         0x80032EC0
    // 0x803F1424: nop

    func_80032EC0(rdram, ctx);
        goto after_2;
    // 0x803F1424: nop

    after_2:
    // 0x803F1428: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F142C: jal         0x80032310
    // 0x803F1430: nop

    func_80032310(rdram, ctx);
        goto after_3;
    // 0x803F1430: nop

    after_3:
    // 0x803F1434: b           L_803F1458
    // 0x803F1438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F1458;
    // 0x803F1438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F143C:
    // 0x803F143C: jal         0x803F15DC
    // 0x803F1440: nop

    func_803F15DC(rdram, ctx);
        goto after_4;
    // 0x803F1440: nop

    after_4:
    // 0x803F1444: jal         0x803F1954
    // 0x803F1448: nop

    func_803F1954(rdram, ctx);
        goto after_5;
    // 0x803F1448: nop

    after_5:
    // 0x803F144C: jal         0x803F16D8
    // 0x803F1450: nop

    func_803F16D8(rdram, ctx);
        goto after_6;
    // 0x803F1450: nop

    after_6:
    // 0x803F1454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F1458:
    // 0x803F1458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F145C: jr          $ra
    // 0x803F1460: nop

    return;
    // 0x803F1460: nop

;}
RECOMP_FUNC void func_803F1464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1464: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F1468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F146C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F1470: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F1474: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F1478: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F147C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F1480: lui         $v0, 0x8040
    ctx->r2 = S32(0X8040 << 16);
    // 0x803F1484: lw          $s3, 0x8($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X8);
    // 0x803F1488: addiu       $v0, $v0, -0x5380
    ctx->r2 = ADD32(ctx->r2, -0X5380);
    // 0x803F148C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803F1490:
    // 0x803F1490: addu        $s0, $s3, $s1
    ctx->r16 = ADD32(ctx->r19, ctx->r17);
    // 0x803F1494: lb          $t6, 0x48($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X48);
    // 0x803F1498: lb          $t9, 0x50($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X50);
    // 0x803F149C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F14A0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F14A4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F14A8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x803F14AC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F14B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F14B4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x803F14B8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x803F14BC: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x803F14C0: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x803F14C4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x803F14C8: bne         $at, $zero, L_803F1490
    if (ctx->r1 != 0) {
        // 0x803F14CC: sb          $t2, 0x54($s0)
        MEM_B(0X54, ctx->r16) = ctx->r10;
            goto L_803F1490;
    }
    // 0x803F14CC: sb          $t2, 0x54($s0)
    MEM_B(0X54, ctx->r16) = ctx->r10;
    // 0x803F14D0: lb          $t4, 0x2C($s3)
    ctx->r12 = MEM_B(ctx->r19, 0X2C);
    // 0x803F14D4: lb          $v1, 0x54($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X54);
    // 0x803F14D8: lb          $v0, 0x55($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X55);
    // 0x803F14DC: bne         $t4, $zero, L_803F1508
    if (ctx->r12 != 0) {
        // 0x803F14E0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F1508;
    }
    // 0x803F14E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F14E4: lb          $t5, 0x61($s3)
    ctx->r13 = MEM_B(ctx->r19, 0X61);
    // 0x803F14E8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x803F14EC: beq         $v0, $t5, L_803F1508
    if (ctx->r2 == ctx->r13) {
        // 0x803F14F0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_803F1508;
    }
    // 0x803F14F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F14F4: lbu         $a2, 0x44($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X44);
    // 0x803F14F8: jal         0x8007039C
    // 0x803F14FC: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    func_8007039C(rdram, ctx);
        goto after_0;
    // 0x803F14FC: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    after_0:
    // 0x803F1500: sb          $v0, 0x45($s3)
    MEM_B(0X45, ctx->r19) = ctx->r2;
    // 0x803F1504: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_803F1508:
    // 0x803F1508: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_803F150C:
    // 0x803F150C: addu        $s0, $s3, $s1
    ctx->r16 = ADD32(ctx->r19, ctx->r17);
    // 0x803F1510: lb          $a1, 0x54($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X54);
    // 0x803F1514: jal         0x8000C278
    // 0x803F1518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000C278(rdram, ctx);
        goto after_1;
    // 0x803F1518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x803F151C: lb          $a1, 0x44($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X44);
    // 0x803F1520: jal         0x8000C2A4
    // 0x803F1524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000C2A4(rdram, ctx);
        goto after_2;
    // 0x803F1524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x803F1528: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F152C: lb          $t6, 0x54($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X54);
    // 0x803F1530: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1534: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x803F1538: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F153C: bne         $at, $zero, L_803F150C
    if (ctx->r1 != 0) {
        // 0x803F1540: sb          $t6, 0x60($s0)
        MEM_B(0X60, ctx->r16) = ctx->r14;
            goto L_803F150C;
    }
    // 0x803F1540: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
    // 0x803F1544: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F1548: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F154C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F1550: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1554: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F1558: jr          $ra
    // 0x803F155C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F155C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F1508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1508: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_803F150C:
    // 0x803F150C: addu        $s0, $s3, $s1
    ctx->r16 = ADD32(ctx->r19, ctx->r17);
    // 0x803F1510: lb          $a1, 0x54($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X54);
    // 0x803F1514: jal         0x8000C278
    // 0x803F1518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000C278(rdram, ctx);
        goto after_0;
    // 0x803F1518: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x803F151C: lb          $a1, 0x44($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X44);
    // 0x803F1520: jal         0x8000C2A4
    // 0x803F1524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000C2A4(rdram, ctx);
        goto after_1;
    // 0x803F1524: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x803F1528: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F152C: lb          $t6, 0x54($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X54);
    // 0x803F1530: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1534: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x803F1538: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F153C: bne         $at, $zero, L_803F150C
    if (ctx->r1 != 0) {
        // 0x803F1540: sb          $t6, 0x60($s0)
        MEM_B(0X60, ctx->r16) = ctx->r14;
            goto L_803F150C;
    }
    // 0x803F1540: sb          $t6, 0x60($s0)
    MEM_B(0X60, ctx->r16) = ctx->r14;
    // 0x803F1544: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F1548: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F154C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F1550: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1554: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F1558: jr          $ra
    // 0x803F155C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F155C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F1560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1560: jr          $ra
    // 0x803F1564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803F1564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803F1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F156C:
    // 0x803F156C: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F1570: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x803F1574: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x803F1578: addiu       $t7, $t7, -0x3B20
    ctx->r15 = ADD32(ctx->r15, -0X3B20);
    // 0x803F157C: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x803F1580: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x803F1584: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x803F1588: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F158C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F1590:
    // 0x803F1590: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x803F1594: addu        $t1, $a2, $a1
    ctx->r9 = ADD32(ctx->r6, ctx->r5);
    // 0x803F1598: lbu         $at, 0x0($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X0);
    // 0x803F159C: addu        $t0, $a0, $a1
    ctx->r8 = ADD32(ctx->r4, ctx->r5);
    // 0x803F15A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F15A4: sb          $at, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r1;
    // 0x803F15A8: lbu         $t4, 0x1($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1);
    // 0x803F15AC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x803F15B0: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F15B4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F15B8: bne         $at, $zero, L_803F1590
    if (ctx->r1 != 0) {
        // 0x803F15BC: sb          $t4, 0x1($t0)
        MEM_B(0X1, ctx->r8) = ctx->r12;
            goto L_803F1590;
    }
    // 0x803F15BC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x803F15C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F15C4: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x803F15C8: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x803F15CC: bne         $at, $zero, L_803F156C
    if (ctx->r1 != 0) {
        // 0x803F15D0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F156C;
    }
    // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F15D4: jr          $ra
    // 0x803F15D8: nop

    return;
    // 0x803F15D8: nop

;}
RECOMP_FUNC void func_803F156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F156C:
    // 0x803F156C: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F1570: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x803F1574: addiu       $t9, $t9, 0x37B0
    ctx->r25 = ADD32(ctx->r25, 0X37B0);
    // 0x803F1578: addiu       $t7, $t7, -0x3B20
    ctx->r15 = ADD32(ctx->r15, -0X3B20);
    // 0x803F157C: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x803F1580: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x803F1584: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x803F1588: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F158C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F1590:
    // 0x803F1590: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x803F1594: addu        $t1, $a2, $a1
    ctx->r9 = ADD32(ctx->r6, ctx->r5);
    // 0x803F1598: lbu         $at, 0x0($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X0);
    // 0x803F159C: addu        $t0, $a0, $a1
    ctx->r8 = ADD32(ctx->r4, ctx->r5);
    // 0x803F15A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F15A4: sb          $at, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r1;
    // 0x803F15A8: lbu         $t4, 0x1($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1);
    // 0x803F15AC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x803F15B0: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F15B4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F15B8: bne         $at, $zero, L_803F1590
    if (ctx->r1 != 0) {
        // 0x803F15BC: sb          $t4, 0x1($t0)
        MEM_B(0X1, ctx->r8) = ctx->r12;
            goto L_803F1590;
    }
    // 0x803F15BC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x803F15C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F15C4: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x803F15C8: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x803F15CC: bne         $at, $zero, L_803F156C
    if (ctx->r1 != 0) {
        // 0x803F15D0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F156C;
    }
    // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F15D4: jr          $ra
    // 0x803F15D8: nop

    return;
    // 0x803F15D8: nop

;}
RECOMP_FUNC void func_803F1590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F156C:
    // 0x803F1590: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
L_803F1590:
    // 0x803F1594: addu        $t1, $a2, $a1
    ctx->r9 = ADD32(ctx->r6, ctx->r5);
    // 0x803F1598: lbu         $at, 0x0($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X0);
    // 0x803F159C: addu        $t0, $a0, $a1
    ctx->r8 = ADD32(ctx->r4, ctx->r5);
    // 0x803F15A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F15A4: sb          $at, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r1;
    // 0x803F15A8: lbu         $t4, 0x1($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1);
    // 0x803F15AC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x803F15B0: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F15B4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F15B8: bne         $at, $zero, L_803F1590
    if (ctx->r1 != 0) {
        // 0x803F15BC: sb          $t4, 0x1($t0)
        MEM_B(0X1, ctx->r8) = ctx->r12;
            goto L_803F1590;
    }
    // 0x803F15BC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x803F15C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F15C4: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x803F15C8: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x803F15CC: bne         $at, $zero, L_803F156C
    if (ctx->r1 != 0) {
            // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_803F156C(rdram, ctx);
    return;
    }
    // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F15D4: jr          $ra
    // 0x803F15D8: nop

    return;
    // 0x803F15D8: nop

;}
RECOMP_FUNC void func_803F15A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F156C:
    // 0x803F15A8: lbu         $t4, 0x1($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1);
L_803F1590:
    // 0x803F15AC: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x803F15B0: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F15B4: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F15B8: bne         $at, $zero, L_803F1590
    if (ctx->r1 != 0) {
            // 0x803F15BC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    func_803F1590(rdram, ctx);
    return;
    }
    // 0x803F15BC: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x803F15C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F15C4: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x803F15C8: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x803F15CC: bne         $at, $zero, L_803F156C
    if (ctx->r1 != 0) {
            // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_803F156C(rdram, ctx);
    return;
    }
    // 0x803F15D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F15D4: jr          $ra
    // 0x803F15D8: nop

    return;
    // 0x803F15D8: nop

;}
RECOMP_FUNC void func_803F15DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F15DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F15E0:
    // 0x803F15E0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803F15E4: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F15E8: addiu       $t9, $t9, -0x3B20
    ctx->r25 = ADD32(ctx->r25, -0X3B20);
    // 0x803F15EC: addiu       $t7, $t7, 0x37B0
    ctx->r15 = ADD32(ctx->r15, 0X37B0);
    // 0x803F15F0: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x803F15F4: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x803F15F8: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x803F15FC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F1600: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F1604:
    // 0x803F1604: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x803F1608: addu        $t1, $a2, $a1
    ctx->r9 = ADD32(ctx->r6, ctx->r5);
    // 0x803F160C: lbu         $at, 0x0($t1)
    ctx->r1 = MEM_BU(ctx->r9, 0X0);
    // 0x803F1610: addu        $t0, $a0, $a1
    ctx->r8 = ADD32(ctx->r4, ctx->r5);
    // 0x803F1614: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1618: sb          $at, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r1;
    // 0x803F161C: lbu         $t4, 0x1($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X1);
    // 0x803F1620: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x803F1624: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F1628: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F162C: bne         $at, $zero, L_803F1604
    if (ctx->r1 != 0) {
        // 0x803F1630: sb          $t4, 0x1($t0)
        MEM_B(0X1, ctx->r8) = ctx->r12;
            goto L_803F1604;
    }
    // 0x803F1630: sb          $t4, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r12;
    // 0x803F1634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1638: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x803F163C: slti        $at, $t6, 0x2C
    ctx->r1 = SIGNED(ctx->r14) < 0X2C ? 1 : 0;
    // 0x803F1640: bne         $at, $zero, L_803F15E0
    if (ctx->r1 != 0) {
        // 0x803F1644: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F15E0;
    }
    // 0x803F1644: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F1648: jr          $ra
    // 0x803F164C: nop

    return;
    // 0x803F164C: nop

;}
RECOMP_FUNC void func_803F1650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1650: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F1654: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F1658: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F165C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F1660: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F1664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1668: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x803F166C: lui         $s3, 0x8040
    ctx->r19 = S32(0X8040 << 16);
    // 0x803F1670: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F1674: addiu       $s3, $s3, -0x35A0
    ctx->r19 = ADD32(ctx->r19, -0X35A0);
    // 0x803F1678: addiu       $s2, $s2, 0x3D30
    ctx->r18 = ADD32(ctx->r18, 0X3D30);
    // 0x803F167C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F1680: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F1684: addiu       $s4, $zero, 0x60
    ctx->r20 = ADD32(0, 0X60);
L_803F1688:
    // 0x803F1688: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F168C: sll         $t6, $s0, 7
    ctx->r14 = S32(ctx->r16 << 7);
    // 0x803F1690: addu        $a0, $s2, $t6
    ctx->r4 = ADD32(ctx->r18, ctx->r14);
    // 0x803F1694: mflo        $t7
    ctx->r15 = lo;
    // 0x803F1698: addu        $a1, $s3, $t7
    ctx->r5 = ADD32(ctx->r19, ctx->r15);
    // 0x803F169C: jal         0x8003240C
    // 0x803F16A0: nop

    func_8003240C(rdram, ctx);
        goto after_0;
    // 0x803F16A0: nop

    after_0:
    // 0x803F16A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F16A8: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x803F16AC: slti        $at, $s0, 0x2C
    ctx->r1 = SIGNED(ctx->r16) < 0X2C ? 1 : 0;
    // 0x803F16B0: bne         $at, $zero, L_803F1688
    if (ctx->r1 != 0) {
        // 0x803F16B4: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_803F1688;
    }
    // 0x803F16B4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x803F16B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F16BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F16C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F16C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F16C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F16CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F16D0: jr          $ra
    // 0x803F16D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F16D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F16D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F16D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F16DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F16E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F16E4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F16E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F16EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F16F0: lui         $s2, 0x8040
    ctx->r18 = S32(0X8040 << 16);
    // 0x803F16F4: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x803F16F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F16FC: addiu       $s4, $s4, 0x3D30
    ctx->r20 = ADD32(ctx->r20, 0X3D30);
    // 0x803F1700: addiu       $s2, $s2, -0x35A0
    ctx->r18 = ADD32(ctx->r18, -0X35A0);
    // 0x803F1704: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F1708: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F170C: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
L_803F1710:
    // 0x803F1710: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1714: sll         $t7, $s0, 7
    ctx->r15 = S32(ctx->r16 << 7);
    // 0x803F1718: addu        $a1, $s4, $t7
    ctx->r5 = ADD32(ctx->r20, ctx->r15);
    // 0x803F171C: mflo        $t6
    ctx->r14 = lo;
    // 0x803F1720: addu        $a0, $s2, $t6
    ctx->r4 = ADD32(ctx->r18, ctx->r14);
    // 0x803F1724: jal         0x80032578
    // 0x803F1728: nop

    func_80032578(rdram, ctx);
        goto after_0;
    // 0x803F1728: nop

    after_0:
    // 0x803F172C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1730: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x803F1734: slti        $at, $s0, 0x2C
    ctx->r1 = SIGNED(ctx->r16) < 0X2C ? 1 : 0;
    // 0x803F1738: bne         $at, $zero, L_803F1710
    if (ctx->r1 != 0) {
        // 0x803F173C: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_803F1710;
    }
    // 0x803F173C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x803F1740: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1748: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F174C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1750: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1754: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1758: jr          $ra
    // 0x803F175C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F175C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F170C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F170C: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
L_803F1710:
    // 0x803F1710: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1714: sll         $t7, $s0, 7
    ctx->r15 = S32(ctx->r16 << 7);
    // 0x803F1718: addu        $a1, $s4, $t7
    ctx->r5 = ADD32(ctx->r20, ctx->r15);
    // 0x803F171C: mflo        $t6
    ctx->r14 = lo;
    // 0x803F1720: addu        $a0, $s2, $t6
    ctx->r4 = ADD32(ctx->r18, ctx->r14);
    // 0x803F1724: jal         0x80032578
    // 0x803F1728: nop

    func_80032578(rdram, ctx);
        goto after_0;
    // 0x803F1728: nop

    after_0:
    // 0x803F172C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1730: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x803F1734: slti        $at, $s0, 0x2C
    ctx->r1 = SIGNED(ctx->r16) < 0X2C ? 1 : 0;
    // 0x803F1738: bne         $at, $zero, L_803F1710
    if (ctx->r1 != 0) {
        // 0x803F173C: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_803F1710;
    }
    // 0x803F173C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x803F1740: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1744: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1748: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F174C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1750: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1754: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1758: jr          $ra
    // 0x803F175C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F175C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F1760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1760: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1764:
    // 0x803F1764: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F1768: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x803F176C: addiu       $t9, $t9, 0x5330
    ctx->r25 = ADD32(ctx->r25, 0X5330);
    // 0x803F1770: addiu       $t7, $t7, -0x2200
    ctx->r15 = ADD32(ctx->r15, -0X2200);
    // 0x803F1774: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x803F1778: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x803F177C: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x803F1780: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F1784: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F1788:
    // 0x803F1788: addu        $t2, $a1, $v1
    ctx->r10 = ADD32(ctx->r5, ctx->r3);
    // 0x803F178C: addu        $t4, $a0, $v1
    ctx->r12 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1794: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x803F1798: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x803F179C: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F17A0: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F17A4: bne         $at, $zero, L_803F1788
    if (ctx->r1 != 0) {
        // 0x803F17A8: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_803F1788;
    }
    // 0x803F17A8: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F17AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F17B0: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x803F17B4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F17B8: bne         $at, $zero, L_803F1764
    if (ctx->r1 != 0) {
        // 0x803F17BC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F1764;
    }
    // 0x803F17BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F17C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F17C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F17C8:
    // 0x803F17C8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F17CC: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x803F17D0: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x803F17D4: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x803F17D8: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F17DC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x803F17E0: addiu       $t2, $t2, -0x7A10
    ctx->r10 = ADD32(ctx->r10, -0X7A10);
    // 0x803F17E4: addiu       $t8, $t8, -0x21E0
    ctx->r24 = ADD32(ctx->r24, -0X21E0);
    // 0x803F17E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F17EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F17F0: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F17F4: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F17F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F17FC:
    // 0x803F17FC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F1800: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F1804: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F1808: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F180C: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1810: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1818:
    // 0x803F1818: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F181C: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1820: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1824: lbu         $t6, 0xB40($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB40);
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
        // 0x803F1838: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_803F1818;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
        // 0x803F184C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F17FC;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
        // 0x803F1860: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F17C8;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F17BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F17BC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F17C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F17C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F17C8:
    // 0x803F17C8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F17CC: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x803F17D0: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x803F17D4: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x803F17D8: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F17DC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x803F17E0: addiu       $t2, $t2, -0x7A10
    ctx->r10 = ADD32(ctx->r10, -0X7A10);
    // 0x803F17E4: addiu       $t8, $t8, -0x21E0
    ctx->r24 = ADD32(ctx->r24, -0X21E0);
    // 0x803F17E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F17EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F17F0: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F17F4: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F17F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F17FC:
    // 0x803F17FC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F1800: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F1804: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F1808: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F180C: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1810: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1818:
    // 0x803F1818: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F181C: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1820: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1824: lbu         $t6, 0xB40($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB40);
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
        // 0x803F1838: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_803F1818;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
        // 0x803F184C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F17FC;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
        // 0x803F1860: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F17C8;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F17C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F17C8:
    // 0x803F17C8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803F17CC: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x803F17D0: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x803F17D4: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x803F17D8: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F17DC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x803F17E0: addiu       $t2, $t2, -0x7A10
    ctx->r10 = ADD32(ctx->r10, -0X7A10);
    // 0x803F17E4: addiu       $t8, $t8, -0x21E0
    ctx->r24 = ADD32(ctx->r24, -0X21E0);
    // 0x803F17E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F17EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F17F0: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F17F4: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F17F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F17FC:
    // 0x803F17FC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F1800: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F1804: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F1808: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F180C: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1810: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1818:
    // 0x803F1818: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F181C: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1820: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1824: lbu         $t6, 0xB40($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB40);
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
        // 0x803F1838: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_803F1818;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
        // 0x803F184C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F17FC;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
        // 0x803F1860: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F17C8;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F17FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F17C8:
    // 0x803F17FC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
L_803F17FC:
    // 0x803F1800: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F1804: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F1808: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F180C: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1810: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1818:
    // 0x803F1818: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F181C: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1820: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1824: lbu         $t6, 0xB40($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB40);
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
        // 0x803F1838: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_803F1818;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
        // 0x803F184C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F17FC;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
            // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F17C8(rdram, ctx);
    return;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F1818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F17C8:
    // 0x803F1818: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
L_803F17FC:
    // 0x803F181C: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
L_803F1818:
    // 0x803F1820: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1824: lbu         $t6, 0xB40($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XB40);
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
        // 0x803F1838: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_803F1818;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
            // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    func_803F17FC(rdram, ctx);
    return;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
            // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F17C8(rdram, ctx);
    return;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F1828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F17C8:
    // 0x803F1828: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
L_803F17FC:
    // 0x803F182C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
L_803F1818:
    // 0x803F1830: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1834: bne         $at, $zero, L_803F1818
    if (ctx->r1 != 0) {
            // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    func_803F1818(rdram, ctx);
    return;
    }
    // 0x803F1838: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x803F183C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1840: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1844: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1848: bne         $at, $zero, L_803F17FC
    if (ctx->r1 != 0) {
            // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    func_803F17FC(rdram, ctx);
    return;
    }
    // 0x803F184C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1858: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F185C: bne         $at, $zero, L_803F17C8
    if (ctx->r1 != 0) {
            // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F17C8(rdram, ctx);
    return;
    }
    // 0x803F1860: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1864: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x803F1868: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F186C: addiu       $a3, $a3, -0x2520
    ctx->r7 = ADD32(ctx->r7, -0X2520);
    // 0x803F1870: addiu       $t1, $t1, 0x4F30
    ctx->r9 = ADD32(ctx->r9, 0X4F30);
    // 0x803F1874: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F187C: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F1880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1880:
    // 0x803F1880: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1884: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1888: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F188C: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1890:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1894: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1898: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F189C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F18A0: mflo        $a1
    ctx->r5 = lo;
    // 0x803F18A4: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F18A8: lwl         $at, 0x3840($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3840);
    // 0x803F18AC: lwr         $at, 0x3843($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3843);
    // 0x803F18B0: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F18B4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x803F18B8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x803F18BC: lwl         $t7, 0x3844($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3844);
    // 0x803F18C0: lwr         $t7, 0x3847($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3847);
    // 0x803F18C4: nop

    // 0x803F18C8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x803F18CC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x803F18D0: lwl         $at, 0x3848($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3848);
    // 0x803F18D4: lwr         $at, 0x384B($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X384B);
    // 0x803F18D8: nop

    // 0x803F18DC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x803F18E0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x803F18E4: lwl         $t7, 0x384C($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X384C);
    // 0x803F18E8: lwr         $t7, 0x384F($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X384F);
    // 0x803F18EC: nop

    // 0x803F18F0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x803F18F4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x803F18F8: lwl         $at, 0x3850($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X3850);
    // 0x803F18FC: lwr         $at, 0x3853($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3853);
    // 0x803F1900: nop

    // 0x803F1904: swl         $at, 0x10($t4)
    do_swl(rdram, 0X10, ctx->r12, ctx->r1);
    // 0x803F1908: swr         $at, 0x13($t4)
    do_swr(rdram, 0X13, ctx->r12, ctx->r1);
    // 0x803F190C: lwl         $t7, 0x3854($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X3854);
    // 0x803F1910: lwr         $t7, 0x3857($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X3857);
    // 0x803F1914: nop

    // 0x803F1918: swl         $t7, 0x14($t4)
    do_swl(rdram, 0X14, ctx->r12, ctx->r15);
    // 0x803F191C: swr         $t7, 0x17($t4)
    do_swr(rdram, 0X17, ctx->r12, ctx->r15);
    // 0x803F1920: lbu         $at, 0x3858($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X3858);
    // 0x803F1924: nop

    // 0x803F1928: sb          $at, 0x18($t4)
    MEM_B(0X18, ctx->r12) = ctx->r1;
    // 0x803F192C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1930: bne         $at, $zero, L_803F1890
    if (ctx->r1 != 0) {
        // 0x803F1934: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1890;
    }
    // 0x803F1934: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1938: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F193C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1940: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1944: bne         $at, $zero, L_803F1880
    if (ctx->r1 != 0) {
        // 0x803F1948: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1880;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
