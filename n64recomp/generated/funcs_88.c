#include "iss64_recomp.h"
#include "funcs.h"

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
RECOMP_FUNC void func_803F1890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1880:
    // 0x803F1890: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
L_803F1890:
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
    func_803F1880(rdram, ctx);
    return;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F1914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1880:
    // 0x803F1914: nop

L_803F1890:
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
    func_803F1890(rdram, ctx);
    return;
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
    func_803F1880(rdram, ctx);
    return;
    }
    // 0x803F1948: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F194C: jr          $ra
    // 0x803F1950: nop

    return;
    // 0x803F1950: nop

;}
RECOMP_FUNC void func_803F1954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F1958:
    // 0x803F1958: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803F195C: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F1960: addiu       $t9, $t9, -0x2200
    ctx->r25 = ADD32(ctx->r25, -0X2200);
    // 0x803F1964: addiu       $t7, $t7, 0x5330
    ctx->r15 = ADD32(ctx->r15, 0X5330);
    // 0x803F1968: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x803F196C: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x803F1970: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x803F1974: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F1978: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F197C:
    // 0x803F197C: addu        $t2, $a1, $v1
    ctx->r10 = ADD32(ctx->r5, ctx->r3);
    // 0x803F1980: addu        $t4, $a0, $v1
    ctx->r12 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1984: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1988: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x803F198C: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x803F1990: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F1994: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F1998: bne         $at, $zero, L_803F197C
    if (ctx->r1 != 0) {
        // 0x803F199C: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_803F197C;
    }
    // 0x803F199C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F19A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F19A4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x803F19A8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F19AC: bne         $at, $zero, L_803F1958
    if (ctx->r1 != 0) {
        // 0x803F19B0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F1958;
    }
    // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F19B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F19B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F19BC:
    // 0x803F19BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x803F19C0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F19C4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F19C8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x803F19CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F19D0: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F19D4: addiu       $t2, $t2, -0x21E0
    ctx->r10 = ADD32(ctx->r10, -0X21E0);
    // 0x803F19D8: addiu       $t8, $t8, -0x7A10
    ctx->r24 = ADD32(ctx->r24, -0X7A10);
    // 0x803F19DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F19E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F19E4: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F19E8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F19EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F19F0:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
        // 0x803F1A54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F19BC;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1958:
    // 0x803F1958: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803F195C: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F1960: addiu       $t9, $t9, -0x2200
    ctx->r25 = ADD32(ctx->r25, -0X2200);
    // 0x803F1964: addiu       $t7, $t7, 0x5330
    ctx->r15 = ADD32(ctx->r15, 0X5330);
    // 0x803F1968: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x803F196C: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x803F1970: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x803F1974: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x803F1978: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F197C:
    // 0x803F197C: addu        $t2, $a1, $v1
    ctx->r10 = ADD32(ctx->r5, ctx->r3);
    // 0x803F1980: addu        $t4, $a0, $v1
    ctx->r12 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1984: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1988: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x803F198C: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x803F1990: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F1994: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F1998: bne         $at, $zero, L_803F197C
    if (ctx->r1 != 0) {
        // 0x803F199C: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_803F197C;
    }
    // 0x803F199C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F19A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F19A4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x803F19A8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F19AC: bne         $at, $zero, L_803F1958
    if (ctx->r1 != 0) {
        // 0x803F19B0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_803F1958;
    }
    // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F19B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F19B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F19BC:
    // 0x803F19BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x803F19C0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F19C4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F19C8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x803F19CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F19D0: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F19D4: addiu       $t2, $t2, -0x21E0
    ctx->r10 = ADD32(ctx->r10, -0X21E0);
    // 0x803F19D8: addiu       $t8, $t8, -0x7A10
    ctx->r24 = ADD32(ctx->r24, -0X7A10);
    // 0x803F19DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F19E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F19E4: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F19E8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F19EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F19F0:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
        // 0x803F1A54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F19BC;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F197C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1958:
    // 0x803F197C: addu        $t2, $a1, $v1
    ctx->r10 = ADD32(ctx->r5, ctx->r3);
L_803F197C:
    // 0x803F1980: addu        $t4, $a0, $v1
    ctx->r12 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1984: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1988: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x803F198C: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x803F1990: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x803F1994: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F1998: bne         $at, $zero, L_803F197C
    if (ctx->r1 != 0) {
        // 0x803F199C: sb          $t3, 0x0($t4)
        MEM_B(0X0, ctx->r12) = ctx->r11;
            goto L_803F197C;
    }
    // 0x803F199C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F19A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F19A4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x803F19A8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F19AC: bne         $at, $zero, L_803F1958
    if (ctx->r1 != 0) {
            // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_803F1958(rdram, ctx);
    return;
    }
    // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F19B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F19B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F19BC:
    // 0x803F19BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x803F19C0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F19C4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F19C8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x803F19CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F19D0: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F19D4: addiu       $t2, $t2, -0x21E0
    ctx->r10 = ADD32(ctx->r10, -0X21E0);
    // 0x803F19D8: addiu       $t8, $t8, -0x7A10
    ctx->r24 = ADD32(ctx->r24, -0X7A10);
    // 0x803F19DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F19E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F19E4: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F19E8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F19EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F19F0:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
        // 0x803F1A54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F19BC;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1958:
    // 0x803F1990: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
L_803F197C:
    // 0x803F1994: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x803F1998: bne         $at, $zero, L_803F197C
    if (ctx->r1 != 0) {
            // 0x803F199C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    func_803F197C(rdram, ctx);
    return;
    }
    // 0x803F199C: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x803F19A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F19A4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x803F19A8: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x803F19AC: bne         $at, $zero, L_803F1958
    if (ctx->r1 != 0) {
            // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_803F1958(rdram, ctx);
    return;
    }
    // 0x803F19B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x803F19B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F19B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_803F19BC:
    // 0x803F19BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x803F19C0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F19C4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F19C8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x803F19CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F19D0: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F19D4: addiu       $t2, $t2, -0x21E0
    ctx->r10 = ADD32(ctx->r10, -0X21E0);
    // 0x803F19D8: addiu       $t8, $t8, -0x7A10
    ctx->r24 = ADD32(ctx->r24, -0X7A10);
    // 0x803F19DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F19E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F19E4: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F19E8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F19EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F19F0:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
        // 0x803F1A54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F19BC;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F19BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F19BC:
    // 0x803F19BC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x803F19C0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803F19C4: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x803F19C8: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x803F19CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803F19D0: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F19D4: addiu       $t2, $t2, -0x21E0
    ctx->r10 = ADD32(ctx->r10, -0X21E0);
    // 0x803F19D8: addiu       $t8, $t8, -0x7A10
    ctx->r24 = ADD32(ctx->r24, -0X7A10);
    // 0x803F19DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803F19E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803F19E4: addu        $a3, $t9, $t2
    ctx->r7 = ADD32(ctx->r25, ctx->r10);
    // 0x803F19E8: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x803F19EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_803F19F0:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
        // 0x803F1A54: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F19BC;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F19F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F19BC:
    // 0x803F19F0: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
L_803F19F0:
    // 0x803F19F4: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x803F19F8: addu        $t4, $t4, $v1
    ctx->r12 = ADD32(ctx->r12, ctx->r3);
    // 0x803F19FC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F1A00: addu        $a1, $a2, $t3
    ctx->r5 = ADD32(ctx->r6, ctx->r11);
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
        // 0x803F1A40: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_803F19F0;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
            // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F19BC(rdram, ctx);
    return;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F19BC:
    // 0x803F1A04: addu        $t0, $a3, $t4
    ctx->r8 = ADD32(ctx->r7, ctx->r12);
L_803F19F0:
    // 0x803F1A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1A0C:
    // 0x803F1A0C: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x803F1A10: addu        $t7, $a1, $a0
    ctx->r15 = ADD32(ctx->r5, ctx->r4);
    // 0x803F1A14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F1A18: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x803F1A1C: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x803F1A20: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x803F1A24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x803F1A28: bne         $at, $zero, L_803F1A0C
    if (ctx->r1 != 0) {
        // 0x803F1A2C: sb          $t6, 0xB40($t7)
        MEM_B(0XB40, ctx->r15) = ctx->r14;
            goto L_803F1A0C;
    }
    // 0x803F1A2C: sb          $t6, 0xB40($t7)
    MEM_B(0XB40, ctx->r15) = ctx->r14;
    // 0x803F1A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A34: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x803F1A38: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x803F1A3C: bne         $at, $zero, L_803F19F0
    if (ctx->r1 != 0) {
            // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    func_803F19F0(rdram, ctx);
    return;
    }
    // 0x803F1A40: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x803F1A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1A48: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1A4C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1A50: bne         $at, $zero, L_803F19BC
    if (ctx->r1 != 0) {
            // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F19BC(rdram, ctx);
    return;
    }
    // 0x803F1A54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1A58: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1A5C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x803F1A60: addiu       $a3, $a3, 0x4F30
    ctx->r7 = ADD32(ctx->r7, 0X4F30);
    // 0x803F1A64: addiu       $t1, $t1, -0x2520
    ctx->r9 = ADD32(ctx->r9, -0X2520);
    // 0x803F1A68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F1A70: addiu       $t0, $zero, 0x19
    ctx->r8 = ADD32(0, 0X19);
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1A74:
    // 0x803F1A74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803F1A7C: sll         $a2, $a1, 4
    ctx->r6 = S32(ctx->r5 << 4);
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
        // 0x803F1B3C: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_803F1A74;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1A74:
    // 0x803F1A80: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
L_803F1A84:
    // 0x803F1A84: multu       $t3, $t0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1A88: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1A8C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x803F1A90: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x803F1A94: mflo        $a1
    ctx->r5 = lo;
    // 0x803F1A98: addu        $t5, $t1, $a1
    ctx->r13 = ADD32(ctx->r9, ctx->r5);
    // 0x803F1A9C: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x803F1AA0: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x803F1AA4: addu        $t4, $a3, $a1
    ctx->r12 = ADD32(ctx->r7, ctx->r5);
    // 0x803F1AA8: swl         $at, 0x3840($t4)
    do_swl(rdram, 0X3840, ctx->r12, ctx->r1);
    // 0x803F1AAC: swr         $at, 0x3843($t4)
    do_swr(rdram, 0X3843, ctx->r12, ctx->r1);
    // 0x803F1AB0: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x803F1AB4: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x803F1AB8: nop

    // 0x803F1ABC: swl         $t7, 0x3844($t4)
    do_swl(rdram, 0X3844, ctx->r12, ctx->r15);
    // 0x803F1AC0: swr         $t7, 0x3847($t4)
    do_swr(rdram, 0X3847, ctx->r12, ctx->r15);
    // 0x803F1AC4: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x803F1AC8: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x803F1ACC: nop

    // 0x803F1AD0: swl         $at, 0x3848($t4)
    do_swl(rdram, 0X3848, ctx->r12, ctx->r1);
    // 0x803F1AD4: swr         $at, 0x384B($t4)
    do_swr(rdram, 0X384B, ctx->r12, ctx->r1);
    // 0x803F1AD8: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x803F1ADC: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x803F1AE0: nop

    // 0x803F1AE4: swl         $t7, 0x384C($t4)
    do_swl(rdram, 0X384C, ctx->r12, ctx->r15);
    // 0x803F1AE8: swr         $t7, 0x384F($t4)
    do_swr(rdram, 0X384F, ctx->r12, ctx->r15);
    // 0x803F1AEC: lwl         $at, 0x10($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X10);
    // 0x803F1AF0: lwr         $at, 0x13($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X13);
    // 0x803F1AF4: nop

    // 0x803F1AF8: swl         $at, 0x3850($t4)
    do_swl(rdram, 0X3850, ctx->r12, ctx->r1);
    // 0x803F1AFC: swr         $at, 0x3853($t4)
    do_swr(rdram, 0X3853, ctx->r12, ctx->r1);
    // 0x803F1B00: lwl         $t7, 0x14($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X14);
    // 0x803F1B04: lwr         $t7, 0x17($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X17);
    // 0x803F1B08: nop

    // 0x803F1B0C: swl         $t7, 0x3854($t4)
    do_swl(rdram, 0X3854, ctx->r12, ctx->r15);
    // 0x803F1B10: swr         $t7, 0x3857($t4)
    do_swr(rdram, 0X3857, ctx->r12, ctx->r15);
    // 0x803F1B14: lbu         $at, 0x18($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X18);
    // 0x803F1B18: nop

    // 0x803F1B1C: sb          $at, 0x3858($t4)
    MEM_B(0X3858, ctx->r12) = ctx->r1;
    // 0x803F1B20: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x803F1B24: bne         $at, $zero, L_803F1A84
    if (ctx->r1 != 0) {
        // 0x803F1B28: addu        $t3, $a2, $a0
        ctx->r11 = ADD32(ctx->r6, ctx->r4);
            goto L_803F1A84;
    }
    // 0x803F1B28: addu        $t3, $a2, $a0
    ctx->r11 = ADD32(ctx->r6, ctx->r4);
    // 0x803F1B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1B30: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x803F1B34: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x803F1B38: bne         $at, $zero, L_803F1A74
    if (ctx->r1 != 0) {
            // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    func_803F1A74(rdram, ctx);
    return;
    }
    // 0x803F1B3C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x803F1B40: jr          $ra
    // 0x803F1B44: nop

    return;
    // 0x803F1B44: nop

