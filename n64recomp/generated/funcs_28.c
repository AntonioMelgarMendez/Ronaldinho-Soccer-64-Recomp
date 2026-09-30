#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8005F560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F560: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x8005F564: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8005F568: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005F56C: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8005F570: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8005F574: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005F578: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8005F57C: addiu       $t9, $t9, -0x2A40
    ctx->r25 = ADD32(ctx->r25, -0X2A40);
    // 0x8005F580: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005F584: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005F588: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8005F58C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8005F590: addiu       $t3, $t0, 0x6C
    ctx->r11 = ADD32(ctx->r8, 0X6C);
    // 0x8005F594: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
L_8005F598:
    // 0x8005F598: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8005F59C: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x8005F5A0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8005F5A4: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x8005F5A8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005F5AC: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x8005F5B0: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x8005F5B4: bne         $t0, $t3, L_8005F598
    if (ctx->r8 != ctx->r11) {
        // 0x8005F5B8: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_8005F598;
    }
    // 0x8005F5B8: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x8005F5BC: jr          $ra
    // 0x8005F5C0: nop

    return;
    // 0x8005F5C0: nop

;}
RECOMP_FUNC void func_8005F5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F5C4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8005F5C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8005F5CC: lw          $a1, -0x2F98($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F98);
    // 0x8005F5D0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8005F5D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005F5D8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8005F5DC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8005F5E0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8005F5E4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8005F5E8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x8005F5EC: lh          $t7, -0x7680($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X7680);
    // 0x8005F5F0: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x8005F5F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005F5F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F5FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8005F600: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F604: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8005F608: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005F60C: addiu       $s1, $s1, -0x2F94
    ctx->r17 = ADD32(ctx->r17, -0X2F94);
    // 0x8005F610: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005F614: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F618: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F61C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005F620: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005F624: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005F628: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8005F62C: lui         $t0, 0x380
    ctx->r8 = S32(0X380 << 16);
    // 0x8005F630: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005F634: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8005F638: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8005F63C: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
    // 0x8005F640: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8005F644: sll         $t8, $t8, 6
    ctx->r24 = S32(ctx->r24 << 6);
    // 0x8005F648: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8005F64C: addu        $s0, $a1, $t6
    ctx->r16 = ADD32(ctx->r5, ctx->r14);
    // 0x8005F650: addu        $s0, $s0, $at
    ctx->r16 = ADD32(ctx->r16, ctx->r1);
    // 0x8005F654: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8005F658: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x8005F65C: lw          $t8, 0x58($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X58);
    // 0x8005F660: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x8005F664: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8005F668: addiu       $s2, $s2, -0x5530
    ctx->r18 = ADD32(ctx->r18, -0X5530);
    // 0x8005F66C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005F670: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8005F674: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F678: sll         $t6, $t6, 6
    ctx->r14 = S32(ctx->r14 << 6);
    // 0x8005F67C: addu        $s3, $t9, $t6
    ctx->r19 = ADD32(ctx->r25, ctx->r14);
    // 0x8005F680: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8005F684: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8005F688: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8005F68C: lw          $t6, 0x58($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X58);
    // 0x8005F690: ori         $at, $zero, 0xF080
    ctx->r1 = 0 | 0XF080;
    // 0x8005F694: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8005F698: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x8005F69C: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F6A0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8005F6A4: beq         $t8, $zero, L_8005F718
    if (ctx->r24 == 0) {
        // 0x8005F6A8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8005F718;
    }
    // 0x8005F6A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8005F6AC: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8005F6B0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x8005F6B4: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x8005F6B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8005F6BC: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8005F6C0: addiu       $a1, $sp, 0xC6
    ctx->r5 = ADD32(ctx->r29, 0XC6);
    // 0x8005F6C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8005F6C8: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005F6CC: jal         0x8007FEF0
    // 0x8005F6D0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_0;
    // 0x8005F6D0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8005F6D4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F6D8: lui         $a2, 0xBC00
    ctx->r6 = S32(0XBC00 << 16);
    // 0x8005F6DC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8005F6E0: ori         $a2, $a2, 0xE
    ctx->r6 = ctx->r6 | 0XE;
    // 0x8005F6E4: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8005F6E8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8005F6EC: lhu         $t6, 0xC6($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XC6);
    // 0x8005F6F0: nop

    // 0x8005F6F4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8005F6F8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F6FC: nop

    // 0x8005F700: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8005F704: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x8005F708: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8005F70C: lhu         $t8, 0xC6($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XC6);
    // 0x8005F710: b           L_8005F750
    // 0x8005F714: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
        goto L_8005F750;
    // 0x8005F714: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
L_8005F718:
    // 0x8005F718: lwc1        $f10, 0x54($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X54);
    // 0x8005F71C: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    // 0x8005F720: lw          $a2, 0x4C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4C);
    // 0x8005F724: lw          $a3, 0x50($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X50);
    // 0x8005F728: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8005F72C: lwc1        $f16, 0x3C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8005F730: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8005F734: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8005F738: lwc1        $f18, 0x40($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8005F73C: nop

    // 0x8005F740: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8005F744: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8005F748: jal         0x800803D4
    // 0x8005F74C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_800803D4(rdram, ctx);
        goto after_1;
    // 0x8005F74C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
L_8005F750:
    // 0x8005F750: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F754: lui         $a3, 0x103
    ctx->r7 = S32(0X103 << 16);
    // 0x8005F758: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8005F75C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8005F760: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F764: ori         $a3, $a3, 0x40
    ctx->r7 = ctx->r7 | 0X40;
    // 0x8005F768: addu        $a1, $s3, $at
    ctx->r5 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F76C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8005F770: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8005F774: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F778: nop

    // 0x8005F77C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005F780: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005F784: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8005F788: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x8005F78C: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x8005F790: nop

    // 0x8005F794: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8005F798: beq         $t8, $zero, L_8005F82C
    if (ctx->r24 == 0) {
        // 0x8005F79C: nop
    
            goto L_8005F82C;
    }
    // 0x8005F79C: nop

    // 0x8005F7A0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8005F7A4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x8005F7A8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x8005F7AC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x8005F7B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8005F7B4: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8005F7B8: addiu       $a0, $s3, 0x80
    ctx->r4 = ADD32(ctx->r19, 0X80);
    // 0x8005F7BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8005F7C0: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8005F7C4: nop

    // 0x8005F7C8: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8005F7CC: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8005F7D0: nop

    // 0x8005F7D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8005F7D8: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8005F7DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8005F7E0: jal         0x80080208
    // 0x8005F7E4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_80080208(rdram, ctx);
        goto after_2;
    // 0x8005F7E4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8005F7E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F7EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F7F0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8005F7F4: lui         $a0, 0x101
    ctx->r4 = S32(0X101 << 16);
    // 0x8005F7F8: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8005F7FC: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x8005F800: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x8005F804: addu        $a2, $s3, $at
    ctx->r6 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F808: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8005F80C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8005F810: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F814: nop

    // 0x8005F818: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005F81C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005F820: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8005F824: b           L_8005F9B8
    // 0x8005F828: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
        goto L_8005F9B8;
    // 0x8005F828: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_8005F82C:
    // 0x8005F82C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8005F830: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8005F834: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8005F838: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8005F83C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8005F840: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8005F844: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8005F848: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8005F84C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8005F850: jal         0x80080528
    // 0x8005F854: addiu       $a0, $s3, 0x80
    ctx->r4 = ADD32(ctx->r19, 0X80);
    func_80080528(rdram, ctx);
        goto after_3;
    // 0x8005F854: addiu       $a0, $s3, 0x80
    ctx->r4 = ADD32(ctx->r19, 0X80);
    after_3:
    // 0x8005F858: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8005F85C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005F860: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8005F864: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8005F868: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8005F86C: addiu       $a0, $s3, 0xC0
    ctx->r4 = ADD32(ctx->r19, 0XC0);
    // 0x8005F870: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8005F874: jal         0x80080714
    // 0x8005F878: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80080714(rdram, ctx);
        goto after_4;
    // 0x8005F878: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8005F87C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8005F880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005F884: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8005F888: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8005F88C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8005F890: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x8005F894: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8005F898: jal         0x80080714
    // 0x8005F89C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80080714(rdram, ctx);
        goto after_5;
    // 0x8005F89C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8005F8A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005F8A4: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8005F8A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005F8AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8005F8B0: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x8005F8B4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8005F8B8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8005F8BC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8005F8C0: addiu       $a0, $s3, 0x140
    ctx->r4 = ADD32(ctx->r19, 0X140);
    // 0x8005F8C4: jal         0x80080714
    // 0x8005F8C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80080714(rdram, ctx);
        goto after_6;
    // 0x8005F8C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x8005F8CC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F8D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F8D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8005F8D8: lui         $a0, 0x101
    ctx->r4 = S32(0X101 << 16);
    // 0x8005F8DC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8005F8E0: ori         $at, $at, 0xC0
    ctx->r1 = ctx->r1 | 0XC0;
    // 0x8005F8E4: ori         $a0, $a0, 0x40
    ctx->r4 = ctx->r4 | 0X40;
    // 0x8005F8E8: addu        $a3, $s3, $at
    ctx->r7 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F8EC: sw          $a3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r7;
    // 0x8005F8F0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8005F8F4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F8F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F8FC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8005F900: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8005F904: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x8005F908: addu        $t1, $s3, $at
    ctx->r9 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F90C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8005F910: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8005F914: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F918: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F91C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8005F920: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8005F924: ori         $at, $at, 0x140
    ctx->r1 = ctx->r1 | 0X140;
    // 0x8005F928: addu        $t3, $s3, $at
    ctx->r11 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F92C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8005F930: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8005F934: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F938: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F93C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8005F940: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8005F944: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x8005F948: addu        $a2, $s3, $at
    ctx->r6 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F94C: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x8005F950: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8005F954: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F958: nop

    // 0x8005F95C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8005F960: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x8005F964: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x8005F968: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8005F96C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F970: nop

    // 0x8005F974: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8005F978: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x8005F97C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8005F980: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8005F984: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F988: nop

    // 0x8005F98C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8005F990: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8005F994: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    // 0x8005F998: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x8005F99C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8005F9A0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F9A4: nop

    // 0x8005F9A8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8005F9AC: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x8005F9B0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
    // 0x8005F9B4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_8005F9B8:
    // 0x8005F9B8: jal         0x8007FBD8
    // 0x8005F9BC: addiu       $a0, $s3, 0x40
    ctx->r4 = ADD32(ctx->r19, 0X40);
    func_8007FBD8(rdram, ctx);
        goto after_7;
    // 0x8005F9BC: addiu       $a0, $s3, 0x40
    ctx->r4 = ADD32(ctx->r19, 0X40);
    after_7:
    // 0x8005F9C0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005F9C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F9C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8005F9CC: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8005F9D0: ori         $at, $at, 0x40
    ctx->r1 = ctx->r1 | 0X40;
    // 0x8005F9D4: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x8005F9D8: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x8005F9DC: addu        $a1, $s3, $at
    ctx->r5 = ADD32(ctx->r19, ctx->r1);
    // 0x8005F9E0: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8005F9E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8005F9E8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005F9EC: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x8005F9F0: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005F9F4: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005F9F8: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8005F9FC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8005FA00: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FA04: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8005FA08: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8005FA0C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8005FA10: ori         $t9, $t9, 0x404
    ctx->r25 = ctx->r25 | 0X404;
    // 0x8005FA14: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8005FA18: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x8005FA1C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FA20: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8005FA24: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8005FA28: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8005FA2C: ori         $t7, $t7, 0xC04
    ctx->r15 = ctx->r15 | 0XC04;
    // 0x8005FA30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8005FA34: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x8005FA38: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FA3C: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8005FA40: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8005FA44: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8005FA48: ori         $t9, $t9, 0x1404
    ctx->r25 = ctx->r25 | 0X1404;
    // 0x8005FA4C: ori         $t6, $zero, 0xFFFD
    ctx->r14 = 0 | 0XFFFD;
    // 0x8005FA50: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8005FA54: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8005FA58: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FA5C: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8005FA60: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8005FA64: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8005FA68: ori         $t8, $t8, 0x1C04
    ctx->r24 = ctx->r24 | 0X1C04;
    // 0x8005FA6C: ori         $t9, $zero, 0xFFFD
    ctx->r25 = 0 | 0XFFFD;
    // 0x8005FA70: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8005FA74: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8005FA78: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FA7C: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8005FA80: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005FA84: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005FA88: ori         $t7, $t7, 0x404
    ctx->r15 = ctx->r15 | 0X404;
    // 0x8005FA8C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8005FA90: sw          $ra, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r31;
    // 0x8005FA94: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FA98: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x8005FA9C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8005FAA0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x8005FAA4: ori         $t9, $t9, 0xC04
    ctx->r25 = ctx->r25 | 0XC04;
    // 0x8005FAA8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8005FAAC: sw          $ra, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r31;
    // 0x8005FAB0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FAB4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8005FAB8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005FABC: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005FAC0: ori         $t7, $t7, 0x1404
    ctx->r15 = ctx->r15 | 0X1404;
    // 0x8005FAC4: ori         $t8, $zero, 0xFFFD
    ctx->r24 = 0 | 0XFFFD;
    // 0x8005FAC8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8005FACC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8005FAD0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FAD4: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x8005FAD8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8005FADC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8005FAE0: ori         $t6, $t6, 0x1C04
    ctx->r14 = ctx->r14 | 0X1C04;
    // 0x8005FAE4: ori         $t7, $zero, 0xFFFD
    ctx->r15 = 0 | 0XFFFD;
    // 0x8005FAE8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8005FAEC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8005FAF0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FAF4: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8005FAF8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8005FAFC: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8005FB00: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8005FB04: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8005FB08: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FB0C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005FB10: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8005FB14: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x8005FB18: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8005FB1C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8005FB20: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8005FB24: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8005FB28: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8005FB2C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8005FB30: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x8005FB34: lui         $t2, 0xED00
    ctx->r10 = S32(0XED00 << 16);
    // 0x8005FB38: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005FB3C: nop

    // 0x8005FB40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005FB44: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8005FB48: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8005FB4C: nop

    // 0x8005FB50: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8005FB54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FB58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FB5C: nop

    // 0x8005FB60: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8005FB64: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8005FB68: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8005FB6C: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8005FB70: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x8005FB74: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005FB78: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8005FB7C: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8005FB80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005FB84: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8005FB88: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8005FB8C: nop

    // 0x8005FB90: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8005FB94: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FB98: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FB9C: nop

    // 0x8005FBA0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005FBA4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8005FBA8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8005FBAC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8005FBB0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8005FBB4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8005FBB8: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x8005FBBC: nop

    // 0x8005FBC0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8005FBC4: nop

    // 0x8005FBC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005FBCC: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8005FBD0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8005FBD4: nop

    // 0x8005FBD8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8005FBDC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FBE0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FBE4: nop

    // 0x8005FBE8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8005FBEC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8005FBF0: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x8005FBF4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8005FBF8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8005FBFC: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8005FC00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005FC04: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005FC08: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8005FC0C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8005FC10: nop

    // 0x8005FC14: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8005FC18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FC1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FC20: nop

    // 0x8005FC24: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8005FC28: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8005FC2C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8005FC30: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8005FC34: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8005FC38: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8005FC3C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005FC40: nop

    // 0x8005FC44: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8005FC48: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x8005FC4C: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x8005FC50: nop

    // 0x8005FC54: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8005FC58: nop

    // 0x8005FC5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005FC60: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8005FC64: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8005FC68: nop

    // 0x8005FC6C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8005FC70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FC74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FC78: nop

    // 0x8005FC7C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005FC80: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8005FC84: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8005FC88: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8005FC8C: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x8005FC90: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005FC94: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8005FC98: or          $t8, $t7, $t2
    ctx->r24 = ctx->r15 | ctx->r10;
    // 0x8005FC9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8005FCA0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8005FCA4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8005FCA8: nop

    // 0x8005FCAC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8005FCB0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FCB4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FCB8: nop

    // 0x8005FCBC: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8005FCC0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8005FCC4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8005FCC8: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8005FCCC: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8005FCD0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8005FCD4: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x8005FCD8: nop

    // 0x8005FCDC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8005FCE0: nop

    // 0x8005FCE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8005FCE8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8005FCEC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8005FCF0: nop

    // 0x8005FCF4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8005FCF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FCFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FD00: nop

    // 0x8005FD04: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8005FD08: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8005FD0C: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x8005FD10: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8005FD14: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8005FD18: andi        $t6, $t9, 0xFFF
    ctx->r14 = ctx->r25 & 0XFFF;
    // 0x8005FD1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8005FD20: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x8005FD24: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8005FD28: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8005FD2C: nop

    // 0x8005FD30: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8005FD34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8005FD38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8005FD3C: nop

    // 0x8005FD40: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8005FD44: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8005FD48: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8005FD4C: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x8005FD50: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x8005FD54: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8005FD58: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005FD5C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8005FD60: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8005FD64: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8005FD68: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FD6C: jr          $ra
    // 0x8005FD70: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x8005FD70: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8006033C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006033C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80060340: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80060344: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80060348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006034C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80060350: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80060354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060358: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006035C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80060360: lhu         $t7, -0x7654($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X7654);
    // 0x80060364: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80060368: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006036C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80060370: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80060374: addu        $a1, $v0, $t6
    ctx->r5 = ADD32(ctx->r2, ctx->r14);
    // 0x80060378: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8006037C: beq         $t8, $zero, L_800603B8
    if (ctx->r24 == 0) {
        // 0x80060380: addu        $a1, $a1, $at
        ctx->r5 = ADD32(ctx->r5, ctx->r1);
            goto L_800603B8;
    }
    // 0x80060380: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80060384: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80060388: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006038C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80060390: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80060394: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x80060398: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x8006039C: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x800603A0: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    // 0x800603A4: swc1        $f2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f2.u32l;
    // 0x800603A8: swc1        $f2, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f2.u32l;
    // 0x800603AC: lwc1        $f4, -0x66BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X66BC);
    // 0x800603B0: nop

    // 0x800603B4: swc1        $f4, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f4.u32l;
L_800603B8:
    // 0x800603B8: jal         0x800603D0
    // 0x800603BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800603D0(rdram, ctx);
        goto after_0;
    // 0x800603BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800603C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800603C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800603C8: jr          $ra
    // 0x800603CC: nop

    return;
    // 0x800603CC: nop

;}
RECOMP_FUNC void func_800603D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800603D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800603D4: nop

    // 0x800603D8: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x800603DC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x800603E0: jr          $ra
    // 0x800603E4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800603E4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x800603E8: nop

    // 0x800603EC: nop

;}
RECOMP_FUNC void func_800603F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800603F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800603F4: addiu       $a0, $a0, -0x2F98
    ctx->r4 = ADD32(ctx->r4, -0X2F98);
    // 0x800603F8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800603FC: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80060400: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80060404: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80060408: sh          $zero, 0x1370($t7)
    MEM_H(0X1370, ctx->r15) = 0;
    // 0x8006040C: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80060410: addiu       $v1, $zero, 0x68
    ctx->r3 = ADD32(0, 0X68);
    // 0x80060414: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80060418: sh          $zero, 0x13A4($t9)
    MEM_H(0X13A4, ctx->r25) = 0;
    // 0x8006041C: addiu       $v0, $zero, 0xD68
    ctx->r2 = ADD32(0, 0XD68);
L_80060420:
    // 0x80060420: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80060424: nop

    // 0x80060428: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x8006042C: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x80060430: sh          $zero, 0x1370($t2)
    MEM_H(0X1370, ctx->r10) = 0;
    // 0x80060434: lw          $t3, 0x0($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X0);
    // 0x80060438: nop

    // 0x8006043C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x80060440: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x80060444: sh          $zero, 0x13A4($t5)
    MEM_H(0X13A4, ctx->r13) = 0;
    // 0x80060448: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8006044C: nop

    // 0x80060450: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80060454: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x80060458: sh          $zero, 0x13D8($t8)
    MEM_H(0X13D8, ctx->r24) = 0;
    // 0x8006045C: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80060460: nop

    // 0x80060464: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80060468: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8006046C: addiu       $v1, $v1, 0xD0
    ctx->r3 = ADD32(ctx->r3, 0XD0);
    // 0x80060470: bne         $v1, $v0, L_80060420
    if (ctx->r3 != ctx->r2) {
        // 0x80060474: sh          $zero, 0x140C($t1)
        MEM_H(0X140C, ctx->r9) = 0;
            goto L_80060420;
    }
    // 0x80060474: sh          $zero, 0x140C($t1)
    MEM_H(0X140C, ctx->r9) = 0;
    // 0x80060478: jr          $ra
    // 0x8006047C: nop

    return;
    // 0x8006047C: nop

