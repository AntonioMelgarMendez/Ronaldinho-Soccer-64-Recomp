#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803A5240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5240: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803A5244: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x803A5248: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803A524C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x803A5250: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x803A5254: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x803A5258: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803A525C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x803A5260: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x803A5264: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x803A5268: beq         $at, $zero, L_803A52CC
    if (ctx->r1 == 0) {
        // 0x803A526C: sra         $a0, $t6, 16
        ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
            goto L_803A52CC;
    }
    // 0x803A526C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A5270: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803A5274: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A5278: addu        $at, $at, $t1
    gpr jr_addend_803A5284 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803A527C: lw          $t1, 0x7568($at)
    ctx->r9 = ADD32(ctx->r1, 0X7568);
    // 0x803A5280: nop

    // 0x803A5284: jr          $t1
    // 0x803A5288: nop

    switch (jr_addend_803A5284 >> 2) {
        case 0: goto L_803A528C; break;
        case 1: goto L_803A52AC; break;
        case 2: goto L_803A52AC; break;
        case 3: goto L_803A52CC; break;
        case 4: goto L_803A528C; break;
        case 5: goto L_803A52AC; break;
        default: switch_error(__func__, 0x803A5284, 0x803A7568);
    }
    // 0x803A5288: nop

L_803A528C:
    // 0x803A528C: sll         $t2, $a0, 3
    ctx->r10 = S32(ctx->r4 << 3);
    // 0x803A5290: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x803A5294: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x803A5298: lui         $t4, 0x803A
    ctx->r12 = S32(0X803A << 16);
    // 0x803A529C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803A52A0: lbu         $t4, 0x74A0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X74A0);
    // 0x803A52A4: b           L_803A52CC
    // 0x803A52A8: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
        goto L_803A52CC;
    // 0x803A52A8: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
L_803A52AC:
    // 0x803A52AC: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x803A52B0: addu        $t5, $t5, $a0
    ctx->r13 = ADD32(ctx->r13, ctx->r4);
    // 0x803A52B4: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x803A52B8: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A52BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A52C0: lbu         $t7, 0x74D0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X74D0);
    // 0x803A52C4: nop

    // 0x803A52C8: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
L_803A52CC:
    // 0x803A52CC: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x803A52D0: jr          $ra
    // 0x803A52D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803A52D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x803A52D8: nop

    // 0x803A52DC: nop

;}
RECOMP_FUNC void func_803A52E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A52E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A52E4: lhu         $t7, 0x1E($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1E);
    // 0x803A52E8: addiu       $t6, $zero, -0xC0
    ctx->r14 = ADD32(0, -0XC0);
    // 0x803A52EC: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x803A52F0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x803A52F4: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x803A52F8: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x803A52FC: lh          $v1, 0x78A0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X78A0);
    // 0x803A5300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A5304: sh          $v1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r3;
    // 0x803A5308: jr          $ra
    // 0x803A530C: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    return;
    // 0x803A530C: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
;}
RECOMP_FUNC void func_803A5310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A531C: lh          $a0, 0x1E($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X1E);
    // 0x803A5320: jal         0x803A5AB4
    // 0x803A5324: nop

    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A5324: nop

    after_0:
    // 0x803A5328: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A532C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5330: jal         0x803A5990
    // 0x803A5334: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_803A5990(rdram, ctx);
        goto after_1;
    // 0x803A5334: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x803A5338: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x803A533C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x803A5340: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803A5344: lhu         $t8, -0x6B68($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X6B68);
    // 0x803A5348: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x803A534C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A5350: sh          $t8, 0x12($t9)
    MEM_H(0X12, ctx->r25) = ctx->r24;
    // 0x803A5354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A535C: jr          $ra
    // 0x803A5360: nop

    return;
    // 0x803A5360: nop

;}
RECOMP_FUNC void func_803A5364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5364: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A536C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5370: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A5374: lh          $a0, 0x1E($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X1E);
    // 0x803A5378: jal         0x803A5AB4
    // 0x803A537C: nop

    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A537C: nop

    after_0:
    // 0x803A5380: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A5384: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5388: jal         0x803A5990
    // 0x803A538C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_803A5990(rdram, ctx);
        goto after_1;
    // 0x803A538C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x803A5390: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803A5394: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x803A5398: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x803A539C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A53A0: lh          $a2, 0x1E($t9)
    ctx->r6 = MEM_H(ctx->r25, 0X1E);
    // 0x803A53A4: jal         0x80039E94
    // 0x803A53A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80039E94(rdram, ctx);
        goto after_2;
    // 0x803A53A8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
    // 0x803A53AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A53B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A53B4: jr          $ra
    // 0x803A53B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A53B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A53BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A53BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A53C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A53C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A53C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A53CC: lh          $a0, 0x1E($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X1E);
    // 0x803A53D0: jal         0x803A5AB4
    // 0x803A53D4: nop

    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A53D4: nop

    after_0:
    // 0x803A53D8: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A53DC: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A53E0: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x803A53E4: jal         0x803A5A24
    // 0x803A53E8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_803A5A24(rdram, ctx);
        goto after_1;
    // 0x803A53E8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x803A53EC: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x803A53F0: jal         0x803A5A6C
    // 0x803A53F4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_803A5A6C(rdram, ctx);
        goto after_2;
    // 0x803A53F4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x803A53F8: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x803A53FC: jal         0x8006E7F0
    // 0x803A5400: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_8006E7F0(rdram, ctx);
        goto after_3;
    // 0x803A5400: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_3:
    // 0x803A5404: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x803A5408: bltz        $v0, L_803A5424
    if (SIGNED(ctx->r2) < 0) {
        // 0x803A540C: sll         $t9, $v0, 4
        ctx->r25 = S32(ctx->r2 << 4);
            goto L_803A5424;
    }
    // 0x803A540C: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x803A5410: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x803A5414: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803A5418: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x803A541C: lbu         $v1, 0x5330($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5330);
    // 0x803A5420: nop

L_803A5424:
    // 0x803A5424: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803A5428: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803A542C: lhu         $a1, 0x1C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1C);
    // 0x803A5430: lhu         $a3, 0x1E($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X1E);
    // 0x803A5434: jal         0x800392F4
    // 0x803A5438: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    func_800392F4(rdram, ctx);
        goto after_4;
    // 0x803A5438: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    after_4:
    // 0x803A543C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A5444: jr          $ra
    // 0x803A5448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A5448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A544C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A544C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5454: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5458: lb          $a0, 0x1F($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X1F);
    // 0x803A545C: jal         0x803A54D4
    // 0x803A5460: nop

    func_803A54D4(rdram, ctx);
        goto after_0;
    // 0x803A5460: nop

    after_0:
    // 0x803A5464: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x803A5468: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x803A546C: lbu         $a2, -0x6B04($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6B04);
    // 0x803A5470: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A5474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A5478: jal         0x8002B608
    // 0x803A547C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x803A547C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803A5480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5488: jr          $ra
    // 0x803A548C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A548C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A5490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5498: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A549C: lb          $a0, 0x1F($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X1F);
    // 0x803A54A0: jal         0x803A54D4
    // 0x803A54A4: nop

    func_803A54D4(rdram, ctx);
        goto after_0;
    // 0x803A54A4: nop

    after_0:
    // 0x803A54A8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803A54AC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x803A54B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A54B4: lw          $t7, -0x6AFC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6AFC);
    // 0x803A54B8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803A54BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A54C0: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x803A54C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A54C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A54CC: jr          $ra
    // 0x803A54D0: nop

    return;
    // 0x803A54D0: nop

;}
RECOMP_FUNC void func_803A54D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A54D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A54D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A54DC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A54E0: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x803A54E4: jal         0x803A5AB4
    // 0x803A54E8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A54E8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    after_0:
    // 0x803A54EC: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803A54F0: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803A54F4: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x803A54F8: jal         0x803A59C8
    // 0x803A54FC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_803A59C8(rdram, ctx);
        goto after_1;
    // 0x803A54FC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x803A5500: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x803A5504: jal         0x803A5990
    // 0x803A5508: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    func_803A5990(rdram, ctx);
        goto after_2;
    // 0x803A5508: sb          $v0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r2;
    after_2:
    // 0x803A550C: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803A5510: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803A5514: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x803A5518: jal         0x8003CF90
    // 0x803A551C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8003CF90(rdram, ctx);
        goto after_3;
    // 0x803A551C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_3:
    // 0x803A5520: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803A5524: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803A5528: bltz        $v0, L_803A556C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803A552C: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_803A556C;
    }
    // 0x803A552C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x803A5530: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x803A5534: jal         0x8003CFEC
    // 0x803A5538: sb          $t0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r8;
    func_8003CFEC(rdram, ctx);
        goto after_4;
    // 0x803A5538: sb          $t0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r8;
    after_4:
    // 0x803A553C: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803A5540: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803A5544: lb          $a0, 0x1E($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1E);
    // 0x803A5548: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803A554C: beq         $v0, $at, L_803A5564
    if (ctx->r2 == ctx->r1) {
        // 0x803A5550: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_803A5564;
    }
    // 0x803A5550: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x803A5554: jal         0x80042B40
    // 0x803A5558: nop

    func_80042B40(rdram, ctx);
        goto after_5;
    // 0x803A5558: nop

    after_5:
    // 0x803A555C: b           L_803A5580
    // 0x803A5560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5580;
    // 0x803A5560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5564:
    // 0x803A5564: b           L_803A557C
    // 0x803A5568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803A557C;
    // 0x803A5568: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A556C:
    // 0x803A556C: lb          $a0, 0x1C($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1C);
    // 0x803A5570: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x803A5574: jal         0x80042A8C
    // 0x803A5578: nop

    func_80042A8C(rdram, ctx);
        goto after_6;
    // 0x803A5578: nop

    after_6:
L_803A557C:
    // 0x803A557C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5580:
    // 0x803A5580: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A5584: jr          $ra
    // 0x803A5588: nop

    return;
    // 0x803A5588: nop