;}
RECOMP_FUNC void func_803F1B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1B48: lui         $t3, 0x8040
    ctx->r11 = S32(0X8040 << 16);
    // 0x803F1B4C: lui         $t2, 0x8040
    ctx->r10 = S32(0X8040 << 16);
    // 0x803F1B50: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1B54: addiu       $t1, $t1, -0x2040
    ctx->r9 = ADD32(ctx->r9, -0X2040);
    // 0x803F1B58: addiu       $t2, $t2, -0x3C20
    ctx->r10 = ADD32(ctx->r10, -0X3C20);
    // 0x803F1B5C: addiu       $t3, $t3, -0x3BA0
    ctx->r11 = ADD32(ctx->r11, -0X3BA0);
    // 0x803F1B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1B64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_803F1B68:
    // 0x803F1B68: sll         $a1, $a0, 2
    ctx->r5 = S32(ctx->r4 << 2);
    // 0x803F1B6C: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x803F1B70: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x803F1B74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1B78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803F1B7C: sll         $a3, $a0, 1
    ctx->r7 = S32(ctx->r4 << 1);
L_803F1B80:
    // 0x803F1B80: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x803F1B84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803F1B88: addu        $t6, $t1, $a0
    ctx->r14 = ADD32(ctx->r9, ctx->r4);
    // 0x803F1B8C: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x803F1B90: sb          $v0, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r2;
    // 0x803F1B94: addu        $t7, $t2, $a0
    ctx->r15 = ADD32(ctx->r10, ctx->r4);
    // 0x803F1B98: slti        $at, $a2, 0x3
    ctx->r1 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x803F1B9C: sb          $a3, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r7;
    // 0x803F1BA0: addu        $t8, $t3, $a0
    ctx->r24 = ADD32(ctx->r11, ctx->r4);
    // 0x803F1BA4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x803F1BA8: bne         $at, $zero, L_803F1B80
    if (ctx->r1 != 0) {
        // 0x803F1BAC: sb          $t0, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r8;
            goto L_803F1B80;
    }
    // 0x803F1BAC: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
    // 0x803F1BB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x803F1BB4: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x803F1BB8: slti        $at, $a0, 0x2A
    ctx->r1 = SIGNED(ctx->r4) < 0X2A ? 1 : 0;
    // 0x803F1BBC: bne         $at, $zero, L_803F1B68
    if (ctx->r1 != 0) {
        // 0x803F1BC0: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_803F1B68;
    }
    // 0x803F1BC0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x803F1BC4: jr          $ra
    // 0x803F1BC8: nop

    return;
    // 0x803F1BC8: nop

;}
RECOMP_FUNC void func_803F1BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1BCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F1BD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F1BD4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F1BD8: lui         $s1, 0x8011
    ctx->r17 = S32(0X8011 << 16);
    // 0x803F1BDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F1BE0: addiu       $s1, $s1, 0x37B0
    ctx->r17 = ADD32(ctx->r17, 0X37B0);
    // 0x803F1BE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1BE8:
    // 0x803F1BE8: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x803F1BEC: addu        $a0, $s1, $t6
    ctx->r4 = ADD32(ctx->r17, ctx->r14);
    // 0x803F1BF0: jal         0x8005B2C8
    // 0x803F1BF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005B2C8(rdram, ctx);
        goto after_0;
    // 0x803F1BF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x803F1BF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1BFC: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x803F1C00: slti        $at, $t7, 0x24
    ctx->r1 = SIGNED(ctx->r15) < 0X24 ? 1 : 0;
    // 0x803F1C04: bne         $at, $zero, L_803F1BE8
    if (ctx->r1 != 0) {
        // 0x803F1C08: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_803F1BE8;
    }
    // 0x803F1C08: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803F1C0C: jal         0x803F1CE4
    // 0x803F1C10: nop

    func_803F1CE4(rdram, ctx);
        goto after_1;
    // 0x803F1C10: nop

    after_1:
    // 0x803F1C14: lui         $a3, 0x8040
    ctx->r7 = S32(0X8040 << 16);
    // 0x803F1C18: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F1C1C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F1C20: addiu       $a0, $a0, -0x2040
    ctx->r4 = ADD32(ctx->r4, -0X2040);
    // 0x803F1C24: addiu       $a2, $a2, -0x53F0
    ctx->r6 = ADD32(ctx->r6, -0X53F0);
    // 0x803F1C28: addiu       $a3, $a3, -0x53C4
    ctx->r7 = ADD32(ctx->r7, -0X53C4);
    // 0x803F1C2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F1C30: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803F1C34: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_803F1C38:
    // 0x803F1C38: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1C3C: addu        $t9, $a2, $s0
    ctx->r25 = ADD32(ctx->r6, ctx->r16);
    // 0x803F1C40: addu        $t1, $a3, $s0
    ctx->r9 = ADD32(ctx->r7, ctx->r16);
    // 0x803F1C44: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x803F1C48: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x803F1C4C: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x803F1C50: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x803F1C54: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803F1C58: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x803F1C5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1C60: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x803F1C64: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x803F1C68: mflo        $t8
    ctx->r24 = lo;
    // 0x803F1C6C: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x803F1C70: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x803F1C74: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x803F1C78: bgez        $t6, L_803F1C88
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F1C7C: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_803F1C88;
    }
    // 0x803F1C7C: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x803F1C80: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x803F1C84: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_803F1C88:
    // 0x803F1C88: slti        $at, $v1, 0x2A
    ctx->r1 = SIGNED(ctx->r3) < 0X2A ? 1 : 0;
    // 0x803F1C8C: bne         $at, $zero, L_803F1C38
    if (ctx->r1 != 0) {
        // 0x803F1C90: sb          $t7, 0x2($v0)
        MEM_B(0X2, ctx->r2) = ctx->r15;
            goto L_803F1C38;
    }
    // 0x803F1C90: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x803F1C94: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803F1C98: addiu       $s1, $s1, -0x58B0
    ctx->r17 = ADD32(ctx->r17, -0X58B0);
    // 0x803F1C9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1CA0:
    // 0x803F1CA0: jal         0x803F13F0
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F13F0(rdram, ctx);
        goto after_2;
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x803F1CA8: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x803F1CAC: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x803F1CB0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x803F1CB4: jal         0x803F1DBC
    // 0x803F1CB8: nop

    func_803F1DBC(rdram, ctx);
        goto after_3;
    // 0x803F1CB8: nop

    after_3:
    // 0x803F1CBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1CC0: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x803F1CC4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803F1CC8: bne         $at, $zero, L_803F1CA0
    if (ctx->r1 != 0) {
        // 0x803F1CCC: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_803F1CA0;
    }
    // 0x803F1CCC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803F1CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1CD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F1CD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F1CDC: jr          $ra
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F1C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1C38:
    // 0x803F1C38: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1C3C: addu        $t9, $a2, $s0
    ctx->r25 = ADD32(ctx->r6, ctx->r16);
    // 0x803F1C40: addu        $t1, $a3, $s0
    ctx->r9 = ADD32(ctx->r7, ctx->r16);
    // 0x803F1C44: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x803F1C48: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x803F1C4C: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x803F1C50: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x803F1C54: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x803F1C58: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x803F1C5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1C60: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x803F1C64: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x803F1C68: mflo        $t8
    ctx->r24 = lo;
    // 0x803F1C6C: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x803F1C70: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x803F1C74: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x803F1C78: bgez        $t6, L_803F1C88
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F1C7C: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_803F1C88;
    }
    // 0x803F1C7C: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x803F1C80: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x803F1C84: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_803F1C88:
    // 0x803F1C88: slti        $at, $v1, 0x2A
    ctx->r1 = SIGNED(ctx->r3) < 0X2A ? 1 : 0;
    // 0x803F1C8C: bne         $at, $zero, L_803F1C38
    if (ctx->r1 != 0) {
        // 0x803F1C90: sb          $t7, 0x2($v0)
        MEM_B(0X2, ctx->r2) = ctx->r15;
            goto L_803F1C38;
    }
    // 0x803F1C90: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x803F1C94: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803F1C98: addiu       $s1, $s1, -0x58B0
    ctx->r17 = ADD32(ctx->r17, -0X58B0);
    // 0x803F1C9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1CA0:
    // 0x803F1CA0: jal         0x803F13F0
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F13F0(rdram, ctx);
        goto after_0;
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x803F1CA8: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x803F1CAC: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x803F1CB0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x803F1CB4: jal         0x803F1DBC
    // 0x803F1CB8: nop

    func_803F1DBC(rdram, ctx);
        goto after_1;
    // 0x803F1CB8: nop

    after_1:
    // 0x803F1CBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1CC0: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x803F1CC4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803F1CC8: bne         $at, $zero, L_803F1CA0
    if (ctx->r1 != 0) {
        // 0x803F1CCC: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_803F1CA0;
    }
    // 0x803F1CCC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803F1CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1CD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F1CD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F1CDC: jr          $ra
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F1C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F1C38:
    // 0x803F1C68: mflo        $t8
    ctx->r24 = lo;
    // 0x803F1C6C: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x803F1C70: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x803F1C74: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x803F1C78: bgez        $t6, L_803F1C88
    if (SIGNED(ctx->r14) >= 0) {
        // 0x803F1C7C: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_803F1C88;
    }
    // 0x803F1C7C: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x803F1C80: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x803F1C84: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_803F1C88:
    // 0x803F1C88: slti        $at, $v1, 0x2A
    ctx->r1 = SIGNED(ctx->r3) < 0X2A ? 1 : 0;
    // 0x803F1C8C: bne         $at, $zero, L_803F1C38
    if (ctx->r1 != 0) {
            // 0x803F1C90: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    func_803F1C38(rdram, ctx);
    return;
    }
    // 0x803F1C90: sb          $t7, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r15;
    // 0x803F1C94: lui         $s1, 0x8040
    ctx->r17 = S32(0X8040 << 16);
    // 0x803F1C98: addiu       $s1, $s1, -0x58B0
    ctx->r17 = ADD32(ctx->r17, -0X58B0);
    // 0x803F1C9C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1CA0:
    // 0x803F1CA0: jal         0x803F13F0
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F13F0(rdram, ctx);
        goto after_0;
    // 0x803F1CA4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x803F1CA8: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x803F1CAC: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x803F1CB0: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x803F1CB4: jal         0x803F1DBC
    // 0x803F1CB8: nop

    func_803F1DBC(rdram, ctx);
        goto after_1;
    // 0x803F1CB8: nop

    after_1:
    // 0x803F1CBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1CC0: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x803F1CC4: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x803F1CC8: bne         $at, $zero, L_803F1CA0
    if (ctx->r1 != 0) {
        // 0x803F1CCC: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_803F1CA0;
    }
    // 0x803F1CCC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803F1CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1CD4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F1CD8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F1CDC: jr          $ra
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803F1CE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803F1CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1CE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F1CE8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803F1CEC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803F1CF0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F1CF4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F1CF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1CFC: lui         $s7, 0x8040
    ctx->r23 = S32(0X8040 << 16);
    // 0x803F1D00: lui         $fp, 0x8040
    ctx->r30 = S32(0X8040 << 16);
    // 0x803F1D04: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803F1D08: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F1D0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F1D10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F1D14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F1D18: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x803F1D1C: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x803F1D20: addiu       $fp, $fp, -0x1F68
    ctx->r30 = ADD32(ctx->r30, -0X1F68);
    // 0x803F1D24: addiu       $s7, $s7, -0x1FC0
    ctx->r23 = ADD32(ctx->r23, -0X1FC0);
    // 0x803F1D28: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F1D2C:
    // 0x803F1D2C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x803F1D30: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x803F1D34: jal         0x803F2F44
    // 0x803F1D38: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    func_803F2F44(rdram, ctx);
        goto after_0;
    // 0x803F1D38: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    after_0:
    // 0x803F1D3C: sll         $s1, $s0, 1
    ctx->r17 = S32(ctx->r16 << 1);
    // 0x803F1D40: addu        $s2, $s7, $s1
    ctx->r18 = ADD32(ctx->r23, ctx->r17);
    // 0x803F1D44: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x803F1D48: jal         0x803F316C
    // 0x803F1D4C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_803F316C(rdram, ctx);
        goto after_1;
    // 0x803F1D4C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x803F1D50: lhu         $a0, 0x0($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X0);
    // 0x803F1D54: addu        $v1, $fp, $s1
    ctx->r3 = ADD32(ctx->r30, ctx->r17);
    // 0x803F1D58: slt         $at, $a0, $s3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x803F1D5C: beq         $at, $zero, L_803F1D68
    if (ctx->r1 == 0) {
        // 0x803F1D60: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_803F1D68;
    }
    // 0x803F1D60: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x803F1D64: andi        $s5, $a0, 0xFFFF
    ctx->r21 = ctx->r4 & 0XFFFF;
