#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802A1790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1790: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A1794: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802A1798: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A179C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802A17A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802A17A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A17A8: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x802A17AC: lui         $s5, 0x801A
    ctx->r21 = S32(0X801A << 16);
    // 0x802A17B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A17B4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802A17B8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802A17BC: addiu       $s5, $s5, -0x3B48
    ctx->r21 = ADD32(ctx->r21, -0X3B48);
    // 0x802A17C0: addiu       $s2, $s2, -0x2F98
    ctx->r18 = ADD32(ctx->r18, -0X2F98);
    // 0x802A17C4: lui         $s0, 0x3
    ctx->r16 = S32(0X3 << 16);
    // 0x802A17C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802A17CC: addiu       $s6, $zero, 0x50
    ctx->r22 = ADD32(0, 0X50);
L_802A17D0:
    // 0x802A17D0: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802A17D4: nop

    // 0x802A17D8: bne         $t6, $zero, L_802A18D8
    if (ctx->r14 != 0) {
        // 0x802A17DC: nop
    
            goto L_802A18D8;
    }
    // 0x802A17DC: nop

    // 0x802A17E0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A17E4: sll         $s4, $s1, 1
    ctx->r20 = S32(ctx->r17 << 1);
    // 0x802A17E8: addu        $t7, $v0, $s4
    ctx->r15 = ADD32(ctx->r2, ctx->r20);
    // 0x802A17EC: addu        $v1, $t7, $s0
    ctx->r3 = ADD32(ctx->r15, ctx->r16);
    // 0x802A17F0: lhu         $a0, 0x75A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X75A);
    // 0x802A17F4: nop

    // 0x802A17F8: bne         $a0, $zero, L_802A18D4
    if (ctx->r4 != 0) {
        // 0x802A17FC: addiu       $t2, $a0, -0x1
        ctx->r10 = ADD32(ctx->r4, -0X1);
            goto L_802A18D4;
    }
    // 0x802A17FC: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x802A1800: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A1804: mflo        $s3
    ctx->r19 = lo;
    // 0x802A1808: addu        $t8, $v0, $s3
    ctx->r24 = ADD32(ctx->r2, ctx->r19);
    // 0x802A180C: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802A1810: lhu         $a0, 0x75C($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X75C);
    // 0x802A1814: nop

    // 0x802A1818: beq         $a0, $zero, L_802A18D8
    if (ctx->r4 == 0) {
        // 0x802A181C: nop
    
            goto L_802A18D8;
    }
    // 0x802A181C: nop

    // 0x802A1820: jal         0x80015BC0
    // 0x802A1824: nop

    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x802A1824: nop

    after_0:
    // 0x802A1828: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A182C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A1830: addu        $t0, $v0, $s3
    ctx->r8 = ADD32(ctx->r2, ctx->r19);
    // 0x802A1834: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x802A1838: lhu         $t2, 0x75E($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X75E);
    // 0x802A183C: addu        $t3, $v0, $s4
    ctx->r11 = ADD32(ctx->r2, ctx->r20);
    // 0x802A1840: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x802A1844: sh          $t2, 0x75A($t4)
    MEM_H(0X75A, ctx->r12) = ctx->r10;
L_802A1848:
    // 0x802A1848: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x802A184C: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x802A1850: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x802A1854: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x802A1858: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x802A185C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802A1860: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x802A1864: addu        $v0, $t8, $s0
    ctx->r2 = ADD32(ctx->r24, ctx->r16);
    // 0x802A1868: lhu         $t9, 0x760($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X760);
    // 0x802A186C: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x802A1870: sh          $t9, 0x75C($v0)
    MEM_H(0X75C, ctx->r2) = ctx->r25;
    // 0x802A1874: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x802A1878: addu        $t1, $t1, $s1
    ctx->r9 = ADD32(ctx->r9, ctx->r17);
    // 0x802A187C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x802A1880: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x802A1884: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802A1888: addu        $t2, $t3, $v1
    ctx->r10 = ADD32(ctx->r11, ctx->r3);
    // 0x802A188C: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x802A1890: addu        $v0, $t2, $s0
    ctx->r2 = ADD32(ctx->r10, ctx->r16);
    // 0x802A1894: lhu         $t4, 0x762($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X762);
    // 0x802A1898: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802A189C: slti        $at, $a0, 0x13
    ctx->r1 = SIGNED(ctx->r4) < 0X13 ? 1 : 0;
    // 0x802A18A0: bne         $at, $zero, L_802A1848
    if (ctx->r1 != 0) {
        // 0x802A18A4: sh          $t4, 0x75E($v0)
        MEM_H(0X75E, ctx->r2) = ctx->r12;
            goto L_802A1848;
    }
    // 0x802A18A4: sh          $t4, 0x75E($v0)
    MEM_H(0X75E, ctx->r2) = ctx->r12;
    // 0x802A18A8: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x802A18AC: nop

    // 0x802A18B0: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x802A18B4: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x802A18B8: sh          $zero, 0x7A8($t9)
    MEM_H(0X7A8, ctx->r25) = 0;
    // 0x802A18BC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x802A18C0: nop

    // 0x802A18C4: addu        $t1, $t0, $s3
    ctx->r9 = ADD32(ctx->r8, ctx->r19);
    // 0x802A18C8: addu        $t3, $t1, $s0
    ctx->r11 = ADD32(ctx->r9, ctx->r16);
    // 0x802A18CC: b           L_802A18D8
    // 0x802A18D0: sh          $zero, 0x7AA($t3)
    MEM_H(0X7AA, ctx->r11) = 0;
        goto L_802A18D8;
    // 0x802A18D0: sh          $zero, 0x7AA($t3)
    MEM_H(0X7AA, ctx->r11) = 0;
L_802A18D4:
    // 0x802A18D4: sh          $t2, 0x75A($v1)
    MEM_H(0X75A, ctx->r3) = ctx->r10;
L_802A18D8:
    // 0x802A18D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A18DC: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x802A18E0: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802A18E4: blez        $s1, L_802A17D0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x802A18E8: nop
    
            goto L_802A17D0;
    }
    // 0x802A18E8: nop

    // 0x802A18EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A18F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A18F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802A18F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802A18FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802A1900: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802A1904: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802A1908: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802A190C: jr          $ra
    // 0x802A1910: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802A1910: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802A1914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1914: jr          $ra
    // 0x802A1918: nop

    return;
    // 0x802A1918: nop

;}
RECOMP_FUNC void func_802A191C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A191C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1924: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    // 0x802A1928: jal         0x802A14C0
    // 0x802A192C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A14C0(rdram, ctx);
        goto after_0;
    // 0x802A192C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A1930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A1938: jr          $ra
    // 0x802A193C: nop

    return;
    // 0x802A193C: nop

;}
RECOMP_FUNC void func_802A1940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A1944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A1948: addiu       $a0, $zero, 0x4DC
    ctx->r4 = ADD32(0, 0X4DC);
    // 0x802A194C: jal         0x802A14C0
    // 0x802A1950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A14C0(rdram, ctx);
        goto after_0;
    // 0x802A1950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x802A1954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A1958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A195C: jr          $ra
    // 0x802A1960: nop

    return;
    // 0x802A1960: nop

    // 0x802A1964: nop

    // 0x802A1968: nop

    // 0x802A196C: nop

;}
RECOMP_FUNC void func_802A1970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1970: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802A1974: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802A1978: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802A197C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A1980: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A1984: addiu       $at, $zero, 0x3FA
    ctx->r1 = ADD32(0, 0X3FA);
    // 0x802A1988: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802A198C: addiu       $t2, $t2, -0x2F94
    ctx->r10 = ADD32(ctx->r10, -0X2F94);
    // 0x802A1990: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x802A1994: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x802A1998: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802A199C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802A19A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802A19A4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802A19A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802A19AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802A19B0: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x802A19B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802A19B8: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x802A19BC: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x802A19C0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802A19C4: addiu       $t4, $zero, 0x9C
    ctx->r12 = ADD32(0, 0X9C);
    // 0x802A19C8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A19CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A19D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A19D4: addiu       $at, $zero, 0x2BE
    ctx->r1 = ADD32(0, 0X2BE);
    // 0x802A19D8: cvt.w.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    ctx->f6.u32l = CVT_W_S(ctx->f14.fl);
    // 0x802A19DC: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x802A19E0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A19E4: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x802A19E8: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x802A19EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A19F0: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x802A19F4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x802A19F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802A19FC: subu        $v0, $t4, $t3
    ctx->r2 = SUB32(ctx->r12, ctx->r11);
    // 0x802A1A00: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x802A1A04: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x802A1A08: addiu       $t4, $t5, 0x20
    ctx->r12 = ADD32(ctx->r13, 0X20);
    // 0x802A1A0C: andi        $t3, $t4, 0xFFF
    ctx->r11 = ctx->r12 & 0XFFF;
    // 0x802A1A10: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x802A1A14: sll         $t5, $t3, 12
    ctx->r13 = S32(ctx->r11 << 12);
    // 0x802A1A18: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x802A1A1C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x802A1A20: andi        $t4, $v0, 0xFFF
    ctx->r12 = ctx->r2 & 0XFFF;
    // 0x802A1A24: sll         $t3, $t4, 12
    ctx->r11 = S32(ctx->r12 << 12);
    // 0x802A1A28: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x802A1A2C: mflo        $t8
    ctx->r24 = lo;
    // 0x802A1A30: addiu       $v1, $t8, 0xC7
    ctx->r3 = ADD32(ctx->r24, 0XC7);
    // 0x802A1A34: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x802A1A38: addiu       $t7, $t9, 0x20
    ctx->r15 = ADD32(ctx->r25, 0X20);
    // 0x802A1A3C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x802A1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x802A1A44: andi        $t5, $v1, 0xFFF
    ctx->r13 = ctx->r3 & 0XFFF;
    // 0x802A1A48: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x802A1A4C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x802A1A50: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802A1A54: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x802A1A58: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x802A1A5C: andi        $t3, $a3, 0xFFFF
    ctx->r11 = ctx->r7 & 0XFFFF;
    // 0x802A1A60: addiu       $t6, $a1, 0x8
    ctx->r14 = ADD32(ctx->r5, 0X8);
    // 0x802A1A64: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x802A1A68: or          $t5, $t4, $t3
    ctx->r13 = ctx->r12 | ctx->r11;
    // 0x802A1A6C: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x802A1A70: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x802A1A74: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x802A1A78: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x802A1A7C: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x802A1A80: addiu       $t7, $a1, 0x8
    ctx->r15 = ADD32(ctx->r5, 0X8);
    // 0x802A1A84: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x802A1A88: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x802A1A8C: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x802A1A90: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802A1A94: jr          $ra
    // 0x802A1A98: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x802A1A98: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void func_802A1A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A1A9C: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x802A1AA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A1AA4: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x802A1AA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A1AAC: lui         $s2, 0x8011
    ctx->r18 = S32(0X8011 << 16);
    // 0x802A1AB0: addiu       $s2, $s2, -0x2F94
    ctx->r18 = ADD32(ctx->r18, -0X2F94);
    // 0x802A1AB4: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A1AB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A1ABC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1AC0: addiu       $t8, $t8, -0x32E0
    ctx->r24 = ADD32(ctx->r24, -0X32E0);
    // 0x802A1AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802A1AC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802A1ACC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1AD0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802A1AD4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802A1AD8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802A1ADC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802A1AE0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802A1AE4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802A1AE8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802A1AEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802A1AF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A1AF4: sw          $t9, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r25;
    // 0x802A1AF8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1AFC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802A1B00: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x802A1B04: addiu       $t7, $t7, 0x4CA0
    ctx->r15 = ADD32(ctx->r15, 0X4CA0);
    // 0x802A1B08: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A1B0C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1B10: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1B14: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A1B18: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1B1C: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1B20: addiu       $t9, $t9, 0x4B10
    ctx->r25 = ADD32(ctx->r25, 0X4B10);
    // 0x802A1B24: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1B28: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1B2C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1B30: lui         $ra, 0xBA00
    ctx->r31 = S32(0XBA00 << 16);
    // 0x802A1B34: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1B38: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1B3C: ori         $ra, $ra, 0x1301
    ctx->r31 = ctx->r31 | 0X1301;
    // 0x802A1B40: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A1B44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1B48: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1B4C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A1B50: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1B54: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1B58: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1B5C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1B60: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1B64: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x802A1B68: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1B6C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1B70: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x802A1B74: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1B78: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1B7C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1B80: lui         $t9, 0x1F
    ctx->r25 = S32(0X1F << 16);
    // 0x802A1B84: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1B88: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1B8C: ori         $t9, $t9, 0x3205
    ctx->r25 = ctx->r25 | 0X3205;
    // 0x802A1B90: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x802A1B94: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1B98: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1B9C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1BA0: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x802A1BA4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1BA8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1BAC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1BB0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A1BB4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1BB8: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x802A1BBC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1BC0: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1BC4: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x802A1BC8: ori         $t9, $t9, 0xF279
    ctx->r25 = ctx->r25 | 0XF279;
    // 0x802A1BCC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1BD0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1BD4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1BD8: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x802A1BDC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1BE0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1BE4: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x802A1BE8: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x802A1BEC: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x802A1BF0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A1BF4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A1BF8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1BFC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x802A1C00: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1C04: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1C08: ori         $t6, $t6, 0x1001
    ctx->r14 = ctx->r14 | 0X1001;
    // 0x802A1C0C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1C10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1C14: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1C18: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x802A1C1C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1C20: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1C24: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x802A1C28: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1C2C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1C30: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1C34: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x802A1C38: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1C3C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1C40: ori         $t6, $t6, 0x903
    ctx->r14 = ctx->r14 | 0X903;
    // 0x802A1C44: addiu       $t7, $zero, 0xC00
    ctx->r15 = ADD32(0, 0XC00);
    // 0x802A1C48: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A1C4C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1C50: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1C54: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x802A1C58: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1C5C: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1C60: ori         $t9, $t9, 0x402
    ctx->r25 = ctx->r25 | 0X402;
    // 0x802A1C64: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x802A1C68: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A1C6C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A1C70: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1C74: lui         $ra, 0x8009
    ctx->r31 = S32(0X8009 << 16);
    // 0x802A1C78: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1C7C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1C80: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x802A1C84: addiu       $ra, $ra, 0x4940
    ctx->r31 = ADD32(ctx->r31, 0X4940);
    // 0x802A1C88: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x802A1C8C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1C90: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1C94: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x802A1C98: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1C9C: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1CA0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1CA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A1CA8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1CAC: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x802A1CB0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1CB4: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1CB8: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x802A1CBC: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x802A1CC0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A1CC4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A1CC8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1CCC: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x802A1CD0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1CD4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1CD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1CDC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1CE0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1CE4: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x802A1CE8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1CEC: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1CF0: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802A1CF4: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802A1CF8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1CFC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1D00: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D04: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A1D08: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1D0C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1D10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1D14: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A1D18: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D1C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x802A1D20: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1D24: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1D28: addiu       $s0, $s0, 0x4960
    ctx->r16 = ADD32(ctx->r16, 0X4960);
    // 0x802A1D2C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x802A1D30: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1D34: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D38: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802A1D3C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1D40: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1D44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802A1D48: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x802A1D4C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1D50: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1D54: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D58: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x802A1D5C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1D60: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1D64: ori         $t8, $t8, 0x110
    ctx->r24 = ctx->r24 | 0X110;
    // 0x802A1D68: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x802A1D6C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1D70: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1D74: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D78: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x802A1D7C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1D80: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1D84: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1D88: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1D8C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1D90: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x802A1D94: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1D98: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1D9C: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802A1DA0: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802A1DA4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1DA8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1DAC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1DB0: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x802A1DB4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1DB8: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1DBC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1DC0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A1DC4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1DC8: lui         $t9, 0x8035
    ctx->r25 = S32(0X8035 << 16);
    // 0x802A1DCC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1DD0: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1DD4: addiu       $t9, $t9, -0x180
    ctx->r25 = ADD32(ctx->r25, -0X180);
    // 0x802A1DD8: lui         $t8, 0xFD50
    ctx->r24 = S32(0XFD50 << 16);
    // 0x802A1DDC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1DE0: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A1DE4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1DE8: lui         $t8, 0x701
    ctx->r24 = S32(0X701 << 16);
    // 0x802A1DEC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1DF0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1DF4: ori         $t8, $t8, 0x4050
    ctx->r24 = ctx->r24 | 0X4050;
    // 0x802A1DF8: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x802A1DFC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A1E00: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A1E04: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1E08: lui         $t8, 0x70B
    ctx->r24 = S32(0X70B << 16);
    // 0x802A1E0C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1E10: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1E14: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1E18: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1E1C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1E20: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x802A1E24: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1E28: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1E2C: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x802A1E30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A1E34: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A1E38: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1E3C: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x802A1E40: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1E44: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1E48: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1E4C: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A1E50: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1E54: lui         $s7, 0xF540
    ctx->r23 = S32(0XF540 << 16);
    // 0x802A1E58: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1E5C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1E60: ori         $s7, $s7, 0x400
    ctx->r23 = ctx->r23 | 0X400;
    // 0x802A1E64: ori         $t7, $t7, 0x4050
    ctx->r15 = ctx->r15 | 0X4050;
    // 0x802A1E68: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A1E6C: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x802A1E70: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x802A1E74: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x802A1E78: addiu       $t8, $a0, 0x8
    ctx->r24 = ADD32(ctx->r4, 0X8);
    // 0x802A1E7C: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1E80: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x802A1E84: ori         $t6, $t6, 0xC05C
    ctx->r14 = ctx->r14 | 0XC05C;
    // 0x802A1E88: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802A1E8C: lui         $s6, 0x802C
    ctx->r22 = S32(0X802C << 16);
    // 0x802A1E90: lui         $s4, 0x11
    ctx->r20 = S32(0X11 << 16);
    // 0x802A1E94: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x802A1E98: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x802A1E9C: addiu       $s0, $s0, -0x17C8
    ctx->r16 = ADD32(ctx->r16, -0X17C8);
    // 0x802A1EA0: ori         $s4, $s4, 0x4050
    ctx->r20 = ctx->r20 | 0X4050;
    // 0x802A1EA4: addiu       $s6, $s6, 0x38DF
    ctx->r22 = ADD32(ctx->r22, 0X38DF);
    // 0x802A1EA8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802A1EAC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x802A1EB0: addiu       $s1, $zero, 0xE
    ctx->r17 = ADD32(0, 0XE);
L_802A1EB4:
    // 0x802A1EB4: bne         $s3, $s1, L_802A1ED4
    if (ctx->r19 != ctx->r17) {
        // 0x802A1EB8: nop
    
            goto L_802A1ED4;
    }
    // 0x802A1EB8: nop

    // 0x802A1EBC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1EC0: nop

    // 0x802A1EC4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1EC8: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1ECC: sw          $s4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r20;
    // 0x802A1ED0: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
L_802A1ED4:
    // 0x802A1ED4: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x802A1ED8: nop

    // 0x802A1EDC: beq         $t8, $zero, L_802A1F3C
    if (ctx->r24 == 0) {
        // 0x802A1EE0: nop
    
            goto L_802A1F3C;
    }
    // 0x802A1EE0: nop

    // 0x802A1EE4: lbu         $t9, 0x0($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X0);
    // 0x802A1EE8: nop

    // 0x802A1EEC: bne         $s5, $t9, L_802A1F10
    if (ctx->r21 != ctx->r25) {
        // 0x802A1EF0: nop
    
            goto L_802A1F10;
    }
    // 0x802A1EF0: nop

    // 0x802A1EF4: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    // 0x802A1EF8: nop

    // 0x802A1EFC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x802A1F00: beq         $t7, $zero, L_802A1F24
    if (ctx->r15 == 0) {
        // 0x802A1F04: nop
    
            goto L_802A1F24;
    }
    // 0x802A1F04: nop

    // 0x802A1F08: b           L_802A1F40
    // 0x802A1F0C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_802A1F40;
    // 0x802A1F0C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802A1F10:
    // 0x802A1F10: lhu         $t8, 0x12($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X12);
    // 0x802A1F14: nop

    // 0x802A1F18: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802A1F1C: bne         $t9, $zero, L_802A1F3C
    if (ctx->r25 != 0) {
        // 0x802A1F20: nop
    
            goto L_802A1F3C;
    }
    // 0x802A1F20: nop

L_802A1F24:
    // 0x802A1F24: lw          $v0, 0xCC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XCC);
    // 0x802A1F28: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802A1F2C: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802A1F30: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802A1F34: jal         0x802A1970
    // 0x802A1F38: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_802A1970(rdram, ctx);
        goto after_0;
    // 0x802A1F38: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
L_802A1F3C:
    // 0x802A1F3C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802A1F40:
    // 0x802A1F40: sltiu       $at, $s3, 0x1C
    ctx->r1 = ctx->r19 < 0X1C ? 1 : 0;
    // 0x802A1F44: bne         $at, $zero, L_802A1EB4
    if (ctx->r1 != 0) {
        // 0x802A1F48: addiu       $s0, $s0, 0xF8
        ctx->r16 = ADD32(ctx->r16, 0XF8);
            goto L_802A1EB4;
    }
    // 0x802A1F48: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x802A1F4C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1F50: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A1F54: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A1F58: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A1F5C: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x802A1F60: addiu       $t7, $t7, 0x4F40
    ctx->r15 = ADD32(ctx->r15, 0X4F40);
    // 0x802A1F64: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A1F68: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A1F6C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1F70: lui         $s0, 0xE800
    ctx->r16 = S32(0XE800 << 16);
    // 0x802A1F74: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1F78: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1F7C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1F80: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x802A1F84: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1F88: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x802A1F8C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A1F90: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A1F94: lui         $s1, 0x700
    ctx->r17 = S32(0X700 << 16);
    // 0x802A1F98: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x802A1F9C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A1FA0: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x802A1FA4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1FA8: lui         $ra, 0xE600
    ctx->r31 = S32(0XE600 << 16);
    // 0x802A1FAC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1FB0: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1FB4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1FB8: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A1FBC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1FC0: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x802A1FC4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A1FC8: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A1FCC: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x802A1FD0: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x802A1FD4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A1FD8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A1FDC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1FE0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A1FE4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A1FE8: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A1FEC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A1FF0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A1FF4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A1FF8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A1FFC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A2000: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A2004: addiu       $t6, $t6, 0x4F60
    ctx->r14 = ADD32(ctx->r14, 0X4F60);
    // 0x802A2008: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A200C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A2010: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2014: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x802A2018: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A201C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A2020: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2024: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x802A2028: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A202C: ori         $t9, $t9, 0x110
    ctx->r25 = ctx->r25 | 0X110;
    // 0x802A2030: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A2034: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A2038: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x802A203C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A2040: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2044: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x802A2048: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A204C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A2050: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2054: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A2058: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A205C: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802A2060: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A2064: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A2068: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802A206C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A2070: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A2074: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2078: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A207C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2080: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A2084: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x802A2088: lui         $fp, 0x1
    ctx->r30 = S32(0X1 << 16);
    // 0x802A208C: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x802A2090: addiu       $s1, $s1, 0x358
    ctx->r17 = ADD32(ctx->r17, 0X358);
    // 0x802A2094: addiu       $s4, $s4, 0xAD8
    ctx->r20 = ADD32(ctx->r20, 0XAD8);
    // 0x802A2098: ori         $fp, $fp, 0x4000
    ctx->r30 = ctx->r30 | 0X4000;
    // 0x802A209C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802A20A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A20A4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802A20A8:
    // 0x802A20A8: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
    // 0x802A20AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A20B0: beq         $t8, $zero, L_802A2130
    if (ctx->r24 == 0) {
        // 0x802A20B4: nop
    
            goto L_802A2130;
    }
    // 0x802A20B4: nop

    // 0x802A20B8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A20BC: nop

    // 0x802A20C0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A20C4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A20C8: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x802A20CC: lbu         $t6, 0x44($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X44);
    // 0x802A20D0: nop

    // 0x802A20D4: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x802A20D8: sll         $t8, $t7, 20
    ctx->r24 = S32(ctx->r15 << 20);
    // 0x802A20DC: or          $t9, $t8, $fp
    ctx->r25 = ctx->r24 | ctx->r30;
    // 0x802A20E0: ori         $t6, $t9, 0x50
    ctx->r14 = ctx->r25 | 0X50;
    // 0x802A20E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A20E8: lbu         $t8, 0x0($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X0);
    // 0x802A20EC: lw          $t7, 0x154($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X154);
    // 0x802A20F0: bne         $s5, $t8, L_802A210C
    if (ctx->r21 != ctx->r24) {
        // 0x802A20F4: addu        $a0, $t7, $s3
        ctx->r4 = ADD32(ctx->r15, ctx->r19);
            goto L_802A210C;
    }
    // 0x802A20F4: addu        $a0, $t7, $s3
    ctx->r4 = ADD32(ctx->r15, ctx->r19);
    // 0x802A20F8: sll         $t9, $s3, 2
    ctx->r25 = S32(ctx->r19 << 2);
    // 0x802A20FC: addu        $t6, $s4, $t9
    ctx->r14 = ADD32(ctx->r20, ctx->r25);
    // 0x802A2100: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x802A2104: b           L_802A2118
    // 0x802A2108: lw          $v0, 0xCC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XCC);
        goto L_802A2118;
    // 0x802A2108: lw          $v0, 0xCC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XCC);
L_802A210C:
    // 0x802A210C: lw          $s0, 0x40($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X40);
    // 0x802A2110: nop

    // 0x802A2114: lw          $v0, 0xCC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XCC);
L_802A2118:
    // 0x802A2118: lbu         $a2, 0x0($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X0);
    // 0x802A211C: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802A2120: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802A2124: andi        $t7, $a2, 0xF
    ctx->r15 = ctx->r6 & 0XF;
    // 0x802A2128: jal         0x802A1970
    // 0x802A212C: sll         $a2, $t7, 8
    ctx->r6 = S32(ctx->r15 << 8);
    func_802A1970(rdram, ctx);
        goto after_1;
    // 0x802A212C: sll         $a2, $t7, 8
    ctx->r6 = S32(ctx->r15 << 8);
    after_1:
L_802A2130:
    // 0x802A2130: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802A2134: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A2138: bne         $s3, $at, L_802A20A8
    if (ctx->r19 != ctx->r1) {
        // 0x802A213C: addiu       $s1, $s1, 0x58
        ctx->r17 = ADD32(ctx->r17, 0X58);
            goto L_802A20A8;
    }
    // 0x802A213C: addiu       $s1, $s1, 0x58
    ctx->r17 = ADD32(ctx->r17, 0X58);
    // 0x802A2140: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2144: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x802A2148: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A214C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A2150: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A2154: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x802A2158: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x802A215C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A2160: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2164: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x802A2168: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A216C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A2170: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2174: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A2178: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A217C: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x802A2180: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A2184: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A2188: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x802A218C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A2190: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A2194: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2198: lui         $ra, 0xE600
    ctx->r31 = S32(0XE600 << 16);
    // 0x802A219C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A21A0: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A21A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A21A8: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A21AC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A21B0: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x802A21B4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A21B8: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A21BC: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x802A21C0: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x802A21C4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A21C8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A21CC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A21D0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x802A21D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A21D8: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A21DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A21E0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A21E4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A21E8: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x802A21EC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A21F0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A21F4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A21F8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x802A21FC: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x802A2200: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A2204: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2208: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x802A220C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A2210: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A2214: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2218: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A221C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2220: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x802A2224: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2228: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A222C: ori         $t7, $t7, 0x110
    ctx->r15 = ctx->r15 | 0X110;
    // 0x802A2230: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2234: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A2238: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A223C: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x802A2240: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A2244: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A2248: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A224C: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x802A2250: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2254: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x802A2258: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A225C: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A2260: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x802A2264: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2268: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A226C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2270: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x802A2274: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A2278: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A227C: addiu       $s0, $s0, -0x2F98
    ctx->r16 = ADD32(ctx->r16, -0X2F98);
    // 0x802A2280: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2284: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A2288: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x802A228C: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x802A2290: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802A2294: lhu         $t8, -0x629C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X629C);
    // 0x802A2298: nop

    // 0x802A229C: beq         $t8, $zero, L_802A231C
    if (ctx->r24 == 0) {
        // 0x802A22A0: nop
    
            goto L_802A231C;
    }
    // 0x802A22A0: nop

    // 0x802A22A4: lbu         $t9, 0x0($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X0);
    // 0x802A22A8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x802A22AC: beq         $s5, $t9, L_802A231C
    if (ctx->r21 == ctx->r25) {
        // 0x802A22B0: addiu       $t0, $t0, 0x3B20
        ctx->r8 = ADD32(ctx->r8, 0X3B20);
            goto L_802A231C;
    }
    // 0x802A22B0: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x802A22B4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x802A22B8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802A22BC: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x802A22C0: addiu       $t8, $t8, -0xA38
    ctx->r24 = ADD32(ctx->r24, -0XA38);
    // 0x802A22C4: sltu        $at, $t7, $t8
    ctx->r1 = ctx->r15 < ctx->r24 ? 1 : 0;
    // 0x802A22C8: beq         $at, $zero, L_802A22D8
    if (ctx->r1 == 0) {
        // 0x802A22CC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A22D8;
    }
    // 0x802A22CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A22D0: b           L_802A22D8
    // 0x802A22D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_802A22D8;
    // 0x802A22D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_802A22D8:
    // 0x802A22D8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A22DC: andi        $t6, $a1, 0xF
    ctx->r14 = ctx->r5 & 0XF;
    // 0x802A22E0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A22E4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A22E8: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x802A22EC: or          $t8, $t7, $fp
    ctx->r24 = ctx->r15 | ctx->r30;
    // 0x802A22F0: ori         $t9, $t8, 0x50
    ctx->r25 = ctx->r24 | 0X50;
    // 0x802A22F4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A22F8: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x802A22FC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x802A2300: addiu       $a2, $zero, 0x300
    ctx->r6 = ADD32(0, 0X300);
    // 0x802A2304: lw          $a0, 0x98($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X98);
    // 0x802A2308: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x802A230C: lwc1        $f12, 0x4C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x802A2310: lwc1        $f14, 0x44($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802A2314: jal         0x802A1970
    // 0x802A2318: nop

    func_802A1970(rdram, ctx);
        goto after_2;
    // 0x802A2318: nop

    after_2:
L_802A231C:
    // 0x802A231C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2320: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A2324: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A2328: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A232C: addiu       $t9, $t9, 0x4988
    ctx->r25 = ADD32(ctx->r25, 0X4988);
    // 0x802A2330: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x802A2334: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A2338: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A233C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2340: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x802A2344: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2348: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A234C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2350: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2354: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2358: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x802A235C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A2360: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A2364: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x802A2368: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x802A236C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A2370: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A2374: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2378: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x802A237C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A2380: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x802A2384: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2388: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A238C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A2390: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x802A2394: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A2398: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x802A239C: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x802A23A0: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x802A23A4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A23A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A23AC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A23B0: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x802A23B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A23B8: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x802A23BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A23C0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A23C4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x802A23C8: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x802A23CC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A23D0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x802A23D4: ori         $t7, $t7, 0x4050
    ctx->r15 = ctx->r15 | 0X4050;
    // 0x802A23D8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A23DC: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x802A23E0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x802A23E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A23E8: ori         $at, $at, 0x9B90
    ctx->r1 = ctx->r1 | 0X9B90;
    // 0x802A23EC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x802A23F0: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802A23F4: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802A23F8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802A23FC: jal         0x802A1970
    // 0x802A2400: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_802A1970(rdram, ctx);
        goto after_3;
    // 0x802A2400: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_3:
    // 0x802A2404: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802A2408: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A240C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2410: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802A2414: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802A2418: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802A241C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802A2420: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802A2424: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802A2428: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802A242C: jr          $ra
    // 0x802A2430: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x802A2430: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_802A2434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2434: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A2438: lhu         $t6, 0xB72($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB72);
    // 0x802A243C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x802A2440: lw          $a1, -0x2F98($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2F98);
    // 0x802A2444: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A2448: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A244C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A2450: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A2454: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A2458: addiu       $t8, $t8, -0x32E0
    ctx->r24 = ADD32(ctx->r24, -0X32E0);
    // 0x802A245C: ori         $at, $at, 0x9C60
    ctx->r1 = ctx->r1 | 0X9C60;
    // 0x802A2460: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x802A2464: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802A2468: addiu       $v0, $v0, 0x4900
    ctx->r2 = ADD32(ctx->r2, 0X4900);
    // 0x802A246C: addiu       $v1, $v1, 0x358
    ctx->r3 = ADD32(ctx->r3, 0X358);
    // 0x802A2470: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x802A2474: addiu       $t0, $t0, -0x7800
    ctx->r8 = ADD32(ctx->r8, -0X7800);
    // 0x802A2478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A247C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x802A2480: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A2484: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
L_802A2488:
    // 0x802A2488: addu        $a3, $a0, $a2
    ctx->r7 = ADD32(ctx->r4, ctx->r6);
    // 0x802A248C: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x802A2490: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802A2494: andi        $t3, $t9, 0xF
    ctx->r11 = ctx->r25 & 0XF;
    // 0x802A2498: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x802A249C: bgez        $t4, L_802A24AC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x802A24A0: sra         $t5, $t4, 4
        ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
            goto L_802A24AC;
    }
    // 0x802A24A0: sra         $t5, $t4, 4
    ctx->r13 = S32(SIGNED(ctx->r12) >> 4);
    // 0x802A24A4: addiu       $at, $t4, 0xF
    ctx->r1 = ADD32(ctx->r12, 0XF);
    // 0x802A24A8: sra         $t5, $at, 4
    ctx->r13 = S32(SIGNED(ctx->r1) >> 4);
L_802A24AC:
    // 0x802A24AC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x802A24B0: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x802A24B4: addiu       $t8, $t7, 0x4A80
    ctx->r24 = ADD32(ctx->r15, 0X4A80);
    // 0x802A24B8: sw          $t8, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r24;
    // 0x802A24BC: lbu         $t9, 0x0($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X0);
    // 0x802A24C0: andi        $t5, $a2, 0xFFFF
    ctx->r13 = ctx->r6 & 0XFFFF;
    // 0x802A24C4: andi        $t3, $t9, 0x80
    ctx->r11 = ctx->r25 & 0X80;
    // 0x802A24C8: beq         $t3, $zero, L_802A24D8
    if (ctx->r11 == 0) {
        // 0x802A24CC: or          $a2, $t5, $zero
        ctx->r6 = ctx->r13 | 0;
            goto L_802A24D8;
    }
    // 0x802A24CC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802A24D0: b           L_802A24DC
    // 0x802A24D4: sb          $t1, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r9;
        goto L_802A24DC;
    // 0x802A24D4: sb          $t1, 0x44($v1)
    MEM_B(0X44, ctx->r3) = ctx->r9;
L_802A24D8:
    // 0x802A24D8: sb          $zero, 0x44($v1)
    MEM_B(0X44, ctx->r3) = 0;
L_802A24DC:
    // 0x802A24DC: sw          $a1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r5;
    // 0x802A24E0: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802A24E4: lhu         $t4, 0x0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X0);
    // 0x802A24E8: addiu       $v1, $v1, 0x58
    ctx->r3 = ADD32(ctx->r3, 0X58);
    // 0x802A24EC: beq         $t4, $zero, L_802A24F8
    if (ctx->r12 == 0) {
        // 0x802A24F0: slti        $at, $t5, 0x5
        ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
            goto L_802A24F8;
    }
    // 0x802A24F0: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x802A24F4: sh          $t2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r10;
L_802A24F8:
    // 0x802A24F8: bne         $at, $zero, L_802A2488
    if (ctx->r1 != 0) {
        // 0x802A24FC: addiu       $a1, $a1, 0x34
        ctx->r5 = ADD32(ctx->r5, 0X34);
            goto L_802A2488;
    }
    // 0x802A24FC: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    // 0x802A2500: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A2504: addiu       $v1, $v1, 0x4F40
    ctx->r3 = ADD32(ctx->r3, 0X4F40);
    // 0x802A2508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A250C:
    // 0x802A250C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x802A2510: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x802A2514: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x802A2518: andi        $t9, $a2, 0xFFFF
    ctx->r25 = ctx->r6 & 0XFFFF;
    // 0x802A251C: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x802A2520: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x802A2524: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802A2528: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802A252C: bne         $at, $zero, L_802A250C
    if (ctx->r1 != 0) {
        // 0x802A2530: sh          $t6, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r14;
            goto L_802A250C;
    }
    // 0x802A2530: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x802A2534: jr          $ra
    // 0x802A2538: nop

    return;
    // 0x802A2538: nop

;}
RECOMP_FUNC void func_802A253C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A253C: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x802A2540: addiu       $t2, $t2, 0x3B20
    ctx->r10 = ADD32(ctx->r10, 0X3B20);
    // 0x802A2544: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802A2548: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802A254C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A2550: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802A2554: lhu         $t6, 0xC2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC2);
    // 0x802A2558: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802A255C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x802A2560: sh          $t7, 0xC2($v1)
    MEM_H(0XC2, ctx->r3) = ctx->r15;
    // 0x802A2564: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x802A2568: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x802A256C: lw          $t3, 0xC8($t9)
    ctx->r11 = MEM_W(ctx->r25, 0XC8);
    // 0x802A2570: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A2574: bne         $t8, $t3, L_802A2588
    if (ctx->r24 != ctx->r11) {
        // 0x802A2578: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_802A2588;
    }
    // 0x802A2578: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x802A257C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x802A2580: b           L_802A2590
    // 0x802A2584: addiu       $a2, $a2, 0x49DC
    ctx->r6 = ADD32(ctx->r6, 0X49DC);
        goto L_802A2590;
    // 0x802A2584: addiu       $a2, $a2, 0x49DC
    ctx->r6 = ADD32(ctx->r6, 0X49DC);