;}
RECOMP_FUNC void func_803A558C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A558C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803A5590: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A5594: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803A5598: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803A559C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x803A55A0: lh          $a0, 0x1E($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X1E);
    // 0x803A55A4: jal         0x803A5AB4
    // 0x803A55A8: nop

    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A55A8: nop

    after_0:
    // 0x803A55AC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x803A55B0: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A55B4: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803A55B8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A55BC: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803A55C0: jal         0x803A5A24
    // 0x803A55C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_803A5A24(rdram, ctx);
        goto after_1;
    // 0x803A55C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x803A55C8: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803A55CC: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A55D0: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x803A55D4: jal         0x803A5A6C
    // 0x803A55D8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_803A5A6C(rdram, ctx);
        goto after_2;
    // 0x803A55D8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x803A55DC: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803A55E0: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A55E4: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x803A55E8: jal         0x803A5934
    // 0x803A55EC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_803A5934(rdram, ctx);
        goto after_3;
    // 0x803A55EC: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_3:
    // 0x803A55F0: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803A55F4: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A55F8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x803A55FC: jal         0x803A59C8
    // 0x803A5600: sb          $v0, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r2;
    func_803A59C8(rdram, ctx);
        goto after_4;
    // 0x803A5600: sb          $v0, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r2;
    after_4:
    // 0x803A5604: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803A5608: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803A560C: lb          $a0, 0x29($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X29);
    // 0x803A5610: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x803A5614: jal         0x80042238
    // 0x803A5618: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    func_80042238(rdram, ctx);
        goto after_5;
    // 0x803A5618: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    after_5:
    // 0x803A561C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803A5620: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5624: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x803A5628: jal         0x803A5934
    // 0x803A562C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_803A5934(rdram, ctx);
        goto after_6;
    // 0x803A562C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_6:
    // 0x803A5630: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x803A5634: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5638: jal         0x803A59C8
    // 0x803A563C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_803A59C8(rdram, ctx);
        goto after_7;
    // 0x803A563C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_7:
    // 0x803A5640: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x803A5644: jal         0x8004D710
    // 0x803A5648: nop

    func_8004D710(rdram, ctx);
        goto after_8;
    // 0x803A5648: nop

    after_8:
    // 0x803A564C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x803A5650: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803A5654: jal         0x80039C50
    // 0x803A5658: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80039C50(rdram, ctx);
        goto after_9;
    // 0x803A5658: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_9:
    // 0x803A565C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x803A5660: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803A5664: lhu         $v0, 0x1E($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X1E);
    // 0x803A5668: lh          $a3, 0x14($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X14);
    // 0x803A566C: lh          $t1, 0x18($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X18);
    // 0x803A5670: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x803A5674: ori         $at, $at, 0xFF88
    ctx->r1 = ctx->r1 | 0XFF88;
    // 0x803A5678: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x803A567C: addiu       $a3, $a3, 0x72
    ctx->r7 = ADD32(ctx->r7, 0X72);
    // 0x803A5680: addu        $t2, $t1, $t6
    ctx->r10 = ADD32(ctx->r9, ctx->r14);
    // 0x803A5684: addiu       $t3, $t2, 0x3A
    ctx->r11 = ADD32(ctx->r10, 0X3A);
    // 0x803A5688: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x803A568C: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x803A5690: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x803A5694: lbu         $a1, 0x2D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2D);
    // 0x803A5698: lbu         $a2, 0x2C($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2C);
    // 0x803A569C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x803A56A0: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803A56A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803A56A8: jal         0x80030A60
    // 0x803A56AC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_80030A60(rdram, ctx);
        goto after_10;
    // 0x803A56AC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_10:
    // 0x803A56B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A56B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803A56B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803A56BC: jr          $ra
    // 0x803A56C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A56C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A56C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A56C4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A56C8: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A56CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A56D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A56D4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A56D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A56DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A56E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A56E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A56E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A56EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A56F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A56F4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803A56F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A56FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5700: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x803A5704: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803A5708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A570C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803A5710: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803A5714: lh          $a0, 0x1E($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X1E);
    // 0x803A5718: jal         0x803A5AB4
    // 0x803A571C: nop

    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A571C: nop

    after_0:
    // 0x803A5720: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803A5724: lb          $t2, -0x32A1($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X32A1);
    // 0x803A5728: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x803A572C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803A5730: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A5734: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5738: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A573C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A5740: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A5744: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5748: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A574C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5750: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A5754: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A5758: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803A575C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803A5760: lb          $t4, -0x2F7F($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X2F7F);
    // 0x803A5764: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x803A5768: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x803A576C: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x803A5770: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x803A5774: addiu       $a1, $a1, 0x335C
    ctx->r5 = ADD32(ctx->r5, 0X335C);
    // 0x803A5778: bne         $at, $zero, L_803A580C
    if (ctx->r1 != 0) {
        // 0x803A577C: addiu       $a2, $zero, 0xC
        ctx->r6 = ADD32(0, 0XC);
            goto L_803A580C;
    }
    // 0x803A577C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803A5780: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x803A5784: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x803A5788: jal         0x803A5828
    // 0x803A578C: sh          $a2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r6;
    func_803A5828(rdram, ctx);
        goto after_1;
    // 0x803A578C: sh          $a2, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x803A5790: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x803A5794: lh          $a2, 0x24($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X24);
    // 0x803A5798: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803A579C: bne         $v0, $at, L_803A57AC
    if (ctx->r2 != ctx->r1) {
        // 0x803A57A0: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803A57AC;
    }
    // 0x803A57A0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803A57A4: b           L_803A580C
    // 0x803A57A8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_803A580C;
    // 0x803A57A8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_803A57AC:
    // 0x803A57AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803A57B0: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x803A57B4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x803A57B8: lb          $a0, 0x337C($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X337C);
    // 0x803A57BC: lb          $v1, 0x2($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2);
    // 0x803A57C0: nop

    // 0x803A57C4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x803A57C8: beq         $at, $zero, L_803A57EC
    if (ctx->r1 == 0) {
        // 0x803A57CC: subu        $t8, $a0, $v1
        ctx->r24 = SUB32(ctx->r4, ctx->r3);
            goto L_803A57EC;
    }
    // 0x803A57CC: subu        $t8, $a0, $v1
    ctx->r24 = SUB32(ctx->r4, ctx->r3);
    // 0x803A57D0: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x803A57D4: beq         $at, $zero, L_803A57E4
    if (ctx->r1 == 0) {
        // 0x803A57D8: nop
    
            goto L_803A57E4;
    }
    // 0x803A57D8: nop

    // 0x803A57DC: b           L_803A580C
    // 0x803A57E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_803A580C;
    // 0x803A57E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_803A57E4:
    // 0x803A57E4: b           L_803A580C
    // 0x803A57E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_803A580C;
    // 0x803A57E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_803A57EC:
    // 0x803A57EC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x803A57F0: beq         $at, $zero, L_803A580C
    if (ctx->r1 == 0) {
        // 0x803A57F4: subu        $t9, $v1, $a0
        ctx->r25 = SUB32(ctx->r3, ctx->r4);
            goto L_803A580C;
    }
    // 0x803A57F4: subu        $t9, $v1, $a0
    ctx->r25 = SUB32(ctx->r3, ctx->r4);
    // 0x803A57F8: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x803A57FC: beq         $at, $zero, L_803A580C
    if (ctx->r1 == 0) {
        // 0x803A5800: addiu       $a2, $zero, 0xF
        ctx->r6 = ADD32(0, 0XF);
            goto L_803A580C;
    }
    // 0x803A5800: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x803A5804: b           L_803A580C
    // 0x803A5808: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
        goto L_803A580C;
    // 0x803A5808: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_803A580C:
    // 0x803A580C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803A5810: jal         0x8002BB50
    // 0x803A5814: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803A5814: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    after_2:
    // 0x803A5818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A581C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A5820: jr          $ra
    // 0x803A5824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A5824: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A5828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5828: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A582C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A5830: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803A5834: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A5838: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A583C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5840: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5844: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5848: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A584C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5858: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A585C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5860: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x803A5864: lb          $a1, 0x0($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X0);
    // 0x803A5868: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x803A586C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803A5870: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
L_803A5874:
    // 0x803A5874: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A5878: mflo        $t9
    ctx->r25 = lo;
    // 0x803A587C: addu        $a2, $v0, $t9
    ctx->r6 = ADD32(ctx->r2, ctx->r25);
    // 0x803A5880: lb          $t0, 0x337A($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X337A);
    // 0x803A5884: nop

    // 0x803A5888: bne         $a1, $t0, L_803A58B4
    if (ctx->r5 != ctx->r8) {
        // 0x803A588C: nop
    
            goto L_803A58B4;
    }
    // 0x803A588C: nop

    // 0x803A5890: lb          $t1, 0x1($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X1);
    // 0x803A5894: lb          $t2, 0x337B($a2)
    ctx->r10 = MEM_B(ctx->r6, 0X337B);
    // 0x803A5898: nop

    // 0x803A589C: bne         $t1, $t2, L_803A58B4
    if (ctx->r9 != ctx->r10) {
        // 0x803A58A0: nop
    
            goto L_803A58B4;
    }
    // 0x803A58A0: nop

    // 0x803A58A4: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x803A58A8: sra         $t3, $v0, 24
    ctx->r11 = S32(SIGNED(ctx->r2) >> 24);
    // 0x803A58AC: jr          $ra
    // 0x803A58B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x803A58B0: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_803A58B4:
    // 0x803A58B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x803A58B8: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x803A58BC: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x803A58C0: slti        $at, $v1, 0xA
    ctx->r1 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x803A58C4: bne         $at, $zero, L_803A5874
    if (ctx->r1 != 0) {
        // 0x803A58C8: nop
    
            goto L_803A5874;
    }
    // 0x803A58C8: nop

    // 0x803A58CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x803A58D0: jr          $ra
    // 0x803A58D4: nop

    return;
    // 0x803A58D4: nop

;}
RECOMP_FUNC void func_803A58D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A58D8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x803A58DC: lh          $v0, -0x6B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6B6);
    // 0x803A58E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A58E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A58E8: bgtz        $v0, L_803A5900
    if (SIGNED(ctx->r2) > 0) {
        // 0x803A58EC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A5900;
    }
    // 0x803A58EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A58F0: jal         0x8002BB50
    // 0x803A58F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x803A58F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x803A58F8: b           L_803A5928
    // 0x803A58FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5928;
    // 0x803A58FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5900:
    // 0x803A5900: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x803A5904: bne         $at, $zero, L_803A591C
    if (ctx->r1 != 0) {
        // 0x803A5908: nop
    
            goto L_803A591C;
    }
    // 0x803A5908: nop

    // 0x803A590C: jal         0x8002BB50
    // 0x803A5910: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x803A5910: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x803A5914: b           L_803A5928
    // 0x803A5918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5928;
    // 0x803A5918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A591C:
    // 0x803A591C: jal         0x8002BB50
    // 0x803A5920: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803A5920: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x803A5924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5928:
    // 0x803A5928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A592C: jr          $ra
    // 0x803A5930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A5930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A5934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5934: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A5938: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803A593C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803A5940: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A5944: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5948: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A594C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A5950: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A5954: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5958: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A595C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A5960: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A5964: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A5968: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x803A596C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5970: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A5974: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x803A5978: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803A597C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A5980: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x803A5984: lb          $v0, 0x3DC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3DC);
    // 0x803A5988: jr          $ra
    // 0x803A598C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x803A598C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_803A5990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A599C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803A59A0: jal         0x803A5934
    // 0x803A59A4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_803A5934(rdram, ctx);
        goto after_0;
    // 0x803A59A4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x803A59A8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x803A59AC: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x803A59B0: jal         0x8003CD88
    // 0x803A59B4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8003CD88(rdram, ctx);
        goto after_1;
    // 0x803A59B4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
    // 0x803A59B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A59BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A59C0: jr          $ra
    // 0x803A59C4: nop

    return;
    // 0x803A59C4: nop