L_803F1D68:
    // 0x803F1D68: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x803F1D6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F1D70: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x803F1D74: beq         $at, $zero, L_803F1D80
    if (ctx->r1 == 0) {
        // 0x803F1D78: andi        $t6, $s0, 0xFF
        ctx->r14 = ctx->r16 & 0XFF;
            goto L_803F1D80;
    }
    // 0x803F1D78: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x803F1D7C: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_803F1D80:
    // 0x803F1D80: slti        $at, $t6, 0x24
    ctx->r1 = SIGNED(ctx->r14) < 0X24 ? 1 : 0;
    // 0x803F1D84: bne         $at, $zero, L_803F1D2C
    if (ctx->r1 != 0) {
        // 0x803F1D88: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_803F1D2C;
    }
    // 0x803F1D88: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803F1D8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F1D90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1D94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1D98: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1D9C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1DA0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1DA4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1DA8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F1DAC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803F1DB0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803F1DB4: jr          $ra
    // 0x803F1DB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F1DB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F1DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1DBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803F1DC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F1DC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F1DC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F1DCC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F1DD0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x803F1DD4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F1DD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1DDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F1DE0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F1DE4: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_803F1DE8:
    // 0x803F1DE8: jal         0x803F2ED4
    // 0x803F1DEC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_803F2ED4(rdram, ctx);
        goto after_0;
    // 0x803F1DEC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x803F1DF0: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1DF4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x803F1DF8: mflo        $t6
    ctx->r14 = lo;
    // 0x803F1DFC: addu        $s0, $s3, $t6
    ctx->r16 = ADD32(ctx->r19, ctx->r14);
    // 0x803F1E00: jal         0x803F30FC
    // 0x803F1E04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_803F30FC(rdram, ctx);
        goto after_1;
    // 0x803F1E04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x803F1E08: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x803F1E0C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x803F1E10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803F1E14: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803F1E18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1E1C: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1E20: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F1E24: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x803F1E28: bgez        $t0, L_803F1E38
    if (SIGNED(ctx->r8) >= 0) {
        // 0x803F1E2C: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_803F1E38;
    }
    // 0x803F1E2C: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x803F1E30: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x803F1E34: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_803F1E38:
    // 0x803F1E38: slti        $at, $s2, 0x24
    ctx->r1 = SIGNED(ctx->r18) < 0X24 ? 1 : 0;
    // 0x803F1E3C: bne         $at, $zero, L_803F1DE8
    if (ctx->r1 != 0) {
        // 0x803F1E40: sb          $t1, 0x2($s0)
        MEM_B(0X2, ctx->r16) = ctx->r9;
            goto L_803F1DE8;
    }
    // 0x803F1E40: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
    // 0x803F1E44: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F1E48: addiu       $a0, $a0, -0x2040
    ctx->r4 = ADD32(ctx->r4, -0X2040);
    // 0x803F1E4C: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x803F1E50: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
L_803F1E54:
    // 0x803F1E54: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1E58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1E5C: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1E60: slti        $at, $s2, 0x2A
    ctx->r1 = SIGNED(ctx->r18) < 0X2A ? 1 : 0;
    // 0x803F1E64: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F1E68: mflo        $v1
    ctx->r3 = lo;
    // 0x803F1E6C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1E70: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x803F1E74: addu        $s0, $s3, $v1
    ctx->r16 = ADD32(ctx->r19, ctx->r3);
    // 0x803F1E78: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x803F1E7C: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x803F1E80: nop

    // 0x803F1E84: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x803F1E88: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x803F1E8C: bne         $at, $zero, L_803F1E54
    if (ctx->r1 != 0) {
        // 0x803F1E90: sb          $t5, 0x2($s0)
        MEM_B(0X2, ctx->r16) = ctx->r13;
            goto L_803F1E54;
    }
    // 0x803F1E90: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
    // 0x803F1E94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1E98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1E9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1EA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1EA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1EAC: jr          $ra
    // 0x803F1EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F1EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F1DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1DD4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803F1DD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F1DDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F1DE0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F1DE4: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_803F1DE8:
    // 0x803F1DE8: jal         0x803F2ED4
    // 0x803F1DEC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_803F2ED4(rdram, ctx);
        goto after_0;
    // 0x803F1DEC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x803F1DF0: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1DF4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x803F1DF8: mflo        $t6
    ctx->r14 = lo;
    // 0x803F1DFC: addu        $s0, $s3, $t6
    ctx->r16 = ADD32(ctx->r19, ctx->r14);
    // 0x803F1E00: jal         0x803F30FC
    // 0x803F1E04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_803F30FC(rdram, ctx);
        goto after_1;
    // 0x803F1E04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x803F1E08: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x803F1E0C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x803F1E10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803F1E14: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803F1E18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1E1C: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1E20: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F1E24: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x803F1E28: bgez        $t0, L_803F1E38
    if (SIGNED(ctx->r8) >= 0) {
        // 0x803F1E2C: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_803F1E38;
    }
    // 0x803F1E2C: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x803F1E30: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x803F1E34: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_803F1E38:
    // 0x803F1E38: slti        $at, $s2, 0x24
    ctx->r1 = SIGNED(ctx->r18) < 0X24 ? 1 : 0;
    // 0x803F1E3C: bne         $at, $zero, L_803F1DE8
    if (ctx->r1 != 0) {
        // 0x803F1E40: sb          $t1, 0x2($s0)
        MEM_B(0X2, ctx->r16) = ctx->r9;
            goto L_803F1DE8;
    }
    // 0x803F1E40: sb          $t1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r9;
    // 0x803F1E44: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x803F1E48: addiu       $a0, $a0, -0x2040
    ctx->r4 = ADD32(ctx->r4, -0X2040);
    // 0x803F1E4C: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x803F1E50: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
L_803F1E54:
    // 0x803F1E54: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F1E58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x803F1E5C: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x803F1E60: slti        $at, $s2, 0x2A
    ctx->r1 = SIGNED(ctx->r18) < 0X2A ? 1 : 0;
    // 0x803F1E64: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x803F1E68: mflo        $v1
    ctx->r3 = lo;
    // 0x803F1E6C: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1E70: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x803F1E74: addu        $s0, $s3, $v1
    ctx->r16 = ADD32(ctx->r19, ctx->r3);
    // 0x803F1E78: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x803F1E7C: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x803F1E80: nop

    // 0x803F1E84: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x803F1E88: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x803F1E8C: bne         $at, $zero, L_803F1E54
    if (ctx->r1 != 0) {
        // 0x803F1E90: sb          $t5, 0x2($s0)
        MEM_B(0X2, ctx->r16) = ctx->r13;
            goto L_803F1E54;
    }
    // 0x803F1E90: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
    // 0x803F1E94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803F1E98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F1E9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F1EA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F1EA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F1EA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F1EAC: jr          $ra
    // 0x803F1EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803F1EB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803F1EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1EB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F1EB8: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x803F1EBC: lbu         $t6, 0x53($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X53);
    // 0x803F1EC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803F1EC4: bne         $t6, $zero, L_803F1EE4
    if (ctx->r14 != 0) {
        // 0x803F1EC8: lui         $t8, 0x8040
        ctx->r24 = S32(0X8040 << 16);
            goto L_803F1EE4;
    }
    // 0x803F1EC8: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F1ECC: lbu         $t7, -0x2CF0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X2CF0);
    // 0x803F1ED0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803F1ED4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F1ED8: lbu         $t8, -0x58A8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X58A8);
    // 0x803F1EDC: jr          $ra
    // 0x803F1EE0: sb          $t8, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r24;
    return;
    // 0x803F1EE0: sb          $t8, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r24;
L_803F1EE4:
    // 0x803F1EE4: lbu         $t9, 0x54($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X54);
    // 0x803F1EE8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803F1EEC: bne         $t9, $zero, L_803F1F10
    if (ctx->r25 != 0) {
        // 0x803F1EF0: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_803F1F10;
    }
    // 0x803F1EF0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803F1EF4: lbu         $t0, -0x225C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X225C);
    // 0x803F1EF8: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x803F1EFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803F1F00: lbu         $t1, -0x58A8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X58A8);
    // 0x803F1F04: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803F1F08: jr          $ra
    // 0x803F1F0C: sb          $t1, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r9;
    return;
    // 0x803F1F0C: sb          $t1, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r9;
L_803F1F10:
    // 0x803F1F10: lbu         $t2, -0x2CF0($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X2CF0);
    // 0x803F1F14: lui         $t3, 0x8040
    ctx->r11 = S32(0X8040 << 16);
    // 0x803F1F18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803F1F1C: lbu         $t3, -0x58A8($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X58A8);
    // 0x803F1F20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803F1F24: sb          $t3, -0x3083($at)
    MEM_B(-0X3083, ctx->r1) = ctx->r11;
    // 0x803F1F28: jr          $ra
    // 0x803F1F2C: nop

    return;
    // 0x803F1F2C: nop

;}
RECOMP_FUNC void func_803F1F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1F30: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F1F34: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803F1F38: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x803F1F3C: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803F1F40: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x803F1F44: lb          $t7, 0x2C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2C);
    // 0x803F1F48: sra         $t6, $v1, 24
    ctx->r14 = S32(SIGNED(ctx->r3) >> 24);
    // 0x803F1F4C: bne         $t7, $zero, L_803F1F68
    if (ctx->r15 != 0) {
        // 0x803F1F50: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_803F1F68;
    }
    // 0x803F1F50: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x803F1F54: lb          $t8, 0x38($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X38);
    // 0x803F1F58: nop

    // 0x803F1F5C: subu        $v1, $t8, $v0
    ctx->r3 = SUB32(ctx->r24, ctx->r2);
    // 0x803F1F60: sll         $t9, $v1, 24
    ctx->r25 = S32(ctx->r3 << 24);
    // 0x803F1F64: sra         $v1, $t9, 24
    ctx->r3 = S32(SIGNED(ctx->r25) >> 24);
L_803F1F68:
    // 0x803F1F68: addu        $t1, $a0, $v1
    ctx->r9 = ADD32(ctx->r4, ctx->r3);
    // 0x803F1F6C: lb          $t2, 0x4C($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X4C);
    // 0x803F1F70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F1F74: bne         $t2, $at, L_803F1F84
    if (ctx->r10 != ctx->r1) {
        // 0x803F1F78: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_803F1F84;
    }
    // 0x803F1F78: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x803F1F7C: jr          $ra
    // 0x803F1F80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x803F1F80: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_803F1F84:
    // 0x803F1F84: jr          $ra
    // 0x803F1F88: nop

    return;
    // 0x803F1F88: nop

;}
RECOMP_FUNC void func_803F1F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1F8C: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803F1F90: lw          $t8, 0x1CF0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1CF0);
    // 0x803F1F94: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803F1F98: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x803F1F9C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803F1FA0: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x803F1FA4: lb          $t0, 0x50($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X50);
    // 0x803F1FA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803F1FAC: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x803F1FB0: beq         $at, $zero, L_803F1FC0
    if (ctx->r1 == 0) {
        // 0x803F1FB4: nop
    
            goto L_803F1FC0;
    }
    // 0x803F1FB4: nop

    // 0x803F1FB8: jr          $ra
    // 0x803F1FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x803F1FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803F1FC0:
    // 0x803F1FC0: jr          $ra
    // 0x803F1FC4: nop

    return;
    // 0x803F1FC4: nop

;}
RECOMP_FUNC void func_803F1FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F1FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F1FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F1FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F1FD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F1FD8: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F1FDC: addiu       $a0, $a0, 0x2034
    ctx->r4 = ADD32(ctx->r4, 0X2034);
    // 0x803F1FE0: jal         0x8002931C
    // 0x803F1FE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002931C(rdram, ctx);
        goto after_0;
    // 0x803F1FE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x803F1FE8: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F1FEC: sh          $zero, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = 0;
    // 0x803F1FF0: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x803F1FF4: sh          $zero, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = 0;
    // 0x803F1FF8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803F1FFC: sh          $v1, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r3;
    // 0x803F2000: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x803F2004: nop

    // 0x803F2008: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x803F200C: lb          $t8, 0x54($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X54);
    // 0x803F2010: nop

    // 0x803F2014: sh          $t8, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r24;
    // 0x803F2018: lb          $t9, 0x1F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1F);
    // 0x803F201C: nop

    // 0x803F2020: sh          $t9, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r25;
    // 0x803F2024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F202C: jr          $ra
    // 0x803F2030: nop

    return;
    // 0x803F2030: nop

;}
RECOMP_FUNC void func_803F2034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F2038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F203C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F2040: lh          $t6, 0x44($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X44);
    // 0x803F2044: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x803F2048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F204C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F2050: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x803F2054: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803F2058: lhu         $t8, 0x523C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X523C);
    // 0x803F205C: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x803F2060: lbu         $a1, 0x39($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X39);
    // 0x803F2064: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x803F2068: beq         $t9, $zero, L_803F2094
    if (ctx->r25 == 0) {
        // 0x803F206C: nop
    
            goto L_803F2094;
    }
    // 0x803F206C: nop

    // 0x803F2070: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F2074: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    // 0x803F2078: jal         0x80035770
    // 0x803F207C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803F207C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F2080: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803F2084: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x803F2088: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x803F208C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x803F2090: sh          $t0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r8;