L_802A2588:
    // 0x802A2588: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x802A258C: addiu       $a2, $a2, 0x49FC
    ctx->r6 = ADD32(ctx->r6, 0X49FC);
L_802A2590:
    // 0x802A2590: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A2594: addiu       $t1, $t1, 0x4F80
    ctx->r9 = ADD32(ctx->r9, 0X4F80);
L_802A2598:
    // 0x802A2598: sll         $v0, $t0, 4
    ctx->r2 = S32(ctx->r8 << 4);
    // 0x802A259C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x802A25A0: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x802A25A4: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x802A25A8: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
    // 0x802A25AC: addu        $a1, $t1, $t6
    ctx->r5 = ADD32(ctx->r9, ctx->r14);
    // 0x802A25B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802A25B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_802A25B8:
    // 0x802A25B8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802A25BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A25C0: addu        $t7, $a2, $v0
    ctx->r15 = ADD32(ctx->r6, ctx->r2);
    // 0x802A25C4: lhu         $t9, -0x2($t7)
    ctx->r25 = MEM_HU(ctx->r15, -0X2);
    // 0x802A25C8: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x802A25CC: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x802A25D0: addu        $t8, $a1, $v0
    ctx->r24 = ADD32(ctx->r5, ctx->r2);
    // 0x802A25D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802A25D8: bne         $at, $zero, L_802A25B8
    if (ctx->r1 != 0) {
        // 0x802A25DC: sh          $t9, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r25;
            goto L_802A25B8;
    }
    // 0x802A25DC: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
    // 0x802A25E0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x802A25E4: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x802A25E8: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x802A25EC: bne         $at, $zero, L_802A2598
    if (ctx->r1 != 0) {
        // 0x802A25F0: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_802A2598;
    }
    // 0x802A25F0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x802A25F4: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x802A25F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A25FC: lhu         $t5, 0xC2($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XC2);
    // 0x802A2600: nop

    // 0x802A2604: andi        $t6, $t5, 0x20
    ctx->r14 = ctx->r13 & 0X20;
    // 0x802A2608: bne         $t6, $zero, L_802A2768
    if (ctx->r14 != 0) {
        // 0x802A260C: nop
    
            goto L_802A2768;
    }
    // 0x802A260C: nop

    // 0x802A2610: lhu         $t7, 0xB78($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XB78);
    // 0x802A2614: nop

    // 0x802A2618: addiu       $t9, $t7, -0x3
    ctx->r25 = ADD32(ctx->r15, -0X3);
    // 0x802A261C: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x802A2620: beq         $at, $zero, L_802A2754
    if (ctx->r1 == 0) {
        // 0x802A2624: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_802A2754;
    }
    // 0x802A2624: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802A2628: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A262C: addu        $at, $at, $t9
    gpr jr_addend_802A2638 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802A2630: lw          $t9, 0x11E0($at)
    ctx->r25 = ADD32(ctx->r1, 0X11E0);
    // 0x802A2634: nop

    // 0x802A2638: jr          $t9
    // 0x802A263C: nop

    switch (jr_addend_802A2638 >> 2) {
        case 0: goto L_802A26BC; break;
        case 1: goto L_802A2640; break;
        case 2: goto L_802A2710; break;
        case 3: goto L_802A2710; break;
        case 4: goto L_802A2710; break;
        default: switch_error(__func__, 0x802A2638, 0x802C11E0);
    }
    // 0x802A263C: nop

L_802A2640:
    // 0x802A2640: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A2644: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A2648: addiu       $v0, $zero, -0x190
    ctx->r2 = ADD32(0, -0X190);
    // 0x802A264C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A2650: nop

    // 0x802A2654: bc1f        L_802A2664
    if (!c1cs) {
        // 0x802A2658: nop
    
            goto L_802A2664;
    }
    // 0x802A2658: nop

    // 0x802A265C: b           L_802A2664
    // 0x802A2660: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
        goto L_802A2664;
    // 0x802A2660: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
L_802A2664:
    // 0x802A2664: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x802A2668: lwc1        $f14, 0x0($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802A266C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A2670: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802A2674: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x802A2678: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802A267C: jal         0x80272B1C
    // 0x802A2680: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_0;
    // 0x802A2680: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x802A2684: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2688: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802A268C: lwc1        $f11, 0x11F8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X11F8);
    // 0x802A2690: lwc1        $f10, 0x11FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X11FC);
    // 0x802A2694: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A2698: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802A269C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A26A0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A26A4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802A26A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802A26AC: swc1        $f18, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f18.u32l;
    // 0x802A26B0: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x802A26B4: b           L_802A2754
    // 0x802A26B8: nop

        goto L_802A2754;
    // 0x802A26B8: nop

L_802A26BC:
    // 0x802A26BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802A26C0: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A26C4: nop

    // 0x802A26C8: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802A26CC: nop

    // 0x802A26D0: bc1f        L_802A26F4
    if (!c1cs) {
        // 0x802A26D4: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A26F4;
    }
    // 0x802A26D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A26D8: lwc1        $f7, 0x1200($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1200);
    // 0x802A26DC: lwc1        $f6, 0x1204($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1204);
    // 0x802A26E0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A26E4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802A26E8: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A26EC: b           L_802A2754
    // 0x802A26F0: swc1        $f8, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f8.u32l;
        goto L_802A2754;
    // 0x802A26F0: swc1        $f8, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f8.u32l;
L_802A26F4:
    // 0x802A26F4: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x802A26F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A26FC: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A2700: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802A2704: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A2708: b           L_802A2754
    // 0x802A270C: swc1        $f16, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f16.u32l;
        goto L_802A2754;
    // 0x802A270C: swc1        $f16, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f16.u32l;
L_802A2710:
    // 0x802A2710: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x802A2714: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2718: lw          $t4, 0xC8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC8);
    // 0x802A271C: lwc1        $f7, 0x1208($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1208);
    // 0x802A2720: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x802A2724: lwc1        $f6, 0x120C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X120C);
    // 0x802A2728: lwc1        $f18, 0x8C0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8C0);
    // 0x802A272C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2730: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802A2734: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802A2738: lwc1        $f11, 0x1210($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1210);
    // 0x802A273C: lwc1        $f10, 0x1214($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1214);
    // 0x802A2740: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A2744: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A2748: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802A274C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802A2750: swc1        $f18, 0x1DE0($v0)
    MEM_W(0X1DE0, ctx->r2) = ctx->f18.u32l;
L_802A2754:
    // 0x802A2754: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A2758: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A275C: lwc1        $f4, 0x1DE0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1DE0);
    // 0x802A2760: nop

    // 0x802A2764: swc1        $f4, 0x1E14($v0)
    MEM_W(0X1E14, ctx->r2) = ctx->f4.u32l;
L_802A2768:
    // 0x802A2768: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A276C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x802A2770: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x802A2774: swc1        $f6, 0x1DD8($v0)
    MEM_W(0X1DD8, ctx->r2) = ctx->f6.u32l;
    // 0x802A2778: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802A277C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A2780: swc1        $f8, 0x1DD0($v0)
    MEM_W(0X1DD0, ctx->r2) = ctx->f8.u32l;
    // 0x802A2784: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802A2788: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A278C: swc1        $f10, 0x1DD4($v0)
    MEM_W(0X1DD4, ctx->r2) = ctx->f10.u32l;
    // 0x802A2790: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802A2794: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A2798: swc1        $f16, 0x1E0C($v0)
    MEM_W(0X1E0C, ctx->r2) = ctx->f16.u32l;
    // 0x802A279C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x802A27A0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A27A4: swc1        $f18, 0x1E04($v0)
    MEM_W(0X1E04, ctx->r2) = ctx->f18.u32l;
    // 0x802A27A8: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802A27AC: swc1        $f0, 0x1DF0($v0)
    MEM_W(0X1DF0, ctx->r2) = ctx->f0.u32l;
    // 0x802A27B0: swc1        $f0, 0x1DE8($v0)
    MEM_W(0X1DE8, ctx->r2) = ctx->f0.u32l;
    // 0x802A27B4: swc1        $f0, 0x1DEC($v0)
    MEM_W(0X1DEC, ctx->r2) = ctx->f0.u32l;
    // 0x802A27B8: swc1        $f0, 0x1E24($v0)
    MEM_W(0X1E24, ctx->r2) = ctx->f0.u32l;
    // 0x802A27BC: swc1        $f0, 0x1E1C($v0)
    MEM_W(0X1E1C, ctx->r2) = ctx->f0.u32l;
    // 0x802A27C0: swc1        $f0, 0x1E20($v0)
    MEM_W(0X1E20, ctx->r2) = ctx->f0.u32l;
    // 0x802A27C4: swc1        $f4, 0x1E08($v0)
    MEM_W(0X1E08, ctx->r2) = ctx->f4.u32l;
    // 0x802A27C8: lhu         $t6, 0xB78($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB78);
    // 0x802A27CC: nop

    // 0x802A27D0: bne         $t6, $at, L_802A280C
    if (ctx->r14 != ctx->r1) {
        // 0x802A27D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A280C;
    }
    // 0x802A27D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A27D8: lh          $t7, 0xEA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XEA);
    // 0x802A27DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A27E0: bgez        $t7, L_802A280C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802A27E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A280C;
    }
    // 0x802A27E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A27E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A27EC: nop

    // 0x802A27F0: swc1        $f0, 0x1DF0($v0)
    MEM_W(0X1DF0, ctx->r2) = ctx->f0.u32l;
    // 0x802A27F4: swc1        $f0, 0x1DE8($v0)
    MEM_W(0X1DE8, ctx->r2) = ctx->f0.u32l;
    // 0x802A27F8: swc1        $f0, 0x1DEC($v0)
    MEM_W(0X1DEC, ctx->r2) = ctx->f0.u32l;
    // 0x802A27FC: swc1        $f0, 0x1E24($v0)
    MEM_W(0X1E24, ctx->r2) = ctx->f0.u32l;
    // 0x802A2800: swc1        $f0, 0x1E1C($v0)
    MEM_W(0X1E1C, ctx->r2) = ctx->f0.u32l;
    // 0x802A2804: swc1        $f0, 0x1E20($v0)
    MEM_W(0X1E20, ctx->r2) = ctx->f0.u32l;
    // 0x802A2808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A280C:
    // 0x802A280C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802A2810: jr          $ra
    // 0x802A2814: nop

    return;
    // 0x802A2814: nop

;}
RECOMP_FUNC void func_802A2818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2818: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A281C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x802A2820: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802A2824: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x802A2828: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x802A282C: bne         $t7, $t8, L_802A2840
    if (ctx->r15 != ctx->r24) {
        // 0x802A2830: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_802A2840;
    }
    // 0x802A2830: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802A2834: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802A2838: b           L_802A2848
    // 0x802A283C: addiu       $v1, $v1, 0x4A44
    ctx->r3 = ADD32(ctx->r3, 0X4A44);
        goto L_802A2848;
    // 0x802A283C: addiu       $v1, $v1, 0x4A44
    ctx->r3 = ADD32(ctx->r3, 0X4A44);
L_802A2840:
    // 0x802A2840: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802A2844: addiu       $v1, $v1, 0x4A1C
    ctx->r3 = ADD32(ctx->r3, 0X4A1C);
L_802A2848:
    // 0x802A2848: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802A284C: div         $zero, $a1, $a0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r4)));
    // 0x802A2850: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802A2854: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x802A2858: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x802A285C: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x802A2860: bne         $a0, $zero, L_802A286C
    if (ctx->r4 != 0) {
        // 0x802A2864: nop
    
            goto L_802A286C;
    }
    // 0x802A2864: nop

    // 0x802A2868: break       7
    do_break(2150246504);
L_802A286C:
    // 0x802A286C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802A2870: bne         $a0, $at, L_802A2884
    if (ctx->r4 != ctx->r1) {
        // 0x802A2874: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802A2884;
    }
    // 0x802A2874: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A2878: bne         $v0, $at, L_802A2884
    if (ctx->r2 != ctx->r1) {
        // 0x802A287C: nop
    
            goto L_802A2884;
    }
    // 0x802A287C: nop

    // 0x802A2880: break       6
    do_break(2150246528);
L_802A2884:
    // 0x802A2884: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2888: mflo        $t3
    ctx->r11 = lo;
    // 0x802A288C: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x802A2890: mfhi        $t2
    ctx->r10 = hi;
    // 0x802A2894: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x802A2898: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x802A289C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x802A28A0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x802A28A4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802A28A8: jr          $ra
    // 0x802A28AC: sh          $t1, 0x4F80($at)
    MEM_H(0X4F80, ctx->r1) = ctx->r9;
    return;
    // 0x802A28AC: sh          $t1, 0x4F80($at)
    MEM_H(0X4F80, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_802A28B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A28B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A28B4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A28B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802A28BC: andi        $t6, $a3, 0x1
    ctx->r14 = ctx->r7 & 0X1;
    // 0x802A28C0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x802A28C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A28C8: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x802A28CC: beq         $t6, $zero, L_802A2958
    if (ctx->r14 == 0) {
        // 0x802A28D0: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_802A2958;
    }
    // 0x802A28D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802A28D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A28D8: lwc1        $f13, 0x1218($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X1218);
    // 0x802A28DC: lwc1        $f12, 0x121C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X121C);
    // 0x802A28E0: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x802A28E4: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x802A28E8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A28EC: bc1f        L_802A2908
    if (!c1cs) {
        // 0x802A28F0: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A2908;
    }
    // 0x802A28F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A28F4: lwc1        $f17, 0x1220($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1220);
    // 0x802A28F8: lwc1        $f16, 0x1224($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1224);
    // 0x802A28FC: nop

    // 0x802A2900: add.d       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f0.d + ctx->f16.d;
    // 0x802A2904: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
L_802A2908:
    // 0x802A2908: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A290C: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x802A2910: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x802A2914: lwc1        $f17, 0x1228($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1228);
    // 0x802A2918: lwc1        $f16, 0x122C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X122C);
    // 0x802A291C: bc1f        L_802A2930
    if (!c1cs) {
        // 0x802A2920: nop
    
            goto L_802A2930;
    }
    // 0x802A2920: nop

    // 0x802A2924: add.d       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f0.d + ctx->f16.d;
    // 0x802A2928: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802A292C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_802A2930:
    // 0x802A2930: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802A2934: nop

    // 0x802A2938: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x802A293C: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x802A2940: nop

    // 0x802A2944: bc1f        L_802A2958
    if (!c1cs) {
        // 0x802A2948: nop
    
            goto L_802A2958;
    }
    // 0x802A2948: nop

    // 0x802A294C: add.d       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f0.d + ctx->f16.d;
    // 0x802A2950: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802A2954: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_802A2958:
    // 0x802A2958: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A295C: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A2960: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A2964: lwc1        $f13, 0x1230($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X1230);
    // 0x802A2968: lwc1        $f12, 0x1234($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1234);
    // 0x802A296C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2970: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802A2974: lwc1        $f17, 0x1238($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1238);
    // 0x802A2978: lwc1        $f16, 0x123C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X123C);
    // 0x802A297C: bc1f        L_802A29A8
    if (!c1cs) {
        // 0x802A2980: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_802A29A8;
    }
    // 0x802A2980: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802A2984: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A2988: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802A298C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802A2990: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A2994: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802A2998: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A299C: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x802A29A0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802A29A4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_802A29A8:
    // 0x802A29A8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A29AC: nop

    // 0x802A29B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802A29B4: sub.d       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f10.d - ctx->f12.d;
    // 0x802A29B8: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x802A29BC: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x802A29C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x802A29C4: bc1f        L_802A29D8
    if (!c1cs) {
        // 0x802A29C8: nop
    
            goto L_802A29D8;
    }
    // 0x802A29C8: nop

    // 0x802A29CC: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802A29D0: add.d       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f6.d + ctx->f16.d;
    // 0x802A29D4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
L_802A29D8:
    // 0x802A29D8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802A29DC: c.lt.d      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.d < ctx->f12.d;
    // 0x802A29E0: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A29E4: bc1f        L_802A2A08
    if (!c1cs) {
        // 0x802A29E8: nop
    
            goto L_802A2A08;
    }
    // 0x802A29E8: nop

    // 0x802A29EC: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x802A29F0: nop

    // 0x802A29F4: bc1f        L_802A2A08
    if (!c1cs) {
        // 0x802A29F8: nop
    
            goto L_802A2A08;
    }
    // 0x802A29F8: nop

    // 0x802A29FC: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x802A2A00: add.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d + ctx->f16.d;
    // 0x802A2A04: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
L_802A2A08:
    // 0x802A2A08: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x802A2A0C: jal         0x8027924C
    // 0x802A2A10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x8027924C)(rdram, ctx);
        goto after_0;
    // 0x802A2A10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A2A14: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x802A2A18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2A1C: lwc1        $f17, 0x1240($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X1240);
    // 0x802A2A20: lwc1        $f16, 0x1244($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1244);
    // 0x802A2A24: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A2A28: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A2A2C: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802A2A30: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802A2A34: andi        $t7, $a3, 0x2
    ctx->r15 = ctx->r7 & 0X2;
    // 0x802A2A38: beq         $t7, $zero, L_802A2A98
    if (ctx->r15 == 0) {
        // 0x802A2A3C: nop
    
            goto L_802A2A98;
    }
    // 0x802A2A3C: nop

    // 0x802A2A40: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802A2A44: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x802A2A48: nop

    // 0x802A2A4C: bc1f        L_802A2A6C
    if (!c1cs) {
        // 0x802A2A50: nop
    
            goto L_802A2A6C;
    }
    // 0x802A2A50: nop

    // 0x802A2A54: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x802A2A58: nop

    // 0x802A2A5C: bc1f        L_802A2A6C
    if (!c1cs) {
        // 0x802A2A60: nop
    
            goto L_802A2A6C;
    }
    // 0x802A2A60: nop

    // 0x802A2A64: b           L_802A2ACC
    // 0x802A2A68: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
        goto L_802A2ACC;
    // 0x802A2A68: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_802A2A6C:
    // 0x802A2A6C: sub.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802A2A70: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x802A2A74: nop

    // 0x802A2A78: bc1f        L_802A2ACC
    if (!c1cs) {
        // 0x802A2A7C: nop
    
            goto L_802A2ACC;
    }
    // 0x802A2A7C: nop

    // 0x802A2A80: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x802A2A84: nop

    // 0x802A2A88: bc1f        L_802A2ACC
    if (!c1cs) {
        // 0x802A2A8C: nop
    
            goto L_802A2ACC;
    }
    // 0x802A2A8C: nop

    // 0x802A2A90: b           L_802A2ACC
    // 0x802A2A94: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
        goto L_802A2ACC;
    // 0x802A2A94: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
L_802A2A98:
    // 0x802A2A98: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x802A2A9C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802A2AA0: nop

    // 0x802A2AA4: bc1f        L_802A2AB4
    if (!c1cs) {
        // 0x802A2AA8: nop
    
            goto L_802A2AB4;
    }
    // 0x802A2AA8: nop

    // 0x802A2AAC: b           L_802A2ACC
    // 0x802A2AB0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
        goto L_802A2ACC;
    // 0x802A2AB0: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
L_802A2AB4:
    // 0x802A2AB4: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x802A2AB8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x802A2ABC: nop

    // 0x802A2AC0: bc1f        L_802A2ACC
    if (!c1cs) {
        // 0x802A2AC4: nop
    
            goto L_802A2ACC;
    }
    // 0x802A2AC4: nop

    // 0x802A2AC8: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
L_802A2ACC:
    // 0x802A2ACC: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x802A2AD0: c.le.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d <= ctx->f0.d;
    // 0x802A2AD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2AD8: bc1f        L_802A2AE8
    if (!c1cs) {
        // 0x802A2ADC: nop
    
            goto L_802A2AE8;
    }
    // 0x802A2ADC: nop

    // 0x802A2AE0: sub.d       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f0.d - ctx->f16.d;
    // 0x802A2AE4: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
L_802A2AE8:
    // 0x802A2AE8: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x802A2AEC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A2AF0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802A2AF4: jr          $ra
    // 0x802A2AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A2AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A2AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2AFC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A2B00: lwc1        $f4, 0x6670($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6670);
    // 0x802A2B04: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2B08: lwc1        $f9, 0x1248($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1248);
    // 0x802A2B0C: lwc1        $f8, 0x124C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X124C);
    // 0x802A2B10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802A2B14: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802A2B18: jr          $ra
    // 0x802A2B1C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x802A2B1C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
;}
RECOMP_FUNC void func_802A2B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2B20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802A2B24: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A2B28: lw          $t6, 0xB2C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XB2C);
    // 0x802A2B2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A2B30: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A2B34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802A2B38: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    // 0x802A2B3C: lhu         $t7, 0x12($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X12);
    // 0x802A2B40: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x802A2B44: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x802A2B48: beq         $t8, $zero, L_802A2BBC
    if (ctx->r24 == 0) {
        // 0x802A2B4C: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A2BBC;
    }
    // 0x802A2B4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2B50: jal         0x802A2AFC
    // 0x802A2B54: nop

    func_802A2AFC(rdram, ctx);
        goto after_0;
    // 0x802A2B54: nop

    after_0:
    // 0x802A2B58: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2B5C: jal         0x80279308
    // 0x802A2B60: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_1;
    // 0x802A2B60: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_1:
    // 0x802A2B64: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2B68: lwc1        $f12, 0x1250($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X1250);
    // 0x802A2B6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2B70: lwc1        $f7, 0x1258($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X1258);
    // 0x802A2B74: lwc1        $f6, 0x125C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X125C);
    // 0x802A2B78: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2B7C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x802A2B80: lwc1        $f19, 0x1260($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X1260);
    // 0x802A2B84: lwc1        $f18, 0x1264($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1264);
    // 0x802A2B88: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x802A2B8C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802A2B90: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802A2B94: nop

    // 0x802A2B98: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x802A2B9C: mul.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x802A2BA0: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x802A2BA4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802A2BA8: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x802A2BAC: bc1f        L_802A2BC8
    if (!c1cs) {
        // 0x802A2BB0: nop
    
            goto L_802A2BC8;
    }
    // 0x802A2BB0: nop

    // 0x802A2BB4: b           L_802A2BC8
    // 0x802A2BB8: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
        goto L_802A2BC8;
    // 0x802A2BB8: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
L_802A2BBC:
    // 0x802A2BBC: lwc1        $f10, 0x1268($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1268);
    // 0x802A2BC0: nop

    // 0x802A2BC4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
L_802A2BC8:
    // 0x802A2BC8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A2BCC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A2BD0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2BD4: lwc1        $f12, 0x126C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X126C);
    // 0x802A2BD8: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802A2BDC: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x802A2BE0: jal         0x80275FC4
    // 0x802A2BE4: nop

    LOOKUP_FUNC(0x80275FC4)(rdram, ctx);
        goto after_2;
    // 0x802A2BE4: nop

    after_2:
    // 0x802A2BE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x802A2BEC: lhu         $v0, 0xB78($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB78);
    // 0x802A2BF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A2BF4: bne         $v0, $at, L_802A2CC4
    if (ctx->r2 != ctx->r1) {
        // 0x802A2BF8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802A2CC4;
    }
    // 0x802A2BF8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802A2BFC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A2C00: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A2C04: lui         $a3, 0xC3AF
    ctx->r7 = S32(0XC3AF << 16);
    // 0x802A2C08: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802A2C0C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A2C10: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x802A2C14: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802A2C18: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x802A2C1C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802A2C20: jal         0x80272B1C
    // 0x802A2C24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_3;
    // 0x802A2C24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x802A2C28: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A2C2C: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A2C30: lui         $a3, 0x43AF
    ctx->r7 = S32(0X43AF << 16);
    // 0x802A2C34: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x802A2C38: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802A2C3C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A2C40: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802A2C44: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802A2C48: jal         0x80272B1C
    // 0x802A2C4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    LOOKUP_FUNC(0x80272B1C)(rdram, ctx);
        goto after_4;
    // 0x802A2C4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x802A2C50: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802A2C54: lw          $t1, 0x3B20($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3B20);
    // 0x802A2C58: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802A2C5C: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x802A2C60: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802A2C64: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A2C68: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x802A2C6C: bc1f        L_802A2C94
    if (!c1cs) {
        // 0x802A2C70: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A2C94;
    }
    // 0x802A2C70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2C74: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802A2C78: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x802A2C7C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2C80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A2C84: jal         0x802A28B0
    // 0x802A2C88: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_802A28B0(rdram, ctx);
        goto after_5;
    // 0x802A2C88: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x802A2C8C: b           L_802A2DD4
    // 0x802A2C90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_802A2DD4;
    // 0x802A2C90: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2C94:
    // 0x802A2C94: lwc1        $f5, 0x1270($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X1270);
    // 0x802A2C98: lwc1        $f4, 0x1274($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1274);
    // 0x802A2C9C: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x802A2CA0: add.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d + ctx->f4.d;
    // 0x802A2CA4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x802A2CA8: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x802A2CAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802A2CB0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x802A2CB4: jal         0x802A28B0
    // 0x802A2CB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_802A28B0(rdram, ctx);
        goto after_6;
    // 0x802A2CB8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x802A2CBC: b           L_802A2DD4
    // 0x802A2CC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_802A2DD4;
    // 0x802A2CC0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2CC4:
    // 0x802A2CC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A2CC8: bne         $v0, $at, L_802A2DD4
    if (ctx->r2 != ctx->r1) {
        // 0x802A2CCC: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_802A2DD4;
    }
    // 0x802A2CCC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A2CD0: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A2CD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802A2CD8: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802A2CDC: nop

    // 0x802A2CE0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A2CE4: nop

    // 0x802A2CE8: bc1f        L_802A2D68
    if (!c1cs) {
        // 0x802A2CEC: nop
    
            goto L_802A2D68;
    }
    // 0x802A2CEC: nop

    // 0x802A2CF0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A2CF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2CF8: lui         $a2, 0x4096
    ctx->r6 = S32(0X4096 << 16);
    // 0x802A2CFC: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802A2D00: ori         $a2, $a2, 0xCBE4
    ctx->r6 = ctx->r6 | 0XCBE4;
    // 0x802A2D04: bc1f        L_802A2D4C
    if (!c1cs) {
        // 0x802A2D08: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A2D4C;
    }
    // 0x802A2D08: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2D0C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2D10: lwc1        $f14, 0x1278($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1278);
    // 0x802A2D14: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2D18: lwc1        $f11, 0x1280($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1280);
    // 0x802A2D1C: lwc1        $f10, 0x1284($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1284);
    // 0x802A2D20: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802A2D24: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x802A2D28: lui         $a2, 0x4049
    ctx->r6 = S32(0X4049 << 16);
    // 0x802A2D2C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802A2D30: ori         $a2, $a2, 0xFDB
    ctx->r6 = ctx->r6 | 0XFDB;
    // 0x802A2D34: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802A2D38: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2D3C: jal         0x802A28B0
    // 0x802A2D40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_802A28B0(rdram, ctx);
        goto after_7;
    // 0x802A2D40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x802A2D44: b           L_802A2DD4
    // 0x802A2D48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_802A2DD4;
    // 0x802A2D48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2D4C:
    // 0x802A2D4C: lwc1        $f14, 0x1288($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1288);
    // 0x802A2D50: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2D54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A2D58: jal         0x802A28B0
    // 0x802A2D5C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_802A28B0(rdram, ctx);
        goto after_8;
    // 0x802A2D5C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x802A2D60: b           L_802A2DD4
    // 0x802A2D64: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_802A2DD4;
    // 0x802A2D64: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2D68:
    // 0x802A2D68: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A2D6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A2D70: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2D74: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x802A2D78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802A2D7C: bc1f        L_802A2DC0
    if (!c1cs) {
        // 0x802A2D80: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_802A2DC0;
    }
    // 0x802A2D80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802A2D84: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2D88: lwc1        $f11, 0x1290($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X1290);
    // 0x802A2D8C: lwc1        $f10, 0x1294($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1294);
    // 0x802A2D90: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802A2D94: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x802A2D98: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802A2D9C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802A2DA0: lui         $a2, 0x3FC9
    ctx->r6 = S32(0X3FC9 << 16);
    // 0x802A2DA4: ori         $a2, $a2, 0xFDB
    ctx->r6 = ctx->r6 | 0XFDB;
    // 0x802A2DA8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802A2DAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2DB0: jal         0x802A28B0
    // 0x802A2DB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_802A28B0(rdram, ctx);
        goto after_9;
    // 0x802A2DB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x802A2DB8: b           L_802A2DD4
    // 0x802A2DBC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_802A2DD4;
    // 0x802A2DBC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2DC0:
    // 0x802A2DC0: lwc1        $f14, 0x1298($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X1298);
    // 0x802A2DC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2DC8: jal         0x802A28B0
    // 0x802A2DCC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_802A28B0(rdram, ctx);
        goto after_10;
    // 0x802A2DCC: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_10:
    // 0x802A2DD0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_802A2DD4:
    // 0x802A2DD4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A2DD8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A2DDC: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x802A2DE0: jal         0x802755AC
    // 0x802A2DE4: addiu       $a0, $a0, 0x665C
    ctx->r4 = ADD32(ctx->r4, 0X665C);
    LOOKUP_FUNC(0x802755AC)(rdram, ctx);
        goto after_11;
    // 0x802A2DE4: addiu       $a0, $a0, 0x665C
    ctx->r4 = ADD32(ctx->r4, 0X665C);
    after_11:
    // 0x802A2DE8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A2DEC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802A2DF0: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x802A2DF4: jal         0x802755AC
    // 0x802A2DF8: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    LOOKUP_FUNC(0x802755AC)(rdram, ctx);
        goto after_12;
    // 0x802A2DF8: addiu       $a0, $a0, 0x6690
    ctx->r4 = ADD32(ctx->r4, 0X6690);
    after_12:
    // 0x802A2DFC: jal         0x802A2AFC
    // 0x802A2E00: nop

    func_802A2AFC(rdram, ctx);
        goto after_13;
    // 0x802A2E00: nop

    after_13:
    // 0x802A2E04: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x802A2E08: jal         0x80279308
    // 0x802A2E0C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_14;
    // 0x802A2E0C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_14:
    // 0x802A2E10: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A2E14: lwc1        $f5, 0x12A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X12A0);
    // 0x802A2E18: lwc1        $f4, 0x12A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X12A4);
    // 0x802A2E1C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x802A2E20: c.lt.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d < ctx->f4.d;
    // 0x802A2E24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802A2E28: bc1f        L_802A2E38
    if (!c1cs) {
        // 0x802A2E2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A2E38;
    }
    // 0x802A2E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A2E30: b           L_802A2E38
    // 0x802A2E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A2E38;
    // 0x802A2E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A2E38:
    // 0x802A2E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A2E3C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A2E40: jr          $ra
    // 0x802A2E44: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x802A2E44: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802A2E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A2E48: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x802A2E4C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A2E50: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x802A2E54: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x802A2E58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802A2E5C: addiu       $t6, $t2, 0x8
    ctx->r14 = ADD32(ctx->r10, 0X8);
    // 0x802A2E60: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x802A2E64: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x802A2E68: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x802A2E6C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x802A2E70: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802A2E74: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802A2E78: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802A2E7C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802A2E80: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x802A2E84: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A2E88: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x802A2E8C: addiu       $t4, $t4, -0x30A0
    ctx->r12 = ADD32(ctx->r12, -0X30A0);
    // 0x802A2E90: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x802A2E94: lb          $t8, 0x1($t4)
    ctx->r24 = MEM_B(ctx->r12, 0X1);
    // 0x802A2E98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A2E9C: bne         $t8, $at, L_802A2EAC
    if (ctx->r24 != ctx->r1) {
        // 0x802A2EA0: lui         $t7, 0xFD10
        ctx->r15 = S32(0XFD10 << 16);
            goto L_802A2EAC;
    }
    // 0x802A2EA0: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x802A2EA4: b           L_802A2EB0
    // 0x802A2EA8: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
        goto L_802A2EB0;
    // 0x802A2EA8: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
L_802A2EAC:
    // 0x802A2EAC: addiu       $t3, $zero, 0x60
    ctx->r11 = ADD32(0, 0X60);
L_802A2EB0:
    // 0x802A2EB0: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x802A2EB4: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x802A2EB8: or          $t5, $t9, $at
    ctx->r13 = ctx->r25 | ctx->r1;
    // 0x802A2EBC: sw          $t5, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r13;
    // 0x802A2EC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2EC4: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802A2EC8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2ECC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A2ED0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2ED4: lb          $t8, 0x1($t4)
    ctx->r24 = MEM_B(ctx->r12, 0X1);
    // 0x802A2ED8: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x802A2EDC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802A2EE0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x802A2EE4: lw          $t5, -0x31B0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X31B0);
    // 0x802A2EE8: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x802A2EEC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802A2EF0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2EF4: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x802A2EF8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2EFC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A2F00: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2F04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2F08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2F0C: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x802A2F10: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A2F14: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802A2F18: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802A2F1C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A2F20: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2F24: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x802A2F28: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2F2C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A2F30: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2F34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A2F38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2F3C: lui         $t5, 0x703
    ctx->r13 = S32(0X703 << 16);
    // 0x802A2F40: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A2F44: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802A2F48: ori         $t5, $t5, 0xC000
    ctx->r13 = ctx->r13 | 0XC000;
    // 0x802A2F4C: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x802A2F50: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A2F54: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802A2F58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A2F5C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A2F60: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A2F64: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A2F68: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x802A2F6C: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x802A2F70: lui         $s5, 0x8033
    ctx->r21 = S32(0X8033 << 16);
    // 0x802A2F74: addiu       $s0, $s0, 0x6760
    ctx->r16 = ADD32(ctx->r16, 0X6760);
    // 0x802A2F78: addiu       $s5, $s5, -0xD80
    ctx->r21 = ADD32(ctx->r21, -0XD80);
    // 0x802A2F7C: addiu       $s6, $s6, 0x4AF0
    ctx->r22 = ADD32(ctx->r22, 0X4AF0);
    // 0x802A2F80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802A2F84: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x802A2F88: addiu       $s4, $sp, 0x6C
    ctx->r20 = ADD32(ctx->r29, 0X6C);
    // 0x802A2F8C: addiu       $s3, $sp, 0x70
    ctx->r19 = ADD32(ctx->r29, 0X70);
    // 0x802A2F90: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A2F94: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802A2F98:
    // 0x802A2F98: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x802A2F9C: nop

    // 0x802A2FA0: beq         $t8, $zero, L_802A2FE8
    if (ctx->r24 == 0) {
        // 0x802A2FA4: nop
    
            goto L_802A2FE8;
    }
    // 0x802A2FA4: nop

    // 0x802A2FA8: jal         0x802A3C18
    // 0x802A2FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802A3C18(rdram, ctx);
        goto after_0;
    // 0x802A2FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802A2FB0: beq         $v0, $zero, L_802A2FE8
    if (ctx->r2 == 0) {
        // 0x802A2FB4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_802A2FE8;
    }
    // 0x802A2FB4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x802A2FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A2FBC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802A2FC0: jal         0x80052250
    // 0x802A2FC4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80052250(rdram, ctx);
        goto after_1;
    // 0x802A2FC4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_1:
    // 0x802A2FC8: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x802A2FCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802A2FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A2FD4: addu        $a1, $s5, $s2
    ctx->r5 = ADD32(ctx->r21, ctx->r18);
    // 0x802A2FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A2FDC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802A2FE0: jal         0x802A3DFC
    // 0x802A2FE4: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_802A3DFC(rdram, ctx);
        goto after_2;
    // 0x802A2FE4: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_2:
L_802A2FE8:
    // 0x802A2FE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A2FEC: bne         $s1, $s7, L_802A2F98
    if (ctx->r17 != ctx->r23) {
        // 0x802A2FF0: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_802A2F98;
    }
    // 0x802A2FF0: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x802A2FF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802A2FF8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802A2FFC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802A3000: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802A3004: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802A3008: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x802A300C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x802A3010: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x802A3014: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x802A3018: jr          $ra
    // 0x802A301C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x802A301C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_802A3020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3020: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802A3024: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x802A3028: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x802A302C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802A3030: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A3034: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802A3038: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802A303C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802A3040: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802A3044: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x802A3048: addiu       $v0, $a1, 0x7FFF
    ctx->r2 = ADD32(ctx->r5, 0X7FFF);
    // 0x802A304C: lw          $s4, -0x2F98($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X2F98);
    // 0x802A3050: lbu         $v0, 0x9A3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9A3);
    // 0x802A3054: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A3058: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x802A305C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802A3060: ori         $at, $at, 0x9C60
    ctx->r1 = ctx->r1 | 0X9C60;
    // 0x802A3064: addiu       $s0, $s0, 0x358
    ctx->r16 = ADD32(ctx->r16, 0X358);
    // 0x802A3068: bne         $s3, $v0, L_802A3088
    if (ctx->r19 != ctx->r2) {
        // 0x802A306C: addu        $s4, $s4, $at
        ctx->r20 = ADD32(ctx->r20, ctx->r1);
            goto L_802A3088;
    }
    // 0x802A306C: addu        $s4, $s4, $at
    ctx->r20 = ADD32(ctx->r20, ctx->r1);
    // 0x802A3070: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A3074: lhu         $t6, 0xB7E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XB7E);
    // 0x802A3078: nop

    // 0x802A307C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x802A3080: bne         $t7, $zero, L_802A37B4
    if (ctx->r15 != 0) {
        // 0x802A3084: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802A37B4;
    }
    // 0x802A3084: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A3088:
    // 0x802A3088: bne         $s3, $v0, L_802A30A4
    if (ctx->r19 != ctx->r2) {
        // 0x802A308C: lui         $s1, 0x8011
        ctx->r17 = S32(0X8011 << 16);
            goto L_802A30A4;
    }
    // 0x802A308C: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x802A3090: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x802A3094: lbu         $t8, -0x2FAF($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2FAF);
    // 0x802A3098: nop

    // 0x802A309C: beq         $t8, $zero, L_802A30A8
    if (ctx->r24 == 0) {
        // 0x802A30A0: nop
    
            goto L_802A30A8;
    }
    // 0x802A30A0: nop

L_802A30A4:
    // 0x802A30A4: beq         $s3, $v0, L_802A3118
    if (ctx->r19 == ctx->r2) {
        // 0x802A30A8: lui         $ra, 0x802C
        ctx->r31 = S32(0X802C << 16);
            goto L_802A3118;
    }
L_802A30A8:
    // 0x802A30A8: lui         $ra, 0x802C
    ctx->r31 = S32(0X802C << 16);
    // 0x802A30AC: addiu       $ra, $ra, 0x4F40
    ctx->r31 = ADD32(ctx->r31, 0X4F40);
    // 0x802A30B0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A30B4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A30B8: lhu         $a2, 0x6($ra)
    ctx->r6 = MEM_HU(ctx->r31, 0X6);
    // 0x802A30BC: lhu         $a0, 0x26($ra)
    ctx->r4 = MEM_HU(ctx->r31, 0X26);
    // 0x802A30C0: addiu       $v1, $v1, 0x4F5E
    ctx->r3 = ADD32(ctx->r3, 0X4F5E);
    // 0x802A30C4: addiu       $v0, $v0, 0x4F46
    ctx->r2 = ADD32(ctx->r2, 0X4F46);
L_802A30C8:
    // 0x802A30C8: lhu         $t7, 0x4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4);
    // 0x802A30CC: lhu         $t8, 0x24($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X24);
    // 0x802A30D0: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x802A30D4: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x802A30D8: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    // 0x802A30DC: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
    // 0x802A30E0: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x802A30E4: sh          $t6, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r14;
    // 0x802A30E8: lhu         $t6, 0x26($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X26);
    // 0x802A30EC: lhu         $t9, 0x6($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X6);
    // 0x802A30F0: lhu         $t8, 0x28($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X28);
    // 0x802A30F4: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x802A30F8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A30FC: sh          $t6, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r14;
    // 0x802A3100: sh          $t9, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r25;
    // 0x802A3104: sh          $t8, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r24;
    // 0x802A3108: bne         $v0, $v1, L_802A30C8
    if (ctx->r2 != ctx->r3) {
        // 0x802A310C: sh          $t7, -0x2($v0)
        MEM_H(-0X2, ctx->r2) = ctx->r15;
            goto L_802A30C8;
    }
    // 0x802A310C: sh          $t7, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r15;
    // 0x802A3110: sh          $a2, 0x1E($ra)
    MEM_H(0X1E, ctx->r31) = ctx->r6;
    // 0x802A3114: sh          $a0, 0x3E($ra)
    MEM_H(0X3E, ctx->r31) = ctx->r4;
L_802A3118:
    // 0x802A3118: addiu       $s1, $s1, -0x2F94
    ctx->r17 = ADD32(ctx->r17, -0X2F94);
    // 0x802A311C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3120: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A3124: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3128: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A312C: lui         $s2, 0x600
    ctx->r18 = S32(0X600 << 16);
    // 0x802A3130: addiu       $t6, $t6, 0x4CA0
    ctx->r14 = ADD32(ctx->r14, 0X4CA0);
    // 0x802A3134: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3138: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x802A313C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3140: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A3144: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3148: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A314C: addiu       $t8, $t8, 0x4B10
    ctx->r24 = ADD32(ctx->r24, 0X4B10);
    // 0x802A3150: addiu       $t9, $a1, 0x7FFF
    ctx->r25 = ADD32(ctx->r5, 0X7FFF);
    // 0x802A3154: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A3158: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x802A315C: lbu         $t9, 0x99D($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X99D);
    // 0x802A3160: lui         $ra, 0x802C
    ctx->r31 = S32(0X802C << 16);
    // 0x802A3164: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802A3168: bne         $t9, $at, L_802A3198
    if (ctx->r25 != ctx->r1) {
        // 0x802A316C: addiu       $ra, $ra, 0x4F40
        ctx->r31 = ADD32(ctx->r31, 0X4F40);
            goto L_802A3198;
    }
    // 0x802A316C: addiu       $ra, $ra, 0x4F40
    ctx->r31 = ADD32(ctx->r31, 0X4F40);
    // 0x802A3170: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3174: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802A3178: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A317C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3180: addiu       $t7, $t7, 0x4C78
    ctx->r15 = ADD32(ctx->r15, 0X4C78);
    // 0x802A3184: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A3188: jal         0x802A2E48
    // 0x802A318C: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    func_802A2E48(rdram, ctx);
        goto after_0;
    // 0x802A318C: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    after_0:
    // 0x802A3190: b           L_802A37B4
    // 0x802A3194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802A37B4;
    // 0x802A3194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A3198:
    // 0x802A3198: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A319C: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802A31A0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x802A31A4: lhu         $t9, 0xC0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XC0);
    // 0x802A31A8: nop

    // 0x802A31AC: andi        $t6, $t9, 0x1
    ctx->r14 = ctx->r25 & 0X1;
    // 0x802A31B0: beq         $t6, $zero, L_802A33B8
    if (ctx->r14 == 0) {
        // 0x802A31B4: nop
    
            goto L_802A33B8;
    }
    // 0x802A31B4: nop

    // 0x802A31B8: lbu         $t7, -0x301C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X301C);
    // 0x802A31BC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802A31C0: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x802A31C4: bne         $t8, $zero, L_802A33B8
    if (ctx->r24 != 0) {
        // 0x802A31C8: nop
    
            goto L_802A33B8;
    }
    // 0x802A31C8: nop

    // 0x802A31CC: lbu         $t9, 0x38DF($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X38DF);
    // 0x802A31D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A31D4: beq         $t9, $at, L_802A33B8
    if (ctx->r25 == ctx->r1) {
        // 0x802A31D8: addiu       $t6, $a1, 0x7FFF
        ctx->r14 = ADD32(ctx->r5, 0X7FFF);
            goto L_802A33B8;
    }
    // 0x802A31D8: addiu       $t6, $a1, 0x7FFF
    ctx->r14 = ADD32(ctx->r5, 0X7FFF);
    // 0x802A31DC: lbu         $t6, 0x9A3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X9A3);
    // 0x802A31E0: lui         $t5, 0xE600
    ctx->r13 = S32(0XE600 << 16);
    // 0x802A31E4: bne         $s3, $t6, L_802A33B8
    if (ctx->r19 != ctx->r14) {
        // 0x802A31E8: lui         $t8, 0xFD10
        ctx->r24 = S32(0XFD10 << 16);
            goto L_802A33B8;
    }
    // 0x802A31E8: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x802A31EC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A31F0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A31F4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A31F8: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A31FC: addiu       $t9, $t9, 0x4988
    ctx->r25 = ADD32(ctx->r25, 0X4988);
    // 0x802A3200: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A3204: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3208: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A320C: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x802A3210: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3214: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3218: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A321C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3220: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3224: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x802A3228: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A322C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3230: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x802A3234: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x802A3238: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A323C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A3240: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3244: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x802A3248: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A324C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3250: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3254: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A3258: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A325C: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x802A3260: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A3264: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3268: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x802A326C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A3270: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3274: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3278: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A327C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3280: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3284: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3288: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A328C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3290: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x802A3294: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3298: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A329C: addiu       $t7, $t7, -0x180
    ctx->r15 = ADD32(ctx->r15, -0X180);
    // 0x802A32A0: lui         $t6, 0xFD50
    ctx->r14 = S32(0XFD50 << 16);
    // 0x802A32A4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A32A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A32AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A32B0: lui         $t6, 0x709
    ctx->r14 = S32(0X709 << 16);
    // 0x802A32B4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A32B8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A32BC: ori         $t6, $t6, 0x4250
    ctx->r14 = ctx->r14 | 0X4250;
    // 0x802A32C0: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x802A32C4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A32C8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A32CC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A32D0: lui         $t6, 0x70B
    ctx->r14 = S32(0X70B << 16);
    // 0x802A32D4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A32D8: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A32DC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A32E0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A32E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A32E8: ori         $t6, $t6, 0xF400
    ctx->r14 = ctx->r14 | 0XF400;
    // 0x802A32EC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A32F0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A32F4: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x802A32F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A32FC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3300: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3304: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A3308: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A330C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3310: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3314: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3318: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A331C: lui         $t7, 0x9
    ctx->r15 = S32(0X9 << 16);
    // 0x802A3320: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3324: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3328: lui         $t6, 0xF540
    ctx->r14 = S32(0XF540 << 16);
    // 0x802A332C: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x802A3330: ori         $t7, $t7, 0x4250
    ctx->r15 = ctx->r15 | 0X4250;
    // 0x802A3334: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A3338: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A333C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3340: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x802A3344: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A3348: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A334C: ori         $t6, $t6, 0xC05C
    ctx->r14 = ctx->r14 | 0XC05C;
    // 0x802A3350: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x802A3354: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A3358: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A335C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3360: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A3364: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A3368: ori         $at, $at, 0x9C2C
    ctx->r1 = ctx->r1 | 0X9C2C;
    // 0x802A336C: jal         0x80060B10
    // 0x802A3370: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80060B10(rdram, ctx);
        goto after_1;
    // 0x802A3370: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x802A3374: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3378: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A337C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3380: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3384: addiu       $t8, $t8, 0x4BA0
    ctx->r24 = ADD32(ctx->r24, 0X4BA0);
    // 0x802A3388: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A338C: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x802A3390: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3394: lui         $ra, 0x802C
    ctx->r31 = S32(0X802C << 16);
    // 0x802A3398: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A339C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A33A0: lui         $t6, 0xBD00
    ctx->r14 = S32(0XBD00 << 16);
    // 0x802A33A4: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x802A33A8: addiu       $ra, $ra, 0x4F40
    ctx->r31 = ADD32(ctx->r31, 0X4F40);
    // 0x802A33AC: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x802A33B0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A33B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_802A33B8:
    // 0x802A33B8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A33BC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A33C0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A33C4: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A33C8: addiu       $t8, $t8, 0x4C78
    ctx->r24 = ADD32(ctx->r24, 0X4C78);
    // 0x802A33CC: addiu       $t9, $a1, 0x7FFF
    ctx->r25 = ADD32(ctx->r5, 0X7FFF);
    // 0x802A33D0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A33D4: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x802A33D8: lbu         $t9, 0x9A3($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X9A3);
    // 0x802A33DC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x802A33E0: beq         $s3, $t9, L_802A3404
    if (ctx->r19 == ctx->r25) {
        // 0x802A33E4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802A3404;
    }
    // 0x802A33E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A33E8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A33EC: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x802A33F0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A33F4: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A33F8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802A33FC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A3400: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_802A3404:
    // 0x802A3404: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3408: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x802A340C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3410: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3414: sw          $ra, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r31;
    // 0x802A3418: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A341C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3420: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x802A3424: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3428: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A342C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3430: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3434: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3438: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x802A343C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3440: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3444: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x802A3448: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x802A344C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A3450: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A3454: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3458: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x802A345C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A3460: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3464: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3468: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A346C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3470: lui         $t8, 0x73F
    ctx->r24 = S32(0X73F << 16);
    // 0x802A3474: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3478: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A347C: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x802A3480: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x802A3484: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3488: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A348C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3490: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x802A3494: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3498: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A349C: addiu       $s2, $s2, 0x4B60
    ctx->r18 = ADD32(ctx->r18, 0X4B60);
    // 0x802A34A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A34A4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_802A34A8:
    // 0x802A34A8: lhu         $t7, 0x0($s4)
    ctx->r15 = MEM_HU(ctx->r20, 0X0);
    // 0x802A34AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802A34B0: beq         $t7, $zero, L_802A34DC
    if (ctx->r15 == 0) {
        // 0x802A34B4: addiu       $a3, $zero, 0x40
        ctx->r7 = ADD32(0, 0X40);
            goto L_802A34DC;
    }
    // 0x802A34B4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x802A34B8: lw          $a1, 0x50($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X50);
    // 0x802A34BC: lbu         $a2, 0x44($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X44);
    // 0x802A34C0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x802A34C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802A34C8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x802A34CC: jal         0x802A3DFC
    // 0x802A34D0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_802A3DFC(rdram, ctx);
        goto after_2;
    // 0x802A34D0: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_2:
    // 0x802A34D4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x802A34D8: nop

L_802A34DC:
    // 0x802A34DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A34E0: sltiu       $at, $v1, 0x5
    ctx->r1 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802A34E4: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x802A34E8: bne         $at, $zero, L_802A34A8
    if (ctx->r1 != 0) {
        // 0x802A34EC: addiu       $s4, $s4, 0x34
        ctx->r20 = ADD32(ctx->r20, 0X34);
            goto L_802A34A8;
    }
    // 0x802A34EC: addiu       $s4, $s4, 0x34
    ctx->r20 = ADD32(ctx->r20, 0X34);
    // 0x802A34F0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802A34F4: lbu         $t9, -0x301C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X301C);
    // 0x802A34F8: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A34FC: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x802A3500: bne         $t6, $zero, L_802A37B4
    if (ctx->r14 != 0) {
        // 0x802A3504: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802A37B4;
    }
    // 0x802A3504: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A3508: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x802A350C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x802A3510: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x802A3514: lhu         $t7, -0x629C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X629C);
    // 0x802A3518: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A351C: beq         $t7, $zero, L_802A366C
    if (ctx->r15 == 0) {
        // 0x802A3520: nop
    
            goto L_802A366C;
    }
    // 0x802A3520: nop

    // 0x802A3524: lbu         $t8, 0x38DF($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X38DF);
    // 0x802A3528: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A352C: beq         $t8, $at, L_802A366C
    if (ctx->r24 == ctx->r1) {
        // 0x802A3530: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_802A366C;
    }
    // 0x802A3530: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x802A3534: addiu       $t0, $t0, 0x3B20
    ctx->r8 = ADD32(ctx->r8, 0X3B20);
    // 0x802A3538: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x802A353C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802A3540: lw          $t9, 0x88($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X88);
    // 0x802A3544: addiu       $a0, $a0, -0xA38
    ctx->r4 = ADD32(ctx->r4, -0XA38);
    // 0x802A3548: sltu        $at, $t9, $a0
    ctx->r1 = ctx->r25 < ctx->r4 ? 1 : 0;
    // 0x802A354C: beq         $at, $zero, L_802A355C
    if (ctx->r1 == 0) {
        // 0x802A3550: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_802A355C;
    }
    // 0x802A3550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A3554: b           L_802A355C
    // 0x802A3558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_802A355C;
    // 0x802A3558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A355C:
    // 0x802A355C: lw          $t6, 0x98($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X98);
    // 0x802A3560: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A3564: lhu         $t7, 0x20($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X20);
    // 0x802A3568: ori         $at, $at, 0x9D64
    ctx->r1 = ctx->r1 | 0X9D64;
    // 0x802A356C: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x802A3570: bne         $t8, $zero, L_802A359C
    if (ctx->r24 != 0) {
        // 0x802A3574: lui         $a1, 0x8035
        ctx->r5 = S32(0X8035 << 16);
            goto L_802A359C;
    }
    // 0x802A3574: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802A3578: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x802A357C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802A3580: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x802A3584: addiu       $a1, $a1, 0x200
    ctx->r5 = ADD32(ctx->r5, 0X200);
    // 0x802A3588: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x802A358C: jal         0x802A3DFC
    // 0x802A3590: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_802A3DFC(rdram, ctx);
        goto after_3;
    // 0x802A3590: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_3:
    // 0x802A3594: b           L_802A366C
    // 0x802A3598: nop

        goto L_802A366C;
    // 0x802A3598: nop

L_802A359C:
    // 0x802A359C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A35A0: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x802A35A4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A35A8: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A35AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A35B0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x802A35B4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802A35B8: lw          $t9, 0x88($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X88);
    // 0x802A35BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802A35C0: sltu        $at, $t9, $a0
    ctx->r1 = ctx->r25 < ctx->r4 ? 1 : 0;
    // 0x802A35C4: beq         $at, $zero, L_802A35DC
    if (ctx->r1 == 0) {
        // 0x802A35C8: lui         $t9, 0xE800
        ctx->r25 = S32(0XE800 << 16);
            goto L_802A35DC;
    }
    // 0x802A35C8: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x802A35CC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A35D0: addiu       $t6, $t6, 0x48B8
    ctx->r14 = ADD32(ctx->r14, 0X48B8);
    // 0x802A35D4: b           L_802A35E4
    // 0x802A35D8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
        goto L_802A35E4;
    // 0x802A35D8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_802A35DC:
    // 0x802A35DC: addiu       $t7, $t7, 0x48D8
    ctx->r15 = ADD32(ctx->r15, 0X48D8);
    // 0x802A35E0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_802A35E4:
    // 0x802A35E4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A35E8: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x802A35EC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A35F0: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A35F4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A35F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A35FC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3600: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x802A3604: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3608: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A360C: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x802A3610: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3614: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A3618: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A361C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x802A3620: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3624: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3628: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A362C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A3630: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3634: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x802A3638: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A363C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3640: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802A3644: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802A3648: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A364C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A3650: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3654: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A3658: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A365C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3660: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3664: jal         0x802A3AF8
    // 0x802A3668: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_802A3AF8(rdram, ctx);
        goto after_4;
    // 0x802A3668: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_4:
L_802A366C:
    // 0x802A366C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A3670: lw          $t8, 0x3B20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3B20);
    // 0x802A3674: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A3678: lhu         $t9, 0xC2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0XC2);
    // 0x802A367C: lbu         $v0, 0x38DF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38DF);
    // 0x802A3680: andi        $t6, $t9, 0x4
    ctx->r14 = ctx->r25 & 0X4;
    // 0x802A3684: beq         $t6, $zero, L_802A379C
    if (ctx->r14 == 0) {
        // 0x802A3688: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A379C;
    }
    // 0x802A3688: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A368C: beq         $v0, $at, L_802A379C
    if (ctx->r2 == ctx->r1) {
        // 0x802A3690: lui         $s4, 0x8010
        ctx->r20 = S32(0X8010 << 16);
            goto L_802A379C;
    }
    // 0x802A3690: lui         $s4, 0x8010
    ctx->r20 = S32(0X8010 << 16);
    // 0x802A3694: lui         $s2, 0x802C
    ctx->r18 = S32(0X802C << 16);
    // 0x802A3698: lui         $s3, 0x8035
    ctx->r19 = S32(0X8035 << 16);
    // 0x802A369C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802A36A0: addiu       $s4, $s4, 0x665C
    ctx->r20 = ADD32(ctx->r20, 0X665C);
    // 0x802A36A4: addiu       $s0, $s0, -0x31A4
    ctx->r16 = ADD32(ctx->r16, -0X31A4);
    // 0x802A36A8: addiu       $s3, $s3, 0x7400
    ctx->r19 = ADD32(ctx->r19, 0X7400);
    // 0x802A36AC: addiu       $s2, $s2, 0x4F80
    ctx->r18 = ADD32(ctx->r18, 0X4F80);
L_802A36B0:
    // 0x802A36B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A36B4: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x802A36B8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A36BC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A36C0: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x802A36C4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A36C8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A36CC: lui         $t6, 0xE800
    ctx->r14 = S32(0XE800 << 16);
    // 0x802A36D0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A36D4: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A36D8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A36DC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A36E0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A36E4: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x802A36E8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A36EC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A36F0: ori         $t8, $t8, 0x100
    ctx->r24 = ctx->r24 | 0X100;
    // 0x802A36F4: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x802A36F8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A36FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3700: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A3704: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x802A3708: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A370C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3710: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3714: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3718: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A371C: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x802A3720: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A3724: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3728: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x802A372C: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x802A3730: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A3734: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3738: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x802A373C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A3740: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3744: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3748: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A374C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3750: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x802A3754: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x802A3758: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802A375C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802A3760: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802A3764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3768: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x802A376C: jal         0x802A3DFC
    // 0x802A3770: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_802A3DFC(rdram, ctx);
        goto after_5;
    // 0x802A3770: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_5:
    // 0x802A3774: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A3778: addiu       $t7, $t7, -0x319C
    ctx->r15 = ADD32(ctx->r15, -0X319C);
    // 0x802A377C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802A3780: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x802A3784: addiu       $s3, $s3, 0x400
    ctx->r19 = ADD32(ctx->r19, 0X400);
    // 0x802A3788: bne         $s0, $t7, L_802A36B0
    if (ctx->r16 != ctx->r15) {
        // 0x802A378C: addiu       $s4, $s4, 0x34
        ctx->r20 = ADD32(ctx->r20, 0X34);
            goto L_802A36B0;
    }
    // 0x802A378C: addiu       $s4, $s4, 0x34
    ctx->r20 = ADD32(ctx->r20, 0X34);
    // 0x802A3790: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A3794: lbu         $v0, 0x38DF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38DF);
    // 0x802A3798: nop

L_802A379C:
    // 0x802A379C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A37A0: beq         $v0, $at, L_802A37B4
    if (ctx->r2 == ctx->r1) {
        // 0x802A37A4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_802A37B4;
    }
    // 0x802A37A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A37A8: jal         0x802A2E48
    // 0x802A37AC: nop

    func_802A2E48(rdram, ctx);
        goto after_6;
    // 0x802A37AC: nop

    after_6:
    // 0x802A37B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A37B4:
    // 0x802A37B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802A37B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802A37BC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802A37C0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802A37C4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802A37C8: jr          $ra
    // 0x802A37CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802A37CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802A37D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A37D0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802A37D4: lhu         $t6, 0x361E($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X361E);
    // 0x802A37D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A37DC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802A37E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802A37E4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802A37E8: bne         $t7, $zero, L_802A3AE4
    if (ctx->r15 != 0) {
        // 0x802A37EC: sw          $s0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r16;
            goto L_802A3AE4;
    }
    // 0x802A37EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802A37F0: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x802A37F4: lhu         $t8, 0x6420($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X6420);
    // 0x802A37F8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802A37FC: beq         $t8, $zero, L_802A3AE8
    if (ctx->r24 == 0) {
        // 0x802A3800: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_802A3AE8;
    }
    // 0x802A3800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802A3804: lbu         $t9, -0x301C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X301C);
    // 0x802A3808: lui         $ra, 0x8010
    ctx->r31 = S32(0X8010 << 16);
    // 0x802A380C: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x802A3810: bne         $t6, $zero, L_802A3AE4
    if (ctx->r14 != 0) {
        // 0x802A3814: addiu       $ra, $ra, 0x4890
        ctx->r31 = ADD32(ctx->r31, 0X4890);
            goto L_802A3AE4;
    }
    // 0x802A3814: addiu       $ra, $ra, 0x4890
    ctx->r31 = ADD32(ctx->r31, 0X4890);
    // 0x802A3818: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x802A381C: addiu       $s1, $s1, -0x2F94
    ctx->r17 = ADD32(ctx->r17, -0X2F94);
    // 0x802A3820: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3824: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A3828: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x802A382C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3830: addiu       $t9, $t9, 0x4CA0
    ctx->r25 = ADD32(ctx->r25, 0X4CA0);
    // 0x802A3834: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x802A3838: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802A383C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802A3840: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3844: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A3848: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x802A384C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3850: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x802A3854: addiu       $t8, $t8, 0x4B10
    ctx->r24 = ADD32(ctx->r24, 0X4B10);
    // 0x802A3858: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802A385C: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x802A3860: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3864: lwc1        $f4, 0x1B94($ra)
    ctx->f4.u32l = MEM_W(ctx->r31, 0X1B94);
    // 0x802A3868: lwc1        $f6, 0x1B9C($ra)
    ctx->f6.u32l = MEM_W(ctx->r31, 0X1B9C);
    // 0x802A386C: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x802A3870: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3874: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x802A3878: swc1        $f4, 0x1BFC($ra)
    MEM_W(0X1BFC, ctx->r31) = ctx->f4.u32l;
    // 0x802A387C: swc1        $f6, 0x1C04($ra)
    MEM_W(0X1C04, ctx->r31) = ctx->f6.u32l;
    // 0x802A3880: addiu       $t7, $t7, 0x49D8
    ctx->r15 = ADD32(ctx->r15, 0X49D8);
    // 0x802A3884: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x802A3888: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802A388C: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x802A3890: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3894: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x802A3898: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x802A389C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A38A0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A38A4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x802A38A8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A38AC: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x802A38B0: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x802A38B4: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A38B8: ori         $t7, $t7, 0x100
    ctx->r15 = ctx->r15 | 0X100;
    // 0x802A38BC: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x802A38C0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x802A38C4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802A38C8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A38CC: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x802A38D0: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x802A38D4: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A38D8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A38DC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802A38E0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A38E4: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x802A38E8: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x802A38EC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A38F0: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802A38F4: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802A38F8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802A38FC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802A3900: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3904: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A3908: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x802A390C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3910: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A3914: addiu       $t9, $t9, 0x4B80
    ctx->r25 = ADD32(ctx->r25, 0X4B80);
    // 0x802A3918: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x802A391C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A3920: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802A3924: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A3928: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802A392C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A3930: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802A3934: addiu       $a1, $a1, 0x0
    ctx->r5 = ADD32(ctx->r5, 0X0);
    // 0x802A3938: addiu       $a0, $a0, 0x6488
    ctx->r4 = ADD32(ctx->r4, 0X6488);
    // 0x802A393C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3940: jal         0x802A3DFC
    // 0x802A3944: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_802A3DFC(rdram, ctx);
        goto after_0;
    // 0x802A3944: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x802A3948: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A394C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802A3950: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x802A3954: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A3958: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A395C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802A3960: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3964: lui         $t6, 0x55
    ctx->r14 = S32(0X55 << 16);
    // 0x802A3968: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x802A396C: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x802A3970: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3974: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x802A3978: ori         $t6, $t6, 0x3078
    ctx->r14 = ctx->r14 | 0X3078;
    // 0x802A397C: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x802A3980: jal         0x8005250C
    // 0x802A3984: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    func_8005250C(rdram, ctx);
        goto after_1;
    // 0x802A3984: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    after_1:
    // 0x802A3988: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A398C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A3990: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x802A3994: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3998: addiu       $t9, $t9, 0x4988
    ctx->r25 = ADD32(ctx->r25, 0X4988);
    // 0x802A399C: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x802A39A0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802A39A4: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802A39A8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A39AC: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x802A39B0: addiu       $t6, $s0, 0x8
    ctx->r14 = ADD32(ctx->r16, 0X8);
    // 0x802A39B4: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x802A39B8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A39BC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802A39C0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A39C4: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x802A39C8: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x802A39CC: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A39D0: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x802A39D4: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x802A39D8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x802A39DC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x802A39E0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A39E4: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x802A39E8: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x802A39EC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A39F0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A39F4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x802A39F8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A39FC: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x802A3A00: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x802A3A04: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3A08: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x802A3A0C: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x802A3A10: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802A3A14: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x802A3A18: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3A1C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A3A20: ori         $at, $at, 0x1D80
    ctx->r1 = ctx->r1 | 0X1D80;
    // 0x802A3A24: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x802A3A28: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x802A3A2C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3A30: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x802A3A34: addiu       $t7, $t7, -0xD80
    ctx->r15 = ADD32(ctx->r15, -0XD80);
    // 0x802A3A38: addu        $t6, $v0, $at
    ctx->r14 = ADD32(ctx->r2, ctx->r1);
    // 0x802A3A3C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A3A40: addiu       $a0, $a0, 0x6420
    ctx->r4 = ADD32(ctx->r4, 0X6420);
    // 0x802A3A44: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x802A3A48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3A4C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x802A3A50: jal         0x802A3C74
    // 0x802A3A54: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    func_802A3C74(rdram, ctx);
        goto after_2;
    // 0x802A3A54: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    after_2:
    // 0x802A3A58: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3A5C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A3A60: addiu       $t8, $s0, 0x8
    ctx->r24 = ADD32(ctx->r16, 0X8);
    // 0x802A3A64: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x802A3A68: addiu       $t6, $t6, 0x4C20
    ctx->r14 = ADD32(ctx->r14, 0X4C20);
    // 0x802A3A6C: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x802A3A70: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x802A3A74: addiu       $t8, $t8, 0x4AD0
    ctx->r24 = ADD32(ctx->r24, 0X4AD0);
    // 0x802A3A78: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A3A7C: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802A3A80: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x802A3A84: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x802A3A88: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x802A3A8C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802A3A90: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802A3A94: addiu       $a1, $a1, 0xA00
    ctx->r5 = ADD32(ctx->r5, 0XA00);
    // 0x802A3A98: addiu       $a0, $a0, 0x6420
    ctx->r4 = ADD32(ctx->r4, 0X6420);
    // 0x802A3A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3AA0: jal         0x802A3DFC
    // 0x802A3AA4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_802A3DFC(rdram, ctx);
        goto after_3;
    // 0x802A3AA4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x802A3AA8: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3AAC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x802A3AB0: addiu       $t9, $s0, 0x8
    ctx->r25 = ADD32(ctx->r16, 0X8);
    // 0x802A3AB4: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x802A3AB8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x802A3ABC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x802A3AC0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x802A3AC4: lui         $t9, 0x55
    ctx->r25 = S32(0X55 << 16);
    // 0x802A3AC8: addiu       $t7, $s0, 0x8
    ctx->r15 = ADD32(ctx->r16, 0X8);
    // 0x802A3ACC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x802A3AD0: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x802A3AD4: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x802A3AD8: ori         $t9, $t9, 0x3078
    ctx->r25 = ctx->r25 | 0X3078;
    // 0x802A3ADC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802A3AE0: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
L_802A3AE4:
    // 0x802A3AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802A3AE8:
    // 0x802A3AE8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3AEC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802A3AF0: jr          $ra
    // 0x802A3AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802A3AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802A3AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3AF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A3AFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A3B00: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802A3B04: jal         0x80275CF8
    // 0x802A3B08: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    LOOKUP_FUNC(0x80275CF8)(rdram, ctx);
        goto after_0;
    // 0x802A3B08: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x802A3B0C: beq         $v0, $zero, L_802A3C08
    if (ctx->r2 == 0) {
        // 0x802A3B10: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_802A3C08;
    }
    // 0x802A3B10: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802A3B14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A3B18: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B1C: swc1        $f0, 0x6610($at)
    MEM_W(0X6610, ctx->r1) = ctx->f0.u32l;
    // 0x802A3B20: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B24: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802A3B28: swc1        $f0, 0x6618($at)
    MEM_W(0X6618, ctx->r1) = ctx->f0.u32l;
    // 0x802A3B2C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B30: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x802A3B34: swc1        $f4, 0x65F8($at)
    MEM_W(0X65F8, ctx->r1) = ctx->f4.u32l;
    // 0x802A3B38: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B3C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802A3B40: swc1        $f6, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->f6.u32l;
    // 0x802A3B44: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B48: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A3B4C: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802A3B50: swc1        $f8, 0x6600($at)
    MEM_W(0X6600, ctx->r1) = ctx->f8.u32l;
    // 0x802A3B54: lw          $t7, 0x98($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X98);
    // 0x802A3B58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A3B5C: lwc1        $f19, 0x12A8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X12A8);
    // 0x802A3B60: lwc1        $f18, 0x12AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X12AC);
    // 0x802A3B64: lwc1        $f10, 0x88($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X88);
    // 0x802A3B68: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A3B6C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802A3B70: lwc1        $f7, 0x12B0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X12B0);
    // 0x802A3B74: lwc1        $f6, 0x12B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X12B4);
    // 0x802A3B78: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x802A3B7C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A3B80: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x802A3B84: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3B88: addiu       $t9, $t9, 0x4BC0
    ctx->r25 = ADD32(ctx->r25, 0X4BC0);
    // 0x802A3B8C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A3B90: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802A3B94: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802A3B98: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x802A3B9C: swc1        $f10, 0x6608($at)
    MEM_W(0X6608, ctx->r1) = ctx->f10.u32l;
    // 0x802A3BA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x802A3BA4: addiu       $a1, $a1, -0x200
    ctx->r5 = ADD32(ctx->r5, -0X200);
    // 0x802A3BA8: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    // 0x802A3BAC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x802A3BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3BB4: jal         0x802A3DFC
    // 0x802A3BB8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_802A3DFC(rdram, ctx);
        goto after_1;
    // 0x802A3BB8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x802A3BBC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3BC0: lwc1        $f16, 0x65FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X65FC);
    // 0x802A3BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A3BC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A3BCC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802A3BD0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802A3BD4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x802A3BD8: addiu       $t1, $t1, 0x4BC0
    ctx->r9 = ADD32(ctx->r9, 0X4BC0);
    // 0x802A3BDC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x802A3BE0: lui         $a1, 0x8035
    ctx->r5 = S32(0X8035 << 16);
    // 0x802A3BE4: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x802A3BE8: swc1        $f4, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->f4.u32l;
    // 0x802A3BEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802A3BF0: addiu       $a1, $a1, -0x280
    ctx->r5 = ADD32(ctx->r5, -0X280);
    // 0x802A3BF4: addiu       $a0, $a0, 0x65F4
    ctx->r4 = ADD32(ctx->r4, 0X65F4);
    // 0x802A3BF8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802A3BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A3C00: jal         0x802A3DFC
    // 0x802A3C04: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_802A3DFC(rdram, ctx);
        goto after_2;
    // 0x802A3C04: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
L_802A3C08:
    // 0x802A3C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3C0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802A3C10: jr          $ra
    // 0x802A3C14: nop

    return;
    // 0x802A3C14: nop

;}
RECOMP_FUNC void func_802A3C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3C18: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802A3C1C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A3C20: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x802A3C24: bne         $at, $zero, L_802A3C38
    if (ctx->r1 != 0) {
        // 0x802A3C28: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802A3C38;
    }
    // 0x802A3C28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802A3C2C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x802A3C30: jr          $ra
    // 0x802A3C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802A3C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A3C38:
    // 0x802A3C38: lb          $t6, -0x309F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309F);
    // 0x802A3C3C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A3C40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A3C44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802A3C48: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802A3C4C: lw          $t8, -0x319C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X319C);
    // 0x802A3C50: lbu         $t0, -0x2FAF($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X2FAF);
    // 0x802A3C54: sll         $t9, $v1, 9
    ctx->r25 = S32(ctx->r3 << 9);
    // 0x802A3C58: bne         $t0, $zero, L_802A3C68
    if (ctx->r8 != 0) {
        // 0x802A3C5C: addu        $a1, $t8, $t9
        ctx->r5 = ADD32(ctx->r24, ctx->r25);
            goto L_802A3C68;
    }
    // 0x802A3C5C: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x802A3C60: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x802A3C64: sb          $t1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r9;
L_802A3C68:
    // 0x802A3C68: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x802A3C6C: jr          $ra
    // 0x802A3C70: nop

    return;
    // 0x802A3C70: nop