;}
RECOMP_FUNC void func_803A59C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A59C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A59CC: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803A59D0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803A59D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A59D8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A59DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A59E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A59E4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A59E8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A59EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A59F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A59F4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A59F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A59FC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x803A5A00: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5A04: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A5A08: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x803A5A0C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x803A5A10: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A5A14: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x803A5A18: lb          $v0, 0x3DD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3DD);
    // 0x803A5A1C: jr          $ra
    // 0x803A5A20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x803A5A20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_803A5A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5A24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A5A28: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A5A2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5A30: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803A5A34: jal         0x803A5934
    // 0x803A5A38: nop

    func_803A5934(rdram, ctx);
        goto after_0;
    // 0x803A5A38: nop

    after_0:
    // 0x803A5A3C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803A5A40: jal         0x803A59C8
    // 0x803A5A44: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    func_803A59C8(rdram, ctx);
        goto after_1;
    // 0x803A5A44: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    after_1:
    // 0x803A5A48: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803A5A4C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803A5A50: lb          $a0, 0x1E($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1E);
    // 0x803A5A54: jal         0x80042024
    // 0x803A5A58: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80042024(rdram, ctx);
        goto after_2;
    // 0x803A5A58: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
    // 0x803A5A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5A60: lb          $v0, 0x0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X0);
    // 0x803A5A64: jr          $ra
    // 0x803A5A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A5A68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A5A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5A6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A5A70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A5A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5A78: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803A5A7C: jal         0x803A5934
    // 0x803A5A80: nop

    func_803A5934(rdram, ctx);
        goto after_0;
    // 0x803A5A80: nop

    after_0:
    // 0x803A5A84: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x803A5A88: jal         0x803A59C8
    // 0x803A5A8C: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    func_803A59C8(rdram, ctx);
        goto after_1;
    // 0x803A5A8C: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    after_1:
    // 0x803A5A90: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x803A5A94: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x803A5A98: lb          $a0, 0x1E($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1E);
    // 0x803A5A9C: jal         0x80042024
    // 0x803A5AA0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80042024(rdram, ctx);
        goto after_2;
    // 0x803A5AA0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
    // 0x803A5AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5AA8: lb          $v0, 0x1($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X1);
    // 0x803A5AAC: jr          $ra
    // 0x803A5AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A5AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A5AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5AB4: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x803A5AB8: lh          $t8, -0x6B6($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X6B6);
    // 0x803A5ABC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A5AC0: addu        $v0, $t8, $a0
    ctx->r2 = ADD32(ctx->r24, ctx->r4);
    // 0x803A5AC4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x803A5AC8: jr          $ra
    // 0x803A5ACC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    return;
    // 0x803A5ACC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
;}
RECOMP_FUNC void func_803A5AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5ADC: jal         0x80036234
    // 0x803A5AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A5AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A5AE4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5AE8: jal         0x80035FF0
    // 0x803A5AEC: addiu       $a0, $a0, 0x7580
    ctx->r4 = ADD32(ctx->r4, 0X7580);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A5AEC: addiu       $a0, $a0, 0x7580
    ctx->r4 = ADD32(ctx->r4, 0X7580);
    after_1:
    // 0x803A5AF0: jal         0x80039DB4
    // 0x803A5AF4: nop

    func_80039DB4(rdram, ctx);
        goto after_2;
    // 0x803A5AF4: nop

    after_2:
    // 0x803A5AF8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A5AFC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A5B00: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803A5B04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A5B08: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5B0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5B14: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5B18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5B1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5B20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5B24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5B28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5B2C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5B30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803A5B34: lb          $t8, -0x2F7F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F7F);
    // 0x803A5B38: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803A5B3C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803A5B40: jal         0x8006FB58
    // 0x803A5B44: sh          $t9, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r25;
    func_8006FB58(rdram, ctx);
        goto after_3;
    // 0x803A5B44: sh          $t9, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r25;
    after_3:
    // 0x803A5B48: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5B4C: jal         0x80029354
    // 0x803A5B50: addiu       $a0, $a0, 0x5CD4
    ctx->r4 = ADD32(ctx->r4, 0X5CD4);
    func_80029354(rdram, ctx);
        goto after_4;
    // 0x803A5B50: addiu       $a0, $a0, 0x5CD4
    ctx->r4 = ADD32(ctx->r4, 0X5CD4);
    after_4:
    // 0x803A5B54: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5B58: jal         0x8002AAC0
    // 0x803A5B5C: addiu       $a0, $a0, 0x77E8
    ctx->r4 = ADD32(ctx->r4, 0X77E8);
    func_8002AAC0(rdram, ctx);
        goto after_5;
    // 0x803A5B5C: addiu       $a0, $a0, 0x77E8
    ctx->r4 = ADD32(ctx->r4, 0X77E8);
    after_5:
    // 0x803A5B60: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5B64: addiu       $a0, $a0, 0x5B80
    ctx->r4 = ADD32(ctx->r4, 0X5B80);
    // 0x803A5B68: jal         0x8004A9B4
    // 0x803A5B6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_6;
    // 0x803A5B6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x803A5B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5B78: jr          $ra
    // 0x803A5B7C: nop

    return;
    // 0x803A5B7C: nop

;}
RECOMP_FUNC void func_803A5B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5B88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5B8C: jal         0x800357CC
    // 0x803A5B90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x803A5B90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A5B94: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A5B98: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x803A5B9C: nop

    // 0x803A5BA0: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x803A5BA4: jal         0x80035D2C
    // 0x803A5BA8: nop

    func_80035D2C(rdram, ctx);
        goto after_1;
    // 0x803A5BA8: nop

    after_1:
    // 0x803A5BAC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x803A5BB0: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x803A5BB4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803A5BB8: lw          $t9, 0x7870($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7870);
    // 0x803A5BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A5BC0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x803A5BC4: jalr        $t9
    // 0x803A5BC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x803A5BC8: nop

    after_2:
    // 0x803A5BCC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x803A5BD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A5BD4: lh          $a0, 0x26($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X26);
    // 0x803A5BD8: jal         0x8001D4C0
    // 0x803A5BDC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8001D4C0(rdram, ctx);
        goto after_3;
    // 0x803A5BDC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x803A5BE0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x803A5BE4: jal         0x800359B4
    // 0x803A5BE8: sh          $v0, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r2;
    func_800359B4(rdram, ctx);
        goto after_4;
    // 0x803A5BE8: sh          $v0, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r2;
    after_4:
    // 0x803A5BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5BF4: jr          $ra
    // 0x803A5BF8: nop

    return;
    // 0x803A5BF8: nop

;}
RECOMP_FUNC void func_803A5BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5C04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5C08: jal         0x80035770
    // 0x803A5C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A5C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A5C10: jal         0x8004974C
    // 0x803A5C14: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x803A5C14: nop

    after_1:
    // 0x803A5C18: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A5C1C: beq         $v0, $at, L_803A5C58
    if (ctx->r2 == ctx->r1) {
        // 0x803A5C20: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_803A5C58;
    }
    // 0x803A5C20: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A5C24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A5C28: bne         $v0, $at, L_803A5C3C
    if (ctx->r2 != ctx->r1) {
        // 0x803A5C2C: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_803A5C3C;
    }
    // 0x803A5C2C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x803A5C30: lb          $t6, 0x418($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X418);
    // 0x803A5C34: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x803A5C38: beq         $t6, $at, L_803A5C58
    if (ctx->r14 == ctx->r1) {
        // 0x803A5C3C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_803A5C58;
    }
L_803A5C3C:
    // 0x803A5C3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A5C40: bne         $v0, $at, L_803A5C78
    if (ctx->r2 != ctx->r1) {
        // 0x803A5C44: lui         $t7, 0x8011
        ctx->r15 = S32(0X8011 << 16);
            goto L_803A5C78;
    }
    // 0x803A5C44: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x803A5C48: lb          $t7, 0x418($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X418);
    // 0x803A5C4C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803A5C50: bne         $t7, $at, L_803A5C78
    if (ctx->r15 != ctx->r1) {
        // 0x803A5C54: nop
    
            goto L_803A5C78;
    }
    // 0x803A5C54: nop

L_803A5C58:
    // 0x803A5C58: lbu         $t8, -0x329F($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X329F);
    // 0x803A5C5C: nop

    // 0x803A5C60: bne         $t8, $zero, L_803A5C78
    if (ctx->r24 != 0) {
        // 0x803A5C64: nop
    
            goto L_803A5C78;
    }
    // 0x803A5C64: nop

    // 0x803A5C68: jal         0x80037AB8
    // 0x803A5C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037AB8(rdram, ctx);
        goto after_2;
    // 0x803A5C6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x803A5C70: b           L_803A5C84
    // 0x803A5C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A5C84;
    // 0x803A5C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5C78:
    // 0x803A5C78: jal         0x80037908
    // 0x803A5C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_3;
    // 0x803A5C7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x803A5C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A5C84:
    // 0x803A5C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5C88: jr          $ra
    // 0x803A5C8C: nop

    return;
    // 0x803A5C8C: nop

;}
RECOMP_FUNC void func_803A5C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5C9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A5CA0: jal         0x80037908
    // 0x803A5CA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803A5CA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A5CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5CB0: jr          $ra
    // 0x803A5CB4: nop

    return;
    // 0x803A5CB4: nop

;}
RECOMP_FUNC void func_803A5CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5CB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A5CBC: jr          $ra
    // 0x803A5CC0: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    return;
    // 0x803A5CC0: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
;}
RECOMP_FUNC void func_803A5CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5CC4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A5CC8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x803A5CCC: jr          $ra
    // 0x803A5CD0: sh          $t6, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r14;
    return;
    // 0x803A5CD0: sh          $t6, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_803A5CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5CDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5CE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A5CE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A5CE8: jal         0x8003BEC4
    // 0x803A5CEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003BEC4(rdram, ctx);
        goto after_0;
    // 0x803A5CEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x803A5CF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x803A5CF4: jal         0x80029F00
    // 0x803A5CF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80029F00(rdram, ctx);
        goto after_1;
    // 0x803A5CF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x803A5CFC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5D00: jal         0x800297B4
    // 0x803A5D04: addiu       $a0, $a0, 0x5D18
    ctx->r4 = ADD32(ctx->r4, 0X5D18);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x803A5D04: addiu       $a0, $a0, 0x5D18
    ctx->r4 = ADD32(ctx->r4, 0X5D18);
    after_2:
    // 0x803A5D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5D10: jr          $ra
    // 0x803A5D14: nop

    return;
    // 0x803A5D14: nop