L_803F2094:
    // 0x803F2094: lh          $v0, 0x3A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3A);
    // 0x803F2098: nop

    // 0x803F209C: sltiu       $at, $v0, 0x8
    ctx->r1 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x803F20A0: beq         $at, $zero, L_803F217C
    if (ctx->r1 == 0) {
        // 0x803F20A4: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_803F217C;
    }
    // 0x803F20A4: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803F20A8: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x803F20AC: addu        $at, $at, $t1
    gpr jr_addend_803F20B8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803F20B0: lw          $t1, -0x4F6C($at)
    ctx->r9 = ADD32(ctx->r1, -0X4F6C);
    // 0x803F20B4: nop

    // 0x803F20B8: jr          $t1
    // 0x803F20BC: nop

    switch (jr_addend_803F20B8 >> 2) {
        case 0: goto L_803F20C0; break;
        case 1: goto L_803F20D4; break;
        case 2: goto L_803F20E8; break;
        case 3: goto L_803F20FC; break;
        case 4: goto L_803F2110; break;
        case 5: goto L_803F2124; break;
        case 6: goto L_803F2138; break;
        case 7: goto L_803F2170; break;
        default: switch_error(__func__, 0x803F20B8, 0x803FB094);
    }
    // 0x803F20BC: nop

L_803F20C0:
    // 0x803F20C0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x803F20C4: addiu       $t3, $zero, 0xFFF
    ctx->r11 = ADD32(0, 0XFFF);
    // 0x803F20C8: sh          $t2, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r10;
    // 0x803F20CC: b           L_803F217C
    // 0x803F20D0: sh          $t3, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r11;
        goto L_803F217C;
    // 0x803F20D0: sh          $t3, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r11;
L_803F20D4:
    // 0x803F20D4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F20D8: jal         0x803F218C
    // 0x803F20DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_803F218C(rdram, ctx);
        goto after_1;
    // 0x803F20DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803F20E0: b           L_803F2180
    // 0x803F20E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F20E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F20E8:
    // 0x803F20E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F20EC: jal         0x803F218C
    // 0x803F20F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803F218C(rdram, ctx);
        goto after_2;
    // 0x803F20F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x803F20F4: b           L_803F2180
    // 0x803F20F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F20F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F20FC:
    // 0x803F20FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2100: jal         0x803F218C
    // 0x803F2104: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_803F218C(rdram, ctx);
        goto after_3;
    // 0x803F2104: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x803F2108: b           L_803F2180
    // 0x803F210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2110:
    // 0x803F2110: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2114: jal         0x803F218C
    // 0x803F2118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_803F218C(rdram, ctx);
        goto after_4;
    // 0x803F2118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x803F211C: b           L_803F2180
    // 0x803F2120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F2120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2124:
    // 0x803F2124: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2128: jal         0x803F218C
    // 0x803F212C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_803F218C(rdram, ctx);
        goto after_5;
    // 0x803F212C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_5:
    // 0x803F2130: b           L_803F2180
    // 0x803F2134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F2134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2138:
    // 0x803F2138: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
    // 0x803F213C: lb          $t5, 0x54($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X54);
    // 0x803F2140: lh          $t4, 0x40($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X40);
    // 0x803F2144: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2148: bne         $t4, $t5, L_803F2160
    if (ctx->r12 != ctx->r13) {
        // 0x803F214C: nop
    
            goto L_803F2160;
    }
    // 0x803F214C: nop

    // 0x803F2150: jal         0x803F218C
    // 0x803F2154: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_803F218C(rdram, ctx);
        goto after_6;
    // 0x803F2154: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x803F2158: b           L_803F2180
    // 0x803F215C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F215C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2160:
    // 0x803F2160: jal         0x800294F8
    // 0x803F2164: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    func_800294F8(rdram, ctx);
        goto after_7;
    // 0x803F2164: sb          $zero, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = 0;
    after_7:
    // 0x803F2168: b           L_803F2180
    // 0x803F216C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2180;
    // 0x803F216C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2170:
    // 0x803F2170: addu        $t6, $a3, $a1
    ctx->r14 = ADD32(ctx->r7, ctx->r5);
    // 0x803F2174: jal         0x800294F8
    // 0x803F2178: sb          $zero, 0x3C($t6)
    MEM_B(0X3C, ctx->r14) = 0;
    func_800294F8(rdram, ctx);
        goto after_8;
    // 0x803F2178: sb          $zero, 0x3C($t6)
    MEM_B(0X3C, ctx->r14) = 0;
    after_8:
L_803F217C:
    // 0x803F217C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2180:
    // 0x803F2180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F2184: jr          $ra
    // 0x803F2188: nop

    return;
    // 0x803F2188: nop

;}
RECOMP_FUNC void func_803F2178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2178: sb          $zero, 0x3C($t6)
    MEM_B(0X3C, ctx->r14) = 0;
    // 0x803F217C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F2184: jr          $ra
    // 0x803F2188: nop

    return;
    // 0x803F2188: nop

;}
RECOMP_FUNC void func_803F218C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F218C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2190: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x803F2194: addiu       $a3, $a3, 0x1CF0
    ctx->r7 = ADD32(ctx->r7, 0X1CF0);
    // 0x803F2198: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x803F219C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F21A0: sll         $v1, $t6, 1
    ctx->r3 = S32(ctx->r14 << 1);
    // 0x803F21A4: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F21A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F21AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F21B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F21B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803F21B8: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x803F21BC: lhu         $t7, -0x5418($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5418);
    // 0x803F21C0: lh          $t8, 0x3C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X3C);
    // 0x803F21C4: lui         $t3, 0x8040
    ctx->r11 = S32(0X8040 << 16);
    // 0x803F21C8: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x803F21CC: beq         $at, $zero, L_803F21F4
    if (ctx->r1 == 0) {
        // 0x803F21D0: nop
    
            goto L_803F21F4;
    }
    // 0x803F21D0: nop

    // 0x803F21D4: sh          $zero, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = 0;
    // 0x803F21D8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F21DC: nop

    // 0x803F21E0: lh          $t9, 0x3A($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X3A);
    // 0x803F21E4: nop

    // 0x803F21E8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x803F21EC: b           L_803F224C
    // 0x803F21F0: sh          $t0, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r8;
        goto L_803F224C;
    // 0x803F21F0: sh          $t0, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = ctx->r8;
L_803F21F4:
    // 0x803F21F4: lh          $t1, 0x3E($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X3E);
    // 0x803F21F8: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x803F21FC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803F2200: sh          $t2, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r10;
    // 0x803F2204: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x803F2208: lhu         $t3, -0x5408($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X5408);
    // 0x803F220C: lh          $t4, 0x3E($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X3E);
    // 0x803F2210: nop

    // 0x803F2214: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x803F2218: beq         $at, $zero, L_803F2250
    if (ctx->r1 == 0) {
        // 0x803F221C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F2250;
    }
    // 0x803F221C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2220: lh          $t5, 0x3C($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X3C);
    // 0x803F2224: nop

    // 0x803F2228: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x803F222C: sh          $t6, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r14;
    // 0x803F2230: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x803F2234: jal         0x80035734
    // 0x803F2238: sh          $zero, 0x3E($t7)
    MEM_H(0X3E, ctx->r15) = 0;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x803F2238: sh          $zero, 0x3E($t7)
    MEM_H(0X3E, ctx->r15) = 0;
    after_0:
    // 0x803F223C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2240: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x803F2244: jal         0x803F225C
    // 0x803F2248: nop

    func_803F225C(rdram, ctx);
        goto after_1;
    // 0x803F2248: nop

    after_1:
L_803F224C:
    // 0x803F224C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2250:
    // 0x803F2250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2254: jr          $ra
    // 0x803F2258: nop

    return;
    // 0x803F2258: nop

;}
RECOMP_FUNC void func_803F225C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F225C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F2260: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F2264: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803F2268: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F226C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F2270: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F2274: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F2278: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F227C: addu        $s0, $a0, $t6
    ctx->r16 = ADD32(ctx->r4, ctx->r14);
    // 0x803F2280: lb          $s1, 0x50($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X50);
    // 0x803F2284: lb          $s3, 0x48($s0)
    ctx->r19 = MEM_B(ctx->r16, 0X48);
    // 0x803F2288: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
L_803F228C:
    // 0x803F228C: jal         0x8001CA74
    // 0x803F2290: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x803F2290: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x803F2294: sb          $v0, 0x50($s0)
    MEM_B(0X50, ctx->r16) = ctx->r2;
    // 0x803F2298: lb          $a0, 0x39($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X39);
    // 0x803F229C: nop

    // 0x803F22A0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x803F22A4: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x803F22A8: jal         0x8001CA74
    // 0x803F22AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x803F22AC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x803F22B0: lb          $t8, 0x50($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X50);
    // 0x803F22B4: sb          $v0, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r2;
    // 0x803F22B8: beq         $s1, $t8, L_803F228C
    if (ctx->r17 == ctx->r24) {
        // 0x803F22BC: nop
    
            goto L_803F228C;
    }
    // 0x803F22BC: nop

    // 0x803F22C0: lb          $t9, 0x48($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X48);
    // 0x803F22C4: nop

    // 0x803F22C8: beq         $s3, $t9, L_803F228C
    if (ctx->r19 == ctx->r25) {
        // 0x803F22CC: nop
    
            goto L_803F228C;
    }
    // 0x803F22CC: nop

    // 0x803F22D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F22D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F22D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F22DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F22E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F22E4: jr          $ra
    // 0x803F22E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F22E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F22EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F22EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F22F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x803F22F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x803F22F8: andi        $s6, $a0, 0xFF
    ctx->r22 = ctx->r4 & 0XFF;
    // 0x803F22FC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x803F2300: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x803F2304: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F2308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F230C: lui         $s5, 0x803F
    ctx->r21 = S32(0X803F << 16);
    // 0x803F2310: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x803F2314: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803F2318: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x803F231C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x803F2320: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F2324: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803F2328: addiu       $s5, $s5, 0x23E8
    ctx->r21 = ADD32(ctx->r21, 0X23E8);
    // 0x803F232C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F2330: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2334: or          $s7, $s6, $zero
    ctx->r23 = ctx->r22 | 0;
L_803F2338:
    // 0x803F2338: jal         0x80029354
    // 0x803F233C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F233C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x803F2340: lw          $s1, 0x14($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X14);
    // 0x803F2344: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x803F2348: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x803F234C: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    // 0x803F2350: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x803F2354: sll         $s4, $s0, 2
    ctx->r20 = S32(ctx->r16 << 2);
    // 0x803F2358: addu        $t8, $t7, $s6
    ctx->r24 = ADD32(ctx->r15, ctx->r22);
    // 0x803F235C: lb          $t9, 0x48($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X48);
    // 0x803F2360: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    // 0x803F2364: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803F2368: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x803F236C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x803F2370: addu        $t1, $t0, $s4
    ctx->r9 = ADD32(ctx->r8, ctx->r20);
    // 0x803F2374: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x803F2378: lbu         $a1, -0x537D($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X537D);
    // 0x803F237C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x803F2380: jal         0x8004BCFC
    // 0x803F2384: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004BCFC(rdram, ctx);
        goto after_1;
    // 0x803F2384: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x803F2388: addu        $v0, $fp, $s4
    ctx->r2 = ADD32(ctx->r30, ctx->r20);
    // 0x803F238C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F2390: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F2394: jal         0x8004CD44
    // 0x803F2398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x803F2398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x803F239C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F23A0: sb          $s2, 0x39($s3)
    MEM_B(0X39, ctx->r19) = ctx->r18;
    // 0x803F23A4: andi        $s2, $s0, 0xFF
    ctx->r18 = ctx->r16 & 0XFF;
    // 0x803F23A8: slti        $at, $s2, 0x6
    ctx->r1 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x803F23AC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x803F23B0: bne         $at, $zero, L_803F2338
    if (ctx->r1 != 0) {
        // 0x803F23B4: sb          $s7, 0x38($s3)
        MEM_B(0X38, ctx->r19) = ctx->r23;
            goto L_803F2338;
    }
    // 0x803F23B4: sb          $s7, 0x38($s3)
    MEM_B(0X38, ctx->r19) = ctx->r23;
    // 0x803F23B8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F23BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F23C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F23C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F23C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x803F23CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x803F23D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F23D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F23D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803F23DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803F23E0: jr          $ra
    // 0x803F23E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F23E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F23D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F23D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x803F23D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x803F23D8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x803F23DC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x803F23E0: jr          $ra
    // 0x803F23E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F23E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F23E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F23E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F23EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F23F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F23F4: lb          $v1, 0x38($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X38);
    // 0x803F23F8: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x803F23FC: lb          $a2, 0x39($a0)
    ctx->r6 = MEM_B(ctx->r4, 0X39);
    // 0x803F2400: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x803F2404: lb          $t6, 0x48($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X48);
    // 0x803F2408: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x803F240C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803F2410: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803F2414: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803F2418: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803F241C: lui         $t0, 0x8040
    ctx->r8 = S32(0X8040 << 16);
    // 0x803F2420: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803F2424: lw          $t0, -0x5380($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5380);
    // 0x803F2428: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803F242C: sb          $t0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r8;
    // 0x803F2430: lb          $t2, 0x54($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X54);
    // 0x803F2434: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x803F2438: bne         $t1, $t2, L_803F2448
    if (ctx->r9 != ctx->r10) {
        // 0x803F243C: nop
    
            goto L_803F2448;
    }
    // 0x803F243C: nop

    // 0x803F2440: b           L_803F2454
    // 0x803F2444: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_803F2454;
    // 0x803F2444: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_803F2448:
    // 0x803F2448: lbu         $a1, 0x1D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1D);
    // 0x803F244C: jal         0x8004BCFC
    // 0x803F2450: nop

    func_8004BCFC(rdram, ctx);
        goto after_0;
    // 0x803F2450: nop

    after_0:
L_803F2454:
    // 0x803F2454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F245C: jr          $ra
    // 0x803F2460: nop

    return;
    // 0x803F2460: nop

;}
RECOMP_FUNC void func_803F2464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F246C: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F2470: addiu       $a0, $a0, 0x249C
    ctx->r4 = ADD32(ctx->r4, 0X249C);
    // 0x803F2474: jal         0x800293DC
    // 0x803F2478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F2478: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F247C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F2480: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    // 0x803F2484: jal         0x8004CD44
    // 0x803F2488: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x803F2488: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_1:
    // 0x803F248C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2494: jr          $ra
    // 0x803F2498: nop

    return;
    // 0x803F2498: nop

;}
RECOMP_FUNC void func_803F249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F249C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F24A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F24A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F24A8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F24AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F24B0: lbu         $a1, 0x54($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X54);
    // 0x803F24B4: jal         0x8004BB14
    // 0x803F24B8: nop

    func_8004BB14(rdram, ctx);
        goto after_0;
    // 0x803F24B8: nop

    after_0:
    // 0x803F24BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803F24C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F24C4: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x803F24C8: addiu       $a2, $zero, 0xD8
    ctx->r6 = ADD32(0, 0XD8);
    // 0x803F24CC: jal         0x8004BBB0
    // 0x803F24D0: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    func_8004BBB0(rdram, ctx);
        goto after_1;
    // 0x803F24D0: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    after_1:
    // 0x803F24D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F24D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F24DC: jr          $ra
    // 0x803F24E0: nop

    return;
    // 0x803F24E0: nop

;}
RECOMP_FUNC void func_803F24E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F24E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F24E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F24EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F24F0: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F24F4: jal         0x8004BD64
    // 0x803F24F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803F24F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F24FC: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F2500: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x803F2504: lui         $t7, 0x803E
    ctx->r15 = S32(0X803E << 16);
    // 0x803F2508: addiu       $t7, $t7, -0x7178
    ctx->r15 = ADD32(ctx->r15, -0X7178);
    // 0x803F250C: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803F2510: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x803F2514: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2518: lui         $t0, 0x803F
    ctx->r8 = S32(0X803F << 16);
    // 0x803F251C: addiu       $t0, $t0, 0x2538
    ctx->r8 = ADD32(ctx->r8, 0X2538);
    // 0x803F2520: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    // 0x803F2524: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x803F2528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F252C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2530: jr          $ra
    // 0x803F2534: nop

    return;
    // 0x803F2534: nop

;}
RECOMP_FUNC void func_803F2538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803F253C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803F2540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F2544: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x803F2548: lbu         $t2, 0x38($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X38);
    // 0x803F254C: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x803F2550: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x803F2554: lbu         $t0, 0x50($t3)
    ctx->r8 = MEM_BU(ctx->r11, 0X50);
    // 0x803F2558: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x803F255C: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x803F2560: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x803F2564: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2568: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x803F256C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x803F2570: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803F2574: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803F2578: jal         0x8004CD44
    // 0x803F257C: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F257C: sb          $t2, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r10;
    after_0:
    // 0x803F2580: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x803F2584: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x803F2588: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803F258C: beq         $t2, $zero, L_803F25AC
    if (ctx->r10 == 0) {
        // 0x803F2590: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_803F25AC;
    }
    // 0x803F2590: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F2594: bne         $v1, $t2, L_803F25E4
    if (ctx->r3 != ctx->r10) {
        // 0x803F2598: nop
    
            goto L_803F25E4;
    }
    // 0x803F2598: nop

    // 0x803F259C: lb          $t7, 0x2C($t1)
    ctx->r15 = MEM_B(ctx->r9, 0X2C);
    // 0x803F25A0: nop

    // 0x803F25A4: bne         $v1, $t7, L_803F25E4
    if (ctx->r3 != ctx->r15) {
        // 0x803F25A8: nop
    
            goto L_803F25E4;
    }
    // 0x803F25A8: nop

L_803F25AC:
    // 0x803F25AC: lb          $t8, 0x4C($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X4C);
    // 0x803F25B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x803F25B4: bne         $v1, $t8, L_803F25C8
    if (ctx->r3 != ctx->r24) {
        // 0x803F25B8: addiu       $t4, $zero, 0x210
        ctx->r12 = ADD32(0, 0X210);
            goto L_803F25C8;
    }
    // 0x803F25B8: addiu       $t4, $zero, 0x210
    ctx->r12 = ADD32(0, 0X210);
    // 0x803F25BC: addiu       $t9, $zero, 0x414
    ctx->r25 = ADD32(0, 0X414);
    // 0x803F25C0: b           L_803F25CC
    // 0x803F25C4: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
        goto L_803F25CC;
    // 0x803F25C4: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_803F25C8:
    // 0x803F25C8: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
L_803F25CC:
    // 0x803F25CC: lb          $t5, 0x3C($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X3C);
    // 0x803F25D0: nop

    // 0x803F25D4: bne         $v1, $t5, L_803F2628
    if (ctx->r3 != ctx->r13) {
        // 0x803F25D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F2628;
    }
    // 0x803F25D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F25DC: b           L_803F2624
    // 0x803F25E0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_803F2624;
    // 0x803F25E0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F25E4:
    // 0x803F25E4: lb          $t6, 0x4C($t1)
    ctx->r14 = MEM_B(ctx->r9, 0X4C);
    // 0x803F25E8: addiu       $t8, $zero, 0x414
    ctx->r24 = ADD32(0, 0X414);
    // 0x803F25EC: beq         $t6, $zero, L_803F2604
    if (ctx->r14 == 0) {
        // 0x803F25F0: nop
    
            goto L_803F2604;
    }
    // 0x803F25F0: nop

    // 0x803F25F4: lb          $t7, 0x4D($t1)
    ctx->r15 = MEM_B(ctx->r9, 0X4D);
    // 0x803F25F8: addiu       $t9, $zero, 0x210
    ctx->r25 = ADD32(0, 0X210);
    // 0x803F25FC: bne         $v1, $t7, L_803F260C
    if (ctx->r3 != ctx->r15) {
        // 0x803F2600: nop
    
            goto L_803F260C;
    }
    // 0x803F2600: nop

L_803F2604:
    // 0x803F2604: b           L_803F2610
    // 0x803F2608: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
        goto L_803F2610;
    // 0x803F2608: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_803F260C:
    // 0x803F260C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
L_803F2610:
    // 0x803F2610: lb          $t4, 0x3C($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X3C);
    // 0x803F2614: nop

    // 0x803F2618: bne         $v1, $t4, L_803F2628
    if (ctx->r3 != ctx->r12) {
        // 0x803F261C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803F2628;
    }
    // 0x803F261C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2620: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_803F2624:
    // 0x803F2624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803F2628:
    // 0x803F2628: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F262C: jr          $ra
    // 0x803F2630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803F2630: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803F2634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F263C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2640: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F2644: jal         0x8004BD64
    // 0x803F2648: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x803F2648: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F264C: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F2650: lui         $t8, 0x803F
    ctx->r24 = S32(0X803F << 16);
    // 0x803F2654: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803F2658: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x803F265C: addiu       $t8, $t8, 0x2678
    ctx->r24 = ADD32(ctx->r24, 0X2678);
    // 0x803F2660: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x803F2664: sb          $t7, 0x39($v0)
    MEM_B(0X39, ctx->r2) = ctx->r15;
    // 0x803F2668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F266C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2670: jr          $ra
    // 0x803F2674: nop

    return;
    // 0x803F2674: nop

;}
RECOMP_FUNC void func_803F2678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F267C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2680: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F2684: lbu         $a2, 0x38($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X38);
    // 0x803F2688: lbu         $t0, 0x39($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X39);
    // 0x803F268C: addu        $v0, $v1, $a2
    ctx->r2 = ADD32(ctx->r3, ctx->r6);
    // 0x803F2690: lb          $t6, 0x3C($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3C);
    // 0x803F2694: lb          $t1, 0x5C($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X5C);
    // 0x803F2698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F269C: bne         $t6, $at, L_803F26F0
    if (ctx->r14 != ctx->r1) {
        // 0x803F26A0: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_803F26F0;
    }
    // 0x803F26A0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F26A4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803F26A8: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x803F26AC: lui         $t8, 0x8040
    ctx->r24 = S32(0X8040 << 16);
    // 0x803F26B0: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x803F26B4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x803F26B8: lw          $t8, -0x5858($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5858);
    // 0x803F26BC: sll         $t9, $t0, 3
    ctx->r25 = S32(ctx->r8 << 3);
    // 0x803F26C0: lui         $t3, 0x8040
    ctx->r11 = S32(0X8040 << 16);
    // 0x803F26C4: addiu       $t3, $t3, -0x5398
    ctx->r11 = ADD32(ctx->r11, -0X5398);
    // 0x803F26C8: addu        $t2, $t9, $v0
    ctx->r10 = ADD32(ctx->r25, ctx->r2);
    // 0x803F26CC: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x803F26D0: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x803F26D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F26D8: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x803F26DC: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x803F26E0: jal         0x8004CD44
    // 0x803F26E4: nop

    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x803F26E4: nop

    after_0:
    // 0x803F26E8: b           L_803F26F8
    // 0x803F26EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F26F8;
    // 0x803F26EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26F0:
    // 0x803F26F0: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
    // 0x803F26F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F26F8:
    // 0x803F26F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F26FC: jr          $ra
    // 0x803F2700: nop

    return;
    // 0x803F2700: nop

;}
RECOMP_FUNC void func_803F2704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2708: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F270C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2710: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F2714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F2718: jal         0x80029354
    // 0x803F271C: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803F271C: addiu       $a0, $a0, 0x2758
    ctx->r4 = ADD32(ctx->r4, 0X2758);
    after_0:
    // 0x803F2720: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F2724: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2728: sb          $t6, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r14;
    // 0x803F272C: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x803F2730: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x803F2734: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803F2738: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F273C: lw          $t9, -0x5850($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5850);
    // 0x803F2740: nop

    // 0x803F2744: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x803F2748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F274C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2750: jr          $ra
    // 0x803F2754: nop

    return;
    // 0x803F2754: nop

;}
RECOMP_FUNC void func_803F2748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F274C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2750: jr          $ra
    // 0x803F2754: nop

    return;
    // 0x803F2754: nop

;}
RECOMP_FUNC void func_803F2758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F275C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F2764: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x803F2768: lb          $v1, 0x28($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X28);
    // 0x803F276C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2770: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2774: lb          $a3, 0x54($t6)
    ctx->r7 = MEM_B(ctx->r14, 0X54);
    // 0x803F2778: bne         $v1, $zero, L_803F2798
    if (ctx->r3 != 0) {
        // 0x803F277C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_803F2798;
    }
    // 0x803F277C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803F2780: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2784: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    // 0x803F2788: jal         0x8004BC98
    // 0x803F278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004BC98(rdram, ctx);
        goto after_0;
    // 0x803F278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803F2790: b           L_803F27A4
    // 0x803F2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F27A4;
    // 0x803F2794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2798:
    // 0x803F2798: jal         0x8004BC98
    // 0x803F279C: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    func_8004BC98(rdram, ctx);
        goto after_1;
    // 0x803F279C: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
    after_1:
    // 0x803F27A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F27A4:
    // 0x803F27A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F27A8: jr          $ra
    // 0x803F27AC: nop

    return;
    // 0x803F27AC: nop