;}
RECOMP_FUNC void func_80060510_inner(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060510: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80060514: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80060518: lui         $fp, 0x8011
    ctx->r30 = S32(0X8011 << 16);
    // 0x8006051C: addiu       $fp, $fp, -0x2F98
    ctx->r30 = ADD32(ctx->r30, -0X2F98);
    // 0x80060520: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x80060524: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80060528: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x8006052C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80060530: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80060534: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80060538: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8006053C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80060540: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80060544: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80060548: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8006054C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80060550: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80060554: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x80060558: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006055C: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80060560: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060564: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80060568: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006056C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80060570: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80060574: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80060578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006057C: beq         $t6, $zero, L_80060AC4
    if (ctx->r14 == 0) {
        // 0x80060580: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_80060AC4;
    }
    // 0x80060580: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80060584: jal         0x8005F5C4
    // 0x80060588: sw          $v0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r2;
    func_8005F5C4(rdram, ctx);
        goto after_0;
    // 0x80060588: sw          $v0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r2;
    after_0:
    // 0x8006058C: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80060590: addiu       $s0, $s0, -0x2F94
    ctx->r16 = ADD32(ctx->r16, -0X2F94);
    // 0x80060594: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060598: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8006059C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800605A0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800605A4: addiu       $t9, $t9, -0x2798
    ctx->r25 = ADD32(ctx->r25, -0X2798);
    // 0x800605A8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x800605AC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800605B0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800605B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800605B8: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x800605BC: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x800605C0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800605C4: addiu       $t4, $t4, -0x2730
    ctx->r12 = ADD32(ctx->r12, -0X2730);
    // 0x800605C8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x800605CC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x800605D0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x800605D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800605D8: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x800605DC: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x800605E0: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x800605E4: lui         $t6, 0xBC00
    ctx->r14 = S32(0XBC00 << 16);
    // 0x800605E8: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x800605EC: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x800605F0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800605F4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800605F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800605FC: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80060600: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80060604: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80060608: lui         $t9, 0x386
    ctx->r25 = S32(0X386 << 16);
    // 0x8006060C: ori         $t9, $t9, 0x10
    ctx->r25 = ctx->r25 | 0X10;
    // 0x80060610: addiu       $t2, $t2, -0x27A8
    ctx->r10 = ADD32(ctx->r10, -0X27A8);
    // 0x80060614: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80060618: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8006061C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060620: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80060624: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80060628: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8006062C: lui         $t4, 0x388
    ctx->r12 = S32(0X388 << 16);
    // 0x80060630: ori         $t4, $t4, 0x10
    ctx->r12 = ctx->r12 | 0X10;
    // 0x80060634: addiu       $t5, $t5, -0x27B0
    ctx->r13 = ADD32(ctx->r13, -0X27B0);
    // 0x80060638: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8006063C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80060640: lw          $v1, 0x0($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X0);
    // 0x80060644: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x80060648: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8006064C: lh          $t6, -0x7680($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X7680);
    // 0x80060650: ori         $at, $zero, 0xF240
    ctx->r1 = 0 | 0XF240;
    // 0x80060654: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80060658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006065C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80060660: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8006066C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060670: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80060674: sll         $t7, $t7, 6
    ctx->r15 = S32(ctx->r15 << 6);
    // 0x80060678: addu        $s7, $v1, $t7
    ctx->r23 = ADD32(ctx->r3, ctx->r15);
    // 0x8006067C: addu        $s7, $s7, $at
    ctx->r23 = ADD32(ctx->r23, ctx->r1);
    // 0x80060680: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80060684: ori         $at, $at, 0x9370
    ctx->r1 = ctx->r1 | 0X9370;
    // 0x80060688: addu        $s1, $v1, $at
    ctx->r17 = ADD32(ctx->r3, ctx->r1);
    // 0x8006068C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80060690: lwc1        $f27, -0x66A0($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X66A0);
    // 0x80060694: lwc1        $f26, -0x669C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X669C);
    // 0x80060698: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8006069C: lwc1        $f25, -0x6698($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X6698);
    // 0x800606A0: lwc1        $f24, -0x6694($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X6694);
    // 0x800606A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800606A8: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x800606AC: lui         $s6, 0x100
    ctx->r22 = S32(0X100 << 16);
    // 0x800606B0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800606B4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800606B8: ori         $s6, $s6, 0x40
    ctx->r22 = ctx->r22 | 0X40;
    // 0x800606BC: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x800606C0: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
L_800606C4:
    // 0x800606C4: lhu         $t9, 0x0($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X0);
    // 0x800606C8: nop

    // 0x800606CC: beq         $t9, $zero, L_80060A84
    if (ctx->r25 == 0) {
        // 0x800606D0: lw          $t7, 0xF4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XF4);
            goto L_80060A84;
    }
    // 0x800606D0: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x800606D4: lw          $t2, 0x28($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X28);
    // 0x800606D8: nop

    // 0x800606DC: beq         $t2, $zero, L_80060A84
    if (ctx->r10 == 0) {
        // 0x800606E0: lw          $t7, 0xF4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XF4);
            goto L_80060A84;
    }
    // 0x800606E0: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x800606E4: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x800606E8: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x800606EC: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x800606F0: jal         0x80080528
    // 0x800606F4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80080528(rdram, ctx);
        goto after_1;
    // 0x800606F4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_1:
    // 0x800606F8: addiu       $s2, $s7, 0x40
    ctx->r18 = ADD32(ctx->r23, 0X40);
    // 0x800606FC: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x80060700: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80060704: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80060708: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x8006070C: jal         0x80080714
    // 0x80060710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80080714(rdram, ctx);
        goto after_2;
    // 0x80060710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80060714: addiu       $s3, $s7, 0x80
    ctx->r19 = ADD32(ctx->r23, 0X80);
    // 0x80060718: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x8006071C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80060720: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x80060724: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x80060728: jal         0x80080714
    // 0x8006072C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80080714(rdram, ctx);
        goto after_3;
    // 0x8006072C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x80060730: addiu       $s4, $s7, 0xC0
    ctx->r20 = ADD32(ctx->r23, 0XC0);
    // 0x80060734: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x80060738: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8006073C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80060740: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x80060744: jal         0x80080714
    // 0x80060748: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80080714(rdram, ctx);
        goto after_4;
    // 0x80060748: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x8006074C: addiu       $s5, $s7, 0x100
    ctx->r21 = ADD32(ctx->r23, 0X100);
    // 0x80060750: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80060754: lw          $a2, 0x20($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X20);
    // 0x80060758: lw          $a3, 0x24($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X24);
    // 0x8006075C: jal         0x80080494
    // 0x80060760: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80080494(rdram, ctx);
        goto after_5;
    // 0x80060760: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_5:
    // 0x80060764: lbu         $t3, 0x2($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X2);
    // 0x80060768: lw          $v0, 0xE8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XE8);
    // 0x8006076C: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x80060770: beq         $t4, $zero, L_800607AC
    if (ctx->r12 == 0) {
        // 0x80060774: nop
    
            goto L_800607AC;
    }
    // 0x80060774: nop

    // 0x80060778: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8006077C: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80060780: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80060784: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80060788: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8006078C: jal         0x8001C5D0
    // 0x80060790: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_8001C5D0(rdram, ctx);
        goto after_6;
    // 0x80060790: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_6:
    // 0x80060794: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x80060798: mul.d       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f24.d);
    // 0x8006079C: nop

    // 0x800607A0: div.d       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f26.d);
    // 0x800607A4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800607A8: swc1        $f6, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f6.u32l;
L_800607AC:
    // 0x800607AC: lhu         $t5, 0x0($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X0);
    // 0x800607B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800607B4: beq         $t5, $at, L_8006085C
    if (ctx->r13 == ctx->r1) {
        // 0x800607B8: lui         $t4, 0xBC00
        ctx->r12 = S32(0XBC00 << 16);
            goto L_8006085C;
    }
    // 0x800607B8: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x800607BC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800607C0: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x800607C4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800607C8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800607CC: ori         $t7, $t7, 0x1806
    ctx->r15 = ctx->r15 | 0X1806;
    // 0x800607D0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800607D4: lw          $t9, 0x2C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X2C);
    // 0x800607D8: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
    // 0x800607DC: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x800607E0: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800607E4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800607E8: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x800607EC: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x800607F0: lw          $t5, 0xAD0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XAD0);
    // 0x800607F4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x800607F8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800607FC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060800: ori         $t7, $t7, 0x2806
    ctx->r15 = ctx->r15 | 0X2806;
    // 0x80060804: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80060808: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8006080C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80060810: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80060814: lui         $t4, 0xBC00
    ctx->r12 = S32(0XBC00 << 16);
    // 0x80060818: addu        $t8, $t9, $a2
    ctx->r24 = ADD32(ctx->r25, ctx->r6);
    // 0x8006081C: lw          $t2, 0xBF0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0XBF0);
    // 0x80060820: ori         $t4, $t4, 0x3806
    ctx->r12 = ctx->r12 | 0X3806;
    // 0x80060824: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80060828: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8006082C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80060830: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80060834: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x80060838: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8006083C: lbu         $t6, 0x39F9($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39F9);
    // 0x80060840: lw          $t5, 0x0($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X0);
    // 0x80060844: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80060848: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8006084C: addu        $t8, $t9, $a2
    ctx->r24 = ADD32(ctx->r25, ctx->r6);
    // 0x80060850: lw          $t2, 0xAD0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0XAD0);
    // 0x80060854: b           L_80060894
    // 0x80060858: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
        goto L_80060894;
    // 0x80060858: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
L_8006085C:
    // 0x8006085C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060860: ori         $t4, $t4, 0x1806
    ctx->r12 = ctx->r12 | 0X1806;
    // 0x80060864: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80060868: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x8006086C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80060870: lw          $t5, 0x2C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X2C);
    // 0x80060874: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x80060878: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8006087C: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x80060880: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80060884: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80060888: lw          $t8, -0x7530($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7530);
    // 0x8006088C: nop

    // 0x80060890: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80060894:
    // 0x80060894: lbu         $t2, 0x2($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X2);
    // 0x80060898: lui         $t5, 0x104
    ctx->r13 = S32(0X104 << 16);
    // 0x8006089C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800608A0: beq         $t3, $zero, L_800609A0
    if (ctx->r11 == 0) {
        // 0x800608A4: nop
    
            goto L_800609A0;
    }
    // 0x800608A4: nop

    // 0x800608A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800608AC: ori         $t5, $t5, 0x40
    ctx->r13 = ctx->r13 | 0X40;
    // 0x800608B0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x800608B4: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x800608B8: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x800608BC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x800608C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800608C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800608C8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800608CC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800608D0: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x800608D4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800608D8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800608DC: nop

    // 0x800608E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800608E4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800608E8: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x800608EC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800608F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800608F4: nop

    // 0x800608F8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800608FC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80060900: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x80060904: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80060908: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8006090C: nop

    // 0x80060910: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80060914: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80060918: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x8006091C: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80060920: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x80060924: nop

    // 0x80060928: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8006092C: beq         $t0, $zero, L_8006094C
    if (ctx->r8 == 0) {
        // 0x80060930: nop
    
            goto L_8006094C;
    }
    // 0x80060930: nop

    // 0x80060934: beq         $t0, $at, L_8006096C
    if (ctx->r8 == ctx->r1) {
        // 0x80060938: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8006096C;
    }
    // 0x80060938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006093C: beq         $t0, $at, L_8006097C
    if (ctx->r8 == ctx->r1) {
        // 0x80060940: nop
    
            goto L_8006097C;
    }
    // 0x80060940: nop

    // 0x80060944: b           L_80060988
    // 0x80060948: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_80060988;
    // 0x80060948: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_8006094C:
    // 0x8006094C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060950: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x80060954: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80060958: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8006095C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80060960: lw          $t4, 0x28($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X28);
    // 0x80060964: b           L_80060984
    // 0x80060968: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
        goto L_80060984;
    // 0x80060968: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
L_8006096C:
    // 0x8006096C: jal         0x802A0968
    // 0x80060970: nop

    LOOKUP_FUNC(0x802A0968)(rdram, ctx);
        goto after_7;
    // 0x80060970: nop

    after_7:
    // 0x80060974: b           L_80060988
    // 0x80060978: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
        goto L_80060988;
    // 0x80060978: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_8006097C:
    // 0x8006097C: jal         0x802A0B88
    // 0x80060980: nop

    LOOKUP_FUNC(0x802A0B88)(rdram, ctx);
        goto after_8;
    // 0x80060980: nop

    after_8:
L_80060984:
    // 0x80060984: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_80060988:
    // 0x80060988: lui         $t6, 0xBD00
    ctx->r14 = S32(0XBD00 << 16);
    // 0x8006098C: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80060990: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80060994: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80060998: b           L_80060A7C
    // 0x8006099C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80060A7C;
    // 0x8006099C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_800609A0:
    // 0x800609A0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800609A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800609A8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800609AC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800609B0: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x800609B4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800609B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800609BC: nop

    // 0x800609C0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800609C4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800609C8: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x800609CC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800609D0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800609D4: nop

    // 0x800609D8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800609DC: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800609E0: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x800609E4: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x800609E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800609EC: nop

    // 0x800609F0: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x800609F4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800609F8: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x800609FC: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80060A00: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060A04: nop

    // 0x80060A08: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80060A0C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x80060A10: sw          $s5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r21;
    // 0x80060A14: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
    // 0x80060A18: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x80060A1C: nop

    // 0x80060A20: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x80060A24: beq         $t0, $zero, L_80060A44
    if (ctx->r8 == 0) {
        // 0x80060A28: nop
    
            goto L_80060A44;
    }
    // 0x80060A28: nop

    // 0x80060A2C: beq         $t0, $at, L_80060A64
    if (ctx->r8 == ctx->r1) {
        // 0x80060A30: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80060A64;
    }
    // 0x80060A30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80060A34: beq         $t0, $at, L_80060A74
    if (ctx->r8 == ctx->r1) {
        // 0x80060A38: nop
    
            goto L_80060A74;
    }
    // 0x80060A38: nop

    // 0x80060A3C: b           L_80060A80
    // 0x80060A40: addiu       $s7, $s7, 0x140
    ctx->r23 = ADD32(ctx->r23, 0X140);
        goto L_80060A80;
    // 0x80060A40: addiu       $s7, $s7, 0x140
    ctx->r23 = ADD32(ctx->r23, 0X140);
L_80060A44:
    // 0x80060A44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060A48: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80060A4C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80060A50: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80060A54: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80060A58: lw          $t6, 0x28($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X28);
    // 0x80060A5C: b           L_80060A7C
    // 0x80060A60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_80060A7C;
    // 0x80060A60: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80060A64:
    // 0x80060A64: jal         0x802A0968
    // 0x80060A68: nop

    LOOKUP_FUNC(0x802A0968)(rdram, ctx);
        goto after_9;
    // 0x80060A68: nop

    after_9:
    // 0x80060A6C: b           L_80060A80
    // 0x80060A70: addiu       $s7, $s7, 0x140
    ctx->r23 = ADD32(ctx->r23, 0X140);
        goto L_80060A80;
    // 0x80060A70: addiu       $s7, $s7, 0x140
    ctx->r23 = ADD32(ctx->r23, 0X140);
L_80060A74:
    // 0x80060A74: jal         0x802A0B88
    // 0x80060A78: nop

    LOOKUP_FUNC(0x802A0B88)(rdram, ctx);
        goto after_10;
    // 0x80060A78: nop

    after_10:
L_80060A7C:
    // 0x80060A7C: addiu       $s7, $s7, 0x140
    ctx->r23 = ADD32(ctx->r23, 0X140);
L_80060A80:
    // 0x80060A80: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
L_80060A84:
    // 0x80060A84: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80060A88: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80060A8C: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80060A90: sw          $t9, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r25;
    // 0x80060A94: bne         $at, $zero, L_800606C4
    if (ctx->r1 != 0) {
        // 0x80060A98: addiu       $s1, $s1, 0x34
        ctx->r17 = ADD32(ctx->r17, 0X34);
            goto L_800606C4;
    }
    // 0x80060A98: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
    // 0x80060A9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80060AA0: jal         0x80060D04
    // 0x80060AA4: sw          $s7, 0x36E0($at)
    MEM_W(0X36E0, ctx->r1) = ctx->r23;
    func_80060D04(rdram, ctx);
        goto after_11;
    // 0x80060AA4: sw          $s7, 0x36E0($at)
    MEM_W(0X36E0, ctx->r1) = ctx->r23;
    after_11:
    // 0x80060AA8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060AAC: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80060AB0: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80060AB4: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80060AB8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80060ABC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80060AC0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_80060AC4:
    // 0x80060AC4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80060AC8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80060ACC: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80060AD0: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80060AD4: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80060AD8: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80060ADC: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80060AE0: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80060AE4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80060AE8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80060AEC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80060AF0: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80060AF4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80060AF8: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80060AFC: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80060B00: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80060B04: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80060B08: jr          $ra
    // 0x80060B0C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80060B0C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_80060B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060B10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80060B14: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80060B18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80060B1C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80060B20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80060B24: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80060B28: addiu       $s1, $s1, 0x36E0
    ctx->r17 = ADD32(ctx->r17, 0X36E0);
    // 0x80060B2C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80060B30: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80060B34: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80060B38: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80060B3C: jal         0x80080528
    // 0x80060B40: nop

    func_80080528(rdram, ctx);
        goto after_0;
    // 0x80060B40: nop

    after_0:
    // 0x80060B44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80060B48: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80060B4C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80060B50: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80060B54: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80060B58: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80060B5C: jal         0x80080714
    // 0x80060B60: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    func_80080714(rdram, ctx);
        goto after_1;
    // 0x80060B60: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_1:
    // 0x80060B64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80060B68: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80060B6C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80060B70: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80060B74: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80060B78: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80060B7C: jal         0x80080714
    // 0x80060B80: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_80080714(rdram, ctx);
        goto after_2;
    // 0x80060B80: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_2:
    // 0x80060B84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80060B88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80060B8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80060B90: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80060B94: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x80060B98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80060B9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80060BA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80060BA4: jal         0x80080714
    // 0x80060BA8: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    func_80080714(rdram, ctx);
        goto after_3;
    // 0x80060BA8: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    after_3:
    // 0x80060BAC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80060BB0: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80060BB4: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x80060BB8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x80060BBC: jal         0x80080494
    // 0x80060BC0: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    func_80080494(rdram, ctx);
        goto after_4;
    // 0x80060BC0: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    after_4:
    // 0x80060BC4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80060BC8: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x80060BCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80060BD0: lui         $t7, 0x104
    ctx->r15 = S32(0X104 << 16);
    // 0x80060BD4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80060BD8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80060BDC: ori         $t7, $t7, 0x40
    ctx->r15 = ctx->r15 | 0X40;
    // 0x80060BE0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80060BE4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80060BE8: lui         $t1, 0x100
    ctx->r9 = S32(0X100 << 16);
    // 0x80060BEC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80060BF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80060BF4: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80060BF8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80060BFC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80060C00: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80060C04: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80060C08: nop

    // 0x80060C0C: addiu       $t3, $t2, 0x40
    ctx->r11 = ADD32(ctx->r10, 0X40);
    // 0x80060C10: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80060C14: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80060C18: nop

    // 0x80060C1C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80060C20: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80060C24: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80060C28: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80060C2C: nop

    // 0x80060C30: addiu       $t6, $t5, 0x80
    ctx->r14 = ADD32(ctx->r13, 0X80);
    // 0x80060C34: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80060C38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80060C3C: nop

    // 0x80060C40: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80060C44: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80060C48: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80060C4C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80060C50: nop

    // 0x80060C54: addiu       $t9, $t8, 0xC0
    ctx->r25 = ADD32(ctx->r24, 0XC0);
    // 0x80060C58: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80060C5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80060C60: nop

    // 0x80060C64: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80060C68: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80060C6C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80060C70: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x80060C74: nop

    // 0x80060C78: addiu       $t4, $t3, 0x100
    ctx->r12 = ADD32(ctx->r11, 0X100);
    // 0x80060C7C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80060C80: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80060C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80060C88: addiu       $t6, $t5, 0x140
    ctx->r14 = ADD32(ctx->r13, 0X140);
    // 0x80060C8C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80060C90: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80060C94: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80060C98: jr          $ra
    // 0x80060C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80060C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80060D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060D04: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80060D08: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80060D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060D10: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80060D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060D18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060D1C: lbu         $t7, 0x754($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X754);
    // 0x80060D20: nop

    // 0x80060D24: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80060D28: beq         $t8, $zero, L_80060D60
    if (ctx->r24 == 0) {
        // 0x80060D2C: nop
    
            goto L_80060D60;
    }
    // 0x80060D2C: nop

    // 0x80060D30: jal         0x80052334
    // 0x80060D34: nop

    func_80052334(rdram, ctx);
        goto after_0;
    // 0x80060D34: nop

    after_0:
    // 0x80060D38: jal         0x802A3020
    // 0x80060D3C: nop

    LOOKUP_FUNC(0x802A3020)(rdram, ctx);
        goto after_1;
    // 0x80060D3C: nop

    after_1:
    // 0x80060D40: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80060D44: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x80060D48: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80060D4C: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80060D50: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80060D54: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80060D58: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80060D5C: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_80060D60:
    // 0x80060D60: jal         0x8000A950
    // 0x80060D64: nop

    func_8000A950(rdram, ctx);
        goto after_2;
    // 0x80060D64: nop

    after_2:
    // 0x80060D68: jal         0x80003174
    // 0x80060D6C: nop

    func_80003174(rdram, ctx);
        goto after_3;
    // 0x80060D6C: nop

    after_3:
    // 0x80060D70: jal         0x800032A4
    // 0x80060D74: nop

    func_800032A4(rdram, ctx);
        goto after_4;
    // 0x80060D74: nop

    after_4:
    // 0x80060D78: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80060D7C: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x80060D80: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x80060D84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80060D88: lbu         $t2, 0x754($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X754);
    // 0x80060D8C: nop

    // 0x80060D90: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x80060D94: beq         $t3, $zero, L_80060DA4
    if (ctx->r11 == 0) {
        // 0x80060D98: nop
    
            goto L_80060DA4;
    }
    // 0x80060D98: nop

    // 0x80060D9C: jal         0x802A37D0
    // 0x80060DA0: nop

    LOOKUP_FUNC(0x802A37D0)(rdram, ctx);
        goto after_5;
    // 0x80060DA0: nop

    after_5:
L_80060DA4:
    // 0x80060DA4: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80060DA8: lbu         $t4, -0x2FAF($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X2FAF);
    // 0x80060DAC: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x80060DB0: bne         $t4, $zero, L_80060E00
    if (ctx->r12 != 0) {
        // 0x80060DB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80060E00;
    }
    // 0x80060DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060DB8: lbu         $t5, 0x5232($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X5232);
    // 0x80060DBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80060DC0: bne         $t5, $at, L_80060DFC
    if (ctx->r13 != ctx->r1) {
        // 0x80060DC4: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_80060DFC;
    }
    // 0x80060DC4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80060DC8: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x80060DCC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80060DD0: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x80060DD4: bne         $t7, $zero, L_80060DFC
    if (ctx->r15 != 0) {
        // 0x80060DD8: addiu       $v0, $v0, 0xB6B
        ctx->r2 = ADD32(ctx->r2, 0XB6B);
            goto L_80060DFC;
    }
    // 0x80060DD8: addiu       $v0, $v0, 0xB6B
    ctx->r2 = ADD32(ctx->r2, 0XB6B);
    // 0x80060DDC: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80060DE0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80060DE4: bne         $t8, $zero, L_80060DF4
    if (ctx->r24 != 0) {
        // 0x80060DE8: nop
    
            goto L_80060DF4;
    }
    // 0x80060DE8: nop

    // 0x80060DEC: b           L_80060DFC
    // 0x80060DF0: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
        goto L_80060DFC;
    // 0x80060DF0: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_80060DF4:
    // 0x80060DF4: jal         0x8007BEB8
    // 0x80060DF8: nop

    func_8007BEB8(rdram, ctx);
        goto after_6;
    // 0x80060DF8: nop

    after_6:
L_80060DFC:
    // 0x80060DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80060E00:
    // 0x80060E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80060E04: jr          $ra
    // 0x80060E08: nop

    return;
    // 0x80060E08: nop

    // 0x80060E0C: nop

;}
RECOMP_FUNC void func_80060E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060E10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80060E14: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80060E18: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80060E1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80060E20: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80060E24: lhu         $t7, 0xC2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0XC2);
    // 0x80060E28: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x80060E2C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80060E30: beq         $t8, $zero, L_8006113C
    if (ctx->r24 == 0) {
        // 0x80060E34: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8006113C;
    }
    // 0x80060E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E38: lbu         $t9, 0x38DF($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X38DF);
    // 0x80060E3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80060E40: beq         $t9, $at, L_80061138
    if (ctx->r25 == ctx->r1) {
        // 0x80060E44: lui         $v0, 0x8011
        ctx->r2 = S32(0X8011 << 16);
            goto L_80061138;
    }
    // 0x80060E44: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80060E48: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x80060E4C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80060E50: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80060E54: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80060E58: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80060E5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80060E60: lwc1        $f6, 0x1DE0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1DE0);
    // 0x80060E64: lwc1        $f2, 0x1B9C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1B9C);
    // 0x80060E68: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80060E6C: lwc1        $f0, 0x1B94($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1B94);
    // 0x80060E70: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80060E74: nop

    // 0x80060E78: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80060E7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80060E80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80060E84: nop

    // 0x80060E88: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80060E8C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80060E90: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80060E94: nop

    // 0x80060E98: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80060E9C: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x80060EA0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80060EA4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80060EA8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80060EAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80060EB0: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80060EB4: lwc1        $f7, -0x6690($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6690);
    // 0x80060EB8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80060EBC: lwc1        $f6, -0x668C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X668C);
    // 0x80060EC0: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x80060EC4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80060EC8: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x80060ECC: nop

    // 0x80060ED0: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80060ED4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x80060ED8: jal         0x80080E80
    // 0x80060EDC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x80060EDC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80060EE0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80060EE4: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80060EE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80060EEC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80060EF0: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80060EF4: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80060EF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80060EFC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80060F00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80060F04: nop

    // 0x80060F08: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80060F0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80060F10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80060F14: nop

    // 0x80060F18: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80060F1C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80060F20: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80060F24: jal         0x80081040
    // 0x80060F28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x80060F28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_1:
    // 0x80060F2C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80060F30: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x80060F34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80060F38: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80060F3C: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80060F40: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80060F44: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80060F48: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80060F4C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80060F50: nop

    // 0x80060F54: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80060F58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80060F5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80060F60: slti        $at, $v1, 0x1FE
    ctx->r1 = SIGNED(ctx->r3) < 0X1FE ? 1 : 0;
    // 0x80060F64: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80060F68: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80060F6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80060F70: beq         $at, $zero, L_80061138
    if (ctx->r1 == 0) {
        // 0x80060F74: sw          $t1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r9;
            goto L_80061138;
    }
    // 0x80060F74: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80060F78: slti        $at, $v1, -0x1FD
    ctx->r1 = SIGNED(ctx->r3) < -0X1FD ? 1 : 0;
    // 0x80060F7C: bne         $at, $zero, L_80061138
    if (ctx->r1 != 0) {
        // 0x80060F80: slti        $at, $v0, 0x160
        ctx->r1 = SIGNED(ctx->r2) < 0X160 ? 1 : 0;
            goto L_80061138;
    }
    // 0x80060F80: slti        $at, $v0, 0x160
    ctx->r1 = SIGNED(ctx->r2) < 0X160 ? 1 : 0;
    // 0x80060F84: beq         $at, $zero, L_80061138
    if (ctx->r1 == 0) {
        // 0x80060F88: slti        $at, $v0, -0x1FD
        ctx->r1 = SIGNED(ctx->r2) < -0X1FD ? 1 : 0;
            goto L_80061138;
    }
    // 0x80060F88: slti        $at, $v0, -0x1FD
    ctx->r1 = SIGNED(ctx->r2) < -0X1FD ? 1 : 0;
    // 0x80060F8C: bne         $at, $zero, L_80061138
    if (ctx->r1 != 0) {
        // 0x80060F90: addiu       $a0, $zero, 0x207
        ctx->r4 = ADD32(0, 0X207);
            goto L_80061138;
    }
    // 0x80060F90: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    // 0x80060F94: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x80060F98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80060F9C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80060FA0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80060FA4: jal         0x80061148
    // 0x80060FA8: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_80061148(rdram, ctx);
        goto after_2;
    // 0x80060FA8: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80060FAC: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x80060FB0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80060FB4: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x80060FB8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80060FBC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80060FC0: jal         0x80061148
    // 0x80060FC4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80061148(rdram, ctx);
        goto after_3;
    // 0x80060FC4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80060FC8: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80060FCC: lui         $at, 0x429A
    ctx->r1 = S32(0X429A << 16);
    // 0x80060FD0: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80060FD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80060FD8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80060FDC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80060FE0: lwc1        $f2, -0x6688($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X6688);
    // 0x80060FE4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80060FE8: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x80060FEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80060FF0: lui         $at, 0x42EC
    ctx->r1 = S32(0X42EC << 16);
    // 0x80060FF4: div.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80060FF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80060FFC: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x80061000: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80061004: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061008: lwc1        $f18, -0x6684($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6684);
    // 0x8006100C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80061010: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80061014: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80061018: sub.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x8006101C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80061020: add.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x80061024: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80061028: nop

    // 0x8006102C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80061030: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061034: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061038: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x8006103C: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80061040: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80061044: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80061048: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006104C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80061050: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x80061054: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80061058: addiu       $a0, $v1, -0xA0
    ctx->r4 = ADD32(ctx->r3, -0XA0);
    // 0x8006105C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80061060: div.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80061064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80061068: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8006106C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80061070: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80061074: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80061078: nop

    // 0x8006107C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80061080: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061084: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061088: nop

    // 0x8006108C: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80061090: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80061094: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80061098: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006109C: addiu       $a1, $v0, -0x78
    ctx->r5 = ADD32(ctx->r2, -0X78);
    // 0x800610A0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800610A4: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800610A8: nop

    // 0x800610AC: div.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x800610B0: sub.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x800610B4: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800610B8: add.s       $f6, $f8, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x800610BC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800610C0: nop

    // 0x800610C4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800610C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800610CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800610D0: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x800610D4: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800610D8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800610DC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x800610E0: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800610E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800610E8: lui         $at, 0x432C
    ctx->r1 = S32(0X432C << 16);
    // 0x800610EC: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800610F0: addiu       $a2, $t0, -0xA0
    ctx->r6 = ADD32(ctx->r8, -0XA0);
    // 0x800610F4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x800610F8: div.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x800610FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80061100: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80061104: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80061108: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8006110C: nop

    // 0x80061110: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80061114: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061118: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006111C: nop

    // 0x80061120: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80061124: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80061128: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8006112C: addiu       $a3, $t1, -0x78
    ctx->r7 = ADD32(ctx->r9, -0X78);
    // 0x80061130: jal         0x8006126C
    // 0x80061134: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    func_8006126C(rdram, ctx);
        goto after_4;
    // 0x80061134: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    after_4:
L_80061138:
    // 0x80061138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8006113C:
    // 0x8006113C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80061140: jr          $ra
    // 0x80061144: nop

    return;
    // 0x80061144: nop

;}
RECOMP_FUNC void func_80061148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061148: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8006114C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80061150: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80061154: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80061158: beq         $at, $zero, L_800611DC
    if (ctx->r1 == 0) {
        // 0x8006115C: negu        $t1, $a0
        ctx->r9 = SUB32(0, ctx->r4);
            goto L_800611DC;
    }
    // 0x8006115C: negu        $t1, $a0
    ctx->r9 = SUB32(0, ctx->r4);
    // 0x80061160: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80061164: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80061168: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8006116C: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x80061170: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x80061174: subu        $t9, $a0, $t0
    ctx->r25 = SUB32(ctx->r4, ctx->r8);
    // 0x80061178: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006117C: subu        $t3, $v0, $t0
    ctx->r11 = SUB32(ctx->r2, ctx->r8);
    // 0x80061180: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80061184: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x80061188: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006118C: mflo        $t2
    ctx->r10 = lo;
    // 0x80061190: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80061194: nop

    // 0x80061198: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006119C: nop

    // 0x800611A0: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800611A4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800611A8: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800611AC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800611B0: nop

    // 0x800611B4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800611B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800611BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800611C0: nop

    // 0x800611C4: cvt.w.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800611C8: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x800611CC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800611D0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x800611D4: jr          $ra
    // 0x800611D8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    return;
    // 0x800611D8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
L_800611DC:
    // 0x800611DC: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800611E0: beq         $at, $zero, L_80061264
    if (ctx->r1 == 0) {
        // 0x800611E4: nop
    
            goto L_80061264;
    }
    // 0x800611E4: nop

    // 0x800611E8: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x800611EC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800611F0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800611F4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800611F8: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x800611FC: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x80061200: subu        $t9, $t1, $t0
    ctx->r25 = SUB32(ctx->r9, ctx->r8);
    // 0x80061204: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061208: subu        $t3, $v0, $t0
    ctx->r11 = SUB32(ctx->r2, ctx->r8);
    // 0x8006120C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80061210: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80061214: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80061218: mflo        $t2
    ctx->r10 = lo;
    // 0x8006121C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80061220: nop

    // 0x80061224: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80061228: nop

    // 0x8006122C: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80061230: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80061234: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80061238: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8006123C: nop

    // 0x80061240: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80061244: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061248: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006124C: nop

    // 0x80061250: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80061254: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80061258: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8006125C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80061260: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
L_80061264:
    // 0x80061264: jr          $ra
    // 0x80061268: nop

    return;
    // 0x80061268: nop

;}
RECOMP_FUNC void func_8006126C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006126C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80061270: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80061274: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80061278: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8006127C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80061280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80061284: lh          $t8, -0x7680($t7)
    ctx->r24 = MEM_H(ctx->r15, -0X7680);
    // 0x80061288: addiu       $t7, $a0, 0x5
    ctx->r15 = ADD32(ctx->r4, 0X5);
    // 0x8006128C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80061290: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061294: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80061298: lwc1        $f1, -0x6680($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X6680);
    // 0x8006129C: lwc1        $f0, -0x667C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X667C);
    // 0x800612A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800612A4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x800612A8: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x800612AC: lwc1        $f13, -0x6678($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X6678);
    // 0x800612B0: lwc1        $f12, -0x6674($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6674);
    // 0x800612B4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800612B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800612BC: addiu       $t6, $t6, -0x2650
    ctx->r14 = ADD32(ctx->r14, -0X2650);
    // 0x800612C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800612C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800612C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800612CC: addu        $t3, $t9, $t6
    ctx->r11 = ADD32(ctx->r25, ctx->r14);
    // 0x800612D0: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x800612D4: addiu       $t9, $a2, 0x5
    ctx->r25 = ADD32(ctx->r6, 0X5);
    // 0x800612D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800612DC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800612E0: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x800612E4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x800612E8: addiu       $v1, $zero, -0x6
    ctx->r3 = ADD32(0, -0X6);
    // 0x800612EC: subu        $t7, $v1, $a1
    ctx->r15 = SUB32(ctx->r3, ctx->r5);
    // 0x800612F0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x800612F4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800612F8: subu        $t9, $v1, $a3
    ctx->r25 = SUB32(ctx->r3, ctx->r7);
    // 0x800612FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80061300: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80061304: nop

    // 0x80061308: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006130C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061310: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061314: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80061318: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8006131C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061320: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80061324: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80061328: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8006132C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80061330: subu        $t7, $a2, $a0
    ctx->r15 = SUB32(ctx->r6, ctx->r4);
    // 0x80061334: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x80061338: subu        $v1, $a2, $a0
    ctx->r3 = SUB32(ctx->r6, ctx->r4);
    // 0x8006133C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061340: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80061344: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80061348: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006134C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80061350: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80061354: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80061358: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8006135C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061360: nop

    // 0x80061364: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80061368: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8006136C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80061370: subu        $v0, $a3, $a1
    ctx->r2 = SUB32(ctx->r7, ctx->r5);
    // 0x80061374: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80061378: nop

    // 0x8006137C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80061380: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x80061384: nop

    // 0x80061388: bc1f        L_800613AC
    if (!c1cs) {
        // 0x8006138C: nop
    
            goto L_800613AC;
    }
    // 0x8006138C: nop

    // 0x80061390: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80061394: nop

    // 0x80061398: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006139C: c.eq.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl == ctx->f16.fl;
    // 0x800613A0: nop

    // 0x800613A4: bc1t        L_800617F4
    if (c1cs) {
        // 0x800613A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800617F4;
    }
    // 0x800613A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800613AC:
    // 0x800613AC: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x800613B0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800613B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800613B8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x800613BC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x800613C0: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800613C4: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x800613C8: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x800613CC: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800613D0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x800613D4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x800613D8: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x800613DC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800613E0: jal         0x8007FA40
    // 0x800613E4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x800613E4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x800613E8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800613EC: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x800613F0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800613F4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800613F8: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800613FC: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80061400: mflo        $t8
    ctx->r24 = lo;
    // 0x80061404: nop

    // 0x80061408: nop

    // 0x8006140C: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80061410: div.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80061414: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x80061418: mflo        $t9
    ctx->r25 = lo;
    // 0x8006141C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80061420: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80061424: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x80061428: jal         0x8007FA40
    // 0x8006142C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8006142C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x80061430: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80061434: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80061438: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8006143C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80061440: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x80061444: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x80061448: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x8006144C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80061450: bc1f        L_80061468
    if (!c1cs) {
        // 0x80061454: nop
    
            goto L_80061468;
    }
    // 0x80061454: nop

    // 0x80061458: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8006145C: b           L_8006148C
    // 0x80061460: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
        goto L_8006148C;
    // 0x80061460: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x80061464: nop

L_80061468:
    // 0x80061468: div.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8006146C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80061470: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80061474: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80061478: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006147C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80061480: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80061484: nop

    // 0x80061488: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
L_8006148C:
    // 0x8006148C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80061490: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80061494: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x80061498: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006149C: mtc1        $a1, $f8
    ctx->f8.u32l = ctx->r5;
    // 0x800614A0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800614A4: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x800614A8: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800614AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800614B0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800614B4: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x800614B8: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
    // 0x800614BC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800614C0: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x800614C4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800614C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800614CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800614D0: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x800614D4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800614D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800614DC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800614E0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800614E4: sh          $t8, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r24;
    // 0x800614E8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x800614EC: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800614F0: sb          $v0, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r2;
    // 0x800614F4: addiu       $t5, $zero, 0x204
    ctx->r13 = ADD32(0, 0X204);
    // 0x800614F8: mul.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800614FC: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x80061500: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80061504: nop

    // 0x80061508: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8006150C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061510: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061514: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80061518: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8006151C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061520: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80061524: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80061528: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8006152C: sh          $t6, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r14;
    // 0x80061530: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061534: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80061538: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006153C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061540: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80061544: mtc1        $a2, $f10
    ctx->f10.u32l = ctx->r6;
    // 0x80061548: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8006154C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80061550: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061554: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80061558: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8006155C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061560: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80061564: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80061568: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006156C: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80061570: sh          $t8, -0x10($t0)
    MEM_H(-0X10, ctx->r8) = ctx->r24;
    // 0x80061574: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80061578: sb          $v0, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r2;
    // 0x8006157C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061580: sh          $t6, -0xE($t0)
    MEM_H(-0XE, ctx->r8) = ctx->r14;
    // 0x80061584: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80061588: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8006158C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80061590: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80061594: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80061598: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x8006159C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800615A0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x800615A4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800615A8: nop

    // 0x800615AC: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800615B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800615B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800615B8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800615BC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800615C0: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800615C4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x800615C8: cvt.w.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800615CC: sh          $t6, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r14;
    // 0x800615D0: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x800615D4: nop

    // 0x800615D8: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x800615DC: beq         $a0, $zero, L_80061628
    if (ctx->r4 == 0) {
        // 0x800615E0: nop
    
            goto L_80061628;
    }
    // 0x800615E0: nop

    // 0x800615E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800615E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800615EC: sub.s       $f10, $f16, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x800615F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800615F4: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x800615F8: nop

    // 0x800615FC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80061600: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x80061604: nop

    // 0x80061608: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x8006160C: bne         $a0, $zero, L_80061620
    if (ctx->r4 != 0) {
        // 0x80061610: nop
    
            goto L_80061620;
    }
    // 0x80061610: nop

    // 0x80061614: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x80061618: b           L_80061638
    // 0x8006161C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_80061638;
    // 0x8006161C: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_80061620:
    // 0x80061620: b           L_80061638
    // 0x80061624: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_80061638;
    // 0x80061624: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_80061628:
    // 0x80061628: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x8006162C: nop

    // 0x80061630: bltz        $a0, L_80061620
    if (SIGNED(ctx->r4) < 0) {
        // 0x80061634: nop
    
            goto L_80061620;
    }
    // 0x80061634: nop

L_80061638:
    // 0x80061638: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8006163C: sb          $a0, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r4;
    // 0x80061640: add.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x80061644: lui         $t4, 0xBF00
    ctx->r12 = S32(0XBF00 << 16);
    // 0x80061648: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8006164C: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x80061650: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80061654: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061658: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006165C: nop

    // 0x80061660: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80061664: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80061668: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8006166C: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x80061670: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061674: sb          $a0, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r4;
    // 0x80061678: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x8006167C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80061680: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80061684: nop

    // 0x80061688: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006168C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80061690: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80061694: nop

    // 0x80061698: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006169C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800616A0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800616A4: sh          $t7, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r15;
    // 0x800616A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800616AC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800616B0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800616B4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800616B8: addiu       $t6, $t6, 0x4CA0
    ctx->r14 = ADD32(ctx->r14, 0X4CA0);
    // 0x800616BC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800616C0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800616C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800616C8: lui         $t9, 0x2
    ctx->r25 = S32(0X2 << 16);
    // 0x800616CC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800616D0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800616D4: ori         $t9, $t9, 0x3000
    ctx->r25 = ctx->r25 | 0X3000;
    // 0x800616D8: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x800616DC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800616E0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800616E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800616E8: lui         $t7, 0xB700
    ctx->r15 = S32(0XB700 << 16);
    // 0x800616EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800616F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800616F4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800616F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800616FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80061700: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80061704: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80061708: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8006170C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80061710: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80061714: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80061718: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x8006171C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80061720: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80061724: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80061728: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x8006172C: ori         $t8, $t8, 0x4340
    ctx->r24 = ctx->r24 | 0X4340;
    // 0x80061730: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80061734: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80061738: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8006173C: lui         $t7, 0xFFFE
    ctx->r15 = S32(0XFFFE << 16);
    // 0x80061740: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80061744: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80061748: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8006174C: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80061750: ori         $t7, $t7, 0x793C
    ctx->r15 = ctx->r15 | 0X793C;
    // 0x80061754: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80061758: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8006175C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80061760: lui         $t6, 0x13
    ctx->r14 = S32(0X13 << 16);
    // 0x80061764: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80061768: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8006176C: lui         $t9, 0x103
    ctx->r25 = S32(0X103 << 16);
    // 0x80061770: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80061774: addiu       $t6, $t6, 0x1628
    ctx->r14 = ADD32(ctx->r14, 0X1628);
    // 0x80061778: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8006177C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80061780: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80061784: lui         $t9, 0x13
    ctx->r25 = S32(0X13 << 16);
    // 0x80061788: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8006178C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80061790: lui         $t8, 0x102
    ctx->r24 = S32(0X102 << 16);
    // 0x80061794: ori         $t8, $t8, 0x40
    ctx->r24 = ctx->r24 | 0X40;
    // 0x80061798: addiu       $t9, $t9, 0x1668
    ctx->r25 = ADD32(ctx->r25, 0X1668);
    // 0x8006179C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800617A0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800617A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800617A8: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x800617AC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800617B0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800617B4: ori         $t7, $t7, 0x103F
    ctx->r15 = ctx->r15 | 0X103F;
    // 0x800617B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800617BC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x800617C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800617C4: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x800617C8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800617CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800617D0: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800617D4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800617D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800617DC: ori         $t6, $t6, 0x604
    ctx->r14 = ctx->r14 | 0X604;
    // 0x800617E0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800617E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800617E8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800617EC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800617F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800617F4:
    // 0x800617F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800617F8: jr          $ra
    // 0x800617FC: nop

    return;
    // 0x800617FC: nop

;}
RECOMP_FUNC void func_80061800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061800: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061804: lwc1        $f12, -0x23C8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C8);
    // 0x80061808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006180C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80061810: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80061814: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80061818: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x8006181C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061820: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80061824: swc1        $f8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f8.u32l;
    // 0x80061828: lwc1        $f16, -0x666C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X666C);
    // 0x8006182C: lwc1        $f17, -0x6670($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6670);
    // 0x80061830: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80061834: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80061838: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006183C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x80061840: jal         0x80081040
    // 0x80061844: swc1        $f12, -0x23C8($at)
    MEM_W(-0X23C8, ctx->r1) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80061844: swc1        $f12, -0x23C8($at)
    MEM_W(-0X23C8, ctx->r1) = ctx->f12.u32l;
    after_0:
    // 0x80061848: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006184C: lwc1        $f12, -0x23C8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C8);
    // 0x80061850: jal         0x80080E80
    // 0x80061854: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80061854: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80061858: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8006185C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061860: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80061864: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80061868: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8006186C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80061870: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80061874: mul.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80061878: cvt.d.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.d = CVT_D_S(ctx->f16.fl);
    // 0x8006187C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80061880: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80061884: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80061888: mul.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8006188C: cvt.s.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f10.fl = CVT_S_D(ctx->f10.d);
    // 0x80061890: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80061894: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80061898: jal         0x80028FD4
    // 0x8006189C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_80028FD4(rdram, ctx);
        goto after_2;
    // 0x8006189C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x800618A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800618A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800618A8: jr          $ra
    // 0x800618AC: nop

    return;
    // 0x800618AC: nop

;}
RECOMP_FUNC void func_800618B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800618B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800618B4: lwc1        $f12, -0x23C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C4);
    // 0x800618B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800618BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800618C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800618C4: lwc1        $f4, 0x40($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X40);
    // 0x800618C8: lwc1        $f9, -0x6668($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6668);
    // 0x800618CC: lwc1        $f8, -0x6664($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6664);
    // 0x800618D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800618D4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800618D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800618DC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800618E0: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x800618E4: lwc1        $f4, -0x665C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X665C);
    // 0x800618E8: lwc1        $f5, -0x6660($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X6660);
    // 0x800618EC: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x800618F0: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800618F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800618F8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x800618FC: jal         0x80081040
    // 0x80061900: swc1        $f12, -0x23C4($at)
    MEM_W(-0X23C4, ctx->r1) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80061900: swc1        $f12, -0x23C4($at)
    MEM_W(-0X23C4, ctx->r1) = ctx->f12.u32l;
    after_0:
    // 0x80061904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061908: lwc1        $f12, -0x23C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C4);
    // 0x8006190C: jal         0x80080E80
    // 0x80061910: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80061910: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80061914: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80061918: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8006191C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80061920: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80061924: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80061928: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8006192C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80061930: mul.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80061934: cvt.d.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.d = CVT_D_S(ctx->f16.fl);
    // 0x80061938: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006193C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80061940: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80061944: mul.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80061948: cvt.s.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f10.fl = CVT_S_D(ctx->f10.d);
    // 0x8006194C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80061950: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80061954: jal         0x80028FD4
    // 0x80061958: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_80028FD4(rdram, ctx);
        goto after_2;
    // 0x80061958: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x8006195C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80061960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80061964: jr          $ra
    // 0x80061968: nop

    return;
    // 0x80061968: nop

;}
RECOMP_FUNC void func_8006196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006196C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80061970: bne         $a0, $zero, L_80061998
    if (ctx->r4 != 0) {
        // 0x80061974: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80061998;
    }
    // 0x80061974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80061978: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8006197C: jal         0x80025A10
    // 0x80061980: addiu       $a0, $a0, 0x3CA0
    ctx->r4 = ADD32(ctx->r4, 0X3CA0);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x80061980: addiu       $a0, $a0, 0x3CA0
    ctx->r4 = ADD32(ctx->r4, 0X3CA0);
    after_0:
    // 0x80061984: lui         $t6, 0x8036
    ctx->r14 = S32(0X8036 << 16);
    // 0x80061988: addiu       $t6, $t6, -0x2A00
    ctx->r14 = ADD32(ctx->r14, -0X2A00);
    // 0x8006198C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80061990: b           L_80061A00
    // 0x80061994: sw          $t6, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r14;
        goto L_80061A00;
    // 0x80061994: sw          $t6, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r14;
L_80061998:
    // 0x80061998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006199C: bne         $a0, $at, L_800619C8
    if (ctx->r4 != ctx->r1) {
        // 0x800619A0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800619C8;
    }
    // 0x800619A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800619A4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800619A8: jal         0x80025A10
    // 0x800619AC: addiu       $a0, $a0, 0x3CA8
    ctx->r4 = ADD32(ctx->r4, 0X3CA8);
    func_80025A10(rdram, ctx);
        goto after_1;
    // 0x800619AC: addiu       $a0, $a0, 0x3CA8
    ctx->r4 = ADD32(ctx->r4, 0X3CA8);
    after_1:
    // 0x800619B0: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x800619B4: addiu       $t7, $t7, -0x5600
    ctx->r15 = ADD32(ctx->r15, -0X5600);
    // 0x800619B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800619BC: b           L_80061A00
    // 0x800619C0: sw          $t7, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r15;
        goto L_80061A00;
    // 0x800619C0: sw          $t7, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r15;
    // 0x800619C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_800619C8:
    // 0x800619C8: bne         $a0, $at, L_80061A00
    if (ctx->r4 != ctx->r1) {
        // 0x800619CC: lui         $t8, 0x4000
        ctx->r24 = S32(0X4000 << 16);
            goto L_80061A00;
    }
    // 0x800619CC: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x800619D0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800619D4: lui         $t9, 0x8038
    ctx->r25 = S32(0X8038 << 16);
    // 0x800619D8: addiu       $a0, $a0, 0x36F8
    ctx->r4 = ADD32(ctx->r4, 0X36F8);
    // 0x800619DC: ori         $t8, $t8, 0x12
    ctx->r24 = ctx->r24 | 0X12;
    // 0x800619E0: addiu       $t9, $t9, 0x6A00
    ctx->r25 = ADD32(ctx->r25, 0X6A00);
    // 0x800619E4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800619E8: jal         0x80025A10
    // 0x800619EC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x800619EC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    after_2:
    // 0x800619F0: lui         $t0, 0x8038
    ctx->r8 = S32(0X8038 << 16);
    // 0x800619F4: addiu       $t0, $t0, 0x6A00
    ctx->r8 = ADD32(ctx->r8, 0X6A00);
    // 0x800619F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800619FC: sw          $t0, 0x36F0($at)
    MEM_W(0X36F0, ctx->r1) = ctx->r8;
L_80061A00:
    // 0x80061A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80061A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80061A08: jr          $ra
    // 0x80061A0C: nop

    return;
    // 0x80061A0C: nop