;}
RECOMP_FUNC void func_803A5D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5D18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A5D1C: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x803A5D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A5D24: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x803A5D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A5D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A5D30: bne         $t7, $zero, L_803A5D44
    if (ctx->r15 != 0) {
        // 0x803A5D34: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_803A5D44;
    }
    // 0x803A5D34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A5D38: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A5D3C: jal         0x8002A5D8
    // 0x803A5D40: addiu       $a0, $a0, 0x5DFC
    ctx->r4 = ADD32(ctx->r4, 0X5DFC);
    func_8002A5D8(rdram, ctx);
        goto after_0;
    // 0x803A5D40: addiu       $a0, $a0, 0x5DFC
    ctx->r4 = ADD32(ctx->r4, 0X5DFC);
    after_0:
L_803A5D44:
    // 0x803A5D44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803A5D48: jal         0x8003BFB4
    // 0x803A5D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_1;
    // 0x803A5D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803A5D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A5D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A5D58: jr          $ra
    // 0x803A5D5C: nop

    return;
    // 0x803A5D5C: nop

;}
RECOMP_FUNC void func_803A5D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5D60: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A5D64: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803A5D68: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x803A5D6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A5D70: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5D74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A5D78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A5D7C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A5D80: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5D84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A5D88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A5D8C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A5D90: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A5D94: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803A5D98: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A5D9C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A5DA0: addiu       $t0, $t0, -0x2F80
    ctx->r8 = ADD32(ctx->r8, -0X2F80);
    // 0x803A5DA4: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x803A5DA8: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x803A5DAC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x803A5DB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A5DB4: addu        $v1, $a1, $t1
    ctx->r3 = ADD32(ctx->r5, ctx->r9);
    // 0x803A5DB8: lb          $t2, 0x335C($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X335C);
    // 0x803A5DBC: lb          $t5, 0x335D($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X335D);
    // 0x803A5DC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803A5DC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A5DC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5DCC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A5DD0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5DD4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A5DD8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803A5DDC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A5DE0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x803A5DE4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x803A5DE8: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x803A5DEC: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x803A5DF0: lh          $v0, 0x4AE($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X4AE);
    // 0x803A5DF4: jr          $ra
    // 0x803A5DF8: addiu       $v1, $v1, 0x335C
    ctx->r3 = ADD32(ctx->r3, 0X335C);
    return;
    // 0x803A5DF8: addiu       $v1, $v1, 0x335C
    ctx->r3 = ADD32(ctx->r3, 0X335C);
;}
RECOMP_FUNC void func_803A5DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5DFC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x803A5E00: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x803A5E04: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x803A5E08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x803A5E0C: lh          $a0, 0x56($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X56);
    // 0x803A5E10: jal         0x803A5AB4
    // 0x803A5E14: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_803A5AB4(rdram, ctx);
        goto after_0;
    // 0x803A5E14: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x803A5E18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A5E1C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A5E20: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803A5E24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A5E28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5E2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5E34: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5E38: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5E3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5E40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803A5E44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803A5E48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803A5E4C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803A5E50: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x803A5E54: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x803A5E58: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x803A5E5C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x803A5E60: addu        $s0, $v1, $t9
    ctx->r16 = ADD32(ctx->r3, ctx->r25);
    // 0x803A5E64: lb          $t1, 0x335C($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X335C);
    // 0x803A5E68: lb          $t4, 0x335D($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X335D);
    // 0x803A5E6C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803A5E70: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803A5E74: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A5E78: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803A5E7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A5E80: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803A5E84: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803A5E88: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A5E8C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A5E90: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x803A5E94: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x803A5E98: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x803A5E9C: lhu         $a0, 0x4AE($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X4AE);
    // 0x803A5EA0: addiu       $s0, $s0, 0x335C
    ctx->r16 = ADD32(ctx->r16, 0X335C);
    // 0x803A5EA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A5EA8: jal         0x8001D4C0
    // 0x803A5EAC: addiu       $a2, $zero, 0x3E7
    ctx->r6 = ADD32(0, 0X3E7);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x803A5EAC: addiu       $a2, $zero, 0x3E7
    ctx->r6 = ADD32(0, 0X3E7);
    after_1:
    // 0x803A5EB0: sh          $v0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r2;
    // 0x803A5EB4: lb          $a0, 0x0($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X0);
    // 0x803A5EB8: jal         0x8003CB98
    // 0x803A5EBC: nop

    func_8003CB98(rdram, ctx);
        goto after_2;
    // 0x803A5EBC: nop

    after_2:
    // 0x803A5EC0: bgez        $v0, L_803A5ED4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x803A5EC4: addiu       $a1, $zero, 0x82
        ctx->r5 = ADD32(0, 0X82);
            goto L_803A5ED4;
    }
    // 0x803A5EC4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x803A5EC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x803A5ECC: b           L_803A5EDC
    // 0x803A5ED0: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
        goto L_803A5EDC;
    // 0x803A5ED0: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
L_803A5ED4:
    // 0x803A5ED4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x803A5ED8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_803A5EDC:
    // 0x803A5EDC: lh          $v0, 0x56($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X56);
    // 0x803A5EE0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x803A5EE4: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x803A5EE8: addiu       $a3, $t7, 0x37
    ctx->r7 = ADD32(ctx->r15, 0X37);
    // 0x803A5EEC: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x803A5EF0: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x803A5EF4: addiu       $t2, $zero, 0x22
    ctx->r10 = ADD32(0, 0X22);
    // 0x803A5EF8: addiu       $t4, $zero, 0xB3
    ctx->r12 = ADD32(0, 0XB3);
    // 0x803A5EFC: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x803A5F00: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803A5F04: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803A5F08: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803A5F0C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x803A5F10: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x803A5F14: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x803A5F18: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x803A5F1C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x803A5F20: jal         0x8004A5E4
    // 0x803A5F24: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x803A5F24: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_3:
    // 0x803A5F28: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x803A5F2C: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x803A5F30: addiu       $t3, $t3, -0x3770
    ctx->r11 = ADD32(ctx->r11, -0X3770);
    // 0x803A5F34: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A5F38: lb          $a3, 0x2($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X2);
    // 0x803A5F3C: addiu       $a2, $v0, 0x3A
    ctx->r6 = ADD32(ctx->r2, 0X3A);
    // 0x803A5F40: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x803A5F44: ori         $at, $at, 0x28
    ctx->r1 = ctx->r1 | 0X28;
    // 0x803A5F48: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A5F4C: addu        $v1, $v0, $t3
    ctx->r3 = ADD32(ctx->r2, ctx->r11);
    // 0x803A5F50: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x803A5F54: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x803A5F58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A5F5C: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803A5F60: jal         0x8002F914
    // 0x803A5F64: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    func_8002F914(rdram, ctx);
        goto after_4;
    // 0x803A5F64: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_4:
    // 0x803A5F68: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x803A5F6C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x803A5F70: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A5F74: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803A5F78: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x803A5F7C: sb          $t8, 0x3D($at)
    MEM_B(0X3D, ctx->r1) = ctx->r24;
    // 0x803A5F80: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A5F84: addiu       $a2, $v0, 0x42
    ctx->r6 = ADD32(ctx->r2, 0X42);
    // 0x803A5F88: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x803A5F8C: ori         $at, $at, 0xC8
    ctx->r1 = ctx->r1 | 0XC8;
    // 0x803A5F90: lhu         $a3, 0x4C($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4C);
    // 0x803A5F94: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803A5F98: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803A5F9C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x803A5FA0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803A5FA4: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803A5FA8: addiu       $a1, $zero, 0xC7
    ctx->r5 = ADD32(0, 0XC7);
    // 0x803A5FAC: jal         0x8002F6EC
    // 0x803A5FB0: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    func_8002F6EC(rdram, ctx);
        goto after_5;
    // 0x803A5FB0: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    after_5:
    // 0x803A5FB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x803A5FB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x803A5FBC: jr          $ra
    // 0x803A5FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x803A5FC0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x803A5FC4: nop

    // 0x803A5FC8: nop

    // 0x803A5FCC: nop

;}
RECOMP_FUNC void func_803A5FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A5FD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x803A5FD4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x803A5FD8: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x803A5FDC: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x803A5FE0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x803A5FE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803A5FE8: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x803A5FEC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x803A5FF0: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x803A5FF4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x803A5FF8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x803A5FFC: swc1        $f21, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803A6000: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x803A6004: beq         $t6, $zero, L_803A609C
    if (ctx->r14 == 0) {
        // 0x803A6008: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_803A609C;
    }
    // 0x803A6008: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x803A600C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6010: lui         $s3, 0x8036
    ctx->r19 = S32(0X8036 << 16);
    // 0x803A6014: lui         $s2, 0x803B
    ctx->r18 = S32(0X803B << 16);
    // 0x803A6018: lwc1        $f20, -0x7DB4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X7DB4);
    // 0x803A601C: addiu       $s2, $s2, -0x7CF8
    ctx->r18 = ADD32(ctx->r18, -0X7CF8);
    // 0x803A6020: addiu       $s3, $s3, -0x7B00
    ctx->r19 = ADD32(ctx->r19, -0X7B00);
    // 0x803A6024: addiu       $s4, $zero, -0x101
    ctx->r20 = ADD32(0, -0X101);
L_803A6028:
    // 0x803A6028: lh          $t7, 0x14($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X14);
    // 0x803A602C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x803A6030: lh          $a2, 0x4($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4);
    // 0x803A6034: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A6038: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x803A603C: addiu       $t8, $zero, 0x2710
    ctx->r24 = ADD32(0, 0X2710);
    // 0x803A6040: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x803A6044: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x803A6048: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x803A604C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x803A6050: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x803A6054: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x803A6058: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x803A605C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x803A6060: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x803A6064: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803A6068: jal         0x80061E9C
    // 0x803A606C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_80061E9C(rdram, ctx);
        goto after_0;
    // 0x803A606C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x803A6070: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x803A6074: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x803A6078: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x803A607C: and         $t1, $t0, $s4
    ctx->r9 = ctx->r8 & ctx->r20;
    // 0x803A6080: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x803A6084: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x803A6088: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x803A608C: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x803A6090: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x803A6094: bne         $s1, $zero, L_803A6028
    if (ctx->r17 != 0) {
        // 0x803A6098: swc1        $f20, 0x60($t2)
        MEM_W(0X60, ctx->r10) = ctx->f20.u32l;
            goto L_803A6028;
    }
    // 0x803A6098: swc1        $f20, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->f20.u32l;
L_803A609C:
    // 0x803A609C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x803A60A0: lwc1        $f21, 0x38($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x803A60A4: lwc1        $f20, 0x3C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x803A60A8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x803A60AC: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x803A60B0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x803A60B4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x803A60B8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x803A60BC: jr          $ra
    // 0x803A60C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x803A60C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_803A60C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60C4: jr          $ra
    // 0x803A60C8: nop

    return;
    // 0x803A60C8: nop

;}
RECOMP_FUNC void func_803A60CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60CC: jr          $ra
    // 0x803A60D0: nop

    return;
    // 0x803A60D0: nop

;}
RECOMP_FUNC void func_803A60D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60D4: jr          $ra
    // 0x803A60D8: nop

    return;
    // 0x803A60D8: nop