;}
RECOMP_FUNC void func_803F27B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F27B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F27B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F27B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F27BC: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x803F27C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F27C4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x803F27C8: jal         0x80029220
    // 0x803F27CC: addiu       $a0, $a0, 0x2804
    ctx->r4 = ADD32(ctx->r4, 0X2804);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x803F27CC: addiu       $a0, $a0, 0x2804
    ctx->r4 = ADD32(ctx->r4, 0X2804);
    after_0:
    // 0x803F27D0: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F27D4: nop

    // 0x803F27D8: sb          $t6, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r14;
    // 0x803F27DC: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x803F27E0: nop

    // 0x803F27E4: sb          $t7, 0x39($v0)
    MEM_B(0X39, ctx->r2) = ctx->r15;
    // 0x803F27E8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803F27EC: nop

    // 0x803F27F0: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
    // 0x803F27F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F27F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F27FC: jr          $ra
    // 0x803F2800: nop

    return;
    // 0x803F2800: nop

;}
RECOMP_FUNC void func_803F2804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803F2808: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803F280C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x803F2810: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x803F2814: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x803F2818: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x803F281C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x803F2820: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x803F2824: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803F2828: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x803F282C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F2830: lb          $s4, 0x38($a0)
    ctx->r20 = MEM_B(ctx->r4, 0X38);
    // 0x803F2834: lb          $t6, 0x39($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X39);
    // 0x803F2838: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803F283C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803F2840: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x803F2844: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x803F2848: lb          $t0, 0x58($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X58);
    // 0x803F284C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x803F2850: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x803F2854: lw          $s0, 0x3C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3C);
    // 0x803F2858: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x803F285C: lbu         $a1, 0x54($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X54);
    // 0x803F2860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2864: bne         $t0, $at, L_803F2910
    if (ctx->r8 != ctx->r1) {
        // 0x803F2868: addu        $s1, $t8, $t9
        ctx->r17 = ADD32(ctx->r24, ctx->r25);
            goto L_803F2910;
    }
    // 0x803F2868: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x803F286C: sll         $s3, $a1, 2
    ctx->r19 = S32(ctx->r5 << 2);
    // 0x803F2870: lui         $s6, 0x8040
    ctx->r22 = S32(0X8040 << 16);
    // 0x803F2874: lui         $s5, 0x8040
    ctx->r21 = S32(0X8040 << 16);
    // 0x803F2878: addiu       $s5, $s5, -0x3C20
    ctx->r21 = ADD32(ctx->r21, -0X3C20);
    // 0x803F287C: addiu       $s6, $s6, -0x3BA0
    ctx->r22 = ADD32(ctx->r22, -0X3BA0);
    // 0x803F2880: subu        $s3, $s3, $a1
    ctx->r19 = SUB32(ctx->r19, ctx->r5);
    // 0x803F2884: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F288C:
    // 0x803F288C: bne         $s4, $zero, L_803F28C0
    if (ctx->r20 != 0) {
        // 0x803F2890: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_803F28C0;
    }
    // 0x803F2890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2894: addu        $t1, $s5, $s3
    ctx->r9 = ADD32(ctx->r21, ctx->r19);
    // 0x803F2898: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x803F289C: lbu         $a3, 0x0($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X0);
    // 0x803F28A0: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28A4: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28A8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803F28AC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F28B0: jal         0x8002F914
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x803F28B8: b           L_803F28E4
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_803F28E4;
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28C0:
    // 0x803F28C0: addu        $t4, $s6, $s3
    ctx->r12 = ADD32(ctx->r22, ctx->r19);
    // 0x803F28C4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803F28C8: lbu         $a3, 0x0($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X0);
    // 0x803F28CC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28D0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F28D8: jal         0x8002F914
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x803F28E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28E4:
    // 0x803F28E4: jal         0x80031B0C
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803F28EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F28F0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F28F4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F28F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F28FC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F2900: bne         $at, $zero, L_803F288C
    if (ctx->r1 != 0) {
        // 0x803F2904: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F288C;
    }
    // 0x803F2904: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2908: b           L_803F2978
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_803F2978;
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2910:
    // 0x803F2910: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x803F2914: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2918: addiu       $t9, $t9, -0x2040
    ctx->r25 = ADD32(ctx->r25, -0X2040);
    // 0x803F291C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x803F2920: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x803F2924: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F292C:
    // 0x803F292C: addu        $t0, $s3, $v0
    ctx->r8 = ADD32(ctx->r19, ctx->r2);
    // 0x803F2930: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x803F2934: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F2938: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F293C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F2940: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F2944: jal         0x8002F914
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x803F294C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2950: jal         0x80031B0C
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803F2958: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F295C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F2960: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F2964: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F2968: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F296C: bne         $at, $zero, L_803F292C
    if (ctx->r1 != 0) {
        // 0x803F2970: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F292C;
    }
    // 0x803F2970: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2974: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2978:
    // 0x803F2978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F297C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803F2980: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803F2984: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803F2988: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803F298C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803F2990: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803F2994: jr          $ra
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F282C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F282C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x803F2830: lb          $s4, 0x38($a0)
    ctx->r20 = MEM_B(ctx->r4, 0X38);
    // 0x803F2834: lb          $t6, 0x39($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X39);
    // 0x803F2838: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803F283C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x803F2840: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x803F2844: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x803F2848: lb          $t0, 0x58($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X58);
    // 0x803F284C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x803F2850: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x803F2854: lw          $s0, 0x3C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X3C);
    // 0x803F2858: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x803F285C: lbu         $a1, 0x54($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X54);
    // 0x803F2860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2864: bne         $t0, $at, L_803F2910
    if (ctx->r8 != ctx->r1) {
        // 0x803F2868: addu        $s1, $t8, $t9
        ctx->r17 = ADD32(ctx->r24, ctx->r25);
            goto L_803F2910;
    }
    // 0x803F2868: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x803F286C: sll         $s3, $a1, 2
    ctx->r19 = S32(ctx->r5 << 2);
    // 0x803F2870: lui         $s6, 0x8040
    ctx->r22 = S32(0X8040 << 16);
    // 0x803F2874: lui         $s5, 0x8040
    ctx->r21 = S32(0X8040 << 16);
    // 0x803F2878: addiu       $s5, $s5, -0x3C20
    ctx->r21 = ADD32(ctx->r21, -0X3C20);
    // 0x803F287C: addiu       $s6, $s6, -0x3BA0
    ctx->r22 = ADD32(ctx->r22, -0X3BA0);
    // 0x803F2880: subu        $s3, $s3, $a1
    ctx->r19 = SUB32(ctx->r19, ctx->r5);
    // 0x803F2884: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F288C:
    // 0x803F288C: bne         $s4, $zero, L_803F28C0
    if (ctx->r20 != 0) {
        // 0x803F2890: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_803F28C0;
    }
    // 0x803F2890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2894: addu        $t1, $s5, $s3
    ctx->r9 = ADD32(ctx->r21, ctx->r19);
    // 0x803F2898: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x803F289C: lbu         $a3, 0x0($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X0);
    // 0x803F28A0: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28A4: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28A8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803F28AC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F28B0: jal         0x8002F914
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x803F28B8: b           L_803F28E4
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_803F28E4;
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28C0:
    // 0x803F28C0: addu        $t4, $s6, $s3
    ctx->r12 = ADD32(ctx->r22, ctx->r19);
    // 0x803F28C4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803F28C8: lbu         $a3, 0x0($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X0);
    // 0x803F28CC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28D0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F28D8: jal         0x8002F914
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x803F28E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28E4:
    // 0x803F28E4: jal         0x80031B0C
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803F28EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F28F0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F28F4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F28F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F28FC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F2900: bne         $at, $zero, L_803F288C
    if (ctx->r1 != 0) {
        // 0x803F2904: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F288C;
    }
    // 0x803F2904: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2908: b           L_803F2978
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_803F2978;
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2910:
    // 0x803F2910: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x803F2914: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2918: addiu       $t9, $t9, -0x2040
    ctx->r25 = ADD32(ctx->r25, -0X2040);
    // 0x803F291C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x803F2920: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x803F2924: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F292C:
    // 0x803F292C: addu        $t0, $s3, $v0
    ctx->r8 = ADD32(ctx->r19, ctx->r2);
    // 0x803F2930: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x803F2934: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F2938: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F293C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F2940: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F2944: jal         0x8002F914
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x803F294C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2950: jal         0x80031B0C
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803F2958: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F295C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F2960: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F2964: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F2968: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F296C: bne         $at, $zero, L_803F292C
    if (ctx->r1 != 0) {
        // 0x803F2970: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F292C;
    }
    // 0x803F2970: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2974: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2978:
    // 0x803F2978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F297C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803F2980: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803F2984: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803F2988: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803F298C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803F2990: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803F2994: jr          $ra
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F288C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F288C:
    // 0x803F288C: bne         $s4, $zero, L_803F28C0
    if (ctx->r20 != 0) {
        // 0x803F2890: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_803F28C0;
    }
    // 0x803F2890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2894: addu        $t1, $s5, $s3
    ctx->r9 = ADD32(ctx->r21, ctx->r19);
    // 0x803F2898: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x803F289C: lbu         $a3, 0x0($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X0);
    // 0x803F28A0: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28A4: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28A8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803F28AC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F28B0: jal         0x8002F914
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x803F28B8: b           L_803F28E4
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_803F28E4;
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28C0:
    // 0x803F28C0: addu        $t4, $s6, $s3
    ctx->r12 = ADD32(ctx->r22, ctx->r19);
    // 0x803F28C4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803F28C8: lbu         $a3, 0x0($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X0);
    // 0x803F28CC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28D0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F28D8: jal         0x8002F914
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x803F28E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28E4:
    // 0x803F28E4: jal         0x80031B0C
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803F28EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F28F0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F28F4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F28F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F28FC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F2900: bne         $at, $zero, L_803F288C
    if (ctx->r1 != 0) {
        // 0x803F2904: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F288C;
    }
    // 0x803F2904: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2908: b           L_803F2978
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_803F2978;
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F2910: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x803F2914: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2918: addiu       $t9, $t9, -0x2040
    ctx->r25 = ADD32(ctx->r25, -0X2040);
    // 0x803F291C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x803F2920: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x803F2924: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F292C:
    // 0x803F292C: addu        $t0, $s3, $v0
    ctx->r8 = ADD32(ctx->r19, ctx->r2);
    // 0x803F2930: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x803F2934: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F2938: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F293C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F2940: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F2944: jal         0x8002F914
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x803F294C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2950: jal         0x80031B0C
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803F2958: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F295C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F2960: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F2964: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F2968: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F296C: bne         $at, $zero, L_803F292C
    if (ctx->r1 != 0) {
        // 0x803F2970: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F292C;
    }
    // 0x803F2970: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2974: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2978:
    // 0x803F2978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F297C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803F2980: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803F2984: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803F2988: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803F298C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803F2990: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803F2994: jr          $ra
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F28A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_803F288C:
    // 0x803F28A8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803F28AC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803F28B0: jal         0x8002F914
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_0;
    // 0x803F28B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x803F28B8: b           L_803F28E4
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
        goto L_803F28E4;
    // 0x803F28BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F28C0: addu        $t4, $s6, $s3
    ctx->r12 = ADD32(ctx->r22, ctx->r19);
    // 0x803F28C4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x803F28C8: lbu         $a3, 0x0($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X0);
    // 0x803F28CC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F28D0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F28D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803F28D8: jal         0x8002F914
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x803F28DC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x803F28E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_803F28E4:
    // 0x803F28E4: jal         0x80031B0C
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x803F28E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803F28EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F28F0: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F28F4: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F28F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F28FC: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F2900: bne         $at, $zero, L_803F288C
    if (ctx->r1 != 0) {
            // 0x803F2904: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    func_803F288C(rdram, ctx);
    return;
    }
    // 0x803F2904: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2908: b           L_803F2978
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_803F2978;
    // 0x803F290C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803F2910: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x803F2914: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2918: addiu       $t9, $t9, -0x2040
    ctx->r25 = ADD32(ctx->r25, -0X2040);
    // 0x803F291C: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x803F2920: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x803F2924: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x803F2928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803F292C:
    // 0x803F292C: addu        $t0, $s3, $v0
    ctx->r8 = ADD32(ctx->r19, ctx->r2);
    // 0x803F2930: lbu         $a3, 0x0($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X0);
    // 0x803F2934: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x803F2938: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x803F293C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803F2940: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803F2944: jal         0x8002F914
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002F914(rdram, ctx);
        goto after_3;
    // 0x803F2948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x803F294C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x803F2950: jal         0x80031B0C
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x803F2954: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803F2958: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x803F295C: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x803F2960: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x803F2964: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x803F2968: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x803F296C: bne         $at, $zero, L_803F292C
    if (ctx->r1 != 0) {
        // 0x803F2970: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_803F292C;
    }
    // 0x803F2970: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x803F2974: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_803F2978:
    // 0x803F2978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803F297C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x803F2980: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x803F2984: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x803F2988: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x803F298C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x803F2990: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x803F2994: jr          $ra
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803F2998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803F299C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F299C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F29A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803F29A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F29A8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x803F29AC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x803F29B0: jal         0x800293DC
    // 0x803F29B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x803F29B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x803F29B8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803F29BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803F29C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803F29C4: jal         0x8004A298
    // 0x803F29C8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x803F29C8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x803F29CC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x803F29D0: lbu         $v0, -0x32A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X32A4);
    // 0x803F29D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803F29D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803F29DC: beq         $v0, $at, L_803F29F4
    if (ctx->r2 == ctx->r1) {
        // 0x803F29E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803F29F4;
    }
    // 0x803F29E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F29E4: beq         $v0, $at, L_803F29F4
    if (ctx->r2 == ctx->r1) {
        // 0x803F29E8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_803F29F4;
    }
    // 0x803F29E8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803F29EC: bne         $v0, $at, L_803F2A08
    if (ctx->r2 != ctx->r1) {
        // 0x803F29F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803F2A08;
    }
    // 0x803F29F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F29F4:
    // 0x803F29F4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x803F29F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x803F29FC: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x803F2A00: sb          $v0, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r2;
    // 0x803F2A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2A08:
    // 0x803F2A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F2A0C: jr          $ra
    // 0x803F2A10: nop

    return;
    // 0x803F2A10: nop