;}
RECOMP_FUNC void func_80061A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061A10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80061A14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80061A18: addiu       $a0, $zero, 0xF5
    ctx->r4 = ADD32(0, 0XF5);
    // 0x80061A1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80061A20: jal         0x80028EAC
    // 0x80061A24: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80028EAC(rdram, ctx);
        goto after_0;
    // 0x80061A24: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
    // 0x80061A28: jal         0x80061FC0
    // 0x80061A2C: nop

    func_80061FC0(rdram, ctx);
        goto after_1;
    // 0x80061A2C: nop

    after_1:
    // 0x80061A30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80061A34: lui         $a2, 0xC53B
    ctx->r6 = S32(0XC53B << 16);
    // 0x80061A38: lui         $a3, 0xC59C
    ctx->r7 = S32(0XC59C << 16);
    // 0x80061A3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80061A40: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80061A44: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80061A48: jal         0x80062B1C
    // 0x80061A4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80062B1C(rdram, ctx);
        goto after_2;
    // 0x80061A4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80061A50: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80061A54: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80061A58: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80061A5C: lw          $t7, 0x36F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X36F0);
    // 0x80061A60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80061A64: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x80061A68: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x80061A6C: addiu       $t8, $t8, 0x1800
    ctx->r24 = ADD32(ctx->r24, 0X1800);
    // 0x80061A70: addiu       $t6, $t6, 0x4FF0
    ctx->r14 = ADD32(ctx->r14, 0X4FF0);
    // 0x80061A74: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80061A78: lui         $a2, 0xC489
    ctx->r6 = S32(0XC489 << 16);
    // 0x80061A7C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80061A80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80061A84: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80061A88: addiu       $a3, $zero, 0x350
    ctx->r7 = ADD32(0, 0X350);
    // 0x80061A8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80061A90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80061A94: jal         0x80028C74
    // 0x80061A98: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80028C74(rdram, ctx);
        goto after_3;
    // 0x80061A98: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_3:
    // 0x80061A9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80061AA0: nop

    // 0x80061AA4: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x80061AA8: swc1        $f0, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f0.u32l;
    // 0x80061AAC: swc1        $f0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f0.u32l;
    // 0x80061AB0: swc1        $f0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f0.u32l;
    // 0x80061AB4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80061AB8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80061ABC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80061AC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80061AC4: jr          $ra
    // 0x80061AC8: nop

    return;
    // 0x80061AC8: nop

;}
RECOMP_FUNC void func_80061ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061ACC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80061AD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80061AD4: addiu       $a0, $zero, 0xF5
    ctx->r4 = ADD32(0, 0XF5);
    // 0x80061AD8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80061ADC: jal         0x80028EAC
    // 0x80061AE0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80028EAC(rdram, ctx);
        goto after_0;
    // 0x80061AE0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_0:
    // 0x80061AE4: jal         0x80061FC0
    // 0x80061AE8: nop

    func_80061FC0(rdram, ctx);
        goto after_1;
    // 0x80061AE8: nop

    after_1:
    // 0x80061AEC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061AF0: lui         $a2, 0xC53B
    ctx->r6 = S32(0XC53B << 16);
    // 0x80061AF4: lui         $a3, 0xC59C
    ctx->r7 = S32(0XC59C << 16);
    // 0x80061AF8: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80061AFC: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x80061B00: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80061B04: jal         0x80062B1C
    // 0x80061B08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80062B1C(rdram, ctx);
        goto after_2;
    // 0x80061B08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80061B0C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80061B10: lw          $t7, 0x36F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X36F0);
    // 0x80061B14: lui         $at, 0xC387
    ctx->r1 = S32(0XC387 << 16);
    // 0x80061B18: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x80061B1C: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x80061B20: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061B24: addiu       $t8, $t8, 0x18B0
    ctx->r24 = ADD32(ctx->r24, 0X18B0);
    // 0x80061B28: addiu       $t6, $t6, -0x6D50
    ctx->r14 = ADD32(ctx->r14, -0X6D50);
    // 0x80061B2C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80061B30: lui         $a2, 0xC489
    ctx->r6 = S32(0XC489 << 16);
    // 0x80061B34: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80061B38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80061B3C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80061B40: addiu       $a3, $zero, 0x350
    ctx->r7 = ADD32(0, 0X350);
    // 0x80061B44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80061B48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80061B4C: jal         0x80028C74
    // 0x80061B50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80028C74(rdram, ctx);
        goto after_3;
    // 0x80061B50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_3:
    // 0x80061B54: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061B58: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80061B5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80061B60: swc1        $f14, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f14.u32l;
    // 0x80061B64: swc1        $f14, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f14.u32l;
    // 0x80061B68: swc1        $f14, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f14.u32l;
    // 0x80061B6C: swc1        $f14, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f14.u32l;
    // 0x80061B70: swc1        $f14, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f14.u32l;
    // 0x80061B74: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x80061B78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80061B7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80061B80: jr          $ra
    // 0x80061B84: nop

    return;
    // 0x80061B84: nop

;}
RECOMP_FUNC void func_80061C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061C34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061C38: lwc1        $f12, -0x23C0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C0);
    // 0x80061C3C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061C40: lwc1        $f7, -0x6658($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6658);
    // 0x80061C44: lwc1        $f6, -0x6654($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6654);
    // 0x80061C48: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80061C4C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80061C50: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80061C54: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80061C58: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80061C5C: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80061C60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x80061C64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061C68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80061C6C: swc1        $f12, -0x23C0($at)
    MEM_W(-0X23C0, ctx->r1) = ctx->f12.u32l;
    // 0x80061C70: jal         0x80081040
    // 0x80061C74: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    func_80081040(rdram, ctx);
        goto after_0;
    // 0x80061C74: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    after_0:
    // 0x80061C78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061C7C: lwc1        $f12, -0x23C0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X23C0);
    // 0x80061C80: jal         0x80080E80
    // 0x80061C84: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x80061C84: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80061C88: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80061C8C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061C90: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80061C94: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80061C98: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80061C9C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80061CA0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80061CA4: mul.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80061CA8: cvt.d.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.d = CVT_D_S(ctx->f16.fl);
    // 0x80061CAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80061CB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80061CB4: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x80061CB8: mul.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80061CBC: cvt.s.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f10.fl = CVT_S_D(ctx->f10.d);
    // 0x80061CC0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80061CC4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80061CC8: jal         0x80028FD4
    // 0x80061CCC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    func_80028FD4(rdram, ctx);
        goto after_2;
    // 0x80061CCC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80061CD0: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x80061CD4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80061CD8: blez        $v0, L_80061CE8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80061CDC: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_80061CE8;
    }
    // 0x80061CDC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x80061CE0: b           L_80061E6C
    // 0x80061CE4: sw          $t7, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r15;
        goto L_80061E6C;
    // 0x80061CE4: sw          $t7, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r15;
L_80061CE8:
    // 0x80061CE8: lw          $t8, 0x68($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X68);
    // 0x80061CEC: addiu       $a2, $s0, 0xC
    ctx->r6 = ADD32(ctx->r16, 0XC);
    // 0x80061CF0: beq         $t8, $zero, L_80061DB8
    if (ctx->r24 == 0) {
        // 0x80061CF4: addiu       $a3, $s0, 0x10
        ctx->r7 = ADD32(ctx->r16, 0X10);
            goto L_80061DB8;
    }
    // 0x80061CF4: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x80061CF8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x80061CFC: nop

    // 0x80061D00: beq         $v0, $zero, L_80061D88
    if (ctx->r2 == 0) {
        // 0x80061D04: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80061D88;
    }
    // 0x80061D04: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80061D08: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80061D0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80061D10: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80061D14: lwc1        $f16, 0x8C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80061D18: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80061D1C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80061D20: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80061D24: blez        $v0, L_80061D5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80061D28: swc1        $f6, 0x8C($s0)
        MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
            goto L_80061D5C;
    }
    // 0x80061D28: swc1        $f6, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f6.u32l;
    // 0x80061D2C: lwc1        $f8, 0x8C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80061D30: lwc1        $f19, -0x6650($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6650);
    // 0x80061D34: lwc1        $f18, -0x664C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X664C);
    // 0x80061D38: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80061D3C: c.le.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d <= ctx->f10.d;
    // 0x80061D40: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80061D44: bc1f        L_80061D5C
    if (!c1cs) {
        // 0x80061D48: nop
    
            goto L_80061D5C;
    }
    // 0x80061D48: nop

    // 0x80061D4C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80061D50: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80061D54: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x80061D58: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
L_80061D5C:
    // 0x80061D5C: bgez        $v0, L_80061D88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80061D60: nop
    
            goto L_80061D88;
    }
    // 0x80061D60: nop

    // 0x80061D64: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x80061D68: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x80061D6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80061D70: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80061D74: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x80061D78: nop

    // 0x80061D7C: bc1f        L_80061D88
    if (!c1cs) {
        // 0x80061D80: nop
    
            goto L_80061D88;
    }
    // 0x80061D80: nop

    // 0x80061D84: swc1        $f14, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f14.u32l;
L_80061D88:
    // 0x80061D88: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x80061D8C: nop

    // 0x80061D90: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x80061D94: bne         $v0, $zero, L_80061E6C
    if (ctx->r2 != 0) {
        // 0x80061D98: sw          $t1, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->r9;
            goto L_80061E6C;
    }
    // 0x80061D98: sw          $t1, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r9;
    // 0x80061D9C: jal         0x80028E3C
    // 0x80061DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80028E3C(rdram, ctx);
        goto after_3;
    // 0x80061DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80061DA4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80061DA8: jal         0x80063B88
    // 0x80061DAC: nop

    func_80063B88(rdram, ctx);
        goto after_4;
    // 0x80061DAC: nop

    after_4:
    // 0x80061DB0: b           L_80061E70
    // 0x80061DB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80061E70;
    // 0x80061DB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80061DB8:
    // 0x80061DB8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80061DBC: lw          $a1, 0x6C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X6C);
    // 0x80061DC0: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x80061DC4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x80061DC8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80061DCC: addiu       $t4, $s0, 0x14
    ctx->r12 = ADD32(ctx->r16, 0X14);
    // 0x80061DD0: addiu       $t5, $s0, 0x24
    ctx->r13 = ADD32(ctx->r16, 0X24);
    // 0x80061DD4: addiu       $t6, $s0, 0x28
    ctx->r14 = ADD32(ctx->r16, 0X28);
    // 0x80061DD8: addiu       $t7, $s0, 0x2C
    ctx->r15 = ADD32(ctx->r16, 0X2C);
    // 0x80061DDC: addiu       $t8, $s0, 0x30
    ctx->r24 = ADD32(ctx->r16, 0X30);
    // 0x80061DE0: addiu       $t9, $s0, 0x34
    ctx->r25 = ADD32(ctx->r16, 0X34);
    // 0x80061DE4: addiu       $t0, $s0, 0x38
    ctx->r8 = ADD32(ctx->r16, 0X38);
    // 0x80061DE8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80061DEC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80061DF0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80061DF4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80061DF8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80061DFC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80061E00: jal         0x800638F0
    // 0x80061E04: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_800638F0(rdram, ctx);
        goto after_5;
    // 0x80061E04: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_5:
    // 0x80061E08: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80061E0C: lwc1        $f18, 0x80($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X80);
    // 0x80061E10: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80061E14: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80061E18: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x80061E1C: lwc1        $f18, 0x88($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X88);
    // 0x80061E20: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80061E24: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x80061E28: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80061E2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80061E30: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80061E34: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x80061E38: swc1        $f16, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f16.u32l;
    // 0x80061E3C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80061E40: nop

    // 0x80061E44: lw          $t2, 0x20($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X20);
    // 0x80061E48: nop

    // 0x80061E4C: beq         $t2, $zero, L_80061E5C
    if (ctx->r10 == 0) {
        // 0x80061E50: nop
    
            goto L_80061E5C;
    }
    // 0x80061E50: nop

    // 0x80061E54: b           L_80061E6C
    // 0x80061E58: sw          $t3, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r11;
        goto L_80061E6C;
    // 0x80061E58: sw          $t3, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r11;
L_80061E5C:
    // 0x80061E5C: lw          $t4, 0x6C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C);
    // 0x80061E60: nop

    // 0x80061E64: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80061E68: sw          $t5, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r13;
L_80061E6C:
    // 0x80061E6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80061E70:
    // 0x80061E70: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80061E74: jr          $ra
    // 0x80061E78: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80061E78: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80061E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80061E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80061E84: jal         0x800642D0
    // 0x80061E88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800642D0(rdram, ctx);
        goto after_0;
    // 0x80061E88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80061E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80061E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80061E94: jr          $ra
    // 0x80061E98: nop

    return;
    // 0x80061E98: nop

;}
RECOMP_FUNC void func_80061E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061E9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80061EA0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80061EA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80061EA8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80061EAC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80061EB0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80061EB4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80061EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80061EBC: jal         0x80028EAC
    // 0x80061EC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80028EAC(rdram, ctx);
        goto after_0;
    // 0x80061EC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80061EC4: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x80061EC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80061ECC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80061ED0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80061ED4: lui         $t9, 0x8006
    ctx->r25 = S32(0X8006 << 16);
    // 0x80061ED8: addiu       $t9, $t9, 0x1C34
    ctx->r25 = ADD32(ctx->r25, 0X1C34);
    // 0x80061EDC: lui         $a2, 0x4489
    ctx->r6 = S32(0X4489 << 16);
    // 0x80061EE0: ori         $t6, $a3, 0x100
    ctx->r14 = ctx->r7 | 0X100;
    // 0x80061EE4: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80061EE8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80061EEC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80061EF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80061EF4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80061EF8: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80061EFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80061F00: jal         0x80028C74
    // 0x80061F04: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80028C74(rdram, ctx);
        goto after_1;
    // 0x80061F04: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_1:
    // 0x80061F08: bne         $v0, $zero, L_80061F18
    if (ctx->r2 != 0) {
        // 0x80061F0C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80061F18;
    }
    // 0x80061F0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80061F10: b           L_80061FA8
    // 0x80061F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80061FA8;
    // 0x80061F14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80061F18:
    // 0x80061F18: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80061F1C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80061F20: bgez        $a1, L_80061F40
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80061F24: nop
    
            goto L_80061F40;
    }
    // 0x80061F24: nop

    // 0x80061F28: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80061F2C: jal         0x80063B50
    // 0x80061F30: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80063B50(rdram, ctx);
        goto after_2;
    // 0x80061F30: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_2:
    // 0x80061F34: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80061F38: b           L_80061F54
    // 0x80061F3C: sw          $v0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r2;
        goto L_80061F54;
    // 0x80061F3C: sw          $v0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r2;
L_80061F40:
    // 0x80061F40: jal         0x80063B00
    // 0x80061F44: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80063B00(rdram, ctx);
        goto after_3;
    // 0x80061F44: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_3:
    // 0x80061F48: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80061F4C: nop

    // 0x80061F50: sw          $v0, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r2;
L_80061F54:
    // 0x80061F54: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x80061F58: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x80061F5C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x80061F60: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80061F64: sw          $t0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->r8;
    // 0x80061F68: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80061F6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80061F70: sw          $t1, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r9;
    // 0x80061F74: lh          $t2, 0x5E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X5E);
    // 0x80061F78: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80061F7C: sw          $t2, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->r10;
    // 0x80061F80: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80061F84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80061F88: swc1        $f4, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f4.u32l;
    // 0x80061F8C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80061F90: nop

    // 0x80061F94: swc1        $f6, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f6.u32l;
    // 0x80061F98: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80061F9C: sw          $t3, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r11;
    // 0x80061FA0: swc1        $f10, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f10.u32l;
    // 0x80061FA4: swc1        $f8, 0x88($v1)
    MEM_W(0X88, ctx->r3) = ctx->f8.u32l;
L_80061FA8:
    // 0x80061FA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80061FAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80061FB0: jr          $ra
    // 0x80061FB4: nop

    return;
    // 0x80061FB4: nop

;}
RECOMP_FUNC void func_80061FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061FB8: jr          $ra
    // 0x80061FBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80061FBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80061FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061FC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80061FC4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x80061FC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80061FCC: lw          $t7, 0x36F0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X36F0);
    // 0x80061FD0: lui         $t6, 0x601
    ctx->r14 = S32(0X601 << 16);
    // 0x80061FD4: lui         $t8, 0x8006
    ctx->r24 = S32(0X8006 << 16);
    // 0x80061FD8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80061FDC: addiu       $t8, $t8, 0x1FB8
    ctx->r24 = ADD32(ctx->r24, 0X1FB8);
    // 0x80061FE0: addiu       $t6, $t6, -0x5948
    ctx->r14 = ADD32(ctx->r14, -0X5948);
    // 0x80061FE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80061FE8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80061FEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80061FF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80061FF4: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x80061FF8: addiu       $a3, $zero, 0x108
    ctx->r7 = ADD32(0, 0X108);
    // 0x80061FFC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x80062000: jal         0x80028C74
    // 0x80062004: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80028C74(rdram, ctx);
        goto after_0;
    // 0x80062004: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x80062008: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8006200C: nop

    // 0x80062010: swc1        $f12, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f12.u32l;
    // 0x80062014: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    // 0x80062018: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x8006201C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80062020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80062024: jr          $ra
    // 0x80062028: nop

    return;
    // 0x80062028: nop

;}
RECOMP_FUNC void func_8006202C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006202C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062030: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80062034: lui         $t6, 0x4000
    ctx->r14 = S32(0X4000 << 16);
    // 0x80062038: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8006203C: addiu       $a0, $a0, 0x3700
    ctx->r4 = ADD32(ctx->r4, 0X3700);
    // 0x80062040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062044: ori         $t6, $t6, 0x23
    ctx->r14 = ctx->r14 | 0X23;
    // 0x80062048: addiu       $t7, $t7, 0x1800
    ctx->r15 = ADD32(ctx->r15, 0X1800);
    // 0x8006204C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80062050: jal         0x80025A10
    // 0x80062054: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x80062054: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    after_0:
    // 0x80062058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006205C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80062060: jr          $ra
    // 0x80062064: nop

    return;
    // 0x80062064: nop

;}
RECOMP_FUNC void func_80062068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062068: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006206C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80062070: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80062074: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80062078: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006207C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062080: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80062084: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x80062088: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x8006208C: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062090: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80062094: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062098: addiu       $a0, $a0, 0x4BD0
    ctx->r4 = ADD32(ctx->r4, 0X4BD0);
    // 0x8006209C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800620A0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800620A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800620A8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x800620AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800620B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800620B4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800620B8: jal         0x80061E9C
    // 0x800620BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x800620BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800620C0: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800620C4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800620C8: addiu       $s0, $s0, 0x3708
    ctx->r16 = ADD32(ctx->r16, 0X3708);
    // 0x800620CC: addiu       $s1, $s1, -0x25C8
    ctx->r17 = ADD32(ctx->r17, -0X25C8);
    // 0x800620D0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800620D4: addiu       $s1, $s1, 0x120
    ctx->r17 = ADD32(ctx->r17, 0X120);
    // 0x800620D8: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x800620DC: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800620E0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800620E4: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x800620E8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800620EC: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800620F0: addiu       $a0, $a0, 0x5948
    ctx->r4 = ADD32(ctx->r4, 0X5948);
    // 0x800620F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800620F8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800620FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062100: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062104: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062108: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8006210C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80062110: jal         0x80061E9C
    // 0x80062114: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x80062114: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
    // 0x80062118: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8006211C: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062120: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062124: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062128: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8006212C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80062130: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062134: addiu       $a0, $a0, 0x6540
    ctx->r4 = ADD32(ctx->r4, 0X6540);
    // 0x80062138: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8006213C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062140: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062144: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062148: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8006214C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80062150: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80062154: jal         0x80061E9C
    // 0x80062158: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x80062158: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
    // 0x8006215C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062160: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062164: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062168: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8006216C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80062170: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80062174: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80062178: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8006217C: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062180: addiu       $a0, $a0, 0x6C78
    ctx->r4 = ADD32(ctx->r4, 0X6C78);
    // 0x80062184: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062188: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006218C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062190: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80062198: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8006219C: jal         0x80061E9C
    // 0x800621A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x800621A0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_3:
    // 0x800621A4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800621A8: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x800621AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800621B0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x800621B4: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x800621B8: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800621BC: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800621C0: jr          $ra
    // 0x800621C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800621C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800621C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800621C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800621CC: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x800621D0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800621D4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800621D8: lui         $s2, 0x8028
    ctx->r18 = S32(0X8028 << 16);
    // 0x800621DC: addiu       $s2, $s2, 0x1800
    ctx->r18 = ADD32(ctx->r18, 0X1800);
    // 0x800621E0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800621E4: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800621E8: addiu       $t6, $zero, 0x74
    ctx->r14 = ADD32(0, 0X74);
    // 0x800621EC: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800621F0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800621F4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800621F8: swc1        $f21, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800621FC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80062200: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80062204: addiu       $a0, $a0, 0x5948
    ctx->r4 = ADD32(ctx->r4, 0X5948);
    // 0x80062208: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006220C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80062210: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062214: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80062218: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8006221C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062220: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062224: jal         0x80061E9C
    // 0x80062228: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x80062228: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006222C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80062230: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80062234: addiu       $s0, $s0, 0x3708
    ctx->r16 = ADD32(ctx->r16, 0X3708);
    // 0x80062238: addiu       $s1, $s1, -0x25C8
    ctx->r17 = ADD32(ctx->r17, -0X25C8);
    // 0x8006223C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062240: addiu       $s1, $s1, 0x140
    ctx->r17 = ADD32(ctx->r17, 0X140);
    // 0x80062244: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062248: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006224C: addiu       $t9, $zero, 0x74
    ctx->r25 = ADD32(0, 0X74);
    // 0x80062250: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80062254: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80062258: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8006225C: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80062260: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062264: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062268: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8006226C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062270: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80062274: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80062278: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006227C: jal         0x80061E9C
    // 0x80062280: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x80062280: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
    // 0x80062284: lui         $a0, 0x601
    ctx->r4 = S32(0X601 << 16);
    // 0x80062288: addiu       $t1, $zero, 0x74
    ctx->r9 = ADD32(0, 0X74);
    // 0x8006228C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80062290: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80062294: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80062298: addiu       $a0, $a0, -0x7F18
    ctx->r4 = ADD32(ctx->r4, -0X7F18);
    // 0x8006229C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800622A0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800622A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800622A8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800622AC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800622B0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800622B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800622B8: jal         0x80061E9C
    // 0x800622BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x800622BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x800622C0: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800622C4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x800622C8: addiu       $t4, $zero, 0x65
    ctx->r12 = ADD32(0, 0X65);
    // 0x800622CC: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x800622D0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x800622D4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800622D8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800622DC: addiu       $a0, $a0, 0x4BD0
    ctx->r4 = ADD32(ctx->r4, 0X4BD0);
    // 0x800622E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800622E4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800622E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800622EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800622F0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800622F4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800622F8: jal         0x80061E9C
    // 0x800622FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x800622FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x80062300: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062304: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062308: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006230C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80062310: addiu       $t8, $zero, 0x65
    ctx->r24 = ADD32(0, 0X65);
    // 0x80062314: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80062318: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8006231C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80062320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80062324: addiu       $a0, $a0, 0x5948
    ctx->r4 = ADD32(ctx->r4, 0X5948);
    // 0x80062328: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8006232C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062330: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062334: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062338: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006233C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80062340: jal         0x80061E9C
    // 0x80062344: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_4;
    // 0x80062344: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_4:
    // 0x80062348: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8006234C: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062350: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062354: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80062358: addiu       $t2, $zero, 0x65
    ctx->r10 = ADD32(0, 0X65);
    // 0x8006235C: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80062360: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80062364: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80062368: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8006236C: addiu       $a0, $a0, 0x6540
    ctx->r4 = ADD32(ctx->r4, 0X6540);
    // 0x80062370: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062374: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062378: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8006237C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80062380: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80062384: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80062388: jal         0x80061E9C
    // 0x8006238C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_5;
    // 0x8006238C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_5:
    // 0x80062390: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80062394: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x80062398: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006239C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x800623A0: addiu       $t6, $zero, 0x65
    ctx->r14 = ADD32(0, 0X65);
    // 0x800623A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800623A8: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x800623AC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800623B0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800623B4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800623B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800623BC: addiu       $a0, $a0, 0x6C78
    ctx->r4 = ADD32(ctx->r4, 0X6C78);
    // 0x800623C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800623C4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800623C8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800623CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800623D0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x800623D4: jal         0x80061E9C
    // 0x800623D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_80061E9C(rdram, ctx);
        goto after_6;
    // 0x800623D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_6:
    // 0x800623DC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800623E0: sw          $s1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r17;
    // 0x800623E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800623E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800623EC: jal         0x8000DEA4
    // 0x800623F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8000DEA4(rdram, ctx);
        goto after_7;
    // 0x800623F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800623F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800623F8: lwc1        $f21, 0x38($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800623FC: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80062400: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80062404: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80062408: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8006240C: jr          $ra
    // 0x80062410: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80062410: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80062414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062414: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80062418: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8006241C: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x80062420: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80062424: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x80062428: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x8006242C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80062430: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80062434: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80062438: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006243C: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062440: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062444: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80062448: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8006244C: swc1        $f21, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062450: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80062454: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062458: addiu       $a0, $a0, 0x2330
    ctx->r4 = ADD32(ctx->r4, 0X2330);
    // 0x8006245C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80062460: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062464: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062468: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8006246C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062470: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062474: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062478: jal         0x80061E9C
    // 0x8006247C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x8006247C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80062480: lui         $at, 0xC2F6
    ctx->r1 = S32(0XC2F6 << 16);
    // 0x80062484: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80062488: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006248C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062490: addiu       $t8, $s0, 0x4
    ctx->r24 = ADD32(ctx->r16, 0X4);
    // 0x80062494: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80062498: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8006249C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800624A0: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800624A4: addiu       $a0, $a0, 0xBE0
    ctx->r4 = ADD32(ctx->r4, 0XBE0);
    // 0x800624A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800624AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800624B0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800624B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800624B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800624BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800624C0: jal         0x80061E9C
    // 0x800624C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x800624C4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800624C8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800624CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800624D0: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800624D4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800624D8: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x800624DC: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x800624E0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800624E4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800624E8: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800624EC: addiu       $a0, $a0, 0x17F0
    ctx->r4 = ADD32(ctx->r4, 0X17F0);
    // 0x800624F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800624F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800624F8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800624FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062500: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062504: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062508: jal         0x80061E9C
    // 0x8006250C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x8006250C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80062510: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80062514: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80062518: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006251C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062520: addiu       $t2, $s0, 0xC
    ctx->r10 = ADD32(ctx->r16, 0XC);
    // 0x80062524: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80062528: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x8006252C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80062530: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062534: addiu       $a0, $a0, 0x1A78
    ctx->r4 = ADD32(ctx->r4, 0X1A78);
    // 0x80062538: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8006253C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062540: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062544: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062548: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006254C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062550: jal         0x80061E9C
    // 0x80062554: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x80062554: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80062558: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8006255C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80062560: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062564: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062568: addiu       $t4, $s0, 0x10
    ctx->r12 = ADD32(ctx->r16, 0X10);
    // 0x8006256C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80062570: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80062574: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80062578: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8006257C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80062580: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062584: addiu       $a0, $a0, 0x1E78
    ctx->r4 = ADD32(ctx->r4, 0X1E78);
    // 0x80062588: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8006258C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062590: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062594: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062598: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006259C: jal         0x80061E9C
    // 0x800625A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80061E9C(rdram, ctx);
        goto after_4;
    // 0x800625A0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800625A4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800625A8: lwc1        $f21, 0x38($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800625AC: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800625B0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800625B4: jr          $ra
    // 0x800625B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800625B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800625BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800625BC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800625C0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800625C4: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x800625C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800625CC: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x800625D0: lui         $at, 0xC366
    ctx->r1 = S32(0XC366 << 16);
    // 0x800625D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800625D8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800625DC: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800625E0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800625E4: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800625E8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800625EC: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800625F0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800625F4: swc1        $f21, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800625F8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800625FC: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062600: addiu       $a0, $a0, 0x2820
    ctx->r4 = ADD32(ctx->r4, 0X2820);
    // 0x80062604: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80062608: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006260C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062610: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80062614: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062618: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8006261C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062620: jal         0x80061E9C
    // 0x80062624: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x80062624: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80062628: lui         $at, 0xC2F6
    ctx->r1 = S32(0XC2F6 << 16);
    // 0x8006262C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80062630: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062634: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062638: addiu       $t8, $s0, 0x4
    ctx->r24 = ADD32(ctx->r16, 0X4);
    // 0x8006263C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80062640: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80062644: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80062648: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x8006264C: addiu       $a0, $a0, 0x1250
    ctx->r4 = ADD32(ctx->r4, 0X1250);
    // 0x80062650: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80062654: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062658: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8006265C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062660: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062664: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062668: jal         0x80061E9C
    // 0x8006266C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x8006266C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80062670: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80062674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80062678: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006267C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062680: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x80062684: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80062688: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8006268C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80062690: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062694: addiu       $a0, $a0, 0x17F0
    ctx->r4 = ADD32(ctx->r4, 0X17F0);
    // 0x80062698: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8006269C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800626A0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800626A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800626A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800626AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800626B0: jal         0x80061E9C
    // 0x800626B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x800626B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x800626B8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800626BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800626C0: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800626C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800626C8: addiu       $t2, $s0, 0xC
    ctx->r10 = ADD32(ctx->r16, 0XC);
    // 0x800626CC: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x800626D0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x800626D4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800626D8: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800626DC: addiu       $a0, $a0, 0x1A78
    ctx->r4 = ADD32(ctx->r4, 0X1A78);
    // 0x800626E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800626E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800626E8: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800626EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800626F0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800626F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800626F8: jal         0x80061E9C
    // 0x800626FC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x800626FC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80062700: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80062704: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80062708: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8006270C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062710: addiu       $t4, $s0, 0x10
    ctx->r12 = ADD32(ctx->r16, 0X10);
    // 0x80062714: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80062718: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8006271C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80062720: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80062724: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80062728: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x8006272C: addiu       $a0, $a0, 0x1E78
    ctx->r4 = ADD32(ctx->r4, 0X1E78);
    // 0x80062730: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80062734: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062738: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8006273C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062740: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062744: jal         0x80061E9C
    // 0x80062748: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80061E9C(rdram, ctx);
        goto after_4;
    // 0x80062748: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x8006274C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80062750: lwc1        $f21, 0x38($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80062754: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80062758: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8006275C: jr          $ra
    // 0x80062760: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80062760: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80062764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062764: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80062768: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006276C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80062770: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80062774: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80062778: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x8006277C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80062780: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062784: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062788: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8006278C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80062790: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062794: addiu       $a0, $a0, 0x17F0
    ctx->r4 = ADD32(ctx->r4, 0X17F0);
    // 0x80062798: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006279C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800627A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800627A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800627A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800627AC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800627B0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800627B4: jal         0x80061E9C
    // 0x800627B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x800627B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800627BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800627C0: lh          $t8, 0x3A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3A);
    // 0x800627C4: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800627C8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800627CC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x800627D0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800627D4: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800627D8: addiu       $a0, $a0, 0x1A78
    ctx->r4 = ADD32(ctx->r4, 0X1A78);
    // 0x800627DC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800627E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800627E4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800627E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800627EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x800627F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800627F4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800627F8: jal         0x80061E9C
    // 0x800627FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x800627FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x80062800: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80062804: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80062808: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006280C: lh          $t0, 0x3A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3A);
    // 0x80062810: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062814: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062818: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006281C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80062820: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80062824: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80062828: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x8006282C: addiu       $a0, $a0, 0x1E78
    ctx->r4 = ADD32(ctx->r4, 0X1E78);
    // 0x80062830: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80062834: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062838: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006283C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80062840: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80062844: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80062848: jal         0x80061E9C
    // 0x8006284C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x8006284C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80062850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80062854: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80062858: jr          $ra
    // 0x8006285C: nop

    return;
    // 0x8006285C: nop