;}
RECOMP_FUNC void func_803A60DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60DC: jr          $ra
    // 0x803A60E0: nop

    return;
    // 0x803A60E0: nop

;}
RECOMP_FUNC void func_803A60E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60E4: jr          $ra
    // 0x803A60E8: nop

    return;
    // 0x803A60E8: nop

;}
RECOMP_FUNC void func_803A60EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60EC: jr          $ra
    // 0x803A60F0: nop

    return;
    // 0x803A60F0: nop

;}
RECOMP_FUNC void func_803A60F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60F4: jr          $ra
    // 0x803A60F8: nop

    return;
    // 0x803A60F8: nop

;}
RECOMP_FUNC void func_803A60FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A60FC: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A6100: addiu       $t6, $t6, 0x7920
    ctx->r14 = ADD32(ctx->r14, 0X7920);
    // 0x803A6104: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6108: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A610C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6110: sw          $zero, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = 0;
    // 0x803A6114: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6118: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x803A611C: sw          $t7, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r15;
    // 0x803A6120: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6124: addiu       $t8, $zero, 0x6A
    ctx->r24 = ADD32(0, 0X6A);
    // 0x803A6128: sw          $t8, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r24;
    // 0x803A612C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6130: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x803A6134: sw          $t9, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r25;
    // 0x803A6138: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A613C: addiu       $t0, $zero, 0x5A7
    ctx->r8 = ADD32(0, 0X5A7);
    // 0x803A6140: jr          $ra
    // 0x803A6144: sw          $t0, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r8;
    return;
    // 0x803A6144: sw          $t0, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void func_803A6148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6148: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A614C: addiu       $t6, $t6, 0x7980
    ctx->r14 = ADD32(ctx->r14, 0X7980);
    // 0x803A6150: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6154: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A6158: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A615C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A6160: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A6164: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6168: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x803A616C: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A6170: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6174: addiu       $t9, $zero, 0x6A
    ctx->r25 = ADD32(0, 0X6A);
    // 0x803A6178: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A617C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6180: addiu       $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
    // 0x803A6184: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A6188: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A618C: addiu       $t1, $zero, 0x5AC
    ctx->r9 = ADD32(0, 0X5AC);
    // 0x803A6190: jr          $ra
    // 0x803A6194: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A6194: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A6198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6198: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A619C: addiu       $t6, $t6, 0x79BC
    ctx->r14 = ADD32(ctx->r14, 0X79BC);
    // 0x803A61A0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61A4: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A61A8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61AC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A61B0: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A61B4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61B8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x803A61BC: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A61C0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61C4: addiu       $t9, $zero, 0x6A
    ctx->r25 = ADD32(0, 0X6A);
    // 0x803A61C8: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A61CC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61D0: addiu       $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
    // 0x803A61D4: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A61D8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61DC: addiu       $t1, $zero, 0x5A7
    ctx->r9 = ADD32(0, 0X5A7);
    // 0x803A61E0: jr          $ra
    // 0x803A61E4: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A61E4: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A61E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A61E8: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A61EC: addiu       $t6, $t6, 0x7A1C
    ctx->r14 = ADD32(ctx->r14, 0X7A1C);
    // 0x803A61F0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61F4: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A61F8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A61FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A6200: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A6204: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6208: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x803A620C: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A6210: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6214: addiu       $t9, $zero, 0x6A
    ctx->r25 = ADD32(0, 0X6A);
    // 0x803A6218: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A621C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6220: addiu       $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
    // 0x803A6224: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A6228: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A622C: addiu       $t1, $zero, 0x5AC
    ctx->r9 = ADD32(0, 0X5AC);
    // 0x803A6230: jr          $ra
    // 0x803A6234: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A6234: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A6238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6238: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A623C: addiu       $t6, $t6, 0x7A58
    ctx->r14 = ADD32(ctx->r14, 0X7A58);
    // 0x803A6240: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6244: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A6248: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A624C: sw          $zero, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = 0;
    // 0x803A6250: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6254: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x803A6258: sw          $t7, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r15;
    // 0x803A625C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6260: addiu       $t8, $zero, 0x6B
    ctx->r24 = ADD32(0, 0X6B);
    // 0x803A6264: sw          $t8, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r24;
    // 0x803A6268: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A626C: addiu       $t9, $zero, 0x69
    ctx->r25 = ADD32(0, 0X69);
    // 0x803A6270: sw          $t9, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r25;
    // 0x803A6274: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6278: addiu       $t0, $zero, 0x5B1
    ctx->r8 = ADD32(0, 0X5B1);
    // 0x803A627C: jr          $ra
    // 0x803A6280: sw          $t0, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r8;
    return;
    // 0x803A6280: sw          $t0, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void func_803A6284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6284: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A6288: addiu       $t6, $t6, 0x7B3C
    ctx->r14 = ADD32(ctx->r14, 0X7B3C);
    // 0x803A628C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6290: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A6294: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6298: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A629C: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A62A0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62A4: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x803A62A8: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A62AC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62B0: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x803A62B4: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A62B8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62BC: addiu       $t0, $zero, 0x69
    ctx->r8 = ADD32(0, 0X69);
    // 0x803A62C0: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A62C4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62C8: addiu       $t1, $zero, 0x5B8
    ctx->r9 = ADD32(0, 0X5B8);
    // 0x803A62CC: jr          $ra
    // 0x803A62D0: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A62D0: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A62D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A62D4: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A62D8: addiu       $t6, $t6, 0x7C14
    ctx->r14 = ADD32(ctx->r14, 0X7C14);
    // 0x803A62DC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62E0: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A62E4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A62EC: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A62F0: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A62F4: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x803A62F8: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A62FC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6300: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x803A6304: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A6308: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A630C: addiu       $t0, $zero, 0x69
    ctx->r8 = ADD32(0, 0X69);
    // 0x803A6310: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A6314: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6318: addiu       $t1, $zero, 0x5BE
    ctx->r9 = ADD32(0, 0X5BE);
    // 0x803A631C: jr          $ra
    // 0x803A6320: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A6320: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A6324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6324: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x803A6328: addiu       $t6, $t6, 0x7C5C
    ctx->r14 = ADD32(ctx->r14, 0X7C5C);
    // 0x803A632C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6330: sw          $t6, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = ctx->r14;
    // 0x803A6334: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6338: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A633C: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A6340: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6344: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803A6348: sw          $t8, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r24;
    // 0x803A634C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6350: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x803A6354: sw          $t9, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r25;
    // 0x803A6358: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A635C: addiu       $t0, $zero, 0x69
    ctx->r8 = ADD32(0, 0X69);
    // 0x803A6360: sw          $t0, -0x7D10($at)
    MEM_W(-0X7D10, ctx->r1) = ctx->r8;
    // 0x803A6364: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6368: addiu       $t1, $zero, 0x377
    ctx->r9 = ADD32(0, 0X377);
    // 0x803A636C: jr          $ra
    // 0x803A6370: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
    return;
    // 0x803A6370: sw          $t1, -0x7CFC($at)
    MEM_W(-0X7CFC, ctx->r1) = ctx->r9;
;}
RECOMP_FUNC void func_803A6374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6374: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x803A6378: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A637C: sw          $t6, -0x7D18($at)
    MEM_W(-0X7D18, ctx->r1) = ctx->r14;
    // 0x803A6380: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6384: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803A6388: sw          $t7, -0x7CF4($at)
    MEM_W(-0X7CF4, ctx->r1) = ctx->r15;
    // 0x803A638C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6390: addiu       $t8, $zero, 0x6E
    ctx->r24 = ADD32(0, 0X6E);
    // 0x803A6394: sw          $t8, -0x7D14($at)
    MEM_W(-0X7D14, ctx->r1) = ctx->r24;
    // 0x803A6398: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A639C: jr          $ra
    // 0x803A63A0: sw          $zero, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = 0;
    return;
    // 0x803A63A0: sw          $zero, -0x7D00($at)
    MEM_W(-0X7D00, ctx->r1) = 0;