;}
RECOMP_FUNC void func_803F2A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2A14: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2A18: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2A1C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2A20: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2A24: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2A28: lb          $a2, 0x48($t7)
    ctx->r6 = MEM_B(ctx->r15, 0X48);
    // 0x803F2A2C: nop

    // 0x803F2A30: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x803F2A34: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803F2A38: lw          $t9, -0x57DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X57DC);
    // 0x803F2A3C: jr          $ra
    // 0x803F2A40: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x803F2A40: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_803F2A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2A40: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_803F2A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2A4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F2A50: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2A54: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2A58: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2A5C: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F2A60: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2A64: lb          $t0, 0x48($t7)
    ctx->r8 = MEM_B(ctx->r15, 0X48);
    // 0x803F2A68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2A6C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x803F2A70: lbu         $a2, -0x52D8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X52D8);
    // 0x803F2A74: jal         0x8002135C
    // 0x803F2A78: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F2A78: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x803F2A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2A84: jr          $ra
    // 0x803F2A88: nop

    return;
    // 0x803F2A88: nop

;}
RECOMP_FUNC void func_803F2A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2A8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F2A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2A94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F2A98: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2A9C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F2AA0: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x803F2AA4: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F2AA8: lb          $t7, 0x4C($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X4C);
    // 0x803F2AAC: lb          $v0, 0x48($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X48);
    // 0x803F2AB0: bne         $t7, $zero, L_803F2AD8
    if (ctx->r15 != 0) {
        // 0x803F2AB4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_803F2AD8;
    }
    // 0x803F2AB4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F2AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803F2ABC: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x803F2AC0: jal         0x803F2C18
    // 0x803F2AC4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_803F2C18(rdram, ctx);
        goto after_0;
    // 0x803F2AC4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F2AC8: lb          $v0, 0x1F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1F);
    // 0x803F2ACC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803F2AD0: b           L_803F2AE4
    // 0x803F2AD4: lhu         $t9, 0x3A($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X3A);
        goto L_803F2AE4;
    // 0x803F2AD4: lhu         $t9, 0x3A($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X3A);
L_803F2AD8:
    // 0x803F2AD8: sh          $t8, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r24;
    // 0x803F2ADC: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
    // 0x803F2AE0: lhu         $t9, 0x3A($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X3A);
L_803F2AE4:
    // 0x803F2AE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2AE8: bne         $t9, $at, L_803F2B08
    if (ctx->r25 != ctx->r1) {
        // 0x803F2AEC: lui         $a2, 0x8040
        ctx->r6 = S32(0X8040 << 16);
            goto L_803F2B08;
    }
    // 0x803F2AEC: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F2AF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803F2AF4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F2AF8: jal         0x8002135C
    // 0x803F2AFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2AFC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x803F2B00: b           L_803F2B20
    // 0x803F2B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2B20;
    // 0x803F2B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2B08:
    // 0x803F2B08: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x803F2B0C: lbu         $a2, -0x52D8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X52D8);
    // 0x803F2B10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803F2B14: jal         0x8002135C
    // 0x803F2B18: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F2B18: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x803F2B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2B20:
    // 0x803F2B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F2B24: jr          $ra
    // 0x803F2B28: nop

    return;
    // 0x803F2B28: nop

;}
RECOMP_FUNC void func_803F2B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2B2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803F2B30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2B34: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803F2B38: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2B3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2B40: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x803F2B44: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F2B48: lb          $t7, 0x49($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X49);
    // 0x803F2B4C: nop

    // 0x803F2B50: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x803F2B54: lb          $t8, 0x2C($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X2C);
    // 0x803F2B58: nop

    // 0x803F2B5C: bne         $t8, $at, L_803F2B98
    if (ctx->r24 != ctx->r1) {
        // 0x803F2B60: nop
    
            goto L_803F2B98;
    }
    // 0x803F2B60: nop

    // 0x803F2B64: lb          $t9, 0x4D($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X4D);
    // 0x803F2B68: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F2B6C: bne         $t9, $zero, L_803F2B8C
    if (ctx->r25 != 0) {
        // 0x803F2B70: addiu       $t0, $zero, 0xA
        ctx->r8 = ADD32(0, 0XA);
            goto L_803F2B8C;
    }
    // 0x803F2B70: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803F2B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2B78: jal         0x803F2C18
    // 0x803F2B7C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_803F2C18(rdram, ctx);
        goto after_0;
    // 0x803F2B7C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F2B80: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803F2B84: b           L_803F2BCC
    // 0x803F2B88: lhu         $t3, 0x3A($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X3A);
        goto L_803F2BCC;
    // 0x803F2B88: lhu         $t3, 0x3A($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X3A);
L_803F2B8C:
    // 0x803F2B8C: sh          $t0, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r8;
    // 0x803F2B90: b           L_803F2BC8
    // 0x803F2B94: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
        goto L_803F2BC8;
    // 0x803F2B94: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
L_803F2B98:
    // 0x803F2B98: lb          $t1, 0x4C($a2)
    ctx->r9 = MEM_B(ctx->r6, 0X4C);
    // 0x803F2B9C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x803F2BA0: bne         $t1, $zero, L_803F2BB8
    if (ctx->r9 != 0) {
        // 0x803F2BA4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_803F2BB8;
    }
    // 0x803F2BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F2BA8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x803F2BAC: sh          $t2, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r10;
    // 0x803F2BB0: b           L_803F2BC8
    // 0x803F2BB4: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
        goto L_803F2BC8;
    // 0x803F2BB4: sh          $zero, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = 0;
L_803F2BB8:
    // 0x803F2BB8: jal         0x803F2C18
    // 0x803F2BBC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_803F2C18(rdram, ctx);
        goto after_1;
    // 0x803F2BBC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x803F2BC0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x803F2BC4: nop

L_803F2BC8:
    // 0x803F2BC8: lhu         $t3, 0x3A($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X3A);
L_803F2BCC:
    // 0x803F2BCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2BD0: bne         $t3, $at, L_803F2BF0
    if (ctx->r11 != ctx->r1) {
        // 0x803F2BD4: lui         $a2, 0x8040
        ctx->r6 = S32(0X8040 << 16);
            goto L_803F2BF0;
    }
    // 0x803F2BD4: lui         $a2, 0x8040
    ctx->r6 = S32(0X8040 << 16);
    // 0x803F2BD8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803F2BDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F2BE0: jal         0x8002135C
    // 0x803F2BE4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F2BE4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x803F2BE8: b           L_803F2C0C
    // 0x803F2BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2C0C;
    // 0x803F2BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2BF0:
    // 0x803F2BF0: lb          $t4, 0x1F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1F);
    // 0x803F2BF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803F2BF8: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x803F2BFC: lbu         $a2, -0x52D8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X52D8);
    // 0x803F2C00: jal         0x8002135C
    // 0x803F2C04: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x803F2C04: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x803F2C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2C0C:
    // 0x803F2C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803F2C10: jr          $ra
    // 0x803F2C14: nop

    return;
    // 0x803F2C14: nop

;}
RECOMP_FUNC void func_803F2C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2C1C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x803F2C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2C24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803F2C28: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x803F2C2C: lb          $v0, 0x3C($t7)
    ctx->r2 = MEM_B(ctx->r15, 0X3C);
    // 0x803F2C30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803F2C34: beq         $v0, $zero, L_803F2C40
    if (ctx->r2 == 0) {
        // 0x803F2C38: nop
    
            goto L_803F2C40;
    }
    // 0x803F2C38: nop

    // 0x803F2C3C: bne         $v0, $at, L_803F2C5C
    if (ctx->r2 != ctx->r1) {
        // 0x803F2C40: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_803F2C5C;
    }
L_803F2C40:
    // 0x803F2C40: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F2C44: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x803F2C48: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x803F2C4C: jal         0x8006F6BC
    // 0x803F2C50: nop

    func_8006F6BC(rdram, ctx);
        goto after_0;
    // 0x803F2C50: nop

    after_0:
    // 0x803F2C54: b           L_803F2C80
    // 0x803F2C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2C80;
    // 0x803F2C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2C5C:
    // 0x803F2C5C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803F2C60: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x803F2C64: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x803F2C68: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803F2C6C: sh          $t8, 0x38($t9)
    MEM_H(0X38, ctx->r25) = ctx->r24;
    // 0x803F2C70: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x803F2C74: nop

    // 0x803F2C78: sh          $zero, 0x3A($t0)
    MEM_H(0X3A, ctx->r8) = 0;
    // 0x803F2C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2C80:
    // 0x803F2C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2C84: jr          $ra
    // 0x803F2C88: nop

    return;
    // 0x803F2C88: nop

;}
RECOMP_FUNC void func_803F2C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2C94: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2C98: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2C9C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2CA0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F2CA4: addu        $a2, $v0, $v1
    ctx->r6 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2CA8: lb          $t7, 0x4C($a2)
    ctx->r15 = MEM_B(ctx->r6, 0X4C);
    // 0x803F2CAC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803F2CB0: bne         $t7, $zero, L_803F2CF0
    if (ctx->r15 != 0) {
        // 0x803F2CB4: nop
    
            goto L_803F2CF0;
    }
    // 0x803F2CB4: nop

    // 0x803F2CB8: lb          $t8, 0x3C($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X3C);
    // 0x803F2CBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2CC0: bne         $t8, $at, L_803F2CE4
    if (ctx->r24 != ctx->r1) {
        // 0x803F2CC4: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_803F2CE4;
    }
    // 0x803F2CC4: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803F2CC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F2CCC: jal         0x8006F6BC
    // 0x803F2CD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8006F6BC(rdram, ctx);
        goto after_0;
    // 0x803F2CD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803F2CD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803F2CD8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2CDC: b           L_803F2CFC
    // 0x803F2CE0: lhu         $t1, 0x3A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X3A);
        goto L_803F2CFC;
    // 0x803F2CE0: lhu         $t1, 0x3A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X3A);
L_803F2CE4:
    // 0x803F2CE4: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x803F2CE8: b           L_803F2CF8
    // 0x803F2CEC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_803F2CF8;
    // 0x803F2CEC: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F2CF0:
    // 0x803F2CF0: sh          $t0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r8;
    // 0x803F2CF4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_803F2CF8:
    // 0x803F2CF8: lhu         $t1, 0x3A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X3A);
L_803F2CFC:
    // 0x803F2CFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2D00: bne         $t1, $at, L_803F2D20
    if (ctx->r9 != ctx->r1) {
        // 0x803F2D04: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F2D20;
    }
    // 0x803F2D04: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2D08: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2D0C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F2D10: jal         0x8002135C
    // 0x803F2D14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2D14: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x803F2D18: b           L_803F2D30
    // 0x803F2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2D30;
    // 0x803F2D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2D20:
    // 0x803F2D20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x803F2D24: jal         0x8002135C
    // 0x803F2D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x803F2D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x803F2D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2D30:
    // 0x803F2D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2D34: jr          $ra
    // 0x803F2D38: nop

    return;
    // 0x803F2D38: nop

;}
RECOMP_FUNC void func_803F2D3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2D44: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2D48: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2D4C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2D50: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F2D54: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2D58: lb          $t8, 0x58($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X58);
    // 0x803F2D5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2D60: bne         $t8, $at, L_803F2D80
    if (ctx->r24 != ctx->r1) {
        // 0x803F2D64: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F2D80;
    }
    // 0x803F2D64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2D68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2D6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2D70: jal         0x8002135C
    // 0x803F2D74: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F2D74: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    after_0:
    // 0x803F2D78: b           L_803F2D90
    // 0x803F2D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2D90;
    // 0x803F2D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2D80:
    // 0x803F2D80: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2D84: jal         0x8002135C
    // 0x803F2D88: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2D88: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_1:
    // 0x803F2D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2D90:
    // 0x803F2D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2D94: jr          $ra
    // 0x803F2D98: nop

    return;
    // 0x803F2D98: nop