;}
RECOMP_FUNC void func_80062860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062860: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80062864: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80062868: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8006286C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80062870: lui         $at, 0xC324
    ctx->r1 = S32(0XC324 << 16);
    // 0x80062874: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80062878: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x8006287C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80062880: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062884: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062888: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8006288C: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062890: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80062894: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062898: addiu       $a0, $a0, 0x2B40
    ctx->r4 = ADD32(ctx->r4, 0X2B40);
    // 0x8006289C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800628A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800628A4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800628A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800628AC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800628B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800628B4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x800628B8: jal         0x80061E9C
    // 0x800628BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x800628BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x800628C0: lui         $at, 0xC260
    ctx->r1 = S32(0XC260 << 16);
    // 0x800628C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800628C8: lh          $t8, 0x42($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X42);
    // 0x800628CC: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x800628D0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800628D4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x800628D8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800628DC: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800628E0: addiu       $a0, $a0, 0x3090
    ctx->r4 = ADD32(ctx->r4, 0X3090);
    // 0x800628E4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800628E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800628EC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x800628F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800628F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800628F8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800628FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80062900: jal         0x80061E9C
    // 0x80062904: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x80062904: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x80062908: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x8006290C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80062910: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x80062914: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062918: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8006291C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80062920: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80062924: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062928: addiu       $a0, $a0, 0x3990
    ctx->r4 = ADD32(ctx->r4, 0X3990);
    // 0x8006292C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80062930: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062934: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062938: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006293C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062940: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062944: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80062948: jal         0x80061E9C
    // 0x8006294C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x8006294C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80062950: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x80062954: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80062958: lh          $t2, 0x42($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X42);
    // 0x8006295C: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062960: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062964: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80062968: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x8006296C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80062970: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80062974: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062978: addiu       $a0, $a0, 0x3F10
    ctx->r4 = ADD32(ctx->r4, 0X3F10);
    // 0x8006297C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80062980: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062984: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062988: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006298C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062990: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80062994: jal         0x80061E9C
    // 0x80062998: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x80062998: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_3:
    // 0x8006299C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800629A0: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800629A4: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800629A8: jr          $ra
    // 0x800629AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800629AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800629B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800629B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800629B4: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x800629B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800629BC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800629C0: lui         $at, 0xC324
    ctx->r1 = S32(0XC324 << 16);
    // 0x800629C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800629C8: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x800629CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800629D0: lui         $a0, 0x601
    ctx->r4 = S32(0X601 << 16);
    // 0x800629D4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x800629D8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800629DC: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800629E0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x800629E4: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x800629E8: addiu       $a0, $a0, -0x78A0
    ctx->r4 = ADD32(ctx->r4, -0X78A0);
    // 0x800629EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x800629F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800629F4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800629F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800629FC: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062A00: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062A04: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80062A08: jal         0x80061E9C
    // 0x80062A0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x80062A0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80062A10: lui         $at, 0xC260
    ctx->r1 = S32(0XC260 << 16);
    // 0x80062A14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80062A18: lh          $t8, 0x42($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X42);
    // 0x80062A1C: lui         $a0, 0x601
    ctx->r4 = S32(0X601 << 16);
    // 0x80062A20: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062A24: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80062A28: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80062A2C: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062A30: addiu       $a0, $a0, -0x71C8
    ctx->r4 = ADD32(ctx->r4, -0X71C8);
    // 0x80062A34: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80062A38: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062A3C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062A40: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062A44: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062A48: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062A4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80062A50: jal         0x80061E9C
    // 0x80062A54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80061E9C(rdram, ctx);
        goto after_1;
    // 0x80062A54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x80062A58: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80062A5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80062A60: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x80062A64: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062A68: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062A6C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80062A70: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80062A74: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062A78: addiu       $a0, $a0, 0x6540
    ctx->r4 = ADD32(ctx->r4, 0X6540);
    // 0x80062A7C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80062A80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062A84: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062A88: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062A8C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062A90: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80062A94: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80062A98: jal         0x80061E9C
    // 0x80062A9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80061E9C(rdram, ctx);
        goto after_2;
    // 0x80062A9C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_2:
    // 0x80062AA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80062AA4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80062AA8: addiu       $v1, $v1, 0x3708
    ctx->r3 = ADD32(ctx->r3, 0X3708);
    // 0x80062AAC: addiu       $t2, $t2, -0x25C8
    ctx->r10 = ADD32(ctx->r10, -0X25C8);
    // 0x80062AB0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80062AB4: addiu       $t3, $t2, 0x140
    ctx->r11 = ADD32(ctx->r10, 0X140);
    // 0x80062AB8: sw          $t3, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r11;
    // 0x80062ABC: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x80062AC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80062AC4: lh          $t5, 0x42($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X42);
    // 0x80062AC8: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x80062ACC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80062AD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80062AD4: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80062AD8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80062ADC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80062AE0: addiu       $a1, $a1, 0x1800
    ctx->r5 = ADD32(ctx->r5, 0X1800);
    // 0x80062AE4: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80062AE8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80062AEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80062AF0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80062AF4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80062AF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80062AFC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80062B00: jal         0x80061E9C
    // 0x80062B04: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80061E9C(rdram, ctx);
        goto after_3;
    // 0x80062B04: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x80062B08: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80062B0C: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80062B10: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80062B14: jr          $ra
    // 0x80062B18: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80062B18: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80062B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062B1C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80062B20: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80062B24: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80062B28: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    // 0x80062B2C: swc1        $f14, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f14.u32l;
    // 0x80062B30: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80062B34: jr          $ra
    // 0x80062B38: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x80062B38: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x80062B3C: nop

;}
RECOMP_FUNC void func_80062B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062B40: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80062B44: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80062B48: lhu         $t6, 0x8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X8);
    // 0x80062B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062B50: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x80062B54: bne         $t7, $zero, L_80062B80
    if (ctx->r15 != 0) {
        // 0x80062B58: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80062B80;
    }
    // 0x80062B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062B5C: lhu         $t8, 0xA9C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA9C);
    // 0x80062B60: nop

    // 0x80062B64: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x80062B68: bne         $t9, $zero, L_80062B80
    if (ctx->r25 != 0) {
        // 0x80062B6C: nop
    
            goto L_80062B80;
    }
    // 0x80062B6C: nop

    // 0x80062B70: jal         0x80062BAC
    // 0x80062B74: nop

    func_80062BAC(rdram, ctx);
        goto after_0;
    // 0x80062B74: nop

    after_0:
    // 0x80062B78: b           L_80062BA0
    // 0x80062B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80062BA0;
    // 0x80062B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062B80:
    // 0x80062B80: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x80062B84: lbu         $t0, 0x38E3($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X38E3);
    // 0x80062B88: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80062B8C: beq         $t0, $at, L_80062BA0
    if (ctx->r8 == ctx->r1) {
        // 0x80062B90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80062BA0;
    }
    // 0x80062B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062B94: jal         0x80062BAC
    // 0x80062B98: nop

    func_80062BAC(rdram, ctx);
        goto after_1;
    // 0x80062B98: nop

    after_1:
    // 0x80062B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062BA0:
    // 0x80062BA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80062BA4: jr          $ra
    // 0x80062BA8: nop

    return;
    // 0x80062BA8: nop

;}
RECOMP_FUNC void func_80062BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062BAC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80062BB0: addiu       $t0, $t0, 0xB7E
    ctx->r8 = ADD32(ctx->r8, 0XB7E);
    // 0x80062BB4: lhu         $t6, 0x0($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X0);
    // 0x80062BB8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80062BBC: andi        $t7, $t6, 0xDFFF
    ctx->r15 = ctx->r14 & 0XDFFF;
    // 0x80062BC0: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x80062BC4: lbu         $t8, 0x38E3($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X38E3);
    // 0x80062BC8: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x80062BCC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80062BD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80062BD4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80062BD8: addiu       $t1, $t1, -0x23B0
    ctx->r9 = ADD32(ctx->r9, -0X23B0);
    // 0x80062BDC: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80062BE0: sb          $a3, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r7;
    // 0x80062BE4: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x80062BE8: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x80062BEC: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x80062BF0: lbu         $t3, 0x2($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2);
    // 0x80062BF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80062BF8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80062BFC: addiu       $a1, $a2, 0xFC
    ctx->r5 = ADD32(ctx->r6, 0XFC);
    // 0x80062C00: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80062C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062C08: andi        $t4, $a1, 0xFFFF
    ctx->r12 = ctx->r5 & 0XFFFF;
    // 0x80062C0C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80062C10: sb          $a3, 0x2418($v0)
    MEM_B(0X2418, ctx->r2) = ctx->r7;
    // 0x80062C14: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x80062C18: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80062C1C: sb          $t2, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r10;
    // 0x80062C20: jal         0x8007AAF8
    // 0x80062C24: sb          $t3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r11;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x80062C24: sb          $t3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r11;
    after_0:
    // 0x80062C28: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80062C2C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80062C30: lbu         $t5, 0x241C($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X241C);
    // 0x80062C34: lbu         $t9, 0x241D($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X241D);
    // 0x80062C38: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x80062C3C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x80062C40: ori         $t1, $t9, 0x40
    ctx->r9 = ctx->r25 | 0X40;
    // 0x80062C44: sb          $t7, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r15;
    // 0x80062C48: sb          $t1, 0x241D($v0)
    MEM_B(0X241D, ctx->r2) = ctx->r9;
    // 0x80062C4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062C50: lwc1        $f4, -0x65F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X65F0);
    // 0x80062C54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80062C58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80062C5C: lbu         $t4, 0x1D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1D);
    // 0x80062C60: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80062C64: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x80062C68: sb          $zero, 0x2425($v0)
    MEM_B(0X2425, ctx->r2) = 0;
    // 0x80062C6C: sb          $t2, 0x2419($v0)
    MEM_B(0X2419, ctx->r2) = ctx->r10;
    // 0x80062C70: sh          $t3, 0x242C($v0)
    MEM_H(0X242C, ctx->r2) = ctx->r11;
    // 0x80062C74: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80062C78: swc1        $f4, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f4.u32l;
    // 0x80062C7C: swc1        $f6, 0x2440($v0)
    MEM_W(0X2440, ctx->r2) = ctx->f6.u32l;
    // 0x80062C80: sh          $t4, 0x2430($v0)
    MEM_H(0X2430, ctx->r2) = ctx->r12;
    // 0x80062C84: lbu         $v1, 0x38E3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X38E3);
    // 0x80062C88: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x80062C8C: xori        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 ^ 0X4;
    // 0x80062C90: sltiu       $t6, $t6, 0x1
    ctx->r14 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80062C94: sltiu       $t5, $v1, 0x1
    ctx->r13 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80062C98: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x80062C9C: beq         $t7, $zero, L_80062CC0
    if (ctx->r15 == 0) {
        // 0x80062CA0: addiu       $a0, $a0, 0x6CA4
        ctx->r4 = ADD32(ctx->r4, 0X6CA4);
            goto L_80062CC0;
    }
    // 0x80062CA0: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x80062CA4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80062CA8: jal         0x8002135C
    // 0x80062CAC: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80062CAC: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    after_1:
    // 0x80062CB0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80062CB4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80062CB8: b           L_80062CE4
    // 0x80062CBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80062CE4;
    // 0x80062CBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80062CC0:
    // 0x80062CC0: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    // 0x80062CC4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80062CC8: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x80062CCC: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80062CD0: jal         0x8002135C
    // 0x80062CD4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80062CD4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_2:
    // 0x80062CD8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80062CDC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80062CE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80062CE4:
    // 0x80062CE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062CE8: sb          $zero, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = 0;
    // 0x80062CEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062CF0: sb          $zero, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = 0;
    // 0x80062CF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062CF8: sb          $a3, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r7;
    // 0x80062CFC: lbu         $t9, 0x241C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X241C);
    // 0x80062D00: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80062D04: addiu       $v1, $v1, 0x38E5
    ctx->r3 = ADD32(ctx->r3, 0X38E5);
    // 0x80062D08: andi        $t1, $t9, 0xFFFE
    ctx->r9 = ctx->r25 & 0XFFFE;
    // 0x80062D0C: sb          $t1, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r9;
    // 0x80062D10: sb          $a3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r7;
    // 0x80062D14: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80062D18: lbu         $t2, 0x38E3($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X38E3);
    // 0x80062D1C: nop

    // 0x80062D20: sltiu       $at, $t2, 0xC
    ctx->r1 = ctx->r10 < 0XC ? 1 : 0;
    // 0x80062D24: beq         $at, $zero, L_80062E38
    if (ctx->r1 == 0) {
        // 0x80062D28: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80062E38;
    }
    // 0x80062D28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80062D2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062D30: addu        $at, $at, $t2
    gpr jr_addend_80062D3C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80062D34: lw          $t2, -0x65EC($at)
    ctx->r10 = ADD32(ctx->r1, -0X65EC);
    // 0x80062D38: nop

    // 0x80062D3C: jr          $t2
    // 0x80062D40: nop

    switch (jr_addend_80062D3C >> 2) {
        case 0: goto L_80062D44; break;
        case 1: goto L_80062E38; break;
        case 2: goto L_80062E38; break;
        case 3: goto L_80062D94; break;
        case 4: goto L_80062E38; break;
        case 5: goto L_80062D64; break;
        case 6: goto L_80062E38; break;
        case 7: goto L_80062E38; break;
        case 8: goto L_80062E38; break;
        case 9: goto L_80062E38; break;
        case 10: goto L_80062DA4; break;
        case 11: goto L_80062DE4; break;
        default: switch_error(__func__, 0x80062D3C, 0x800D9A14);
    }
    // 0x80062D40: nop

L_80062D44:
    // 0x80062D44: lbu         $t5, 0x241C($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X241C);
    // 0x80062D48: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x80062D4C: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x80062D50: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x80062D54: jal         0x800489A8
    // 0x80062D58: sb          $t6, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r14;
    func_800489A8(rdram, ctx);
        goto after_3;
    // 0x80062D58: sb          $t6, 0x241C($v0)
    MEM_B(0X241C, ctx->r2) = ctx->r14;
    after_3:
    // 0x80062D5C: b           L_80062E3C
    // 0x80062D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80062E3C;
    // 0x80062D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062D64:
    // 0x80062D64: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80062D68: addiu       $a0, $a0, -0x17C8
    ctx->r4 = ADD32(ctx->r4, -0X17C8);
    // 0x80062D6C: lhu         $t7, 0xE($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XE);
    // 0x80062D70: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x80062D74: beq         $v0, $t7, L_80062D8C
    if (ctx->r2 == ctx->r15) {
        // 0x80062D78: addiu       $t9, $zero, 0x28
        ctx->r25 = ADD32(0, 0X28);
            goto L_80062D8C;
    }
    // 0x80062D78: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x80062D7C: lhu         $t8, 0xD9E($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0XD9E);
    // 0x80062D80: nop

    // 0x80062D84: bne         $v0, $t8, L_80062E3C
    if (ctx->r2 != ctx->r24) {
        // 0x80062D88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80062E3C;
    }
    // 0x80062D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062D8C:
    // 0x80062D8C: b           L_80062E38
    // 0x80062D90: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
        goto L_80062E38;
    // 0x80062D90: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
L_80062D94:
    // 0x80062D94: jal         0x80078D90
    // 0x80062D98: nop

    func_80078D90(rdram, ctx);
        goto after_4;
    // 0x80062D98: nop

    after_4:
    // 0x80062D9C: b           L_80062E3C
    // 0x80062DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80062E3C;
    // 0x80062DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062DA4:
    // 0x80062DA4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DA8: sb          $zero, 0x3ACF($at)
    MEM_B(0X3ACF, ctx->r1) = 0;
    // 0x80062DAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DB0: sb          $a3, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r7;
    // 0x80062DB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DB8: sb          $a3, 0x3A32($at)
    MEM_B(0X3A32, ctx->r1) = ctx->r7;
    // 0x80062DBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DC0: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80062DC4: jal         0x8000E300
    // 0x80062DC8: sb          $t1, 0x3ACE($at)
    MEM_B(0X3ACE, ctx->r1) = ctx->r9;
    func_8000E300(rdram, ctx);
        goto after_5;
    // 0x80062DC8: sb          $t1, 0x3ACE($at)
    MEM_B(0X3ACE, ctx->r1) = ctx->r9;
    after_5:
    // 0x80062DCC: jal         0x8007A484
    // 0x80062DD0: nop

    func_8007A484(rdram, ctx);
        goto after_6;
    // 0x80062DD0: nop

    after_6:
    // 0x80062DD4: jal         0x80299DC0
    // 0x80062DD8: nop

    LOOKUP_FUNC(0x80299DC0)(rdram, ctx);
        goto after_7;
    // 0x80062DD8: nop

    after_7:
    // 0x80062DDC: b           L_80062E3C
    // 0x80062DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80062E3C;
    // 0x80062DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062DE4:
    // 0x80062DE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DE8: sb          $zero, 0x3ACF($at)
    MEM_B(0X3ACF, ctx->r1) = 0;
    // 0x80062DEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DF0: sb          $a3, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = ctx->r7;
    // 0x80062DF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062DF8: sb          $a3, 0x3A32($at)
    MEM_B(0X3A32, ctx->r1) = ctx->r7;
    // 0x80062DFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062E00: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x80062E04: jal         0x8000E300
    // 0x80062E08: sb          $t2, 0x3ACE($at)
    MEM_B(0X3ACE, ctx->r1) = ctx->r10;
    func_8000E300(rdram, ctx);
        goto after_8;
    // 0x80062E08: sb          $t2, 0x3ACE($at)
    MEM_B(0X3ACE, ctx->r1) = ctx->r10;
    after_8:
    // 0x80062E0C: jal         0x8007A37C
    // 0x80062E10: nop

    func_8007A37C(rdram, ctx);
        goto after_9;
    // 0x80062E10: nop

    after_9:
    // 0x80062E14: jal         0x80299DC0
    // 0x80062E18: nop

    LOOKUP_FUNC(0x80299DC0)(rdram, ctx);
        goto after_10;
    // 0x80062E18: nop

    after_10:
    // 0x80062E1C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80062E20: lhu         $t3, 0xB78($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB78);
    // 0x80062E24: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80062E28: bne         $t3, $at, L_80062E3C
    if (ctx->r11 != ctx->r1) {
        // 0x80062E2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80062E3C;
    }
    // 0x80062E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062E30: jal         0x80015BC0
    // 0x80062E34: addiu       $a0, $zero, 0x3C1
    ctx->r4 = ADD32(0, 0X3C1);
    func_80015BC0(rdram, ctx);
        goto after_11;
    // 0x80062E34: addiu       $a0, $zero, 0x3C1
    ctx->r4 = ADD32(0, 0X3C1);
    after_11:
L_80062E38:
    // 0x80062E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80062E3C:
    // 0x80062E3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80062E40: jr          $ra
    // 0x80062E44: nop

    return;
    // 0x80062E44: nop

;}
RECOMP_FUNC void func_80062E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062E48: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80062E4C: lbu         $v0, 0x39FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39FA);
    // 0x80062E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062E54: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80062E58: beq         $at, $zero, L_80062E68
    if (ctx->r1 == 0) {
        // 0x80062E5C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80062E68;
    }
    // 0x80062E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062E60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80062E64: bne         $v0, $at, L_80062E78
    if (ctx->r2 != ctx->r1) {
        // 0x80062E68: slti        $at, $v0, 0xD
        ctx->r1 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
            goto L_80062E78;
    }
L_80062E68:
    // 0x80062E68: slti        $at, $v0, 0xD
    ctx->r1 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80062E6C: bne         $at, $zero, L_80062E84
    if (ctx->r1 != 0) {
        // 0x80062E70: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_80062E84;
    }
    // 0x80062E70: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80062E74: beq         $at, $zero, L_80062E84
    if (ctx->r1 == 0) {
        // 0x80062E78: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80062E84;
    }
L_80062E78:
    // 0x80062E78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80062E7C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80062E80: sb          $t6, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r14;
L_80062E84:
    // 0x80062E84: jal         0x80062E9C
    // 0x80062E88: nop

    func_80062E9C(rdram, ctx);
        goto after_0;
    // 0x80062E88: nop

    after_0:
    // 0x80062E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80062E94: jr          $ra
    // 0x80062E98: nop

    return;
    // 0x80062E98: nop

;}
RECOMP_FUNC void func_80062E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062E9C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80062EA0: lbu         $t6, 0x39FA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39FA);
    // 0x80062EA4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80062EA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80062EAC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80062EB0: lw          $t9, -0x236C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X236C);
    // 0x80062EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062EBC: jalr        $t9
    // 0x80062EC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80062EC0: nop

    after_0:
    // 0x80062EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80062ECC: jr          $ra
    // 0x80062ED0: nop

    return;
    // 0x80062ED0: nop

;}
RECOMP_FUNC void func_80062ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062ED4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80062ED8: lbu         $v0, 0x38E3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38E3);
    // 0x80062EDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062EE0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80062EE4: beq         $v0, $at, L_80062EF4
    if (ctx->r2 == ctx->r1) {
        // 0x80062EE8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80062EF4;
    }
    // 0x80062EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062EEC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80062EF0: bne         $v0, $at, L_80062F34
    if (ctx->r2 != ctx->r1) {
        // 0x80062EF4: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_80062F34;
    }
L_80062EF4:
    // 0x80062EF4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x80062EF8: addiu       $v1, $v1, 0x39B4
    ctx->r3 = ADD32(ctx->r3, 0X39B4);
    // 0x80062EFC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80062F00: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80062F04: beq         $v0, $zero, L_80062F34
    if (ctx->r2 == 0) {
        // 0x80062F08: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80062F34;
    }
    // 0x80062F08: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80062F0C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x80062F10: jal         0x800636C0
    // 0x80062F14: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    func_800636C0(rdram, ctx);
        goto after_0;
    // 0x80062F14: addiu       $a1, $zero, -0x8
    ctx->r5 = ADD32(0, -0X8);
    after_0:
    // 0x80062F18: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x80062F1C: lbu         $t7, 0x39B4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39B4);
    // 0x80062F20: nop

    // 0x80062F24: bne         $t7, $zero, L_80062F34
    if (ctx->r15 != 0) {
        // 0x80062F28: nop
    
            goto L_80062F34;
    }
    // 0x80062F28: nop

    // 0x80062F2C: jal         0x8006388C
    // 0x80062F30: nop

    func_8006388C(rdram, ctx);
        goto after_1;
    // 0x80062F30: nop

    after_1:
L_80062F34:
    // 0x80062F34: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80062F38: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x80062F3C: lwc1        $f4, 0x243C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X243C);
    // 0x80062F40: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80062F44: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80062F48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80062F4C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80062F50: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x80062F54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80062F58: bc1f        L_80062F84
    if (!c1cs) {
        // 0x80062F5C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80062F84;
    }
    // 0x80062F5C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80062F60: lwc1        $f9, -0x65B8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X65B8);
    // 0x80062F64: lwc1        $f8, -0x65B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X65B4);
    // 0x80062F68: lbu         $t8, 0x2425($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2425);
    // 0x80062F6C: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x80062F70: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x80062F74: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80062F78: sb          $t9, 0x2425($v1)
    MEM_B(0X2425, ctx->r3) = ctx->r25;
    // 0x80062F7C: b           L_80062FF8
    // 0x80062F80: swc1        $f16, 0x243C($v1)
    MEM_W(0X243C, ctx->r3) = ctx->f16.u32l;
        goto L_80062FF8;
    // 0x80062F80: swc1        $f16, 0x243C($v1)
    MEM_W(0X243C, ctx->r3) = ctx->f16.u32l;
L_80062F84:
    // 0x80062F84: lbu         $v0, 0x38E3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38E3);
    // 0x80062F88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80062F8C: beq         $v0, $zero, L_80062F98
    if (ctx->r2 == 0) {
        // 0x80062F90: nop
    
            goto L_80062F98;
    }
    // 0x80062F90: nop

    // 0x80062F94: bne         $v0, $at, L_80062FC0
    if (ctx->r2 != ctx->r1) {
        // 0x80062F98: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_80062FC0;
    }
L_80062F98:
    // 0x80062F98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80062F9C: addiu       $v0, $v0, 0x39FA
    ctx->r2 = ADD32(ctx->r2, 0X39FA);
    // 0x80062FA0: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x80062FA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80062FA8: bne         $t0, $at, L_80062FC4
    if (ctx->r8 != ctx->r1) {
        // 0x80062FAC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80062FC4;
    }
    // 0x80062FAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80062FB0: jal         0x80063554
    // 0x80062FB4: nop

    func_80063554(rdram, ctx);
        goto after_2;
    // 0x80062FB4: nop

    after_2:
    // 0x80062FB8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x80062FBC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
L_80062FC0:
    // 0x80062FC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80062FC4:
    // 0x80062FC4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80062FC8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80062FCC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80062FD0: sb          $t1, 0x2425($v1)
    MEM_B(0X2425, ctx->r3) = ctx->r9;
    // 0x80062FD4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80062FD8: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80062FDC: swc1        $f18, 0x243C($v1)
    MEM_W(0X243C, ctx->r3) = ctx->f18.u32l;
    // 0x80062FE0: addiu       $v0, $v0, 0x39FA
    ctx->r2 = ADD32(ctx->r2, 0X39FA);
    // 0x80062FE4: sb          $t2, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r10;
    // 0x80062FE8: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x80062FEC: nop

    // 0x80062FF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80062FF4: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_80062FF8:
    // 0x80062FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063000: jr          $ra
    // 0x80063004: nop

    return;
    // 0x80063004: nop

;}
RECOMP_FUNC void func_80063008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063008: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8006300C: addiu       $v0, $v0, 0x38E5
    ctx->r2 = ADD32(ctx->r2, 0X38E5);
    // 0x80063010: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80063014: nop

    // 0x80063018: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006301C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x80063020: bne         $t8, $zero, L_80063040
    if (ctx->r24 != 0) {
        // 0x80063024: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_80063040;
    }
    // 0x80063024: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80063028: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8006302C: addiu       $v0, $v0, 0x39FA
    ctx->r2 = ADD32(ctx->r2, 0X39FA);
    // 0x80063030: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80063034: nop

    // 0x80063038: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006303C: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_80063040:
    // 0x80063040: jr          $ra
    // 0x80063044: nop

    return;
    // 0x80063044: nop

;}
RECOMP_FUNC void func_80063048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063048: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8006304C: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80063050: lwc1        $f4, 0x243C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X243C);
    // 0x80063054: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x80063058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006305C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80063060: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x80063064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063068: bc1f        L_80063098
    if (!c1cs) {
        // 0x8006306C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80063098;
    }
    // 0x8006306C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063070: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80063074: lwc1        $f9, -0x65B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X65B0);
    // 0x80063078: lwc1        $f8, -0x65AC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X65AC);
    // 0x8006307C: lbu         $t6, 0x2425($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2425);
    // 0x80063080: sub.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d - ctx->f8.d;
    // 0x80063084: addiu       $t7, $t6, -0xF
    ctx->r15 = ADD32(ctx->r14, -0XF);
    // 0x80063088: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8006308C: sb          $t7, 0x2425($v0)
    MEM_B(0X2425, ctx->r2) = ctx->r15;
    // 0x80063090: b           L_800630F8
    // 0x80063094: swc1        $f16, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f16.u32l;
        goto L_800630F8;
    // 0x80063094: swc1        $f16, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f16.u32l;
L_80063098:
    // 0x80063098: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8006309C: lbu         $v1, 0x38E3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X38E3);
    // 0x800630A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800630A4: beq         $v1, $zero, L_800630B0
    if (ctx->r3 == 0) {
        // 0x800630A8: nop
    
            goto L_800630B0;
    }
    // 0x800630A8: nop

    // 0x800630AC: bne         $v1, $at, L_800630D8
    if (ctx->r3 != ctx->r1) {
        // 0x800630B0: lui         $v1, 0x802C
        ctx->r3 = S32(0X802C << 16);
            goto L_800630D8;
    }
L_800630B0:
    // 0x800630B0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800630B4: addiu       $v1, $v1, 0x39FA
    ctx->r3 = ADD32(ctx->r3, 0X39FA);
    // 0x800630B8: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x800630BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800630C0: bne         $t8, $at, L_800630D8
    if (ctx->r24 != ctx->r1) {
        // 0x800630C4: nop
    
            goto L_800630D8;
    }
    // 0x800630C4: nop

    // 0x800630C8: jal         0x800634EC
    // 0x800630CC: nop

    func_800634EC(rdram, ctx);
        goto after_0;
    // 0x800630CC: nop

    after_0:
    // 0x800630D0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800630D4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
L_800630D8:
    // 0x800630D8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800630DC: addiu       $v1, $v1, 0x39FA
    ctx->r3 = ADD32(ctx->r3, 0X39FA);
    // 0x800630E0: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x800630E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800630E8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800630EC: sb          $zero, 0x2425($v0)
    MEM_B(0X2425, ctx->r2) = 0;
    // 0x800630F0: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x800630F4: swc1        $f18, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f18.u32l;
L_800630F8:
    // 0x800630F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800630FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063100: jr          $ra
    // 0x80063104: nop

    return;
    // 0x80063104: nop

;}
RECOMP_FUNC void func_80063108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063108: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006310C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x80063110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063118: lhu         $v0, 0xDC($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0XDC);
    // 0x8006311C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063120: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80063124: beq         $t7, $zero, L_800631D0
    if (ctx->r15 == 0) {
        // 0x80063128: andi        $t8, $v0, 0x6
        ctx->r24 = ctx->r2 & 0X6;
            goto L_800631D0;
    }
    // 0x80063128: andi        $t8, $v0, 0x6
    ctx->r24 = ctx->r2 & 0X6;
    // 0x8006312C: beq         $t8, $zero, L_80063160
    if (ctx->r24 == 0) {
        // 0x80063130: lui         $t1, 0x802C
        ctx->r9 = S32(0X802C << 16);
            goto L_80063160;
    }
    // 0x80063130: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x80063134: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80063138: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8006313C: sb          $t9, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r25;
    // 0x80063140: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063144: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x80063148: jal         0x80021960
    // 0x8006314C: sb          $t0, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r8;
    func_80021960(rdram, ctx);
        goto after_0;
    // 0x8006314C: sb          $t0, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r8;
    after_0:
    // 0x80063150: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80063154: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80063158: b           L_800631EC
    // 0x8006315C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
        goto L_800631EC;
    // 0x8006315C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_80063160:
    // 0x80063160: lbu         $t1, 0x38E3($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X38E3);
    // 0x80063164: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80063168: beq         $t1, $at, L_800631B4
    if (ctx->r9 == ctx->r1) {
        // 0x8006316C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800631B4;
    }
    // 0x8006316C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80063170: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80063174: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80063178: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8006317C: beq         $v0, $at, L_80063194
    if (ctx->r2 == ctx->r1) {
        // 0x80063180: addiu       $t3, $zero, 0x14
        ctx->r11 = ADD32(0, 0X14);
            goto L_80063194;
    }
    // 0x80063180: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x80063184: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80063188: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8006318C: b           L_800631E8
    // 0x80063190: sb          $t2, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r10;
        goto L_800631E8;
    // 0x80063190: sb          $t2, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r10;
L_80063194:
    // 0x80063194: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80063198: lbu         $t4, 0x39FA($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39FA);
    // 0x8006319C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800631A0: sb          $t3, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r11;
    // 0x800631A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800631A8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800631AC: b           L_800631E8
    // 0x800631B0: sb          $t5, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r13;
        goto L_800631E8;
    // 0x800631B0: sb          $t5, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r13;
L_800631B4:
    // 0x800631B4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800631B8: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x800631BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800631C0: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x800631C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800631C8: b           L_800631E8
    // 0x800631CC: sb          $t6, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r14;
        goto L_800631E8;
    // 0x800631CC: sb          $t6, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r14;
L_800631D0:
    // 0x800631D0: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x800631D4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800631D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800631DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800631E0: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x800631E4: sb          $t7, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r15;
L_800631E8:
    // 0x800631E8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_800631EC:
    // 0x800631EC: beq         $v0, $at, L_800631FC
    if (ctx->r2 == ctx->r1) {
        // 0x800631F0: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_800631FC;
    }
    // 0x800631F0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800631F4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x800631F8: bne         $v0, $at, L_80063234
    if (ctx->r2 != ctx->r1) {
        // 0x800631FC: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_80063234;
    }
L_800631FC:
    // 0x800631FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063200: sb          $zero, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = 0;
    // 0x80063204: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063208: sb          $t8, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r24;
    // 0x8006320C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063210: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x80063214: sb          $t9, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r25;
    // 0x80063218: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8006321C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80063220: jal         0x800489A8
    // 0x80063224: sb          $t0, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r8;
    func_800489A8(rdram, ctx);
        goto after_1;
    // 0x80063224: sb          $t0, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r8;
    after_1:
    // 0x80063228: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006322C: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x80063230: nop

L_80063234:
    // 0x80063234: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80063238: bne         $v0, $at, L_80063334
    if (ctx->r2 != ctx->r1) {
        // 0x8006323C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80063334;
    }
    // 0x8006323C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80063240: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80063244: lhu         $t1, 0x8($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8);
    // 0x80063248: nop

    // 0x8006324C: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x80063250: bne         $t2, $zero, L_80063338
    if (ctx->r10 != 0) {
        // 0x80063254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80063338;
    }
    // 0x80063254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063258: lhu         $t3, 0xA9C($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0XA9C);
    // 0x8006325C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063260: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x80063264: bne         $t4, $zero, L_80063334
    if (ctx->r12 != 0) {
        // 0x80063268: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80063334;
    }
    // 0x80063268: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006326C: sb          $zero, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = 0;
    // 0x80063270: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063274: sb          $t5, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r13;
    // 0x80063278: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8006327C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80063280: sb          $t6, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r14;
    // 0x80063284: lhu         $v1, 0xA9E($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA9E);
    // 0x80063288: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x8006328C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80063290: beq         $v0, $v1, L_80063320
    if (ctx->r2 == ctx->r3) {
        // 0x80063294: nop
    
            goto L_80063320;
    }
    // 0x80063294: nop

    // 0x80063298: lhu         $t7, 0xB72($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB72);
    // 0x8006329C: nop

    // 0x800632A0: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x800632A4: beq         $at, $zero, L_800632E4
    if (ctx->r1 == 0) {
        // 0x800632A8: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800632E4;
    }
    // 0x800632A8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800632AC: beq         $at, $zero, L_800632CC
    if (ctx->r1 == 0) {
        // 0x800632B0: nop
    
            goto L_800632CC;
    }
    // 0x800632B0: nop

    // 0x800632B4: jal         0x80062860
    // 0x800632B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062860(rdram, ctx);
        goto after_2;
    // 0x800632B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x800632BC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800632C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800632C4: b           L_80063334
    // 0x800632C8: sb          $t8, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r24;
        goto L_80063334;
    // 0x800632C8: sb          $t8, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r24;
L_800632CC:
    // 0x800632CC: jal         0x80062764
    // 0x800632D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062764(rdram, ctx);
        goto after_3;
    // 0x800632D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x800632D4: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x800632D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800632DC: b           L_80063334
    // 0x800632E0: sb          $t9, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r25;
        goto L_80063334;
    // 0x800632E0: sb          $t9, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r25;
L_800632E4:
    // 0x800632E4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800632E8: beq         $at, $zero, L_80063308
    if (ctx->r1 == 0) {
        // 0x800632EC: nop
    
            goto L_80063308;
    }
    // 0x800632EC: nop

    // 0x800632F0: jal         0x800625BC
    // 0x800632F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800625BC(rdram, ctx);
        goto after_4;
    // 0x800632F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x800632F8: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x800632FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063300: b           L_80063334
    // 0x80063304: sb          $t0, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r8;
        goto L_80063334;
    // 0x80063304: sb          $t0, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r8;
L_80063308:
    // 0x80063308: jal         0x80062414
    // 0x8006330C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80062414(rdram, ctx);
        goto after_5;
    // 0x8006330C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80063310: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x80063314: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063318: b           L_80063334
    // 0x8006331C: sb          $t1, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r9;
        goto L_80063334;
    // 0x8006331C: sb          $t1, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r9;
L_80063320:
    // 0x80063320: jal         0x800629B0
    // 0x80063324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800629B0(rdram, ctx);
        goto after_6;
    // 0x80063324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80063328: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x8006332C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063330: sb          $t2, 0x38E5($at)
    MEM_B(0X38E5, ctx->r1) = ctx->r10;
L_80063334:
    // 0x80063334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80063338:
    // 0x80063338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006333C: jr          $ra
    // 0x80063340: nop

    return;
    // 0x80063340: nop

;}
RECOMP_FUNC void func_80063344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063344: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80063348: addiu       $v0, $v0, 0x38E5
    ctx->r2 = ADD32(ctx->r2, 0X38E5);
    // 0x8006334C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80063350: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80063354: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80063358: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8006335C: bne         $t8, $zero, L_80063380
    if (ctx->r24 != 0) {
        // 0x80063360: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_80063380;
    }
    // 0x80063360: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80063364: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80063368: addiu       $v0, $v0, 0x39FA
    ctx->r2 = ADD32(ctx->r2, 0X39FA);
    // 0x8006336C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80063370: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063374: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80063378: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x8006337C: sb          $t1, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r9;
L_80063380:
    // 0x80063380: jr          $ra
    // 0x80063384: nop

    return;
    // 0x80063384: nop

;}
RECOMP_FUNC void func_80063388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063388: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006338C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80063390: jr          $ra
    // 0x80063394: sb          $t6, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r14;
    return;
    // 0x80063394: sb          $t6, -0x2FB0($at)
    MEM_B(-0X2FB0, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80063398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063398: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006339C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800633A0: jr          $ra
    // 0x800633A4: sb          $t6, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r14;
    return;
    // 0x800633A4: sb          $t6, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_800633A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800633A8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800633AC: addiu       $v0, $v0, 0x38E5
    ctx->r2 = ADD32(ctx->r2, 0X38E5);
    // 0x800633B0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800633B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800633B8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800633BC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x800633C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800633C4: bne         $t8, $zero, L_800633E8
    if (ctx->r24 != 0) {
        // 0x800633C8: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_800633E8;
    }
    // 0x800633C8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x800633CC: jal         0x8029804C
    // 0x800633D0: nop

    LOOKUP_FUNC(0x8029804C)(rdram, ctx);
        goto after_0;
    // 0x800633D0: nop

    after_0:
    // 0x800633D4: jal         0x80062B40
    // 0x800633D8: nop

    func_80062B40(rdram, ctx);
        goto after_1;
    // 0x800633D8: nop

    after_1:
    // 0x800633DC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x800633E0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800633E4: sb          $t9, 0x39FA($at)
    MEM_B(0X39FA, ctx->r1) = ctx->r25;
L_800633E8:
    // 0x800633E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800633EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800633F0: jr          $ra
    // 0x800633F4: nop

    return;
    // 0x800633F4: nop

;}
RECOMP_FUNC void func_800633F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800633F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800633FC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063400: sb          $t6, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r14;
    // 0x80063404: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x80063408: jr          $ra
    // 0x8006340C: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    return;
    // 0x8006340C: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80063410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063410: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80063414: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x80063418: lh          $t7, 0x7CA($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X7CA);
    // 0x8006341C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063420: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80063424: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80063428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006342C: bne         $t7, $at, L_8006343C
    if (ctx->r15 != ctx->r1) {
        // 0x80063430: sb          $t6, 0x7C0($v0)
        MEM_B(0X7C0, ctx->r2) = ctx->r14;
            goto L_8006343C;
    }
    // 0x80063430: sb          $t6, 0x7C0($v0)
    MEM_B(0X7C0, ctx->r2) = ctx->r14;
    // 0x80063434: jal         0x8007D028
    // 0x80063438: nop

    func_8007D028(rdram, ctx);
        goto after_0;
    // 0x80063438: nop

    after_0:
L_8006343C:
    // 0x8006343C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063444: jr          $ra
    // 0x80063448: nop

    return;
    // 0x80063448: nop

;}
RECOMP_FUNC void func_8006344C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006344C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80063450: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x80063454: lwc1        $f4, 0x243C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X243C);
    // 0x80063458: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x8006345C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80063460: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x80063464: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x80063468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006346C: bc1f        L_8006349C
    if (!c1cs) {
        // 0x80063470: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006349C;
    }
    // 0x80063470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063474: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80063478: lwc1        $f9, -0x65A8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X65A8);
    // 0x8006347C: lwc1        $f8, -0x65A4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X65A4);
    // 0x80063480: lbu         $t6, 0x2425($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2425);
    // 0x80063484: sub.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d - ctx->f8.d;
    // 0x80063488: addiu       $t7, $t6, -0xF
    ctx->r15 = ADD32(ctx->r14, -0XF);
    // 0x8006348C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80063490: sb          $t7, 0x2425($v0)
    MEM_B(0X2425, ctx->r2) = ctx->r15;
    // 0x80063494: b           L_800634DC
    // 0x80063498: swc1        $f16, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f16.u32l;
        goto L_800634DC;
    // 0x80063498: swc1        $f16, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f16.u32l;
L_8006349C:
    // 0x8006349C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800634A0: sb          $zero, 0x2425($v0)
    MEM_B(0X2425, ctx->r2) = 0;
    // 0x800634A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800634A8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800634AC: swc1        $f18, 0x243C($v0)
    MEM_W(0X243C, ctx->r2) = ctx->f18.u32l;
    // 0x800634B0: jal         0x80298AD8
    // 0x800634B4: sb          $t8, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r24;
    LOOKUP_FUNC(0x80298AD8)(rdram, ctx);
        goto after_0;
    // 0x800634B4: sb          $t8, 0x39DD($at)
    MEM_B(0X39DD, ctx->r1) = ctx->r24;
    after_0:
    // 0x800634B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x800634BC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800634C0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x800634C4: addiu       $v0, $v0, 0x39FA
    ctx->r2 = ADD32(ctx->r2, 0X39FA);
    // 0x800634C8: sb          $t9, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = ctx->r25;
    // 0x800634CC: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x800634D0: nop

    // 0x800634D4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800634D8: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_800634DC:
    // 0x800634DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800634E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800634E4: jr          $ra
    // 0x800634E8: nop

    return;
    // 0x800634E8: nop