;}
RECOMP_FUNC void func_803A63A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A63A4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A63A8: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x803A63AC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A63B0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x803A63B4: lhu         $t6, 0x6F8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6F8);
    // 0x803A63B8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A63BC: sw          $t6, -0x7D20($at)
    MEM_W(-0X7D20, ctx->r1) = ctx->r14;
    // 0x803A63C0: lhu         $t7, 0x710($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X710);
    // 0x803A63C4: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A63C8: jr          $ra
    // 0x803A63CC: sw          $t7, -0x7D1C($at)
    MEM_W(-0X7D1C, ctx->r1) = ctx->r15;
    return;
    // 0x803A63CC: sw          $t7, -0x7D1C($at)
    MEM_W(-0X7D1C, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_803A63D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A63D0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x803A63D4: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x803A63D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A63DC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A63E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A63E4: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x803A63E8: lbu         $t6, 0x754($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X754);
    // 0x803A63EC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A63F0: sw          $t6, -0x7D04($at)
    MEM_W(-0X7D04, ctx->r1) = ctx->r14;
    // 0x803A63F4: lbu         $t7, 0x754($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X754);
    // 0x803A63F8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A63FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x803A6400: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x803A6404: jal         0x80036234
    // 0x803A6408: sb          $t8, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r24;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A6408: sb          $t8, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r24;
    after_0:
    // 0x803A640C: jal         0x80020270
    // 0x803A6410: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x803A6410: nop

    after_1:
    // 0x803A6414: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x803A6418: jal         0x80025A10
    // 0x803A641C: addiu       $a0, $a0, 0x3BE8
    ctx->r4 = ADD32(ctx->r4, 0X3BE8);
    func_80025A10(rdram, ctx);
        goto after_2;
    // 0x803A641C: addiu       $a0, $a0, 0x3BE8
    ctx->r4 = ADD32(ctx->r4, 0X3BE8);
    after_2:
    // 0x803A6420: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6424: sw          $zero, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = 0;
    // 0x803A6428: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A642C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803A6430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6434: sw          $t9, -0x7CF0($at)
    MEM_W(-0X7CF0, ctx->r1) = ctx->r25;
    // 0x803A6438: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A643C: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803A6440: sw          $t0, -0x7D08($at)
    MEM_W(-0X7D08, ctx->r1) = ctx->r8;
    // 0x803A6444: jr          $ra
    // 0x803A6448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803A6448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_803A644C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A644C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6454: jal         0x80027B60
    // 0x803A6458: nop

    func_80027B60(rdram, ctx);
        goto after_0;
    // 0x803A6458: nop

    after_0:
    // 0x803A645C: jal         0x80063B94
    // 0x803A6460: nop

    func_80063B94(rdram, ctx);
        goto after_1;
    // 0x803A6460: nop

    after_1:
    // 0x803A6464: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A6468: lw          $t6, -0x7D18($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7D18);
    // 0x803A646C: nop

    // 0x803A6470: sltiu       $at, $t6, 0x10
    ctx->r1 = ctx->r14 < 0X10 ? 1 : 0;
    // 0x803A6474: beq         $at, $zero, L_803A64D4
    if (ctx->r1 == 0) {
        // 0x803A6478: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803A64D4;
    }
    // 0x803A6478: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A647C: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6480: addu        $at, $at, $t6
    gpr jr_addend_803A648C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A6484: lw          $t6, -0x7DB0($at)
    ctx->r14 = ADD32(ctx->r1, -0X7DB0);
    // 0x803A6488: nop

    // 0x803A648C: jr          $t6
    // 0x803A6490: nop

    switch (jr_addend_803A648C >> 2) {
        case 0: goto L_803A6494; break;
        case 1: goto L_803A6494; break;
        case 2: goto L_803A6494; break;
        case 3: goto L_803A6494; break;
        case 4: goto L_803A64AC; break;
        case 5: goto L_803A64AC; break;
        case 6: goto L_803A64AC; break;
        case 7: goto L_803A64C4; break;
        case 8: goto L_803A6494; break;
        case 9: goto L_803A6494; break;
        case 10: goto L_803A6494; break;
        case 11: goto L_803A6494; break;
        case 12: goto L_803A64AC; break;
        case 13: goto L_803A64AC; break;
        case 14: goto L_803A64AC; break;
        case 15: goto L_803A64AC; break;
        default: switch_error(__func__, 0x803A648C, 0x803A8250);
    }
    // 0x803A6490: nop

L_803A6494:
    // 0x803A6494: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A6498: addiu       $a0, $a0, -0x7F30
    ctx->r4 = ADD32(ctx->r4, -0X7F30);
    // 0x803A649C: jal         0x803A5FD0
    // 0x803A64A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_803A5FD0(rdram, ctx);
        goto after_2;
    // 0x803A64A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_2:
    // 0x803A64A4: b           L_803A64D8
    // 0x803A64A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A64D8;
    // 0x803A64A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A64AC:
    // 0x803A64AC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A64B0: addiu       $a0, $a0, 0x7F50
    ctx->r4 = ADD32(ctx->r4, 0X7F50);
    // 0x803A64B4: jal         0x803A5FD0
    // 0x803A64B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_803A5FD0(rdram, ctx);
        goto after_3;
    // 0x803A64B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x803A64BC: b           L_803A64D8
    // 0x803A64C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A64D8;
    // 0x803A64C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A64C4:
    // 0x803A64C4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A64C8: addiu       $a0, $a0, 0x7E48
    ctx->r4 = ADD32(ctx->r4, 0X7E48);
    // 0x803A64CC: jal         0x803A5FD0
    // 0x803A64D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_803A5FD0(rdram, ctx);
        goto after_4;
    // 0x803A64D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
L_803A64D4:
    // 0x803A64D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A64D8:
    // 0x803A64D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A64DC: jr          $ra
    // 0x803A64E0: nop

    return;
    // 0x803A64E0: nop

;}
RECOMP_FUNC void func_803A64E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A64E4: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A64E8: lw          $v0, -0x7D00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7D00);
    // 0x803A64EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A64F0: beq         $v0, $zero, L_803A6568
    if (ctx->r2 == 0) {
        // 0x803A64F4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_803A6568;
    }
    // 0x803A64F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A64F8: lui         $t6, 0x803B
    ctx->r14 = S32(0X803B << 16);
    // 0x803A64FC: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803A6500: lw          $t8, -0x7D10($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7D10);
    // 0x803A6504: lw          $t6, -0x7CFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7CFC);
    // 0x803A6508: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x803A650C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x803A6510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A6514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A6518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A651C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x803A6520: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x803A6524: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x803A6528: jal         0x802A9DA8
    // 0x803A652C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    LOOKUP_FUNC(0x802A9DA8)(rdram, ctx);
        goto after_0;
    // 0x803A652C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x803A6530: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x803A6534: addiu       $t0, $t0, 0x7CB0
    ctx->r8 = ADD32(ctx->r8, 0X7CB0);
    // 0x803A6538: addiu       $t9, $zero, 0x5C2
    ctx->r25 = ADD32(0, 0X5C2);
    // 0x803A653C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x803A6540: addiu       $t2, $zero, 0x6C
    ctx->r10 = ADD32(0, 0X6C);
    // 0x803A6544: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x803A6548: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x803A654C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803A6550: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x803A6554: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803A6558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A655C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803A6560: jal         0x802A9DA8
    // 0x803A6564: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(0x802A9DA8)(rdram, ctx);
        goto after_1;
    // 0x803A6564: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
L_803A6568:
    // 0x803A6568: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A656C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803A6570: jr          $ra
    // 0x803A6574: nop

    return;
    // 0x803A6574: nop

;}
RECOMP_FUNC void func_803A6578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A657C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6580: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A6584: addiu       $a0, $a0, -0x7D08
    ctx->r4 = ADD32(ctx->r4, -0X7D08);
    // 0x803A6588: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x803A658C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6590: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x803A6594: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A6598: bne         $v0, $zero, L_803A65D4
    if (ctx->r2 != 0) {
        // 0x803A659C: sw          $t6, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r14;
            goto L_803A65D4;
    }
    // 0x803A659C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x803A65A0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x803A65A4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x803A65A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x803A65AC: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803A65B0: lbu         $a2, -0x7D11($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X7D11);
    // 0x803A65B4: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x803A65B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A65BC: jal         0x8026E0B4
    // 0x803A65C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    LOOKUP_FUNC(0x8026E0B4)(rdram, ctx);
        goto after_0;
    // 0x803A65C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x803A65C4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A65C8: addiu       $a0, $a0, 0x6918
    ctx->r4 = ADD32(ctx->r4, 0X6918);
    // 0x803A65CC: jal         0x8004AE38
    // 0x803A65D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_1;
    // 0x803A65D0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
L_803A65D4:
    // 0x803A65D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A65D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A65DC: jr          $ra
    // 0x803A65E0: nop

    return;
    // 0x803A65E0: nop

;}
RECOMP_FUNC void func_803A65E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A65E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A65E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A65EC: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A65F0: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A65F4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x803A65F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A65FC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x803A6600: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6604: bne         $v0, $zero, L_803A662C
    if (ctx->r2 != 0) {
        // 0x803A6608: sw          $t6, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r14;
            goto L_803A662C;
    }
    // 0x803A6608: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x803A660C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x803A6610: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A6614: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x803A6618: jal         0x80025A10
    // 0x803A661C: addiu       $a0, $a0, -0x7E28
    ctx->r4 = ADD32(ctx->r4, -0X7E28);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x803A661C: addiu       $a0, $a0, -0x7E28
    ctx->r4 = ADD32(ctx->r4, -0X7E28);
    after_0:
    // 0x803A6620: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A6624: jal         0x800296E0
    // 0x803A6628: addiu       $a0, $a0, 0x6578
    ctx->r4 = ADD32(ctx->r4, 0X6578);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A6628: addiu       $a0, $a0, 0x6578
    ctx->r4 = ADD32(ctx->r4, 0X6578);
    after_1:
L_803A662C:
    // 0x803A662C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A6634: jr          $ra
    // 0x803A6638: nop

    return;
    // 0x803A6638: nop

;}
RECOMP_FUNC void func_803A663C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A663C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6644: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6648: jal         0x803A6374
    // 0x803A664C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6374(rdram, ctx);
        goto after_0;
    // 0x803A664C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6650: jal         0x803A63D0
    // 0x803A6654: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A6654: nop

    after_1:
    // 0x803A6658: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A665C: jal         0x800296E0
    // 0x803A6660: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6660: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A6664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A666C: jr          $ra
    // 0x803A6670: nop

    return;
    // 0x803A6670: nop

;}
RECOMP_FUNC void func_803A6674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A667C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6680: jal         0x803A60FC
    // 0x803A6684: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A60FC(rdram, ctx);
        goto after_0;
    // 0x803A6684: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6688: jal         0x803A63D0
    // 0x803A668C: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A668C: nop

    after_1:
    // 0x803A6690: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A6694: jal         0x800296E0
    // 0x803A6698: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6698: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A669C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A66A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A66A4: jr          $ra
    // 0x803A66A8: nop

    return;
    // 0x803A66A8: nop

;}
RECOMP_FUNC void func_803A66AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A66AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A66B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A66B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A66B8: jal         0x803A6148
    // 0x803A66BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6148(rdram, ctx);
        goto after_0;
    // 0x803A66BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A66C0: jal         0x803A63D0
    // 0x803A66C4: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A66C4: nop

    after_1:
    // 0x803A66C8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A66CC: jal         0x800296E0
    // 0x803A66D0: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A66D0: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A66D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A66D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A66DC: jr          $ra
    // 0x803A66E0: nop

    return;
    // 0x803A66E0: nop

;}
RECOMP_FUNC void func_803A66E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A66E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A66E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A66EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A66F0: jal         0x803A6198
    // 0x803A66F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6198(rdram, ctx);
        goto after_0;
    // 0x803A66F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A66F8: jal         0x803A63D0
    // 0x803A66FC: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A66FC: nop

    after_1:
    // 0x803A6700: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A6704: jal         0x800296E0
    // 0x803A6708: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6708: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A670C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A6714: jr          $ra
    // 0x803A6718: nop

    return;
    // 0x803A6718: nop

;}
RECOMP_FUNC void func_803A671C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A671C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6724: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6728: jal         0x803A61E8
    // 0x803A672C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A61E8(rdram, ctx);
        goto after_0;
    // 0x803A672C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6730: jal         0x803A63D0
    // 0x803A6734: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A6734: nop

    after_1:
    // 0x803A6738: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A673C: jal         0x800296E0
    // 0x803A6740: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6740: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A6744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A674C: jr          $ra
    // 0x803A6750: nop

    return;
    // 0x803A6750: nop

;}
RECOMP_FUNC void func_803A6754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A675C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6760: jal         0x803A6238
    // 0x803A6764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6238(rdram, ctx);
        goto after_0;
    // 0x803A6764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6768: jal         0x803A63D0
    // 0x803A676C: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A676C: nop

    after_1:
    // 0x803A6770: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A6774: jal         0x800296E0
    // 0x803A6778: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6778: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A6784: jr          $ra
    // 0x803A6788: nop

    return;
    // 0x803A6788: nop

;}
RECOMP_FUNC void func_803A678C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A678C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6798: jal         0x803A6284
    // 0x803A679C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6284(rdram, ctx);
        goto after_0;
    // 0x803A679C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A67A0: jal         0x803A63D0
    // 0x803A67A4: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A67A4: nop

    after_1:
    // 0x803A67A8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A67AC: jal         0x800296E0
    // 0x803A67B0: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A67B0: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A67B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A67B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A67BC: jr          $ra
    // 0x803A67C0: nop

    return;
    // 0x803A67C0: nop