;}
RECOMP_FUNC void func_803F2D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2DA4: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2DA8: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2DAC: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2DB0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F2DB4: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2DB8: lb          $t8, 0x58($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X58);
    // 0x803F2DBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2DC0: bne         $t8, $at, L_803F2DE0
    if (ctx->r24 != ctx->r1) {
        // 0x803F2DC4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F2DE0;
    }
    // 0x803F2DC4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2DC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2DCC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2DD0: jal         0x8002135C
    // 0x803F2DD4: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F2DD4: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_0:
    // 0x803F2DD8: b           L_803F2DF0
    // 0x803F2DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2DF0;
    // 0x803F2DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2DE0:
    // 0x803F2DE0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2DE4: jal         0x8002135C
    // 0x803F2DE8: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2DE8: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    after_1:
    // 0x803F2DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2DF0:
    // 0x803F2DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2DF4: jr          $ra
    // 0x803F2DF8: nop

    return;
    // 0x803F2DF8: nop

;}
RECOMP_FUNC void func_803F2DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2E04: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2E08: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2E0C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2E14: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2E18: lb          $t8, 0x44($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X44);
    // 0x803F2E1C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F2E20: bne         $t8, $at, L_803F2E48
    if (ctx->r24 != ctx->r1) {
        // 0x803F2E24: addiu       $t0, $zero, 0x21F
        ctx->r8 = ADD32(0, 0X21F);
            goto L_803F2E48;
    }
    // 0x803F2E24: addiu       $t0, $zero, 0x21F
    ctx->r8 = ADD32(0, 0X21F);
    // 0x803F2E28: addiu       $t9, $zero, 0x220
    ctx->r25 = ADD32(0, 0X220);
    // 0x803F2E2C: sh          $t9, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r25;
    // 0x803F2E30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2E34: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2E38: jal         0x8002135C
    // 0x803F2E3C: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F2E3C: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    after_0:
    // 0x803F2E40: b           L_803F2E60
    // 0x803F2E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2E60;
    // 0x803F2E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2E48:
    // 0x803F2E48: sh          $t0, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r8;
    // 0x803F2E4C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2E50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2E54: jal         0x8002135C
    // 0x803F2E58: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2E58: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x803F2E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2E60:
    // 0x803F2E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2E64: jr          $ra
    // 0x803F2E68: nop

    return;
    // 0x803F2E68: nop

;}
RECOMP_FUNC void func_803F2E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2E6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2E70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2E74: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x803F2E78: lbu         $v1, 0x71($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X71);
    // 0x803F2E7C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x803F2E80: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x803F2E84: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x803F2E88: lb          $t8, 0x44($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X44);
    // 0x803F2E8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803F2E90: bne         $t8, $at, L_803F2EB0
    if (ctx->r24 != ctx->r1) {
        // 0x803F2E94: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F2EB0;
    }
    // 0x803F2E94: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2E98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803F2E9C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2EA0: jal         0x8002135C
    // 0x803F2EA4: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x803F2EA4: addiu       $a2, $zero, 0x65
    ctx->r6 = ADD32(0, 0X65);
    after_0:
    // 0x803F2EA8: b           L_803F2EC0
    // 0x803F2EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803F2EC0;
    // 0x803F2EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2EB0:
    // 0x803F2EB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x803F2EB4: jal         0x8002135C
    // 0x803F2EB8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x803F2EB8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x803F2EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803F2EC0:
    // 0x803F2EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2EC4: jr          $ra
    // 0x803F2EC8: nop

    return;
    // 0x803F2EC8: nop

;}
RECOMP_FUNC void func_803F2ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2ECC: jr          $ra
    // 0x803F2ED0: nop

    return;
    // 0x803F2ED0: nop

;}
RECOMP_FUNC void func_803F2ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F2ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2EDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F2EE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F2EE4: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x803F2EE8: jal         0x803F2F44
    // 0x803F2EEC: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    func_803F2F44(rdram, ctx);
        goto after_0;
    // 0x803F2EEC: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F2EF0: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F2EF4: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F2EF8: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x803F2EFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F2F00: lhu         $t7, -0x1FC0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1FC0);
    // 0x803F2F04: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x803F2F08: subu        $a0, $v0, $t7
    ctx->r4 = SUB32(ctx->r2, ctx->r15);
    // 0x803F2F0C: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x803F2F10: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F2F14: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x803F2F18: lbu         $t9, -0x53F0($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X53F0);
    // 0x803F2F1C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F2F20: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    // 0x803F2F24: mflo        $t8
    ctx->r24 = lo;
    // 0x803F2F28: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x803F2F2C: jal         0x8001D4C0
    // 0x803F2F30: nop

    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x803F2F30: nop

    after_1:
    // 0x803F2F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F2F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F2F3C: jr          $ra
    // 0x803F2F40: nop

    return;
    // 0x803F2F40: nop

;}
RECOMP_FUNC void func_803F2F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2F44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F2F48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F2F4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F2F50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F2F54: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x803F2F58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F2F5C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F2F60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F2F64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F2F68:
    // 0x803F2F68: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x803F2F6C: jal         0x803F2FA8
    // 0x803F2F70: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803F2FA8(rdram, ctx);
        goto after_0;
    // 0x803F2F70: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x803F2F74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F2F78: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x803F2F7C: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x803F2F80: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803F2F84: bne         $at, $zero, L_803F2F68
    if (ctx->r1 != 0) {
        // 0x803F2F88: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_803F2F68;
    }
    // 0x803F2F88: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x803F2F8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F2F90: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x803F2F94: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2F98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F2F9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F2FA0: jr          $ra
    // 0x803F2FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F2FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F2FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F2FA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F2FAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F2FB0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F2FB4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F2FB8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803F2FBC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x803F2FC0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x803F2FC4: jal         0x8006F224
    // 0x803F2FC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006F224(rdram, ctx);
        goto after_0;
    // 0x803F2FC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x803F2FCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803F2FD0: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x803F2FD4: jal         0x8004DE44
    // 0x803F2FD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004DE44(rdram, ctx);
        goto after_1;
    // 0x803F2FD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x803F2FDC: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F2FE0: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x803F2FE4: beq         $t8, $zero, L_803F3004
    if (ctx->r24 == 0) {
        // 0x803F2FE8: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_803F3004;
    }
    // 0x803F2FE8: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x803F2FEC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F2FF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F2FF4: jal         0x803F3044
    // 0x803F2FF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_803F3044(rdram, ctx);
        goto after_2;
    // 0x803F2FF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x803F2FFC: b           L_803F3034
    // 0x803F3000: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_803F3034;
    // 0x803F3000: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3004:
    // 0x803F3004: beq         $t0, $zero, L_803F3024
    if (ctx->r8 == 0) {
        // 0x803F3008: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F3024;
    }
    // 0x803F3008: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F300C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F3010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803F3014: jal         0x803F3044
    // 0x803F3018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_803F3044(rdram, ctx);
        goto after_3;
    // 0x803F3018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x803F301C: b           L_803F3034
    // 0x803F3020: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_803F3034;
    // 0x803F3020: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3024:
    // 0x803F3024: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F3028: jal         0x803F3044
    // 0x803F302C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F3044(rdram, ctx);
        goto after_4;
    // 0x803F302C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x803F3030: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3034:
    // 0x803F3034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F303C: jr          $ra
    // 0x803F3040: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x803F3040: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_803F3044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F3044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F3048: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x803F304C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x803F3050: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x803F3054: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x803F3058: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803F305C: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x803F3060: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F3064: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F3068: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x803F306C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F3070: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x803F3074: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_803F3078:
    // 0x803F3078: jal         0x8004DE44
    // 0x803F307C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DE44(rdram, ctx);
        goto after_0;
    // 0x803F307C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x803F3080: multu       $s3, $v0
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F3084: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F3088: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x803F308C: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x803F3090: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803F3094: mflo        $t7
    ctx->r15 = lo;
    // 0x803F3098: addu        $s1, $s1, $t7
    ctx->r17 = ADD32(ctx->r17, ctx->r15);
    // 0x803F309C: bne         $at, $zero, L_803F3078
    if (ctx->r1 != 0) {
        // 0x803F30A0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F3078;
    }
    // 0x803F30A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F30A4: lbu         $s3, 0x33($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X33);
    // 0x803F30A8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x803F30AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_803F30B0:
    // 0x803F30B0: jal         0x8004DE44
    // 0x803F30B4: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DE44(rdram, ctx);
        goto after_1;
    // 0x803F30B4: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_1:
    // 0x803F30B8: multu       $s3, $v0
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803F30BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F30C0: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x803F30C4: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x803F30C8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803F30CC: mflo        $t9
    ctx->r25 = lo;
    // 0x803F30D0: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
    // 0x803F30D4: bne         $at, $zero, L_803F30B0
    if (ctx->r1 != 0) {
        // 0x803F30D8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_803F30B0;
    }
    // 0x803F30D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x803F30DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F30E0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x803F30E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x803F30E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x803F30EC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x803F30F0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x803F30F4: jr          $ra
    // 0x803F30F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F30F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F30FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F30FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803F3100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F3104: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803F3108: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x803F310C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x803F3110: jal         0x803F316C
    // 0x803F3114: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    func_803F316C(rdram, ctx);
        goto after_0;
    // 0x803F3114: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x803F3118: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x803F311C: lui         $t7, 0x8040
    ctx->r15 = S32(0X8040 << 16);
    // 0x803F3120: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x803F3124: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803F3128: lhu         $t7, -0x1F68($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1F68);
    // 0x803F312C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x803F3130: subu        $a0, $v0, $t7
    ctx->r4 = SUB32(ctx->r2, ctx->r15);
    // 0x803F3134: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x803F3138: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x803F313C: addu        $t9, $t9, $a3
    ctx->r25 = ADD32(ctx->r25, ctx->r7);
    // 0x803F3140: lbu         $t9, -0x53C4($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X53C4);
    // 0x803F3144: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803F3148: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    // 0x803F314C: mflo        $t8
    ctx->r24 = lo;
    // 0x803F3150: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x803F3154: jal         0x8001D4C0
    // 0x803F3158: nop

    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x803F3158: nop

    after_1:
    // 0x803F315C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803F3164: jr          $ra
    // 0x803F3168: nop

    return;
    // 0x803F3168: nop

;}
RECOMP_FUNC void func_803F316C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F316C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F3170: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803F3174: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803F3178: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803F317C: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x803F3180: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803F3184: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F3188: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x803F318C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803F3190:
    // 0x803F3190: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x803F3194: jal         0x803F31D0
    // 0x803F3198: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_803F31D0(rdram, ctx);
        goto after_0;
    // 0x803F3198: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x803F319C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803F31A0: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x803F31A4: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x803F31A8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x803F31AC: bne         $at, $zero, L_803F3190
    if (ctx->r1 != 0) {
        // 0x803F31B0: addu        $s1, $s1, $v0
        ctx->r17 = ADD32(ctx->r17, ctx->r2);
            goto L_803F3190;
    }
    // 0x803F31B0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x803F31B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803F31B8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x803F31BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803F31C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803F31C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803F31C8: jr          $ra
    // 0x803F31CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803F31CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803F31D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803F31D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803F31D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803F31D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803F31DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803F31E0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x803F31E4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x803F31E8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x803F31EC: jal         0x8006F224
    // 0x803F31F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006F224(rdram, ctx);
        goto after_0;
    // 0x803F31F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x803F31F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x803F31F8: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x803F31FC: jal         0x8004DE44
    // 0x803F3200: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004DE44(rdram, ctx);
        goto after_1;
    // 0x803F3200: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x803F3204: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x803F3208: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x803F320C: beq         $t8, $zero, L_803F322C
    if (ctx->r24 == 0) {
        // 0x803F3210: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_803F322C;
    }
    // 0x803F3210: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803F3214: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F3218: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x803F321C: jal         0x803F3290
    // 0x803F3220: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_803F3290(rdram, ctx);
        goto after_2;
    // 0x803F3220: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x803F3224: b           L_803F3280
    // 0x803F3228: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_803F3280;
    // 0x803F3228: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F322C:
    // 0x803F322C: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x803F3230: beq         $t9, $zero, L_803F3250
    if (ctx->r25 == 0) {
        // 0x803F3234: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_803F3250;
    }
    // 0x803F3234: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x803F3238: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F323C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803F3240: jal         0x803F3290
    // 0x803F3244: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_803F3290(rdram, ctx);
        goto after_3;
    // 0x803F3244: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x803F3248: b           L_803F3280
    // 0x803F324C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_803F3280;
    // 0x803F324C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3250:
    // 0x803F3250: beq         $t0, $zero, L_803F3270
    if (ctx->r8 == 0) {
        // 0x803F3254: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_803F3270;
    }
    // 0x803F3254: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F3258: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x803F325C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F3260: jal         0x803F3290
    // 0x803F3264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_803F3290(rdram, ctx);
        goto after_4;
    // 0x803F3264: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x803F3268: b           L_803F3280
    // 0x803F326C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_803F3280;
    // 0x803F326C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3270:
    // 0x803F3270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803F3274: jal         0x803F3290
    // 0x803F3278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_803F3290(rdram, ctx);
        goto after_5;
    // 0x803F3278: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x803F327C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_803F3280:
    // 0x803F3280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803F3284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803F3288: jr          $ra
    // 0x803F328C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x803F328C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