;}
RECOMP_FUNC void func_802A3C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A3C7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A3C80: jal         0x80060B10
    // 0x802A3C84: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80060B10(rdram, ctx);
        goto after_0;
    // 0x802A3C84: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A3C88: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A3C8C: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x802A3C90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3C94: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x802A3C98: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3C9C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A3CA0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3CA4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3CA8: lui         $t5, 0x709
    ctx->r13 = S32(0X709 << 16);
    // 0x802A3CAC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x802A3CB0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3CB4: ori         $t5, $t5, 0x4250
    ctx->r13 = ctx->r13 | 0X4250;
    // 0x802A3CB8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3CBC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802A3CC0: lui         $t4, 0xF550
    ctx->r12 = S32(0XF550 << 16);
    // 0x802A3CC4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x802A3CC8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802A3CCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3CD0: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x802A3CD4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3CD8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A3CDC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3CE0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A3CE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3CE8: lui         $t4, 0x70F
    ctx->r12 = S32(0X70F << 16);
    // 0x802A3CEC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802A3CF0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802A3CF4: ori         $t4, $t4, 0xF400
    ctx->r12 = ctx->r12 | 0XF400;
    // 0x802A3CF8: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x802A3CFC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A3D00: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x802A3D04: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3D08: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x802A3D0C: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x802A3D10: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x802A3D14: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3D18: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x802A3D1C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3D20: lui         $t8, 0xF540
    ctx->r24 = S32(0XF540 << 16);
    // 0x802A3D24: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3D28: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802A3D2C: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x802A3D30: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3D34: lhu         $t9, 0x22($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X22);
    // 0x802A3D38: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x802A3D3C: andi        $t4, $t9, 0xF
    ctx->r12 = ctx->r25 & 0XF;
    // 0x802A3D40: sll         $t5, $t4, 20
    ctx->r13 = S32(ctx->r12 << 20);
    // 0x802A3D44: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x802A3D48: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802A3D4C: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x802A3D50: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x802A3D54: ori         $t9, $t8, 0x250
    ctx->r25 = ctx->r24 | 0X250;
    // 0x802A3D58: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A3D5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3D60: lui         $t6, 0x7
    ctx->r14 = S32(0X7 << 16);
    // 0x802A3D64: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802A3D68: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802A3D6C: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x802A3D70: lui         $t5, 0xF200
    ctx->r13 = S32(0XF200 << 16);
    // 0x802A3D74: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802A3D78: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802A3D7C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3D80: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x802A3D84: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A3D88: ori         $at, $at, 0x9D98
    ctx->r1 = ctx->r1 | 0X9D98;
    // 0x802A3D8C: jal         0x80060B10
    // 0x802A3D90: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80060B10(rdram, ctx);
        goto after_1;
    // 0x802A3D90: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x802A3D94: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A3D98: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x802A3D9C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3DA0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x802A3DA4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3DA8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802A3DAC: addiu       $t9, $t9, 0x4AD0
    ctx->r25 = ADD32(ctx->r25, 0X4AD0);
    // 0x802A3DB0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x802A3DB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3DB8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A3DBC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3DC0: lui         $a3, 0xBD00
    ctx->r7 = S32(0XBD00 << 16);
    // 0x802A3DC4: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802A3DC8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802A3DCC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3DD0: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A3DD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3DD8: nop

    // 0x802A3DDC: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x802A3DE0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x802A3DE4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3DE8: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x802A3DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A3DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A3DF4: jr          $ra
    // 0x802A3DF8: nop

    return;
    // 0x802A3DF8: nop

;}
RECOMP_FUNC void func_802A3DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A3DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A3E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A3E04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A3E08: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802A3E0C: jal         0x80060B10
    // 0x802A3E10: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80060B10(rdram, ctx);
        goto after_0;
    // 0x802A3E10: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A3E14: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x802A3E18: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x802A3E1C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x802A3E20: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x802A3E24: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x802A3E28: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A3E2C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x802A3E30: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x802A3E34: lui         $t7, 0x709
    ctx->r15 = S32(0X709 << 16);
    // 0x802A3E38: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x802A3E3C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x802A3E40: ori         $t7, $t7, 0x8260
    ctx->r15 = ctx->r15 | 0X8260;
    // 0x802A3E44: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x802A3E48: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802A3E4C: lui         $t6, 0xF550
    ctx->r14 = S32(0XF550 << 16);
    // 0x802A3E50: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802A3E54: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x802A3E58: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x802A3E5C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x802A3E60: addiu       $t8, $a2, 0x8
    ctx->r24 = ADD32(ctx->r6, 0X8);
    // 0x802A3E64: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802A3E68: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x802A3E6C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x802A3E70: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x802A3E74: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x802A3E78: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x802A3E7C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A3E80: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
    // 0x802A3E84: lhu         $ra, 0x2A($sp)
    ctx->r31 = MEM_HU(ctx->r29, 0X2A);
    // 0x802A3E88: lhu         $t2, 0x26($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X26);
    // 0x802A3E8C: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    // 0x802A3E90: multu       $t2, $ra
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A3E94: mflo        $a3
    ctx->r7 = lo;
    // 0x802A3E98: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x802A3E9C: sra         $t8, $a3, 2
    ctx->r24 = S32(SIGNED(ctx->r7) >> 2);
    // 0x802A3EA0: addiu       $a3, $t8, -0x1
    ctx->r7 = ADD32(ctx->r24, -0X1);
    // 0x802A3EA4: slti        $at, $a3, 0x7FF
    ctx->r1 = SIGNED(ctx->r7) < 0X7FF ? 1 : 0;
    // 0x802A3EA8: beq         $at, $zero, L_802A3EB8
    if (ctx->r1 == 0) {
        // 0x802A3EAC: nop
    
            goto L_802A3EB8;
    }
    // 0x802A3EAC: nop

    // 0x802A3EB0: b           L_802A3EB8
    // 0x802A3EB4: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
        goto L_802A3EB8;
    // 0x802A3EB4: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
L_802A3EB8:
    // 0x802A3EB8: bgez        $t2, L_802A3EC8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802A3EBC: sra         $v0, $t2, 4
        ctx->r2 = S32(SIGNED(ctx->r10) >> 4);
            goto L_802A3EC8;
    }
    // 0x802A3EBC: sra         $v0, $t2, 4
    ctx->r2 = S32(SIGNED(ctx->r10) >> 4);
    // 0x802A3EC0: addiu       $at, $t2, 0xF
    ctx->r1 = ADD32(ctx->r10, 0XF);
    // 0x802A3EC4: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_802A3EC8:
    // 0x802A3EC8: bgtz        $v0, L_802A3ED8
    if (SIGNED(ctx->r2) > 0) {
        // 0x802A3ECC: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_802A3ED8;
    }
    // 0x802A3ECC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x802A3ED0: b           L_802A3ED8
    // 0x802A3ED4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_802A3ED8;
    // 0x802A3ED4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_802A3ED8:
    // 0x802A3ED8: bgtz        $v0, L_802A3EE8
    if (SIGNED(ctx->r2) > 0) {
        // 0x802A3EDC: addiu       $t9, $t4, 0x7FF
        ctx->r25 = ADD32(ctx->r12, 0X7FF);
            goto L_802A3EE8;
    }
    // 0x802A3EDC: addiu       $t9, $t4, 0x7FF
    ctx->r25 = ADD32(ctx->r12, 0X7FF);
    // 0x802A3EE0: b           L_802A3EEC
    // 0x802A3EE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_802A3EEC;
    // 0x802A3EE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_802A3EE8:
    // 0x802A3EE8: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
L_802A3EEC:
    // 0x802A3EEC: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x802A3EF0: bne         $t1, $zero, L_802A3EFC
    if (ctx->r9 != 0) {
        // 0x802A3EF4: nop
    
            goto L_802A3EFC;
    }
    // 0x802A3EF4: nop

    // 0x802A3EF8: break       7
    do_break(2150252280);
L_802A3EFC:
    // 0x802A3EFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802A3F00: bne         $t1, $at, L_802A3F14
    if (ctx->r9 != ctx->r1) {
        // 0x802A3F04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802A3F14;
    }
    // 0x802A3F04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A3F08: bne         $t9, $at, L_802A3F14
    if (ctx->r25 != ctx->r1) {
        // 0x802A3F0C: nop
    
            goto L_802A3F14;
    }
    // 0x802A3F0C: nop

    // 0x802A3F10: break       6
    do_break(2150252304);
L_802A3F14:
    // 0x802A3F14: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x802A3F18: andi        $t9, $t3, 0xFFF
    ctx->r25 = ctx->r11 & 0XFFF;
    // 0x802A3F1C: mflo        $t6
    ctx->r14 = lo;
    // 0x802A3F20: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x802A3F24: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x802A3F28: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x802A3F2C: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x802A3F30: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x802A3F34: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3F38: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x802A3F3C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3F40: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802A3F44: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A3F48: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3F4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802A3F50: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3F54: sra         $t7, $t2, 1
    ctx->r15 = S32(SIGNED(ctx->r10) >> 1);
    // 0x802A3F58: addiu       $t9, $t7, 0x7
    ctx->r25 = ADD32(ctx->r15, 0X7);
    // 0x802A3F5C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A3F60: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A3F64: sra         $t8, $t9, 3
    ctx->r24 = S32(SIGNED(ctx->r25) >> 3);
    // 0x802A3F68: andi        $t6, $t8, 0x1FF
    ctx->r14 = ctx->r24 & 0X1FF;
    // 0x802A3F6C: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x802A3F70: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x802A3F74: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x802A3F78: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802A3F7C: lhu         $t8, 0x22($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X22);
    // 0x802A3F80: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x802A3F84: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x802A3F88: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x802A3F8C: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x802A3F90: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x802A3F94: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802A3F98: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x802A3F9C: ori         $t7, $t6, 0x260
    ctx->r15 = ctx->r14 | 0X260;
    // 0x802A3FA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x802A3FA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A3FA8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3FAC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x802A3FB0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x802A3FB4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x802A3FB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A3FBC: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x802A3FC0: lui         $t8, 0xF200
    ctx->r24 = S32(0XF200 << 16);
    // 0x802A3FC4: addiu       $t6, $ra, -0x1
    ctx->r14 = ADD32(ctx->r31, -0X1);
    // 0x802A3FC8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3FCC: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x802A3FD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A3FD4: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x802A3FD8: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x802A3FDC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x802A3FE0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x802A3FE4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A3FE8: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x802A3FEC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x802A3FF0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802A3FF4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x802A3FF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802A3FFC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802A4000: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802A4004: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802A4008: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x802A400C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802A4010: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802A4014: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802A4018: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802A401C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A4020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4024: jr          $ra
    // 0x802A4028: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    return;
    // 0x802A4028: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
;}
RECOMP_FUNC void func_802A402C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A402C: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x802A4030: lhu         $a3, 0x0($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X0);
    // 0x802A4034: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x802A4038: beq         $a3, $zero, L_802A4074
    if (ctx->r7 == 0) {
        // 0x802A403C: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802A4074;
    }
    // 0x802A403C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A4040: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    // 0x802A4044: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4048: mflo        $a1
    ctx->r5 = lo;
    // 0x802A404C: addu        $t7, $v0, $a1
    ctx->r15 = ADD32(ctx->r2, ctx->r5);
    // 0x802A4050: lhu         $t8, 0x12($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X12);
    // 0x802A4054: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A4058: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802A405C: bne         $t9, $zero, L_802A4074
    if (ctx->r25 != 0) {
        // 0x802A4060: nop
    
            goto L_802A4074;
    }
    // 0x802A4060: nop

    // 0x802A4064: beq         $a0, $a3, L_802A4074
    if (ctx->r4 == ctx->r7) {
        // 0x802A4068: nop
    
            goto L_802A4074;
    }
    // 0x802A4068: nop

    // 0x802A406C: jr          $ra
    // 0x802A4070: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A4070: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A4074:
    // 0x802A4074: lhu         $a3, 0x8($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X8);
    // 0x802A4078: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    // 0x802A407C: beq         $a3, $zero, L_802A40B4
    if (ctx->r7 == 0) {
        // 0x802A4080: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_802A40B4;
    }
    // 0x802A4080: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A4084: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4088: mflo        $a1
    ctx->r5 = lo;
    // 0x802A408C: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x802A4090: lhu         $t3, 0x12($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X12);
    // 0x802A4094: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A4098: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x802A409C: bne         $t4, $zero, L_802A40B4
    if (ctx->r12 != 0) {
        // 0x802A40A0: nop
    
            goto L_802A40B4;
    }
    // 0x802A40A0: nop

    // 0x802A40A4: beq         $a0, $a3, L_802A40B4
    if (ctx->r4 == ctx->r7) {
        // 0x802A40A8: nop
    
            goto L_802A40B4;
    }
    // 0x802A40A8: nop

    // 0x802A40AC: jr          $ra
    // 0x802A40B0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A40B0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A40B4:
    // 0x802A40B4: lhu         $a3, 0x8($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X8);
    // 0x802A40B8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A40BC: beq         $a3, $zero, L_802A40F4
    if (ctx->r7 == 0) {
        // 0x802A40C0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802A40F4;
    }
    // 0x802A40C0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802A40C4: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A40C8: mflo        $a1
    ctx->r5 = lo;
    // 0x802A40CC: addu        $t5, $v0, $a1
    ctx->r13 = ADD32(ctx->r2, ctx->r5);
    // 0x802A40D0: lhu         $t6, 0x12($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X12);
    // 0x802A40D4: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A40D8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802A40DC: bne         $t7, $zero, L_802A40F4
    if (ctx->r15 != 0) {
        // 0x802A40E0: nop
    
            goto L_802A40F4;
    }
    // 0x802A40E0: nop

    // 0x802A40E4: beq         $a0, $a3, L_802A40F8
    if (ctx->r4 == ctx->r7) {
        // 0x802A40E8: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_802A40F8;
    }
    // 0x802A40E8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A40EC: jr          $ra
    // 0x802A40F0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A40F0: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A40F4:
    // 0x802A40F4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
L_802A40F8:
    // 0x802A40F8: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
L_802A40FC:
    // 0x802A40FC: lhu         $a3, 0x0($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X0);
    // 0x802A4100: nop

    // 0x802A4104: beq         $a3, $zero, L_802A413C
    if (ctx->r7 == 0) {
        // 0x802A4108: nop
    
            goto L_802A413C;
    }
    // 0x802A4108: nop

    // 0x802A410C: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4110: mflo        $a1
    ctx->r5 = lo;
    // 0x802A4114: addu        $t8, $v0, $a1
    ctx->r24 = ADD32(ctx->r2, ctx->r5);
    // 0x802A4118: lhu         $t9, 0x12($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X12);
    // 0x802A411C: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A4120: andi        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 & 0X1;
    // 0x802A4124: bne         $t2, $zero, L_802A413C
    if (ctx->r10 != 0) {
        // 0x802A4128: nop
    
            goto L_802A413C;
    }
    // 0x802A4128: nop

    // 0x802A412C: beq         $a0, $a3, L_802A413C
    if (ctx->r4 == ctx->r7) {
        // 0x802A4130: nop
    
            goto L_802A413C;
    }
    // 0x802A4130: nop

    // 0x802A4134: jr          $ra
    // 0x802A4138: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A4138: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A413C:
    // 0x802A413C: lhu         $a3, 0x8($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X8);
    // 0x802A4140: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A4144: beq         $a3, $zero, L_802A417C
    if (ctx->r7 == 0) {
        // 0x802A4148: nop
    
            goto L_802A417C;
    }
    // 0x802A4148: nop

    // 0x802A414C: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4150: mflo        $a1
    ctx->r5 = lo;
    // 0x802A4154: addu        $t3, $v0, $a1
    ctx->r11 = ADD32(ctx->r2, ctx->r5);
    // 0x802A4158: lhu         $t4, 0x12($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X12);
    // 0x802A415C: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A4160: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802A4164: bne         $t5, $zero, L_802A417C
    if (ctx->r13 != 0) {
        // 0x802A4168: nop
    
            goto L_802A417C;
    }
    // 0x802A4168: nop

    // 0x802A416C: beq         $a0, $a3, L_802A417C
    if (ctx->r4 == ctx->r7) {
        // 0x802A4170: nop
    
            goto L_802A417C;
    }
    // 0x802A4170: nop

    // 0x802A4174: jr          $ra
    // 0x802A4178: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A4178: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A417C:
    // 0x802A417C: lhu         $a3, 0x8($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X8);
    // 0x802A4180: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A4184: beq         $a3, $zero, L_802A41BC
    if (ctx->r7 == 0) {
        // 0x802A4188: nop
    
            goto L_802A41BC;
    }
    // 0x802A4188: nop

    // 0x802A418C: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4190: mflo        $a1
    ctx->r5 = lo;
    // 0x802A4194: addu        $t6, $v0, $a1
    ctx->r14 = ADD32(ctx->r2, ctx->r5);
    // 0x802A4198: lhu         $t7, 0x12($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X12);
    // 0x802A419C: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A41A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A41A4: bne         $t8, $zero, L_802A41BC
    if (ctx->r24 != 0) {
        // 0x802A41A8: nop
    
            goto L_802A41BC;
    }
    // 0x802A41A8: nop

    // 0x802A41AC: beq         $a0, $a3, L_802A41BC
    if (ctx->r4 == ctx->r7) {
        // 0x802A41B0: nop
    
            goto L_802A41BC;
    }
    // 0x802A41B0: nop

    // 0x802A41B4: jr          $ra
    // 0x802A41B8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A41B8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A41BC:
    // 0x802A41BC: lhu         $a3, 0x8($a2)
    ctx->r7 = MEM_HU(ctx->r6, 0X8);
    // 0x802A41C0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A41C4: beq         $a3, $zero, L_802A41FC
    if (ctx->r7 == 0) {
        // 0x802A41C8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_802A41FC;
    }
    // 0x802A41C8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x802A41CC: multu       $a3, $t0
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A41D0: mflo        $a1
    ctx->r5 = lo;
    // 0x802A41D4: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x802A41D8: lhu         $t2, 0x12($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X12);
    // 0x802A41DC: addu        $a3, $a1, $v0
    ctx->r7 = ADD32(ctx->r5, ctx->r2);
    // 0x802A41E0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802A41E4: bne         $t3, $zero, L_802A41FC
    if (ctx->r11 != 0) {
        // 0x802A41E8: nop
    
            goto L_802A41FC;
    }
    // 0x802A41E8: nop

    // 0x802A41EC: beq         $a0, $a3, L_802A41FC
    if (ctx->r4 == ctx->r7) {
        // 0x802A41F0: nop
    
            goto L_802A41FC;
    }
    // 0x802A41F0: nop

    // 0x802A41F4: jr          $ra
    // 0x802A41F8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x802A41F8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_802A41FC:
    // 0x802A41FC: bne         $v1, $t1, L_802A40FC
    if (ctx->r3 != ctx->r9) {
        // 0x802A4200: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_802A40FC;
    }
    // 0x802A4200: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x802A4204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A4208: jr          $ra
    // 0x802A420C: nop

    return;
    // 0x802A420C: nop

;}
RECOMP_FUNC void func_802A4210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4210: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802A4214: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A4218: lwc1        $f9, 0x12B8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X12B8);
    // 0x802A421C: lwc1        $f8, 0x12BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X12BC);
    // 0x802A4220: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802A4224: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x802A4228: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x802A422C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x802A4230: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x802A4234: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x802A4238: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802A423C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x802A4240: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x802A4244: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802A4248: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x802A424C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A4250: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802A4254: lwc1        $f4, 0x8C0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C0);
    // 0x802A4258: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A425C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802A4260: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A4264: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802A4268: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x802A426C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x802A4270: addiu       $s2, $a0, 0x370
    ctx->r18 = ADD32(ctx->r4, 0X370);
    // 0x802A4274: lwc1        $f21, 0x12C0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X12C0);
    // 0x802A4278: lwc1        $f20, 0x12C4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X12C4);
    // 0x802A427C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802A4280: cvt.s.d     $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f24.fl = CVT_S_D(ctx->f10.d);
    // 0x802A4284: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802A4288: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x802A428C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x802A4290: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x802A4294: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x802A4298: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
L_802A429C:
    // 0x802A429C: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x802A42A0: lhu         $t8, 0xC($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0XC);
    // 0x802A42A4: nop

    // 0x802A42A8: beq         $t8, $zero, L_802A42F8
    if (ctx->r24 == 0) {
        // 0x802A42AC: nop
    
            goto L_802A42F8;
    }
    // 0x802A42AC: nop

    // 0x802A42B0: lwc1        $f14, 0x88($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X88);
    // 0x802A42B4: jal         0x80279308
    // 0x802A42B8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x802A42B8: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_0:
    // 0x802A42BC: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x802A42C0: c.lt.d      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.d < ctx->f20.d;
    // 0x802A42C4: nop

    // 0x802A42C8: bc1f        L_802A42F8
    if (!c1cs) {
        // 0x802A42CC: nop
    
            goto L_802A42F8;
    }
    // 0x802A42CC: nop

    // 0x802A42D0: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x802A42D4: add.d       $f4, $f22, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f22.d + ctx->f2.d;
    // 0x802A42D8: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
    // 0x802A42DC: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A42E0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x802A42E4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802A42E8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x802A42EC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x802A42F0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802A42F4: swc1        $f8, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f8.u32l;
L_802A42F8:
    // 0x802A42F8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802A42FC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x802A4300: bne         $s3, $s5, L_802A429C
    if (ctx->r19 != ctx->r21) {
        // 0x802A4304: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_802A429C;
    }
    // 0x802A4304: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802A4308: beq         $s4, $zero, L_802A4324
    if (ctx->r20 == 0) {
        // 0x802A430C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_802A4324;
    }
    // 0x802A430C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802A4310: addiu       $a1, $s4, -0x1
    ctx->r5 = ADD32(ctx->r20, -0X1);
    // 0x802A4314: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x802A4318: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x802A431C: jal         0x8005DE74
    // 0x802A4320: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    func_8005DE74(rdram, ctx);
        goto after_1;
    // 0x802A4320: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    after_1:
L_802A4324:
    // 0x802A4324: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802A4328: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802A432C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A4330: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802A4334: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A4338: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802A433C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A4340: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802A4344: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802A4348: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x802A434C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x802A4350: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x802A4354: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x802A4358: jr          $ra
    // 0x802A435C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802A435C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802A4360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4368: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A436C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802A4370: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802A4374: lhu         $t6, 0xC($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XC);
    // 0x802A4378: nop

    // 0x802A437C: beq         $t6, $zero, L_802A4448
    if (ctx->r14 == 0) {
        // 0x802A4380: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A4380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A4384: lhu         $t7, 0x14($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X14);
    // 0x802A4388: nop

    // 0x802A438C: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x802A4390: bne         $t8, $zero, L_802A4448
    if (ctx->r24 != 0) {
        // 0x802A4394: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A4394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A4398: lhu         $t9, 0x12($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X12);
    // 0x802A439C: nop

    // 0x802A43A0: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x802A43A4: bne         $t0, $zero, L_802A4448
    if (ctx->r8 != 0) {
        // 0x802A43A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A43A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A43AC: lwc1        $f12, 0x94($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X94);
    // 0x802A43B0: jal         0x80272AEC
    // 0x802A43B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_0;
    // 0x802A43B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A43B8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802A43BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802A43C0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802A43C4: nop

    // 0x802A43C8: bc1f        L_802A4448
    if (!c1cs) {
        // 0x802A43CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A43CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A43D0: lwc1        $f12, 0x98($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X98);
    // 0x802A43D4: jal         0x80272AEC
    // 0x802A43D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_1;
    // 0x802A43D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x802A43DC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A43E0: lhu         $t1, 0x2A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2A);
    // 0x802A43E4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802A43E8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802A43EC: bc1f        L_802A4444
    if (!c1cs) {
        // 0x802A43F0: andi        $t2, $t1, 0x2
        ctx->r10 = ctx->r9 & 0X2;
            goto L_802A4444;
    }
    // 0x802A43F0: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x802A43F4: beq         $t2, $zero, L_802A4428
    if (ctx->r10 == 0) {
        // 0x802A43F8: nop
    
            goto L_802A4428;
    }
    // 0x802A43F8: nop

    // 0x802A43FC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x802A4400: nop

    // 0x802A4404: beq         $t3, $a1, L_802A4420
    if (ctx->r11 == ctx->r5) {
        // 0x802A4408: nop
    
            goto L_802A4420;
    }
    // 0x802A4408: nop

    // 0x802A440C: lhu         $t4, 0x12($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X12);
    // 0x802A4410: nop

    // 0x802A4414: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802A4418: bne         $t5, $zero, L_802A4448
    if (ctx->r13 != 0) {
        // 0x802A441C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A441C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4420:
    // 0x802A4420: b           L_802A4448
    // 0x802A4424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A4448;
    // 0x802A4424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A4428:
    // 0x802A4428: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x802A442C: nop

    // 0x802A4430: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802A4434: bne         $t7, $zero, L_802A4448
    if (ctx->r15 != 0) {
        // 0x802A4438: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4448;
    }
    // 0x802A4438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A443C: b           L_802A4448
    // 0x802A4440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A4448;
    // 0x802A4440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A4444:
    // 0x802A4444: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4448:
    // 0x802A4448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A444C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A4450: jr          $ra
    // 0x802A4454: nop

    return;
    // 0x802A4454: nop

;}
RECOMP_FUNC void func_802A4458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4458: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802A445C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802A4460: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802A4464: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802A4468: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802A446C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802A4470: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802A4474: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802A4478: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802A447C: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802A4480: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x802A4484: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A4488: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x802A448C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x802A4490: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x802A4494: andi        $s6, $a3, 0xFFFF
    ctx->r22 = ctx->r7 & 0XFFFF;
    // 0x802A4498: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x802A449C: mtc1        $a2, $f22
    ctx->f22.u32l = ctx->r6;
    // 0x802A44A0: andi        $t6, $s6, 0x1
    ctx->r14 = ctx->r22 & 0X1;
    // 0x802A44A4: lw          $s5, 0x18($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X18);
    // 0x802A44A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x802A44AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A44B0: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x802A44B4: addiu       $v1, $v0, 0x370
    ctx->r3 = ADD32(ctx->r2, 0X370);
    // 0x802A44B8: bne         $t6, $zero, L_802A44C4
    if (ctx->r14 != 0) {
        // 0x802A44BC: addiu       $s2, $v0, 0x318
        ctx->r18 = ADD32(ctx->r2, 0X318);
            goto L_802A44C4;
    }
    // 0x802A44BC: addiu       $s2, $v0, 0x318
    ctx->r18 = ADD32(ctx->r2, 0X318);
    // 0x802A44C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802A44C4:
    // 0x802A44C4: beq         $a1, $zero, L_802A4528
    if (ctx->r5 == 0) {
        // 0x802A44C8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802A4528;
    }
    // 0x802A44C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802A44CC: addiu       $s3, $zero, 0xF8
    ctx->r19 = ADD32(0, 0XF8);
L_802A44D0:
    // 0x802A44D0: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802A44D4: nop

    // 0x802A44D8: beq         $v0, $zero, L_802A4528
    if (ctx->r2 == 0) {
        // 0x802A44DC: nop
    
            goto L_802A4528;
    }
    // 0x802A44DC: nop

    // 0x802A44E0: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A44E4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A44E8: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802A44EC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802A44F0: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802A44F4: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x802A44F8: mflo        $t7
    ctx->r15 = lo;
    // 0x802A44FC: addu        $s0, $t7, $s5
    ctx->r16 = ADD32(ctx->r15, ctx->r21);
    // 0x802A4500: jal         0x802A4360
    // 0x802A4504: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802A4360(rdram, ctx);
        goto after_0;
    // 0x802A4504: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x802A4508: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x802A450C: beq         $v0, $zero, L_802A451C
    if (ctx->r2 == 0) {
        // 0x802A4510: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802A451C;
    }
    // 0x802A4510: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A4514: b           L_802A4528
    // 0x802A4518: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
        goto L_802A4528;
    // 0x802A4518: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
L_802A451C:
    // 0x802A451C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802A4520: bne         $s1, $at, L_802A44D0
    if (ctx->r17 != ctx->r1) {
        // 0x802A4524: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_802A44D0;
    }
    // 0x802A4524: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_802A4528:
    // 0x802A4528: addiu       $s3, $zero, 0xF8
    ctx->r19 = ADD32(0, 0XF8);
    // 0x802A452C: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x802A4530: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802A4534:
    // 0x802A4534: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802A4538: nop

    // 0x802A453C: beq         $v0, $zero, L_802A4578
    if (ctx->r2 == 0) {
        // 0x802A4540: nop
    
            goto L_802A4578;
    }
    // 0x802A4540: nop

    // 0x802A4544: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4548: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A454C: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802A4550: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802A4554: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802A4558: mflo        $t8
    ctx->r24 = lo;
    // 0x802A455C: addu        $s0, $t8, $s5
    ctx->r16 = ADD32(ctx->r24, ctx->r21);
    // 0x802A4560: jal         0x802A4360
    // 0x802A4564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802A4360(rdram, ctx);
        goto after_1;
    // 0x802A4564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x802A4568: beq         $v0, $zero, L_802A4578
    if (ctx->r2 == 0) {
        // 0x802A456C: nop
    
            goto L_802A4578;
    }
    // 0x802A456C: nop

    // 0x802A4570: b           L_802A4588
    // 0x802A4574: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
        goto L_802A4588;
    // 0x802A4574: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
L_802A4578:
    // 0x802A4578: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A457C: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x802A4580: bne         $at, $zero, L_802A4534
    if (ctx->r1 != 0) {
        // 0x802A4584: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_802A4534;
    }
    // 0x802A4584: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_802A4588:
    // 0x802A4588: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A458C: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x802A4590: beq         $at, $zero, L_802A45EC
    if (ctx->r1 == 0) {
        // 0x802A4594: sw          $zero, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = 0;
            goto L_802A45EC;
    }
    // 0x802A4594: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_802A4598:
    // 0x802A4598: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802A459C: nop

    // 0x802A45A0: beq         $v0, $zero, L_802A45E4
    if (ctx->r2 == 0) {
        // 0x802A45A4: sltiu       $at, $s1, 0xB
        ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
            goto L_802A45E4;
    }
    // 0x802A45A4: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x802A45A8: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A45AC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802A45B0: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x802A45B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x802A45B8: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x802A45BC: mflo        $t9
    ctx->r25 = lo;
    // 0x802A45C0: addu        $s0, $t9, $s5
    ctx->r16 = ADD32(ctx->r25, ctx->r21);
    // 0x802A45C4: jal         0x802A4360
    // 0x802A45C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802A4360(rdram, ctx);
        goto after_2;
    // 0x802A45C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x802A45CC: beq         $v0, $zero, L_802A45DC
    if (ctx->r2 == 0) {
        // 0x802A45D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802A45DC;
    }
    // 0x802A45D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A45D4: b           L_802A45EC
    // 0x802A45D8: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
        goto L_802A45EC;
    // 0x802A45D8: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
L_802A45DC:
    // 0x802A45DC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802A45E0: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
L_802A45E4:
    // 0x802A45E4: bne         $at, $zero, L_802A4598
    if (ctx->r1 != 0) {
        // 0x802A45E8: nop
    
            goto L_802A4598;
    }
    // 0x802A45E8: nop

L_802A45EC:
    // 0x802A45EC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x802A45F0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x802A45F4: beq         $t0, $zero, L_802A4698
    if (ctx->r8 == 0) {
        // 0x802A45F8: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_802A4698;
    }
    // 0x802A45F8: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x802A45FC: beq         $t1, $zero, L_802A4694
    if (ctx->r9 == 0) {
        // 0x802A4600: lui         $s0, 0x8009
        ctx->r16 = S32(0X8009 << 16);
            goto L_802A4694;
    }
    // 0x802A4600: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x802A4604: addiu       $s0, $s0, 0x3B20
    ctx->r16 = ADD32(ctx->r16, 0X3B20);
    // 0x802A4608: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x802A460C: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802A4610: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x802A4614: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802A4618: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A461C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x802A4620: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802A4624: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802A4628: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x802A462C: jal         0x80272AEC
    // 0x802A4630: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_3;
    // 0x802A4630: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_3:
    // 0x802A4634: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802A4638: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x802A463C: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x802A4640: lwc1        $f4, 0x44($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X44);
    // 0x802A4644: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802A4648: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802A464C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A4650: mul.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x802A4654: jal         0x80272AEC
    // 0x802A4658: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    LOOKUP_FUNC(0x80272AEC)(rdram, ctx);
        goto after_4;
    // 0x802A4658: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x802A465C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x802A4660: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x802A4664: bc1f        L_802A4694
    if (!c1cs) {
        // 0x802A4668: lui         $at, 0x41A0
        ctx->r1 = S32(0X41A0 << 16);
            goto L_802A4694;
    }
    // 0x802A4668: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A466C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x802A4670: lwc1        $f16, 0x84($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X84);
    // 0x802A4674: lwc1        $f18, 0x84($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X84);
    // 0x802A4678: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A467C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x802A4680: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A4684: nop

    // 0x802A4688: bc1f        L_802A4698
    if (!c1cs) {
        // 0x802A468C: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_802A4698;
    }
    // 0x802A468C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x802A4690: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
L_802A4694:
    // 0x802A4694: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
L_802A4698:
    // 0x802A4698: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802A469C: beq         $t7, $zero, L_802A4738
    if (ctx->r15 == 0) {
        // 0x802A46A0: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_802A4738;
    }
    // 0x802A46A0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x802A46A4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x802A46A8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x802A46AC: bne         $t8, $zero, L_802A46BC
    if (ctx->r24 != 0) {
        // 0x802A46B0: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_802A46BC;
    }
    // 0x802A46B0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802A46B4: b           L_802A474C
    // 0x802A46B8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_802A474C;
    // 0x802A46B8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_802A46BC:
    // 0x802A46BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A46C0: lwc1        $f0, 0x84($t9)
    ctx->f0.u32l = MEM_W(ctx->r25, 0X84);
    // 0x802A46C4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x802A46C8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A46CC: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x802A46D0: bc1f        L_802A472C
    if (!c1cs) {
        // 0x802A46D4: nop
    
            goto L_802A472C;
    }
    // 0x802A46D4: nop

    // 0x802A46D8: lwc1        $f2, 0x84($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X84);
    // 0x802A46DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A46E0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A46E4: nop

    // 0x802A46E8: bc1f        L_802A4704
    if (!c1cs) {
        // 0x802A46EC: nop
    
            goto L_802A4704;
    }
    // 0x802A46EC: nop

    // 0x802A46F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A46F4: nop

    // 0x802A46F8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802A46FC: nop

    // 0x802A4700: bc1t        L_802A4720
    if (c1cs) {
        // 0x802A4704: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_802A4720;
    }
L_802A4704:
    // 0x802A4704: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802A4708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A470C: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A4710: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802A4714: nop

    // 0x802A4718: bc1f        L_802A472C
    if (!c1cs) {
        // 0x802A471C: nop
    
            goto L_802A472C;
    }
    // 0x802A471C: nop

L_802A4720:
    // 0x802A4720: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x802A4724: b           L_802A4750
    // 0x802A4728: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_802A4750;
    // 0x802A4728: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_802A472C:
    // 0x802A472C: b           L_802A4750
    // 0x802A4730: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
        goto L_802A4750;
    // 0x802A4730: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802A4734: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_802A4738:
    // 0x802A4738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A473C: beq         $t2, $zero, L_802A474C
    if (ctx->r10 == 0) {
        // 0x802A4740: nop
    
            goto L_802A474C;
    }
    // 0x802A4740: nop

    // 0x802A4744: b           L_802A474C
    // 0x802A4748: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_802A474C;
    // 0x802A4748: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_802A474C:
    // 0x802A474C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_802A4750:
    // 0x802A4750: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A4754: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x802A4758: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802A475C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802A4760: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802A4764: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802A4768: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802A476C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x802A4770: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x802A4774: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x802A4778: jr          $ra
    // 0x802A477C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802A477C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802A4780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4780: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A4784: lwc1        $f0, 0x12C8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X12C8);
    // 0x802A4788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A478C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A4790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4794: lhu         $a3, 0x1E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A4798: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A479C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A47A0: jal         0x802A4458
    // 0x802A47A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802A4458(rdram, ctx);
        goto after_0;
    // 0x802A47A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A47A8: beq         $v0, $zero, L_802A47B8
    if (ctx->r2 == 0) {
        // 0x802A47AC: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802A47B8;
    }
    // 0x802A47AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A47B0: b           L_802A47EC
    // 0x802A47B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A47EC;
    // 0x802A47B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A47B8:
    // 0x802A47B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A47BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A47C0: lhu         $a3, 0x1E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A47C4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A47C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A47CC: jal         0x802A4458
    // 0x802A47D0: nop

    func_802A4458(rdram, ctx);
        goto after_1;
    // 0x802A47D0: nop

    after_1:
    // 0x802A47D4: beq         $v0, $zero, L_802A47E4
    if (ctx->r2 == 0) {
        // 0x802A47D8: nop
    
            goto L_802A47E4;
    }
    // 0x802A47D8: nop

    // 0x802A47DC: b           L_802A47EC
    // 0x802A47E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A47EC;
    // 0x802A47E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A47E4:
    // 0x802A47E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A47E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A47EC:
    // 0x802A47EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A47F0: jr          $ra
    // 0x802A47F4: nop

    return;
    // 0x802A47F4: nop

;}
RECOMP_FUNC void func_802A47F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A47F8: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x802A47FC: beq         $t7, $zero, L_802A4820
    if (ctx->r15 == 0) {
        // 0x802A4800: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_802A4820;
    }
    // 0x802A4800: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A4804: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4808: nop

    // 0x802A480C: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x802A4810: beq         $t9, $zero, L_802A4824
    if (ctx->r25 == 0) {
        // 0x802A4814: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802A4824;
    }
    // 0x802A4814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A4818: jr          $ra
    // 0x802A481C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802A481C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4820:
    // 0x802A4820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A4824:
    // 0x802A4824: jr          $ra
    // 0x802A4828: nop

    return;
    // 0x802A4828: nop

;}
RECOMP_FUNC void func_802A482C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A482C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802A4830: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x802A4834: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
    // 0x802A4838: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802A483C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x802A4840: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x802A4844: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A4848: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802A484C: bne         $t7, $zero, L_802A4874
    if (ctx->r15 != 0) {
        // 0x802A4850: sw          $t6, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r14;
            goto L_802A4874;
    }
    // 0x802A4850: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802A4854: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x802A4858: nop

    // 0x802A485C: lw          $t9, 0x914($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X914);
    // 0x802A4860: nop

    // 0x802A4864: bne         $a0, $t9, L_802A4878
    if (ctx->r4 != ctx->r25) {
        // 0x802A4868: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A4878;
    }
    // 0x802A4868: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A486C: b           L_802A4DF4
    // 0x802A4870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A4870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4874:
    // 0x802A4874: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_802A4878:
    // 0x802A4878: nop

    // 0x802A487C: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x802A4880: bne         $t3, $zero, L_802A48FC
    if (ctx->r11 != 0) {
        // 0x802A4884: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A4884: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A4888: lw          $t4, 0xC8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC8);
    // 0x802A488C: nop

    // 0x802A4890: lw          $s0, 0x914($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X914);
    // 0x802A4894: nop

    // 0x802A4898: beq         $s0, $zero, L_802A48FC
    if (ctx->r16 == 0) {
        // 0x802A489C: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A489C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48A0: beq         $s1, $s0, L_802A48FC
    if (ctx->r17 == ctx->r16) {
        // 0x802A48A4: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A48A4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48A8: lhu         $t5, 0x1A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1A);
    // 0x802A48AC: nop

    // 0x802A48B0: beq         $t5, $zero, L_802A48FC
    if (ctx->r13 == 0) {
        // 0x802A48B4: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A48B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48B8: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x802A48BC: nop

    // 0x802A48C0: andi        $t7, $t6, 0x801
    ctx->r15 = ctx->r14 & 0X801;
    // 0x802A48C4: bne         $t7, $zero, L_802A48FC
    if (ctx->r15 != 0) {
        // 0x802A48C8: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A48C8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48CC: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x802A48D0: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x802A48D4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802A48D8: bne         $t9, $zero, L_802A48FC
    if (ctx->r25 != 0) {
        // 0x802A48DC: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A48DC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48E0: jal         0x802A47F8
    // 0x802A48E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802A47F8(rdram, ctx);
        goto after_0;
    // 0x802A48E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802A48E8: beq         $v0, $zero, L_802A48FC
    if (ctx->r2 == 0) {
        // 0x802A48EC: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A48FC;
    }
    // 0x802A48EC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A48F0: b           L_802A4DF4
    // 0x802A48F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_802A4DF4;
    // 0x802A48F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802A48F8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_802A48FC:
    // 0x802A48FC: nop

    // 0x802A4900: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x802A4904: beq         $t3, $zero, L_802A4A10
    if (ctx->r11 == 0) {
        // 0x802A4908: nop
    
            goto L_802A4A10;
    }
    // 0x802A4908: nop

    // 0x802A490C: lw          $a2, 0xC8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC8);
    // 0x802A4910: andi        $t5, $t2, 0x10
    ctx->r13 = ctx->r10 & 0X10;
    // 0x802A4914: lb          $v0, 0x8DC($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X8DC);
    // 0x802A4918: lw          $s0, 0x18($a2)
    ctx->r16 = MEM_W(ctx->r6, 0X18);
    // 0x802A491C: blez        $v0, L_802A4A08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802A4920: sll         $t4, $v0, 5
        ctx->r12 = S32(ctx->r2 << 5);
            goto L_802A4A08;
    }
    // 0x802A4920: sll         $t4, $v0, 5
    ctx->r12 = S32(ctx->r2 << 5);
    // 0x802A4924: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x802A4928: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x802A492C: beq         $t5, $zero, L_802A49BC
    if (ctx->r13 == 0) {
        // 0x802A4930: addu        $a0, $t4, $s0
        ctx->r4 = ADD32(ctx->r12, ctx->r16);
            goto L_802A49BC;
    }
    // 0x802A4930: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802A4934: bne         $s1, $a0, L_802A49BC
    if (ctx->r17 != ctx->r4) {
        // 0x802A4938: addiu       $a1, $a2, 0x318
        ctx->r5 = ADD32(ctx->r6, 0X318);
            goto L_802A49BC;
    }
    // 0x802A4938: addiu       $a1, $a2, 0x318
    ctx->r5 = ADD32(ctx->r6, 0X318);
    // 0x802A493C: jal         0x802636CC
    // 0x802A4940: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(0x802636CC)(rdram, ctx);
        goto after_1;
    // 0x802A4940: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x802A4944: lhu         $t6, 0x12($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X12);
    // 0x802A4948: nop

    // 0x802A494C: andi        $t7, $t6, 0x801
    ctx->r15 = ctx->r14 & 0X801;
    // 0x802A4950: bne         $t7, $zero, L_802A49B4
    if (ctx->r15 != 0) {
        // 0x802A4954: nop
    
            goto L_802A49B4;
    }
    // 0x802A4954: nop

    // 0x802A4958: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x802A495C: nop

    // 0x802A4960: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802A4964: bne         $t9, $zero, L_802A49B4
    if (ctx->r25 != 0) {
        // 0x802A4968: nop
    
            goto L_802A49B4;
    }
    // 0x802A4968: nop

    // 0x802A496C: beq         $s1, $v0, L_802A49B4
    if (ctx->r17 == ctx->r2) {
        // 0x802A4970: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_802A49B4;
    }
    // 0x802A4970: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A4974: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A4978: lwc1        $f6, 0x84($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X84);
    // 0x802A497C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A4980: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A4984: nop

    // 0x802A4988: bc1f        L_802A49B4
    if (!c1cs) {
        // 0x802A498C: nop
    
            goto L_802A49B4;
    }
    // 0x802A498C: nop

    // 0x802A4990: lwc1        $f8, 0x84($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X84);
    // 0x802A4994: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A4998: nop

    // 0x802A499C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A49A0: nop

    // 0x802A49A4: bc1f        L_802A49B4
    if (!c1cs) {
        // 0x802A49A8: nop
    
            goto L_802A49B4;
    }
    // 0x802A49A8: nop

    // 0x802A49AC: b           L_802A4DF8
    // 0x802A49B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A4DF8;
    // 0x802A49B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A49B4:
    // 0x802A49B4: b           L_802A4DF4
    // 0x802A49B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A49B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A49BC:
    // 0x802A49BC: lhu         $v0, 0x12($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X12);
    // 0x802A49C0: nop

    // 0x802A49C4: andi        $t3, $v0, 0x801
    ctx->r11 = ctx->r2 & 0X801;
    // 0x802A49C8: bne         $t3, $zero, L_802A4A10
    if (ctx->r11 != 0) {
        // 0x802A49CC: andi        $t4, $v0, 0x8000
        ctx->r12 = ctx->r2 & 0X8000;
            goto L_802A4A10;
    }
    // 0x802A49CC: andi        $t4, $v0, 0x8000
    ctx->r12 = ctx->r2 & 0X8000;
    // 0x802A49D0: bne         $t4, $zero, L_802A4A14
    if (ctx->r12 != 0) {
        // 0x802A49D4: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A4A14;
    }
    // 0x802A49D4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A49D8: beq         $s1, $a0, L_802A4A14
    if (ctx->r17 == ctx->r4) {
        // 0x802A49DC: lw          $t2, 0x30($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X30);
            goto L_802A4A14;
    }
    // 0x802A49DC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A49E0: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x802A49E4: jal         0x802A47F8
    // 0x802A49E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_802A47F8(rdram, ctx);
        goto after_2;
    // 0x802A49E8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_2:
    // 0x802A49EC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x802A49F0: beq         $v0, $zero, L_802A4A00
    if (ctx->r2 == 0) {
        // 0x802A49F4: nop
    
            goto L_802A4A00;
    }
    // 0x802A49F4: nop

    // 0x802A49F8: b           L_802A4DF4
    // 0x802A49FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A49FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4A00:
    // 0x802A4A00: b           L_802A4DF4
    // 0x802A4A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A4A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4A08:
    // 0x802A4A08: b           L_802A4DF4
    // 0x802A4A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A4A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4A10:
    // 0x802A4A10: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
L_802A4A14:
    // 0x802A4A14: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x802A4A18: andi        $t5, $t2, 0x20
    ctx->r13 = ctx->r10 & 0X20;
    // 0x802A4A1C: beq         $t5, $zero, L_802A4A2C
    if (ctx->r13 == 0) {
        // 0x802A4A20: andi        $t7, $t6, 0x40
        ctx->r15 = ctx->r14 & 0X40;
            goto L_802A4A2C;
    }
    // 0x802A4A20: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x802A4A24: b           L_802A4DF4
    // 0x802A4A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A4A28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4A2C:
    // 0x802A4A2C: beq         $t7, $zero, L_802A4A50
    if (ctx->r15 == 0) {
        // 0x802A4A30: nop
    
            goto L_802A4A50;
    }
    // 0x802A4A30: nop

    // 0x802A4A34: lhu         $t8, 0x14($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X14);
    // 0x802A4A38: nop

    // 0x802A4A3C: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x802A4A40: bne         $t9, $zero, L_802A4A50
    if (ctx->r25 != 0) {
        // 0x802A4A44: nop
    
            goto L_802A4A50;
    }
    // 0x802A4A44: nop

    // 0x802A4A48: b           L_802A4DF4
    // 0x802A4A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A4DF4;
    // 0x802A4A4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4A50:
    // 0x802A4A50: lw          $t3, 0xC8($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC8);
    // 0x802A4A54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802A4A58: lw          $s0, 0x18($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X18);
    // 0x802A4A5C: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
L_802A4A60:
    // 0x802A4A60: lw          $t4, 0xC8($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC8);
    // 0x802A4A64: nop

    // 0x802A4A68: addu        $t2, $t4, $a3
    ctx->r10 = ADD32(ctx->r12, ctx->r7);
    // 0x802A4A6C: lhu         $v0, 0x318($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X318);
    // 0x802A4A70: nop

    // 0x802A4A74: beq         $v0, $zero, L_802A4AFC
    if (ctx->r2 == 0) {
        // 0x802A4A78: nop
    
            goto L_802A4AFC;
    }
    // 0x802A4A78: nop

    // 0x802A4A7C: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4A80: mflo        $t5
    ctx->r13 = lo;
    // 0x802A4A84: addu        $v1, $t5, $s0
    ctx->r3 = ADD32(ctx->r13, ctx->r16);
    // 0x802A4A88: beq         $s1, $v1, L_802A4AFC
    if (ctx->r17 == ctx->r3) {
        // 0x802A4A8C: nop
    
            goto L_802A4AFC;
    }
    // 0x802A4A8C: nop

    // 0x802A4A90: lhu         $t6, 0xC($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0XC);
    // 0x802A4A94: nop

    // 0x802A4A98: beq         $t6, $zero, L_802A4AFC
    if (ctx->r14 == 0) {
        // 0x802A4A9C: nop
    
            goto L_802A4AFC;
    }
    // 0x802A4A9C: nop

    // 0x802A4AA0: lhu         $t7, 0x12($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X12);
    // 0x802A4AA4: nop

    // 0x802A4AA8: andi        $t8, $t7, 0x801
    ctx->r24 = ctx->r15 & 0X801;
    // 0x802A4AAC: bne         $t8, $zero, L_802A4AFC
    if (ctx->r24 != 0) {
        // 0x802A4AB0: nop
    
            goto L_802A4AFC;
    }
    // 0x802A4AB0: nop

    // 0x802A4AB4: lhu         $t9, 0x14($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X14);
    // 0x802A4AB8: nop

    // 0x802A4ABC: andi        $t3, $t9, 0x8000
    ctx->r11 = ctx->r25 & 0X8000;
    // 0x802A4AC0: bne         $t3, $zero, L_802A4AFC
    if (ctx->r11 != 0) {
        // 0x802A4AC4: nop
    
            goto L_802A4AFC;
    }
    // 0x802A4AC4: nop

    // 0x802A4AC8: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4ACC: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x802A4AD0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x802A4AD4: mflo        $t4
    ctx->r12 = lo;
    // 0x802A4AD8: addu        $a0, $t4, $s0
    ctx->r4 = ADD32(ctx->r12, ctx->r16);
    // 0x802A4ADC: jal         0x802A47F8
    // 0x802A4AE0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_802A47F8(rdram, ctx);
        goto after_3;
    // 0x802A4AE0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_3:
    // 0x802A4AE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x802A4AE8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802A4AEC: beq         $v0, $zero, L_802A4AFC
    if (ctx->r2 == 0) {
        // 0x802A4AF0: addiu       $t0, $zero, 0xF8
        ctx->r8 = ADD32(0, 0XF8);
            goto L_802A4AFC;
    }
    // 0x802A4AF0: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    // 0x802A4AF4: b           L_802A4DF4
    // 0x802A4AF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4AF8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4AFC:
    // 0x802A4AFC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x802A4B00: sltiu       $at, $a3, 0x58
    ctx->r1 = ctx->r7 < 0X58 ? 1 : 0;
    // 0x802A4B04: bne         $at, $zero, L_802A4A60
    if (ctx->r1 != 0) {
        // 0x802A4B08: nop
    
            goto L_802A4A60;
    }
    // 0x802A4B08: nop

    // 0x802A4B0C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A4B10: nop

    // 0x802A4B14: andi        $t5, $t2, 0x80
    ctx->r13 = ctx->r10 & 0X80;
    // 0x802A4B18: beq         $t5, $zero, L_802A4DF4
    if (ctx->r13 == 0) {
        // 0x802A4B1C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A4DF4;
    }
    // 0x802A4B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A4B20: lw          $t1, 0xC8($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC8);
    // 0x802A4B24: nop

    // 0x802A4B28: lhu         $v0, 0x318($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X318);
    // 0x802A4B2C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802A4B30: beq         $v0, $zero, L_802A4B8C
    if (ctx->r2 == 0) {
        // 0x802A4B34: nop
    
            goto L_802A4B8C;
    }
    // 0x802A4B34: nop

    // 0x802A4B38: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4B3C: mflo        $t6
    ctx->r14 = lo;
    // 0x802A4B40: addu        $v1, $t6, $s0
    ctx->r3 = ADD32(ctx->r14, ctx->r16);
    // 0x802A4B44: beq         $s1, $v1, L_802A4B8C
    if (ctx->r17 == ctx->r3) {
        // 0x802A4B48: nop
    
            goto L_802A4B8C;
    }
    // 0x802A4B48: nop

    // 0x802A4B4C: lhu         $t7, 0xC($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC);
    // 0x802A4B50: nop

    // 0x802A4B54: beq         $t7, $zero, L_802A4B8C
    if (ctx->r15 == 0) {
        // 0x802A4B58: nop
    
            goto L_802A4B8C;
    }
    // 0x802A4B58: nop

    // 0x802A4B5C: lhu         $t8, 0x12($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X12);
    // 0x802A4B60: nop

    // 0x802A4B64: andi        $t9, $t8, 0x801
    ctx->r25 = ctx->r24 & 0X801;
    // 0x802A4B68: bne         $t9, $zero, L_802A4B8C
    if (ctx->r25 != 0) {
        // 0x802A4B6C: nop
    
            goto L_802A4B8C;
    }
    // 0x802A4B6C: nop

    // 0x802A4B70: lhu         $t3, 0x14($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X14);
    // 0x802A4B74: nop

    // 0x802A4B78: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x802A4B7C: bne         $t4, $zero, L_802A4B8C
    if (ctx->r12 != 0) {
        // 0x802A4B80: nop
    
            goto L_802A4B8C;
    }
    // 0x802A4B80: nop

    // 0x802A4B84: b           L_802A4DF4
    // 0x802A4B88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802A4DF4;
    // 0x802A4B88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802A4B8C:
    // 0x802A4B8C: lhu         $a2, 0x320($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X320);
    // 0x802A4B90: nop

    // 0x802A4B94: beq         $a2, $zero, L_802A4BF0
    if (ctx->r6 == 0) {
        // 0x802A4B98: nop
    
            goto L_802A4BF0;
    }
    // 0x802A4B98: nop

    // 0x802A4B9C: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4BA0: mflo        $t2
    ctx->r10 = lo;
    // 0x802A4BA4: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802A4BA8: beq         $s1, $a0, L_802A4BF0
    if (ctx->r17 == ctx->r4) {
        // 0x802A4BAC: nop
    
            goto L_802A4BF0;
    }
    // 0x802A4BAC: nop

    // 0x802A4BB0: lhu         $t5, 0xC($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XC);
    // 0x802A4BB4: nop

    // 0x802A4BB8: beq         $t5, $zero, L_802A4BF0
    if (ctx->r13 == 0) {
        // 0x802A4BBC: nop
    
            goto L_802A4BF0;
    }
    // 0x802A4BBC: nop

    // 0x802A4BC0: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4BC4: nop

    // 0x802A4BC8: andi        $t7, $t6, 0x801
    ctx->r15 = ctx->r14 & 0X801;
    // 0x802A4BCC: bne         $t7, $zero, L_802A4BF0
    if (ctx->r15 != 0) {
        // 0x802A4BD0: nop
    
            goto L_802A4BF0;
    }
    // 0x802A4BD0: nop

    // 0x802A4BD4: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4BD8: nop

    // 0x802A4BDC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802A4BE0: bne         $t9, $zero, L_802A4BF0
    if (ctx->r25 != 0) {
        // 0x802A4BE4: nop
    
            goto L_802A4BF0;
    }
    // 0x802A4BE4: nop

    // 0x802A4BE8: b           L_802A4DF4
    // 0x802A4BEC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4BEC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4BF0:
    // 0x802A4BF0: lhu         $a2, 0x328($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X328);
    // 0x802A4BF4: addiu       $a1, $t1, 0x18
    ctx->r5 = ADD32(ctx->r9, 0X18);
    // 0x802A4BF8: beq         $a2, $zero, L_802A4C54
    if (ctx->r6 == 0) {
        // 0x802A4BFC: addiu       $a3, $zero, 0x18
        ctx->r7 = ADD32(0, 0X18);
            goto L_802A4C54;
    }
    // 0x802A4BFC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x802A4C00: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4C04: mflo        $t3
    ctx->r11 = lo;
    // 0x802A4C08: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802A4C0C: beq         $s1, $a0, L_802A4C54
    if (ctx->r17 == ctx->r4) {
        // 0x802A4C10: nop
    
            goto L_802A4C54;
    }
    // 0x802A4C10: nop

    // 0x802A4C14: lhu         $t4, 0xC($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XC);
    // 0x802A4C18: nop

    // 0x802A4C1C: beq         $t4, $zero, L_802A4C54
    if (ctx->r12 == 0) {
        // 0x802A4C20: nop
    
            goto L_802A4C54;
    }
    // 0x802A4C20: nop

    // 0x802A4C24: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4C28: nop

    // 0x802A4C2C: andi        $t5, $t2, 0x801
    ctx->r13 = ctx->r10 & 0X801;
    // 0x802A4C30: bne         $t5, $zero, L_802A4C54
    if (ctx->r13 != 0) {
        // 0x802A4C34: nop
    
            goto L_802A4C54;
    }
    // 0x802A4C34: nop

    // 0x802A4C38: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4C3C: nop

    // 0x802A4C40: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x802A4C44: bne         $t7, $zero, L_802A4C58
    if (ctx->r15 != 0) {
        // 0x802A4C48: addiu       $t1, $zero, 0x58
        ctx->r9 = ADD32(0, 0X58);
            goto L_802A4C58;
    }
    // 0x802A4C48: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x802A4C4C: b           L_802A4DF4
    // 0x802A4C50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4C50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4C54:
    // 0x802A4C54: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
L_802A4C58:
    // 0x802A4C58: lhu         $v0, 0x318($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X318);
    // 0x802A4C5C: nop

    // 0x802A4C60: beq         $v0, $zero, L_802A4CBC
    if (ctx->r2 == 0) {
        // 0x802A4C64: nop
    
            goto L_802A4CBC;
    }
    // 0x802A4C64: nop

    // 0x802A4C68: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4C6C: mflo        $t8
    ctx->r24 = lo;
    // 0x802A4C70: addu        $v1, $t8, $s0
    ctx->r3 = ADD32(ctx->r24, ctx->r16);
    // 0x802A4C74: beq         $s1, $v1, L_802A4CBC
    if (ctx->r17 == ctx->r3) {
        // 0x802A4C78: nop
    
            goto L_802A4CBC;
    }
    // 0x802A4C78: nop

    // 0x802A4C7C: lhu         $t9, 0xC($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XC);
    // 0x802A4C80: nop

    // 0x802A4C84: beq         $t9, $zero, L_802A4CBC
    if (ctx->r25 == 0) {
        // 0x802A4C88: nop
    
            goto L_802A4CBC;
    }
    // 0x802A4C88: nop

    // 0x802A4C8C: lhu         $t3, 0x12($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X12);
    // 0x802A4C90: nop

    // 0x802A4C94: andi        $t4, $t3, 0x801
    ctx->r12 = ctx->r11 & 0X801;
    // 0x802A4C98: bne         $t4, $zero, L_802A4CBC
    if (ctx->r12 != 0) {
        // 0x802A4C9C: nop
    
            goto L_802A4CBC;
    }
    // 0x802A4C9C: nop

    // 0x802A4CA0: lhu         $t2, 0x14($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X14);
    // 0x802A4CA4: nop

    // 0x802A4CA8: andi        $t5, $t2, 0x8000
    ctx->r13 = ctx->r10 & 0X8000;
    // 0x802A4CAC: bne         $t5, $zero, L_802A4CBC
    if (ctx->r13 != 0) {
        // 0x802A4CB0: nop
    
            goto L_802A4CBC;
    }
    // 0x802A4CB0: nop

    // 0x802A4CB4: b           L_802A4DF4
    // 0x802A4CB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_802A4DF4;
    // 0x802A4CB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_802A4CBC:
    // 0x802A4CBC: lhu         $a2, 0x320($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X320);
    // 0x802A4CC0: nop

    // 0x802A4CC4: beq         $a2, $zero, L_802A4D20
    if (ctx->r6 == 0) {
        // 0x802A4CC8: nop
    
            goto L_802A4D20;
    }
    // 0x802A4CC8: nop

    // 0x802A4CCC: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4CD0: mflo        $t6
    ctx->r14 = lo;
    // 0x802A4CD4: addu        $a0, $t6, $s0
    ctx->r4 = ADD32(ctx->r14, ctx->r16);
    // 0x802A4CD8: beq         $s1, $a0, L_802A4D20
    if (ctx->r17 == ctx->r4) {
        // 0x802A4CDC: nop
    
            goto L_802A4D20;
    }
    // 0x802A4CDC: nop

    // 0x802A4CE0: lhu         $t7, 0xC($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XC);
    // 0x802A4CE4: nop

    // 0x802A4CE8: beq         $t7, $zero, L_802A4D20
    if (ctx->r15 == 0) {
        // 0x802A4CEC: nop
    
            goto L_802A4D20;
    }
    // 0x802A4CEC: nop

    // 0x802A4CF0: lhu         $t8, 0x12($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4CF4: nop

    // 0x802A4CF8: andi        $t9, $t8, 0x801
    ctx->r25 = ctx->r24 & 0X801;
    // 0x802A4CFC: bne         $t9, $zero, L_802A4D20
    if (ctx->r25 != 0) {
        // 0x802A4D00: nop
    
            goto L_802A4D20;
    }
    // 0x802A4D00: nop

    // 0x802A4D04: lhu         $t3, 0x14($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4D08: nop

    // 0x802A4D0C: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x802A4D10: bne         $t4, $zero, L_802A4D20
    if (ctx->r12 != 0) {
        // 0x802A4D14: nop
    
            goto L_802A4D20;
    }
    // 0x802A4D14: nop

    // 0x802A4D18: b           L_802A4DF4
    // 0x802A4D1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4D1C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4D20:
    // 0x802A4D20: lhu         $a2, 0x328($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X328);
    // 0x802A4D24: nop

    // 0x802A4D28: beq         $a2, $zero, L_802A4D84
    if (ctx->r6 == 0) {
        // 0x802A4D2C: nop
    
            goto L_802A4D84;
    }
    // 0x802A4D2C: nop

    // 0x802A4D30: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4D34: mflo        $t2
    ctx->r10 = lo;
    // 0x802A4D38: addu        $a0, $t2, $s0
    ctx->r4 = ADD32(ctx->r10, ctx->r16);
    // 0x802A4D3C: beq         $s1, $a0, L_802A4D84
    if (ctx->r17 == ctx->r4) {
        // 0x802A4D40: nop
    
            goto L_802A4D84;
    }
    // 0x802A4D40: nop

    // 0x802A4D44: lhu         $t5, 0xC($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0XC);
    // 0x802A4D48: nop

    // 0x802A4D4C: beq         $t5, $zero, L_802A4D84
    if (ctx->r13 == 0) {
        // 0x802A4D50: nop
    
            goto L_802A4D84;
    }
    // 0x802A4D50: nop

    // 0x802A4D54: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4D58: nop

    // 0x802A4D5C: andi        $t7, $t6, 0x801
    ctx->r15 = ctx->r14 & 0X801;
    // 0x802A4D60: bne         $t7, $zero, L_802A4D84
    if (ctx->r15 != 0) {
        // 0x802A4D64: nop
    
            goto L_802A4D84;
    }
    // 0x802A4D64: nop

    // 0x802A4D68: lhu         $t8, 0x14($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4D6C: nop

    // 0x802A4D70: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802A4D74: bne         $t9, $zero, L_802A4D84
    if (ctx->r25 != 0) {
        // 0x802A4D78: nop
    
            goto L_802A4D84;
    }
    // 0x802A4D78: nop

    // 0x802A4D7C: b           L_802A4DF4
    // 0x802A4D80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4D80: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4D84:
    // 0x802A4D84: lhu         $a2, 0x330($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X330);
    // 0x802A4D88: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x802A4D8C: beq         $a2, $zero, L_802A4DE8
    if (ctx->r6 == 0) {
        // 0x802A4D90: nop
    
            goto L_802A4DE8;
    }
    // 0x802A4D90: nop

    // 0x802A4D94: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A4D98: mflo        $t3
    ctx->r11 = lo;
    // 0x802A4D9C: addu        $a0, $t3, $s0
    ctx->r4 = ADD32(ctx->r11, ctx->r16);
    // 0x802A4DA0: beq         $s1, $a0, L_802A4DE8
    if (ctx->r17 == ctx->r4) {
        // 0x802A4DA4: nop
    
            goto L_802A4DE8;
    }
    // 0x802A4DA4: nop

    // 0x802A4DA8: lhu         $t4, 0xC($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0XC);
    // 0x802A4DAC: nop

    // 0x802A4DB0: beq         $t4, $zero, L_802A4DE8
    if (ctx->r12 == 0) {
        // 0x802A4DB4: nop
    
            goto L_802A4DE8;
    }
    // 0x802A4DB4: nop

    // 0x802A4DB8: lhu         $t2, 0x12($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4DBC: nop

    // 0x802A4DC0: andi        $t5, $t2, 0x801
    ctx->r13 = ctx->r10 & 0X801;
    // 0x802A4DC4: bne         $t5, $zero, L_802A4DE8
    if (ctx->r13 != 0) {
        // 0x802A4DC8: nop
    
            goto L_802A4DE8;
    }
    // 0x802A4DC8: nop

    // 0x802A4DCC: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x802A4DD0: nop

    // 0x802A4DD4: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x802A4DD8: bne         $t7, $zero, L_802A4DE8
    if (ctx->r15 != 0) {
        // 0x802A4DDC: nop
    
            goto L_802A4DE8;
    }
    // 0x802A4DDC: nop

    // 0x802A4DE0: b           L_802A4DF4
    // 0x802A4DE4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_802A4DF4;
    // 0x802A4DE4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802A4DE8:
    // 0x802A4DE8: bne         $a3, $t1, L_802A4C58
    if (ctx->r7 != ctx->r9) {
        // 0x802A4DEC: addiu       $a1, $a1, 0x20
        ctx->r5 = ADD32(ctx->r5, 0X20);
            goto L_802A4C58;
    }
    // 0x802A4DEC: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x802A4DF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A4DF4:
    // 0x802A4DF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A4DF8:
    // 0x802A4DF8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802A4DFC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802A4E00: jr          $ra
    // 0x802A4E04: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802A4E04: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802A4E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4E08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A4E0C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802A4E10: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x802A4E14: addiu       $s3, $s3, 0x368A
    ctx->r19 = ADD32(ctx->r19, 0X368A);
    // 0x802A4E18: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x802A4E1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802A4E20: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802A4E24: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802A4E28: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802A4E2C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A4E30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802A4E34: beq         $v0, $zero, L_802A4E44
    if (ctx->r2 == 0) {
        // 0x802A4E38: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_802A4E44;
    }
    // 0x802A4E38: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x802A4E3C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x802A4E40: sh          $t6, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r14;
L_802A4E44:
    // 0x802A4E44: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x802A4E48: addiu       $s1, $s1, 0x3B20
    ctx->r17 = ADD32(ctx->r17, 0X3B20);
    // 0x802A4E4C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x802A4E50: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x802A4E54: lw          $t8, 0x88($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X88);
    // 0x802A4E58: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x802A4E5C: bne         $t8, $zero, L_802A4F00
    if (ctx->r24 != 0) {
        // 0x802A4E60: lui         $at, 0x4080
        ctx->r1 = S32(0X4080 << 16);
            goto L_802A4F00;
    }
    // 0x802A4E60: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802A4E64: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x802A4E68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x802A4E6C: addiu       $s2, $s2, -0x17C8
    ctx->r18 = ADD32(ctx->r18, -0X17C8);
L_802A4E70:
    // 0x802A4E70: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x802A4E74: nop

    // 0x802A4E78: lw          $t0, 0x8C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8C);
    // 0x802A4E7C: nop

    // 0x802A4E80: lw          $t1, 0xC8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC8);
    // 0x802A4E84: nop

    // 0x802A4E88: bne         $s0, $t1, L_802A4EA0
    if (ctx->r16 != ctx->r9) {
        // 0x802A4E8C: nop
    
            goto L_802A4EA0;
    }
    // 0x802A4E8C: nop

    // 0x802A4E90: lhu         $t2, 0x0($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X0);
    // 0x802A4E94: nop

    // 0x802A4E98: bne         $t2, $zero, L_802A4EF4
    if (ctx->r10 != 0) {
        // 0x802A4E9C: nop
    
            goto L_802A4EF4;
    }
    // 0x802A4E9C: nop

L_802A4EA0:
    // 0x802A4EA0: lw          $a0, 0x918($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X918);
    // 0x802A4EA4: nop

    // 0x802A4EA8: beq         $a0, $zero, L_802A4EF4
    if (ctx->r4 == 0) {
        // 0x802A4EAC: nop
    
            goto L_802A4EF4;
    }
    // 0x802A4EAC: nop

    // 0x802A4EB0: lhu         $t3, 0x12($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X12);
    // 0x802A4EB4: nop

    // 0x802A4EB8: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x802A4EBC: bne         $t4, $zero, L_802A4EF4
    if (ctx->r12 != 0) {
        // 0x802A4EC0: nop
    
            goto L_802A4EF4;
    }
    // 0x802A4EC0: nop

    // 0x802A4EC4: lwc1        $f4, 0xB4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x802A4EC8: nop

    // 0x802A4ECC: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x802A4ED0: nop

    // 0x802A4ED4: bc1f        L_802A4EF4
    if (!c1cs) {
        // 0x802A4ED8: nop
    
            goto L_802A4EF4;
    }
    // 0x802A4ED8: nop

    // 0x802A4EDC: lhu         $t5, 0x1A($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X1A);
    // 0x802A4EE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802A4EE4: beq         $t5, $zero, L_802A4EF4
    if (ctx->r13 == 0) {
        // 0x802A4EE8: nop
    
            goto L_802A4EF4;
    }
    // 0x802A4EE8: nop

    // 0x802A4EEC: jal         0x802A613C
    // 0x802A4EF0: sw          $zero, 0x918($s0)
    MEM_W(0X918, ctx->r16) = 0;
    func_802A613C(rdram, ctx);
        goto after_0;
    // 0x802A4EF0: sw          $zero, 0x918($s0)
    MEM_W(0X918, ctx->r16) = 0;
    after_0:
L_802A4EF4:
    // 0x802A4EF4: addiu       $s0, $s0, 0xA94
    ctx->r16 = ADD32(ctx->r16, 0XA94);
    // 0x802A4EF8: bne         $s0, $s2, L_802A4E70
    if (ctx->r16 != ctx->r18) {
        // 0x802A4EFC: nop
    
            goto L_802A4E70;
    }
    // 0x802A4EFC: nop

L_802A4F00:
    // 0x802A4F00: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802A4F04: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802A4F08: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A4F0C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x802A4F10: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x802A4F14: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x802A4F18: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x802A4F1C: jr          $ra
    // 0x802A4F20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x802A4F20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802A4F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4F24: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A4F28: addiu       $v1, $v1, 0x4FC0
    ctx->r3 = ADD32(ctx->r3, 0X4FC0);
    // 0x802A4F2C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x802A4F30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A4F34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802A4F38: addiu       $a0, $a0, 0x358
    ctx->r4 = ADD32(ctx->r4, 0X358);
    // 0x802A4F3C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802A4F40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A4F44: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802A4F48: beq         $v0, $zero, L_802A4F58
    if (ctx->r2 == 0) {
        // 0x802A4F4C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_802A4F58;
    }
    // 0x802A4F4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A4F50: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x802A4F54: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_802A4F58:
    // 0x802A4F58: jal         0x802A4E08
    // 0x802A4F5C: nop

    func_802A4E08(rdram, ctx);
        goto after_0;
    // 0x802A4F5C: nop

    after_0:
    // 0x802A4F60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802A4F64:
    // 0x802A4F64: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x802A4F68: nop

    // 0x802A4F6C: beq         $t7, $zero, L_802A4FA8
    if (ctx->r15 == 0) {
        // 0x802A4F70: nop
    
            goto L_802A4FA8;
    }
    // 0x802A4F70: nop

    // 0x802A4F74: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802A4F78: nop

    // 0x802A4F7C: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x802A4F80: bne         $t8, $zero, L_802A4FA8
    if (ctx->r24 != 0) {
        // 0x802A4F84: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_802A4FA8;
    }
    // 0x802A4F84: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x802A4F88: beq         $t9, $zero, L_802A4FA0
    if (ctx->r25 == 0) {
        // 0x802A4F8C: nop
    
            goto L_802A4FA0;
    }
    // 0x802A4F8C: nop

    // 0x802A4F90: jal         0x802A5D94
    // 0x802A4F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802A5D94(rdram, ctx);
        goto after_1;
    // 0x802A4F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802A4F98: b           L_802A4FAC
    // 0x802A4F9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_802A4FAC;
    // 0x802A4F9C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802A4FA0:
    // 0x802A4FA0: jal         0x802A5AA4
    // 0x802A4FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802A5AA4(rdram, ctx);
        goto after_2;
    // 0x802A4FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_802A4FA8:
    // 0x802A4FA8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802A4FAC:
    // 0x802A4FAC: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x802A4FB0: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802A4FB4: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x802A4FB8: bne         $at, $zero, L_802A4F64
    if (ctx->r1 != 0) {
        // 0x802A4FBC: addiu       $s0, $s0, 0x58
        ctx->r16 = ADD32(ctx->r16, 0X58);
            goto L_802A4F64;
    }
    // 0x802A4FBC: addiu       $s0, $s0, 0x58
    ctx->r16 = ADD32(ctx->r16, 0X58);
    // 0x802A4FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A4FC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x802A4FC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x802A4FCC: jr          $ra
    // 0x802A4FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A4FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A4FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A4FD4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A4FD8: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802A4FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A4FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A4FE4: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x802A4FE8: nop

    // 0x802A4FEC: beq         $a1, $t7, L_802A506C
    if (ctx->r5 == ctx->r15) {
        // 0x802A4FF0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A506C;
    }
    // 0x802A4FF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A4FF4: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x802A4FF8: nop

    // 0x802A4FFC: lbu         $t9, 0x868($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X868);
    // 0x802A5000: nop

    // 0x802A5004: beq         $t9, $zero, L_802A506C
    if (ctx->r25 == 0) {
        // 0x802A5008: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A506C;
    }
    // 0x802A5008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A500C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802A5010: nop

    // 0x802A5014: andi        $t0, $v0, 0x4000
    ctx->r8 = ctx->r2 & 0X4000;
    // 0x802A5018: beq         $t0, $zero, L_802A5068
    if (ctx->r8 == 0) {
        // 0x802A501C: nop
    
            goto L_802A5068;
    }
    // 0x802A501C: nop

    // 0x802A5020: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x802A5024: nop

    // 0x802A5028: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x802A502C: bne         $t2, $zero, L_802A5068
    if (ctx->r10 != 0) {
        // 0x802A5030: nop
    
            goto L_802A5068;
    }
    // 0x802A5030: nop

    // 0x802A5034: lhu         $t3, 0x12($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X12);
    // 0x802A5038: nop

    // 0x802A503C: andi        $t4, $t3, 0x801
    ctx->r12 = ctx->r11 & 0X801;
    // 0x802A5040: bne         $t4, $zero, L_802A5068
    if (ctx->r12 != 0) {
        // 0x802A5044: nop
    
            goto L_802A5068;
    }
    // 0x802A5044: nop

    // 0x802A5048: lhu         $t5, 0xC($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0XC);
    // 0x802A504C: andi        $t6, $v0, 0xBFFF
    ctx->r14 = ctx->r2 & 0XBFFF;
    // 0x802A5050: beq         $t5, $zero, L_802A5068
    if (ctx->r13 == 0) {
        // 0x802A5054: nop
    
            goto L_802A5068;
    }
    // 0x802A5054: nop

    // 0x802A5058: jal         0x802A5F2C
    // 0x802A505C: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A505C: sh          $t6, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r14;
    after_0:
    // 0x802A5060: b           L_802A506C
    // 0x802A5064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A506C;
    // 0x802A5064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A5068:
    // 0x802A5068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A506C:
    // 0x802A506C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A5074: jr          $ra
    // 0x802A5078: nop

    return;
    // 0x802A5078: nop

;}
RECOMP_FUNC void func_802A507C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A507C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5084: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A5088: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x802A508C: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x802A5090: lw          $t7, 0xC8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC8);
    // 0x802A5094: lhu         $v0, 0x1A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A5098: lw          $a2, 0x18($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X18);
    // 0x802A509C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A50A0: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
L_802A50A4:
    // 0x802A50A4: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A50A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A50AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A50B0: sltiu       $at, $v0, 0xB
    ctx->r1 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802A50B4: mflo        $t8
    ctx->r24 = lo;
    // 0x802A50B8: addu        $a1, $t8, $a2
    ctx->r5 = ADD32(ctx->r24, ctx->r6);
    // 0x802A50BC: lhu         $t9, 0x1A($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A50C0: nop

    // 0x802A50C4: beq         $t9, $zero, L_802A5104
    if (ctx->r25 == 0) {
        // 0x802A50C8: nop
    
            goto L_802A5104;
    }
    // 0x802A50C8: nop

    // 0x802A50CC: lhu         $t0, 0xC($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XC);
    // 0x802A50D0: nop

    // 0x802A50D4: beq         $t0, $zero, L_802A5104
    if (ctx->r8 == 0) {
        // 0x802A50D8: nop
    
            goto L_802A5104;
    }
    // 0x802A50D8: nop

    // 0x802A50DC: lhu         $t1, 0x12($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X12);
    // 0x802A50E0: nop

    // 0x802A50E4: andi        $t2, $t1, 0x801
    ctx->r10 = ctx->r9 & 0X801;
    // 0x802A50E8: bne         $t2, $zero, L_802A5104
    if (ctx->r10 != 0) {
        // 0x802A50EC: nop
    
            goto L_802A5104;
    }
    // 0x802A50EC: nop

    // 0x802A50F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A50F4: jal         0x802A5F2C
    // 0x802A50F8: nop

    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A50F8: nop

    after_0:
    // 0x802A50FC: b           L_802A511C
    // 0x802A5100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A511C;
    // 0x802A5100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5104:
    // 0x802A5104: bne         $at, $zero, L_802A5110
    if (ctx->r1 != 0) {
        // 0x802A5108: nop
    
            goto L_802A5110;
    }
    // 0x802A5108: nop

    // 0x802A510C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A5110:
    // 0x802A5110: bne         $v1, $a3, L_802A50A4
    if (ctx->r3 != ctx->r7) {
        // 0x802A5114: nop
    
            goto L_802A50A4;
    }
    // 0x802A5114: nop

    // 0x802A5118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A511C:
    // 0x802A511C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A5120: jr          $ra
    // 0x802A5124: nop

    return;
    // 0x802A5124: nop

;}
RECOMP_FUNC void func_802A5128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5128: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A512C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A5130: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802A5134: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802A5138: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802A513C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802A5140: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A5144: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802A5148: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A514C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802A5150: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x802A5154: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x802A5158: lw          $t7, 0xC8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC8);
    // 0x802A515C: lhu         $s1, 0x1A($v0)
    ctx->r17 = MEM_HU(ctx->r2, 0X1A);
    // 0x802A5160: lw          $s3, 0x18($t7)
    ctx->r19 = MEM_W(ctx->r15, 0X18);
    // 0x802A5164: addiu       $s5, $s5, 0x3B20
    ctx->r21 = ADD32(ctx->r21, 0X3B20);
    // 0x802A5168: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802A516C: addiu       $s4, $zero, 0xF8
    ctx->r20 = ADD32(0, 0XF8);
    // 0x802A5170: addiu       $s6, $zero, 0xB
    ctx->r22 = ADD32(0, 0XB);
L_802A5174:
    // 0x802A5174: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A5178: mflo        $t8
    ctx->r24 = lo;
    // 0x802A517C: addu        $s0, $t8, $s3
    ctx->r16 = ADD32(ctx->r24, ctx->r19);
    // 0x802A5180: lhu         $t9, 0x1A($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X1A);
    // 0x802A5184: nop

    // 0x802A5188: beq         $t9, $zero, L_802A5200
    if (ctx->r25 == 0) {
        // 0x802A518C: nop
    
            goto L_802A5200;
    }
    // 0x802A518C: nop

    // 0x802A5190: lhu         $t0, 0xC($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XC);
    // 0x802A5194: nop

    // 0x802A5198: beq         $t0, $zero, L_802A5200
    if (ctx->r8 == 0) {
        // 0x802A519C: nop
    
            goto L_802A5200;
    }
    // 0x802A519C: nop

    // 0x802A51A0: lhu         $t1, 0x12($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X12);
    // 0x802A51A4: nop

    // 0x802A51A8: andi        $t2, $t1, 0x801
    ctx->r10 = ctx->r9 & 0X801;
    // 0x802A51AC: bne         $t2, $zero, L_802A5200
    if (ctx->r10 != 0) {
        // 0x802A51B0: nop
    
            goto L_802A5200;
    }
    // 0x802A51B0: nop

    // 0x802A51B4: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x802A51B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A51BC: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x802A51C0: nop

    // 0x802A51C4: blez        $t4, L_802A51D4
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802A51C8: nop
    
            goto L_802A51D4;
    }
    // 0x802A51C8: nop

    // 0x802A51CC: b           L_802A51D4
    // 0x802A51D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_802A51D4;
    // 0x802A51D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A51D4:
    // 0x802A51D4: lwc1        $f12, 0x4C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802A51D8: lwc1        $f14, 0x44($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802A51DC: jal         0x80271FD4
    // 0x802A51E0: nop

    LOOKUP_FUNC(0x80271FD4)(rdram, ctx);
        goto after_0;
    // 0x802A51E0: nop

    after_0:
    // 0x802A51E4: bne         $v0, $zero, L_802A5204
    if (ctx->r2 != 0) {
        // 0x802A51E8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802A5204;
    }
    // 0x802A51E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802A51EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x802A51F0: jal         0x802A5F2C
    // 0x802A51F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802A5F2C(rdram, ctx);
        goto after_1;
    // 0x802A51F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x802A51F8: b           L_802A5220
    // 0x802A51FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802A5220;
    // 0x802A51FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A5200:
    // 0x802A5200: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802A5204:
    // 0x802A5204: sltiu       $at, $s1, 0xB
    ctx->r1 = ctx->r17 < 0XB ? 1 : 0;
    // 0x802A5208: bne         $at, $zero, L_802A5214
    if (ctx->r1 != 0) {
        // 0x802A520C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_802A5214;
    }
    // 0x802A520C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802A5210: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802A5214:
    // 0x802A5214: bne         $s2, $s6, L_802A5174
    if (ctx->r18 != ctx->r22) {
        // 0x802A5218: nop
    
            goto L_802A5174;
    }
    // 0x802A5218: nop

    // 0x802A521C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A5220:
    // 0x802A5220: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A5224: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5228: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802A522C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802A5230: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802A5234: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802A5238: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802A523C: jr          $ra
    // 0x802A5240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802A5240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802A5244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A524C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A5250: lw          $a1, 0x40($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X40);
    // 0x802A5254: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802A5258: lw          $t7, 0xC8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC8);
    // 0x802A525C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A5260: lhu         $v0, 0x1A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A5264: lw          $a2, 0x18($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X18);
    // 0x802A5268: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x802A526C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A5270: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
L_802A5274:
    // 0x802A5274: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A5278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A527C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A5280: sltiu       $at, $v0, 0xB
    ctx->r1 = ctx->r2 < 0XB ? 1 : 0;
    // 0x802A5284: mflo        $t8
    ctx->r24 = lo;
    // 0x802A5288: addu        $a1, $t8, $a2
    ctx->r5 = ADD32(ctx->r24, ctx->r6);
    // 0x802A528C: lhu         $t9, 0x1A($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A5290: nop

    // 0x802A5294: beq         $t9, $zero, L_802A52EC
    if (ctx->r25 == 0) {
        // 0x802A5298: nop
    
            goto L_802A52EC;
    }
    // 0x802A5298: nop

    // 0x802A529C: lhu         $t0, 0xC($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XC);
    // 0x802A52A0: nop

    // 0x802A52A4: beq         $t0, $zero, L_802A52EC
    if (ctx->r8 == 0) {
        // 0x802A52A8: nop
    
            goto L_802A52EC;
    }
    // 0x802A52A8: nop

    // 0x802A52AC: lhu         $t1, 0x12($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X12);
    // 0x802A52B0: nop

    // 0x802A52B4: andi        $t2, $t1, 0x801
    ctx->r10 = ctx->r9 & 0X801;
    // 0x802A52B8: bne         $t2, $zero, L_802A52EC
    if (ctx->r10 != 0) {
        // 0x802A52BC: nop
    
            goto L_802A52EC;
    }
    // 0x802A52BC: nop

    // 0x802A52C0: lwc1        $f4, 0x84($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802A52C4: nop

    // 0x802A52C8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802A52CC: nop

    // 0x802A52D0: bc1f        L_802A52EC
    if (!c1cs) {
        // 0x802A52D4: nop
    
            goto L_802A52EC;
    }
    // 0x802A52D4: nop

    // 0x802A52D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A52DC: jal         0x802A5F2C
    // 0x802A52E0: nop

    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A52E0: nop

    after_0:
    // 0x802A52E4: b           L_802A5304
    // 0x802A52E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5304;
    // 0x802A52E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A52EC:
    // 0x802A52EC: bne         $at, $zero, L_802A52F8
    if (ctx->r1 != 0) {
        // 0x802A52F0: nop
    
            goto L_802A52F8;
    }
    // 0x802A52F0: nop

    // 0x802A52F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A52F8:
    // 0x802A52F8: bne         $v1, $a3, L_802A5274
    if (ctx->r3 != ctx->r7) {
        // 0x802A52FC: nop
    
            goto L_802A5274;
    }
    // 0x802A52FC: nop

    // 0x802A5300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5304:
    // 0x802A5304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A5308: jr          $ra
    // 0x802A530C: nop

    return;
    // 0x802A530C: nop

;}
RECOMP_FUNC void func_802A5310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5310: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802A5314: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x802A5318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A531C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5320: lbu         $t6, 0xBC($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XBC);
    // 0x802A5324: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x802A5328: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A532C: bne         $t6, $at, L_802A5344
    if (ctx->r14 != ctx->r1) {
        // 0x802A5330: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802A5344;
    }
    // 0x802A5330: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A5334: lw          $t7, 0x8C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8C);
    // 0x802A5338: nop

    // 0x802A533C: beq         $a1, $t7, L_802A5354
    if (ctx->r5 == ctx->r15) {
        // 0x802A5340: nop
    
            goto L_802A5354;
    }
    // 0x802A5340: nop

L_802A5344:
    // 0x802A5344: lw          $t8, 0xB0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XB0);
    // 0x802A5348: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802A534C: bne         $a2, $t8, L_802A535C
    if (ctx->r6 != ctx->r24) {
        // 0x802A5350: nop
    
            goto L_802A535C;
    }
    // 0x802A5350: nop

L_802A5354:
    // 0x802A5354: b           L_802A55A8
    // 0x802A5358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A5358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A535C:
    // 0x802A535C: lhu         $t9, 0xB78($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB78);
    // 0x802A5360: nop

    // 0x802A5364: bne         $t9, $zero, L_802A538C
    if (ctx->r25 != 0) {
        // 0x802A5368: nop
    
            goto L_802A538C;
    }
    // 0x802A5368: nop

    // 0x802A536C: lw          $t0, 0x88($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X88);
    // 0x802A5370: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x802A5374: bne         $t0, $zero, L_802A538C
    if (ctx->r8 != 0) {
        // 0x802A5378: nop
    
            goto L_802A538C;
    }
    // 0x802A5378: nop

    // 0x802A537C: lhu         $t1, 0xB7A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0XB7A);
    // 0x802A5380: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A5384: bne         $t1, $at, L_802A5394
    if (ctx->r9 != ctx->r1) {
        // 0x802A5388: nop
    
            goto L_802A5394;
    }
    // 0x802A5388: nop

L_802A538C:
    // 0x802A538C: b           L_802A55A8
    // 0x802A5390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A5390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A5394:
    // 0x802A5394: lhu         $v0, 0x12($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X12);
    // 0x802A5398: nop

    // 0x802A539C: andi        $t2, $v0, 0x8000
    ctx->r10 = ctx->r2 & 0X8000;
    // 0x802A53A0: beq         $t2, $zero, L_802A53B8
    if (ctx->r10 == 0) {
        // 0x802A53A4: nop
    
            goto L_802A53B8;
    }
    // 0x802A53A4: nop

    // 0x802A53A8: bne         $t2, $zero, L_802A53B8
    if (ctx->r10 != 0) {
        // 0x802A53AC: nop
    
            goto L_802A53B8;
    }
    // 0x802A53AC: nop

    // 0x802A53B0: b           L_802A55A8
    // 0x802A53B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A53B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A53B8:
    // 0x802A53B8: lhu         $t3, 0x4($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X4);
    // 0x802A53BC: nop

    // 0x802A53C0: andi        $t4, $t3, 0xD
    ctx->r12 = ctx->r11 & 0XD;
    // 0x802A53C4: bne         $t4, $zero, L_802A53E8
    if (ctx->r12 != 0) {
        // 0x802A53C8: nop
    
            goto L_802A53E8;
    }
    // 0x802A53C8: nop

    // 0x802A53CC: lhu         $t5, 0x2($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X2);
    // 0x802A53D0: nop

    // 0x802A53D4: andi        $t6, $t5, 0x40
    ctx->r14 = ctx->r13 & 0X40;
    // 0x802A53D8: bne         $t6, $zero, L_802A53E8
    if (ctx->r14 != 0) {
        // 0x802A53DC: nop
    
            goto L_802A53E8;
    }
    // 0x802A53DC: nop

    // 0x802A53E0: b           L_802A55A8
    // 0x802A53E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A53E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A53E8:
    // 0x802A53E8: lhu         $t7, 0xC0($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XC0);
    // 0x802A53EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A53F0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A53F4: beq         $t8, $zero, L_802A5418
    if (ctx->r24 == 0) {
        // 0x802A53F8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A5418;
    }
    // 0x802A53F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A53FC: lhu         $t9, 0x6A($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X6A);
    // 0x802A5400: nop

    // 0x802A5404: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x802A5408: beq         $at, $zero, L_802A5418
    if (ctx->r1 == 0) {
        // 0x802A540C: nop
    
            goto L_802A5418;
    }
    // 0x802A540C: nop

    // 0x802A5410: b           L_802A55A8
    // 0x802A5414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A5414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A5418:
    // 0x802A5418: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802A541C: jal         0x802A482C
    // 0x802A5420: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_802A482C(rdram, ctx);
        goto after_0;
    // 0x802A5420: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A5424: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5428: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A542C: beq         $v0, $zero, L_802A55A4
    if (ctx->r2 == 0) {
        // 0x802A5430: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A55A4;
    }
    // 0x802A5430: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5434: beq         $a2, $v0, L_802A55A4
    if (ctx->r6 == ctx->r2) {
        // 0x802A5438: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_802A55A4;
    }
    // 0x802A5438: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x802A543C: lw          $v1, 0x3B20($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B20);
    // 0x802A5440: nop

    // 0x802A5444: lw          $t0, 0xA8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XA8);
    // 0x802A5448: nop

    // 0x802A544C: beq         $v0, $t0, L_802A55A4
    if (ctx->r2 == ctx->r8) {
        // 0x802A5450: nop
    
            goto L_802A55A4;
    }
    // 0x802A5450: nop

    // 0x802A5454: lw          $t1, 0x88($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X88);
    // 0x802A5458: nop

    // 0x802A545C: beq         $t1, $zero, L_802A54E0
    if (ctx->r9 == 0) {
        // 0x802A5460: nop
    
            goto L_802A54E0;
    }
    // 0x802A5460: nop

    // 0x802A5464: lw          $t2, 0x8C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8C);
    // 0x802A5468: lw          $t4, 0xC8($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XC8);
    // 0x802A546C: lw          $t3, 0xC8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC8);
    // 0x802A5470: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A5474: beq         $t3, $t4, L_802A54C8
    if (ctx->r11 == ctx->r12) {
        // 0x802A5478: nop
    
            goto L_802A54C8;
    }
    // 0x802A5478: nop

    // 0x802A547C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A5480: lwc1        $f0, 0x84($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X84);
    // 0x802A5484: nop

    // 0x802A5488: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A548C: nop

    // 0x802A5490: bc1t        L_802A54C8
    if (c1cs) {
        // 0x802A5494: nop
    
            goto L_802A54C8;
    }
    // 0x802A5494: nop

    // 0x802A5498: lhu         $t5, 0x14($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X14);
    // 0x802A549C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A54A0: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x802A54A4: bne         $t6, $zero, L_802A54C8
    if (ctx->r14 != 0) {
        // 0x802A54A8: nop
    
            goto L_802A54C8;
    }
    // 0x802A54A8: nop

    // 0x802A54AC: lwc1        $f4, 0x84($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X84);
    // 0x802A54B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A54B4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x802A54B8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x802A54BC: nop

    // 0x802A54C0: bc1f        L_802A54D0
    if (!c1cs) {
        // 0x802A54C4: nop
    
            goto L_802A54D0;
    }
    // 0x802A54C4: nop

L_802A54C8:
    // 0x802A54C8: b           L_802A55A8
    // 0x802A54CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A54CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A54D0:
    // 0x802A54D0: jal         0x802A5F2C
    // 0x802A54D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A5F2C(rdram, ctx);
        goto after_1;
    // 0x802A54D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x802A54D8: b           L_802A55A8
    // 0x802A54DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A55A8;
    // 0x802A54DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A54E0:
    // 0x802A54E0: lw          $t7, 0x90($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X90);
    // 0x802A54E4: nop

    // 0x802A54E8: beq         $v0, $t7, L_802A5514
    if (ctx->r2 == ctx->r15) {
        // 0x802A54EC: nop
    
            goto L_802A5514;
    }
    // 0x802A54EC: nop

    // 0x802A54F0: lw          $t8, 0xA0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XA0);
    // 0x802A54F4: nop

    // 0x802A54F8: beq         $v0, $t8, L_802A5514
    if (ctx->r2 == ctx->r24) {
        // 0x802A54FC: nop
    
            goto L_802A5514;
    }
    // 0x802A54FC: nop

    // 0x802A5500: lhu         $t9, 0xC0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0XC0);
    // 0x802A5504: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802A5508: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x802A550C: beq         $t0, $zero, L_802A5524
    if (ctx->r8 == 0) {
        // 0x802A5510: nop
    
            goto L_802A5524;
    }
    // 0x802A5510: nop

L_802A5514:
    // 0x802A5514: jal         0x802A5F2C
    // 0x802A5518: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A5F2C(rdram, ctx);
        goto after_2;
    // 0x802A5518: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x802A551C: b           L_802A55A8
    // 0x802A5520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A55A8;
    // 0x802A5520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A5524:
    // 0x802A5524: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A5528: lwc1        $f0, 0x84($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X84);
    // 0x802A552C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x802A5530: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A5534: nop

    // 0x802A5538: bc1t        L_802A555C
    if (c1cs) {
        // 0x802A553C: nop
    
            goto L_802A555C;
    }
    // 0x802A553C: nop

    // 0x802A5540: lwc1        $f2, 0x84($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X84);
    // 0x802A5544: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5548: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A554C: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x802A5550: nop

    // 0x802A5554: bc1f        L_802A5564
    if (!c1cs) {
        // 0x802A5558: nop
    
            goto L_802A5564;
    }
    // 0x802A5558: nop

L_802A555C:
    // 0x802A555C: b           L_802A55A8
    // 0x802A5560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A5560: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A5564:
    // 0x802A5564: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A5568: nop

    // 0x802A556C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x802A5570: nop

    // 0x802A5574: bc1f        L_802A5594
    if (!c1cs) {
        // 0x802A5578: nop
    
            goto L_802A5594;
    }
    // 0x802A5578: nop

    // 0x802A557C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A5580: nop

    // 0x802A5584: bc1f        L_802A5594
    if (!c1cs) {
        // 0x802A5588: nop
    
            goto L_802A5594;
    }
    // 0x802A5588: nop

    // 0x802A558C: b           L_802A55A8
    // 0x802A5590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A55A8;
    // 0x802A5590: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A5594:
    // 0x802A5594: jal         0x802A5F2C
    // 0x802A5598: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A5F2C(rdram, ctx);
        goto after_3;
    // 0x802A5598: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x802A559C: b           L_802A55A8
    // 0x802A55A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A55A8;
    // 0x802A55A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A55A4:
    // 0x802A55A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A55A8:
    // 0x802A55A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A55AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A55B0: jr          $ra
    // 0x802A55B4: nop

    return;
    // 0x802A55B4: nop

;}
RECOMP_FUNC void func_802A55B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A55B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802A55BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A55C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A55C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x802A55C8: lhu         $t6, 0xE($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XE);
    // 0x802A55CC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x802A55D0: beq         $t6, $at, L_802A5A1C
    if (ctx->r14 == ctx->r1) {
        // 0x802A55D4: or          $s0, $a1, $zero
        ctx->r16 = ctx->r5 | 0;
            goto L_802A5A1C;
    }
    // 0x802A55D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802A55D8: lhu         $t7, 0x1A($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A55DC: nop

    // 0x802A55E0: bne         $t7, $zero, L_802A5600
    if (ctx->r15 != 0) {
        // 0x802A55E4: nop
    
            goto L_802A5600;
    }
    // 0x802A55E4: nop

    // 0x802A55E8: lw          $t8, 0xC8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC8);
    // 0x802A55EC: nop

    // 0x802A55F0: lbu         $t9, 0x868($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X868);
    // 0x802A55F4: nop

    // 0x802A55F8: bne         $t9, $zero, L_802A5A20
    if (ctx->r25 != 0) {
        // 0x802A55FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A55FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A5600:
    // 0x802A5600: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x802A5604: nop

    // 0x802A5608: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x802A560C: beq         $t1, $zero, L_802A561C
    if (ctx->r9 == 0) {
        // 0x802A5610: nop
    
            goto L_802A561C;
    }
    // 0x802A5610: nop

    // 0x802A5614: beq         $t1, $zero, L_802A5A20
    if (ctx->r9 == 0) {
        // 0x802A5618: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A561C:
    // 0x802A561C: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x802A5620: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A5624: andi        $t2, $a0, 0x2000
    ctx->r10 = ctx->r4 & 0X2000;
    // 0x802A5628: bne         $t2, $zero, L_802A5A20
    if (ctx->r10 != 0) {
        // 0x802A562C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A562C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5630: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x802A5634: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A5638: bne         $v1, $at, L_802A56CC
    if (ctx->r3 != ctx->r1) {
        // 0x802A563C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_802A56CC;
    }
    // 0x802A563C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A5640: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x802A5644: nop

    // 0x802A5648: lhu         $t4, 0x20($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X20);
    // 0x802A564C: nop

    // 0x802A5650: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802A5654: slti        $at, $t5, 0x3C
    ctx->r1 = SIGNED(ctx->r13) < 0X3C ? 1 : 0;
    // 0x802A5658: bne         $at, $zero, L_802A5A1C
    if (ctx->r1 != 0) {
        // 0x802A565C: sh          $t5, 0x20($t3)
        MEM_H(0X20, ctx->r11) = ctx->r13;
            goto L_802A5A1C;
    }
    // 0x802A565C: sh          $t5, 0x20($t3)
    MEM_H(0X20, ctx->r11) = ctx->r13;
    // 0x802A5660: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    // 0x802A5664: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802A5668: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x802A566C: bne         $t7, $zero, L_802A568C
    if (ctx->r15 != 0) {
        // 0x802A5670: nop
    
            goto L_802A568C;
    }
    // 0x802A5670: nop

    // 0x802A5674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5678: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A567C: nop

    // 0x802A5680: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A5684: nop

    // 0x802A5688: bc1f        L_802A5A1C
    if (!c1cs) {
        // 0x802A568C: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_802A5A1C;
    }
L_802A568C:
    // 0x802A568C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A5690: lwc1        $f0, 0x12CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X12CC);
    // 0x802A5694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A5698: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A569C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A56A0: jal         0x802A4458
    // 0x802A56A4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_802A4458(rdram, ctx);
        goto after_0;
    // 0x802A56A4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x802A56A8: beq         $v0, $zero, L_802A5A1C
    if (ctx->r2 == 0) {
        // 0x802A56AC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5A1C;
    }
    // 0x802A56AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A56B0: beq         $s0, $v0, L_802A5A20
    if (ctx->r16 == ctx->r2) {
        // 0x802A56B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A56B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A56B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A56BC: jal         0x802A5F2C
    // 0x802A56C0: nop

    func_802A5F2C(rdram, ctx);
        goto after_1;
    // 0x802A56C0: nop

    after_1:
    // 0x802A56C4: b           L_802A5A20
    // 0x802A56C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A56C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A56CC:
    // 0x802A56CC: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A56D0: nop

    // 0x802A56D4: lhu         $t8, 0xC0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XC0);
    // 0x802A56D8: nop

    // 0x802A56DC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802A56E0: bne         $t9, $zero, L_802A5A20
    if (ctx->r25 != 0) {
        // 0x802A56E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A56E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A56E8: bne         $v1, $zero, L_802A5A1C
    if (ctx->r3 != 0) {
        // 0x802A56EC: lui         $t1, 0x801B
        ctx->r9 = S32(0X801B << 16);
            goto L_802A5A1C;
    }
    // 0x802A56EC: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x802A56F0: lw          $t1, 0x3614($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3614);
    // 0x802A56F4: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A56F8: beq         $s0, $t1, L_802A5A20
    if (ctx->r16 == ctx->r9) {
        // 0x802A56FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A56FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5700: lhu         $t2, 0x4FC0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X4FC0);
    // 0x802A5704: nop

    // 0x802A5708: bne         $t2, $zero, L_802A5A20
    if (ctx->r10 != 0) {
        // 0x802A570C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A570C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5710: lw          $t4, 0x88($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X88);
    // 0x802A5714: lw          $v1, 0xC8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC8);
    // 0x802A5718: bne         $t4, $zero, L_802A5808
    if (ctx->r12 != 0) {
        // 0x802A571C: nop
    
            goto L_802A5808;
    }
    // 0x802A571C: nop

    // 0x802A5720: lw          $t3, 0x90($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X90);
    // 0x802A5724: nop

    // 0x802A5728: bne         $t3, $zero, L_802A5808
    if (ctx->r11 != 0) {
        // 0x802A572C: nop
    
            goto L_802A5808;
    }
    // 0x802A572C: nop

    // 0x802A5730: lw          $t5, 0xA4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XA4);
    // 0x802A5734: nop

    // 0x802A5738: bne         $t5, $zero, L_802A5808
    if (ctx->r13 != 0) {
        // 0x802A573C: nop
    
            goto L_802A5808;
    }
    // 0x802A573C: nop

    // 0x802A5740: lw          $t6, 0xA0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XA0);
    // 0x802A5744: nop

    // 0x802A5748: bne         $t6, $zero, L_802A5808
    if (ctx->r14 != 0) {
        // 0x802A574C: nop
    
            goto L_802A5808;
    }
    // 0x802A574C: nop

    // 0x802A5750: lh          $t7, 0x8AE($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X8AE);
    // 0x802A5754: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802A5758: beq         $t7, $zero, L_802A5808
    if (ctx->r15 == 0) {
        // 0x802A575C: nop
    
            goto L_802A5808;
    }
    // 0x802A575C: nop

    // 0x802A5760: lhu         $t9, 0x20($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X20);
    // 0x802A5764: nop

    // 0x802A5768: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x802A576C: slti        $at, $t1, 0x1E
    ctx->r1 = SIGNED(ctx->r9) < 0X1E ? 1 : 0;
    // 0x802A5770: bne         $at, $zero, L_802A5A1C
    if (ctx->r1 != 0) {
        // 0x802A5774: sh          $t1, 0x20($t8)
        MEM_H(0X20, ctx->r24) = ctx->r9;
            goto L_802A5A1C;
    }
    // 0x802A5774: sh          $t1, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r9;
    // 0x802A5778: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A577C: lwc1        $f0, 0x12D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X12D0);
    // 0x802A5780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A5784: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A5788: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A578C: jal         0x802A4458
    // 0x802A5790: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_802A4458(rdram, ctx);
        goto after_2;
    // 0x802A5790: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x802A5794: beq         $v0, $zero, L_802A57B8
    if (ctx->r2 == 0) {
        // 0x802A5798: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A57B8;
    }
    // 0x802A5798: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A579C: beq         $s0, $v0, L_802A5A20
    if (ctx->r16 == ctx->r2) {
        // 0x802A57A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A57A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A57A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A57A8: jal         0x802A5F2C
    // 0x802A57AC: nop

    func_802A5F2C(rdram, ctx);
        goto after_3;
    // 0x802A57AC: nop

    after_3:
    // 0x802A57B0: b           L_802A5A20
    // 0x802A57B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A57B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A57B8:
    // 0x802A57B8: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x802A57BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A57C0: andi        $t4, $t2, 0x800
    ctx->r12 = ctx->r10 & 0X800;
    // 0x802A57C4: beq         $t4, $zero, L_802A5A20
    if (ctx->r12 == 0) {
        // 0x802A57C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A57C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A57CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A57D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A57D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A57D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A57DC: jal         0x802A4458
    // 0x802A57E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_802A4458(rdram, ctx);
        goto after_4;
    // 0x802A57E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x802A57E4: beq         $v0, $zero, L_802A5A1C
    if (ctx->r2 == 0) {
        // 0x802A57E8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5A1C;
    }
    // 0x802A57E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A57EC: beq         $s0, $v0, L_802A5A20
    if (ctx->r16 == ctx->r2) {
        // 0x802A57F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A57F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A57F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A57F8: jal         0x802A5F2C
    // 0x802A57FC: nop

    func_802A5F2C(rdram, ctx);
        goto after_5;
    // 0x802A57FC: nop

    after_5:
    // 0x802A5800: b           L_802A5A20
    // 0x802A5804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A5804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A5808:
    // 0x802A5808: lh          $t3, 0x8AE($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X8AE);
    // 0x802A580C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x802A5810: bne         $t3, $zero, L_802A5A20
    if (ctx->r11 != 0) {
        // 0x802A5814: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5818: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A581C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A5820: andi        $t9, $a0, 0x1000
    ctx->r25 = ctx->r4 & 0X1000;
    // 0x802A5824: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A5828: nop

    // 0x802A582C: bc1t        L_802A5A20
    if (c1cs) {
        // 0x802A5830: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5834: lhu         $t5, 0x370($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X370);
    // 0x802A5838: lw          $t7, 0x18($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X18);
    // 0x802A583C: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x802A5840: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x802A5844: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802A5848: beq         $t9, $zero, L_802A5878
    if (ctx->r25 == 0) {
        // 0x802A584C: addu        $t0, $t6, $t7
        ctx->r8 = ADD32(ctx->r14, ctx->r15);
            goto L_802A5878;
    }
    // 0x802A584C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x802A5850: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802A5854: nop

    // 0x802A5858: lhu         $t1, 0x20($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X20);
    // 0x802A585C: nop

    // 0x802A5860: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802A5864: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x802A5868: beq         $at, $zero, L_802A5898
    if (ctx->r1 == 0) {
        // 0x802A586C: sh          $t2, 0x20($t8)
        MEM_H(0X20, ctx->r24) = ctx->r10;
            goto L_802A5898;
    }
    // 0x802A586C: sh          $t2, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r10;
    // 0x802A5870: b           L_802A5A20
    // 0x802A5874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A5874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A5878:
    // 0x802A5878: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802A587C: nop

    // 0x802A5880: lhu         $t3, 0x20($t4)
    ctx->r11 = MEM_HU(ctx->r12, 0X20);
    // 0x802A5884: nop

    // 0x802A5888: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x802A588C: slti        $at, $t5, 0x19
    ctx->r1 = SIGNED(ctx->r13) < 0X19 ? 1 : 0;
    // 0x802A5890: bne         $at, $zero, L_802A5A1C
    if (ctx->r1 != 0) {
        // 0x802A5894: sh          $t5, 0x20($t4)
        MEM_H(0X20, ctx->r12) = ctx->r13;
            goto L_802A5A1C;
    }
    // 0x802A5894: sh          $t5, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r13;
L_802A5898:
    // 0x802A5898: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A589C: lwc1        $f0, 0x12D4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X12D4);
    // 0x802A58A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A58A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A58A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A58AC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802A58B0: jal         0x802A4458
    // 0x802A58B4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_802A4458(rdram, ctx);
        goto after_6;
    // 0x802A58B4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_6:
    // 0x802A58B8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802A58BC: beq         $v0, $zero, L_802A59D4
    if (ctx->r2 == 0) {
        // 0x802A58C0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A59D4;
    }
    // 0x802A58C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A58C4: beq         $s0, $v0, L_802A5A20
    if (ctx->r16 == ctx->r2) {
        // 0x802A58C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A58C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A58CC: bne         $s0, $t0, L_802A5938
    if (ctx->r16 != ctx->r8) {
        // 0x802A58D0: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_802A5938;
    }
    // 0x802A58D0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802A58D4: lbu         $t6, 0x522C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X522C);
    // 0x802A58D8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802A58DC: bne         $t6, $at, L_802A591C
    if (ctx->r14 != ctx->r1) {
        // 0x802A58E0: nop
    
            goto L_802A591C;
    }
    // 0x802A58E0: nop

    // 0x802A58E4: lhu         $t7, 0x14($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X14);
    // 0x802A58E8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802A58EC: andi        $t9, $t7, 0x800
    ctx->r25 = ctx->r15 & 0X800;
    // 0x802A58F0: bne         $t9, $zero, L_802A59C4
    if (ctx->r25 != 0) {
        // 0x802A58F4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802A59C4;
    }
    // 0x802A58F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A58F8: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A58FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A5900: nop

    // 0x802A5904: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A5908: nop

    // 0x802A590C: bc1f        L_802A59C4
    if (!c1cs) {
        // 0x802A5910: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802A59C4;
    }
    // 0x802A5910: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A5914: b           L_802A5A20
    // 0x802A5918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A5918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A591C:
    // 0x802A591C: lhu         $t1, 0x14($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X14);
    // 0x802A5920: nop

    // 0x802A5924: andi        $t8, $t1, 0x800
    ctx->r24 = ctx->r9 & 0X800;
    // 0x802A5928: bne         $t8, $zero, L_802A59C4
    if (ctx->r24 != 0) {
        // 0x802A592C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802A59C4;
    }
    // 0x802A592C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A5930: b           L_802A5A20
    // 0x802A5934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A5934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A5938:
    // 0x802A5938: beq         $v0, $t0, L_802A595C
    if (ctx->r2 == ctx->r8) {
        // 0x802A593C: nop
    
            goto L_802A595C;
    }
    // 0x802A593C: nop

    // 0x802A5940: lwc1        $f4, 0x84($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X84);
    // 0x802A5944: lwc1        $f6, 0x84($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X84);
    // 0x802A5948: nop

    // 0x802A594C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A5950: nop

    // 0x802A5954: bc1t        L_802A5A20
    if (c1cs) {
        // 0x802A5958: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A595C:
    // 0x802A595C: lhu         $t2, 0x14($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X14);
    // 0x802A5960: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802A5964: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x802A5968: bne         $t3, $zero, L_802A59C4
    if (ctx->r11 != 0) {
        // 0x802A596C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802A59C4;
    }
    // 0x802A596C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A5970: lwc1        $f0, 0x84($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X84);
    // 0x802A5974: lwc1        $f2, 0x84($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X84);
    // 0x802A5978: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A597C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x802A5980: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802A5984: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A5988: nop

    // 0x802A598C: bc1t        L_802A5A20
    if (c1cs) {
        // 0x802A5990: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5994: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A5998: nop

    // 0x802A599C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A59A0: nop

    // 0x802A59A4: bc1f        L_802A59C4
    if (!c1cs) {
        // 0x802A59A8: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_802A59C4;
    }
    // 0x802A59A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A59AC: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A59B0: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x802A59B4: nop

    // 0x802A59B8: bc1t        L_802A5A20
    if (c1cs) {
        // 0x802A59BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A59BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A59C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_802A59C4:
    // 0x802A59C4: jal         0x802A5F2C
    // 0x802A59C8: nop

    func_802A5F2C(rdram, ctx);
        goto after_7;
    // 0x802A59C8: nop

    after_7:
    // 0x802A59CC: b           L_802A5A20
    // 0x802A59D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A5A20;
    // 0x802A59D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A59D4:
    // 0x802A59D4: lhu         $t4, 0x14($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X14);
    // 0x802A59D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A59DC: andi        $t5, $t4, 0x800
    ctx->r13 = ctx->r12 & 0X800;
    // 0x802A59E0: beq         $t5, $zero, L_802A5A20
    if (ctx->r13 == 0) {
        // 0x802A59E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A59E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A59E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A59EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A59F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802A59F4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A59F8: jal         0x802A4458
    // 0x802A59FC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_802A4458(rdram, ctx);
        goto after_8;
    // 0x802A59FC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_8:
    // 0x802A5A00: beq         $v0, $zero, L_802A5A1C
    if (ctx->r2 == 0) {
        // 0x802A5A04: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5A1C;
    }
    // 0x802A5A04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5A08: beq         $s0, $v0, L_802A5A20
    if (ctx->r16 == ctx->r2) {
        // 0x802A5A0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802A5A20;
    }
    // 0x802A5A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5A10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802A5A14: jal         0x802A5F2C
    // 0x802A5A18: nop

    func_802A5F2C(rdram, ctx);
        goto after_9;
    // 0x802A5A18: nop

    after_9:
L_802A5A1C:
    // 0x802A5A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A5A20:
    // 0x802A5A20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A5A24: jr          $ra
    // 0x802A5A28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802A5A28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802A5A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5A2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A5A30: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802A5A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5A3C: lw          $a2, 0x90($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X90);
    // 0x802A5A40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A5A44: beq         $a2, $zero, L_802A5A94
    if (ctx->r6 == 0) {
        // 0x802A5A48: nop
    
            goto L_802A5A94;
    }
    // 0x802A5A48: nop

    // 0x802A5A4C: lw          $t7, 0xC8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC8);
    // 0x802A5A50: lw          $t8, 0xC8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XC8);
    // 0x802A5A54: nop

    // 0x802A5A58: bne         $t7, $t8, L_802A5A94
    if (ctx->r15 != ctx->r24) {
        // 0x802A5A5C: nop
    
            goto L_802A5A94;
    }
    // 0x802A5A5C: nop

    // 0x802A5A60: lhu         $t9, 0x1A($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1A);
    // 0x802A5A64: nop

    // 0x802A5A68: beq         $t9, $zero, L_802A5A94
    if (ctx->r25 == 0) {
        // 0x802A5A6C: nop
    
            goto L_802A5A94;
    }
    // 0x802A5A6C: nop

    // 0x802A5A70: lhu         $t0, 0x12($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X12);
    // 0x802A5A74: nop

    // 0x802A5A78: andi        $t1, $t0, 0x801
    ctx->r9 = ctx->r8 & 0X801;
    // 0x802A5A7C: bne         $t1, $zero, L_802A5A94
    if (ctx->r9 != 0) {
        // 0x802A5A80: nop
    
            goto L_802A5A94;
    }
    // 0x802A5A80: nop

    // 0x802A5A84: jal         0x802A5F2C
    // 0x802A5A88: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A5A88: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x802A5A8C: b           L_802A5A94
    // 0x802A5A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A5A94;
    // 0x802A5A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A5A94:
    // 0x802A5A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A5A9C: jr          $ra
    // 0x802A5AA0: nop

    return;
    // 0x802A5AA0: nop

;}
RECOMP_FUNC void func_802A5AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5AA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A5AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5AAC: lw          $a3, 0x40($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X40);
    // 0x802A5AB0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x802A5AB4: beq         $a3, $zero, L_802A5D88
    if (ctx->r7 == 0) {
        // 0x802A5AB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5D88;
    }
    // 0x802A5AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5ABC: lw          $t6, 0x3B20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B20);
    // 0x802A5AC0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802A5AC4: lw          $t7, 0x88($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X88);
    // 0x802A5AC8: nop

    // 0x802A5ACC: beq         $a3, $t7, L_802A5D88
    if (ctx->r7 == ctx->r15) {
        // 0x802A5AD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5D88;
    }
    // 0x802A5AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5AD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A5AD8: jal         0x802A5310
    // 0x802A5ADC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_802A5310(rdram, ctx);
        goto after_0;
    // 0x802A5ADC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A5AE0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5AE4: bne         $v0, $zero, L_802A5D88
    if (ctx->r2 != 0) {
        // 0x802A5AE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5D88;
    }
    // 0x802A5AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5AEC: lw          $t8, 0xC8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC8);
    // 0x802A5AF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5AF4: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    // 0x802A5AF8: jal         0x802A4FD4
    // 0x802A5AFC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_802A4FD4(rdram, ctx);
        goto after_1;
    // 0x802A5AFC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x802A5B00: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5B04: bne         $v0, $zero, L_802A5D88
    if (ctx->r2 != 0) {
        // 0x802A5B08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5D88;
    }
    // 0x802A5B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5B0C: lhu         $t9, 0x1A($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X1A);
    // 0x802A5B10: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802A5B14: bne         $t9, $zero, L_802A5B5C
    if (ctx->r25 != 0) {
        // 0x802A5B18: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_802A5B5C;
    }
    // 0x802A5B18: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x802A5B1C: lw          $t0, 0x3B20($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3B20);
    // 0x802A5B20: lw          $v0, 0xC8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC8);
    // 0x802A5B24: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x802A5B28: nop

    // 0x802A5B2C: lw          $t2, 0xC8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC8);
    // 0x802A5B30: nop

    // 0x802A5B34: beq         $v0, $t2, L_802A5B5C
    if (ctx->r2 == ctx->r10) {
        // 0x802A5B38: nop
    
            goto L_802A5B5C;
    }
    // 0x802A5B38: nop

    // 0x802A5B3C: lbu         $t3, 0x868($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X868);
    // 0x802A5B40: nop

    // 0x802A5B44: bne         $t3, $zero, L_802A5B5C
    if (ctx->r11 != 0) {
        // 0x802A5B48: nop
    
            goto L_802A5B5C;
    }
    // 0x802A5B48: nop

    // 0x802A5B4C: jal         0x802A6310
    // 0x802A5B50: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A6310(rdram, ctx);
        goto after_2;
    // 0x802A5B50: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x802A5B54: b           L_802A5D88
    // 0x802A5B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5B5C:
    // 0x802A5B5C: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x802A5B60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802A5B64: beq         $v1, $a0, L_802A5B88
    if (ctx->r3 == ctx->r4) {
        // 0x802A5B68: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802A5B88;
    }
    // 0x802A5B68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802A5B6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A5B70: beq         $v0, $a1, L_802A5B88
    if (ctx->r2 == ctx->r5) {
        // 0x802A5B74: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A5B88;
    }
    // 0x802A5B74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A5B78: beq         $v0, $at, L_802A5CFC
    if (ctx->r2 == ctx->r1) {
        // 0x802A5B7C: nop
    
            goto L_802A5CFC;
    }
    // 0x802A5B7C: nop

    // 0x802A5B80: b           L_802A5D88
    // 0x802A5B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5B88:
    // 0x802A5B88: lhu         $t4, 0x8($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X8);
    // 0x802A5B8C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A5B90: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x802A5B94: beq         $t5, $zero, L_802A5CE4
    if (ctx->r13 == 0) {
        // 0x802A5B98: nop
    
            goto L_802A5CE4;
    }
    // 0x802A5B98: nop

    // 0x802A5B9C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A5BA0: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x802A5BA4: nop

    // 0x802A5BA8: bne         $a0, $v1, L_802A5BC0
    if (ctx->r4 != ctx->r3) {
        // 0x802A5BAC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_802A5BC0;
    }
    // 0x802A5BAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x802A5BB0: jal         0x802A5244
    // 0x802A5BB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802A5244(rdram, ctx);
        goto after_3;
    // 0x802A5BB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x802A5BB8: b           L_802A5D88
    // 0x802A5BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5BC0:
    // 0x802A5BC0: bne         $a1, $v0, L_802A5BF0
    if (ctx->r5 != ctx->r2) {
        // 0x802A5BC4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_802A5BF0;
    }
    // 0x802A5BC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A5BC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802A5BCC: jal         0x802A482C
    // 0x802A5BD0: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    func_802A482C(rdram, ctx);
        goto after_4;
    // 0x802A5BD0: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    after_4:
    // 0x802A5BD4: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5BD8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5BD8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5BDC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5BE0: jal         0x802A5F2C
    // 0x802A5BE4: nop

    func_802A5F2C(rdram, ctx);
        goto after_5;
    // 0x802A5BE4: nop

    after_5:
    // 0x802A5BE8: b           L_802A5D88
    // 0x802A5BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5BF0:
    // 0x802A5BF0: bne         $v0, $at, L_802A5C08
    if (ctx->r2 != ctx->r1) {
        // 0x802A5BF4: nop
    
            goto L_802A5C08;
    }
    // 0x802A5BF4: nop

    // 0x802A5BF8: jal         0x802A5128
    // 0x802A5BFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802A5128(rdram, ctx);
        goto after_6;
    // 0x802A5BFC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x802A5C00: b           L_802A5D88
    // 0x802A5C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5C08:
    // 0x802A5C08: beq         $v1, $zero, L_802A5C20
    if (ctx->r3 == 0) {
        // 0x802A5C0C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802A5C20;
    }
    // 0x802A5C0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A5C10: jal         0x802A507C
    // 0x802A5C14: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802A507C(rdram, ctx);
        goto after_7;
    // 0x802A5C14: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
    // 0x802A5C18: b           L_802A5D88
    // 0x802A5C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5C20:
    // 0x802A5C20: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802A5C24: jal         0x802A5A2C
    // 0x802A5C28: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_802A5A2C(rdram, ctx);
        goto after_8;
    // 0x802A5C28: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_8:
    // 0x802A5C2C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5C30: bne         $v0, $zero, L_802A5D84
    if (ctx->r2 != 0) {
        // 0x802A5C34: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_802A5D84;
    }
    // 0x802A5C34: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A5C38: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A5C3C: nop

    // 0x802A5C40: lw          $t6, 0x88($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X88);
    // 0x802A5C44: nop

    // 0x802A5C48: bne         $t6, $zero, L_802A5C84
    if (ctx->r14 != 0) {
        // 0x802A5C4C: nop
    
            goto L_802A5C84;
    }
    // 0x802A5C4C: nop

    // 0x802A5C50: lw          $t7, 0x90($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X90);
    // 0x802A5C54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802A5C58: bne         $t7, $zero, L_802A5C84
    if (ctx->r15 != 0) {
        // 0x802A5C5C: nop
    
            goto L_802A5C84;
    }
    // 0x802A5C5C: nop

    // 0x802A5C60: jal         0x802A482C
    // 0x802A5C64: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    func_802A482C(rdram, ctx);
        goto after_9;
    // 0x802A5C64: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    after_9:
    // 0x802A5C68: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5C6C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5C6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5C70: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5C74: jal         0x802A5F2C
    // 0x802A5C78: nop

    func_802A5F2C(rdram, ctx);
        goto after_10;
    // 0x802A5C78: nop

    after_10:
    // 0x802A5C7C: b           L_802A5D88
    // 0x802A5C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5C84:
    // 0x802A5C84: lw          $t8, 0x8C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8C);
    // 0x802A5C88: lw          $t0, 0xC8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC8);
    // 0x802A5C8C: lw          $t9, 0xC8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC8);
    // 0x802A5C90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A5C94: bne         $t9, $t0, L_802A5CC0
    if (ctx->r25 != ctx->r8) {
        // 0x802A5C98: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_802A5CC0;
    }
    // 0x802A5C98: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802A5C9C: jal         0x802A4780
    // 0x802A5CA0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A4780(rdram, ctx);
        goto after_11;
    // 0x802A5CA0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_11:
    // 0x802A5CA4: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5CA8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5CA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5CAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5CB0: jal         0x802A5F2C
    // 0x802A5CB4: nop

    func_802A5F2C(rdram, ctx);
        goto after_12;
    // 0x802A5CB4: nop

    after_12:
    // 0x802A5CB8: b           L_802A5D88
    // 0x802A5CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5CC0:
    // 0x802A5CC0: jal         0x802A4780
    // 0x802A5CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A4780(rdram, ctx);
        goto after_13;
    // 0x802A5CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x802A5CC8: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5CCC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5CCC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5CD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5CD4: jal         0x802A5F2C
    // 0x802A5CD8: nop

    func_802A5F2C(rdram, ctx);
        goto after_14;
    // 0x802A5CD8: nop

    after_14:
    // 0x802A5CDC: b           L_802A5D88
    // 0x802A5CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5CE4:
    // 0x802A5CE4: beq         $a1, $v1, L_802A5D84
    if (ctx->r5 == ctx->r3) {
        // 0x802A5CE8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802A5D84;
    }
    // 0x802A5CE8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A5CEC: jal         0x802A55B8
    // 0x802A5CF0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_802A55B8(rdram, ctx);
        goto after_15;
    // 0x802A5CF0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_15:
    // 0x802A5CF4: b           L_802A5D88
    // 0x802A5CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5CFC:
    // 0x802A5CFC: lhu         $t1, 0x8($a2)
    ctx->r9 = MEM_HU(ctx->r6, 0X8);
    // 0x802A5D00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A5D04: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x802A5D08: beq         $t2, $zero, L_802A5D84
    if (ctx->r10 == 0) {
        // 0x802A5D0C: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_802A5D84;
    }
    // 0x802A5D0C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802A5D10: jal         0x802A5A2C
    // 0x802A5D14: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_802A5A2C(rdram, ctx);
        goto after_16;
    // 0x802A5D14: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_16:
    // 0x802A5D18: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5D1C: bne         $v0, $zero, L_802A5D88
    if (ctx->r2 != 0) {
        // 0x802A5D20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5D88;
    }
    // 0x802A5D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5D24: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802A5D28: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802A5D2C: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x802A5D30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802A5D34: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x802A5D38: beq         $t4, $zero, L_802A5D64
    if (ctx->r12 == 0) {
        // 0x802A5D3C: nop
    
            goto L_802A5D64;
    }
    // 0x802A5D3C: nop

    // 0x802A5D40: jal         0x802A482C
    // 0x802A5D44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A482C(rdram, ctx);
        goto after_17;
    // 0x802A5D44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_17:
    // 0x802A5D48: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5D4C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5D4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5D50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5D54: jal         0x802A5F2C
    // 0x802A5D58: nop

    func_802A5F2C(rdram, ctx);
        goto after_18;
    // 0x802A5D58: nop

    after_18:
    // 0x802A5D5C: b           L_802A5D88
    // 0x802A5D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5D88;
    // 0x802A5D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5D64:
    // 0x802A5D64: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x802A5D68: jal         0x80054ABC
    // 0x802A5D6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80054ABC(rdram, ctx);
        goto after_19;
    // 0x802A5D6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_19:
    // 0x802A5D70: beq         $v0, $zero, L_802A5D84
    if (ctx->r2 == 0) {
        // 0x802A5D74: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_802A5D84;
    }
    // 0x802A5D74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802A5D78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A5D7C: jal         0x802A5F2C
    // 0x802A5D80: nop

    func_802A5F2C(rdram, ctx);
        goto after_20;
    // 0x802A5D80: nop

    after_20:
L_802A5D84:
    // 0x802A5D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5D88:
    // 0x802A5D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A5D8C: jr          $ra
    // 0x802A5D90: nop

    return;
    // 0x802A5D90: nop

;}
RECOMP_FUNC void func_802A5D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5D94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A5D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5D9C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x802A5DA0: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x802A5DA4: lw          $a1, 0x3680($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3680);
    // 0x802A5DA8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A5DAC: beq         $a1, $zero, L_802A5DC8
    if (ctx->r5 == 0) {
        // 0x802A5DB0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_802A5DC8;
    }
    // 0x802A5DB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802A5DB4: lw          $t6, 0xC8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC8);
    // 0x802A5DB8: lw          $t7, 0xC8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC8);
    // 0x802A5DBC: nop

    // 0x802A5DC0: beq         $t6, $t7, L_802A5F20
    if (ctx->r14 == ctx->r15) {
        // 0x802A5DC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5DC8:
    // 0x802A5DC8: beq         $v1, $zero, L_802A5F1C
    if (ctx->r3 == 0) {
        // 0x802A5DCC: lui         $t1, 0x8009
        ctx->r9 = S32(0X8009 << 16);
            goto L_802A5F1C;
    }
    // 0x802A5DCC: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x802A5DD0: addiu       $t1, $t1, 0x3B20
    ctx->r9 = ADD32(ctx->r9, 0X3B20);
    // 0x802A5DD4: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x802A5DD8: nop

    // 0x802A5DDC: lw          $t8, 0x88($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X88);
    // 0x802A5DE0: nop

    // 0x802A5DE4: beq         $v1, $t8, L_802A5F20
    if (ctx->r3 == ctx->r24) {
        // 0x802A5DE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5DEC: lw          $t9, 0xC8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC8);
    // 0x802A5DF0: nop

    // 0x802A5DF4: lhu         $t2, 0x95C($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X95C);
    // 0x802A5DF8: nop

    // 0x802A5DFC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x802A5E00: bne         $t3, $zero, L_802A5F20
    if (ctx->r11 != 0) {
        // 0x802A5E04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5E08: lw          $a0, 0xC8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC8);
    // 0x802A5E0C: lhu         $t4, 0xC0($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0XC0);
    // 0x802A5E10: lw          $a1, 0x914($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X914);
    // 0x802A5E14: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x802A5E18: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x802A5E1C: beq         $t5, $zero, L_802A5E3C
    if (ctx->r13 == 0) {
        // 0x802A5E20: nop
    
            goto L_802A5E3C;
    }
    // 0x802A5E20: nop

    // 0x802A5E24: beq         $a1, $zero, L_802A5F20
    if (ctx->r5 == 0) {
        // 0x802A5E28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5E2C: jal         0x802A6108
    // 0x802A5E30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A6108(rdram, ctx);
        goto after_0;
    // 0x802A5E30: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x802A5E34: b           L_802A5F20
    // 0x802A5E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5F20;
    // 0x802A5E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5E3C:
    // 0x802A5E3C: beq         $a1, $zero, L_802A5E7C
    if (ctx->r5 == 0) {
        // 0x802A5E40: nop
    
            goto L_802A5E7C;
    }
    // 0x802A5E40: nop

    // 0x802A5E44: beq         $v1, $a1, L_802A5E7C
    if (ctx->r3 == ctx->r5) {
        // 0x802A5E48: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_802A5E7C;
    }
    // 0x802A5E48: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A5E4C: lwc1        $f6, 0x84($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X84);
    // 0x802A5E50: lwc1        $f8, 0x84($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802A5E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A5E58: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802A5E5C: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x802A5E60: nop

    // 0x802A5E64: bc1f        L_802A5F20
    if (!c1cs) {
        // 0x802A5E68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5E6C: jal         0x802A6108
    // 0x802A5E70: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A6108(rdram, ctx);
        goto after_1;
    // 0x802A5E70: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x802A5E74: b           L_802A5F20
    // 0x802A5E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A5F20;
    // 0x802A5E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5E7C:
    // 0x802A5E7C: lhu         $t6, 0x20($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X20);
    // 0x802A5E80: nop

    // 0x802A5E84: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802A5E88: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x802A5E8C: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x802A5E90: bne         $at, $zero, L_802A5F1C
    if (ctx->r1 != 0) {
        // 0x802A5E94: sh          $t7, 0x20($a3)
        MEM_H(0X20, ctx->r7) = ctx->r15;
            goto L_802A5F1C;
    }
    // 0x802A5E94: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
    // 0x802A5E98: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x802A5E9C: nop

    // 0x802A5EA0: lw          $t2, 0x88($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X88);
    // 0x802A5EA4: nop

    // 0x802A5EA8: beq         $t2, $zero, L_802A5F20
    if (ctx->r10 == 0) {
        // 0x802A5EAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5EB0: lw          $a0, 0xC8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC8);
    // 0x802A5EB4: nop

    // 0x802A5EB8: lb          $v0, 0x8DD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X8DD);
    // 0x802A5EBC: addiu       $a1, $a0, 0x318
    ctx->r5 = ADD32(ctx->r4, 0X318);
    // 0x802A5EC0: blez        $v0, L_802A5ED8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802A5EC4: sll         $t3, $v0, 5
        ctx->r11 = S32(ctx->r2 << 5);
            goto L_802A5ED8;
    }
    // 0x802A5EC4: sll         $t3, $v0, 5
    ctx->r11 = S32(ctx->r2 << 5);
    // 0x802A5EC8: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x802A5ECC: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x802A5ED0: b           L_802A5EF0
    // 0x802A5ED4: addu        $a1, $t3, $t0
    ctx->r5 = ADD32(ctx->r11, ctx->r8);
        goto L_802A5EF0;
    // 0x802A5ED4: addu        $a1, $t3, $t0
    ctx->r5 = ADD32(ctx->r11, ctx->r8);
L_802A5ED8:
    // 0x802A5ED8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802A5EDC: jal         0x802636CC
    // 0x802A5EE0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x802636CC)(rdram, ctx);
        goto after_2;
    // 0x802A5EE0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x802A5EE4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802A5EE8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x802A5EEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_802A5EF0:
    // 0x802A5EF0: lwc1        $f18, 0x84($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X84);
    // 0x802A5EF4: lwc1        $f6, 0x84($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X84);
    // 0x802A5EF8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A5EFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A5F00: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802A5F04: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x802A5F08: nop

    // 0x802A5F0C: bc1f        L_802A5F20
    if (!c1cs) {
        // 0x802A5F10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A5F20;
    }
    // 0x802A5F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5F14: jal         0x802A6108
    // 0x802A5F18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_802A6108(rdram, ctx);
        goto after_3;
    // 0x802A5F18: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
L_802A5F1C:
    // 0x802A5F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A5F20:
    // 0x802A5F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A5F24: jr          $ra
    // 0x802A5F28: nop

    return;
    // 0x802A5F28: nop

;}
RECOMP_FUNC void func_802A5F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A5F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A5F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A5F34: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x802A5F38: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A5F3C: beq         $a1, $v1, L_802A60F8
    if (ctx->r5 == ctx->r3) {
        // 0x802A5F40: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_802A60F8;
    }
    // 0x802A5F40: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802A5F44: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x802A5F48: nop

    // 0x802A5F4C: andi        $t7, $t6, 0x801
    ctx->r15 = ctx->r14 & 0X801;
    // 0x802A5F50: bne         $t7, $zero, L_802A60FC
    if (ctx->r15 != 0) {
        // 0x802A5F54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A60FC;
    }
    // 0x802A5F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5F58: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x802A5F5C: nop

    // 0x802A5F60: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x802A5F64: bne         $t9, $zero, L_802A60FC
    if (ctx->r25 != 0) {
        // 0x802A5F68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A60FC;
    }
    // 0x802A5F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5F6C: lhu         $t0, 0xC($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0XC);
    // 0x802A5F70: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x802A5F74: beq         $t0, $zero, L_802A60FC
    if (ctx->r8 == 0) {
        // 0x802A5F78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A60FC;
    }
    // 0x802A5F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5F7C: lbu         $t1, 0x5232($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5232);
    // 0x802A5F80: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A5F84: bne         $t1, $at, L_802A60FC
    if (ctx->r9 != ctx->r1) {
        // 0x802A5F88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A60FC;
    }
    // 0x802A5F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5F8C: lw          $t2, 0xC8($a1)
    ctx->r10 = MEM_W(ctx->r5, 0XC8);
    // 0x802A5F90: lw          $t3, 0xC8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC8);
    // 0x802A5F94: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x802A5F98: bne         $t2, $t3, L_802A60FC
    if (ctx->r10 != ctx->r11) {
        // 0x802A5F9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A60FC;
    }
    // 0x802A5F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A5FA0: lhu         $t4, 0x12($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X12);
    // 0x802A5FA4: addiu       $a0, $a0, 0x3B20
    ctx->r4 = ADD32(ctx->r4, 0X3B20);
    // 0x802A5FA8: andi        $t5, $t4, 0xFFBE
    ctx->r13 = ctx->r12 & 0XFFBE;
    // 0x802A5FAC: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
    // 0x802A5FB0: sw          $a1, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r5;
    // 0x802A5FB4: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    // 0x802A5FB8: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x802A5FBC: sw          $a3, 0xC4($a1)
    MEM_W(0XC4, ctx->r5) = ctx->r7;
    // 0x802A5FC0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x802A5FC4: sh          $t7, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r15;
    // 0x802A5FC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802A5FCC: nop

    // 0x802A5FD0: lw          $t8, 0xA8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XA8);
    // 0x802A5FD4: nop

    // 0x802A5FD8: bne         $a1, $t8, L_802A6008
    if (ctx->r5 != ctx->r24) {
        // 0x802A5FDC: nop
    
            goto L_802A6008;
    }
    // 0x802A5FDC: nop

    // 0x802A5FE0: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
    // 0x802A5FE4: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802A5FE8: nop

    // 0x802A5FEC: sw          $zero, 0xA4($t9)
    MEM_W(0XA4, ctx->r25) = 0;
    // 0x802A5FF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802A5FF4: nop

    // 0x802A5FF8: lhu         $t0, 0xC0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XC0);
    // 0x802A5FFC: nop

    // 0x802A6000: andi        $t1, $t0, 0x2FFF
    ctx->r9 = ctx->r8 & 0X2FFF;
    // 0x802A6004: sh          $t1, 0xC0($v0)
    MEM_H(0XC0, ctx->r2) = ctx->r9;
L_802A6008:
    // 0x802A6008: lw          $v0, 0xC4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC4);
    // 0x802A600C: nop

    // 0x802A6010: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x802A6014: nop

    // 0x802A6018: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x802A601C: bne         $t3, $zero, L_802A60F4
    if (ctx->r11 != 0) {
        // 0x802A6020: addiu       $t1, $zero, 0x3D
        ctx->r9 = ADD32(0, 0X3D);
            goto L_802A60F4;
    }
    // 0x802A6020: addiu       $t1, $zero, 0x3D
    ctx->r9 = ADD32(0, 0X3D);
    // 0x802A6024: lhu         $t4, 0x12($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X12);
    // 0x802A6028: nop

    // 0x802A602C: ori         $t5, $t4, 0x40
    ctx->r13 = ctx->r12 | 0X40;
    // 0x802A6030: sh          $t5, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r13;
    // 0x802A6034: lhu         $t6, 0x4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4);
    // 0x802A6038: nop

    // 0x802A603C: andi        $t7, $t6, 0xD
    ctx->r15 = ctx->r14 & 0XD;
    // 0x802A6040: bne         $t7, $zero, L_802A60C4
    if (ctx->r15 != 0) {
        // 0x802A6044: nop
    
            goto L_802A60C4;
    }
    // 0x802A6044: nop

    // 0x802A6048: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x802A604C: nop

    // 0x802A6050: lw          $t9, 0xA0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XA0);
    // 0x802A6054: nop

    // 0x802A6058: beq         $a2, $t9, L_802A60C4
    if (ctx->r6 == ctx->r25) {
        // 0x802A605C: nop
    
            goto L_802A60C4;
    }
    // 0x802A605C: nop

    // 0x802A6060: lhu         $t0, 0xE($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0XE);
    // 0x802A6064: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A6068: bne         $t0, $at, L_802A60C4
    if (ctx->r8 != ctx->r1) {
        // 0x802A606C: nop
    
            goto L_802A60C4;
    }
    // 0x802A606C: nop

    // 0x802A6070: lwc1        $f12, 0x7C($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X7C);
    // 0x802A6074: lwc1        $f14, 0x24($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802A6078: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802A607C: jal         0x80279308
    // 0x802A6080: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x80279308)(rdram, ctx);
        goto after_0;
    // 0x802A6080: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x802A6084: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6088: lwc1        $f5, 0x12D8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X12D8);
    // 0x802A608C: lwc1        $f4, 0x12DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X12DC);
    // 0x802A6090: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802A6094: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802A6098: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802A609C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A60A0: bc1f        L_802A60C4
    if (!c1cs) {
        // 0x802A60A4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802A60C4;
    }
    // 0x802A60A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A60A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A60AC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802A60B0: jal         0x8024BC08
    // 0x802A60B4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_1;
    // 0x802A60B4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x802A60B8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x802A60BC: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A60C0: nop

L_802A60C4:
    // 0x802A60C4: lhu         $v0, 0xE($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0XE);
    // 0x802A60C8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x802A60CC: beq         $v0, $at, L_802A60DC
    if (ctx->r2 == ctx->r1) {
        // 0x802A60D0: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_802A60DC;
    }
    // 0x802A60D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802A60D4: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x802A60D8: bne         $v0, $at, L_802A60F0
    if (ctx->r2 != ctx->r1) {
        // 0x802A60DC: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_802A60F0;
    }
L_802A60DC:
    // 0x802A60DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802A60E0: jal         0x8024BC08
    // 0x802A60E4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(0x8024BC08)(rdram, ctx);
        goto after_2;
    // 0x802A60E4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_2:
    // 0x802A60E8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x802A60EC: nop

L_802A60F0:
    // 0x802A60F0: addiu       $t1, $zero, 0x3D
    ctx->r9 = ADD32(0, 0X3D);
L_802A60F4:
    // 0x802A60F4: sh          $t1, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r9;
L_802A60F8:
    // 0x802A60F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A60FC:
    // 0x802A60FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6100: jr          $ra
    // 0x802A6104: nop

    return;
    // 0x802A6104: nop

;}
RECOMP_FUNC void func_802A6108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A610C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6110: lhu         $t6, 0x12($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X12);
    // 0x802A6114: nop

    // 0x802A6118: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802A611C: bne         $t7, $zero, L_802A6130
    if (ctx->r15 != 0) {
        // 0x802A6120: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A6130;
    }
    // 0x802A6120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6124: jal         0x802A5F2C
    // 0x802A6128: nop

    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A6128: nop

    after_0:
    // 0x802A612C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6130:
    // 0x802A6130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6134: jr          $ra
    // 0x802A6138: nop

    return;
    // 0x802A6138: nop

;}
RECOMP_FUNC void func_802A613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A613C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A6140: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A6144: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A6148: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A614C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A6150: lw          $v1, 0xC8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC8);
    // 0x802A6154: lhu         $t7, 0x12($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X12);
    // 0x802A6158: lw          $a3, 0x20($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X20);
    // 0x802A615C: lhu         $t5, 0x12($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X12);
    // 0x802A6160: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A6164: andi        $s0, $a1, 0xFFFF
    ctx->r16 = ctx->r5 & 0XFFFF;
    // 0x802A6168: bne         $t8, $zero, L_802A62FC
    if (ctx->r24 != 0) {
        // 0x802A616C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_802A62FC;
    }
    // 0x802A616C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802A6170: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x802A6174: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x802A6178: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A617C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802A6180: addiu       $t0, $t0, 0xB78
    ctx->r8 = ADD32(ctx->r8, 0XB78);
    // 0x802A6184: addiu       $t1, $t1, -0x3190
    ctx->r9 = ADD32(ctx->r9, -0X3190);
    // 0x802A6188: addiu       $t2, $t2, 0xB72
    ctx->r10 = ADD32(ctx->r10, 0XB72);
    // 0x802A618C: addiu       $t3, $t3, 0x358
    ctx->r11 = ADD32(ctx->r11, 0X358);
    // 0x802A6190: addiu       $t4, $zero, 0x58
    ctx->r12 = ADD32(0, 0X58);
L_802A6194:
    // 0x802A6194: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x802A6198: nop

    // 0x802A619C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x802A61A0: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x802A61A4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x802A61A8: lh          $a1, 0x0($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X0);
    // 0x802A61AC: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x802A61B0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x802A61B4: sh          $t7, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r15;
    // 0x802A61B8: addu        $t6, $a3, $t9
    ctx->r14 = ADD32(ctx->r7, ctx->r25);
    // 0x802A61BC: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x802A61C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802A61C4: bgez        $t7, L_802A61D0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802A61C8: nop
    
            goto L_802A61D0;
    }
    // 0x802A61C8: nop

    // 0x802A61CC: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
L_802A61D0:
    // 0x802A61D0: lhu         $t8, 0x0($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X0);
    // 0x802A61D4: nop

    // 0x802A61D8: bne         $t8, $zero, L_802A6248
    if (ctx->r24 != 0) {
        // 0x802A61DC: andi        $t7, $a1, 0xF
        ctx->r15 = ctx->r5 & 0XF;
            goto L_802A6248;
    }
    // 0x802A61DC: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x802A61E0: lhu         $t9, 0x0($t2)
    ctx->r25 = MEM_HU(ctx->r10, 0X0);
    // 0x802A61E4: lhu         $t8, 0x6($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X6);
    // 0x802A61E8: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x802A61EC: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x802A61F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x802A61F4: lbu         $t6, 0x0($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X0);
    // 0x802A61F8: nop

    // 0x802A61FC: beq         $t6, $zero, L_802A6248
    if (ctx->r14 == 0) {
        // 0x802A6200: andi        $t7, $a1, 0xF
        ctx->r15 = ctx->r5 & 0XF;
            goto L_802A6248;
    }
    // 0x802A6200: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x802A6204: lbu         $t7, 0x868($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X868);
    // 0x802A6208: andi        $t8, $a1, 0xF
    ctx->r24 = ctx->r5 & 0XF;
    // 0x802A620C: beq         $t7, $zero, L_802A6244
    if (ctx->r15 == 0) {
        // 0x802A6210: sll         $t9, $t8, 16
        ctx->r25 = S32(ctx->r24 << 16);
            goto L_802A6244;
    }
    // 0x802A6210: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802A6214: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802A6218: multu       $t6, $t4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A621C: mflo        $t7
    ctx->r15 = lo;
    // 0x802A6220: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x802A6224: lw          $t9, 0x40($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X40);
    // 0x802A6228: nop

    // 0x802A622C: lhu         $t6, 0x1A($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X1A);
    // 0x802A6230: nop

    // 0x802A6234: bne         $t6, $zero, L_802A6248
    if (ctx->r14 != 0) {
        // 0x802A6238: andi        $t7, $a1, 0xF
        ctx->r15 = ctx->r5 & 0XF;
            goto L_802A6248;
    }
    // 0x802A6238: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x802A623C: b           L_802A62F4
    // 0x802A6240: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
        goto L_802A62F4;
    // 0x802A6240: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_802A6244:
    // 0x802A6244: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
L_802A6248:
    // 0x802A6248: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x802A624C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802A6250: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x802A6254: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x802A6258: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802A625C: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x802A6260: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x802A6264: andi        $t7, $s0, 0x4
    ctx->r15 = ctx->r16 & 0X4;
    // 0x802A6268: beq         $t7, $zero, L_802A62A0
    if (ctx->r15 == 0) {
        // 0x802A626C: addu        $a0, $t3, $t6
        ctx->r4 = ADD32(ctx->r11, ctx->r14);
            goto L_802A62A0;
    }
    // 0x802A626C: addu        $a0, $t3, $t6
    ctx->r4 = ADD32(ctx->r11, ctx->r14);
    // 0x802A6270: lbu         $t8, 0x868($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X868);
    // 0x802A6274: nop

    // 0x802A6278: beq         $t8, $zero, L_802A62A4
    if (ctx->r24 == 0) {
        // 0x802A627C: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_802A62A4;
    }
    // 0x802A627C: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x802A6280: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x802A6284: nop

    // 0x802A6288: lhu         $t6, 0x1A($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X1A);
    // 0x802A628C: nop

    // 0x802A6290: bne         $t6, $zero, L_802A62A4
    if (ctx->r14 != 0) {
        // 0x802A6294: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_802A62A4;
    }
    // 0x802A6294: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x802A6298: b           L_802A62F4
    // 0x802A629C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
        goto L_802A62F4;
    // 0x802A629C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_802A62A0:
    // 0x802A62A0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
L_802A62A4:
    // 0x802A62A4: beq         $t7, $zero, L_802A62BC
    if (ctx->r15 == 0) {
        // 0x802A62A8: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_802A62BC;
    }
    // 0x802A62A8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x802A62AC: lhu         $t8, 0x6($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X6);
    // 0x802A62B0: nop

    // 0x802A62B4: andi        $t9, $t8, 0xFFEF
    ctx->r25 = ctx->r24 & 0XFFEF;
    // 0x802A62B8: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
L_802A62BC:
    // 0x802A62BC: lhu         $t6, 0x6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6);
    // 0x802A62C0: nop

    // 0x802A62C4: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x802A62C8: bne         $t7, $zero, L_802A62F4
    if (ctx->r15 != 0) {
        // 0x802A62CC: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_802A62F4;
    }
    // 0x802A62CC: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x802A62D0: beq         $t8, $zero, L_802A62E0
    if (ctx->r24 == 0) {
        // 0x802A62D4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_802A62E0;
    }
    // 0x802A62D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802A62D8: b           L_802A6300
    // 0x802A62DC: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
        goto L_802A6300;
    // 0x802A62DC: sh          $t5, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r13;
L_802A62E0:
    // 0x802A62E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802A62E4: jal         0x802A5F2C
    // 0x802A62E8: nop

    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A62E8: nop

    after_0:
    // 0x802A62EC: b           L_802A6300
    // 0x802A62F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802A6300;
    // 0x802A62F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A62F4:
    // 0x802A62F4: bne         $a2, $zero, L_802A6194
    if (ctx->r6 != 0) {
        // 0x802A62F8: nop
    
            goto L_802A6194;
    }
    // 0x802A62F8: nop

L_802A62FC:
    // 0x802A62FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A6300:
    // 0x802A6300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A6304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A6308: jr          $ra
    // 0x802A630C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A630C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A6310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6318: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x802A631C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802A6320: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802A6324: beq         $t7, $zero, L_802A63C4
    if (ctx->r15 == 0) {
        // 0x802A6328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802A63C4;
    }
    // 0x802A6328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A632C: lw          $t8, 0xC8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC8);
    // 0x802A6330: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A6334: lw          $a0, 0x18($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X18);
    // 0x802A6338: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
    // 0x802A633C: lw          $v0, 0xC8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC8);
    // 0x802A6340: nop

    // 0x802A6344: addiu       $v0, $v0, 0x318
    ctx->r2 = ADD32(ctx->r2, 0X318);
L_802A6348:
    // 0x802A6348: lhu         $t9, 0x0($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X0);
    // 0x802A634C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A6350: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A6354: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x802A6358: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802A635C: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x802A6360: mflo        $t0
    ctx->r8 = lo;
    // 0x802A6364: addu        $a1, $t0, $a0
    ctx->r5 = ADD32(ctx->r8, ctx->r4);
    // 0x802A6368: lhu         $t1, 0x12($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X12);
    // 0x802A636C: nop

    // 0x802A6370: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x802A6374: bne         $t2, $zero, L_802A63B8
    if (ctx->r10 != 0) {
        // 0x802A6378: nop
    
            goto L_802A63B8;
    }
    // 0x802A6378: nop

    // 0x802A637C: lhu         $t3, 0x1A($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X1A);
    // 0x802A6380: nop

    // 0x802A6384: beq         $t3, $zero, L_802A63B8
    if (ctx->r11 == 0) {
        // 0x802A6388: nop
    
            goto L_802A63B8;
    }
    // 0x802A6388: nop

    // 0x802A638C: lw          $v0, 0xC4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC4);
    // 0x802A6390: nop

    // 0x802A6394: lhu         $t4, 0x6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X6);
    // 0x802A6398: nop

    // 0x802A639C: andi        $t5, $t4, 0xFFEF
    ctx->r13 = ctx->r12 & 0XFFEF;
    // 0x802A63A0: sh          $t5, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r13;
    // 0x802A63A4: lw          $a0, 0xC4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC4);
    // 0x802A63A8: jal         0x802A5F2C
    // 0x802A63AC: nop

    func_802A5F2C(rdram, ctx);
        goto after_0;
    // 0x802A63AC: nop

    after_0:
    // 0x802A63B0: b           L_802A63C4
    // 0x802A63B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A63C4;
    // 0x802A63B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A63B8:
    // 0x802A63B8: bne         $at, $zero, L_802A6348
    if (ctx->r1 != 0) {
        // 0x802A63BC: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_802A6348;
    }
    // 0x802A63BC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802A63C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A63C4:
    // 0x802A63C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A63C8: jr          $ra
    // 0x802A63CC: nop

    return;
    // 0x802A63CC: nop

;}
RECOMP_FUNC void func_802A63D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A63D0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802A63D4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802A63D8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A63DC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802A63E0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x802A63E4: bc1f        L_802A63F4
    if (!c1cs) {
        // 0x802A63E8: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_802A63F4;
    }
    // 0x802A63E8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x802A63EC: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x802A63F0: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_802A63F4:
    // 0x802A63F4: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x802A63F8: lwc1        $f5, 0x13F0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X13F0);
    // 0x802A63FC: lwc1        $f4, 0x13F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X13F4);
    // 0x802A6400: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A6404: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x802A6408: nop

    // 0x802A640C: bc1f        L_802A6420
    if (!c1cs) {
        // 0x802A6410: nop
    
            goto L_802A6420;
    }
    // 0x802A6410: nop

    // 0x802A6414: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    // 0x802A6418: jr          $ra
    // 0x802A641C: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
    return;
    // 0x802A641C: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
L_802A6420:
    // 0x802A6420: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802A6424: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802A6428: bc1f        L_802A6440
    if (!c1cs) {
        // 0x802A642C: nop
    
            goto L_802A6440;
    }
    // 0x802A642C: nop

    // 0x802A6430: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802A6434: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A6438: b           L_802A644C
    // 0x802A643C: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
        goto L_802A644C;
    // 0x802A643C: add.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f10.fl;
L_802A6440:
    // 0x802A6440: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A6444: nop

    // 0x802A6448: add.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f16.fl;
L_802A644C:
    // 0x802A644C: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    // 0x802A6450: swc1        $f14, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f14.u32l;
    // 0x802A6454: jr          $ra
    // 0x802A6458: nop

    return;
    // 0x802A6458: nop

;}
RECOMP_FUNC void func_802A645C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A645C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802A6460: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802A6464: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802A6468: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802A646C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802A6470: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802A6474: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802A6478: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x802A647C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x802A6480: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802A6484: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802A6488: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x802A648C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802A6490: beq         $v1, $zero, L_802A6774
    if (ctx->r3 == 0) {
        // 0x802A6494: lui         $at, 0x3F70
        ctx->r1 = S32(0X3F70 << 16);
            goto L_802A6774;
    }
    // 0x802A6494: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x802A6498: lui         $s4, 0xFFFF
    ctx->r20 = S32(0XFFFF << 16);
    // 0x802A649C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x802A64A0: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x802A64A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802A64A8: ori         $s4, $s4, 0x7FFF
    ctx->r20 = ctx->r20 | 0X7FFF;
    // 0x802A64AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x802A64B0: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x802A64B4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_802A64B8:
    // 0x802A64B8: beq         $v1, $s3, L_802A65F8
    if (ctx->r3 == ctx->r19) {
        // 0x802A64BC: nop
    
            goto L_802A65F8;
    }
    // 0x802A64BC: nop

    // 0x802A64C0: beq         $v1, $s1, L_802A6500
    if (ctx->r3 == ctx->r17) {
        // 0x802A64C4: nop
    
            goto L_802A6500;
    }
    // 0x802A64C4: nop

    // 0x802A64C8: bne         $v1, $s2, L_802A676C
    if (ctx->r3 != ctx->r18) {
        // 0x802A64CC: nop
    
            goto L_802A676C;
    }
    // 0x802A64CC: nop

    // 0x802A64D0: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x802A64D4: lhu         $t6, 0x48($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X48);
    // 0x802A64D8: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x802A64DC: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x802A64E0: lw          $t9, 0x30($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X30);
    // 0x802A64E4: nop

    // 0x802A64E8: lhu         $t3, 0x4($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X4);
    // 0x802A64EC: nop

    // 0x802A64F0: bne         $t6, $t3, L_802A6778
    if (ctx->r14 != ctx->r11) {
        // 0x802A64F4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_802A6778;
    }
    // 0x802A64F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802A64F8: b           L_802A676C
    // 0x802A64FC: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
        goto L_802A676C;
    // 0x802A64FC: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
L_802A6500:
    // 0x802A6500: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x802A6504: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x802A6508: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x802A650C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A6510: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802A6514: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x802A6518: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x802A651C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802A6520: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x802A6524: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A6528: bc1f        L_802A653C
    if (!c1cs) {
        // 0x802A652C: nop
    
            goto L_802A653C;
    }
    // 0x802A652C: nop

    // 0x802A6530: lh          $t4, 0x50($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X50);
    // 0x802A6534: lwc1        $f0, 0x40($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X40);
    // 0x802A6538: sh          $t4, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r12;
L_802A653C:
    // 0x802A653C: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x802A6540: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x802A6544: nop

    // 0x802A6548: bc1f        L_802A6594
    if (!c1cs) {
        // 0x802A654C: nop
    
            goto L_802A6594;
    }
    // 0x802A654C: nop

    // 0x802A6550: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A6554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A6558: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x802A655C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x802A6560: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A6564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A6568: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x802A656C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x802A6570: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A6574: sw          $s3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r19;
    // 0x802A6578: swc1        $f0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f0.u32l;
    // 0x802A657C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x802A6580: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802A6584: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x802A6588: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x802A658C: b           L_802A6774
    // 0x802A6590: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
        goto L_802A6774;
    // 0x802A6590: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
L_802A6594:
    // 0x802A6594: lwc1        $f2, 0x2C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x802A6598: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802A659C: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802A65A0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802A65A4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x802A65A8: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A65AC: sub.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f12.fl;
    // 0x802A65B0: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
    // 0x802A65B4: lwc1        $f16, 0x38($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X38);
    // 0x802A65B8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802A65BC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802A65C0: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x802A65C4: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x802A65C8: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x802A65CC: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x802A65D0: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x802A65D4: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x802A65D8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x802A65DC: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x802A65E0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802A65E4: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x802A65E8: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x802A65EC: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x802A65F0: b           L_802A6774
    // 0x802A65F4: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
        goto L_802A6774;
    // 0x802A65F4: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
L_802A65F8:
    // 0x802A65F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802A65FC: nop

    // 0x802A6600: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x802A6604: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802A6608: lh          $a3, 0x4($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X4);
    // 0x802A660C: lh          $t0, 0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X6);
    // 0x802A6610: lh          $t1, 0x8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8);
    // 0x802A6614: lh          $t2, 0xA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XA);
    // 0x802A6618: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x802A661C: sltiu       $at, $a0, 0x7
    ctx->r1 = ctx->r4 < 0X7 ? 1 : 0;
    // 0x802A6620: beq         $at, $zero, L_802A6764
    if (ctx->r1 == 0) {
        // 0x802A6624: sw          $v0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r2;
            goto L_802A6764;
    }
    // 0x802A6624: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x802A6628: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x802A662C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6630: addu        $at, $at, $t5
    gpr jr_addend_802A663C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x802A6634: lw          $t5, 0x13F8($at)
    ctx->r13 = ADD32(ctx->r1, 0X13F8);
    // 0x802A6638: nop

    // 0x802A663C: jr          $t5
    // 0x802A6640: nop

    switch (jr_addend_802A663C >> 2) {
        case 0: goto L_802A6644; break;
        case 1: goto L_802A666C; break;
        case 2: goto L_802A66D4; break;
        case 3: goto L_802A6710; break;
        case 4: goto L_802A671C; break;
        case 5: goto L_802A6724; break;
        case 6: goto L_802A664C; break;
        default: switch_error(__func__, 0x802A663C, 0x802C13F8);
    }
    // 0x802A6640: nop

L_802A6644:
    // 0x802A6644: b           L_802A6774
    // 0x802A6648: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_802A6774;
    // 0x802A6648: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_802A664C:
    // 0x802A664C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802A6650: sh          $a3, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r7;
    // 0x802A6654: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802A6658: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802A665C: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x802A6660: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802A6664: b           L_802A6774
    // 0x802A6668: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
        goto L_802A6774;
    // 0x802A6668: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
L_802A666C:
    // 0x802A666C: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x802A6670: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802A6674: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A6678: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802A667C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x802A6680: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802A6684: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x802A6688: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x802A668C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A6690: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x802A6694: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x802A6698: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A669C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x802A66A0: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
    // 0x802A66A4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802A66A8: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x802A66AC: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A66B0: swc1        $f22, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f22.u32l;
    // 0x802A66B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802A66B8: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x802A66BC: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x802A66C0: swc1        $f14, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f14.u32l;
    // 0x802A66C4: jal         0x802A63D0
    // 0x802A66C8: swc1        $f18, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f18.u32l;
    func_802A63D0(rdram, ctx);
        goto after_0;
    // 0x802A66C8: swc1        $f18, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f18.u32l;
    after_0:
    // 0x802A66CC: b           L_802A6768
    // 0x802A66D0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_802A6768;
    // 0x802A66D0: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
L_802A66D4:
    // 0x802A66D4: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x802A66D8: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x802A66DC: lw          $t8, 0xCC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XCC);
    // 0x802A66E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A66E4: lw          $v0, 0x30($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X30);
    // 0x802A66E8: nop

    // 0x802A66EC: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x802A66F0: nop

    // 0x802A66F4: and         $t6, $t9, $s4
    ctx->r14 = ctx->r25 & ctx->r20;
    // 0x802A66F8: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x802A66FC: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x802A6700: jal         0x80272D3C
    // 0x802A6704: nop

    LOOKUP_FUNC(0x80272D3C)(rdram, ctx);
        goto after_1;
    // 0x802A6704: nop

    after_1:
    // 0x802A6708: b           L_802A6768
    // 0x802A670C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_802A6768;
    // 0x802A670C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
L_802A6710:
    // 0x802A6710: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x802A6714: b           L_802A6764
    // 0x802A6718: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
        goto L_802A6764;
    // 0x802A6718: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
L_802A671C:
    // 0x802A671C: b           L_802A6764
    // 0x802A6720: sh          $v1, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r3;
        goto L_802A6764;
    // 0x802A6720: sh          $v1, 0x4A($s0)
    MEM_H(0X4A, ctx->r16) = ctx->r3;
L_802A6724:
    // 0x802A6724: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x802A6728: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x802A672C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x802A6730: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x802A6734: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A6738: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A673C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x802A6740: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x802A6744: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A6748: swc1        $f2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f2.u32l;
    // 0x802A674C: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x802A6750: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802A6754: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x802A6758: swc1        $f12, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f12.u32l;
    // 0x802A675C: swc1        $f14, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f14.u32l;
    // 0x802A6760: swc1        $f14, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f14.u32l;
L_802A6764:
    // 0x802A6764: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
L_802A6768:
    // 0x802A6768: nop

L_802A676C:
    // 0x802A676C: bne         $v1, $zero, L_802A64B8
    if (ctx->r3 != 0) {
        // 0x802A6770: nop
    
            goto L_802A64B8;
    }
    // 0x802A6770: nop

L_802A6774:
    // 0x802A6774: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802A6778:
    // 0x802A6778: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802A677C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A6780: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x802A6784: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A6788: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802A678C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802A6790: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x802A6794: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x802A6798: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802A679C: jr          $ra
    // 0x802A67A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x802A67A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802A67A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A67A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A67A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A67AC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A67B0: jal         0x802A645C
    // 0x802A67B4: addiu       $a0, $a0, 0x5198
    ctx->r4 = ADD32(ctx->r4, 0X5198);
    func_802A645C(rdram, ctx);
        goto after_0;
    // 0x802A67B4: addiu       $a0, $a0, 0x5198
    ctx->r4 = ADD32(ctx->r4, 0X5198);
    after_0:
    // 0x802A67B8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A67BC: jal         0x802A645C
    // 0x802A67C0: addiu       $a0, $a0, 0x51EC
    ctx->r4 = ADD32(ctx->r4, 0X51EC);
    func_802A645C(rdram, ctx);
        goto after_1;
    // 0x802A67C0: addiu       $a0, $a0, 0x51EC
    ctx->r4 = ADD32(ctx->r4, 0X51EC);
    after_1:
    // 0x802A67C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A67C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A67CC: jr          $ra
    // 0x802A67D0: nop

    return;
    // 0x802A67D0: nop

;}
RECOMP_FUNC void func_802A67D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A67D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802A67D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A67DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A67E0: sh          $zero, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = 0;
    // 0x802A67E4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x802A67E8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x802A67EC: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x802A67F0: jr          $ra
    // 0x802A67F4: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x802A67F4: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_802A67F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A67F8: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x802A67FC: lbu         $t6, 0x5232($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5232);
    // 0x802A6800: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x802A6804: bne         $t6, $at, L_802A6830
    if (ctx->r14 != ctx->r1) {
        // 0x802A6808: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_802A6830;
    }
    // 0x802A6808: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x802A680C: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A6810: lw          $t7, 0x56A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X56A4);
    // 0x802A6814: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A6818: bne         $t7, $at, L_802A6828
    if (ctx->r15 != ctx->r1) {
        // 0x802A681C: nop
    
            goto L_802A6828;
    }
    // 0x802A681C: nop

    // 0x802A6820: jr          $ra
    // 0x802A6824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A6824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A6828:
    // 0x802A6828: jr          $ra
    // 0x802A682C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802A682C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A6830:
    // 0x802A6830: lhu         $t8, 0x361E($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X361E);
    // 0x802A6834: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A6838: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x802A683C: beq         $t9, $zero, L_802A684C
    if (ctx->r25 == 0) {
        // 0x802A6840: nop
    
            goto L_802A684C;
    }
    // 0x802A6840: nop

    // 0x802A6844: jr          $ra
    // 0x802A6848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A6848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A684C:
    // 0x802A684C: jr          $ra
    // 0x802A6850: nop

    return;
    // 0x802A6850: nop

;}
RECOMP_FUNC void func_802A6854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6854: jr          $ra
    // 0x802A6858: nop

    return;
    // 0x802A6858: nop

;}
RECOMP_FUNC void func_802A685C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A685C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6860: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x802A6864: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802A6868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A686C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x802A6870: nop

    // 0x802A6874: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x802A6878: jal         0x8007FA40
    // 0x802A687C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x802A687C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x802A6880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6888: jr          $ra
    // 0x802A688C: nop

    return;
    // 0x802A688C: nop

;}
RECOMP_FUNC void func_802A6890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6898: jal         0x802A685C
    // 0x802A689C: nop

    func_802A685C(rdram, ctx);
        goto after_0;
    // 0x802A689C: nop

    after_0:
    // 0x802A68A0: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x802A68A4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802A68A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A68AC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x802A68B0: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802A68B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A68B8: bc1f        L_802A68C8
    if (!c1cs) {
        // 0x802A68BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A68C8;
    }
    // 0x802A68BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A68C0: b           L_802A68C8
    // 0x802A68C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802A68C8;
    // 0x802A68C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A68C8:
    // 0x802A68C8: jr          $ra
    // 0x802A68CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x802A68CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802A68D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A68D0: andi        $t6, $a0, 0x800
    ctx->r14 = ctx->r4 & 0X800;
    // 0x802A68D4: andi        $t7, $a0, 0x400
    ctx->r15 = ctx->r4 & 0X400;
    // 0x802A68D8: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x802A68DC: andi        $t9, $a0, 0x200
    ctx->r25 = ctx->r4 & 0X200;
    // 0x802A68E0: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x802A68E4: andi        $t1, $a0, 0x100
    ctx->r9 = ctx->r4 & 0X100;
    // 0x802A68E8: jr          $ra
    // 0x802A68EC: or          $v0, $t0, $t1
    ctx->r2 = ctx->r8 | ctx->r9;
    return;
    // 0x802A68EC: or          $v0, $t0, $t1
    ctx->r2 = ctx->r8 | ctx->r9;
;}
RECOMP_FUNC void func_802A68F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A68F0: jr          $ra
    // 0x802A68F4: nop

    return;
    // 0x802A68F4: nop

;}
RECOMP_FUNC void func_802A68F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A68F8: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A68FC: lhu         $t6, 0x5528($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X5528);
    // 0x802A6900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6904: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x802A6908: beq         $at, $zero, L_802A694C
    if (ctx->r1 == 0) {
        // 0x802A690C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A694C;
    }
    // 0x802A690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6910: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802A6914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6918: addu        $at, $at, $t6
    gpr jr_addend_802A6924 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802A691C: lw          $t6, 0x1414($at)
    ctx->r14 = ADD32(ctx->r1, 0X1414);
    // 0x802A6920: nop

    // 0x802A6924: jr          $t6
    // 0x802A6928: nop

    switch (jr_addend_802A6924 >> 2) {
        case 0: goto L_802A693C; break;
        case 1: goto L_802A692C; break;
        case 2: goto L_802A694C; break;
        case 3: goto L_802A694C; break;
        case 4: goto L_802A694C; break;
        case 5: goto L_802A694C; break;
        case 6: goto L_802A693C; break;
        case 7: goto L_802A693C; break;
        case 8: goto L_802A693C; break;
        default: switch_error(__func__, 0x802A6924, 0x802C1414);
    }
    // 0x802A6928: nop

L_802A692C:
    // 0x802A692C: jal         0x80015B94
    // 0x802A6930: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    func_80015B94(rdram, ctx);
        goto after_0;
    // 0x802A6930: addiu       $a0, $zero, 0x303
    ctx->r4 = ADD32(0, 0X303);
    after_0:
    // 0x802A6934: b           L_802A6958
    // 0x802A6938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A6958;
    // 0x802A6938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A693C:
    // 0x802A693C: jal         0x80015B94
    // 0x802A6940: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A6940: addiu       $a0, $zero, 0x301
    ctx->r4 = ADD32(0, 0X301);
    after_1:
    // 0x802A6944: b           L_802A6958
    // 0x802A6948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A6958;
    // 0x802A6948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A694C:
    // 0x802A694C: jal         0x80015B94
    // 0x802A6950: addiu       $a0, $zero, 0x306
    ctx->r4 = ADD32(0, 0X306);
    func_80015B94(rdram, ctx);
        goto after_2;
    // 0x802A6950: addiu       $a0, $zero, 0x306
    ctx->r4 = ADD32(0, 0X306);
    after_2:
    // 0x802A6954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6958:
    // 0x802A6958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A695C: jr          $ra
    // 0x802A6960: nop

    return;
    // 0x802A6960: nop

;}
RECOMP_FUNC void func_802A6964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6964: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x802A6968: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x802A696C: lhu         $t6, 0x9CA($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X9CA);
    // 0x802A6970: lhu         $t8, 0x9AC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X9AC);
    // 0x802A6974: lhu         $t1, 0x9B6($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X9B6);
    // 0x802A6978: lhu         $t4, 0x9C0($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X9C0);
    // 0x802A697C: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x802A6980: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x802A6984: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x802A6988: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x802A698C: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x802A6990: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x802A6994: jr          $ra
    // 0x802A6998: or          $v0, $t3, $t5
    ctx->r2 = ctx->r11 | ctx->r13;
    return;
    // 0x802A6998: or          $v0, $t3, $t5
    ctx->r2 = ctx->r11 | ctx->r13;
;}
RECOMP_FUNC void func_802A699C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A699C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A69A0: lw          $v0, 0x54B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54B8);
    // 0x802A69A4: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A69A8: lw          $t7, 0xCC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XCC);
    // 0x802A69AC: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A69B0: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x802A69B4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A69B8: addiu       $a2, $a2, 0x50A0
    ctx->r6 = ADD32(ctx->r6, 0X50A0);
    // 0x802A69BC: addiu       $a1, $a1, 0x55B8
    ctx->r5 = ADD32(ctx->r5, 0X55B8);
    // 0x802A69C0: addiu       $t6, $t6, 0x4FE0
    ctx->r14 = ADD32(ctx->r14, 0X4FE0);
    // 0x802A69C4: addiu       $t1, $t8, 0x54
    ctx->r9 = ADD32(ctx->r24, 0X54);
L_802A69C8:
    // 0x802A69C8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802A69CC: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802A69D0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802A69D4: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x802A69D8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802A69DC: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x802A69E0: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x802A69E4: bne         $t8, $t1, L_802A69C8
    if (ctx->r24 != ctx->r9) {
        // 0x802A69E8: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_802A69C8;
    }
    // 0x802A69E8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x802A69EC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x802A69F0: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A69F4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x802A69F8: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x802A69FC: addiu       $t2, $t2, 0x5040
    ctx->r10 = ADD32(ctx->r10, 0X5040);
    // 0x802A6A00: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x802A6A04: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x802A6A08: nop

    // 0x802A6A0C: lw          $t4, 0xCC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XCC);
    // 0x802A6A10: nop

    // 0x802A6A14: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x802A6A18: nop

    // 0x802A6A1C: addiu       $t9, $t5, 0x54
    ctx->r25 = ADD32(ctx->r13, 0X54);
L_802A6A20:
    // 0x802A6A20: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802A6A24: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x802A6A28: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x802A6A2C: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x802A6A30: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x802A6A34: sw          $at, -0x8($t2)
    MEM_W(-0X8, ctx->r10) = ctx->r1;
    // 0x802A6A38: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x802A6A3C: bne         $t5, $t9, L_802A6A20
    if (ctx->r13 != ctx->r25) {
        // 0x802A6A40: sw          $at, -0x4($t2)
        MEM_W(-0X4, ctx->r10) = ctx->r1;
            goto L_802A6A20;
    }
    // 0x802A6A40: sw          $at, -0x4($t2)
    MEM_W(-0X4, ctx->r10) = ctx->r1;
    // 0x802A6A44: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x802A6A48: nop

    // 0x802A6A4C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x802A6A50: lw          $t9, 0x4($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X4);
    // 0x802A6A54: nop

    // 0x802A6A58: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x802A6A5C: lw          $t1, 0xCC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XCC);
    // 0x802A6A60: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802A6A64: lw          $v1, 0x30($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X30);
    // 0x802A6A68: nop

    // 0x802A6A6C: lhu         $t8, 0x2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2);
    // 0x802A6A70: nop

    // 0x802A6A74: ori         $t6, $t8, 0x2000
    ctx->r14 = ctx->r24 | 0X2000;
    // 0x802A6A78: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x802A6A7C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x802A6A80: nop

    // 0x802A6A84: lw          $t4, 0xCC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XCC);
    // 0x802A6A88: nop

    // 0x802A6A8C: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    // 0x802A6A90: nop

    // 0x802A6A94: lhu         $t0, 0x2($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X2);
    // 0x802A6A98: nop

    // 0x802A6A9C: ori         $t7, $t0, 0x2000
    ctx->r15 = ctx->r8 | 0X2000;
    // 0x802A6AA0: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x802A6AA4: lw          $t9, 0x50D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X50D8);
    // 0x802A6AA8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x802A6AAC: jr          $ra
    // 0x802A6AB0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    return;
    // 0x802A6AB0: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
;}
RECOMP_FUNC void func_802A6AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6AB4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A6AB8: lw          $t6, 0x54B8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X54B8);
    // 0x802A6ABC: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802A6AC0: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802A6AC4: addiu       $t9, $t9, 0x4FE0
    ctx->r25 = ADD32(ctx->r25, 0X4FE0);
    // 0x802A6AC8: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x802A6ACC: addiu       $t2, $t9, 0x54
    ctx->r10 = ADD32(ctx->r25, 0X54);
L_802A6AD0:
    // 0x802A6AD0: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x802A6AD4: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x802A6AD8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802A6ADC: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x802A6AE0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x802A6AE4: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x802A6AE8: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x802A6AEC: bne         $t9, $t2, L_802A6AD0
    if (ctx->r25 != ctx->r10) {
        // 0x802A6AF0: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_802A6AD0;
    }
    // 0x802A6AF0: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x802A6AF4: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x802A6AF8: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802A6AFC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x802A6B00: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x802A6B04: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A6B08: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x802A6B0C: lw          $t3, 0x55B8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X55B8);
    // 0x802A6B10: addiu       $t6, $t6, 0x5040
    ctx->r14 = ADD32(ctx->r14, 0X5040);
    // 0x802A6B14: lw          $t4, 0xCC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XCC);
    // 0x802A6B18: addiu       $t0, $t6, 0x54
    ctx->r8 = ADD32(ctx->r14, 0X54);
    // 0x802A6B1C: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x802A6B20: nop

L_802A6B24:
    // 0x802A6B24: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802A6B28: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x802A6B2C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x802A6B30: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x802A6B34: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x802A6B38: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x802A6B3C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x802A6B40: bne         $t6, $t0, L_802A6B24
    if (ctx->r14 != ctx->r8) {
        // 0x802A6B44: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_802A6B24;
    }
    // 0x802A6B44: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x802A6B48: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x802A6B4C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A6B50: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x802A6B54: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x802A6B58: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6B5C: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x802A6B60: lw          $t2, 0x50A4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X50A4);
    // 0x802A6B64: jr          $ra
    // 0x802A6B68: sw          $t2, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r10;
    return;
    // 0x802A6B68: sw          $t2, 0x50D8($at)
    MEM_W(0X50D8, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void func_802A6B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6B6C: jr          $ra
    // 0x802A6B70: nop

    return;
    // 0x802A6B70: nop

;}
RECOMP_FUNC void func_802A6B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6B74: jr          $ra
    // 0x802A6B78: nop

    return;
    // 0x802A6B78: nop

;}
RECOMP_FUNC void func_802A6B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6B7C: jr          $ra
    // 0x802A6B80: nop

    return;
    // 0x802A6B80: nop

;}
RECOMP_FUNC void func_802A6B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6B8C: jal         0x80087D40
    // 0x802A6B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A6B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A6B94: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x802A6B98: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A6B9C: mfhi        $t6
    ctx->r14 = hi;
    // 0x802A6BA0: slti        $at, $t6, 0x64
    ctx->r1 = SIGNED(ctx->r14) < 0X64 ? 1 : 0;
    // 0x802A6BA4: beq         $at, $zero, L_802A6BBC
    if (ctx->r1 == 0) {
        // 0x802A6BA8: nop
    
            goto L_802A6BBC;
    }
    // 0x802A6BA8: nop

    // 0x802A6BAC: jal         0x802A8918
    // 0x802A6BB0: nop

    func_802A8918(rdram, ctx);
        goto after_1;
    // 0x802A6BB0: nop

    after_1:
    // 0x802A6BB4: b           L_802A6BC8
    // 0x802A6BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A6BC8;
    // 0x802A6BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6BBC:
    // 0x802A6BBC: jal         0x802A8980
    // 0x802A6BC0: nop

    func_802A8980(rdram, ctx);
        goto after_2;
    // 0x802A6BC0: nop

    after_2:
    // 0x802A6BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A6BC8:
    // 0x802A6BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6BCC: jr          $ra
    // 0x802A6BD0: nop

    return;
    // 0x802A6BD0: nop