;}
RECOMP_FUNC void func_803A67C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A67C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A67C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A67CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A67D0: jal         0x803A62D4
    // 0x803A67D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A62D4(rdram, ctx);
        goto after_0;
    // 0x803A67D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A67D8: jal         0x803A63D0
    // 0x803A67DC: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A67DC: nop

    after_1:
    // 0x803A67E0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A67E4: jal         0x800296E0
    // 0x803A67E8: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A67E8: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A67EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A67F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A67F4: jr          $ra
    // 0x803A67F8: nop

    return;
    // 0x803A67F8: nop

;}
RECOMP_FUNC void func_803A67FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A67FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6808: jal         0x803A6324
    // 0x803A680C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A6324(rdram, ctx);
        goto after_0;
    // 0x803A680C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6810: jal         0x803A63D0
    // 0x803A6814: nop

    func_803A63D0(rdram, ctx);
        goto after_1;
    // 0x803A6814: nop

    after_1:
    // 0x803A6818: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A681C: jal         0x800296E0
    // 0x803A6820: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x803A6820: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_2:
    // 0x803A6824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A682C: jr          $ra
    // 0x803A6830: nop

    return;
    // 0x803A6830: nop

;}
RECOMP_FUNC void func_803A6834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A6838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A683C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6840: jal         0x80036234
    // 0x803A6844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A6844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A6848: jal         0x80020270
    // 0x803A684C: nop

    func_80020270(rdram, ctx);
        goto after_1;
    // 0x803A684C: nop

    after_1:
    // 0x803A6850: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A6854: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x803A6858: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803A685C: beq         $v0, $zero, L_803A687C
    if (ctx->r2 == 0) {
        // 0x803A6860: nop
    
            goto L_803A687C;
    }
    // 0x803A6860: nop

    // 0x803A6864: beq         $v0, $at, L_803A689C
    if (ctx->r2 == ctx->r1) {
        // 0x803A6868: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_803A689C;
    }
    // 0x803A6868: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803A686C: beq         $v0, $at, L_803A68BC
    if (ctx->r2 == ctx->r1) {
        // 0x803A6870: nop
    
            goto L_803A68BC;
    }
    // 0x803A6870: nop

    // 0x803A6874: b           L_803A68DC
    // 0x803A6878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_803A68DC;
    // 0x803A6878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_803A687C:
    // 0x803A687C: jal         0x803A6238
    // 0x803A6880: nop

    func_803A6238(rdram, ctx);
        goto after_2;
    // 0x803A6880: nop

    after_2:
    // 0x803A6884: jal         0x803A63D0
    // 0x803A6888: nop

    func_803A63D0(rdram, ctx);
        goto after_3;
    // 0x803A6888: nop

    after_3:
    // 0x803A688C: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A6890: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x803A6894: b           L_803A68DC
    // 0x803A6898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_803A68DC;
    // 0x803A6898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_803A689C:
    // 0x803A689C: jal         0x803A6198
    // 0x803A68A0: nop

    func_803A6198(rdram, ctx);
        goto after_4;
    // 0x803A68A0: nop

    after_4:
    // 0x803A68A4: jal         0x803A63D0
    // 0x803A68A8: nop

    func_803A63D0(rdram, ctx);
        goto after_5;
    // 0x803A68A8: nop

    after_5:
    // 0x803A68AC: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A68B0: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x803A68B4: b           L_803A68DC
    // 0x803A68B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_803A68DC;
    // 0x803A68B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_803A68BC:
    // 0x803A68BC: jal         0x803A6374
    // 0x803A68C0: nop

    func_803A6374(rdram, ctx);
        goto after_6;
    // 0x803A68C0: nop

    after_6:
    // 0x803A68C4: jal         0x803A63D0
    // 0x803A68C8: nop

    func_803A63D0(rdram, ctx);
        goto after_7;
    // 0x803A68C8: nop

    after_7:
    // 0x803A68CC: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A68D0: lw          $v0, -0x7E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7E10);
    // 0x803A68D4: nop

    // 0x803A68D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_803A68DC:
    // 0x803A68DC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A68E0: sw          $v0, -0x7E10($at)
    MEM_W(-0X7E10, ctx->r1) = ctx->r2;
    // 0x803A68E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803A68E8: bne         $v0, $at, L_803A68F4
    if (ctx->r2 != ctx->r1) {
        // 0x803A68EC: lui         $at, 0x803B
        ctx->r1 = S32(0X803B << 16);
            goto L_803A68F4;
    }
    // 0x803A68EC: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A68F0: sw          $zero, -0x7E10($at)
    MEM_W(-0X7E10, ctx->r1) = 0;
L_803A68F4:
    // 0x803A68F4: jal         0x803A63D0
    // 0x803A68F8: nop

    func_803A63D0(rdram, ctx);
        goto after_8;
    // 0x803A68F8: nop

    after_8:
    // 0x803A68FC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A6900: jal         0x800296E0
    // 0x803A6904: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    func_800296E0(rdram, ctx);
        goto after_9;
    // 0x803A6904: addiu       $a0, $a0, 0x65E4
    ctx->r4 = ADD32(ctx->r4, 0X65E4);
    after_9:
    // 0x803A6908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A690C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A6910: jr          $ra
    // 0x803A6914: nop

    return;
    // 0x803A6914: nop

;}
RECOMP_FUNC void func_803A6918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A6918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A691C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A6920: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A6924: jal         0x803A63A4
    // 0x803A6928: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_803A63A4(rdram, ctx);
        goto after_0;
    // 0x803A6928: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A692C: lui         $a2, 0x803B
    ctx->r6 = S32(0X803B << 16);
    // 0x803A6930: addiu       $a2, $a2, -0x7D0C
    ctx->r6 = ADD32(ctx->r6, -0X7D0C);
    // 0x803A6934: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x803A6938: nop

    // 0x803A693C: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x803A6940: beq         $at, $zero, L_803A6BAC
    if (ctx->r1 == 0) {
        // 0x803A6944: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_803A6BAC;
    }
    // 0x803A6944: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803A6948: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A694C: addu        $at, $at, $t6
    gpr jr_addend_803A6958 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A6950: lw          $t6, -0x7D70($at)
    ctx->r14 = ADD32(ctx->r1, -0X7D70);
    // 0x803A6954: nop

    // 0x803A6958: jr          $t6
    // 0x803A695C: nop

    switch (jr_addend_803A6958 >> 2) {
        case 0: goto L_803A6960; break;
        case 1: goto L_803A69E4; break;
        case 2: goto L_803A697C; break;
        case 3: goto L_803A6A2C; break;
        case 4: goto L_803A69C4; break;
        case 5: goto L_803A6A04; break;
        case 6: goto L_803A6B00; break;
        case 7: goto L_803A6B60; break;
        case 8: goto L_803A6BAC; break;
        default: switch_error(__func__, 0x803A6958, 0x803A8290);
    }
    // 0x803A695C: nop

L_803A6960:
    // 0x803A6960: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A6964: jal         0x803A644C
    // 0x803A6968: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    func_803A644C(rdram, ctx);
        goto after_1;
    // 0x803A6968: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    after_1:
    // 0x803A696C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6970: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6974: b           L_803A6BAC
    // 0x803A6978: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_803A6BAC;
    // 0x803A6978: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
L_803A697C:
    // 0x803A697C: lui         $t8, 0x803B
    ctx->r24 = S32(0X803B << 16);
    // 0x803A6980: lw          $t8, -0x7CF8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X7CF8);
    // 0x803A6984: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6988: lw          $t9, 0x68($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X68);
    // 0x803A698C: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6990: beq         $t9, $zero, L_803A6BB0
    if (ctx->r25 == 0) {
        // 0x803A6994: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A6BB0;
    }
    // 0x803A6994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6998: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x803A699C: nop

    // 0x803A69A0: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x803A69A4: bne         $v0, $zero, L_803A6BAC
    if (ctx->r2 != 0) {
        // 0x803A69A8: sw          $t0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r8;
            goto L_803A6BAC;
    }
    // 0x803A69A8: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x803A69AC: jal         0x80021A14
    // 0x803A69B0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80021A14(rdram, ctx);
        goto after_2;
    // 0x803A69B0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_2:
    // 0x803A69B4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803A69B8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A69BC: b           L_803A6BAC
    // 0x803A69C0: sw          $t1, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r9;
        goto L_803A6BAC;
    // 0x803A69C0: sw          $t1, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r9;
L_803A69C4:
    // 0x803A69C4: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803A69C8: lh          $t2, -0x2FAC($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2FAC);
    // 0x803A69CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803A69D0: slti        $at, $t2, 0xFF
    ctx->r1 = SIGNED(ctx->r10) < 0XFF ? 1 : 0;
    // 0x803A69D4: bne         $at, $zero, L_803A6BB0
    if (ctx->r1 != 0) {
        // 0x803A69D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A6BB0;
    }
    // 0x803A69D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A69DC: b           L_803A6BAC
    // 0x803A69E0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_803A6BAC;
    // 0x803A69E0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
L_803A69E4:
    // 0x803A69E4: jal         0x803A64E4
    // 0x803A69E8: nop

    func_803A64E4(rdram, ctx);
        goto after_3;
    // 0x803A69E8: nop

    after_3:
    // 0x803A69EC: jal         0x80021A40
    // 0x803A69F0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80021A40(rdram, ctx);
        goto after_4;
    // 0x803A69F0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_4:
    // 0x803A69F4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803A69F8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A69FC: b           L_803A6BAC
    // 0x803A6A00: sw          $t4, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r12;
        goto L_803A6BAC;
    // 0x803A6A00: sw          $t4, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r12;