;}
RECOMP_FUNC void func_800634EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800634EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800634F0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800634F4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x800634F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800634FC: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80063500: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80063504: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80063508: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8006350C:
    // 0x8006350C: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063514: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x80063518: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x8006351C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80063520: mflo        $t6
    ctx->r14 = lo;
    // 0x80063524: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80063528: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8006352C: bne         $at, $zero, L_8006350C
    if (ctx->r1 != 0) {
        // 0x80063530: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_8006350C;
    }
    // 0x80063530: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x80063534: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80063538: sb          $zero, -0x3844($at)
    MEM_B(-0X3844, ctx->r1) = 0;
    // 0x8006353C: jal         0x8000E25C
    // 0x80063540: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x80063540: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80063544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006354C: jr          $ra
    // 0x80063550: nop

    return;
    // 0x80063550: nop

;}
RECOMP_FUNC void func_80063554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063554: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80063558: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8006355C: lw          $t6, 0xB28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB28);
    // 0x80063560: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80063564: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80063568: lw          $t7, 0xC8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC8);
    // 0x8006356C: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80063570: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80063574: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80063578: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8006357C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80063580: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80063584: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x80063588: jal         0x8000E0A8
    // 0x8006358C: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    func_8000E0A8(rdram, ctx);
        goto after_0;
    // 0x8006358C: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    after_0:
    // 0x80063590: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80063594: jal         0x8000E1F4
    // 0x80063598: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000E1F4(rdram, ctx);
        goto after_1;
    // 0x80063598: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_1:
    // 0x8006359C: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x800635A0: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x800635A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800635A8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x800635AC: sb          $t0, 0x2490($s0)
    MEM_B(0X2490, ctx->r16) = ctx->r8;
    // 0x800635B0: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x800635B4: jal         0x8007AAF8
    // 0x800635B8: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x800635B8: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_2:
    // 0x800635BC: lbu         $t3, 0x2494($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2494);
    // 0x800635C0: lbu         $t1, 0x2495($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2495);
    // 0x800635C4: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x800635C8: ori         $t5, $t4, 0x6
    ctx->r13 = ctx->r12 | 0X6;
    // 0x800635CC: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x800635D0: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x800635D4: addiu       $t8, $zero, -0x14
    ctx->r24 = ADD32(0, -0X14);
    // 0x800635D8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x800635DC: andi        $t2, $t1, 0xFFBF
    ctx->r10 = ctx->r9 & 0XFFBF;
    // 0x800635E0: sb          $t2, 0x2495($s0)
    MEM_B(0X2495, ctx->r16) = ctx->r10;
    // 0x800635E4: sb          $t5, 0x2494($s0)
    MEM_B(0X2494, ctx->r16) = ctx->r13;
    // 0x800635E8: sb          $t6, 0x249D($s0)
    MEM_B(0X249D, ctx->r16) = ctx->r14;
    // 0x800635EC: sb          $t7, 0x2491($s0)
    MEM_B(0X2491, ctx->r16) = ctx->r15;
    // 0x800635F0: sh          $zero, 0x24A4($s0)
    MEM_H(0X24A4, ctx->r16) = 0;
    // 0x800635F4: sh          $t8, 0x24A8($s0)
    MEM_H(0X24A8, ctx->r16) = ctx->r24;
    // 0x800635F8: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x800635FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80063600: jal         0x8002135C
    // 0x80063604: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80063604: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    after_3:
    // 0x80063608: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8006360C: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x80063610: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80063614: lw          $a1, 0xC8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC8);
    // 0x80063618: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x8006361C: lhu         $t9, 0x6($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X6);
    // 0x80063620: addiu       $a0, $a0, -0x3848
    ctx->r4 = ADD32(ctx->r4, -0X3848);
    // 0x80063624: sb          $t9, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r25;
    // 0x80063628: lhu         $t0, 0x1A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X1A);
    // 0x8006362C: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    // 0x80063630: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x80063634: lbu         $a2, 0x308($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X308);
    // 0x80063638: jal         0x8006ED60
    // 0x8006363C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8006ED60(rdram, ctx);
        goto after_4;
    // 0x8006363C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_4:
    // 0x80063640: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80063644: lw          $v0, 0xB28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB28);
    // 0x80063648: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8006364C: lw          $t3, 0xC8($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC8);
    // 0x80063650: lhu         $t4, 0x1A($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X1A);
    // 0x80063654: lbu         $a1, 0x2A($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2A);
    // 0x80063658: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8006365C: lbu         $a2, 0x308($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X308);
    // 0x80063660: addiu       $a0, $a0, 0x6D58
    ctx->r4 = ADD32(ctx->r4, 0X6D58);
    // 0x80063664: jal         0x80039440
    // 0x80063668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039440(rdram, ctx);
        goto after_5;
    // 0x80063668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x8006366C: lbu         $t7, 0x24D1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X24D1);
    // 0x80063670: lbu         $t9, 0x24D0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X24D0);
    // 0x80063674: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x80063678: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8006367C: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x80063680: addiu       $t2, $zero, 0x70
    ctx->r10 = ADD32(0, 0X70);
    // 0x80063684: addiu       $t3, $zero, 0x8C
    ctx->r11 = ADD32(0, 0X8C);
    // 0x80063688: addiu       $t4, $t4, -0x3580
    ctx->r12 = ADD32(ctx->r12, -0X3580);
    // 0x8006368C: andi        $t8, $t7, 0xFFBF
    ctx->r24 = ctx->r15 & 0XFFBF;
    // 0x80063690: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x80063694: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80063698: sb          $t6, 0x24CC($s0)
    MEM_B(0X24CC, ctx->r16) = ctx->r14;
    // 0x8006369C: sb          $t8, 0x24D1($s0)
    MEM_B(0X24D1, ctx->r16) = ctx->r24;
    // 0x800636A0: sb          $t0, 0x24D0($s0)
    MEM_B(0X24D0, ctx->r16) = ctx->r8;
    // 0x800636A4: sb          $t1, 0x24CD($s0)
    MEM_B(0X24CD, ctx->r16) = ctx->r9;
    // 0x800636A8: sh          $t2, 0x24E0($s0)
    MEM_H(0X24E0, ctx->r16) = ctx->r10;
    // 0x800636AC: sh          $t3, 0x24E4($s0)
    MEM_H(0X24E4, ctx->r16) = ctx->r11;
    // 0x800636B0: sw          $t4, 0x24F8($s0)
    MEM_W(0X24F8, ctx->r16) = ctx->r12;
    // 0x800636B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800636B8: jr          $ra
    // 0x800636BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800636BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800636C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800636C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800636C4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800636C8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800636CC: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x800636D0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x800636D4: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x800636D8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x800636DC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800636E0:
    // 0x800636E0: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800636E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800636E8: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x800636EC: slti        $at, $t1, 0xC
    ctx->r1 = SIGNED(ctx->r9) < 0XC ? 1 : 0;
    // 0x800636F0: mflo        $t6
    ctx->r14 = lo;
    // 0x800636F4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x800636F8: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x800636FC: lbu         $t8, 0x2148($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2148);
    // 0x80063700: nop

    // 0x80063704: beq         $t8, $zero, L_8006371C
    if (ctx->r24 == 0) {
        // 0x80063708: nop
    
            goto L_8006371C;
    }
    // 0x80063708: nop

    // 0x8006370C: lh          $t9, 0x2160($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2160);
    // 0x80063710: nop

    // 0x80063714: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80063718: sh          $t0, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r8;
L_8006371C:
    // 0x8006371C: bne         $at, $zero, L_800636E0
    if (ctx->r1 != 0) {
        // 0x80063720: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_800636E0;
    }
    // 0x80063720: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80063724: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80063728:
    // 0x80063728: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006372C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063730: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80063734: slti        $at, $t7, 0x28
    ctx->r1 = SIGNED(ctx->r15) < 0X28 ? 1 : 0;
    // 0x80063738: mflo        $t2
    ctx->r10 = lo;
    // 0x8006373C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80063740: addu        $v1, $t3, $a2
    ctx->r3 = ADD32(ctx->r11, ctx->r6);
    // 0x80063744: lbu         $t4, 0x2148($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X2148);
    // 0x80063748: nop

    // 0x8006374C: beq         $t4, $zero, L_80063764
    if (ctx->r12 == 0) {
        // 0x80063750: nop
    
            goto L_80063764;
    }
    // 0x80063750: nop

    // 0x80063754: lh          $t5, 0x2160($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2160);
    // 0x80063758: nop

    // 0x8006375C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80063760: sh          $t6, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r14;
L_80063764:
    // 0x80063764: bne         $at, $zero, L_80063728
    if (ctx->r1 != 0) {
        // 0x80063768: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80063728;
    }
    // 0x80063768: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8006376C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80063770:
    // 0x80063770: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063774: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063778: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8006377C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80063780: mflo        $t8
    ctx->r24 = lo;
    // 0x80063784: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80063788: addu        $v1, $t9, $a2
    ctx->r3 = ADD32(ctx->r25, ctx->r6);
    // 0x8006378C: lbu         $t0, 0x2148($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2148);
    // 0x80063790: nop

    // 0x80063794: beq         $t0, $zero, L_800637AC
    if (ctx->r8 == 0) {
        // 0x80063798: nop
    
            goto L_800637AC;
    }
    // 0x80063798: nop

    // 0x8006379C: lh          $t1, 0x2160($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2160);
    // 0x800637A0: nop

    // 0x800637A4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800637A8: sh          $t2, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r10;
L_800637AC:
    // 0x800637AC: bne         $at, $zero, L_80063770
    if (ctx->r1 != 0) {
        // 0x800637B0: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_80063770;
    }
    // 0x800637B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x800637B4: lui         $a3, 0x8010
    ctx->r7 = S32(0X8010 << 16);
    // 0x800637B8: addiu       $a3, $a3, 0x4890
    ctx->r7 = ADD32(ctx->r7, 0X4890);
    // 0x800637BC: lh          $t4, 0x7EF4($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X7EF4);
    // 0x800637C0: lh          $t6, 0x7F14($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X7F14);
    // 0x800637C4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800637C8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800637CC: sh          $t5, 0x7EF4($a3)
    MEM_H(0X7EF4, ctx->r7) = ctx->r13;
    // 0x800637D0: sh          $t7, 0x7F14($a3)
    MEM_H(0X7F14, ctx->r7) = ctx->r15;
    // 0x800637D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800637D8:
    // 0x800637D8: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800637DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800637E0: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x800637E4: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x800637E8: mflo        $t8
    ctx->r24 = lo;
    // 0x800637EC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x800637F0: addu        $v1, $t9, $a2
    ctx->r3 = ADD32(ctx->r25, ctx->r6);
    // 0x800637F4: lbu         $t0, 0x2148($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2148);
    // 0x800637F8: nop

    // 0x800637FC: beq         $t0, $zero, L_80063814
    if (ctx->r8 == 0) {
        // 0x80063800: nop
    
            goto L_80063814;
    }
    // 0x80063800: nop

    // 0x80063804: lh          $t1, 0x2160($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2160);
    // 0x80063808: nop

    // 0x8006380C: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x80063810: sh          $t2, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r10;
L_80063814:
    // 0x80063814: bne         $at, $zero, L_800637D8
    if (ctx->r1 != 0) {
        // 0x80063818: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_800637D8;
    }
    // 0x80063818: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8006381C: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_80063820:
    // 0x80063820: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063824: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063828: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8006382C: slti        $at, $t9, 0x32
    ctx->r1 = SIGNED(ctx->r25) < 0X32 ? 1 : 0;
    // 0x80063830: mflo        $t4
    ctx->r12 = lo;
    // 0x80063834: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x80063838: addu        $v1, $t5, $a2
    ctx->r3 = ADD32(ctx->r13, ctx->r6);
    // 0x8006383C: lbu         $t6, 0x2148($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2148);
    // 0x80063840: nop

    // 0x80063844: beq         $t6, $zero, L_8006385C
    if (ctx->r14 == 0) {
        // 0x80063848: nop
    
            goto L_8006385C;
    }
    // 0x80063848: nop

    // 0x8006384C: lh          $t7, 0x2160($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2160);
    // 0x80063850: nop

    // 0x80063854: addiu       $t8, $t7, -0x8
    ctx->r24 = ADD32(ctx->r15, -0X8);
    // 0x80063858: sh          $t8, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r24;
L_8006385C:
    // 0x8006385C: bne         $at, $zero, L_80063820
    if (ctx->r1 != 0) {
        // 0x80063860: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80063820;
    }
    // 0x80063860: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80063864: lbu         $t0, 0x2AA8($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X2AA8);
    // 0x80063868: nop

    // 0x8006386C: beq         $t0, $zero, L_80063884
    if (ctx->r8 == 0) {
        // 0x80063870: nop
    
            goto L_80063884;
    }
    // 0x80063870: nop

    // 0x80063874: lh          $t1, 0x2AC0($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X2AC0);
    // 0x80063878: nop

    // 0x8006387C: addiu       $t2, $t1, -0x8
    ctx->r10 = ADD32(ctx->r9, -0X8);
    // 0x80063880: sh          $t2, 0x2AC0($a3)
    MEM_H(0X2AC0, ctx->r7) = ctx->r10;
L_80063884:
    // 0x80063884: jr          $ra
    // 0x80063888: nop

    return;
    // 0x80063888: nop

;}
RECOMP_FUNC void func_8006388C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006388C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80063890: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80063894: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x80063898: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8006389C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800638A0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_800638A4:
    // 0x800638A4: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800638A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800638AC: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800638B0: slti        $at, $t9, 0x32
    ctx->r1 = SIGNED(ctx->r25) < 0X32 ? 1 : 0;
    // 0x800638B4: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x800638B8: mflo        $t6
    ctx->r14 = lo;
    // 0x800638BC: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x800638C0: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x800638C4: bne         $at, $zero, L_800638A4
    if (ctx->r1 != 0) {
        // 0x800638C8: sb          $zero, 0x2148($t8)
        MEM_B(0X2148, ctx->r24) = 0;
            goto L_800638A4;
    }
    // 0x800638C8: sb          $zero, 0x2148($t8)
    MEM_B(0X2148, ctx->r24) = 0;
    // 0x800638CC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x800638D0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x800638D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800638D8: sb          $t0, 0x2418($v0)
    MEM_B(0X2418, ctx->r2) = ctx->r8;
    // 0x800638DC: sb          $zero, 0x7EEC($v0)
    MEM_B(0X7EEC, ctx->r2) = 0;
    // 0x800638E0: sb          $zero, 0x7F0C($v0)
    MEM_B(0X7F0C, ctx->r2) = 0;
    // 0x800638E4: sb          $zero, 0x3534($v0)
    MEM_B(0X3534, ctx->r2) = 0;
    // 0x800638E8: jr          $ra
    // 0x800638EC: sb          $zero, 0x3570($v0)
    MEM_B(0X3570, ctx->r2) = 0;
    return;
    // 0x800638EC: sb          $zero, 0x3570($v0)
    MEM_B(0X3570, ctx->r2) = 0;
;}
RECOMP_FUNC void func_800638F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800638F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800638F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800638F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800638FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80063900: jal         0x80063C10
    // 0x80063904: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_80063C10(rdram, ctx);
        goto after_0;
    // 0x80063904: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80063908: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8006390C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80063910: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80063914: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x80063918: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8006391C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80063920: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80063924: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80063928: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8006392C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80063930: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80063934: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80063938: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8006393C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80063940: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80063944: jal         0x80064008
    // 0x80063948: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_80064008(rdram, ctx);
        goto after_1;
    // 0x80063948: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x8006394C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80063950: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80063954: jr          $ra
    // 0x80063958: nop

    return;
    // 0x80063958: nop

;}
RECOMP_FUNC void func_800639FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800639FC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80063A00: addiu       $v1, $v1, 0x3710
    ctx->r3 = ADD32(ctx->r3, 0X3710);
    // 0x80063A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80063A08: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
L_80063A0C:
    // 0x80063A0C: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x80063A10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80063A14: bne         $t6, $zero, L_80063A44
    if (ctx->r14 != 0) {
        // 0x80063A18: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80063A44;
    }
    // 0x80063A18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80063A1C: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80063A20: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80063A24: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80063A28: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80063A2C: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80063A30: sw          $t7, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r15;
    // 0x80063A34: sw          $a2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r6;
    // 0x80063A38: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80063A3C: jr          $ra
    // 0x80063A40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80063A40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80063A44:
    // 0x80063A44: lw          $t8, 0x3C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X3C);
    // 0x80063A48: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80063A4C: bne         $t8, $zero, L_80063A7C
    if (ctx->r24 != 0) {
        // 0x80063A50: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80063A7C;
    }
    // 0x80063A50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80063A54: sw          $t9, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r25;
    // 0x80063A58: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80063A5C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80063A60: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80063A64: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80063A68: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80063A6C: sw          $a2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r6;
    // 0x80063A70: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80063A74: jr          $ra
    // 0x80063A78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80063A78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80063A7C:
    // 0x80063A7C: lw          $t0, 0x3C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X3C);
    // 0x80063A80: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80063A84: bne         $t0, $zero, L_80063AB4
    if (ctx->r8 != 0) {
        // 0x80063A88: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80063AB4;
    }
    // 0x80063A88: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80063A8C: sw          $t1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r9;
    // 0x80063A90: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80063A94: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80063A98: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80063A9C: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80063AA0: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80063AA4: sw          $a2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r6;
    // 0x80063AA8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80063AAC: jr          $ra
    // 0x80063AB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80063AB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80063AB4:
    // 0x80063AB4: lw          $t2, 0x3C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X3C);
    // 0x80063AB8: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80063ABC: bne         $t2, $zero, L_80063AEC
    if (ctx->r10 != 0) {
        // 0x80063AC0: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80063AEC;
    }
    // 0x80063AC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80063AC4: sw          $t3, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r11;
    // 0x80063AC8: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80063ACC: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80063AD0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80063AD4: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80063AD8: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80063ADC: sw          $a2, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r6;
    // 0x80063AE0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80063AE4: jr          $ra
    // 0x80063AE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80063AE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80063AEC:
    // 0x80063AEC: bne         $v0, $a3, L_80063A0C
    if (ctx->r2 != ctx->r7) {
        // 0x80063AF0: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_80063A0C;
    }
    // 0x80063AF0: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80063AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80063AF8: jr          $ra
    // 0x80063AFC: nop

    return;
    // 0x80063AFC: nop

;}
RECOMP_FUNC void func_80063B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063B00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80063B04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063B08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80063B0C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80063B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80063B14: jal         0x800639FC
    // 0x80063B18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800639FC(rdram, ctx);
        goto after_0;
    // 0x80063B18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80063B1C: bne         $v0, $zero, L_80063B2C
    if (ctx->r2 != 0) {
        // 0x80063B20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80063B2C;
    }
    // 0x80063B20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80063B24: b           L_80063B40
    // 0x80063B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80063B40;
    // 0x80063B28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80063B2C:
    // 0x80063B2C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80063B30: jal         0x80064310
    // 0x80063B34: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80064310(rdram, ctx);
        goto after_1;
    // 0x80063B34: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80063B38: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80063B3C: nop

L_80063B40:
    // 0x80063B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80063B48: jr          $ra
    // 0x80063B4C: nop

    return;
    // 0x80063B4C: nop

;}
RECOMP_FUNC void func_80063B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063B50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80063B54: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80063B58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80063B5C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x80063B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063B64: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80063B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063B6C: lh          $a1, -0x3BCA($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3BCA);
    // 0x80063B70: jal         0x80063B00
    // 0x80063B74: nop

    func_80063B00(rdram, ctx);
        goto after_0;
    // 0x80063B74: nop

    after_0:
    // 0x80063B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80063B80: jr          $ra
    // 0x80063B84: nop

    return;
    // 0x80063B84: nop

;}
RECOMP_FUNC void func_80063B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063B88: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80063B8C: jr          $ra
    // 0x80063B90: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    return;
    // 0x80063B90: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80063B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063B94: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80063B98: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80063B9C: addiu       $v0, $v0, 0x39E0
    ctx->r2 = ADD32(ctx->r2, 0X39E0);
    // 0x80063BA0: addiu       $v1, $v1, 0x3710
    ctx->r3 = ADD32(ctx->r3, 0X3710);
L_80063BA4:
    // 0x80063BA4: addiu       $v1, $v1, 0x90
    ctx->r3 = ADD32(ctx->r3, 0X90);
    // 0x80063BA8: sw          $zero, -0x54($v1)
    MEM_W(-0X54, ctx->r3) = 0;
    // 0x80063BAC: sw          $zero, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = 0;
    // 0x80063BB0: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x80063BB4: bne         $v1, $v0, L_80063BA4
    if (ctx->r3 != ctx->r2) {
        // 0x80063BB8: sw          $zero, -0x78($v1)
        MEM_W(-0X78, ctx->r3) = 0;
            goto L_80063BA4;
    }
    // 0x80063BB8: sw          $zero, -0x78($v1)
    MEM_W(-0X78, ctx->r3) = 0;
    // 0x80063BBC: jr          $ra
    // 0x80063BC0: nop

    return;
    // 0x80063BC0: nop

;}
RECOMP_FUNC void func_80063BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063BF0: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x80063BF4: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80063BF8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80063BFC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80063C00: multu       $t7, $t9
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063C04: mflo        $v0
    ctx->r2 = lo;
    // 0x80063C08: jr          $ra
    // 0x80063C0C: nop

    return;
    // 0x80063C0C: nop

;}
RECOMP_FUNC void func_80063C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063C10: bgez        $a1, L_80063C1C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80063C14: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80063C1C;
    }
    // 0x80063C14: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80063C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80063C1C:
    // 0x80063C1C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80063C20: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x80063C24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063C28: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80063C2C: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80063C30: mflo        $v0
    ctx->r2 = lo;
    // 0x80063C34: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80063C38: nop

    // 0x80063C3C: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x80063C40: bne         $v0, $zero, L_80063C4C
    if (ctx->r2 != 0) {
        // 0x80063C44: nop
    
            goto L_80063C4C;
    }
    // 0x80063C44: nop

    // 0x80063C48: break       7
    do_break(2147892296);
L_80063C4C:
    // 0x80063C4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063C50: bne         $v0, $at, L_80063C64
    if (ctx->r2 != ctx->r1) {
        // 0x80063C54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80063C64;
    }
    // 0x80063C54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80063C58: bne         $a1, $at, L_80063C64
    if (ctx->r5 != ctx->r1) {
        // 0x80063C5C: nop
    
            goto L_80063C64;
    }
    // 0x80063C5C: nop

    // 0x80063C60: break       6
    do_break(2147892320);
L_80063C64:
    // 0x80063C64: mfhi        $t6
    ctx->r14 = hi;
    // 0x80063C68: nop

    // 0x80063C6C: nop

    // 0x80063C70: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x80063C74: bne         $v1, $zero, L_80063C80
    if (ctx->r3 != 0) {
        // 0x80063C78: nop
    
            goto L_80063C80;
    }
    // 0x80063C78: nop

    // 0x80063C7C: break       7
    do_break(2147892348);
L_80063C80:
    // 0x80063C80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063C84: bne         $v1, $at, L_80063C98
    if (ctx->r3 != ctx->r1) {
        // 0x80063C88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80063C98;
    }
    // 0x80063C88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80063C8C: bne         $t6, $at, L_80063C98
    if (ctx->r14 != ctx->r1) {
        // 0x80063C90: nop
    
            goto L_80063C98;
    }
    // 0x80063C90: nop

    // 0x80063C94: break       6
    do_break(2147892372);
L_80063C98:
    // 0x80063C98: mflo        $t7
    ctx->r15 = lo;
    // 0x80063C9C: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
    // 0x80063CA0: nop

    // 0x80063CA4: div         $zero, $a1, $v1
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r3)));
    // 0x80063CA8: bne         $v1, $zero, L_80063CB4
    if (ctx->r3 != 0) {
        // 0x80063CAC: nop
    
            goto L_80063CB4;
    }
    // 0x80063CAC: nop

    // 0x80063CB0: break       7
    do_break(2147892400);