;}
RECOMP_FUNC void func_802A6BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6BD4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802A6BD8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A6BDC: addiu       $a1, $a1, 0x5278
    ctx->r5 = ADD32(ctx->r5, 0X5278);
    // 0x802A6BE0: addiu       $a3, $a3, -0x17C8
    ctx->r7 = ADD32(ctx->r7, -0X17C8);
    // 0x802A6BE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A6BE8: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    // 0x802A6BEC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_802A6BF0:
    // 0x802A6BF0: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A6BF4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802A6BF8: nop

    // 0x802A6BFC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x802A6C00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A6C04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A6C08: mflo        $t6
    ctx->r14 = lo;
    // 0x802A6C0C: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x802A6C10: nop

    // 0x802A6C14: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A6C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A6C1C: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x802A6C20: sra         $v0, $t5, 16
    ctx->r2 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802A6C24: mflo        $t7
    ctx->r15 = lo;
    // 0x802A6C28: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x802A6C2C: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x802A6C30: lwc1        $f8, 0x48($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X48);
    // 0x802A6C34: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802A6C38: lwc1        $f16, 0x4C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x802A6C3C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802A6C40: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802A6C44: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x802A6C48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802A6C4C: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x802A6C50: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802A6C54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A6C58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A6C5C: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x802A6C60: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802A6C64: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802A6C68: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x802A6C6C: nop

    // 0x802A6C70: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802A6C74: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    // 0x802A6C78: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802A6C7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A6C80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A6C84: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x802A6C88: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802A6C8C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802A6C90: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802A6C94: bne         $at, $zero, L_802A6BF0
    if (ctx->r1 != 0) {
        // 0x802A6C98: sh          $t4, 0x4($v1)
        MEM_H(0X4, ctx->r3) = ctx->r12;
            goto L_802A6BF0;
    }
    // 0x802A6C98: sh          $t4, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r12;
    // 0x802A6C9C: jr          $ra
    // 0x802A6CA0: nop

    return;
    // 0x802A6CA0: nop