L_803A6A04:
    // 0x803A6A04: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x803A6A08: lh          $t5, -0x2FAC($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X2FAC);
    // 0x803A6A0C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6A10: bgtz        $t5, L_803A6BAC
    if (SIGNED(ctx->r13) > 0) {
        // 0x803A6A14: addiu       $a1, $a1, -0x7D08
        ctx->r5 = ADD32(ctx->r5, -0X7D08);
            goto L_803A6BAC;
    }
    // 0x803A6A14: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6A18: addiu       $t6, $zero, 0x2710
    ctx->r14 = ADD32(0, 0X2710);
    // 0x803A6A1C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803A6A20: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x803A6A24: b           L_803A6BAC
    // 0x803A6A28: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
        goto L_803A6BAC;
    // 0x803A6A28: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_803A6A2C:
    // 0x803A6A2C: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6A30: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6A34: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x803A6A38: lui         $t2, 0x803B
    ctx->r10 = S32(0X803B << 16);
    // 0x803A6A3C: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x803A6A40: beq         $v0, $zero, L_803A6A78
    if (ctx->r2 == 0) {
        // 0x803A6A44: sw          $t8, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r24;
            goto L_803A6A78;
    }
    // 0x803A6A44: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x803A6A48: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x803A6A4C: lw          $v0, -0x7D20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7D20);
    // 0x803A6A50: lui         $t0, 0x803B
    ctx->r8 = S32(0X803B << 16);
    // 0x803A6A54: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x803A6A58: bne         $t9, $zero, L_803A6A78
    if (ctx->r25 != 0) {
        // 0x803A6A5C: nop
    
            goto L_803A6A78;
    }
    // 0x803A6A5C: nop

    // 0x803A6A60: lw          $t0, -0x7CF4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7CF4);
    // 0x803A6A64: andi        $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 & 0X4000;
    // 0x803A6A68: bne         $t0, $zero, L_803A6BB0
    if (ctx->r8 != 0) {
        // 0x803A6A6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A6BB0;
    }
    // 0x803A6A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A6A70: beq         $t1, $zero, L_803A6BB0
    if (ctx->r9 == 0) {
        // 0x803A6A74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_803A6BB0;
    }
    // 0x803A6A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A6A78:
    // 0x803A6A78: lw          $t2, -0x7D20($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X7D20);
    // 0x803A6A7C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803A6A80: andi        $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 & 0X4000;
    // 0x803A6A84: beq         $t3, $zero, L_803A6AA0
    if (ctx->r11 == 0) {
        // 0x803A6A88: lui         $at, 0x803B
        ctx->r1 = S32(0X803B << 16);
            goto L_803A6AA0;
    }
    // 0x803A6A88: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6A8C: lui         $t4, 0x803B
    ctx->r12 = S32(0X803B << 16);
    // 0x803A6A90: lw          $t4, -0x7CF4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X7CF4);
    // 0x803A6A94: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6A98: b           L_803A6AAC
    // 0x803A6A9C: sw          $t4, -0x7CF0($at)
    MEM_W(-0X7CF0, ctx->r1) = ctx->r12;
        goto L_803A6AAC;
    // 0x803A6A9C: sw          $t4, -0x7CF0($at)
    MEM_W(-0X7CF0, ctx->r1) = ctx->r12;
L_803A6AA0:
    // 0x803A6AA0: sw          $t5, -0x7CF0($at)
    MEM_W(-0X7CF0, ctx->r1) = ctx->r13;
    // 0x803A6AA4: jal         0x80015B94
    // 0x803A6AA8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80015B94(rdram, ctx);
        goto after_5;
    // 0x803A6AA8: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_5:
L_803A6AAC:
    // 0x803A6AAC: jal         0x80021960
    // 0x803A6AB0: nop

    func_80021960(rdram, ctx);
        goto after_6;
    // 0x803A6AB0: nop

    after_6:
    // 0x803A6AB4: lui         $t7, 0x803B
    ctx->r15 = S32(0X803B << 16);
    // 0x803A6AB8: lw          $t7, -0x7D18($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7D18);
    // 0x803A6ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803A6AC0: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6AC4: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x803A6AC8: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6ACC: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6AD0: bne         $v0, $t7, L_803A6AF8
    if (ctx->r2 != ctx->r15) {
        // 0x803A6AD4: sw          $t6, -0x7D0C($at)
        MEM_W(-0X7D0C, ctx->r1) = ctx->r14;
            goto L_803A6AF8;
    }
    // 0x803A6AD4: sw          $t6, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r14;
    // 0x803A6AD8: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x803A6ADC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x803A6AE0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803A6AE4: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x803A6AE8: jal         0x80015BC0
    // 0x803A6AEC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_7;
    // 0x803A6AEC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x803A6AF0: b           L_803A6BB0
    // 0x803A6AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A6BB0;
    // 0x803A6AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A6AF8:
    // 0x803A6AF8: b           L_803A6BAC
    // 0x803A6AFC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_803A6BAC;
    // 0x803A6AFC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_803A6B00:
    // 0x803A6B00: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x803A6B04: lh          $t9, -0x2FAC($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2FAC);
    // 0x803A6B08: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6B0C: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x803A6B10: bne         $at, $zero, L_803A6BAC
    if (ctx->r1 != 0) {
        // 0x803A6B14: addiu       $a1, $a1, -0x7D08
        ctx->r5 = ADD32(ctx->r5, -0X7D08);
            goto L_803A6BAC;
    }
    // 0x803A6B14: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6B18: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x803A6B1C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803A6B20: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x803A6B24: bne         $v0, $zero, L_803A6BAC
    if (ctx->r2 != 0) {
        // 0x803A6B28: sw          $t0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r8;
            goto L_803A6BAC;
    }
    // 0x803A6B28: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x803A6B2C: jal         0x80020270
    // 0x803A6B30: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    func_80020270(rdram, ctx);
        goto after_8;
    // 0x803A6B30: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    after_8:
    // 0x803A6B34: jal         0x80063B94
    // 0x803A6B38: nop

    func_80063B94(rdram, ctx);
        goto after_9;
    // 0x803A6B38: nop

    after_9:
    // 0x803A6B3C: jal         0x80027B60
    // 0x803A6B40: nop

    func_80027B60(rdram, ctx);
        goto after_10;
    // 0x803A6B40: nop

    after_10:
    // 0x803A6B44: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x803A6B48: jal         0x80025A10
    // 0x803A6B4C: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    func_80025A10(rdram, ctx);
        goto after_11;
    // 0x803A6B4C: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    after_11:
    // 0x803A6B50: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x803A6B54: lui         $at, 0x803B
    ctx->r1 = S32(0X803B << 16);
    // 0x803A6B58: b           L_803A6BAC
    // 0x803A6B5C: sw          $t2, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r10;
        goto L_803A6BAC;
    // 0x803A6B5C: sw          $t2, -0x7D0C($at)
    MEM_W(-0X7D0C, ctx->r1) = ctx->r10;
L_803A6B60:
    // 0x803A6B60: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x803A6B64: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    // 0x803A6B68: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x803A6B6C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x803A6B70: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x803A6B74: bne         $v0, $zero, L_803A6BAC
    if (ctx->r2 != 0) {
        // 0x803A6B78: sw          $t3, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r11;
            goto L_803A6BAC;
    }
    // 0x803A6B78: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x803A6B7C: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x803A6B80: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x803A6B84: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x803A6B88: lui         $t5, 0x803B
    ctx->r13 = S32(0X803B << 16);
    // 0x803A6B8C: lw          $t5, -0x7D04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X7D04);
    // 0x803A6B90: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A6B94: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A6B98: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A6B9C: sb          $t5, 0x754($at)
    MEM_B(0X754, ctx->r1) = ctx->r13;
    // 0x803A6BA0: lbu         $a0, -0x7CED($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X7CED);
    // 0x803A6BA4: jal         0x80037AB8
    // 0x803A6BA8: nop

    func_80037AB8(rdram, ctx);
        goto after_12;
    // 0x803A6BA8: nop

    after_12:
L_803A6BAC:
    // 0x803A6BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A6BB0:
    // 0x803A6BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A6BB4: jr          $ra
    // 0x803A6BB8: nop

    return;
    // 0x803A6BB8: nop

    // 0x803A6BBC: nop

;}
RECOMP_FUNC void func_803A8320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A8320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A8324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A8328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A832C: jal         0x80036234
    // 0x803A8330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A8330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A8334: lui         $a0, 0x803D
    ctx->r4 = S32(0X803D << 16);
    // 0x803A8338: jal         0x80035FF0
    // 0x803A833C: addiu       $a0, $a0, 0x212C
    ctx->r4 = ADD32(ctx->r4, 0X212C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A833C: addiu       $a0, $a0, 0x212C
    ctx->r4 = ADD32(ctx->r4, 0X212C);
    after_1:
    // 0x803A8340: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x803A8344: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x803A8348: jal         0x80049E40
    // 0x803A834C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x803A834C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x803A8350: jal         0x803A85EC
    // 0x803A8354: nop

    func_803A85EC(rdram, ctx);
        goto after_3;
    // 0x803A8354: nop

    after_3:
    // 0x803A8358: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803A835C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x803A8360: jal         0x80021214
    // 0x803A8364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_4;
    // 0x803A8364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x803A8368: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x803A836C: addiu       $t6, $t6, -0x6C9C
    ctx->r14 = ADD32(ctx->r14, -0X6C9C);
    // 0x803A8370: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x803A8374: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A8378: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x803A837C: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x803A8380: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x803A8384: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x803A8388: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x803A838C: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x803A8390: jal         0x8004B078
    // 0x803A8394: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_5;
    // 0x803A8394: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_5:
    // 0x803A8398: jal         0x803A8724
    // 0x803A839C: nop

    func_803A8724(rdram, ctx);
        goto after_6;
    // 0x803A839C: nop

    after_6:
    // 0x803A83A0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A83A4: jal         0x8002AAC0
    // 0x803A83A8: addiu       $a0, $a0, -0x37F4
    ctx->r4 = ADD32(ctx->r4, -0X37F4);
    func_8002AAC0(rdram, ctx);
        goto after_7;
    // 0x803A83A8: addiu       $a0, $a0, -0x37F4
    ctx->r4 = ADD32(ctx->r4, -0X37F4);
    after_7:
    // 0x803A83AC: jal         0x803A8624
    // 0x803A83B0: nop

    func_803A8624(rdram, ctx);
        goto after_8;
    // 0x803A83B0: nop

    after_8:
    // 0x803A83B4: jal         0x803A8688
    // 0x803A83B8: nop

    func_803A8688(rdram, ctx);
        goto after_9;
    // 0x803A83B8: nop

    after_9:
    // 0x803A83BC: jal         0x8006FB58
    // 0x803A83C0: nop

    func_8006FB58(rdram, ctx);
        goto after_10;
    // 0x803A83C0: nop

    after_10:
    // 0x803A83C4: jal         0x80035A04
    // 0x803A83C8: nop

    func_80035A04(rdram, ctx);
        goto after_11;
    // 0x803A83C8: nop

    after_11:
    // 0x803A83CC: jal         0x8000AB98
    // 0x803A83D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000AB98(rdram, ctx);
        goto after_12;
    // 0x803A83D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_12:
    // 0x803A83D4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A83D8: addiu       $a0, $a0, -0x7C0C
    ctx->r4 = ADD32(ctx->r4, -0X7C0C);
    // 0x803A83DC: jal         0x8004A9B4
    // 0x803A83E0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_13;
    // 0x803A83E0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_13:
    // 0x803A83E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A83E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A83EC: jr          $ra
    // 0x803A83F0: nop

    return;
    // 0x803A83F0: nop

;}
RECOMP_FUNC void func_803A83F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A83F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A83F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A83FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A8400: jal         0x80039DB4
    // 0x803A8404: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80039DB4(rdram, ctx);
        goto after_0;
    // 0x803A8404: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A8408: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x803A840C: jal         0x800296E0
    // 0x803A8410: addiu       $a0, $a0, -0x7BDC
    ctx->r4 = ADD32(ctx->r4, -0X7BDC);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x803A8410: addiu       $a0, $a0, -0x7BDC
    ctx->r4 = ADD32(ctx->r4, -0X7BDC);
    after_1:
    // 0x803A8414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A8418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A841C: jr          $ra
    // 0x803A8420: nop

    return;
    // 0x803A8420: nop

;}