L_80063CB4:
    // 0x80063CB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063CB8: bne         $v1, $at, L_80063CCC
    if (ctx->r3 != ctx->r1) {
        // 0x80063CBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80063CCC;
    }
    // 0x80063CBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80063CC0: bne         $a1, $at, L_80063CCC
    if (ctx->r5 != ctx->r1) {
        // 0x80063CC4: nop
    
            goto L_80063CCC;
    }
    // 0x80063CC4: nop

    // 0x80063CC8: break       6
    do_break(2147892424);
L_80063CCC:
    // 0x80063CCC: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80063CD0: mfhi        $t8
    ctx->r24 = hi;
    // 0x80063CD4: sw          $t8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r24;
    // 0x80063CD8: bne         $at, $zero, L_80063CF0
    if (ctx->r1 != 0) {
        // 0x80063CDC: nop
    
            goto L_80063CF0;
    }
    // 0x80063CDC: nop

    // 0x80063CE0: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x80063CE4: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80063CE8: jr          $ra
    // 0x80063CEC: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    return;
    // 0x80063CEC: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
L_80063CF0:
    // 0x80063CF0: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80063CF4: jr          $ra
    // 0x80063CF8: nop

    return;
    // 0x80063CF8: nop

;}
RECOMP_FUNC void func_80063CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063CFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80063D00: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x80063D04: lwc1        $f20, 0x60($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80063D08: swc1        $f23, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80063D0C: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x80063D10: mul.s       $f22, $f20, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f22.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80063D14: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80063D18: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80063D1C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80063D20: mul.s       $f4, $f22, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x80063D24: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80063D28: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80063D2C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80063D30: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80063D34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80063D38: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80063D3C: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80063D40: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80063D44: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80063D48: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80063D4C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80063D50: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80063D54: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80063D58: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80063D5C: nop

    // 0x80063D60: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80063D64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80063D68: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80063D6C: mul.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80063D70: nop

    // 0x80063D74: mul.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80063D78: sub.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80063D7C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80063D80: mul.s       $f6, $f22, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80063D84: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80063D88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80063D8C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80063D90: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80063D94: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80063D98: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80063D9C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80063DA0: add.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x80063DA4: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x80063DA8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80063DAC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80063DB0: mul.s       $f18, $f0, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80063DB4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x80063DB8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80063DBC: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80063DC0: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80063DC4: sub.s       $f10, $f18, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80063DC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x80063DCC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80063DD0: nop

    // 0x80063DD4: sub.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80063DD8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x80063DDC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80063DE0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80063DE4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x80063DE8: mul.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80063DEC: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80063DF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063DF4: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80063DF8: mul.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80063DFC: nop

    // 0x80063E00: mul.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80063E04: sub.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80063E08: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80063E0C: nop

    // 0x80063E10: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80063E14: mul.s       $f6, $f22, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80063E18: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80063E1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80063E20: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80063E24: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80063E28: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80063E2C: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80063E30: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80063E34: add.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x80063E38: swc1        $f8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f8.u32l;
    // 0x80063E3C: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80063E40: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80063E44: mul.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80063E48: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80063E4C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80063E50: mul.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80063E54: sub.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x80063E58: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80063E5C: sub.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80063E60: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80063E64: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80063E68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80063E6C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80063E70: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80063E74: nop

    // 0x80063E78: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80063E7C: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80063E80: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x80063E84: mul.s       $f10, $f22, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f6.fl);
    // 0x80063E88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063E8C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80063E90: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x80063E94: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80063E98: mul.s       $f6, $f20, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x80063E9C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80063EA0: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80063EA4: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x80063EA8: lwc1        $f22, 0x14($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80063EAC: lwc1        $f23, 0x10($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80063EB0: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80063EB4: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x80063EB8: jr          $ra
    // 0x80063EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80063EBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80063EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063EC0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80063EC4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80063EC8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80063ECC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80063ED0: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x80063ED4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80063ED8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80063EDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80063EE0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80063EE4: nop

    // 0x80063EE8: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80063EEC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80063EF0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80063EF4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80063EF8: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80063EFC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80063F00: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x80063F04: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80063F08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80063F0C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80063F10: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80063F14: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x80063F18: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80063F1C: add.d       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f18.d + ctx->f8.d;
    // 0x80063F20: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80063F24: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80063F28: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80063F2C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80063F30: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80063F34: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80063F38: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80063F3C: nop

    // 0x80063F40: div.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80063F44: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80063F48: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80063F4C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80063F50: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x80063F54: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80063F58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80063F5C: sub.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80063F60: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80063F64: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80063F68: nop

    // 0x80063F6C: div.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80063F70: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x80063F74: add.d       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f8.d + ctx->f16.d;
    // 0x80063F78: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x80063F7C: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80063F80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x80063F84: sub.s       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80063F88: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x80063F8C: nop

    // 0x80063F90: div.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80063F94: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80063F98: add.d       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f16.d + ctx->f8.d;
    // 0x80063F9C: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x80063FA0: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80063FA4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80063FA8: sub.s       $f8, $f14, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x80063FAC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80063FB0: nop

    // 0x80063FB4: div.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x80063FB8: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x80063FBC: add.d       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f8.d + ctx->f16.d;
    // 0x80063FC0: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x80063FC4: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80063FC8: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80063FCC: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80063FD0: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80063FD4: nop

    // 0x80063FD8: div.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x80063FDC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80063FE0: add.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f8.d + ctx->f16.d;
    // 0x80063FE4: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80063FE8: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80063FEC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80063FF0: jal         0x80063CFC
    // 0x80063FF4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_80063CFC(rdram, ctx);
        goto after_0;
    // 0x80063FF4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80063FF8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80063FFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80064000: jr          $ra
    // 0x80064004: nop

    return;
    // 0x80064004: nop

;}
RECOMP_FUNC void func_80064008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064008: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8006400C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80064010: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80064014: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80064018: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8006401C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80064020: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80064024: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80064028: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x8006402C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x80064030: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80064034: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80064038: bne         $v1, $zero, L_80064048
    if (ctx->r3 != 0) {
        // 0x8006403C: addu        $v0, $t6, $t8
        ctx->r2 = ADD32(ctx->r14, ctx->r24);
            goto L_80064048;
    }
    // 0x8006403C: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x80064040: b           L_8006404C
    // 0x80064044: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_8006404C;
    // 0x80064044: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_80064048:
    // 0x80064048: addiu       $t0, $v0, -0x24
    ctx->r8 = ADD32(ctx->r2, -0X24);
L_8006404C:
    // 0x8006404C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80064050: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80064054: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064058: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006405C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80064060: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80064064: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80064068: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8006406C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80064070: slt         $at, $t9, $a2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80064074: bne         $at, $zero, L_800640F4
    if (ctx->r1 != 0) {
        // 0x80064078: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_800640F4;
    }
    // 0x80064078: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8006407C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80064080: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80064084: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80064088: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x8006408C: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x80064090: lwc1        $f6, -0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, -0X4);
    // 0x80064094: nop

    // 0x80064098: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x8006409C: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x800640A0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800640A4: nop

    // 0x800640A8: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x800640AC: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x800640B0: nop

    // 0x800640B4: swc1        $f0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f0.u32l;
    // 0x800640B8: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x800640BC: nop

    // 0x800640C0: swc1        $f2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f2.u32l;
    // 0x800640C4: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x800640C8: nop

    // 0x800640CC: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x800640D0: lw          $t8, 0xC4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC4);
    // 0x800640D4: nop

    // 0x800640D8: swc1        $f14, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f14.u32l;
    // 0x800640DC: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x800640E0: nop

    // 0x800640E4: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x800640E8: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x800640EC: b           L_800642C0
    // 0x800640F0: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
        goto L_800642C0;
    // 0x800640F0: swc1        $f18, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f18.u32l;
L_800640F4:
    // 0x800640F4: addiu       $t3, $v1, 0x2
    ctx->r11 = ADD32(ctx->r3, 0X2);
    // 0x800640F8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x800640FC: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80064100: bne         $at, $zero, L_80064110
    if (ctx->r1 != 0) {
        // 0x80064104: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80064110;
    }
    // 0x80064104: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80064108: b           L_80064114
    // 0x8006410C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80064114;
    // 0x8006410C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80064110:
    // 0x80064110: addiu       $v1, $v0, 0x24
    ctx->r3 = ADD32(ctx->r2, 0X24);
L_80064114:
    // 0x80064114: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80064118: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x8006411C: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80064120: lwc1        $f14, 0x10($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80064124: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80064128: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8006412C: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80064130: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80064134: lw          $a3, 0xC($a1)
    ctx->r7 = MEM_W(ctx->r5, 0XC);
    // 0x80064138: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8006413C: lwc1        $f18, 0x14($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80064140: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80064144: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80064148: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8006414C: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80064150: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80064154: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80064158: lwc1        $f18, 0x10($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X10);
    // 0x8006415C: div.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80064160: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80064164: lwc1        $f18, 0x14($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X14);
    // 0x80064168: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x8006416C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80064170: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80064174: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x80064178: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8006417C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80064180: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80064184: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80064188: lwc1        $f18, 0x14($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X14);
    // 0x8006418C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80064190: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80064194: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80064198: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8006419C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x800641A0: sw          $v1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r3;
    // 0x800641A4: sw          $a0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r4;
    // 0x800641A8: sw          $a1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r5;
    // 0x800641AC: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x800641B0: jal         0x80063EC0
    // 0x800641B4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_80063EC0(rdram, ctx);
        goto after_0;
    // 0x800641B4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x800641B8: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x800641BC: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x800641C0: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800641C4: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800641C8: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800641CC: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x800641D0: lw          $a3, 0x0($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X0);
    // 0x800641D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800641D8: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800641DC: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x800641E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800641E4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x800641E8: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x800641EC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x800641F0: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800641F4: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x800641F8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x800641FC: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80064200: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x80064204: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80064208: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8006420C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80064210: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80064214: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80064218: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8006421C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80064220: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80064224: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80064228: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8006422C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80064230: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80064234: jal         0x80063EC0
    // 0x80064238: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_80063EC0(rdram, ctx);
        goto after_1;
    // 0x80064238: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8006423C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80064240: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x80064244: lwc1        $f12, 0x18($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X18);
    // 0x80064248: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8006424C: lwc1        $f14, 0x1C($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80064250: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x80064254: lw          $a3, 0x18($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X18);
    // 0x80064258: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8006425C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80064260: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80064264: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x80064268: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8006426C: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x80064270: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80064274: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80064278: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x8006427C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80064280: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80064284: lw          $t3, 0xB0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB0);
    // 0x80064288: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8006428C: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80064290: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80064294: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80064298: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8006429C: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x800642A0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x800642A4: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x800642A8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x800642AC: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x800642B0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800642B4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x800642B8: jal         0x80063EC0
    // 0x800642BC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_80063EC0(rdram, ctx);
        goto after_2;
    // 0x800642BC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_2:
L_800642C0:
    // 0x800642C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800642C4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800642C8: jr          $ra
    // 0x800642CC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x800642CC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_800642D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800642D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800642D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800642D8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800642DC: lui         $t6, 0x4000
    ctx->r14 = S32(0X4000 << 16);
    // 0x800642E0: lui         $t7, 0x8039
    ctx->r15 = S32(0X8039 << 16);
    // 0x800642E4: addiu       $a0, $a0, 0x39E0
    ctx->r4 = ADD32(ctx->r4, 0X39E0);
    // 0x800642E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800642EC: ori         $t6, $t6, 0x55
    ctx->r14 = ctx->r14 | 0X55;
    // 0x800642F0: addiu       $t7, $t7, 0x6A00
    ctx->r15 = ADD32(ctx->r15, 0X6A00);
    // 0x800642F4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800642F8: jal         0x80025A10
    // 0x800642FC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x800642FC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    after_0:
    // 0x80064300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80064308: jr          $ra
    // 0x8006430C: nop

    return;
    // 0x8006430C: nop

;}
RECOMP_FUNC void func_80064310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064310: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80064314: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80064318: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8006431C: addiu       $t7, $t7, -0x3BD0
    ctx->r15 = ADD32(ctx->r15, -0X3BD0);
    // 0x80064320: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80064324: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80064328: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x8006432C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80064330: beq         $v0, $zero, L_80064360
    if (ctx->r2 == 0) {
        // 0x80064334: lui         $t8, 0x8039
        ctx->r24 = S32(0X8039 << 16);
            goto L_80064360;
    }
    // 0x80064334: lui         $t8, 0x8039
    ctx->r24 = S32(0X8039 << 16);
    // 0x80064338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006433C: beq         $v0, $at, L_8006436C
    if (ctx->r2 == ctx->r1) {
        // 0x80064340: lui         $t9, 0x8034
        ctx->r25 = S32(0X8034 << 16);
            goto L_8006436C;
    }
    // 0x80064340: lui         $t9, 0x8034
    ctx->r25 = S32(0X8034 << 16);
    // 0x80064344: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80064348: beq         $v0, $at, L_80064378
    if (ctx->r2 == ctx->r1) {
        // 0x8006434C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80064378;
    }
    // 0x8006434C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80064350: beq         $v0, $at, L_80064380
    if (ctx->r2 == ctx->r1) {
        // 0x80064354: lui         $t0, 0x8036
        ctx->r8 = S32(0X8036 << 16);
            goto L_80064380;
    }
    // 0x80064354: lui         $t0, 0x8036
    ctx->r8 = S32(0X8036 << 16);
    // 0x80064358: b           L_8006438C
    // 0x8006435C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
        goto L_8006438C;
    // 0x8006435C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_80064360:
    // 0x80064360: addiu       $t8, $t8, 0x6A00
    ctx->r24 = ADD32(ctx->r24, 0X6A00);
    // 0x80064364: b           L_80064388
    // 0x80064368: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
        goto L_80064388;
    // 0x80064368: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_8006436C:
    // 0x8006436C: addiu       $t9, $t9, -0xD80
    ctx->r25 = ADD32(ctx->r25, -0XD80);
    // 0x80064370: b           L_80064388
    // 0x80064374: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
        goto L_80064388;
    // 0x80064374: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_80064378:
    // 0x80064378: b           L_80064388
    // 0x8006437C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
        goto L_80064388;
    // 0x8006437C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80064380:
    // 0x80064380: addiu       $t0, $t0, 0x4280
    ctx->r8 = ADD32(ctx->r8, 0X4280);
    // 0x80064384: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_80064388:
    // 0x80064388: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
L_8006438C:
    // 0x8006438C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80064390: nop

    // 0x80064394: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80064398: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x8006439C: lh          $t4, 0x4($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X4);
    // 0x800643A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x800643A4: jr          $ra
    // 0x800643A8: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    return;
    // 0x800643A8: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x800643AC: nop

;}
RECOMP_FUNC void func_8006445C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006445C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80064460: lhu         $t7, 0x954($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X954);
    // 0x80064464: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80064468: subu        $v1, $t7, $t6
    ctx->r3 = SUB32(ctx->r15, ctx->r14);
    // 0x8006446C: bltz        $v1, L_8006447C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80064470: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8006447C;
    }
    // 0x80064470: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80064474: jr          $ra
    // 0x80064478: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80064478: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8006447C:
    // 0x8006447C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80064480: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x80064484: jr          $ra
    // 0x80064488: nop

    return;
    // 0x80064488: nop

;}
RECOMP_FUNC void func_8006448C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006448C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80064490: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x80064494: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80064498: bne         $t6, $zero, L_80064728
    if (ctx->r14 != 0) {
        // 0x8006449C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80064728;
    }
    // 0x8006449C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800644A0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800644A4: lw          $t7, 0x3B20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3B20);
    // 0x800644A8: nop

    // 0x800644AC: lw          $v1, 0x88($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X88);
    // 0x800644B0: nop

    // 0x800644B4: bne         $v1, $zero, L_800644D0
    if (ctx->r3 != 0) {
        // 0x800644B8: nop
    
            goto L_800644D0;
    }
    // 0x800644B8: nop

    // 0x800644BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800644C0: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800644C4: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x800644C8: b           L_80064728
    // 0x800644CC: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
        goto L_80064728;
    // 0x800644CC: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
L_800644D0:
    // 0x800644D0: lw          $t8, 0xC8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC8);
    // 0x800644D4: nop

    // 0x800644D8: lh          $t9, 0x8B0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8B0);
    // 0x800644DC: nop

    // 0x800644E0: slti        $at, $t9, 0x12C
    ctx->r1 = SIGNED(ctx->r25) < 0X12C ? 1 : 0;
    // 0x800644E4: bne         $at, $zero, L_8006472C
    if (ctx->r1 != 0) {
        // 0x800644E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x800644E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800644EC: lwc1        $f4, 0x50($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X50);
    // 0x800644F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800644F4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800644F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800644FC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80064500: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80064504: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064508: bc1t        L_8006472C
    if (c1cs) {
        // 0x8006450C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x8006450C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064510: lw          $t0, 0xC8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC8);
    // 0x80064514: lwc1        $f19, -0x6238($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X6238);
    // 0x80064518: lw          $v0, 0x24($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X24);
    // 0x8006451C: lwc1        $f18, -0x6234($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6234);
    // 0x80064520: lhu         $a1, 0x318($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X318);
    // 0x80064524: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x80064528: sll         $t2, $a1, 5
    ctx->r10 = S32(ctx->r5 << 5);
    // 0x8006452C: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x80064530: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80064534: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80064538: lw          $t3, 0xC8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0XC8);
    // 0x8006453C: lwc1        $f14, 0x88($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80064540: lwc1        $f10, 0x8C0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8C0);
    // 0x80064544: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80064548: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8006454C: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80064550: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80064554: jal         0x80279308
    // 0x80064558: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x80064558: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x8006455C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80064560: lwc1        $f7, -0x6230($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X6230);
    // 0x80064564: lwc1        $f6, -0x622C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X622C);
    // 0x80064568: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8006456C: c.lt.d      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.d < ctx->f6.d;
    // 0x80064570: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80064574: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80064578: bc1f        L_800645A8
    if (!c1cs) {
        // 0x8006457C: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_800645A8;
    }
    // 0x8006457C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80064580: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80064584: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80064588: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8006458C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80064590: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x80064594: bc1f        L_800645A8
    if (!c1cs) {
        // 0x80064598: nop
    
            goto L_800645A8;
    }
    // 0x80064598: nop

    // 0x8006459C: lhu         $t4, 0x4($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X4);
    // 0x800645A0: sw          $a0, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r4;
    // 0x800645A4: sh          $t4, 0xB0($v1)
    MEM_H(0XB0, ctx->r3) = ctx->r12;
L_800645A8:
    // 0x800645A8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x800645AC: lwc1        $f17, -0x6228($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6228);
    // 0x800645B0: lwc1        $f16, -0x6224($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6224);
    // 0x800645B4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800645B8: c.lt.d      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.d < ctx->f2.d;
    // 0x800645BC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800645C0: bc1f        L_800645F0
    if (!c1cs) {
        // 0x800645C4: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_800645F0;
    }
    // 0x800645C4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800645C8: lwc1        $f18, 0x84($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800645CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800645D0: nop

    // 0x800645D4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800645D8: nop

    // 0x800645DC: bc1f        L_800645F0
    if (!c1cs) {
        // 0x800645E0: nop
    
            goto L_800645F0;
    }
    // 0x800645E0: nop

    // 0x800645E4: lhu         $t5, 0x4($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X4);
    // 0x800645E8: sw          $a0, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = ctx->r4;
    // 0x800645EC: sh          $t5, 0xB2($v1)
    MEM_H(0XB2, ctx->r3) = ctx->r13;
L_800645F0:
    // 0x800645F0: lw          $a0, 0xA8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XA8);
    // 0x800645F4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800645F8: beq         $a0, $zero, L_80064624
    if (ctx->r4 == 0) {
        // 0x800645FC: nop
    
            goto L_80064624;
    }
    // 0x800645FC: nop

    // 0x80064600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80064604: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x80064608: nop

    // 0x8006460C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80064610: nop

    // 0x80064614: bc1f        L_80064624
    if (!c1cs) {
        // 0x80064618: nop
    
            goto L_80064624;
    }
    // 0x80064618: nop

    // 0x8006461C: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x80064620: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80064624:
    // 0x80064624: lw          $v0, 0xAC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XAC);
    // 0x80064628: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006462C: beq         $v0, $zero, L_80064654
    if (ctx->r2 == 0) {
        // 0x80064630: nop
    
            goto L_80064654;
    }
    // 0x80064630: nop

    // 0x80064634: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80064638: lwc1        $f16, 0x84($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X84);
    // 0x8006463C: nop

    // 0x80064640: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80064644: nop

    // 0x80064648: bc1f        L_80064654
    if (!c1cs) {
        // 0x8006464C: nop
    
            goto L_80064654;
    }
    // 0x8006464C: nop

    // 0x80064650: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
L_80064654:
    // 0x80064654: beq         $a0, $zero, L_8006472C
    if (ctx->r4 == 0) {
        // 0x80064658: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x80064658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006465C: lw          $v0, 0xAC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XAC);
    // 0x80064660: nop

    // 0x80064664: beq         $v0, $zero, L_8006472C
    if (ctx->r2 == 0) {
        // 0x80064668: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x80064668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006466C: bne         $v0, $a0, L_8006472C
    if (ctx->r2 != ctx->r4) {
        // 0x80064670: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x80064670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064674: lhu         $t6, 0xB0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XB0);
    // 0x80064678: lhu         $t7, 0xB2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XB2);
    // 0x8006467C: nop

    // 0x80064680: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80064684: beq         $at, $zero, L_8006472C
    if (ctx->r1 == 0) {
        // 0x80064688: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8006472C;
    }
    // 0x80064688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006468C: lhu         $a0, 0xB4($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0XB4);
    // 0x80064690: jal         0x8006445C
    // 0x80064694: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8006445C(rdram, ctx);
        goto after_1;
    // 0x80064694: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80064698: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8006469C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800646A0: sltiu       $at, $v0, 0x259
    ctx->r1 = ctx->r2 < 0X259 ? 1 : 0;
    // 0x800646A4: bne         $at, $zero, L_80064728
    if (ctx->r1 != 0) {
        // 0x800646A8: addiu       $v1, $v1, 0x950
        ctx->r3 = ADD32(ctx->r3, 0X950);
            goto L_80064728;
    }
    // 0x800646A8: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
    // 0x800646AC: lw          $t8, 0xC8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XC8);
    // 0x800646B0: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x800646B4: lhu         $t9, 0x8($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X8);
    // 0x800646B8: nop

    // 0x800646BC: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x800646C0: beq         $t0, $zero, L_80064704
    if (ctx->r8 == 0) {
        // 0x800646C4: nop
    
            goto L_80064704;
    }
    // 0x800646C4: nop

    // 0x800646C8: lh          $t1, -0x1B60($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1B60);
    // 0x800646CC: nop

    // 0x800646D0: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x800646D4: beq         $t2, $zero, L_800646F0
    if (ctx->r10 == 0) {
        // 0x800646D8: nop
    
            goto L_800646F0;
    }
    // 0x800646D8: nop

    // 0x800646DC: jal         0x80076DF4
    // 0x800646E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80076DF4(rdram, ctx);
        goto after_2;
    // 0x800646E0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x800646E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800646E8: b           L_80064718
    // 0x800646EC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
        goto L_80064718;
    // 0x800646EC: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
L_800646F0:
    // 0x800646F0: jal         0x80076E48
    // 0x800646F4: nop

    func_80076E48(rdram, ctx);
        goto after_3;
    // 0x800646F4: nop

    after_3:
    // 0x800646F8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800646FC: b           L_80064718
    // 0x80064700: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
        goto L_80064718;
    // 0x80064700: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
L_80064704:
    // 0x80064704: lw          $a0, 0xA8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XA8);
    // 0x80064708: jal         0x80076E6C
    // 0x8006470C: nop

    func_80076E6C(rdram, ctx);
        goto after_4;
    // 0x8006470C: nop

    after_4:
    // 0x80064710: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80064714: addiu       $v1, $v1, 0x950
    ctx->r3 = ADD32(ctx->r3, 0X950);
L_80064718:
    // 0x80064718: lhu         $t3, 0x4($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4);
    // 0x8006471C: sw          $zero, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = 0;
    // 0x80064720: sw          $zero, 0xAC($v1)
    MEM_W(0XAC, ctx->r3) = 0;
    // 0x80064724: sh          $t3, 0xB4($v1)
    MEM_H(0XB4, ctx->r3) = ctx->r11;
L_80064728:
    // 0x80064728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8006472C:
    // 0x8006472C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80064730: jr          $ra
    // 0x80064734: nop

    return;
    // 0x80064734: nop

;}