;}
RECOMP_FUNC void func_802A6CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6CA4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A6CA8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x802A6CAC: addiu       $a1, $a1, -0x17C8
    ctx->r5 = ADD32(ctx->r5, -0X17C8);
    // 0x802A6CB0: addiu       $a3, $a3, 0x5278
    ctx->r7 = ADD32(ctx->r7, 0X5278);
    // 0x802A6CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A6CB8: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x802A6CBC: addiu       $a2, $zero, 0xF8
    ctx->r6 = ADD32(0, 0XF8);
L_802A6CC0:
    // 0x802A6CC0: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A6CC4: mflo        $t6
    ctx->r14 = lo;
    // 0x802A6CC8: addu        $v1, $a1, $t6
    ctx->r3 = ADD32(ctx->r5, ctx->r14);
    // 0x802A6CCC: nop

    // 0x802A6CD0: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802A6CD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802A6CD8: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x802A6CDC: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802A6CE0: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x802A6CE4: mflo        $t7
    ctx->r15 = lo;
    // 0x802A6CE8: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x802A6CEC: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x802A6CF0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x802A6CF4: lh          $t1, 0x4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X4);
    // 0x802A6CF8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802A6CFC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802A6D00: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x802A6D04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A6D08: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x802A6D0C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A6D10: swc1        $f6, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f6.u32l;
    // 0x802A6D14: swc1        $f4, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f4.u32l;
    // 0x802A6D18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802A6D1C: swc1        $f10, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f10.u32l;
    // 0x802A6D20: bne         $at, $zero, L_802A6CC0
    if (ctx->r1 != 0) {
        // 0x802A6D24: swc1        $f18, 0x4C($v1)
        MEM_W(0X4C, ctx->r3) = ctx->f18.u32l;
            goto L_802A6CC0;
    }
    // 0x802A6D24: swc1        $f18, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f18.u32l;
    // 0x802A6D28: jr          $ra
    // 0x802A6D2C: nop

    return;
    // 0x802A6D2C: nop

;}
RECOMP_FUNC void func_802A6D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6D30: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A6D34: lw          $t6, 0x54B8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X54B8);
    // 0x802A6D38: nop

    // 0x802A6D3C: lw          $t7, 0xCC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XCC);
    // 0x802A6D40: nop

    // 0x802A6D44: lw          $t8, 0x30($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X30);
    // 0x802A6D48: nop

    // 0x802A6D4C: lh          $v0, 0x4($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X4);
    // 0x802A6D50: nop

    // 0x802A6D54: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x802A6D58: bne         $at, $zero, L_802A6D84
    if (ctx->r1 != 0) {
        // 0x802A6D5C: addiu       $t9, $v0, -0xC8
        ctx->r25 = ADD32(ctx->r2, -0XC8);
            goto L_802A6D84;
    }
    // 0x802A6D5C: addiu       $t9, $v0, -0xC8
    ctx->r25 = ADD32(ctx->r2, -0XC8);
    // 0x802A6D60: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x802A6D64: beq         $at, $zero, L_802A6D98
    if (ctx->r1 == 0) {
        // 0x802A6D68: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_802A6D98;
    }
    // 0x802A6D68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802A6D6C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6D70: addu        $at, $at, $t9
    gpr jr_addend_802A6D7C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802A6D74: lw          $t9, 0x1438($at)
    ctx->r25 = ADD32(ctx->r1, 0X1438);
    // 0x802A6D78: nop

    // 0x802A6D7C: jr          $t9
    // 0x802A6D80: nop

    switch (jr_addend_802A6D7C >> 2) {
        case 0: goto L_802A6D90; break;
        case 1: goto L_802A6D90; break;
        case 2: goto L_802A6D90; break;
        case 3: goto L_802A6D90; break;
        case 4: goto L_802A6D90; break;
        case 5: goto L_802A6D98; break;
        case 6: goto L_802A6D90; break;
        case 7: goto L_802A6D90; break;
        case 8: goto L_802A6D90; break;
        case 9: goto L_802A6D90; break;
        case 10: goto L_802A6D90; break;
        default: switch_error(__func__, 0x802A6D7C, 0x802C1438);
    }
    // 0x802A6D80: nop

L_802A6D84:
    // 0x802A6D84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A6D88: bne         $v0, $at, L_802A6D9C
    if (ctx->r2 != ctx->r1) {
        // 0x802A6D8C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A6D9C;
    }
    // 0x802A6D8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A6D90:
    // 0x802A6D90: jr          $ra
    // 0x802A6D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A6D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A6D98:
    // 0x802A6D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A6D9C:
    // 0x802A6D9C: jr          $ra
    // 0x802A6DA0: nop

    return;
    // 0x802A6DA0: nop

;}
RECOMP_FUNC void func_802A6DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6DAC: jal         0x8000F91C
    // 0x802A6DB0: nop

    func_8000F91C(rdram, ctx);
        goto after_0;
    // 0x802A6DB0: nop

    after_0:
    // 0x802A6DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6DB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6DBC: jr          $ra
    // 0x802A6DC0: nop

    return;
    // 0x802A6DC0: nop

;}
RECOMP_FUNC void func_802A6DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6DC4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6DC8: lw          $v0, 0x55BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55BC);
    // 0x802A6DCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A6DD0: beq         $v0, $zero, L_802A6DE0
    if (ctx->r2 == 0) {
        // 0x802A6DD4: nop
    
            goto L_802A6DE0;
    }
    // 0x802A6DD4: nop

    // 0x802A6DD8: bne         $v0, $at, L_802A6DEC
    if (ctx->r2 != ctx->r1) {
        // 0x802A6DDC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802A6DEC;
    }
    // 0x802A6DDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802A6DE0:
    // 0x802A6DE0: jr          $ra
    // 0x802A6DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A6DE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A6DE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802A6DEC:
    // 0x802A6DEC: jr          $ra
    // 0x802A6DF0: nop

    return;
    // 0x802A6DF0: nop

;}
